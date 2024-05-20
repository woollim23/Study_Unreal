// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "ArenaBattle5.h"
#include "GameFramework/GameModeBase.h"
#include "ABGameMode.generated.h"

/**
 * 
 */
UCLASS()
class ARENABATTLE5_API AABGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	// 게임모드 클래스 생성자
	AABGameMode();

	virtual void PostInitializeComponents() override;
	// 로그인 성공 후 호출되는 함수
	// PlayerController 에서 리플리케이트되는 함수 호출을 하기에 안전한 첫 번째 장소
	virtual void PostLogin(APlayerController* NewPlayer) override;
	void AddScore(class AABPlayerController* ScoredPlayer);

private:
	UPROPERTY()
	class AABGameState* ABGameState;

};
