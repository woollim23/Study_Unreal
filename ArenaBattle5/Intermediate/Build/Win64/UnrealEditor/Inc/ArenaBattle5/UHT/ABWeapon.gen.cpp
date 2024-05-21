// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArenaBattle5/Public/ABWeapon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABWeapon() {}

// Begin Cross Module References
ARENABATTLE5_API UClass* Z_Construct_UClass_AABWeapon();
ARENABATTLE5_API UClass* Z_Construct_UClass_AABWeapon_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_ArenaBattle5();
// End Cross Module References

// Begin Class AABWeapon
void AABWeapon::StaticRegisterNativesAABWeapon()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AABWeapon);
UClass* Z_Construct_UClass_AABWeapon_NoRegister()
{
	return AABWeapon::StaticClass();
}
struct Z_Construct_UClass_AABWeapon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ABWeapon.h" },
		{ "ModuleRelativePath", "Public/ABWeapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackRange_MetaData[] = {
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "Public/ABWeapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackDamageMin_MetaData[] = {
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "Public/ABWeapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackDamageMax_MetaData[] = {
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "Public/ABWeapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackModifierMin_MetaData[] = {
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "Public/ABWeapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackModifierMax_MetaData[] = {
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "Public/ABWeapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackDamage_MetaData[] = {
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "Public/ABWeapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackModifier_MetaData[] = {
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "Public/ABWeapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Weapon_MetaData[] = {
		{ "Category", "Weapon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ABWeapon.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackDamageMin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackDamageMax;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackModifierMin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackModifierMax;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackDamage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackModifier;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Weapon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AABWeapon>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AABWeapon_Statics::NewProp_AttackRange = { "AttackRange", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AABWeapon, AttackRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackRange_MetaData), NewProp_AttackRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AABWeapon_Statics::NewProp_AttackDamageMin = { "AttackDamageMin", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AABWeapon, AttackDamageMin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackDamageMin_MetaData), NewProp_AttackDamageMin_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AABWeapon_Statics::NewProp_AttackDamageMax = { "AttackDamageMax", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AABWeapon, AttackDamageMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackDamageMax_MetaData), NewProp_AttackDamageMax_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AABWeapon_Statics::NewProp_AttackModifierMin = { "AttackModifierMin", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AABWeapon, AttackModifierMin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackModifierMin_MetaData), NewProp_AttackModifierMin_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AABWeapon_Statics::NewProp_AttackModifierMax = { "AttackModifierMax", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AABWeapon, AttackModifierMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackModifierMax_MetaData), NewProp_AttackModifierMax_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AABWeapon_Statics::NewProp_AttackDamage = { "AttackDamage", nullptr, (EPropertyFlags)0x0020080000022815, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AABWeapon, AttackDamage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackDamage_MetaData), NewProp_AttackDamage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AABWeapon_Statics::NewProp_AttackModifier = { "AttackModifier", nullptr, (EPropertyFlags)0x0020080000022815, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AABWeapon, AttackModifier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackModifier_MetaData), NewProp_AttackModifier_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AABWeapon_Statics::NewProp_Weapon = { "Weapon", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AABWeapon, Weapon), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Weapon_MetaData), NewProp_Weapon_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AABWeapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABWeapon_Statics::NewProp_AttackRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABWeapon_Statics::NewProp_AttackDamageMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABWeapon_Statics::NewProp_AttackDamageMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABWeapon_Statics::NewProp_AttackModifierMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABWeapon_Statics::NewProp_AttackModifierMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABWeapon_Statics::NewProp_AttackDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABWeapon_Statics::NewProp_AttackModifier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABWeapon_Statics::NewProp_Weapon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AABWeapon_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AABWeapon_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_ArenaBattle5,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AABWeapon_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AABWeapon_Statics::ClassParams = {
	&AABWeapon::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AABWeapon_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AABWeapon_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AABWeapon_Statics::Class_MetaDataParams), Z_Construct_UClass_AABWeapon_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AABWeapon()
{
	if (!Z_Registration_Info_UClass_AABWeapon.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AABWeapon.OuterSingleton, Z_Construct_UClass_AABWeapon_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AABWeapon.OuterSingleton;
}
template<> ARENABATTLE5_API UClass* StaticClass<AABWeapon>()
{
	return AABWeapon::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AABWeapon);
AABWeapon::~AABWeapon() {}
// End Class AABWeapon

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Yelim_Documents_GitHub_Study_Unreal_ArenaBattle5_Source_ArenaBattle5_Public_ABWeapon_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AABWeapon, AABWeapon::StaticClass, TEXT("AABWeapon"), &Z_Registration_Info_UClass_AABWeapon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AABWeapon), 279355533U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Yelim_Documents_GitHub_Study_Unreal_ArenaBattle5_Source_ArenaBattle5_Public_ABWeapon_h_4078062686(TEXT("/Script/ArenaBattle5"),
	Z_CompiledInDeferFile_FID_Users_Yelim_Documents_GitHub_Study_Unreal_ArenaBattle5_Source_ArenaBattle5_Public_ABWeapon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Yelim_Documents_GitHub_Study_Unreal_ArenaBattle5_Source_ArenaBattle5_Public_ABWeapon_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
