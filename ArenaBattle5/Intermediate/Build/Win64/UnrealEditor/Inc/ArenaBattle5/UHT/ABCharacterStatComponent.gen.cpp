// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArenaBattle5/Public/ABCharacterStatComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABCharacterStatComponent() {}

// Begin Cross Module References
ARENABATTLE5_API UClass* Z_Construct_UClass_UABCharacterStatComponent();
ARENABATTLE5_API UClass* Z_Construct_UClass_UABCharacterStatComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_ArenaBattle5();
// End Cross Module References

// Begin Class UABCharacterStatComponent
void UABCharacterStatComponent::StaticRegisterNativesUABCharacterStatComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UABCharacterStatComponent);
UClass* Z_Construct_UClass_UABCharacterStatComponent_NoRegister()
{
	return UABCharacterStatComponent::StaticClass();
}
struct Z_Construct_UClass_UABCharacterStatComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ABCharacterStatComponent.h" },
		{ "ModuleRelativePath", "Public/ABCharacterStatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Stat" },
		{ "ModuleRelativePath", "Public/ABCharacterStatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentHP_MetaData[] = {
		{ "AllowPirvateAccess", "TRUE" },
		{ "Category", "Stat" },
		{ "ModuleRelativePath", "Public/ABCharacterStatComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Level;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentHP;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UABCharacterStatComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UABCharacterStatComponent_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0040000000000801, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UABCharacterStatComponent, Level), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Level_MetaData), NewProp_Level_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UABCharacterStatComponent_Statics::NewProp_CurrentHP = { "CurrentHP", nullptr, (EPropertyFlags)0x0040000000022801, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UABCharacterStatComponent, CurrentHP), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentHP_MetaData), NewProp_CurrentHP_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UABCharacterStatComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABCharacterStatComponent_Statics::NewProp_Level,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABCharacterStatComponent_Statics::NewProp_CurrentHP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UABCharacterStatComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UABCharacterStatComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ArenaBattle5,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UABCharacterStatComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UABCharacterStatComponent_Statics::ClassParams = {
	&UABCharacterStatComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UABCharacterStatComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UABCharacterStatComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UABCharacterStatComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UABCharacterStatComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UABCharacterStatComponent()
{
	if (!Z_Registration_Info_UClass_UABCharacterStatComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UABCharacterStatComponent.OuterSingleton, Z_Construct_UClass_UABCharacterStatComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UABCharacterStatComponent.OuterSingleton;
}
template<> ARENABATTLE5_API UClass* StaticClass<UABCharacterStatComponent>()
{
	return UABCharacterStatComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UABCharacterStatComponent);
UABCharacterStatComponent::~UABCharacterStatComponent() {}
// End Class UABCharacterStatComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Git_Study_Unreal_ArenaBattle5_Source_ArenaBattle5_Public_ABCharacterStatComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UABCharacterStatComponent, UABCharacterStatComponent::StaticClass, TEXT("UABCharacterStatComponent"), &Z_Registration_Info_UClass_UABCharacterStatComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UABCharacterStatComponent), 1823960035U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_Study_Unreal_ArenaBattle5_Source_ArenaBattle5_Public_ABCharacterStatComponent_h_1132231461(TEXT("/Script/ArenaBattle5"),
	Z_CompiledInDeferFile_FID_Git_Study_Unreal_ArenaBattle5_Source_ArenaBattle5_Public_ABCharacterStatComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Study_Unreal_ArenaBattle5_Source_ArenaBattle5_Public_ABCharacterStatComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
