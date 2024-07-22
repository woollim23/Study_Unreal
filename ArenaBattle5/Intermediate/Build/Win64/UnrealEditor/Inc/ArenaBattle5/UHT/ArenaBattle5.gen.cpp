// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArenaBattle5/Public/ArenaBattle5.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArenaBattle5() {}

// Begin Cross Module References
ARENABATTLE5_API UEnum* Z_Construct_UEnum_ArenaBattle5_ECharacterState();
UPackage* Z_Construct_UPackage__Script_ArenaBattle5();
// End Cross Module References

// Begin Enum ECharacterState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECharacterState;
static UEnum* ECharacterState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECharacterState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECharacterState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ArenaBattle5_ECharacterState, (UObject*)Z_Construct_UPackage__Script_ArenaBattle5(), TEXT("ECharacterState"));
	}
	return Z_Registration_Info_UEnum_ECharacterState.OuterSingleton;
}
template<> ARENABATTLE5_API UEnum* StaticEnum<ECharacterState>()
{
	return ECharacterState_StaticEnum();
}
struct Z_Construct_UEnum_ArenaBattle5_ECharacterState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DEAD.Name", "ECharacterState::DEAD" },
		{ "LOADING.Name", "ECharacterState::LOADING" },
		{ "ModuleRelativePath", "Public/ArenaBattle5.h" },
		{ "PREINIT.Name", "ECharacterState::PREINIT" },
		{ "READY.Name", "ECharacterState::READY" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECharacterState::PREINIT", (int64)ECharacterState::PREINIT },
		{ "ECharacterState::LOADING", (int64)ECharacterState::LOADING },
		{ "ECharacterState::READY", (int64)ECharacterState::READY },
		{ "ECharacterState::DEAD", (int64)ECharacterState::DEAD },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ArenaBattle5_ECharacterState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ArenaBattle5,
	nullptr,
	"ECharacterState",
	"ECharacterState",
	Z_Construct_UEnum_ArenaBattle5_ECharacterState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ArenaBattle5_ECharacterState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ArenaBattle5_ECharacterState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ArenaBattle5_ECharacterState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ArenaBattle5_ECharacterState()
{
	if (!Z_Registration_Info_UEnum_ECharacterState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECharacterState.InnerSingleton, Z_Construct_UEnum_ArenaBattle5_ECharacterState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECharacterState.InnerSingleton;
}
// End Enum ECharacterState

// Begin Registration
struct Z_CompiledInDeferFile_FID_Git_Study_Unreal_ArenaBattle5_Source_ArenaBattle5_Public_ArenaBattle5_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ECharacterState_StaticEnum, TEXT("ECharacterState"), &Z_Registration_Info_UEnum_ECharacterState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 633533693U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_Study_Unreal_ArenaBattle5_Source_ArenaBattle5_Public_ArenaBattle5_h_3439340582(TEXT("/Script/ArenaBattle5"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Git_Study_Unreal_ArenaBattle5_Source_ArenaBattle5_Public_ArenaBattle5_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Study_Unreal_ArenaBattle5_Source_ArenaBattle5_Public_ArenaBattle5_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
