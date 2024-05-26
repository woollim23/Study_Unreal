// Fill out your copyright notice in the Description page of Project Settings.
// �÷��̾� ��Ʈ�ѷ��� ���Ӽ��迡�� �÷��̾�� 1��1�� �����ϸ� ���� �����ϴ� ����(���� Possess)
// �÷��̾ ������ �� �����Ǹ�, ������ �÷��̾� ��Ʈ�ѷ��� ������ �� ����
// 1. �÷��̾� ��Ʈ�ѷ� ����
// 2. �÷��̾� �� ����
// 3. ����
// 4. ���� ����
#pragma once

#include "ArenaBattle5.h"
#include "GameFramework/PlayerController.h"
#include "ABPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class ARENABATTLE5_API AABPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	AABPlayerController();

	// ������Ʈ �ʱ�ȭ ���� ȣ�� �Լ�
	virtual void PostInitializeComponents() override;
	// ���ǽ� ȣ�� �Լ�
	virtual void OnPossess(APawn* aPawn) override;

	class UABHUDWidget* GetHUDWidget() const;
	void NPCKill(class AABCharacter* KilledNPC) const;
	void AddGameScore() const;

	void ChangeInputMode(bool bGameMode = true);
	
protected:
	virtual void BeginPlay() override;
	virtual void SetupInputComponent() override;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = UI)
	TSubclassOf<class UABHUDWidget> HUDWidgetClass;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = UI)
	TSubclassOf<class UABGameplayWidget> MenuWidgetClass;


private:
	void OnGamePause();

	UPROPERTY()
	class UABHUDWidget* HUDWidget;
	UPROPERTY()
	class AABPlayerState* ABPlayerState;
	UPROPERTY()
	class UABGameplayWidget* MenuWidget;

	FInputModeGameOnly GameInputMode;
	FInputModeUIOnly UIInputMode;

};
