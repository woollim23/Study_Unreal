// Fill out your copyright notice in the Description page of Project Settings.


#include "ABPawn.h"

// Sets default values
AABPawn::AABPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

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

}

