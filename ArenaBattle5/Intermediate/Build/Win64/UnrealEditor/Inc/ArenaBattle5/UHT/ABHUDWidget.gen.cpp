// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArenaBattle5/Public/ABHUDWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABHUDWidget() {}

// Begin Cross Module References
ARENABATTLE5_API UClass* Z_Construct_UClass_UABHUDWidget();
ARENABATTLE5_API UClass* Z_Construct_UClass_UABHUDWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_ArenaBattle5();
// End Cross Module References

// Begin Class UABHUDWidget
void UABHUDWidget::StaticRegisterNativesUABHUDWidget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UABHUDWidget);
UClass* Z_Construct_UClass_UABHUDWidget_NoRegister()
{
	return UABHUDWidget::StaticClass();
}
struct Z_Construct_UClass_UABHUDWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "ABHUDWidget.h" },
		{ "ModuleRelativePath", "Public/ABHUDWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HPBar_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ABHUDWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExpBar_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ABHUDWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerName_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ABHUDWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerLevel_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ABHUDWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentScore_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ABHUDWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HighScore_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ABHUDWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HPBar;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ExpBar;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerLevel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentScore;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HighScore;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UABHUDWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UABHUDWidget_Statics::NewProp_HPBar = { "HPBar", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UABHUDWidget, HPBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HPBar_MetaData), NewProp_HPBar_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UABHUDWidget_Statics::NewProp_ExpBar = { "ExpBar", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UABHUDWidget, ExpBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExpBar_MetaData), NewProp_ExpBar_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UABHUDWidget_Statics::NewProp_PlayerName = { "PlayerName", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UABHUDWidget, PlayerName), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerName_MetaData), NewProp_PlayerName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UABHUDWidget_Statics::NewProp_PlayerLevel = { "PlayerLevel", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UABHUDWidget, PlayerLevel), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerLevel_MetaData), NewProp_PlayerLevel_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UABHUDWidget_Statics::NewProp_CurrentScore = { "CurrentScore", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UABHUDWidget, CurrentScore), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentScore_MetaData), NewProp_CurrentScore_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UABHUDWidget_Statics::NewProp_HighScore = { "HighScore", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UABHUDWidget, HighScore), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HighScore_MetaData), NewProp_HighScore_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UABHUDWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABHUDWidget_Statics::NewProp_HPBar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABHUDWidget_Statics::NewProp_ExpBar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABHUDWidget_Statics::NewProp_PlayerName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABHUDWidget_Statics::NewProp_PlayerLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABHUDWidget_Statics::NewProp_CurrentScore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABHUDWidget_Statics::NewProp_HighScore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UABHUDWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UABHUDWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_ArenaBattle5,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UABHUDWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UABHUDWidget_Statics::ClassParams = {
	&UABHUDWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UABHUDWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UABHUDWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UABHUDWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UABHUDWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UABHUDWidget()
{
	if (!Z_Registration_Info_UClass_UABHUDWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UABHUDWidget.OuterSingleton, Z_Construct_UClass_UABHUDWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UABHUDWidget.OuterSingleton;
}
template<> ARENABATTLE5_API UClass* StaticClass<UABHUDWidget>()
{
	return UABHUDWidget::StaticClass();
}
UABHUDWidget::UABHUDWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UABHUDWidget);
UABHUDWidget::~UABHUDWidget() {}
// End Class UABHUDWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Git_Study_Unreal_ArenaBattle5_Source_ArenaBattle5_Public_ABHUDWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UABHUDWidget, UABHUDWidget::StaticClass, TEXT("UABHUDWidget"), &Z_Registration_Info_UClass_UABHUDWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UABHUDWidget), 3870044948U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_Study_Unreal_ArenaBattle5_Source_ArenaBattle5_Public_ABHUDWidget_h_1539767738(TEXT("/Script/ArenaBattle5"),
	Z_CompiledInDeferFile_FID_Git_Study_Unreal_ArenaBattle5_Source_ArenaBattle5_Public_ABHUDWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Study_Unreal_ArenaBattle5_Source_ArenaBattle5_Public_ABHUDWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
