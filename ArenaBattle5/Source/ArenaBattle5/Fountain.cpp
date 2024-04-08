// Fill out your copyright notice in the Description page of Project Settings.


#include "Fountain.h"

// Sets default values
AFountain::AFountain()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//������Ʈ ���� �� �ٵ� ��Ʈ ������Ʈ�� ����, �׿� ������Ʈ ��Ʈ�� ���̱�
	Body = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BODY"));
	Water = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WATER"));
	Light = CreateDefaultSubobject<UPointLightComponent>(TEXT("LIGHT"));
	Splash = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("SPLASH"));
	Movement = CreateDefaultSubobject<URotatingMovementComponent>(TEXT("MOVEMENT")); // (Actor Component)������ ���� ��ġ�� ������� ���Ϳ� ������ ������ ����� ����, �ٸ� ������Ʈ��(Scene Component)�� �޸� ���������� ���Ϳ� ���� ��

	RootComponent = Body;
	Water->SetupAttachment(Body);
	Light->SetupAttachment(Body);
	Splash->SetupAttachment(Body);

	Water->SetRelativeLocation(FVector(0.0f, 0.0f, 135.0f));
	Light->SetRelativeLocation(FVector(0.0f, 0.0f, 195.0f));
	Splash->SetRelativeLocation(FVector(0.0f, 0.0f, 195.0f));

	// �ٵ� ������Ʈ �ҷ�����
	static ConstructorHelpers::FObjectFinder<UStaticMesh> SM_BODY(TEXT("/Script/Engine.StaticMesh'/Game/InfinityBladeGrassLands/Environments/Plains/Env_Plains_Ruins/StaticMesh/SM_Plains_Castle_Fountain_01.SM_Plains_Castle_Fountain_01'"));
	if (SM_BODY.Succeeded())
	{
		Body->SetStaticMesh(SM_BODY.Object);
	}
	// ���� ������Ʈ �ҷ�����
	static ConstructorHelpers::FObjectFinder<UStaticMesh> SM_WATER(TEXT("/Script/Engine.StaticMesh'/Game/InfinityBladeGrassLands/Effects/FX_Meshes/Env/SM_Plains_Fountain_02.SM_Plains_Fountain_02'"));
	if (SM_WATER.Succeeded())
	{
		Water->SetStaticMesh(SM_WATER.Object);
	}
	// ��ƼŬ ������Ʈ �ҷ�����
	static ConstructorHelpers::FObjectFinder<UParticleSystem> PS_SPLASH(TEXT("/ Script / Engine.ParticleSystem'/Game/InfinityBladeGrassLands/Effects/FX_Ambient/Water/P_Water_Fountain_Splash_Base_01.P_Water_Fountain_Splash_Base_01'"));
	if (PS_SPLASH.Succeeded())
	{
		Splash->SetTemplate(PS_SPLASH.Object);
	}

	// ȸ�� �ӵ� ������ ����
	RotateSpeed = 30.0f;
	// �����ӵ� RotateSpeed ��ŭ Yaw ȸ��
	Movement->RotationRate = FRotator(0.0f, RotateSpeed, 0.0f);
}

// Called when the game starts or when spawned
void AFountain::BeginPlay()
{
	Super::BeginPlay();

	// �Լ� BeginPlay() ����� ���, ���� �̸��� ���̵�, ���� ���
	ABLOG_S(Warning);
	ABLOG(Warning, TEXT("Actor Name : %s, ID : %d, Location X : %.3f"), *GetName(), ID, GetActorLocation().X);
}

// Called every frame
void AFountain::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// �� ƽ ���� 30.0f ��ŭ�� ȸ��, x���� �������� Rollȸ��
	// ( y , z , x )
	AddActorLocalRotation(FRotator(0.0f, 0.0f, RotateSpeed * DeltaTime));


}

void AFountain::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	// �Լ� EndPlay() ����� ���, ���α׷� ����� ���
	Super::EndPlay(EndPlayReason);
	ABLOG_S(Warning);
}

void AFountain::PostInitializeComponents()
{
	// �Լ� PostInitializeComponents() ����� ���, ������Ʈ�� ���� �Ϸ�� ���
	// PostInitializeComponents() -> BeginPlay() -> EndPlay() ������ ���
	Super::PostInitializeComponents();
	ABLOG_S(Warning);
}