// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArenaBattle5/ArenaBattle5GameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArenaBattle5GameMode() {}

// Begin Cross Module References
ARENABATTLE5_API UClass* Z_Construct_UClass_AArenaBattle5GameMode();
ARENABATTLE5_API UClass* Z_Construct_UClass_AArenaBattle5GameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_ArenaBattle5();
// End Cross Module References

// Begin Class AArenaBattle5GameMode
void AArenaBattle5GameMode::StaticRegisterNativesAArenaBattle5GameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AArenaBattle5GameMode);
UClass* Z_Construct_UClass_AArenaBattle5GameMode_NoRegister()
{
	return AArenaBattle5GameMode::StaticClass();
}
struct Z_Construct_UClass_AArenaBattle5GameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ArenaBattle5GameMode.h" },
		{ "ModuleRelativePath", "ArenaBattle5GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AArenaBattle5GameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AArenaBattle5GameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ArenaBattle5,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AArenaBattle5GameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AArenaBattle5GameMode_Statics::ClassParams = {
	&AArenaBattle5GameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AArenaBattle5GameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AArenaBattle5GameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AArenaBattle5GameMode()
{
	if (!Z_Registration_Info_UClass_AArenaBattle5GameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AArenaBattle5GameMode.OuterSingleton, Z_Construct_UClass_AArenaBattle5GameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AArenaBattle5GameMode.OuterSingleton;
}
template<> ARENABATTLE5_API UClass* StaticClass<AArenaBattle5GameMode>()
{
	return AArenaBattle5GameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AArenaBattle5GameMode);
AArenaBattle5GameMode::~AArenaBattle5GameMode() {}
// End Class AArenaBattle5GameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Yelim_Documents_GitHub_Study_Unreal_ArenaBattle5_Source_ArenaBattle5_ArenaBattle5GameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AArenaBattle5GameMode, AArenaBattle5GameMode::StaticClass, TEXT("AArenaBattle5GameMode"), &Z_Registration_Info_UClass_AArenaBattle5GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AArenaBattle5GameMode), 2709531518U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Yelim_Documents_GitHub_Study_Unreal_ArenaBattle5_Source_ArenaBattle5_ArenaBattle5GameMode_h_2251077121(TEXT("/Script/ArenaBattle5"),
	Z_CompiledInDeferFile_FID_Users_Yelim_Documents_GitHub_Study_Unreal_ArenaBattle5_Source_ArenaBattle5_ArenaBattle5GameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Yelim_Documents_GitHub_Study_Unreal_ArenaBattle5_Source_ArenaBattle5_ArenaBattle5GameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
