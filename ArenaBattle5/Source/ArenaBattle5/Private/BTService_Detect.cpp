// Fill out your copyright notice in the Description page of Project Settings.


#include "BTService_Detect.h"
#include "ABAIController.h"
#include "ABCharacter.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "DrawDebugHelpers.h"


UBTService_Detect::UBTService_Detect()
{
	NodeName = TEXT("Detect");
	Interval = 1.0f;
}

void UBTService_Detect::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);

	// ����(AI�� �������ϴ� ����) ��
	APawn* ControllingPawn = OwnerComp.GetAIOwner()->GetPawn();
	if (nullptr == ControllingPawn) return;

	// ���Ͱ� ��� ���忡 �ִ��� �ҷ���
	UWorld* World = ControllingPawn->GetWorld();
	// ������ ��ġ ������
	FVector Center = ControllingPawn->GetActorLocation();
	// ��ġ �ݰ� ����
	float DetectRadius = 600.0f;
	if (nullptr == World) return;

	// ����� �迭�� �޾ƿ�
	TArray<FOverlapResult> OverlapResults;
	// �� �ڽ��� ������ä�� ��Ī�ϱ����� ���ڵ��� ����
	FCollisionQueryParams CollisionQueryParam(NAME_None, false, ControllingPawn);
	// �浹 ��ġ
	bool bResult = World->OverlapMultiByChannel(
		OverlapResults, // ��� �޴� ��
		Center, // ���� ��ġ
		FQuat::Identity, // ȸ�� ����
		ECollisionChannel::ECC_GameTraceChannel2, // Ʈ���̽� ä���� 2������
		FCollisionShape::MakeSphere(DetectRadius), // �浹 �Ǻ� �� ���
		CollisionQueryParam // ������� ��Ī�� ������
	);

	if (bResult) // ã�������
	{
		// �迭�� ����� ������ ����� �ϳ��� ��ĵ
		for (auto const& OverlapResult : OverlapResults)
		{
			// Ž�� �������� �ִ� ĳ���� ���� �޾ƿ�
			AABCharacter* ABCharacter = Cast<AABCharacter>(OverlapResult.GetActor());
			// ��¥�� ���ϴ� Ÿ��(����)���� Ȯ��
			// ũ�ν� üŷ, ������ �ѹ� �Ʒ��� �ѹ� �� �ι� üũ�Ѽ�
			if (ABCharacter && ABCharacter->GetController()->IsPlayerController())
			{
				// Ÿ���� ��ġ �����ȿ� ���� ĳ����(����)�� �ٲ�ġ��
				OwnerComp.GetBlackboardComponent()->SetValueAsObject(AABAIController::TargetKey, ABCharacter);
				// �ʷϻ����� 0.2�ʵ��� ������ �׸�
				DrawDebugSphere(World, Center, DetectRadius, 16, FColor::Green, false, 0.2f);

				DrawDebugPoint(World, ABCharacter->GetActorLocation(), 10.0f, FColor::Blue, false, 0.2f);
				DrawDebugLine(World, ControllingPawn->GetActorLocation(), ABCharacter->GetActorLocation(), FColor::Blue, false, 0.2f);
				return;
			}
		}
	}
	// ��ã�� ������� ���������� 0.2�� ���� ������ �׸�
	DrawDebugSphere(World, Center, DetectRadius, 16, FColor::Red, false, 0.2f);
}