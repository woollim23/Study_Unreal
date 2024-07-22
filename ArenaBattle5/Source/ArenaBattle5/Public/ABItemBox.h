// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "ArenaBattle5.h"
#include "GameFramework/Actor.h"
#include "ABItemBox.generated.h"

UCLASS()
class ARENABATTLE5_API AABItemBox : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AABItemBox();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void PostInitializeComponents() override;

public:
	// �÷��̾ �����ϴ� �ݸ��� �ڽ�
	UPROPERTY(VisibleAnywhere, Category = Box)
	UBoxComponent* Trigger;
	// ������ ���ڸ� �ð�ȭ ���ִ� ����ƽ �޽�
	UPROPERTY(VisibleAnywhere, Category = Box)
	UStaticMeshComponent* Box;
	// ������ ���� ���� ����Ʈ ������Ʈ
	UPROPERTY(VisibleAnywhere, Category = Effect)
	UParticleSystemComponent* Effect;


	// Ŭ���� ������ �����ϴ� ����
	// TSubclassOf -> Ư�� Ŭ������ ��ӹ��� Ŭ������� ����� ����
	// �����ۻ��ڿ� �̸� ������ Ŭ���� ��ϸ� �� �� ����
	UPROPERTY(EditInstanceOnly, Category = Box)
	TSubclassOf<class AABWeapon> WeaponItemClass;

private:
	// ������ �̺�Ʈ �߻� ��������Ʈ
	UFUNCTION()
	void OnCharacterOverlap(UPrimitiveComponent* OverLappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	// ( , ���� �浹�� ���ڴ� �����ΰ�, �浹�� ������Ʈ , , , �浹���)

	// ����Ʈ �������� �߻� ��������Ʈ
	UFUNCTION()
	void OnEffectFinished(class UParticleSystemComponent* PSystem);
};
