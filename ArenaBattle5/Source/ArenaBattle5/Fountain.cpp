// Fill out your copyright notice in the Description page of Project Settings.


#include "Fountain.h"

// Sets default values
AFountain::AFountain()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//컴포넌트 정의 및 바디를 루트 컴포넌트로 지정, 그외 컴포넌트 루트에 붙이기
	Body = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BODY"));
	Water = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WATER"));
	Light = CreateDefaultSubobject<UPointLightComponent>(TEXT("LIGHT"));
	Splash = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("SPLASH"));
	Movement = CreateDefaultSubobject<URotatingMovementComponent>(TEXT("MOVEMENT")); // (Actor Component)액터의 현재 위치와 관계없이 액터에 지정된 움직임 기능을 제공, 다른 컴포넌트들(Scene Component)과 달리 독립적으로 액터에 부착 됨

	RootComponent = Body;
	Water->SetupAttachment(Body);
	Light->SetupAttachment(Body);
	Splash->SetupAttachment(Body);

	Water->SetRelativeLocation(FVector(0.0f, 0.0f, 135.0f));
	Light->SetRelativeLocation(FVector(0.0f, 0.0f, 195.0f));
	Splash->SetRelativeLocation(FVector(0.0f, 0.0f, 195.0f));

	// 바디 오브젝트 불러오기
	static ConstructorHelpers::FObjectFinder<UStaticMesh> SM_BODY(TEXT("/Script/Engine.StaticMesh'/Game/InfinityBladeGrassLands/Environments/Plains/Env_Plains_Ruins/StaticMesh/SM_Plains_Castle_Fountain_01.SM_Plains_Castle_Fountain_01'"));
	if (SM_BODY.Succeeded())
	{
		Body->SetStaticMesh(SM_BODY.Object);
	}
	// 워터 오브젝트 불러오기
	static ConstructorHelpers::FObjectFinder<UStaticMesh> SM_WATER(TEXT("/Script/Engine.StaticMesh'/Game/InfinityBladeGrassLands/Effects/FX_Meshes/Env/SM_Plains_Fountain_02.SM_Plains_Fountain_02'"));
	if (SM_WATER.Succeeded())
	{
		Water->SetStaticMesh(SM_WATER.Object);
	}
	// 파티클 오브젝트 불러오기
	static ConstructorHelpers::FObjectFinder<UParticleSystem> PS_SPLASH(TEXT("/ Script / Engine.ParticleSystem'/Game/InfinityBladeGrassLands/Effects/FX_Ambient/Water/P_Water_Fountain_Splash_Base_01.P_Water_Fountain_Splash_Base_01'"));
	if (PS_SPLASH.Succeeded())
	{
		Splash->SetTemplate(PS_SPLASH.Object);
	}

	// 회전 속도 변수값 대입
	RotateSpeed = 30.0f;
	// 지정속도 RotateSpeed 만큼 Yaw 회전
	Movement->RotationRate = FRotator(0.0f, RotateSpeed, 0.0f);
}

// Called when the game starts or when spawned
void AFountain::BeginPlay()
{
	Super::BeginPlay();

	// 함수 BeginPlay() 실행시 출력, 액터 이름과 아이디, 갯수 출력
	ABLOG_S(Warning);
	ABLOG(Warning, TEXT("Actor Name : %s, ID : %d, Location X : %.3f"), *GetName(), ID, GetActorLocation().X);
}

// Called every frame
void AFountain::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// 매 틱 마다 30.0f 만큼씩 회전, x축을 기준으로 Roll회전
	// ( y , z , x )
	AddActorLocalRotation(FRotator(0.0f, 0.0f, RotateSpeed * DeltaTime));


}

void AFountain::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	// 함수 EndPlay() 실행시 출력, 프로그램 종료시 출력
	Super::EndPlay(EndPlayReason);
	ABLOG_S(Warning);
}

void AFountain::PostInitializeComponents()
{
	// 함수 PostInitializeComponents() 실행시 출력, 컴포넌트들 세팅 완료시 출력
	// PostInitializeComponents() -> BeginPlay() -> EndPlay() 순으로 출력
	Super::PostInitializeComponents();
	ABLOG_S(Warning);
}