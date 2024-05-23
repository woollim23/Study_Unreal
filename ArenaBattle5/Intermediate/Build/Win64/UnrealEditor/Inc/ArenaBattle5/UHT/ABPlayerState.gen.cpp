// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArenaBattle5/Public/ABPlayerState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABPlayerState() {}

// Begin Cross Module References
ARENABATTLE5_API UClass* Z_Construct_UClass_AABPlayerState();
ARENABATTLE5_API UClass* Z_Construct_UClass_AABPlayerState_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerState();
UPackage* Z_Construct_UPackage__Script_ArenaBattle5();
// End Cross Module References

// Begin Class AABPlayerState
void AABPlayerState::StaticRegisterNativesAABPlayerState()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AABPlayerState);
UClass* Z_Construct_UClass_AABPlayerState_NoRegister()
{
	return AABPlayerState::StaticClass();
}
struct Z_Construct_UClass_AABPlayerState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ABPlayerState.h" },
		{ "ModuleRelativePath", "Public/ABPlayerState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameScore_MetaData[] = {
		{ "ModuleRelativePath", "Public/ABPlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameHighScore_MetaData[] = {
		{ "ModuleRelativePath", "Public/ABPlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterLevel_MetaData[] = {
		{ "ModuleRelativePath", "Public/ABPlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Exp_MetaData[] = {
		{ "ModuleRelativePath", "Public/ABPlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/ABPlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_GameScore;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GameHighScore;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CharacterLevel;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Exp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CharacterIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AABPlayerState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AABPlayerState_Statics::NewProp_GameScore = { "GameScore", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AABPlayerState, GameScore), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameScore_MetaData), NewProp_GameScore_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AABPlayerState_Statics::NewProp_GameHighScore = { "GameHighScore", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AABPlayerState, GameHighScore), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameHighScore_MetaData), NewProp_GameHighScore_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AABPlayerState_Statics::NewProp_CharacterLevel = { "CharacterLevel", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AABPlayerState, CharacterLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterLevel_MetaData), NewProp_CharacterLevel_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AABPlayerState_Statics::NewProp_Exp = { "Exp", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AABPlayerState, Exp), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Exp_MetaData), NewProp_Exp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AABPlayerState_Statics::NewProp_CharacterIndex = { "CharacterIndex", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AABPlayerState, CharacterIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterIndex_MetaData), NewProp_CharacterIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AABPlayerState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABPlayerState_Statics::NewProp_GameScore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABPlayerState_Statics::NewProp_GameHighScore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABPlayerState_Statics::NewProp_CharacterLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABPlayerState_Statics::NewProp_Exp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABPlayerState_Statics::NewProp_CharacterIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AABPlayerState_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AABPlayerState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerState,
	(UObject* (*)())Z_Construct_UPackage__Script_ArenaBattle5,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AABPlayerState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AABPlayerState_Statics::ClassParams = {
	&AABPlayerState::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AABPlayerState_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AABPlayerState_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AABPlayerState_Statics::Class_MetaDataParams), Z_Construct_UClass_AABPlayerState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AABPlayerState()
{
	if (!Z_Registration_Info_UClass_AABPlayerState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AABPlayerState.OuterSingleton, Z_Construct_UClass_AABPlayerState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AABPlayerState.OuterSingleton;
}
template<> ARENABATTLE5_API UClass* StaticClass<AABPlayerState>()
{
	return AABPlayerState::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AABPlayerState);
AABPlayerState::~AABPlayerState() {}
// End Class AABPlayerState

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Yelim_Documents_GitHub_Study_Unreal_ArenaBattle5_Source_ArenaBattle5_Public_ABPlayerState_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AABPlayerState, AABPlayerState::StaticClass, TEXT("AABPlayerState"), &Z_Registration_Info_UClass_AABPlayerState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AABPlayerState), 1663141995U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Yelim_Documents_GitHub_Study_Unreal_ArenaBattle5_Source_ArenaBattle5_Public_ABPlayerState_h_2002904840(TEXT("/Script/ArenaBattle5"),
	Z_CompiledInDeferFile_FID_Users_Yelim_Documents_GitHub_Study_Unreal_ArenaBattle5_Source_ArenaBattle5_Public_ABPlayerState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Yelim_Documents_GitHub_Study_Unreal_ArenaBattle5_Source_ArenaBattle5_Public_ABPlayerState_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
