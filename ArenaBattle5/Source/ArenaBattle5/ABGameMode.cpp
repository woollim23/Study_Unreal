// Fill out your copyright notice in the Description page of Project Settings.


#include "ABGameMode.h"
#include "ABPawn.h"
#include "ABPlayerController.h"

AABGameMode::AABGameMode()
{
	// �⺻ �� Ŭ������ AABPawn���� ����
	DefaultPawnClass = AABPawn::StaticClass();
	// �÷��̾� ��Ʈ�ѷ� Ŭ������ AABPlayerController���� ����
	PlayerControllerClass = AABPlayerController::StaticClass();
}

// �α��� ���� �� ȣ��Ǵ� �Լ�
void AABGameMode::PostLogin(APlayerController* NewPlayer)
{
	// 2. �α��� �۾� ����
	ABLOG(Warning, TEXT("PostLogin Begin"));
	Super::PostLogin(NewPlayer);
	// 6. ���ӿ� ����� �÷��̾� ������ ���� ����
	ABLOG(Warning, TEXT("PostLogin End"));
}
