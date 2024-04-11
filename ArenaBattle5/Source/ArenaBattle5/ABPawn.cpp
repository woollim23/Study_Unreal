// Fill out your copyright notice in the Description page of Project Settings.


#include "ABPawn.h"

// Sets default values
AABPawn::AABPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// 폰을 구성하는 컴포넌트 정의
	Capsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CAPSULE"));
	Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("MESH"));
	Movement = CreateDefaultSubobject<UFloatingPawnMovement>(TEXT("MOVEMENT"));
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SPRINGARM"));
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("CAMERA"));

	// 루트는 캡슐
	RootComponent = Capsule;
	Mesh->SetupAttachment(Capsule);
	SpringArm->SetupAttachment(Capsule);
	Camera->SetupAttachment(SpringArm);

	// 컴포넌트들 트랜스폼 설정
	Capsule->SetCapsuleHalfHeight(88.0f);
	Capsule->SetCapsuleRadius(34.0f);
	Mesh->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, -88.0f), FRotator(0.0f, -90.0f, 0.0f));
	SpringArm->TargetArmLength = 400.0f;
	SpringArm->SetRelativeRotation(FRotator(-15.0f, 0.0f, 0.0f));

	// 폰 에셋 지정
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> SK_CARDBOARD(TEXT("/Script/Engine.SkeletalMesh'/Game/InfinityBladeWarriors/Character/CompleteCharacters/SK_CharM_Cardboard.SK_CharM_Cardboard'"));
	if (SK_CARDBOARD.Succeeded())
	{
		Mesh->SetSkeletalMesh(SK_CARDBOARD.Object);
	}

	// 에셋에 블루프린트 지정
	Mesh->SetAnimationMode(EAnimationMode::AnimationBlueprint);
	// 애님인스턴스 -> 블루프린트는 애님 그래프 로직에 따라 동작하는 캐릭터 애니메이션 시스템을 구동시키는데,
	// 이러한 애니메이션 시스템은 애님 인스턴스 클래스가 관리함
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

// 컴포넌트 초기화 이후 호출 함수
void AABPawn::PostInitializeComponents()
{
	// 3. 폰 생성시 로그 찍힘
	Super::PostInitializeComponents();
	ABLOG_S(Warning);
}

// 빙의시 호출 함수
void AABPawn::PossessedBy(AController* NewController)
{
	// 5. 빙의시 로그 찍힘
	ABLOG_S(Warning);
	Super::PossessedBy(NewController);
}

// Called to bind functionality to input
//
void AABPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// 언리얼은 InputComponent를 사용해 폰의 멤버 함수와 입력 성정을 연결 시키면,
	// 입력 신호는 자동으로 폰의 멤버 함수의 인자로 전달 됨
	PlayerInputComponent->BindAxis(TEXT("UpDown"), this, &AABPawn::UpDown);
	PlayerInputComponent->BindAxis(TEXT("LeftRight"), this, &AABPawn::LeftRight);

}

void AABPawn::UpDown(float NewAxisValue)
{   // 함수 AddMovementInput() -> -1 ~ 1 사이의 입력 값을 폰 무브먼트 컴포넌트에 전달 해, 폰을 움직이게 함
	// 함수 GetActorForwardVector() 전진 후진 입력 값 받음
	AddMovementInput(GetActorForwardVector(), NewAxisValue);
}

void AABPawn::LeftRight(float NewAxisValue)
{
	// 함수 GetActorRightVector() 왼쪽 오른쪽 입력 값 받음
	AddMovementInput(GetActorRightVector(), NewAxisValue);
}