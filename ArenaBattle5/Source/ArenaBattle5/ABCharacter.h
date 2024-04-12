// Fill out your copyright notice in the Description page of Project Settings.
// Character -> 언리얼에서 인간형 폰을 좀더 효과적으로 제작하기 위한 특수한 모델

#pragma once

#include "ArenaBattle5.h"
#include "GameFramework/Character.h"
#include "ABCharacter.generated.h"

UCLASS()
class ARENABATTLE5_API AABCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AABCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// 삼인칭 시점으로 카메라 구도를 편리하게 설정 할 수 있는 부가 컴포넌트
	UPROPERTY(VisibleAnywhere, Category = Camera)
	USpringArmComponent* SpringArm;
	// 카메라가 바라보는 게임 세계의 화면을 플레이어 화면으로 전송
	UPROPERTY(VisibleAnywhere, Category = Camera)
	UCameraComponent* Camera;

private:
	// 위아래 방향키 입력 함수
	void UpDown(float NewAxisValue);
	// 왼쪽오른쪽 방향키 입력 함수
	void LeftRight(float NewAxisValue);

};
