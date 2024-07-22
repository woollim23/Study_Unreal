// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArenaBattle5/Public/ABAIController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABAIController() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_AAIController();
AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UBlackboardData_NoRegister();
ARENABATTLE5_API UClass* Z_Construct_UClass_AABAIController();
ARENABATTLE5_API UClass* Z_Construct_UClass_AABAIController_NoRegister();
UPackage* Z_Construct_UPackage__Script_ArenaBattle5();
// End Cross Module References

// Begin Class AABAIController
void AABAIController::StaticRegisterNativesAABAIController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AABAIController);
UClass* Z_Construct_UClass_AABAIController_NoRegister()
{
	return AABAIController::StaticClass();
}
struct Z_Construct_UClass_AABAIController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "ABAIController.h" },
		{ "ModuleRelativePath", "Public/ABAIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BTAsset_MetaData[] = {
		{ "ModuleRelativePath", "Public/ABAIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BBAsset_MetaData[] = {
		{ "ModuleRelativePath", "Public/ABAIController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BTAsset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BBAsset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AABAIController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AABAIController_Statics::NewProp_BTAsset = { "BTAsset", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AABAIController, BTAsset), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BTAsset_MetaData), NewProp_BTAsset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AABAIController_Statics::NewProp_BBAsset = { "BBAsset", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AABAIController, BBAsset), Z_Construct_UClass_UBlackboardData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BBAsset_MetaData), NewProp_BBAsset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AABAIController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABAIController_Statics::NewProp_BTAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABAIController_Statics::NewProp_BBAsset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AABAIController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AABAIController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAIController,
	(UObject* (*)())Z_Construct_UPackage__Script_ArenaBattle5,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AABAIController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AABAIController_Statics::ClassParams = {
	&AABAIController::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AABAIController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AABAIController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AABAIController_Statics::Class_MetaDataParams), Z_Construct_UClass_AABAIController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AABAIController()
{
	if (!Z_Registration_Info_UClass_AABAIController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AABAIController.OuterSingleton, Z_Construct_UClass_AABAIController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AABAIController.OuterSingleton;
}
template<> ARENABATTLE5_API UClass* StaticClass<AABAIController>()
{
	return AABAIController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AABAIController);
AABAIController::~AABAIController() {}
// End Class AABAIController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Git_Study_Unreal_ArenaBattle5_Source_ArenaBattle5_Public_ABAIController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AABAIController, AABAIController::StaticClass, TEXT("AABAIController"), &Z_Registration_Info_UClass_AABAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AABAIController), 1692535545U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_Study_Unreal_ArenaBattle5_Source_ArenaBattle5_Public_ABAIController_h_2755433598(TEXT("/Script/ArenaBattle5"),
	Z_CompiledInDeferFile_FID_Git_Study_Unreal_ArenaBattle5_Source_ArenaBattle5_Public_ABAIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Study_Unreal_ArenaBattle5_Source_ArenaBattle5_Public_ABAIController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
