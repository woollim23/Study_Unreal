// Fill out your copyright notice in the Description page of Project Settings.


#include "ABGameMode.h"
#include "ABCharacter.h"
#include "ABPlayerController.h"
#include "ABPlayerState.h"

AABGameMode::AABGameMode()
{
	// ĳ���� Ŭ������ ����
	DefaultPawnClass = AABCharacter::StaticClass();
	// �÷��̾� ��Ʈ�ѷ� Ŭ������ AABPlayerController���� ����
	PlayerControllerClass = AABPlayerController::StaticClass();

	PlayerStateClass = AABPlayerState::StaticClass();
}

// �α��� ���� �� ȣ��Ǵ� �Լ�
void AABGameMode::PostLogin(APlayerController* NewPlayer)
{
	// 2. �α��� �۾� ����
	//ABLOG(Warning, TEXT("PostLogin Begin"));
	Super::PostLogin(NewPlayer);
	// 6. ���ӿ� ����� �÷��̾� ������ ���� ����
	//ABLOG(Warning, TEXT("PostLogin End"));

	auto ABPlayerState = Cast<AABPlayerState>(NewPlayer->PlayerState);
	ABCHECK(nullptr != ABPlayerState);
	ABPlayerState->InitPlayerData();
}
