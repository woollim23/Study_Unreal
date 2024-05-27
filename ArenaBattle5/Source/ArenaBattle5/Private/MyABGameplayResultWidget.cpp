// Fill out your copyright notice in the Description page of Project Settings.


#include "MyABGameplayResultWidget.h"
#include "Components/TextBlock.h"
#include "ABGameState.h"

void UMyABGameplayResultWidget::BindGameState(AABGameState* GameState)
{
	ABCHECK(nullptr != GameState);
	CurrentGameState = GameState;
}

void UMyABGameplayResultWidget::NativeConstruct()
{
	Super::NativeConstruct();

	ABCHECK(CurrentGameState.IsValid());

	auto Result = Cast<UTextBlock>(GetWidgetFromName(TEXT("txtResult")));
	ABCHECK(nullptr != Result);
	Result->SetText(FText::FromString(CurrentGameState->IsGameCleared() ? TEXT("Mission Complete") : TEXT("Mission Failed")));

	auto TotalScore = Cast<UTextBlock>(GetWidgetFromName(TEXT("txtToTotalScore")));
	ABCHECK(nullptr != TotalScore);
	TotalScore->SetText(FText::FromString(FString::FromInt(CurrentGameState->GetTotalGameScore())));
}
