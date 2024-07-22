// Fill out your copyright notice in the Description page of Project Settings.


#include "ABAnimInstance.h"

UABAnimInstance::UABAnimInstance()
{
	CurrentPawnSpeed = 0.0f;
	IsInAir = false;
	IsDead = false;
	// 애님 몽타주 불러와서 연결
	static ConstructorHelpers::FObjectFinder<UAnimMontage> ATTACK_MONTAGE(TEXT("/Game/Book/Animations/SK_Mannequin_Skeleton_Montage.SK_Mannequin_Skeleton_Montage"));
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

	if (!::IsValid(Pawn)) return;

	if(!IsDead)
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
	ABCHECK(!IsDead);
	// 1.0 배속으로 몽타주 재생
	Montage_Play(AttackMontage, 1.0f);
}

// 점프 공격 몽타주 함수
void UABAnimInstance::JumpToAttackMontageSection(int32 NewSection)
{
	ABCHECK(!IsDead);
	ABCHECK(Montage_IsPlaying(AttackMontage));
	// 몽타주를 명명된 섹션으로 이동, 현재 어택 섹션으로 이동
	Montage_JumpToSection(GetAttackMontageSectionName(NewSection), AttackMontage);
}

// 어택 노티파이 함수 정의
// 노티파이가 호출되면 자동으로 호출 된다
void UABAnimInstance::AnimNotify_AttackHitCheck()
{
	// 멀티캐스트 델리게이트에 등록된 모든 함수를 호출
	OnAttackHitCheck.Broadcast();
}

// 다음 어택 노티파이 함수 정의
void UABAnimInstance::AnimNotify_NextAttackCheck()
{
	// 이 델리게이트를 만료되었을 수도 있는 것을 제외하고, 바인딩된 모든 오브젝트에 뿌립니다.
	OnNextAttackCheck.Broadcast();
}

// 현재 공격 몽타주 섹션 이름을 얻는 함수
FName UABAnimInstance::GetAttackMontageSectionName(int32 Section)
{
	ABCHECK(FMath::IsWithinInclusive<int32>(Section, 1, 4), NAME_None);
	return FName(*FString::Printf(TEXT("Attack%d"), Section));
}