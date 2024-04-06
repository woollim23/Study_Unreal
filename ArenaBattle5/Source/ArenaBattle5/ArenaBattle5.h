// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "EngineMinimal.h"

// 매크로, 로그 카테고리 선언 매크로 Log = 'ArenaBattle'
DECLARE_LOG_CATEGORY_EXTERN(ArenaBattle, Log, All);
// 매크로, 발생한 함수 이름과 코드 라인을 함께 출력 함
#define ABLOG_CALLINFO (FString(__FUNCTION__) + TEXT("(") + FString::FromInt(__LINE__) + TEXT(")"))
// 코드가 들어있는 파일 이름과 함수, 라인정보를 추가해 'ArenaBattle' 카테고리로 로그 남김
// 로그를 사용한 함수의 실행 시점을 파악할 때 유용
#define ABLOG_S(Verbosity) UE_LOG(ArenaBattle, Verbosity, TEXT("%s"), *ABLOG_CALLINFO)
// ABLOG_S 정보에 형식 문자열로 추가 정보를 지정해 로그 남김
#define ABLOG(Verbosity, Format, ...) UE_LOG(ArenaBattle, Verbosity, TEXT("%s %s"), *ABLOG_CALLINFO, *FString::Printf(Format, ##__VA_ARGS__))