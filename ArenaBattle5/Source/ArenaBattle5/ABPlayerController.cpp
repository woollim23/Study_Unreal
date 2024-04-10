// Fill out your copyright notice in the Description page of Project Settings.


#include "ABPlayerController.h"

// 컴포넌트 초기화 이후 호출 함수
void AABPlayerController::PostInitializeComponents()
{
	// 1. 플레이어 컨트롤러 생성시 로그 찍힘
	Super::PostInitializeComponents();
	ABLOG_S(Warning);
}

// 빙의시 호출 함수
void AABPlayerController::OnPossess(APawn* aPawn)
{
	// 4. 빙의시 로그 찍힘
	ABLOG_S(Warning);
	Super::OnPossess(aPawn);
}