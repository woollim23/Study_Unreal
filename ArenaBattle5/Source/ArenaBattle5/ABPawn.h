// Fill out your copyright notice in the Description page of Project Settings.
// 플레이어 컨트롤러에게 조종당하는 액터
// 플레이어는 플레이어 컨트롤러를 통해 현재 조종하던 폰을 버리고 다른 폰으로 옮겨 조종할 수 있음
#pragma once

#include "ArenaBattle5.h"
#include "GameFramework/Pawn.h"
#include "GameFramework/FloatingPawnMovement.h"
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

	// 컴포넌트 초기화 이후 호출 함수
	virtual void PostInitializeComponents() override;
	// 빙의시 호출 함수
	virtual void PossessedBy(AController* NewController) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// 폰의 움직임을 당당하는 충돌 컴포넌트
	UPROPERTY(VisibleAnywhere, Category = Collision)
	UCapsuleComponent* Capsule;
	// 캐릭터 에셋을 보여주고 추가로 애니메이션도 담당
	UPROPERTY(VisibleAnywhere, Category = Visual)
	USkeletalMeshComponent* Mesh;
	// 플레이어의 입력에 따라 캐릭터가 움직이도록 설정해주는 컴포넌트
	UPROPERTY(VisibleAnywhere, Category = Movement)
	UFloatingPawnMovement* Movement;
	// 삼인칭 시점으로 카메라 구도를 편리하게 설정 할 수 있는 부가 컴포넌트
	UPROPERTY(VisibleAnywhere, Category = Camera)
	USpringArmComponent* SpringArm;
	// 카메라가 바라보는 게임 세계의 화면을 플레이어 화면으로 전송
	UPROPERTY(VisibleAnywhere, Category = Camera)
	UCameraComponent* Camera;
};
