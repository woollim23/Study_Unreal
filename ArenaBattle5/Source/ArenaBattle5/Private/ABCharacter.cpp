// Fill out your copyright notice in the Description page of Project Settings.


#include "ABCharacter.h"
#include "ABAnimInstance.h"
#include "ABWeapon.h"
#include "ABCharacterStatComponent.h"
#include "DrawDebugHelpers.h"
#include "Components/WidgetComponent.h"
#include "Engine/DamageEvents.h"
#include "ABCharacterWidget.h"
#include "ABAIController.h"
#include "ABCharacterSetting.h"
#include "ABGameInstance.h"
#include "ABPlayerController.h"
#include "ABPlayerState.h"
#include "ABHUDWidget.h"
#include "ABGameMode.h"

// Sets default values
AABCharacter::AABCharacter()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// 캐릭터를 구성하는 컴포넌트 정의
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SPRINGARM"));
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("CAMERA"));
	CharacterStat = CreateDefaultSubobject<UABCharacterStatComponent>(TEXT("CHARACTERSTAT"));
	HPBarWidget = CreateDefaultSubobject<UWidgetComponent>(TEXT("HPBARWIDGET"));

	// 부모 클래스를 보면 캡슐 컴포넌트가 있다
	// 스프링암을 캡슐컴포넌트에 부착
	SpringArm->SetupAttachment(GetCapsuleComponent());
	// 카메라는 스프링암에 부착
	Camera->SetupAttachment(SpringArm);
	HPBarWidget->SetupAttachment(GetMesh());

	// 컴포넌트들의 트랜스폼 설정
	GetMesh()->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, -88.0f), FRotator(0.0f, -90.0f, 0.0f));
	SpringArm->TargetArmLength = 400.0f;
	SpringArm->SetRelativeRotation(FRotator(-15.0f, 0.0f, 0.0f));

	// 에셋을 불러와 적용
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> SK_CARDBOARD(TEXT("/Script/Engine.SkeletalMesh'/Game/InfinityBladeWarriors/Character/CompleteCharacters/SK_CharM_Cardboard.SK_CharM_Cardboard'"));
	if (SK_CARDBOARD.Succeeded())
	{
		GetMesh()->SetSkeletalMesh(SK_CARDBOARD.Object);
	}


	// 에셋에 블루프린트 지정
	GetMesh()->SetAnimationMode(EAnimationMode::AnimationBlueprint);
	// 애님인스턴스 -> 블루프린트는 애님 그래프 로직에 따라 동작하는 캐릭터 애니메이션 시스템을 구동시키는데,
	static ConstructorHelpers::FClassFinder<UAnimInstance> WARRIOR_ANIM(TEXT("/Game/Book/Animations/WarriorAnimBlueprint.WarriorAnimBlueprint_C"));
	if (WARRIOR_ANIM.Succeeded())
	{
		GetMesh()->SetAnimInstanceClass(WARRIOR_ANIM.Class);
	}

	// 무기 컴포넌트 생성 후 부착
	FName WeaponSocket(TEXT("hand_rSocket")); // 무기 소켓 파츠 찾음 -> 오른손
	if (GetMesh()->DoesSocketExist(WeaponSocket))
	{
		// 무기의 스태틱메쉬컴포넌트를 만듦
		Weapon = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("WEAPON"));
		static ConstructorHelpers::FObjectFinder<USkeletalMesh> SK_WEAPON(TEXT("/Script/Engine.SkeletalMesh'/Game/InfinityBladeWeapons/Weapons/Blade/Swords/Blade_BlackKnight/SK_Blade_BlackKnight.SK_Blade_BlackKnight'"));
		if (SK_WEAPON.Succeeded())
		{
			// 만든 무기 스태틱 메쉬 컴포넌트에 파일 경로에 있던 무기 오브젝트 연결
			Weapon->SetSkeletalMesh(SK_WEAPON.Object);
		}

		// 무기를 무기 소켓파츠(오른손)에 부착
		Weapon->SetupAttachment(GetMesh(), WeaponSocket);
	}

	// 초기 조작 모드를 디아블로
	SetControlMode(EControlMode::DIABLO);

	ArmLengthSpeed = 3.0f;
	ArmRotationSpeed = 10.0f;
	// 점프 높이를 800으로 변경
	GetCharacterMovement()->JumpZVelocity = 800.0f;

	// 공격 중인지 확인 하는 부울 false로 초기화
	IsAttacking = false;

	// 콤보 카운터의 최대치 = 4
	MaxCombo = 4;
	AttackEndComboState();

	// 프로젝트 세팅에서 만든 ABCharacter 콜리전 세팅을 기본값으로 설정
	GetCapsuleComponent()->SetCollisionProfileName(TEXT("ABCharacter"));

	//공격 캡슐 범위 초기화
	AttackRange = 80.0f;
	AttackRadius = 50.0f;

	// HP바 위치 조정
	HPBarWidget->SetRelativeLocation(FVector(0.0f, 0.0f, 180.0f));
	// world 3D, screen 2D 스크린은 항상 잘리지 않고 보인다
	HPBarWidget->SetWidgetSpace(EWidgetSpace::Screen);
	static ConstructorHelpers::FClassFinder<UUserWidget> UI_HUD(TEXT("/Game/Book/UI/UI_HPBar.UI_HPBar_C"));
	if (UI_HUD.Succeeded())
	{
		HPBarWidget->SetWidgetClass(UI_HUD.Class);
		HPBarWidget->SetDrawSize(FVector2D(150.0f, 50.0f));
	}

	// ABCharacter가 이를 기본적으로 사용하도록, 클래스 속성을 AABAIController 로 정함
	AIControllerClass = AABAIController::StaticClass();
	// AI 생성옵션을 PlacedInWorldOrSpawned 으로 설정
	// 월드에 배치되었거나 스폰 되었을때 자동으로 불러와짐
	AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;

	auto DefaultSetting = GetDefault<UABCharacterSetting>();
	if (DefaultSetting->CharacterAssets.Num() > 0)
	{
		for (auto CharacterAsset : DefaultSetting->CharacterAssets)
		{
			//ABLOG(Warning, TEXT("Character Asset : %s"), *CharacterAsset.ToString());
		}
	}

	AssetIndex = 4;

	SetActorHiddenInGame(true);
	HPBarWidget->SetHiddenInGame(true);
	SetCanBeDamaged(false);

	DeadTimer = 5.0f;
}

// Called when the game starts or when spawned
void AABCharacter::BeginPlay()
{
	Super::BeginPlay();
	
	bIsPlayer = IsPlayerControlled();
	if (bIsPlayer)
	{
		ABPlayerController = Cast<AABPlayerController>(GetController());
		ABCHECK(nullptr != ABPlayerController);
	}
	else
	{
		ABAIController = Cast<AABAIController>(GetController());
		ABCHECK(nullptr != ABAIController);
	}

	auto DefaultSetting = GetDefault<UABCharacterSetting>();

	if (bIsPlayer)
	{
		auto ABPlayerState = Cast<AABPlayerState>(GetPlayerState());
		ABCHECK(nullptr != ABPlayerState);
		AssetIndex = ABPlayerState->GetCharacterIndex();
	}
	else
	{
		// NPC는 랜덤으로 캐릭터 에셋을 가져온다
		AssetIndex = FMath::RandRange(0, DefaultSetting->CharacterAssets.Num() - 1);
	}

	CharacterAssetToLoad = DefaultSetting->CharacterAssets[AssetIndex];
	auto ABGameInstance = Cast<UABGameInstance>(GetGameInstance());
	ABCHECK(nullptr != ABGameInstance);
	AssetStreamingHandle = ABGameInstance->StreamableManager.RequestAsyncLoad(CharacterAssetToLoad, FStreamableDelegate::CreateUObject(this, &AABCharacter::OnAssetLoadCompleted));
	SetCharacterState(ECharacterState::LOADING);
	
}

void AABCharacter::SetCharacterState(ECharacterState NewState)
{
	ABCHECK(CurrentState != NewState);
	CurrentState = NewState;

	switch (CurrentState)
	{
	case ECharacterState::LOADING:
	{
		if (bIsPlayer)
		{
			DisableInput(ABPlayerController);

			ABPlayerController->GetHUDWidget()->BindCharacterStat(CharacterStat);

			auto ABPlayerState = Cast<AABPlayerState>(GetPlayerState());
			ABCHECK(nullptr != ABPlayerState);
			CharacterStat->SetNewLevel(ABPlayerState->GetCharacterLevel());
		}
		else
		{
			auto ABGameMode = Cast<AABGameMode>(GetWorld()->GetAuthGameMode());
			ABCHECK(nullptr != ABGameMode);
			int32 TargetLevel = FMath::CeilToInt(((float)ABGameMode->GetScore() * 0.8f));
			int32 FinalLevel = FMath::Clamp<int32>(TargetLevel, 1, 20);
			ABLOG(Warning, TEXT("New NPC Level : %d"), FinalLevel);
			CharacterStat->SetNewLevel(FinalLevel);
		}
		SetActorHiddenInGame(true);
		HPBarWidget->SetHiddenInGame(true);
		SetCanBeDamaged(false);
		break;
	}
	case ECharacterState::READY:
	{
		SetActorHiddenInGame(false);
		HPBarWidget->SetHiddenInGame(false);
		SetCanBeDamaged(true);
	
		CharacterStat->OnHPIsZero.AddLambda([this]() -> void {
			SetCharacterState(ECharacterState::DEAD);
			});

		auto CharacterWidget = Cast<UABCharacterWidget>(HPBarWidget->GetUserWidgetObject());
		ABCHECK(nullptr != CharacterWidget);
		CharacterWidget->BindCharacterStat(CharacterStat);

		if (bIsPlayer)
		{
			SetControlMode(EControlMode::DIABLO);
			GetCharacterMovement()->MaxWalkSpeed = 600.0f;
			EnableInput(ABPlayerController);
		}
		else
		{
			SetControlMode(EControlMode::NPC);
			GetCharacterMovement()->MaxWalkSpeed = 400.0f;
			ABAIController->RunAI();
		}

		break;
	}
	case ECharacterState::DEAD:
	{
		SetActorEnableCollision(false);
		GetMesh()->SetHiddenInGame(false);
		HPBarWidget->SetHiddenInGame(true);
		ABAnim->SetDeadAnim();
		SetCanBeDamaged(false);
		if (bIsPlayer)
		{
			ABPlayerController->ShowResultUI();
		}
		else
		{
			ABAIController->StopAI();
		}

		GetWorld()->GetTimerManager().SetTimer(DeadTimerHandle, FTimerDelegate::CreateLambda([this]() -> void {
			if (bIsPlayer)
			{
				ABPlayerController->RestartLevel();
			}
			else
			{
				Destroy();
			}
			}), DeadTimer, false);

		break;
	}
}
}

ECharacterState AABCharacter::GetCharacterState() const
{
	return CurrentState;
}

int32 AABCharacter::GetExp() const
{
	return CharacterStat->GetDropExp();
}

float AABCharacter::GetFinalAttackRange() const
{
	return (nullptr != CurrentWeapon) ? CurrentWeapon->GetAttackRange() : AttackRange;
}

float AABCharacter::GetFinalAttackDamage() const
{
	float AttackDamage = (nullptr != CurrentWeapon) ? (CharacterStat->GetAttack() + CurrentWeapon->GetAttackDamage()) : CharacterStat->GetAttack();
	float AttackModifier = (nullptr != CurrentWeapon) ? CurrentWeapon->GetAttackModifier() : 1.0f;

	return AttackDamage*AttackModifier;
}

void AABCharacter::OnAssetLoadCompleted()
{
	USkeletalMesh* AssetLoaded = Cast<USkeletalMesh>(AssetStreamingHandle->GetLoadedAsset());
	AssetStreamingHandle.Reset();
	ABCHECK(nullptr != AssetLoaded);
	GetMesh()->SetSkeletalMesh(AssetLoaded);

	SetCharacterState(ECharacterState::READY);
	
}

// 무기장착 할 수 있는지 확인
bool AABCharacter::CanSetWeapon()
{
	return true;
}

void AABCharacter::SetWeapon(AABWeapon* NewWeapon)
{
	ABCHECK(nullptr != NewWeapon);

	if (nullptr != CurrentWeapon)
	{
		CurrentWeapon->DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
		CurrentWeapon->Destroy();
		CurrentWeapon = nullptr;
	}
	FName WeaponSocket(TEXT("hand_rSocket"));
	if (nullptr != NewWeapon)
	{
		NewWeapon->AttachToComponent(GetMesh(), FAttachmentTransformRules::SnapToTargetNotIncludingScale, WeaponSocket);
		NewWeapon->SetOwner(this);
		CurrentWeapon = NewWeapon;
	}
}

void AABCharacter::SetControlMode(EControlMode NewControlMode)
{
	// 새 컨트롤 모드에 맞게 모드 설정값 변경
	CurrentControlMode = NewControlMode;

	switch (CurrentControlMode)
	{
	case EControlMode::GTA:
		// 캐릭터는 회전하지 않고 캐릭터를 기준으로 카메라가 회전
		// 카메라 방향으로 캐릭터가 회전해서 이동
		// 카메라 지지대 길이 450cm
		// SpringArm->TargetArmLength = 450.0f;
		// SpringArm->SetRelativeRotation(FRotator::ZeroRotator);
		ArmLengthTo = 450.0f;
		SpringArm->bUsePawnControlRotation = true;
		SpringArm->bInheritPitch = true;
		SpringArm->bInheritRoll = true;
		SpringArm->bInheritYaw = true;
		SpringArm->bDoCollisionTest = true;
		bUseControllerRotationYaw = false;
		GetCharacterMovement()->bOrientRotationToMovement = true;
		GetCharacterMovement()->bUseControllerDesiredRotation = false;
		GetCharacterMovement()->RotationRate = FRotator(0.0f, 720.0f, 0.0f);
		break;
	case EControlMode::DIABLO:
		// 카메라 길이 800, 45도에서 시점 고정
		// 마우스 입력 전부 해제(키보드 입력만 받음)
		// SpringArm->TargetArmLength = 800.0f;
		// SpringArm->SetRelativeRotation(FRotator(-45.0f, 0.0f, 0.0f));
		ArmLengthTo = 800.0f;
		ArmRotationTo = FRotator(-45.0f, 0.0f, 0.0f);
		SpringArm->bUsePawnControlRotation = false;
		SpringArm->bInheritPitch = false;
		SpringArm->bInheritRoll = false;
		SpringArm->bInheritYaw = false;
		SpringArm->bDoCollisionTest = false;
		// 회전 끊김 방지 => 속성 해제 후 회전 보완 코드 작성
		// bOrientRotationToMovement 로 대체됨(UE4.26이상)
		bUseControllerRotationYaw = false;
		// 캐릭터 자동 회전 (키보드로 캐릭터 회전시키므로 해제)
		GetCharacterMovement()->bOrientRotationToMovement = false;
		// 컨트롤 회전이 가리키는 방향으로 캐릭터 회전
		GetCharacterMovement()->bUseControllerDesiredRotation = true;
		// 캐릭터가 부드럽게 회전하도록 보완 (회전 속도 지정)
		GetCharacterMovement()->RotationRate = FRotator(0.0f, 720.0f, 0.0f);
		break;
	case EControlMode::NPC:
		bUseControllerRotationYaw = false;
		GetCharacterMovement()->bUseControllerDesiredRotation = false;
		GetCharacterMovement()->bOrientRotationToMovement = true;
		GetCharacterMovement()->RotationRate = FRotator(0.0f, 480.0f, 0.0f);
		break;
	}
}

// Called every frame
void AABCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	SpringArm->TargetArmLength = FMath::FInterpTo(SpringArm->TargetArmLength, ArmLengthTo, DeltaTime, ArmLengthSpeed);

	switch (CurrentControlMode)
	{
	case EControlMode::DIABLO:
		// SpringArm의 길이와 회전값이 목표 지점까지 변경
		// 변경 속도: ArmRotationSpeed
		SpringArm->GetRelativeRotation() = FMath::RInterpTo(SpringArm->GetRelativeRotation(), ArmRotationTo, DeltaTime, ArmRotationSpeed);
		break;
	}

	switch (CurrentControlMode)
	{
	case EControlMode::DIABLO:
		if (DirectionToMove.SizeSquared() > 0.0f)
		{
			GetController()->SetControlRotation(FRotationMatrix::MakeFromX(DirectionToMove).Rotator());
			AddMovementInput(DirectionToMove);
		}
		break;
	}

}

void AABCharacter::PostInitializeComponents()
{
	Super::PostInitializeComponents();
	// 애님 인스턴스 불러옴
	ABAnim = Cast<UABAnimInstance>(GetMesh()->GetAnimInstance());
	ABCHECK(nullptr != ABAnim);

	// OnMontageEnded 델리게이트와 OnAttackMontageEnded를 연결해, 델리게이트가 발동할 때까지 애니메이션 시스템에
	// 몽타주 재생 명령을 내리지 못하게 폰 로직에서 막아줌
	// 공격상태 초기화
	ABAnim->OnMontageEnded.AddDynamic(this, &AABCharacter::OnAttackMontageEnded);

	// 람다식 구문을 이용
	// 다음 공격 타이밍전까지 공격 명령이 들어오면 NextAttackCheck 타이밍에 다음 콤보 공격을 시작
	ABAnim->OnNextAttackCheck.AddLambda([this]() -> void {
		ABLOG(Warning, TEXT("OnNextAttackCheck"));
		CanNextCombo = false;

		if (IsComboInputOn)
		{
			AttackStartComboState();
			ABAnim->JumpToAttackMontageSection(CurrentCombo);
		}
	});


	// 어택 체크 오브젝트 추가
	ABAnim->OnAttackHitCheck.AddUObject(this, &AABCharacter::AttackCheck);
}


// Called to bind functionality to input
void AABCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// 버튼을 누른 직후 ViewChange함수 호출
	PlayerInputComponent->BindAction(TEXT("ViewChange"), EInputEvent::IE_Pressed, this, &AABCharacter::ViewChange);
	// 스페이스 버튼 누른 직후 점프 함수 호출
	PlayerInputComponent->BindAction(TEXT("Jump"), EInputEvent::IE_Pressed, this, &ACharacter::Jump);
	// 왼쪽 마우스 버튼 클릭 후 Attack()함수 호출
	PlayerInputComponent->BindAction(TEXT("Attack"), EInputEvent::IE_Pressed, this, &AABCharacter::Attack);

	// 언리얼은 InputComponent를 사용해 입력 설정을 연결 시키면,
	// 입력 신호는 자동으로 캐릭터의 멤버 함수의 인자로 전달 됨
	PlayerInputComponent->BindAxis(TEXT("UpDown"), this, &AABCharacter::UpDown);
	PlayerInputComponent->BindAxis(TEXT("LeftRight"), this, &AABCharacter::LeftRight);
	PlayerInputComponent->BindAxis(TEXT("LookUp"), this, &AABCharacter::LookUp);
	PlayerInputComponent->BindAxis(TEXT("Turn"), this, &AABCharacter::Turn);
}

void AABCharacter::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);

	if (IsPlayerControlled())
	{
		SetControlMode(EControlMode::DIABLO);
		GetCharacterMovement()->MaxWalkSpeed = 600.0f;
	}
	else
	{
		SetControlMode(EControlMode::NPC);
		GetCharacterMovement()->MaxWalkSpeed = 300.0f;
	}
}

void AABCharacter::UpDown(float NewAxisValue)
{
	// 함수 AddMovementInput() -> -1 ~ 1 사이의 입력 값을 폰 무브먼트 컴포넌트에 전달 해, 캐릭터를 움직이게 함
	// 함수 GetActorForwardVector() 전진 후진 입력 값 받음
	//AddMovementInput(GetActorForwardVector(), NewAxisValue);

	switch (CurrentControlMode)
	{
	case EControlMode::GTA:
		// 회전 값으로부터 시선 방향(X)의 벡터값 가져옴
		AddMovementInput(FRotationMatrix(FRotator(0.0f, GetControlRotation().Yaw, 0.0f)).GetUnitAxis(EAxis::X), NewAxisValue);
		break;
	case EControlMode::DIABLO:
		DirectionToMove.X = NewAxisValue;
		break;
	}
}

void AABCharacter::LeftRight(float NewAxisValue)
{
	// 함수 GetActorRightVector() 왼쪽 오른쪽 입력 값 받음
	//AddMovementInput(GetActorRightVector(), NewAxisValue);
	
	switch (CurrentControlMode)
	{
	case EControlMode::GTA:
		// 회전 값으로부터 우측 방향(Y)의 벡터값 가져옴
		AddMovementInput(FRotationMatrix(FRotator(0.0f, GetControlRotation().Yaw, 0.0f)).GetUnitAxis(EAxis::Y), NewAxisValue);
		break;
	case EControlMode::DIABLO:
		DirectionToMove.Y = NewAxisValue;
		break;
	}
}

void AABCharacter::LookUp(float NewAxisValue)
{

	switch (CurrentControlMode)
	{
	case EControlMode::GTA:
		// 캐릭터 z축 회전 값 받음
		AddControllerPitchInput(NewAxisValue);
		break;
	}
}

void AABCharacter::Turn(float NewAxisValue)
{
	switch (CurrentControlMode)
	{
	case EControlMode::GTA:
		// 캐릭터 y축 회전 값 받음
		AddControllerYawInput(NewAxisValue);
		break;
	}
}

// GTA <-> DIABLO 시점 변경 함수
void AABCharacter::ViewChange()
{
	switch (CurrentControlMode)
	{
	case EControlMode::GTA:
		// 시점 변경이 자연스럽도록 회전 값 미리 부여
		// GTA->DIABLO이므로 캐릭터의 회전값 지정
		GetController()->SetControlRotation(GetActorRotation());
		SetControlMode(EControlMode::DIABLO);
		break;
	case EControlMode::DIABLO:
		// DIABLO->GTA이므로 SpringArm 회전값 지정
		// UE4.24이상부터 RelativeRotation->GetRelativeRotation()으로 변경
		GetController()->SetControlRotation(SpringArm->GetRelativeRotation());
		SetControlMode(EControlMode::GTA);
		break;
	}
}

// 어택 함수 정의문
void AABCharacter::Attack()
{
	// 다음 공격 타이밍전까지 공격 명령이 들어오면 NextAttackCheck 타이밍에 다음 콤보 공격을 시작
	if (IsAttacking)
	{
		ABCHECK(FMath::IsWithinInclusive<int32>(CurrentCombo, 1, MaxCombo));
		if (CanNextCombo)
		{
			IsComboInputOn = true;
		}
	}
	else
	{
		ABCHECK(CurrentCombo == 0);
		AttackStartComboState();
		ABAnim->PlayAttackMontage();
		ABAnim->JumpToAttackMontageSection(CurrentCombo);
		IsAttacking = true;
	}
}

// 어택이 끝났을 때 호출
void AABCharacter::OnAttackMontageEnded(UAnimMontage* Montage, bool bInterrupted)
{
	ABCHECK(IsAttacking);
	ABCHECK(CurrentCombo > 0);
	IsAttacking = false;
	AttackEndComboState();

	// 공격이 끝났음을 알리는 델리게이트
	OnAttackEnd.Broadcast();
}

// 공격이 시작할 때 관련 속성 지정하는 함수 정의
void AABCharacter::AttackStartComboState()
{
	// 다음 콤보 가능
	CanNextCombo = true;
	// 콤보 입력 안됨
	IsComboInputOn = false;
	// FMath - > 값을 받아 최소치와 최대치로 정의된 특정 범위로 제한 시키는 것
	// CurrentCombo를  0 ~ MaxCombo - 1 사이로 제한
	ABCHECK(FMath::IsWithinInclusive<int32>(CurrentCombo, 0, MaxCombo - 1));
	CurrentCombo = FMath::Clamp<int32>(CurrentCombo + 1, 1, MaxCombo);
}

// 공격이 종료할 때 사용할 함수
void AABCharacter::AttackEndComboState()
{
	IsComboInputOn = false;
	CanNextCombo = false;
	CurrentCombo = 0;
}

// 가상함수로 오버라이드 한 TakeDamage 함수에 액터가 받는 대미지를 처리하는 로직 추가
float AABCharacter::TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, AActor* DamageCauser)
{
	float FinalDamage = Super::TakeDamage(DamageAmount, DamageEvent, EventInstigator, DamageCauser);
	ABLOG(Warning, TEXT("Actor : %s took Damage : %f"), *GetName(), FinalDamage);

	CharacterStat->SetDamage(FinalDamage);
	if (CurrentState == ECharacterState::DEAD)
	{
		if (EventInstigator->IsPlayerController())
		{
			auto PlayerController = Cast<AABPlayerController>(EventInstigator);
			ABCHECK(nullptr != PlayerController, 0.0f);
			PlayerController->NPCKill(this);
		}
	}
	return FinalDamage;
}

// 어택 충돌 탐색 함수
// 공격시 어택 범위 도형 그림
// 공격 성공시 녹색, 실패시 빨강 
void AABCharacter::AttackCheck()
{
	float FinalAttackRange = GetFinalAttackRange();

	FHitResult HitResult;
	FCollisionQueryParams Params(NAME_None, false, this);

	// 공격 체크한 후 불리언값으로 받음
	// 채널을 이용하여 범위 내를 휩쓸어 보겠다(체크하겠다)
	bool bResult = GetWorld()->SweepSingleByChannel(
		HitResult, // 결과물 받아줌
		GetActorLocation(), // 탐색 시작 위치
		GetActorLocation() + GetActorForwardVector() * FinalAttackRange, // 탐색 종료 위치
		FQuat::Identity, // 피격판정 할 도형의 회전 값
		ECollisionChannel::ECC_GameTraceChannel2, // 충돌 탐지할때 사용할 채널정보
		FCollisionShape::MakeSphere(AttackRadius), // 어떤 형태로 탐색할지
		Params);

	// 디버그 할때 유용, 공격 판정이 제대로 되고 있는지 육안으로 확인
#if ENABLE_DRAW_DEBUG
	FVector TraceVec = GetActorForwardVector() * FinalAttackRange; // 공격범위
	FVector Center = GetActorLocation() + TraceVec * 0.5f; // 캡슐의 중앙 위치
	float HalfHeight = FinalAttackRange * 0.5f + AttackRadius;
	FQuat CapsuleRot = FRotationMatrix::MakeFromZ(TraceVec).ToQuat(); // 회전 값
	FColor DrawColor = bResult ? FColor::Green : FColor::Red;
	float DebugLifeTime = 5.0f;

	// 위에서 설정한 값 넣어줌
	DrawDebugCapsule(GetWorld(),
		Center,
		HalfHeight,
		AttackRadius,
		CapsuleRot,
		DrawColor,
		false,
		DebugLifeTime);

#endif
	if (bResult)
	{
		if (HitResult.HasValidHitObjectHandle())
		{
			ABLOG(Warning, TEXT("Hit Actor Name : %s"), *HitResult.ToString());

			// 히트 이벤트로 액터에 공격 대미지 전달
			// 주로 피격받는 쪽에서 대미지 처리하는게 편하다
			FDamageEvent DamageEvent;
			HitResult.GetActor()->TakeDamage(GetFinalAttackDamage(), DamageEvent, GetController(), this);
		}
	}
}