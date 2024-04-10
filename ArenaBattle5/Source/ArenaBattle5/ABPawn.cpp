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

}

