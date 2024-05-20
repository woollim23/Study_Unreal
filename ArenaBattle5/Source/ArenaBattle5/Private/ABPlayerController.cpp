// Fill out your copyright notice in the Description page of Project Settings.


#include "ABPlayerController.h"
#include "ABHUDWidget.h"
#include "ABPlayerState.h"
#include "ABCharacter.h"

AABPlayerController::AABPlayerController()
{
	static ConstructorHelpers::FClassFinder<UABHUDWidget> UI_HUD_C(TEXT("/Game/Book/UI/UI_HUD.UI_HUD_C"));
	if (UI_HUD_C.Succeeded())
	{
		HUDWidgetClass = UI_HUD_C.Class;
	}
}

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

	HUDWidget = CreateWidget<UABHUDWidget>(this, HUDWidgetClass);
	HUDWidget->AddToViewport();

	ABPlayerState = Cast<AABPlayerState>(PlayerState);
	ABCHECK(nullptr != ABPlayerState);
	HUDWidget->BindPlayerState(ABPlayerState);
	ABPlayerState->OnPlayerStateChanged.Broadcast();
}

UABHUDWidget* AABPlayerController::GetHUDWidget() const
{
	return HUDWidget;
}

void AABPlayerController::NPCKill(AABCharacter* KilledNPC) const
{
	ABPlayerState->AddExp(KilledNPC->GetExp());
}

// ���ǽ� ȣ�� �Լ�
void AABPlayerController::OnPossess(APawn* aPawn)
{
	// 4. ���ǽ� �α� ����
	//ABLOG_S(Warning);
	Super::OnPossess(aPawn);
}
