// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "ArenaBattle5.h"
#include "Animation/AnimInstance.h"
#include "ABAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class ARENABATTLE5_API UABAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
	
public:
	UABAnimInstance();
	// ƽ���� ȣ�� �Ǵ� �Լ��� ���� �Լ���
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;

private:
	// ���� ĳ���ͼӵ�
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Pawn, Meta=(AllowPrivateAccess=true))
	float CurrentPawnSpeed;

	// ���� ĳ���Ͱ� ���߿� ���ִ��� Ȯ��
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Pawn, Meta = (AllowPrivateAccess = true))
	bool IsInAir;
};
