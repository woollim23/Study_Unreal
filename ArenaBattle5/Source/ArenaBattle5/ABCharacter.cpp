// Fill out your copyright notice in the Description page of Project Settings.


#include "ABCharacter.h"

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
	// �̷��� �ִϸ��̼� �ý����� �ִ� �ν��Ͻ� Ŭ������ ������
	static ConstructorHelpers::FClassFinder<UAnimInstance> WARRIOR_ANIM(TEXT("/Script/Engine.AnimBlueprint'/Game/Book/Animations/WarriorAnimBlueprint.WarriorAnimBlueprint'_C"));
	if (WARRIOR_ANIM.Succeeded())
	{
		GetMesh()->SetAnimInstanceClass(WARRIOR_ANIM.Class);
	}
}

// Called when the game starts or when spawned
void AABCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AABCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AABCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// �𸮾��� InputComponent�� ����� �Է� ������ ���� ��Ű��,
	// �Է� ��ȣ�� �ڵ����� ĳ������ ��� �Լ��� ���ڷ� ���� ��
	PlayerInputComponent->BindAxis(TEXT("UpDown"), this, &AABCharacter::UpDown);
	PlayerInputComponent->BindAxis(TEXT("LeftRight"), this, &AABCharacter::LeftRight);

}

void AABCharacter::UpDown(float NewAxisValue)
{
	// �Լ� AddMovementInput() -> -1 ~ 1 ������ �Է� ���� �� �����Ʈ ������Ʈ�� ���� ��, ĳ���͸� �����̰� ��
	// �Լ� GetActorForwardVector() ���� ���� �Է� �� ����
	AddMovementInput(GetActorForwardVector(), NewAxisValue);
}

void AABCharacter::LeftRight(float NewAxisValue)
{
	// �Լ� GetActorRightVector() ���� ������ �Է� �� ����
	AddMovementInput(GetActorRightVector(), NewAxisValue);
}