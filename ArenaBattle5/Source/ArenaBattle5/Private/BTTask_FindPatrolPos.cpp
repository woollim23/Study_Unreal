#include "BTTask_FindPatrolPos.h"
#include "ABAIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "NavigationSystem.h"

UBTTask_FindPatrolPos::UBTTask_FindPatrolPos()
{
	NodeName = TEXT("FindPatrolPos");
}

EBTNodeResult::Type UBTTask_FindPatrolPos::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	// ���� ������Ʈ��, ��� �޸𸮸� ����
	EBTNodeResult::Type Result = Super::ExecuteTask(OwnerComp, NodeMemory);

	// ���� ������
	auto ControllingPawn = OwnerComp.GetAIOwner()->GetPawn();
	// ���� ������ ���� ��ȯ
	if (nullptr == ControllingPawn)
		return EBTNodeResult::Failed;
	// �׺� ���������� ���� ��ȯ
	UNavigationSystemV1* NavSystem = UNavigationSystemV1::GetNavigationSystem(ControllingPawn->GetWorld());
	if (nullptr == NavSystem)
		return EBTNodeResult::Failed;

	FVector Origin = OwnerComp.GetBlackboardComponent()->GetValueAsVector(AABAIController::HomePosKey);
	FNavLocation NextPatrol;

	// ���� ���� �ִ� ���� ���� ����Ʈ�� �����ְڴ�
	// 500 �Ÿ� ��
	// true�� �� �� �ִ� ���� �ִ� ��
	if (NavSystem->GetRandomPointInNavigableRadius(Origin, 500.0f, NextPatrol))
	{
		// �����忡�ٰ� ��Ʈ�� ���������� �ٲ�ġ�� ����
		// NextPatrol ���� �����Ͽ� ���� ���� ��ġ ����
		OwnerComp.GetBlackboardComponent()->SetValueAsVector(AABAIController::PatrolPosKey, NextPatrol.Location);
		// ���� ���� ��ȯ
		return EBTNodeResult::Succeeded;
	}

	return EBTNodeResult::Failed;
}
