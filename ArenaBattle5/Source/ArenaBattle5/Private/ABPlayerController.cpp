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

// 컴포넌트 초기화 이후 호출 함수
void AABPlayerController::PostInitializeComponents()
{
	// 1. 플레이어 컨트롤러 생성시 로그 찍힘
	Super::PostInitializeComponents();
	//ABLOG_S(Warning);
}

void AABPlayerController::BeginPlay()
{
	Super::BeginPlay();

	// 게임 시작 후 플레이어 컨트롤러에서 UI를 배제하고 게임에서만 입력 받도록 함
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

// 빙의시 호출 함수
void AABPlayerController::OnPossess(APawn* aPawn)
{
	// 4. 빙의시 로그 찍힘
	//ABLOG_S(Warning);
	Super::OnPossess(aPawn);
}
