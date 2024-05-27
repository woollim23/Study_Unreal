// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "ArenaBattle5.h"
#include "ABGameplayWidget.h"
#include "MyABGameplayResultWidget.generated.h"

/**
 * 
 */
UCLASS()
class ARENABATTLE5_API UMyABGameplayResultWidget : public UABGameplayWidget
{
	GENERATED_BODY()

public:
	void BindGameState(class AABGameState* GameState);

protected:
	virtual void NativeConstruct() override;
	
private:
	TWeakObjectPtr<class AABGameState> CurrentGameState;
};
