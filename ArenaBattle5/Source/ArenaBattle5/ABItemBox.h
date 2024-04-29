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
	// 플레이어를 감지하는 콜리전 박스
	UPROPERTY(VisibleAnywhere, Category = Box)
	UBoxComponent* Trigger;
	// 아이템 상자를 시각화 해주는 스테틱 메시
	UPROPERTY(VisibleAnywhere, Category = Box)
	UStaticMeshComponent* Box;

private:
	// 오버랩 이벤트 발생 델리게이트
	UFUNCTION()
	void OnCharacterOverlap(UPrimitiveComponent* OverLappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
