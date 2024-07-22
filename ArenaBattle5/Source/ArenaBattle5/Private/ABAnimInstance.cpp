// Fill out your copyright notice in the Description page of Project Settings.


#include "ABAnimInstance.h"

UABAnimInstance::UABAnimInstance()
{
	CurrentPawnSpeed = 0.0f;
	IsInAir = false;
	IsDead = false;
	// �ִ� ��Ÿ�� �ҷ��ͼ� ����
	static ConstructorHelpers::FObjectFinder<UAnimMontage> ATTACK_MONTAGE(TEXT("/Game/Book/Animations/SK_Mannequin_Skeleton_Montage.SK_Mannequin_Skeleton_Montage"));
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

	if (!::IsValid(Pawn)) return;

	if(!IsDead)
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
	ABCHECK(!IsDead);
	// 1.0 ������� ��Ÿ�� ���
	Montage_Play(AttackMontage, 1.0f);
}

// ���� ���� ��Ÿ�� �Լ�
void UABAnimInstance::JumpToAttackMontageSection(int32 NewSection)
{
	ABCHECK(!IsDead);
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
	// �� ��������Ʈ�� ����Ǿ��� ���� �ִ� ���� �����ϰ�, ���ε��� ��� ������Ʈ�� �Ѹ��ϴ�.
	OnNextAttackCheck.Broadcast();
}

// ���� ���� ��Ÿ�� ���� �̸��� ��� �Լ�
FName UABAnimInstance::GetAttackMontageSectionName(int32 Section)
{
	ABCHECK(FMath::IsWithinInclusive<int32>(Section, 1, 4), NAME_None);
	return FName(*FString::Printf(TEXT("Attack%d"), Section));
}