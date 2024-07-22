// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArenaBattle5/Public/ABUIPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABUIPlayerController() {}

// Begin Cross Module References
ARENABATTLE5_API UClass* Z_Construct_UClass_AABUIPlayerController();
ARENABATTLE5_API UClass* Z_Construct_UClass_AABUIPlayerController_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_ArenaBattle5();
// End Cross Module References

// Begin Class AABUIPlayerController
void AABUIPlayerController::StaticRegisterNativesAABUIPlayerController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AABUIPlayerController);
UClass* Z_Construct_UClass_AABUIPlayerController_NoRegister()
{
	return AABUIPlayerController::StaticClass();
}
struct Z_Construct_UClass_AABUIPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "ABUIPlayerController.h" },
		{ "ModuleRelativePath", "Public/ABUIPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UIWidgetClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/ABUIPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UIWidgetInstance_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ABUIPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_UIWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UIWidgetInstance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AABUIPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AABUIPlayerController_Statics::NewProp_UIWidgetClass = { "UIWidgetClass", nullptr, (EPropertyFlags)0x0024080000010005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AABUIPlayerController, UIWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UIWidgetClass_MetaData), NewProp_UIWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AABUIPlayerController_Statics::NewProp_UIWidgetInstance = { "UIWidgetInstance", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AABUIPlayerController, UIWidgetInstance), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UIWidgetInstance_MetaData), NewProp_UIWidgetInstance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AABUIPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABUIPlayerController_Statics::NewProp_UIWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABUIPlayerController_Statics::NewProp_UIWidgetInstance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AABUIPlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AABUIPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_ArenaBattle5,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AABUIPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AABUIPlayerController_Statics::ClassParams = {
	&AABUIPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AABUIPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AABUIPlayerController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AABUIPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AABUIPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AABUIPlayerController()
{
	if (!Z_Registration_Info_UClass_AABUIPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AABUIPlayerController.OuterSingleton, Z_Construct_UClass_AABUIPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AABUIPlayerController.OuterSingleton;
}
template<> ARENABATTLE5_API UClass* StaticClass<AABUIPlayerController>()
{
	return AABUIPlayerController::StaticClass();
}
AABUIPlayerController::AABUIPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AABUIPlayerController);
AABUIPlayerController::~AABUIPlayerController() {}
// End Class AABUIPlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Git_Study_Unreal_ArenaBattle5_Source_ArenaBattle5_Public_ABUIPlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AABUIPlayerController, AABUIPlayerController::StaticClass, TEXT("AABUIPlayerController"), &Z_Registration_Info_UClass_AABUIPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AABUIPlayerController), 1827322710U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_Study_Unreal_ArenaBattle5_Source_ArenaBattle5_Public_ABUIPlayerController_h_2790477729(TEXT("/Script/ArenaBattle5"),
	Z_CompiledInDeferFile_FID_Git_Study_Unreal_ArenaBattle5_Source_ArenaBattle5_Public_ABUIPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Study_Unreal_ArenaBattle5_Source_ArenaBattle5_Public_ABUIPlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
