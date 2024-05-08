// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "ArenaBattle5.h"
#include "AIController.h"
#include "ABAIController.generated.h"

/**
 * 
 */
UCLASS()
class ARENABATTLE5_API AABAIController : public AAIController
{
	GENERATED_BODY()

public:
	AABAIController();
	virtual void OnPossess(APawn* InPawn) override;
	virtual void OnUnPossess() override;

private:
	void OnRepeatTimer();

	FTimerHandle RepeatTimerHandle;
	float RepeatInterval;
};
