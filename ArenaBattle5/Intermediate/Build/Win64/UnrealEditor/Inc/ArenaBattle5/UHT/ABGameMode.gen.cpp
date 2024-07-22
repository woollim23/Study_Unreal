// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArenaBattle5/Public/ABGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABGameMode() {}

// Begin Cross Module References
ARENABATTLE5_API UClass* Z_Construct_UClass_AABGameMode();
ARENABATTLE5_API UClass* Z_Construct_UClass_AABGameMode_NoRegister();
ARENABATTLE5_API UClass* Z_Construct_UClass_AABGameState_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_ArenaBattle5();
// End Cross Module References

// Begin Class AABGameMode
void AABGameMode::StaticRegisterNativesAABGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AABGameMode);
UClass* Z_Construct_UClass_AABGameMode_NoRegister()
{
	return AABGameMode::StaticClass();
}
struct Z_Construct_UClass_AABGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ABGameMode.h" },
		{ "ModuleRelativePath", "Public/ABGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ABGameState_MetaData[] = {
		{ "ModuleRelativePath", "Public/ABGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScoreToClear_MetaData[] = {
		{ "ModuleRelativePath", "Public/ABGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ABGameState;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ScoreToClear;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AABGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AABGameMode_Statics::NewProp_ABGameState = { "ABGameState", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AABGameMode, ABGameState), Z_Construct_UClass_AABGameState_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ABGameState_MetaData), NewProp_ABGameState_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AABGameMode_Statics::NewProp_ScoreToClear = { "ScoreToClear", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AABGameMode, ScoreToClear), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScoreToClear_MetaData), NewProp_ScoreToClear_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AABGameMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABGameMode_Statics::NewProp_ABGameState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABGameMode_Statics::NewProp_ScoreToClear,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AABGameMode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AABGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ArenaBattle5,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AABGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AABGameMode_Statics::ClassParams = {
	&AABGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AABGameMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AABGameMode_Statics::PropPointers),
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AABGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AABGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AABGameMode()
{
	if (!Z_Registration_Info_UClass_AABGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AABGameMode.OuterSingleton, Z_Construct_UClass_AABGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AABGameMode.OuterSingleton;
}
template<> ARENABATTLE5_API UClass* StaticClass<AABGameMode>()
{
	return AABGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AABGameMode);
AABGameMode::~AABGameMode() {}
// End Class AABGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Git_Study_Unreal_ArenaBattle5_Source_ArenaBattle5_Public_ABGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AABGameMode, AABGameMode::StaticClass, TEXT("AABGameMode"), &Z_Registration_Info_UClass_AABGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AABGameMode), 2692767796U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_Study_Unreal_ArenaBattle5_Source_ArenaBattle5_Public_ABGameMode_h_4243161222(TEXT("/Script/ArenaBattle5"),
	Z_CompiledInDeferFile_FID_Git_Study_Unreal_ArenaBattle5_Source_ArenaBattle5_Public_ABGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Study_Unreal_ArenaBattle5_Source_ArenaBattle5_Public_ABGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
