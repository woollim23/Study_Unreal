// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ArenaBattle5.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARENABATTLE5_ArenaBattle5_generated_h
#error "ArenaBattle5.generated.h already included, missing '#pragma once' in ArenaBattle5.h"
#endif
#define ARENABATTLE5_ArenaBattle5_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Yelim_Documents_GitHub_Study_Unreal_ArenaBattle5_Source_ArenaBattle5_Public_ArenaBattle5_h


#define FOREACH_ENUM_ECHARACTERSTATE(op) \
	op(ECharacterState::PREINIT) \
	op(ECharacterState::LOADING) \
	op(ECharacterState::READY) \
	op(ECharacterState::DEAD) 

enum class ECharacterState : uint8;
template<> struct TIsUEnumClass<ECharacterState> { enum { Value = true }; };
template<> ARENABATTLE5_API UEnum* StaticEnum<ECharacterState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
