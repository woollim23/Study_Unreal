// Fill out your copyright notice in the Description page of Project Settings.


#include "ABAnimInstance.h"

UABAnimInstance::UABAnimInstance()
{
	// ���� ĳ���ӵ� 0 ���� �ʱ�ȭ
	CurrentPawnSpeed = 0.0f;
	// ���� Ȯ�� �ο� ������ false�� �ʱ�ȭ
	IsInAir = false;
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