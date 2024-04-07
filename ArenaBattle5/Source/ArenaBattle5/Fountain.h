// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "ArenaBattle5.h"
#include "GameFramework/Actor.h"
#include "Fountain.generated.h"

UCLASS()
class ARENABATTLE5_API AFountain : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFountain();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	// (���λ���) EndPlay, PostInitializeComponents �Լ� ����
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	virtual void PostInitializeComponents() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// �ٵ� ������Ʈ ����
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* Body;
	// ���� ������Ʈ ����
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* Water;
	// �� ������Ʈ ����
	UPROPERTY(VisibleAnywhere)
	UPointLightComponent* Light;
	// ��ƼŬ ������Ʈ ����
	UPROPERTY(VisibleAnywhere)
	UParticleSystemComponent* Splash;

	// ID ���� ����
	UPROPERTY(EditAnywhere, Category = ID)
	int32 ID;

private:
	// ȸ�� �ӵ� ���� ����
	UPROPERTY(EditAnywhere, Category = Stat, Meta = (AllowPrivateAccess = true))
	float RotateSpeed;
};
