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
	// 틱마다 호출 되는 함수를 가상 함수로
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;
	// 공격 몽타주 함수
	void PlayAttackMontage();

private:
	// 어택 노티파이 함수 선언
	UFUNCTION()
	void AnimNotify_AttackHitCheck();

private:
	// 현재 캐릭터속도
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Pawn, Meta=(AllowPrivateAccess=true))
	float CurrentPawnSpeed;

	// 현재 캐릭터가 공중에 떠있는지 확인
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Pawn, Meta = (AllowPrivateAccess = true))
	bool IsInAir;

	// 애님 어택 몽타주
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = Attack, Meta = (AllowPrivateAccess = true))
	UAnimMontage* AttackMontage;
};
