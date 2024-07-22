// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArenaBattle5/Public/ABPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABPlayerController() {}

// Begin Cross Module References
ARENABATTLE5_API UClass* Z_Construct_UClass_AABPlayerController();
ARENABATTLE5_API UClass* Z_Construct_UClass_AABPlayerController_NoRegister();
ARENABATTLE5_API UClass* Z_Construct_UClass_AABPlayerState_NoRegister();
ARENABATTLE5_API UClass* Z_Construct_UClass_UABGameplayWidget_NoRegister();
ARENABATTLE5_API UClass* Z_Construct_UClass_UABHUDWidget_NoRegister();
ARENABATTLE5_API UClass* Z_Construct_UClass_UMyABGameplayResultWidget_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
UPackage* Z_Construct_UPackage__Script_ArenaBattle5();
// End Cross Module References

// Begin Class AABPlayerController
void AABPlayerController::StaticRegisterNativesAABPlayerController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AABPlayerController);
UClass* Z_Construct_UClass_AABPlayerController_NoRegister()
{
	return AABPlayerController::StaticClass();
}
struct Z_Construct_UClass_AABPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "ABPlayerController.h" },
		{ "ModuleRelativePath", "Public/ABPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HUDWidgetClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/ABPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MenuWidgetClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/ABPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResultWidgetClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/ABPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HUDWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ABPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ABPlayerState_MetaData[] = {
		{ "ModuleRelativePath", "Public/ABPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MenuWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ABPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResultWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ABPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_HUDWidgetClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_MenuWidgetClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ResultWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HUDWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ABPlayerState;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MenuWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ResultWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AABPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AABPlayerController_Statics::NewProp_HUDWidgetClass = { "HUDWidgetClass", nullptr, (EPropertyFlags)0x0024080000010005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AABPlayerController, HUDWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UABHUDWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HUDWidgetClass_MetaData), NewProp_HUDWidgetClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AABPlayerController_Statics::NewProp_MenuWidgetClass = { "MenuWidgetClass", nullptr, (EPropertyFlags)0x0024080000010005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AABPlayerController, MenuWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UABGameplayWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MenuWidgetClass_MetaData), NewProp_MenuWidgetClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AABPlayerController_Statics::NewProp_ResultWidgetClass = { "ResultWidgetClass", nullptr, (EPropertyFlags)0x0024080000010005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AABPlayerController, ResultWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UMyABGameplayResultWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResultWidgetClass_MetaData), NewProp_ResultWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AABPlayerController_Statics::NewProp_HUDWidget = { "HUDWidget", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AABPlayerController, HUDWidget), Z_Construct_UClass_UABHUDWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HUDWidget_MetaData), NewProp_HUDWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AABPlayerController_Statics::NewProp_ABPlayerState = { "ABPlayerState", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AABPlayerController, ABPlayerState), Z_Construct_UClass_AABPlayerState_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ABPlayerState_MetaData), NewProp_ABPlayerState_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AABPlayerController_Statics::NewProp_MenuWidget = { "MenuWidget", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AABPlayerController, MenuWidget), Z_Construct_UClass_UABGameplayWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MenuWidget_MetaData), NewProp_MenuWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AABPlayerController_Statics::NewProp_ResultWidget = { "ResultWidget", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AABPlayerController, ResultWidget), Z_Construct_UClass_UMyABGameplayResultWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResultWidget_MetaData), NewProp_ResultWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AABPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABPlayerController_Statics::NewProp_HUDWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABPlayerController_Statics::NewProp_MenuWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABPlayerController_Statics::NewProp_ResultWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABPlayerController_Statics::NewProp_HUDWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABPlayerController_Statics::NewProp_ABPlayerState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABPlayerController_Statics::NewProp_MenuWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABPlayerController_Statics::NewProp_ResultWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AABPlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AABPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_ArenaBattle5,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AABPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AABPlayerController_Statics::ClassParams = {
	&AABPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AABPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AABPlayerController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AABPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AABPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AABPlayerController()
{
	if (!Z_Registration_Info_UClass_AABPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AABPlayerController.OuterSingleton, Z_Construct_UClass_AABPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AABPlayerController.OuterSingleton;
}
template<> ARENABATTLE5_API UClass* StaticClass<AABPlayerController>()
{
	return AABPlayerController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AABPlayerController);
AABPlayerController::~AABPlayerController() {}
// End Class AABPlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Git_Study_Unreal_ArenaBattle5_Source_ArenaBattle5_Public_ABPlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AABPlayerController, AABPlayerController::StaticClass, TEXT("AABPlayerController"), &Z_Registration_Info_UClass_AABPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AABPlayerController), 431731982U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_Study_Unreal_ArenaBattle5_Source_ArenaBattle5_Public_ABPlayerController_h_3861676800(TEXT("/Script/ArenaBattle5"),
	Z_CompiledInDeferFile_FID_Git_Study_Unreal_ArenaBattle5_Source_ArenaBattle5_Public_ABPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Study_Unreal_ArenaBattle5_Source_ArenaBattle5_Public_ABPlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
