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
	// (새로생성) EndPlay, PostInitializeComponents 함수 선언
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	virtual void PostInitializeComponents() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// 바디 컴포넌트 선언
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* Body;
	// 워터 컴포넌트 선언
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* Water;
	// 빛 컴포넌트 선언
	UPROPERTY(VisibleAnywhere)
	UPointLightComponent* Light;
	// 파티클 컴포넌트 선언
	UPROPERTY(VisibleAnywhere)
	UParticleSystemComponent* Splash;

	// ID 변수 선언
	UPROPERTY(EditAnywhere, Category = ID)
	int32 ID;

private:
	// 회전 속도 변수 선언
	UPROPERTY(EditAnywhere, Category = Stat, Meta = (AllowPrivateAccess = true))
	float RotateSpeed;
};
