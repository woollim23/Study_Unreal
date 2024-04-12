// Fill out your copyright notice in the Description page of Project Settings.
// Character -> �𸮾󿡼� �ΰ��� ���� ���� ȿ�������� �����ϱ� ���� Ư���� ��

#pragma once

#include "ArenaBattle5.h"
#include "GameFramework/Character.h"
#include "ABCharacter.generated.h"

UCLASS()
class ARENABATTLE5_API AABCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AABCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// ����Ī �������� ī�޶� ������ ���ϰ� ���� �� �� �ִ� �ΰ� ������Ʈ
	UPROPERTY(VisibleAnywhere, Category = Camera)
	USpringArmComponent* SpringArm;
	// ī�޶� �ٶ󺸴� ���� ������ ȭ���� �÷��̾� ȭ������ ����
	UPROPERTY(VisibleAnywhere, Category = Camera)
	UCameraComponent* Camera;

private:
	// ���Ʒ� ����Ű �Է� �Լ�
	void UpDown(float NewAxisValue);
	// ���ʿ����� ����Ű �Է� �Լ�
	void LeftRight(float NewAxisValue);

};
