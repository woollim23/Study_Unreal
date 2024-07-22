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
	// 아이템 상자 습득 이펙트 컴포넌트
	UPROPERTY(VisibleAnywhere, Category = Effect)
	UParticleSystemComponent* Effect;


	// 클래스 정보를 저장하는 변수
	// TSubclassOf -> 특정 클래스와 상속받은 클래스들로 목록을 한정
	// 아이템상자와 이를 선언한 클래스 목록만 볼 수 있음
	UPROPERTY(EditInstanceOnly, Category = Box)
	TSubclassOf<class AABWeapon> WeaponItemClass;

private:
	// 오버랩 이벤트 발생 델리게이트
	UFUNCTION()
	void OnCharacterOverlap(UPrimitiveComponent* OverLappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	// ( , 나랑 충돌한 인자는 누구인가, 충돌한 컴포넌트 , , , 충돌결과)

	// 이펙트 끝났을때 발생 델리게이트
	UFUNCTION()
	void OnEffectFinished(class UParticleSystemComponent* PSystem);
};
