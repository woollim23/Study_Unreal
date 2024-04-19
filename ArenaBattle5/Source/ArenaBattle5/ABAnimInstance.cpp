// Fill out your copyright notice in the Description page of Project Settings.


#include "ABAnimInstance.h"

UABAnimInstance::UABAnimInstance()
{
	// ���� ĳ���ӵ� 0 ���� �ʱ�ȭ
	CurrentPawnSpeed = 0.0f;
	// ���� Ȯ�� �ο� ������ false�� �ʱ�ȭ
	IsInAir = false;
	// �ִ� ��Ÿ�� �ҷ�����
	static ConstructorHelpers::FObjectFinder<UAnimMontage> ATTACK_MONTAGE(TEXT("/Script/Engine.AnimMontage'/Game/Book/Animations/SK_Mannequin_Skeleton_Montage.SK_Mannequin_Skeleton_Montage'"));
	if (ATTACK_MONTAGE.Succeeded())
	{
		AttackMontage = ATTACK_MONTAGE.Object;
	}
}

// �ִ� �ν��Ͻ��� Tick���� ���� �ӵ� ������ ���� �� �� �̸� CurrentPawnSpeed�� ������Ʈ ��
void UABAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);

	// �ִϸ��̼� �ý����� ƽ���� ���� ������ ���� �ӷ� ���� ����
	auto Pawn = TryGetPawnOwner();
	if (::IsValid(Pawn))
	{
		CurrentPawnSpeed = Pawn->GetVelocity().Size();
		// �� �����Ʈ ������Ʈ�� �����ϴ� IsFalling() �Լ��� ����� ���� ���� ���� ������ �ƴ����� ���� ������ �ִ� �ν��Ͻ��� �����ϰ�
		// �̸� Ȱ���� ���� �ִϸ��̼��� ����ϵ��� ����
		// �ִ��ν��Ͽ� IsInAir �Ҹ��� �Ӽ��� IsFalling() �ΰ��� ��ġ�ϵ��� ������ش�
		auto Character = Cast<ACharacter>(Pawn);
		if (Character)
		{
			IsInAir = Character->GetMovementComponent()->IsFalling();
		}
	}
}

// ���� ��Ÿ�� ��� �Լ�
void UABAnimInstance::PlayAttackMontage()
{
	Montage_Play(AttackMontage, 1.0f);
}



// ���� ���� ��Ÿ�� �Լ�
void UABAnimInstance::JumpToAttackMontageSection(int32 NewSection)
{
	ABCHECK(Montage_IsPlaying(AttackMontage));
	// ��Ÿ�ָ� ���� �������� �̵�, ���� ���� �������� �̵�
	Montage_JumpToSection(GetAttackMontageSectionName(NewSection), AttackMontage);
}

// ���� ��Ƽ���� �Լ� ����
// ��Ƽ���̰� ȣ��Ǹ� �ڵ����� ȣ�� �ȴ�
void UABAnimInstance::AnimNotify_AttackHitCheck()
{
	// ��Ƽĳ��Ʈ ��������Ʈ�� ��ϵ� ��� �Լ��� ȣ��
	OnAttackHitCheck.Broadcast();
}

// ���� ���� ��Ƽ���� �Լ� ����
void UABAnimInstance::AnimNotify_NextAttackCheck()
{
	OnNextAttackCheck.Broadcast();
}

// ���� ���� ��Ÿ�� ���� �̸��� ��� �Լ�
FName UABAnimInstance::GetAttackMontageSectionName(int32 Section)
{
	ABCHECK(FMath::IsWithinInclusive<int32>(Section, 1, 4), NAME_None);
	return FName(*FString::Printf(TEXT("Attack%d"), Section));
}