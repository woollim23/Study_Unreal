// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArenaBattle5/Public/ABCharacterWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABCharacterWidget() {}

// Begin Cross Module References
ARENABATTLE5_API UClass* Z_Construct_UClass_UABCharacterWidget();
ARENABATTLE5_API UClass* Z_Construct_UClass_UABCharacterWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_ArenaBattle5();
// End Cross Module References

// Begin Class UABCharacterWidget
void UABCharacterWidget::StaticRegisterNativesUABCharacterWidget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UABCharacterWidget);
UClass* Z_Construct_UClass_UABCharacterWidget_NoRegister()
{
	return UABCharacterWidget::StaticClass();
}
struct Z_Construct_UClass_UABCharacterWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "ABCharacterWidget.h" },
		{ "ModuleRelativePath", "Public/ABCharacterWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HPProgressBar_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ABCharacterWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HPProgressBar;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UABCharacterWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UABCharacterWidget_Statics::NewProp_HPProgressBar = { "HPProgressBar", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UABCharacterWidget, HPProgressBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HPProgressBar_MetaData), NewProp_HPProgressBar_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UABCharacterWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABCharacterWidget_Statics::NewProp_HPProgressBar,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UABCharacterWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UABCharacterWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_ArenaBattle5,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UABCharacterWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UABCharacterWidget_Statics::ClassParams = {
	&UABCharacterWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UABCharacterWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UABCharacterWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UABCharacterWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UABCharacterWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UABCharacterWidget()
{
	if (!Z_Registration_Info_UClass_UABCharacterWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UABCharacterWidget.OuterSingleton, Z_Construct_UClass_UABCharacterWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UABCharacterWidget.OuterSingleton;
}
template<> ARENABATTLE5_API UClass* StaticClass<UABCharacterWidget>()
{
	return UABCharacterWidget::StaticClass();
}
UABCharacterWidget::UABCharacterWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UABCharacterWidget);
UABCharacterWidget::~UABCharacterWidget() {}
// End Class UABCharacterWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Git_Study_Unreal_ArenaBattle5_Source_ArenaBattle5_Public_ABCharacterWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UABCharacterWidget, UABCharacterWidget::StaticClass, TEXT("UABCharacterWidget"), &Z_Registration_Info_UClass_UABCharacterWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UABCharacterWidget), 320633182U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_Study_Unreal_ArenaBattle5_Source_ArenaBattle5_Public_ABCharacterWidget_h_143344244(TEXT("/Script/ArenaBattle5"),
	Z_CompiledInDeferFile_FID_Git_Study_Unreal_ArenaBattle5_Source_ArenaBattle5_Public_ABCharacterWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Study_Unreal_ArenaBattle5_Source_ArenaBattle5_Public_ABCharacterWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
