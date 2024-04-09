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
	// ���Ӹ�� Ŭ���� ������
	AABGameMode();
	
	virtual void PostLogin(APlayerController* NewPlayer) override;

};
