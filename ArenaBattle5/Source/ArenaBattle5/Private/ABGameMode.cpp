// Fill out your copyright notice in the Description page of Project Settings.


#include "ABGameMode.h"
#include "ABCharacter.h"
#include "ABPlayerController.h"

AABGameMode::AABGameMode()
{
	// 캐릭터 클래스로 지정
	DefaultPawnClass = AABCharacter::StaticClass();
	// 플레이어 컨트롤러 클래스를 AABPlayerController으로 지정
	PlayerControllerClass = AABPlayerController::StaticClass();
}

// 로그인 성공 후 호출되는 함수
void AABGameMode::PostLogin(APlayerController* NewPlayer)
{
	// 2. 로그인 작업 시작
	//ABLOG(Warning, TEXT("PostLogin Begin"));
	Super::PostLogin(NewPlayer);
	// 6. 게임에 입장된 플레이어 세팅이 끝난 시점
	//ABLOG(Warning, TEXT("PostLogin End"));
}
