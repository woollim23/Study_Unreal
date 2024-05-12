// Fill out your copyright notice in the Description page of Project Settings.
// Character -> �𸮾󿡼� �ΰ��� ���� ���� ȿ�������� �����ϱ� ���� Ư���� ��

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

	// ���� ��� ���
	enum class EControlMode
	{
		GTA,
		DIABLO,
		NPC
	};

	// ���� ��� ��ȯ�� ���� ���ִ� 
	void SetControlMode(EControlMode NewControlMode);
	EControlMode CurrentControlMode = EControlMode::GTA;

	// UPROPERTY�� ������� �ʴ� �� Ÿ�� �������� �ʱⰪ �̸� ����
	FVector DirectionToMove = FVector::ZeroVector;

	// ViewChange Ű �Է� �� ���� �ε巴�� ��ȯ
	// SetControlMode �Լ����� ���� �� Tick �Լ��� ���ڷ� ����
	float ArmLengthTo = 0.0f;
	FRotator ArmRotationTo = FRotator::ZeroRotator;
	float ArmLengthSpeed = 0.0f;
	float ArmRotationSpeed = 0.0f;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void PostInitializeComponents() override;

	// TakeDamage �Լ��� �������̵��� ���Ͱ� ���� ������� ó���ϴ� ����
	virtual float TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, AActor* DamageCauser) override;
	//
	virtual void PossessedBy(AController* NewController) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// �������� �� �� �ִ��� Ȯ��
	bool CanSetWeapon();
	// ���� ���� �Լ�
	void SetWeapon(class AABWeapon* NewWeapon);
	// ���� ��ư �Լ�
	void Attack();
	FOnAttackEndDelegate OnAttackEnd;
	
	// ���� ���� �Լ�
	UPROPERTY(VisibleAnywhere, Category = Weapon)
	class AABWeapon* CurrentWeapon;

	UPROPERTY(VisibleAnywhere, Category = Stat)
	class UABCharacterStatComponent* CharacterStat;

	// ���� ������Ʈ
	UPROPERTY(VisibleAnywhere, Category = Weapon)
	USkeletalMeshComponent* Weapon;
	// ����Ī �������� ī�޶� ������ ���ϰ� ���� �� �� �ִ� �ΰ� ������Ʈ
	UPROPERTY(VisibleAnywhere, Category = Camera)
	USpringArmComponent* SpringArm;
	// ī�޶� �ٶ󺸴� ���� ������ ȭ���� �÷��̾� ȭ������ ����
	UPROPERTY(VisibleAnywhere, Category = Camera)
	UCameraComponent* Camera;
	// HP UI ������Ʈ
	UPROPERTY(VisibleAnywhere, Category = Camera)
	class UWidgetComponent* HPBarWidget;

private:
	void OnAssetLoadCompleted();
	// ���Ʒ� ����Ű �Է� �Լ�
	void UpDown(float NewAxisValue);
	// ���ʿ����� ����Ű �Է� �Լ�
	void LeftRight(float NewAxisValue);
	// ĳ���� z�� ȸ��
	void LookUp(float NewAxisValue);
	// ĳ���� y�� ȸ��
	void Turn(float NewAxisValue);

	// ���۸�� ���� ��ȯ
	void ViewChange();

	// ���� ��Ÿ�갡 �������� �˸��� �Լ�
	UFUNCTION()
	void OnAttackMontageEnded(UAnimMontage* Montage, bool bInterrupted);

	// ������ ������ �� ���� �Ӽ� �����ϴ� �Լ� ����
	void AttackStartComboState();
	// ������ ������ �� ����� �Լ� ����
	void AttackEndComboState();
	// ���� �浹(?) ���� �Լ�
	void AttackCheck();

private:
	// ���� ������ Ȯ�� �ϴ� �ο�
	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = Attack, Meta = (AllowPrivateAccess = true))
	bool IsAttacking;
	// ���� �޺����� �̵� ���� ����
	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = Attack, Meta = (AllowPrivateAccess = true))
	bool CanNextCombo;
	// �޺� �Է� ����
	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = Attack, Meta = (AllowPrivateAccess = true))
	bool IsComboInputOn;
	// ���� ���� ���� �޺� ī����
	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = Attack, Meta = (AllowPrivateAccess = true))
	int32 CurrentCombo;
	// �޺� ī������ �ִ�ġ
	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = Attack, Meta = (AllowPrivateAccess = true))
	int32 MaxCombo;

	// �ִ��ν��Ͻ��� ��������� ����
	UPROPERTY()
	class UABAnimInstance* ABAnim;

	// DrawDebugCapsule �Լ��� ����ؼ� Ž���� �ϱ� ���� ĸ�� ����
	// ���� ����
	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = Attack, Meta = (AllowPrivateAccess = true))
	float AttackRange;
	// ���� ������
	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = Attack, Meta = (AllowPrivateAccess = true))
	float AttackRadius;

	FSoftObjectPath CharacterAssetToLoad = FSoftObjectPath(nullptr);
	TSharedPtr<struct FStreamableHandle> AssetStreamingHandle;
};
