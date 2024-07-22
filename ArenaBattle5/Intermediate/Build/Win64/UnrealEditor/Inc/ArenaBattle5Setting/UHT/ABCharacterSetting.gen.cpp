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
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterAssets_MetaData[] = {
		{ "ModuleRelativePath", "Public/ABCharacterSetting.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CharacterAssets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CharacterAssets;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UABCharacterSetting>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UABCharacterSetting_Statics::NewProp_CharacterAssets_Inner = { "CharacterAssets", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UABCharacterSetting_Statics::NewProp_CharacterAssets = { "CharacterAssets", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UABCharacterSetting, CharacterAssets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterAssets_MetaData), NewProp_CharacterAssets_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UABCharacterSetting_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABCharacterSetting_Statics::NewProp_CharacterAssets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABCharacterSetting_Statics::NewProp_CharacterAssets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UABCharacterSetting_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UABCharacterSetting_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ArenaBattle5Setting,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UABCharacterSetting_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UABCharacterSetting_Statics::ClassParams = {
	&UABCharacterSetting::StaticClass,
	"ArenaBattle5",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UABCharacterSetting_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UABCharacterSetting_Statics::PropPointers),
	0,
	0x001000A4u,
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
DEFINE_VTABLE_PTR_HELPER_CTOR(UABCharacterSetting);
UABCharacterSetting::~UABCharacterSetting() {}
// End Class UABCharacterSetting

// Begin Registration
struct Z_CompiledInDeferFile_FID_Git_Study_Unreal_ArenaBattle5_Source_ArenaBattle5Setting_Public_ABCharacterSetting_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UABCharacterSetting, UABCharacterSetting::StaticClass, TEXT("UABCharacterSetting"), &Z_Registration_Info_UClass_UABCharacterSetting, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UABCharacterSetting), 1364827528U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_Study_Unreal_ArenaBattle5_Source_ArenaBattle5Setting_Public_ABCharacterSetting_h_1329126212(TEXT("/Script/ArenaBattle5Setting"),
	Z_CompiledInDeferFile_FID_Git_Study_Unreal_ArenaBattle5_Source_ArenaBattle5Setting_Public_ABCharacterSetting_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Study_Unreal_ArenaBattle5_Source_ArenaBattle5Setting_Public_ABCharacterSetting_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
