// Fill out your copyright notice in the Description page of Project Settings.
// Character -> 언리얼에서 인간형 폰을 좀더 효과적으로 제작하기 위한 특수한 모델

#pragma once

#include "ArenaBattle5.h"
#include "GameFramework/Character.h"
#include "ABCharacter.generated.h"

DECLARE_MULTICAST_DELEGATE(FOnAttackEndDelegate);

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

	// 조작 모드 목록
	enum class EControlMode
	{
		GTA,
		DIABLO,
		NPC
	};

	// 조작 모드 전환을 쉽게 해주는 
	void SetControlMode(EControlMode NewControlMode);
	EControlMode CurrentControlMode = EControlMode::GTA;

	// UPROPERTY를 사용하지 않는 값 타입 변수들은 초기값 미리 지정
	FVector DirectionToMove = FVector::ZeroVector;

	// ViewChange 키 입력 시 시점 부드럽게 전환
	// SetControlMode 함수에서 정의 후 Tick 함수의 인자로 쓰임
	float ArmLengthTo = 0.0f;
	FRotator ArmRotationTo = FRotator::ZeroRotator;
	float ArmLengthSpeed = 0.0f;
	float ArmRotationSpeed = 0.0f;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void PostInitializeComponents() override;

	// TakeDamage 함수를 오버라이드해 액터가 받은 대미지를 처리하는 로직
	virtual float TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, AActor* DamageCauser) override;
	//
	virtual void PossessedBy(AController* NewController) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// 무기장착 할 수 있는지 확인
	bool CanSetWeapon();
	// 무기 장착 함수
	void SetWeapon(class AABWeapon* NewWeapon);
	// 공격 버튼 함수
	void Attack();
	FOnAttackEndDelegate OnAttackEnd;
	
	// 현재 무기 함수
	UPROPERTY(VisibleAnywhere, Category = Weapon)
	class AABWeapon* CurrentWeapon;

	UPROPERTY(VisibleAnywhere, Category = Stat)
	class UABCharacterStatComponent* CharacterStat;

	// 무기 컴포넌트
	UPROPERTY(VisibleAnywhere, Category = Weapon)
	USkeletalMeshComponent* Weapon;
	// 삼인칭 시점으로 카메라 구도를 편리하게 설정 할 수 있는 부가 컴포넌트
	UPROPERTY(VisibleAnywhere, Category = Camera)
	USpringArmComponent* SpringArm;
	// 카메라가 바라보는 게임 세계의 화면을 플레이어 화면으로 전송
	UPROPERTY(VisibleAnywhere, Category = Camera)
	UCameraComponent* Camera;
	// HP UI 컴포넌트
	UPROPERTY(VisibleAnywhere, Category = Camera)
	class UWidgetComponent* HPBarWidget;

private:
	void OnAssetLoadCompleted();
	// 위아래 방향키 입력 함수
	void UpDown(float NewAxisValue);
	// 왼쪽오른쪽 방향키 입력 함수
	void LeftRight(float NewAxisValue);
	// 캐릭터 z축 회전
	void LookUp(float NewAxisValue);
	// 캐릭터 y축 회전
	void Turn(float NewAxisValue);

	// 조작모드 시점 전환
	void ViewChange();

	// 어택 몽타쥬가 끝났음을 알리는 함수
	UFUNCTION()
	void OnAttackMontageEnded(UAnimMontage* Montage, bool bInterrupted);

	// 공격이 시작할 때 관련 속성 지정하는 함수 선언
	void AttackStartComboState();
	// 공격이 종료할 때 사용할 함수 선언
	void AttackEndComboState();
	// 공격 충돌(?) 감지 함수
	void AttackCheck();

private:
	// 공격 중인지 확인 하는 부울
	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = Attack, Meta = (AllowPrivateAccess = true))
	bool IsAttacking;
	// 다음 콤보로의 이동 가능 여부
	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = Attack, Meta = (AllowPrivateAccess = true))
	bool CanNextCombo;
	// 콤보 입력 여부
	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = Attack, Meta = (AllowPrivateAccess = true))
	bool IsComboInputOn;
	// 현재 실행 중인 콤보 카운터
	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = Attack, Meta = (AllowPrivateAccess = true))
	int32 CurrentCombo;
	// 콤보 카운터의 최대치
	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = Attack, Meta = (AllowPrivateAccess = true))
	int32 MaxCombo;

	// 애님인스턴스를 멤버변수로 선언
	UPROPERTY()
	class UABAnimInstance* ABAnim;

	// DrawDebugCapsule 함수를 사용해서 탐색을 하기 위해 캡슐 설정
	// 공격 범위
	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = Attack, Meta = (AllowPrivateAccess = true))
	float AttackRange;
	// 공격 반지름
	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = Attack, Meta = (AllowPrivateAccess = true))
	float AttackRadius;

	FSoftObjectPath CharacterAssetToLoad = FSoftObjectPath(nullptr);
	TSharedPtr<struct FStreamableHandle> AssetStreamingHandle;
};
