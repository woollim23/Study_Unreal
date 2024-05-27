// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArenaBattle5/Public/MyABGameplayResultWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyABGameplayResultWidget() {}

// Begin Cross Module References
ARENABATTLE5_API UClass* Z_Construct_UClass_UABGameplayWidget();
ARENABATTLE5_API UClass* Z_Construct_UClass_UMyABGameplayResultWidget();
ARENABATTLE5_API UClass* Z_Construct_UClass_UMyABGameplayResultWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_ArenaBattle5();
// End Cross Module References

// Begin Class UMyABGameplayResultWidget
void UMyABGameplayResultWidget::StaticRegisterNativesUMyABGameplayResultWidget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyABGameplayResultWidget);
UClass* Z_Construct_UClass_UMyABGameplayResultWidget_NoRegister()
{
	return UMyABGameplayResultWidget::StaticClass();
}
struct Z_Construct_UClass_UMyABGameplayResultWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "MyABGameplayResultWidget.h" },
		{ "ModuleRelativePath", "Public/MyABGameplayResultWidget.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyABGameplayResultWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMyABGameplayResultWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UABGameplayWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_ArenaBattle5,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyABGameplayResultWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyABGameplayResultWidget_Statics::ClassParams = {
	&UMyABGameplayResultWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyABGameplayResultWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyABGameplayResultWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMyABGameplayResultWidget()
{
	if (!Z_Registration_Info_UClass_UMyABGameplayResultWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyABGameplayResultWidget.OuterSingleton, Z_Construct_UClass_UMyABGameplayResultWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMyABGameplayResultWidget.OuterSingleton;
}
template<> ARENABATTLE5_API UClass* StaticClass<UMyABGameplayResultWidget>()
{
	return UMyABGameplayResultWidget::StaticClass();
}
UMyABGameplayResultWidget::UMyABGameplayResultWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMyABGameplayResultWidget);
UMyABGameplayResultWidget::~UMyABGameplayResultWidget() {}
// End Class UMyABGameplayResultWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Yelim_Documents_GitHub_Study_Unreal_ArenaBattle5_Source_ArenaBattle5_Public_MyABGameplayResultWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMyABGameplayResultWidget, UMyABGameplayResultWidget::StaticClass, TEXT("UMyABGameplayResultWidget"), &Z_Registration_Info_UClass_UMyABGameplayResultWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyABGameplayResultWidget), 1899406742U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Yelim_Documents_GitHub_Study_Unreal_ArenaBattle5_Source_ArenaBattle5_Public_MyABGameplayResultWidget_h_3058019982(TEXT("/Script/ArenaBattle5"),
	Z_CompiledInDeferFile_FID_Users_Yelim_Documents_GitHub_Study_Unreal_ArenaBattle5_Source_ArenaBattle5_Public_MyABGameplayResultWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Yelim_Documents_GitHub_Study_Unreal_ArenaBattle5_Source_ArenaBattle5_Public_MyABGameplayResultWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
