// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArenaBattle5/Public/ABGameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABGameInstance() {}

// Begin Cross Module References
ARENABATTLE5_API UClass* Z_Construct_UClass_UABGameInstance();
ARENABATTLE5_API UClass* Z_Construct_UClass_UABGameInstance_NoRegister();
ARENABATTLE5_API UScriptStruct* Z_Construct_UScriptStruct_FABCharacterData();
ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
UPackage* Z_Construct_UPackage__Script_ArenaBattle5();
// End Cross Module References

// Begin ScriptStruct FABCharacterData
static_assert(std::is_polymorphic<FABCharacterData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FABCharacterData cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ABCharacterData;
class UScriptStruct* FABCharacterData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ABCharacterData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ABCharacterData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FABCharacterData, (UObject*)Z_Construct_UPackage__Script_ArenaBattle5(), TEXT("ABCharacterData"));
	}
	return Z_Registration_Info_UScriptStruct_ABCharacterData.OuterSingleton;
}
template<> ARENABATTLE5_API UScriptStruct* StaticStruct<FABCharacterData>()
{
	return FABCharacterData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FABCharacterData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ABGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/ABGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHP_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/ABGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Attack_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/ABGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DropExp_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/ABGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NextExp_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/ABGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Level;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHP;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Attack;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DropExp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NextExp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FABCharacterData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FABCharacterData_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FABCharacterData, Level), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Level_MetaData), NewProp_Level_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FABCharacterData_Statics::NewProp_MaxHP = { "MaxHP", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FABCharacterData, MaxHP), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHP_MetaData), NewProp_MaxHP_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FABCharacterData_Statics::NewProp_Attack = { "Attack", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FABCharacterData, Attack), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Attack_MetaData), NewProp_Attack_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FABCharacterData_Statics::NewProp_DropExp = { "DropExp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FABCharacterData, DropExp), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DropExp_MetaData), NewProp_DropExp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FABCharacterData_Statics::NewProp_NextExp = { "NextExp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FABCharacterData, NextExp), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NextExp_MetaData), NewProp_NextExp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FABCharacterData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FABCharacterData_Statics::NewProp_Level,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FABCharacterData_Statics::NewProp_MaxHP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FABCharacterData_Statics::NewProp_Attack,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FABCharacterData_Statics::NewProp_DropExp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FABCharacterData_Statics::NewProp_NextExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FABCharacterData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FABCharacterData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ArenaBattle5,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"ABCharacterData",
	Z_Construct_UScriptStruct_FABCharacterData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FABCharacterData_Statics::PropPointers),
	sizeof(FABCharacterData),
	alignof(FABCharacterData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FABCharacterData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FABCharacterData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FABCharacterData()
{
	if (!Z_Registration_Info_UScriptStruct_ABCharacterData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ABCharacterData.InnerSingleton, Z_Construct_UScriptStruct_FABCharacterData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ABCharacterData.InnerSingleton;
}
// End ScriptStruct FABCharacterData

// Begin Class UABGameInstance
void UABGameInstance::StaticRegisterNativesUABGameInstance()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UABGameInstance);
UClass* Z_Construct_UClass_UABGameInstance_NoRegister()
{
	return UABGameInstance::StaticClass();
}
struct Z_Construct_UClass_UABGameInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "ABGameInstance.h" },
		{ "ModuleRelativePath", "Public/ABGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ABCharacterTable_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcc\xba\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/ABGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcc\xba\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ABCharacterTable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UABGameInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UABGameInstance_Statics::NewProp_ABCharacterTable = { "ABCharacterTable", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UABGameInstance, ABCharacterTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ABCharacterTable_MetaData), NewProp_ABCharacterTable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UABGameInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABGameInstance_Statics::NewProp_ABCharacterTable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UABGameInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UABGameInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_ArenaBattle5,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UABGameInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UABGameInstance_Statics::ClassParams = {
	&UABGameInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UABGameInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UABGameInstance_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UABGameInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UABGameInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UABGameInstance()
{
	if (!Z_Registration_Info_UClass_UABGameInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UABGameInstance.OuterSingleton, Z_Construct_UClass_UABGameInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UABGameInstance.OuterSingleton;
}
template<> ARENABATTLE5_API UClass* StaticClass<UABGameInstance>()
{
	return UABGameInstance::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UABGameInstance);
UABGameInstance::~UABGameInstance() {}
// End Class UABGameInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Yelim_Documents_GitHub_Study_Unreal_ArenaBattle5_Source_ArenaBattle5_Public_ABGameInstance_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FABCharacterData::StaticStruct, Z_Construct_UScriptStruct_FABCharacterData_Statics::NewStructOps, TEXT("ABCharacterData"), &Z_Registration_Info_UScriptStruct_ABCharacterData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FABCharacterData), 134514223U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UABGameInstance, UABGameInstance::StaticClass, TEXT("UABGameInstance"), &Z_Registration_Info_UClass_UABGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UABGameInstance), 3787831477U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Yelim_Documents_GitHub_Study_Unreal_ArenaBattle5_Source_ArenaBattle5_Public_ABGameInstance_h_66443453(TEXT("/Script/ArenaBattle5"),
	Z_CompiledInDeferFile_FID_Users_Yelim_Documents_GitHub_Study_Unreal_ArenaBattle5_Source_ArenaBattle5_Public_ABGameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Yelim_Documents_GitHub_Study_Unreal_ArenaBattle5_Source_ArenaBattle5_Public_ABGameInstance_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_Yelim_Documents_GitHub_Study_Unreal_ArenaBattle5_Source_ArenaBattle5_Public_ABGameInstance_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Yelim_Documents_GitHub_Study_Unreal_ArenaBattle5_Source_ArenaBattle5_Public_ABGameInstance_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
