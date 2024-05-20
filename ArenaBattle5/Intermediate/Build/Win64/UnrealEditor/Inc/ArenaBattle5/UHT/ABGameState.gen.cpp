// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArenaBattle5/Public/ABGameState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABGameState() {}

// Begin Cross Module References
ARENABATTLE5_API UClass* Z_Construct_UClass_AABGameState();
ARENABATTLE5_API UClass* Z_Construct_UClass_AABGameState_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
UPackage* Z_Construct_UPackage__Script_ArenaBattle5();
// End Cross Module References

// Begin Class AABGameState
void AABGameState::StaticRegisterNativesAABGameState()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AABGameState);
UClass* Z_Construct_UClass_AABGameState_NoRegister()
{
	return AABGameState::StaticClass();
}
struct Z_Construct_UClass_AABGameState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ABGameState.h" },
		{ "ModuleRelativePath", "Public/ABGameState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TotalGameScore_MetaData[] = {
		{ "ModuleRelativePath", "Public/ABGameState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_TotalGameScore;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AABGameState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AABGameState_Statics::NewProp_TotalGameScore = { "TotalGameScore", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AABGameState, TotalGameScore), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TotalGameScore_MetaData), NewProp_TotalGameScore_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AABGameState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABGameState_Statics::NewProp_TotalGameScore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AABGameState_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AABGameState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameStateBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ArenaBattle5,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AABGameState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AABGameState_Statics::ClassParams = {
	&AABGameState::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AABGameState_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AABGameState_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AABGameState_Statics::Class_MetaDataParams), Z_Construct_UClass_AABGameState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AABGameState()
{
	if (!Z_Registration_Info_UClass_AABGameState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AABGameState.OuterSingleton, Z_Construct_UClass_AABGameState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AABGameState.OuterSingleton;
}
template<> ARENABATTLE5_API UClass* StaticClass<AABGameState>()
{
	return AABGameState::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AABGameState);
AABGameState::~AABGameState() {}
// End Class AABGameState

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Yelim_Documents_GitHub_Study_Unreal_ArenaBattle5_Source_ArenaBattle5_Public_ABGameState_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AABGameState, AABGameState::StaticClass, TEXT("AABGameState"), &Z_Registration_Info_UClass_AABGameState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AABGameState), 2425171313U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Yelim_Documents_GitHub_Study_Unreal_ArenaBattle5_Source_ArenaBattle5_Public_ABGameState_h_3664789462(TEXT("/Script/ArenaBattle5"),
	Z_CompiledInDeferFile_FID_Users_Yelim_Documents_GitHub_Study_Unreal_ArenaBattle5_Source_ArenaBattle5_Public_ABGameState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Yelim_Documents_GitHub_Study_Unreal_ArenaBattle5_Source_ArenaBattle5_Public_ABGameState_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
