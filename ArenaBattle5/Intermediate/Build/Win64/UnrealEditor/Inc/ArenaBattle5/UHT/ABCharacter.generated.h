// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ABCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimMontage;
#ifdef ARENABATTLE5_ABCharacter_generated_h
#error "ABCharacter.generated.h already included, missing '#pragma once' in ABCharacter.h"
#endif
#define ARENABATTLE5_ABCharacter_generated_h

#define FID_Users_Yelim_Documents_GitHub_Study_Unreal_ArenaBattle5_Source_ArenaBattle5_ABCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnAttackMontageEnded);


#define FID_Users_Yelim_Documents_GitHub_Study_Unreal_ArenaBattle5_Source_ArenaBattle5_ABCharacter_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAABCharacter(); \
	friend struct Z_Construct_UClass_AABCharacter_Statics; \
public: \
	DECLARE_CLASS(AABCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ArenaBattle5"), NO_API) \
	DECLARE_SERIALIZER(AABCharacter)


#define FID_Users_Yelim_Documents_GitHub_Study_Unreal_ArenaBattle5_Source_ArenaBattle5_ABCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AABCharacter(AABCharacter&&); \
	AABCharacter(const AABCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AABCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AABCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AABCharacter) \
	NO_API virtual ~AABCharacter();


#define FID_Users_Yelim_Documents_GitHub_Study_Unreal_ArenaBattle5_Source_ArenaBattle5_ABCharacter_h_12_PROLOG
#define FID_Users_Yelim_Documents_GitHub_Study_Unreal_ArenaBattle5_Source_ArenaBattle5_ABCharacter_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Yelim_Documents_GitHub_Study_Unreal_ArenaBattle5_Source_ArenaBattle5_ABCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Yelim_Documents_GitHub_Study_Unreal_ArenaBattle5_Source_ArenaBattle5_ABCharacter_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_Yelim_Documents_GitHub_Study_Unreal_ArenaBattle5_Source_ArenaBattle5_ABCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARENABATTLE5_API UClass* StaticClass<class AABCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Yelim_Documents_GitHub_Study_Unreal_ArenaBattle5_Source_ArenaBattle5_ABCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
