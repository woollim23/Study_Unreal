// Fill out your copyright notice in the Description page of Project Settings.


#include "ABGameInstance.h"

UABGameInstance::UABGameInstance()
{
    FString CharacterDataPath = TEXT("/Game/Book/GameData/ABCharacterData.ABCharacterData");
    static ConstructorHelpers::FObjectFinder<UDataTable> DT_ABCHARACTER(*CharacterDataPath);
    ABCHECK(DT_ABCHARACTER.Succeeded());
    ABCharacterTable = DT_ABCHARACTER.Object;
    ABCHECK(ABCharacterTable->GetRowMap().Num() > 0);
}

void UABGameInstance::Init()
{
    Super::Init();
}

FABCharacterData* UABGameInstance::GetABCharacterData(int32 Level)
{
    // TEXT는 더 세밀하게 찾을 때 이용하는 것, 지금은 필요없어서 공백으로 남긴다
    // 현재 레벨의 데이터 행을 찾는다
    return ABCharacterTable->FindRow<FABCharacterData>(*FString::FromInt(Level), TEXT(""));
}