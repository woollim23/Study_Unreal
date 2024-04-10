// Fill out your copyright notice in the Description page of Project Settings.
// 플레이어 컨트롤러는 게임세계에서 플레이어와 1대1로 소통하며 폰을 조종하는 역할(빙의 Possess)
// 플레이어가 입장할 때 배정되며, 배정된 플레이어 컨트롤러는 변경할 수 없음
// 1. 플레이어 컨트롤러 생성
// 2. 플레이어 폰 생성
// 3. 빙의
// 4. 게임 시작
#pragma once

#include "ArenaBattle5.h"
#include "GameFramework/PlayerController.h"
#include "ABPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class ARENABATTLE5_API AABPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	// 컴포넌트 초기화 이후 호출 함수
	virtual void PostInitializeComponents() override;
	// 빙의시 호출 함수
	virtual void OnPossess(APawn* aPawn) override;
	
};
