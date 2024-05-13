// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ABSection.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef ARENABATTLE5_ABSection_generated_h
#error "ABSection.generated.h already included, missing '#pragma once' in ABSection.h"
#endif
#define ARENABATTLE5_ABSection_generated_h

#define FID_Users_Yelim_Documents_GitHub_Study_Unreal_ArenaBattle5_Source_ArenaBattle5_Public_ABSection_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnGateTriggerBeginOverlap); \
	DECLARE_FUNCTION(execOnTriggerBeginOverlap);


#define FID_Users_Yelim_Documents_GitHub_Study_Unreal_ArenaBattle5_Source_ArenaBattle5_Public_ABSection_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAABSection(); \
	friend struct Z_Construct_UClass_AABSection_Statics; \
public: \
	DECLARE_CLASS(AABSection, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ArenaBattle5"), NO_API) \
	DECLARE_SERIALIZER(AABSection)


#define FID_Users_Yelim_Documents_GitHub_Study_Unreal_ArenaBattle5_Source_ArenaBattle5_Public_ABSection_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AABSection(AABSection&&); \
	AABSection(const AABSection&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AABSection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AABSection); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AABSection) \
	NO_API virtual ~AABSection();


#define FID_Users_Yelim_Documents_GitHub_Study_Unreal_ArenaBattle5_Source_ArenaBattle5_Public_ABSection_h_9_PROLOG
#define FID_Users_Yelim_Documents_GitHub_Study_Unreal_ArenaBattle5_Source_ArenaBattle5_Public_ABSection_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Yelim_Documents_GitHub_Study_Unreal_ArenaBattle5_Source_ArenaBattle5_Public_ABSection_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Yelim_Documents_GitHub_Study_Unreal_ArenaBattle5_Source_ArenaBattle5_Public_ABSection_h_12_INCLASS_NO_PURE_DECLS \
	FID_Users_Yelim_Documents_GitHub_Study_Unreal_ArenaBattle5_Source_ArenaBattle5_Public_ABSection_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARENABATTLE5_API UClass* StaticClass<class AABSection>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Yelim_Documents_GitHub_Study_Unreal_ArenaBattle5_Source_ArenaBattle5_Public_ABSection_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
