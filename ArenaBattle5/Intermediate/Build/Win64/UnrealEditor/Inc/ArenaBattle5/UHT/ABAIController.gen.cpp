// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArenaBattle5/ABAIController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABAIController() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_AAIController();
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
		{ "ModuleRelativePath", "ABAIController.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AABAIController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
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
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
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
struct Z_CompiledInDeferFile_FID_Users_Yelim_Documents_GitHub_Study_Unreal_ArenaBattle5_Source_ArenaBattle5_ABAIController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AABAIController, AABAIController::StaticClass, TEXT("AABAIController"), &Z_Registration_Info_UClass_AABAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AABAIController), 154636374U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Yelim_Documents_GitHub_Study_Unreal_ArenaBattle5_Source_ArenaBattle5_ABAIController_h_2390700748(TEXT("/Script/ArenaBattle5"),
	Z_CompiledInDeferFile_FID_Users_Yelim_Documents_GitHub_Study_Unreal_ArenaBattle5_Source_ArenaBattle5_ABAIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Yelim_Documents_GitHub_Study_Unreal_ArenaBattle5_Source_ArenaBattle5_ABAIController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
