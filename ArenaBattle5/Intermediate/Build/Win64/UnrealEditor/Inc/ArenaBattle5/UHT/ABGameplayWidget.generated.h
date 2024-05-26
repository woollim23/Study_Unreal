// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ABGameplayWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARENABATTLE5_ABGameplayWidget_generated_h
#error "ABGameplayWidget.generated.h already included, missing '#pragma once' in ABGameplayWidget.h"
#endif
#define ARENABATTLE5_ABGameplayWidget_generated_h

#define FID_Users_Yelim_Documents_GitHub_Study_Unreal_ArenaBattle5_Source_ArenaBattle5_Public_ABGameplayWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnRetryGameClicked); \
	DECLARE_FUNCTION(execOnReturnToTitleCliked); \
	DECLARE_FUNCTION(execOnResumeClicked);


#define FID_Users_Yelim_Documents_GitHub_Study_Unreal_ArenaBattle5_Source_ArenaBattle5_Public_ABGameplayWidget_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUABGameplayWidget(); \
	friend struct Z_Construct_UClass_UABGameplayWidget_Statics; \
public: \
	DECLARE_CLASS(UABGameplayWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ArenaBattle5"), NO_API) \
	DECLARE_SERIALIZER(UABGameplayWidget)


#define FID_Users_Yelim_Documents_GitHub_Study_Unreal_ArenaBattle5_Source_ArenaBattle5_Public_ABGameplayWidget_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UABGameplayWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UABGameplayWidget(UABGameplayWidget&&); \
	UABGameplayWidget(const UABGameplayWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UABGameplayWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UABGameplayWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UABGameplayWidget) \
	NO_API virtual ~UABGameplayWidget();


#define FID_Users_Yelim_Documents_GitHub_Study_Unreal_ArenaBattle5_Source_ArenaBattle5_Public_ABGameplayWidget_h_12_PROLOG
#define FID_Users_Yelim_Documents_GitHub_Study_Unreal_ArenaBattle5_Source_ArenaBattle5_Public_ABGameplayWidget_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Yelim_Documents_GitHub_Study_Unreal_ArenaBattle5_Source_ArenaBattle5_Public_ABGameplayWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Yelim_Documents_GitHub_Study_Unreal_ArenaBattle5_Source_ArenaBattle5_Public_ABGameplayWidget_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_Yelim_Documents_GitHub_Study_Unreal_ArenaBattle5_Source_ArenaBattle5_Public_ABGameplayWidget_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARENABATTLE5_API UClass* StaticClass<class UABGameplayWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Yelim_Documents_GitHub_Study_Unreal_ArenaBattle5_Source_ArenaBattle5_Public_ABGameplayWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
