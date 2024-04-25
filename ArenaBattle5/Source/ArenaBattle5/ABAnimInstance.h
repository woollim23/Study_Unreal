// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "ArenaBattle5.h"
#include "Animation/AnimInstance.h"
#include "ABAnimInstance.generated.h"

//멀티캐스트 델리게이트 생성
DECLARE_MULTICAST_DELEGATE(FOnNextAttackCheckDelegate);
DECLARE_MULTICAST_DELEGATE(FOnAttackHitCheckDelegate);

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
	// 점프 공격 몽타주 함수
	void JumpToAttackMontageSection(int32 NewSection);

public:
	// 애니메이션 노티파이가 발생할 때마다 ABCharacter에 전달할 델리게이트 선언
	FOnNextAttackCheckDelegate OnNextAttackCheck;
	FOnAttackHitCheckDelegate OnAttackHitCheck;
	//
	void SetDeadAnim() { IsDead = true; }

private:
	// 어택 노티파이 함수 선언
	UFUNCTION()
	void AnimNotify_AttackHitCheck();
	// 다음 어택 노티파이 함수 선언
	UFUNCTION()
	void AnimNotify_NextAttackCheck();
	// 공격 몽타주 섹션 이름을 얻는 함수
	FName GetAttackMontageSectionName(int32 Section);

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

	// 죽는 애니메이션 부울 속성
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Pawn, Meta = (AllowPrivateAccess = true))
	bool IsDead;
};
