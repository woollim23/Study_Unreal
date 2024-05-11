// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArenaBattle5Setting/Public/ABCharacterSetting.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABCharacterSetting() {}

// Begin Cross Module References
ARENABATTLE5SETTING_API UClass* Z_Construct_UClass_UABCharacterSetting();
ARENABATTLE5SETTING_API UClass* Z_Construct_UClass_UABCharacterSetting_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_ArenaBattle5Setting();
// End Cross Module References

// Begin Class UABCharacterSetting
void UABCharacterSetting::StaticRegisterNativesUABCharacterSetting()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UABCharacterSetting);
UClass* Z_Construct_UClass_UABCharacterSetting_NoRegister()
{
	return UABCharacterSetting::StaticClass();
}
struct Z_Construct_UClass_UABCharacterSetting_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "ABCharacterSetting.h" },
		{ "ModuleRelativePath", "Public/ABCharacterSetting.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UABCharacterSetting>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UABCharacterSetting_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ArenaBattle5Setting,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UABCharacterSetting_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UABCharacterSetting_Statics::ClassParams = {
	&UABCharacterSetting::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UABCharacterSetting_Statics::Class_MetaDataParams), Z_Construct_UClass_UABCharacterSetting_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UABCharacterSetting()
{
	if (!Z_Registration_Info_UClass_UABCharacterSetting.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UABCharacterSetting.OuterSingleton, Z_Construct_UClass_UABCharacterSetting_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UABCharacterSetting.OuterSingleton;
}
template<> ARENABATTLE5SETTING_API UClass* StaticClass<UABCharacterSetting>()
{
	return UABCharacterSetting::StaticClass();
}
UABCharacterSetting::UABCharacterSetting(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UABCharacterSetting);
UABCharacterSetting::~UABCharacterSetting() {}
// End Class UABCharacterSetting

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Yelim_Documents_GitHub_Study_Unreal_ArenaBattle5_Source_ArenaBattle5Setting_Public_ABCharacterSetting_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UABCharacterSetting, UABCharacterSetting::StaticClass, TEXT("UABCharacterSetting"), &Z_Registration_Info_UClass_UABCharacterSetting, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UABCharacterSetting), 374488374U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Yelim_Documents_GitHub_Study_Unreal_ArenaBattle5_Source_ArenaBattle5Setting_Public_ABCharacterSetting_h_1113108482(TEXT("/Script/ArenaBattle5Setting"),
	Z_CompiledInDeferFile_FID_Users_Yelim_Documents_GitHub_Study_Unreal_ArenaBattle5_Source_ArenaBattle5Setting_Public_ABCharacterSetting_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Yelim_Documents_GitHub_Study_Unreal_ArenaBattle5_Source_ArenaBattle5Setting_Public_ABCharacterSetting_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
