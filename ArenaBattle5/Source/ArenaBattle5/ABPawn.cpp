// Fill out your copyright notice in the Description page of Project Settings.


#include "ABPawn.h"

// Sets default values
AABPawn::AABPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// ���� �����ϴ� ������Ʈ ����
	Capsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CAPSULE"));
	Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("MESH"));
	Movement = CreateDefaultSubobject<UFloatingPawnMovement>(TEXT("MOVEMENT"));
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SPRINGARM"));
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("CAMERA"));

	// ��Ʈ�� ĸ��
	RootComponent = Capsule;
	Mesh->SetupAttachment(Capsule);
	SpringArm->SetupAttachment(Capsule);
	Camera->SetupAttachment(SpringArm);

	// ������Ʈ�� Ʈ������ ����
	Capsule->SetCapsuleHalfHeight(88.0f);
	Capsule->SetCapsuleRadius(34.0f);
	Mesh->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, -88.0f), FRotator(0.0f, -90.0f, 0.0f));
	SpringArm->TargetArmLength = 400.0f;
	SpringArm->SetRelativeRotation(FRotator(-15.0f, 0.0f, 0.0f));

	// �� ���� ����
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> SK_CARDBOARD(TEXT("/Script/Engine.SkeletalMesh'/Game/InfinityBladeWarriors/Character/CompleteCharacters/SK_CharM_Cardboard.SK_CharM_Cardboard'"));
	if (SK_CARDBOARD.Succeeded())
	{
		Mesh->SetSkeletalMesh(SK_CARDBOARD.Object);
	}

	// ���¿� �������Ʈ ����
	Mesh->SetAnimationMode(EAnimationMode::AnimationBlueprint);
	// �ִ��ν��Ͻ� -> �������Ʈ�� �ִ� �׷��� ������ ���� �����ϴ� ĳ���� �ִϸ��̼� �ý����� ������Ű�µ�,
	// �̷��� �ִϸ��̼� �ý����� �ִ� �ν��Ͻ� Ŭ������ ������
	static ConstructorHelpers::FClassFinder<UAnimInstance> WARRIOR_ANIM(TEXT("/Script/Engine.AnimBlueprint'/Game/Book/Animations/WarriorAnimBlueprint.WarriorAnimBlueprint'_C"));
	if (WARRIOR_ANIM.Succeeded())
	{
		Mesh->SetAnimInstanceClass(WARRIOR_ANIM.Class);
	}
}

// Called when the game starts or when spawned
void AABPawn::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AABPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// ������Ʈ �ʱ�ȭ ���� ȣ�� �Լ�
void AABPawn::PostInitializeComponents()
{
	// 3. �� ������ �α� ����
	Super::PostInitializeComponents();
	ABLOG_S(Warning);
}

// ���ǽ� ȣ�� �Լ�
void AABPawn::PossessedBy(AController* NewController)
{
	// 5. ���ǽ� �α� ����
	ABLOG_S(Warning);
	Super::PossessedBy(NewController);
}

// Called to bind functionality to input
//
void AABPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// �𸮾��� InputComponent�� ����� ���� ��� �Լ��� �Է� ������ ���� ��Ű��,
	// �Է� ��ȣ�� �ڵ����� ���� ��� �Լ��� ���ڷ� ���� ��
	PlayerInputComponent->BindAxis(TEXT("UpDown"), this, &AABPawn::UpDown);
	PlayerInputComponent->BindAxis(TEXT("LeftRight"), this, &AABPawn::LeftRight);

}

void AABPawn::UpDown(float NewAxisValue)
{   // �Լ� AddMovementInput() -> -1 ~ 1 ������ �Է� ���� �� �����Ʈ ������Ʈ�� ���� ��, ���� �����̰� ��
	// �Լ� GetActorForwardVector() ���� ���� �Է� �� ����
	AddMovementInput(GetActorForwardVector(), NewAxisValue);
}

void AABPawn::LeftRight(float NewAxisValue)
{
	// �Լ� GetActorRightVector() ���� ������ �Է� �� ����
	AddMovementInput(GetActorRightVector(), NewAxisValue);
}