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

	// ĳ���͸� �����ϴ� ������Ʈ ����
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SPRINGARM"));
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("CAMERA"));
	CharacterStat = CreateDefaultSubobject<UABCharacterStatComponent>(TEXT("CHARACTERSTAT"));
	HPBarWidget = CreateDefaultSubobject<UWidgetComponent>(TEXT("HPBARWIDGET"));

	// �θ� Ŭ������ ���� ĸ�� ������Ʈ�� �ִ�
	// ���������� ĸ��������Ʈ�� ����
	SpringArm->SetupAttachment(GetCapsuleComponent());
	// ī�޶�� �������Ͽ� ����
	Camera->SetupAttachment(SpringArm);
	HPBarWidget->SetupAttachment(GetMesh());

	// ������Ʈ���� Ʈ������ ����
	GetMesh()->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, -88.0f), FRotator(0.0f, -90.0f, 0.0f));
	SpringArm->TargetArmLength = 400.0f;
	SpringArm->SetRelativeRotation(FRotator(-15.0f, 0.0f, 0.0f));

	// ������ �ҷ��� ����
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> SK_CARDBOARD(TEXT("/Script/Engine.SkeletalMesh'/Game/InfinityBladeWarriors/Character/CompleteCharacters/SK_CharM_Cardboard.SK_CharM_Cardboard'"));
	if (SK_CARDBOARD.Succeeded())
	{
		GetMesh()->SetSkeletalMesh(SK_CARDBOARD.Object);
	}


	// ���¿� �������Ʈ ����
	GetMesh()->SetAnimationMode(EAnimationMode::AnimationBlueprint);
	// �ִ��ν��Ͻ� -> �������Ʈ�� �ִ� �׷��� ������ ���� �����ϴ� ĳ���� �ִϸ��̼� �ý����� ������Ű�µ�,
	static ConstructorHelpers::FClassFinder<UAnimInstance> WARRIOR_ANIM(TEXT("/Game/Book/Animations/WarriorAnimBlueprint.WarriorAnimBlueprint_C"));
	if (WARRIOR_ANIM.Succeeded())
	{
		GetMesh()->SetAnimInstanceClass(WARRIOR_ANIM.Class);
	}

	// ���� ������Ʈ ���� �� ����
	FName WeaponSocket(TEXT("hand_rSocket")); // ���� ���� ���� ã�� -> ������
	if (GetMesh()->DoesSocketExist(WeaponSocket))
	{
		// ������ ����ƽ�޽�������Ʈ�� ����
		Weapon = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("WEAPON"));
		static ConstructorHelpers::FObjectFinder<USkeletalMesh> SK_WEAPON(TEXT("/Script/Engine.SkeletalMesh'/Game/InfinityBladeWeapons/Weapons/Blade/Swords/Blade_BlackKnight/SK_Blade_BlackKnight.SK_Blade_BlackKnight'"));
		if (SK_WEAPON.Succeeded())
		{
			// ���� ���� ����ƽ �޽� ������Ʈ�� ���� ��ο� �ִ� ���� ������Ʈ ����
			Weapon->SetSkeletalMesh(SK_WEAPON.Object);
		}

		// ���⸦ ���� ��������(������)�� ����
		Weapon->SetupAttachment(GetMesh(), WeaponSocket);
	}

	// �ʱ� ���� ��带 ��ƺ��
	SetControlMode(EControlMode::DIABLO);

	ArmLengthSpeed = 3.0f;
	ArmRotationSpeed = 10.0f;
	// ���� ���̸� 800���� ����
	GetCharacterMovement()->JumpZVelocity = 800.0f;

	// ���� ������ Ȯ�� �ϴ� �ο� false�� �ʱ�ȭ
	IsAttacking = false;

	// �޺� ī������ �ִ�ġ = 4
	MaxCombo = 4;
	AttackEndComboState();

	// ������Ʈ ���ÿ��� ���� ABCharacter �ݸ��� ������ �⺻������ ����
	GetCapsuleComponent()->SetCollisionProfileName(TEXT("ABCharacter"));

	//���� ĸ�� ���� �ʱ�ȭ
	AttackRange = 80.0f;
	AttackRadius = 50.0f;

	// HP�� ��ġ ����
	HPBarWidget->SetRelativeLocation(FVector(0.0f, 0.0f, 180.0f));
	// world 3D, screen 2D ��ũ���� �׻� �߸��� �ʰ� ���δ�
	HPBarWidget->SetWidgetSpace(EWidgetSpace::Screen);
	static ConstructorHelpers::FClassFinder<UUserWidget> UI_HUD(TEXT("/Game/Book/UI/UI_HPBar.UI_HPBar_C"));
	if (UI_HUD.Succeeded())
	{
		HPBarWidget->SetWidgetClass(UI_HUD.Class);
		HPBarWidget->SetDrawSize(FVector2D(150.0f, 50.0f));
	}

	// ABCharacter�� �̸� �⺻������ ����ϵ���, Ŭ���� �Ӽ��� AABAIController �� ����
	AIControllerClass = AABAIController::StaticClass();
	// AI �����ɼ��� PlacedInWorldOrSpawned ���� ����
	// ���忡 ��ġ�Ǿ��ų� ���� �Ǿ����� �ڵ����� �ҷ�����
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
		// NPC�� �������� ĳ���� ������ �����´�
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

// �������� �� �� �ִ��� Ȯ��
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
	// �� ��Ʈ�� ��忡 �°� ��� ������ ����
	CurrentControlMode = NewControlMode;

	switch (CurrentControlMode)
	{
	case EControlMode::GTA:
		// ĳ���ʹ� ȸ������ �ʰ� ĳ���͸� �������� ī�޶� ȸ��
		// ī�޶� �������� ĳ���Ͱ� ȸ���ؼ� �̵�
		// ī�޶� ������ ���� 450cm
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
		// ī�޶� ���� 800, 45������ ���� ����
		// ���콺 �Է� ���� ����(Ű���� �Է¸� ����)
		// SpringArm->TargetArmLength = 800.0f;
		// SpringArm->SetRelativeRotation(FRotator(-45.0f, 0.0f, 0.0f));
		ArmLengthTo = 800.0f;
		ArmRotationTo = FRotator(-45.0f, 0.0f, 0.0f);
		SpringArm->bUsePawnControlRotation = false;
		SpringArm->bInheritPitch = false;
		SpringArm->bInheritRoll = false;
		SpringArm->bInheritYaw = false;
		SpringArm->bDoCollisionTest = false;
		// ȸ�� ���� ���� => �Ӽ� ���� �� ȸ�� ���� �ڵ� �ۼ�
		// bOrientRotationToMovement �� ��ü��(UE4.26�̻�)
		bUseControllerRotationYaw = false;
		// ĳ���� �ڵ� ȸ�� (Ű����� ĳ���� ȸ����Ű�Ƿ� ����)
		GetCharacterMovement()->bOrientRotationToMovement = false;
		// ��Ʈ�� ȸ���� ����Ű�� �������� ĳ���� ȸ��
		GetCharacterMovement()->bUseControllerDesiredRotation = true;
		// ĳ���Ͱ� �ε巴�� ȸ���ϵ��� ���� (ȸ�� �ӵ� ����)
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
		// SpringArm�� ���̿� ȸ������ ��ǥ �������� ����
		// ���� �ӵ�: ArmRotationSpeed
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
	// �ִ� �ν��Ͻ� �ҷ���
	ABAnim = Cast<UABAnimInstance>(GetMesh()->GetAnimInstance());
	ABCHECK(nullptr != ABAnim);

	// OnMontageEnded ��������Ʈ�� OnAttackMontageEnded�� ������, ��������Ʈ�� �ߵ��� ������ �ִϸ��̼� �ý��ۿ�
	// ��Ÿ�� ��� ����� ������ ���ϰ� �� �������� ������
	// ���ݻ��� �ʱ�ȭ
	ABAnim->OnMontageEnded.AddDynamic(this, &AABCharacter::OnAttackMontageEnded);

	// ���ٽ� ������ �̿�
	// ���� ���� Ÿ�̹������� ���� ����� ������ NextAttackCheck Ÿ�ֿ̹� ���� �޺� ������ ����
	ABAnim->OnNextAttackCheck.AddLambda([this]() -> void {
		ABLOG(Warning, TEXT("OnNextAttackCheck"));
		CanNextCombo = false;

		if (IsComboInputOn)
		{
			AttackStartComboState();
			ABAnim->JumpToAttackMontageSection(CurrentCombo);
		}
	});


	// ���� üũ ������Ʈ �߰�
	ABAnim->OnAttackHitCheck.AddUObject(this, &AABCharacter::AttackCheck);
}


// Called to bind functionality to input
void AABCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// ��ư�� ���� ���� ViewChange�Լ� ȣ��
	PlayerInputComponent->BindAction(TEXT("ViewChange"), EInputEvent::IE_Pressed, this, &AABCharacter::ViewChange);
	// �����̽� ��ư ���� ���� ���� �Լ� ȣ��
	PlayerInputComponent->BindAction(TEXT("Jump"), EInputEvent::IE_Pressed, this, &ACharacter::Jump);
	// ���� ���콺 ��ư Ŭ�� �� Attack()�Լ� ȣ��
	PlayerInputComponent->BindAction(TEXT("Attack"), EInputEvent::IE_Pressed, this, &AABCharacter::Attack);

	// �𸮾��� InputComponent�� ����� �Է� ������ ���� ��Ű��,
	// �Է� ��ȣ�� �ڵ����� ĳ������ ��� �Լ��� ���ڷ� ���� ��
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
	// �Լ� AddMovementInput() -> -1 ~ 1 ������ �Է� ���� �� �����Ʈ ������Ʈ�� ���� ��, ĳ���͸� �����̰� ��
	// �Լ� GetActorForwardVector() ���� ���� �Է� �� ����
	//AddMovementInput(GetActorForwardVector(), NewAxisValue);

	switch (CurrentControlMode)
	{
	case EControlMode::GTA:
		// ȸ�� �����κ��� �ü� ����(X)�� ���Ͱ� ������
		AddMovementInput(FRotationMatrix(FRotator(0.0f, GetControlRotation().Yaw, 0.0f)).GetUnitAxis(EAxis::X), NewAxisValue);
		break;
	case EControlMode::DIABLO:
		DirectionToMove.X = NewAxisValue;
		break;
	}
}

void AABCharacter::LeftRight(float NewAxisValue)
{
	// �Լ� GetActorRightVector() ���� ������ �Է� �� ����
	//AddMovementInput(GetActorRightVector(), NewAxisValue);
	
	switch (CurrentControlMode)
	{
	case EControlMode::GTA:
		// ȸ�� �����κ��� ���� ����(Y)�� ���Ͱ� ������
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
		// ĳ���� z�� ȸ�� �� ����
		AddControllerPitchInput(NewAxisValue);
		break;
	}
}

void AABCharacter::Turn(float NewAxisValue)
{
	switch (CurrentControlMode)
	{
	case EControlMode::GTA:
		// ĳ���� y�� ȸ�� �� ����
		AddControllerYawInput(NewAxisValue);
		break;
	}
}

// GTA <-> DIABLO ���� ���� �Լ�
void AABCharacter::ViewChange()
{
	switch (CurrentControlMode)
	{
	case EControlMode::GTA:
		// ���� ������ �ڿ��������� ȸ�� �� �̸� �ο�
		// GTA->DIABLO�̹Ƿ� ĳ������ ȸ���� ����
		GetController()->SetControlRotation(GetActorRotation());
		SetControlMode(EControlMode::DIABLO);
		break;
	case EControlMode::DIABLO:
		// DIABLO->GTA�̹Ƿ� SpringArm ȸ���� ����
		// UE4.24�̻���� RelativeRotation->GetRelativeRotation()���� ����
		GetController()->SetControlRotation(SpringArm->GetRelativeRotation());
		SetControlMode(EControlMode::GTA);
		break;
	}
}

// ���� �Լ� ���ǹ�
void AABCharacter::Attack()
{
	// ���� ���� Ÿ�̹������� ���� ����� ������ NextAttackCheck Ÿ�ֿ̹� ���� �޺� ������ ����
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

// ������ ������ �� ȣ��
void AABCharacter::OnAttackMontageEnded(UAnimMontage* Montage, bool bInterrupted)
{
	ABCHECK(IsAttacking);
	ABCHECK(CurrentCombo > 0);
	IsAttacking = false;
	AttackEndComboState();

	// ������ �������� �˸��� ��������Ʈ
	OnAttackEnd.Broadcast();
}

// ������ ������ �� ���� �Ӽ� �����ϴ� �Լ� ����
void AABCharacter::AttackStartComboState()
{
	// ���� �޺� ����
	CanNextCombo = true;
	// �޺� �Է� �ȵ�
	IsComboInputOn = false;
	// FMath - > ���� �޾� �ּ�ġ�� �ִ�ġ�� ���ǵ� Ư�� ������ ���� ��Ű�� ��
	// CurrentCombo��  0 ~ MaxCombo - 1 ���̷� ����
	ABCHECK(FMath::IsWithinInclusive<int32>(CurrentCombo, 0, MaxCombo - 1));
	CurrentCombo = FMath::Clamp<int32>(CurrentCombo + 1, 1, MaxCombo);
}

// ������ ������ �� ����� �Լ�
void AABCharacter::AttackEndComboState()
{
	IsComboInputOn = false;
	CanNextCombo = false;
	CurrentCombo = 0;
}

// �����Լ��� �������̵� �� TakeDamage �Լ��� ���Ͱ� �޴� ������� ó���ϴ� ���� �߰�
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

// ���� �浹 Ž�� �Լ�
// ���ݽ� ���� ���� ���� �׸�
// ���� ������ ���, ���н� ���� 
void AABCharacter::AttackCheck()
{
	float FinalAttackRange = GetFinalAttackRange();

	FHitResult HitResult;
	FCollisionQueryParams Params(NAME_None, false, this);

	// ���� üũ�� �� �Ҹ������� ����
	// ä���� �̿��Ͽ� ���� ���� �۾��� ���ڴ�(üũ�ϰڴ�)
	bool bResult = GetWorld()->SweepSingleByChannel(
		HitResult, // ����� �޾���
		GetActorLocation(), // Ž�� ���� ��ġ
		GetActorLocation() + GetActorForwardVector() * FinalAttackRange, // Ž�� ���� ��ġ
		FQuat::Identity, // �ǰ����� �� ������ ȸ�� ��
		ECollisionChannel::ECC_GameTraceChannel2, // �浹 Ž���Ҷ� ����� ä������
		FCollisionShape::MakeSphere(AttackRadius), // � ���·� Ž������
		Params);

	// ����� �Ҷ� ����, ���� ������ ����� �ǰ� �ִ��� �������� Ȯ��
#if ENABLE_DRAW_DEBUG
	FVector TraceVec = GetActorForwardVector() * FinalAttackRange; // ���ݹ���
	FVector Center = GetActorLocation() + TraceVec * 0.5f; // ĸ���� �߾� ��ġ
	float HalfHeight = FinalAttackRange * 0.5f + AttackRadius;
	FQuat CapsuleRot = FRotationMatrix::MakeFromZ(TraceVec).ToQuat(); // ȸ�� ��
	FColor DrawColor = bResult ? FColor::Green : FColor::Red;
	float DebugLifeTime = 5.0f;

	// ������ ������ �� �־���
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

			// ��Ʈ �̺�Ʈ�� ���Ϳ� ���� ����� ����
			// �ַ� �ǰݹ޴� �ʿ��� ����� ó���ϴ°� ���ϴ�
			FDamageEvent DamageEvent;
			HitResult.GetActor()->TakeDamage(GetFinalAttackDamage(), DamageEvent, GetController(), this);
		}
	}
}