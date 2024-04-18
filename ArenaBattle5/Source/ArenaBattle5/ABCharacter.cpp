// Fill out your copyright notice in the Description page of Project Settings.


#include "ABCharacter.h"
#include "ABAnimInstance.h"

// Sets default values
AABCharacter::AABCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// ĳ���͸� �����ϴ� ������Ʈ ����
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SPRINGARM"));
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("CAMERA"));

	// �θ� Ŭ������ ���� ĸ�� ������Ʈ�� �ִ�
	// ���������� ĸ��������Ʈ�� ����
	SpringArm->SetupAttachment(GetCapsuleComponent());
	// ī�޶�� �������Ͽ� ����
	Camera->SetupAttachment(SpringArm);

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

	// �ʱ� ���� ��带 ��ƺ��
	SetControlMode(EControlMode::DIABLO);

	ArmLengthSpeed = 3.0f;
	ArmRotationSpeed = 10.0f;
	// ���� ���̸� 800���� ����
	GetCharacterMovement()->JumpZVelocity = 800.0f;

	// ���� ������ Ȯ�� �ϴ� �ο� false�� �ʱ�ȭ
	IsAttacking = false;
}

// Called when the game starts or when spawned
void AABCharacter::BeginPlay()
{
	Super::BeginPlay();
	
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
	ABAnim->OnMontageEnded.AddDynamic(this, &AABCharacter::OnAttackMontageEnded);

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
	// �̹� �۵� ���̸� ������ �۵����� �ȵ��� ����
	if (IsAttacking) return;

	ABAnim->PlayAttackMontage();

	IsAttacking = true;
}

// ������ ������ �� ȣ��
void AABCharacter::OnAttackMontageEnded(UAnimMontage* Montage, bool bInterrupted)
{
	ABCHECK(IsAttacking);
	IsAttacking = false;
}