// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "EngineMinimal.h"

// ��ũ��, �α� ī�װ� ���� ��ũ�� Log = 'ArenaBattle'
DECLARE_LOG_CATEGORY_EXTERN(ArenaBattle, Log, All);
// ��ũ��, �߻��� �Լ� �̸��� �ڵ� ������ �Բ� ��� ��
#define ABLOG_CALLINFO (FString(__FUNCTION__) + TEXT("(") + FString::FromInt(__LINE__) + TEXT(")"))
// �ڵ尡 ����ִ� ���� �̸��� �Լ�, ���������� �߰��� 'ArenaBattle' ī�װ��� �α� ����
// �α׸� ����� �Լ��� ���� ������ �ľ��� �� ����
#define ABLOG_S(Verbosity) UE_LOG(ArenaBattle, Verbosity, TEXT("%s"), *ABLOG_CALLINFO)
// ABLOG_S ������ ���� ���ڿ��� �߰� ������ ������ �α� ����
#define ABLOG(Verbosity, Format, ...) UE_LOG(ArenaBattle, Verbosity, TEXT("%s %s"), *ABLOG_CALLINFO, *FString::Printf(Format, ##__VA_ARGS__))