// Fill out your copyright notice in the Description page of Project Settings.


#include "ABPlayerController.h"

// ������Ʈ �ʱ�ȭ ���� ȣ�� �Լ�
void AABPlayerController::PostInitializeComponents()
{
	// 1. �÷��̾� ��Ʈ�ѷ� ������ �α� ����
	Super::PostInitializeComponents();
	//ABLOG_S(Warning);
}

void AABPlayerController::BeginPlay()
{
	Super::BeginPlay();

	// ���� ���� �� �÷��̾� ��Ʈ�ѷ����� UI�� �����ϰ� ���ӿ����� �Է� �޵��� ��
	FInputModeGameOnly InputMode;
	SetInputMode(InputMode);
}

// ���ǽ� ȣ�� �Լ�
void AABPlayerController::OnPossess(APawn* aPawn)
{
	// 4. ���ǽ� �α� ����
	//ABLOG_S(Warning);
	Super::OnPossess(aPawn);
}