// Fill out your copyright notice in the Description page of Project Settings.


#include "ABAnimInstance.h"

UABAnimInstance::UABAnimInstance()
{
	// 현재 캐릭속도 0 으로 초기화
	CurrentPawnSpeed = 0.0f;
	// 공중 확인 부울 변수를 false로 초기화
	IsInAir = false;
	// 애님 몽타주 불러오기
	static ConstructorHelpers::FObjectFinder<UAnimMontage> ATTACK_MONTAGE(TEXT("/Script/Engine.AnimMontage'/Game/Book/Animations/SK_Mannequin_Skeleton_Montage.SK_Mannequin_Skeleton_Montage'"));
	if (ATTACK_MONTAGE.Succeeded())
	{
		AttackMontage = ATTACK_MONTAGE.Object;
	}
}

// 애님 인스턴스의 Tick에서 폰의 속도 정보를 가져 온 후 이를 CurrentPawnSpeed에 업데이트 함
void UABAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);

	// 애니메이션 시스템의 틱에서 폰에 접근해 폰의 속력 값을 얻어옴
	auto Pawn = TryGetPawnOwner();
	if (::IsValid(Pawn))
	{
		CurrentPawnSpeed = Pawn->GetVelocity().Size();
		// 폰 무브먼트 컴포넌트가 제공하는 IsFalling() 함수를 사용해 폰이 현재 점프 중인지 아닌지에 대한 정보를 애님 인스턴스에 보관하고
		// 이를 활용해 점프 애니메이션을 재생하도록 구현
		// 애님인스턴에 IsInAir 불리언 속성과 IsFalling() 두값이 일치하도록 만들어준다
		auto Character = Cast<ACharacter>(Pawn);
		if (Character)
		{
			IsInAir = Character->GetMovementComponent()->IsFalling();
		}
	}
}

// 어택 몽타주 재생 함수
void UABAnimInstance::PlayAttackMontage()
{
	Montage_Play(AttackMontage, 1.0f);
}

// 어택 노티파이 함수 정의
// 노티파이가 호출되면 자동으로 호출 된다
void UABAnimInstance::AnimNotify_AttackHitCheck()
{
	ABLOG_S(Warning);
}