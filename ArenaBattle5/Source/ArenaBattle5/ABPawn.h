// Fill out your copyright notice in the Description page of Project Settings.
// 플레이어 컨트롤러에게 조종당하는 액터
// 플레이어는 플레이어 컨트롤러를 통해 현재 조종하던 폰을 버리고 다른 폰으로 옮겨 조종할 수 있음
#pragma once

#include "ArenaBattle5.h"
#include "GameFramework/Pawn.h"
#include "ABPawn.generated.h"

UCLASS()
class ARENABATTLE5_API AABPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AABPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	// 컴포넌트 초기화 이후 호출 함수
	virtual void PostInitializeComponents() override;
	// 빙의시 호출 함수
	virtual void PossessedBy(AController* NewController) override;
};
