// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArenaBattle5/Public/ABGameplayWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABGameplayWidget() {}

// Begin Cross Module References
ARENABATTLE5_API UClass* Z_Construct_UClass_UABGameplayWidget();
ARENABATTLE5_API UClass* Z_Construct_UClass_UABGameplayWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_ArenaBattle5();
// End Cross Module References

// Begin Class UABGameplayWidget Function OnResumeClicked
struct Z_Construct_UFunction_UABGameplayWidget_OnResumeClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABGameplayWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABGameplayWidget_OnResumeClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABGameplayWidget, nullptr, "OnResumeClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABGameplayWidget_OnResumeClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABGameplayWidget_OnResumeClicked_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UABGameplayWidget_OnResumeClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABGameplayWidget_OnResumeClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABGameplayWidget::execOnResumeClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnResumeClicked();
	P_NATIVE_END;
}
// End Class UABGameplayWidget Function OnResumeClicked

// Begin Class UABGameplayWidget Function OnRetryGameClicked
struct Z_Construct_UFunction_UABGameplayWidget_OnRetryGameClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABGameplayWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABGameplayWidget_OnRetryGameClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABGameplayWidget, nullptr, "OnRetryGameClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABGameplayWidget_OnRetryGameClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABGameplayWidget_OnRetryGameClicked_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UABGameplayWidget_OnRetryGameClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABGameplayWidget_OnRetryGameClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABGameplayWidget::execOnRetryGameClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRetryGameClicked();
	P_NATIVE_END;
}
// End Class UABGameplayWidget Function OnRetryGameClicked

// Begin Class UABGameplayWidget Function OnReturnToTitleCliked
struct Z_Construct_UFunction_UABGameplayWidget_OnReturnToTitleCliked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABGameplayWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABGameplayWidget_OnReturnToTitleCliked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABGameplayWidget, nullptr, "OnReturnToTitleCliked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABGameplayWidget_OnReturnToTitleCliked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABGameplayWidget_OnReturnToTitleCliked_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UABGameplayWidget_OnReturnToTitleCliked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABGameplayWidget_OnReturnToTitleCliked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABGameplayWidget::execOnReturnToTitleCliked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnReturnToTitleCliked();
	P_NATIVE_END;
}
// End Class UABGameplayWidget Function OnReturnToTitleCliked

// Begin Class UABGameplayWidget
void UABGameplayWidget::StaticRegisterNativesUABGameplayWidget()
{
	UClass* Class = UABGameplayWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnResumeClicked", &UABGameplayWidget::execOnResumeClicked },
		{ "OnRetryGameClicked", &UABGameplayWidget::execOnRetryGameClicked },
		{ "OnReturnToTitleCliked", &UABGameplayWidget::execOnReturnToTitleCliked },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UABGameplayWidget);
UClass* Z_Construct_UClass_UABGameplayWidget_NoRegister()
{
	return UABGameplayWidget::StaticClass();
}
struct Z_Construct_UClass_UABGameplayWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "ABGameplayWidget.h" },
		{ "ModuleRelativePath", "Public/ABGameplayWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResumeButton_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ABGameplayWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnToTitleButton_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ABGameplayWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RetryGameButton_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ABGameplayWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ResumeButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnToTitleButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RetryGameButton;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UABGameplayWidget_OnResumeClicked, "OnResumeClicked" }, // 2000196147
		{ &Z_Construct_UFunction_UABGameplayWidget_OnRetryGameClicked, "OnRetryGameClicked" }, // 963026949
		{ &Z_Construct_UFunction_UABGameplayWidget_OnReturnToTitleCliked, "OnReturnToTitleCliked" }, // 4227618065
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UABGameplayWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UABGameplayWidget_Statics::NewProp_ResumeButton = { "ResumeButton", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UABGameplayWidget, ResumeButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResumeButton_MetaData), NewProp_ResumeButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UABGameplayWidget_Statics::NewProp_ReturnToTitleButton = { "ReturnToTitleButton", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UABGameplayWidget, ReturnToTitleButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnToTitleButton_MetaData), NewProp_ReturnToTitleButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UABGameplayWidget_Statics::NewProp_RetryGameButton = { "RetryGameButton", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UABGameplayWidget, RetryGameButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RetryGameButton_MetaData), NewProp_RetryGameButton_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UABGameplayWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABGameplayWidget_Statics::NewProp_ResumeButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABGameplayWidget_Statics::NewProp_ReturnToTitleButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABGameplayWidget_Statics::NewProp_RetryGameButton,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UABGameplayWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UABGameplayWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_ArenaBattle5,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UABGameplayWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UABGameplayWidget_Statics::ClassParams = {
	&UABGameplayWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UABGameplayWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UABGameplayWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UABGameplayWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UABGameplayWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UABGameplayWidget()
{
	if (!Z_Registration_Info_UClass_UABGameplayWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UABGameplayWidget.OuterSingleton, Z_Construct_UClass_UABGameplayWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UABGameplayWidget.OuterSingleton;
}
template<> ARENABATTLE5_API UClass* StaticClass<UABGameplayWidget>()
{
	return UABGameplayWidget::StaticClass();
}
UABGameplayWidget::UABGameplayWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UABGameplayWidget);
UABGameplayWidget::~UABGameplayWidget() {}
// End Class UABGameplayWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Yelim_Documents_GitHub_Study_Unreal_ArenaBattle5_Source_ArenaBattle5_Public_ABGameplayWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UABGameplayWidget, UABGameplayWidget::StaticClass, TEXT("UABGameplayWidget"), &Z_Registration_Info_UClass_UABGameplayWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UABGameplayWidget), 1631084718U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Yelim_Documents_GitHub_Study_Unreal_ArenaBattle5_Source_ArenaBattle5_Public_ABGameplayWidget_h_2387112154(TEXT("/Script/ArenaBattle5"),
	Z_CompiledInDeferFile_FID_Users_Yelim_Documents_GitHub_Study_Unreal_ArenaBattle5_Source_ArenaBattle5_Public_ABGameplayWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Yelim_Documents_GitHub_Study_Unreal_ArenaBattle5_Source_ArenaBattle5_Public_ABGameplayWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
