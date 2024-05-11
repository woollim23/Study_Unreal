// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "ArenaBattle5.h"
#include "Animation/AnimInstance.h"
#include "ABAnimInstance.generated.h"

//��Ƽĳ��Ʈ ��������Ʈ ����
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
	// ƽ���� ȣ�� �Ǵ� �Լ��� ���� �Լ���
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;

	// ���� ��Ÿ�� �Լ�
	void PlayAttackMontage();
	// ���� ���� ��Ÿ�� �Լ�
	void JumpToAttackMontageSection(int32 NewSection);

public:
	// �ִϸ��̼� ��Ƽ���̰� �߻��� ������ ABCharacter�� ������ ��������Ʈ ����
	FOnNextAttackCheckDelegate OnNextAttackCheck;
	FOnAttackHitCheckDelegate OnAttackHitCheck;
	//
	void SetDeadAnim() { IsDead = true; }

private:
	// ���� ��Ƽ���� �Լ� ����
	UFUNCTION()
	void AnimNotify_AttackHitCheck();
	// ���� ���� ��Ƽ���� �Լ� ����
	UFUNCTION()
	void AnimNotify_NextAttackCheck();
	// ���� ��Ÿ�� ���� �̸��� ��� �Լ�
	FName GetAttackMontageSectionName(int32 Section);

private:
	// ���� ĳ���ͼӵ�
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Pawn, Meta=(AllowPrivateAccess=true))
	float CurrentPawnSpeed;

	// ���� ĳ���Ͱ� ���߿� ���ִ��� Ȯ��
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Pawn, Meta = (AllowPrivateAccess = true))
	bool IsInAir;

	// �ִ� ���� ��Ÿ��
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = Attack, Meta = (AllowPrivateAccess = true))
	UAnimMontage* AttackMontage;

	// �״� �ִϸ��̼� �ο� �Ӽ�
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Pawn, Meta = (AllowPrivateAccess = true))
	bool IsDead;
};
