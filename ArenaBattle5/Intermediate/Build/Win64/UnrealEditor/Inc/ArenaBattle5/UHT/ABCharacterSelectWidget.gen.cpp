// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArenaBattle5/Public/ABCharacterSelectWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABCharacterSelectWidget() {}

// Begin Cross Module References
ARENABATTLE5_API UClass* Z_Construct_UClass_UABCharacterSelectWidget();
ARENABATTLE5_API UClass* Z_Construct_UClass_UABCharacterSelectWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UEditableTextBox_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_ArenaBattle5();
// End Cross Module References

// Begin Class UABCharacterSelectWidget Function NextCharacter
struct Z_Construct_UFunction_UABCharacterSelectWidget_NextCharacter_Statics
{
	struct ABCharacterSelectWidget_eventNextCharacter_Parms
	{
		bool bFoward;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CPP_Default_bFoward", "true" },
		{ "ModuleRelativePath", "Public/ABCharacterSelectWidget.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bFoward_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFoward;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UABCharacterSelectWidget_NextCharacter_Statics::NewProp_bFoward_SetBit(void* Obj)
{
	((ABCharacterSelectWidget_eventNextCharacter_Parms*)Obj)->bFoward = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UABCharacterSelectWidget_NextCharacter_Statics::NewProp_bFoward = { "bFoward", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABCharacterSelectWidget_eventNextCharacter_Parms), &Z_Construct_UFunction_UABCharacterSelectWidget_NextCharacter_Statics::NewProp_bFoward_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABCharacterSelectWidget_NextCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCharacterSelectWidget_NextCharacter_Statics::NewProp_bFoward,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABCharacterSelectWidget_NextCharacter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABCharacterSelectWidget_NextCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABCharacterSelectWidget, nullptr, "NextCharacter", nullptr, nullptr, Z_Construct_UFunction_UABCharacterSelectWidget_NextCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCharacterSelectWidget_NextCharacter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABCharacterSelectWidget_NextCharacter_Statics::ABCharacterSelectWidget_eventNextCharacter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABCharacterSelectWidget_NextCharacter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABCharacterSelectWidget_NextCharacter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABCharacterSelectWidget_NextCharacter_Statics::ABCharacterSelectWidget_eventNextCharacter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABCharacterSelectWidget_NextCharacter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABCharacterSelectWidget_NextCharacter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABCharacterSelectWidget::execNextCharacter)
{
	P_GET_UBOOL(Z_Param_bFoward);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->NextCharacter(Z_Param_bFoward);
	P_NATIVE_END;
}
// End Class UABCharacterSelectWidget Function NextCharacter

// Begin Class UABCharacterSelectWidget Function OnConfirmClicked
struct Z_Construct_UFunction_UABCharacterSelectWidget_OnConfirmClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABCharacterSelectWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABCharacterSelectWidget_OnConfirmClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABCharacterSelectWidget, nullptr, "OnConfirmClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABCharacterSelectWidget_OnConfirmClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABCharacterSelectWidget_OnConfirmClicked_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UABCharacterSelectWidget_OnConfirmClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABCharacterSelectWidget_OnConfirmClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABCharacterSelectWidget::execOnConfirmClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnConfirmClicked();
	P_NATIVE_END;
}
// End Class UABCharacterSelectWidget Function OnConfirmClicked

// Begin Class UABCharacterSelectWidget Function OnNextClicked
struct Z_Construct_UFunction_UABCharacterSelectWidget_OnNextClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABCharacterSelectWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABCharacterSelectWidget_OnNextClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABCharacterSelectWidget, nullptr, "OnNextClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABCharacterSelectWidget_OnNextClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABCharacterSelectWidget_OnNextClicked_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UABCharacterSelectWidget_OnNextClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABCharacterSelectWidget_OnNextClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABCharacterSelectWidget::execOnNextClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnNextClicked();
	P_NATIVE_END;
}
// End Class UABCharacterSelectWidget Function OnNextClicked

// Begin Class UABCharacterSelectWidget Function OnPrevClicked
struct Z_Construct_UFunction_UABCharacterSelectWidget_OnPrevClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABCharacterSelectWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABCharacterSelectWidget_OnPrevClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABCharacterSelectWidget, nullptr, "OnPrevClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABCharacterSelectWidget_OnPrevClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABCharacterSelectWidget_OnPrevClicked_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UABCharacterSelectWidget_OnPrevClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABCharacterSelectWidget_OnPrevClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABCharacterSelectWidget::execOnPrevClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPrevClicked();
	P_NATIVE_END;
}
// End Class UABCharacterSelectWidget Function OnPrevClicked

// Begin Class UABCharacterSelectWidget
void UABCharacterSelectWidget::StaticRegisterNativesUABCharacterSelectWidget()
{
	UClass* Class = UABCharacterSelectWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "NextCharacter", &UABCharacterSelectWidget::execNextCharacter },
		{ "OnConfirmClicked", &UABCharacterSelectWidget::execOnConfirmClicked },
		{ "OnNextClicked", &UABCharacterSelectWidget::execOnNextClicked },
		{ "OnPrevClicked", &UABCharacterSelectWidget::execOnPrevClicked },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UABCharacterSelectWidget);
UClass* Z_Construct_UClass_UABCharacterSelectWidget_NoRegister()
{
	return UABCharacterSelectWidget::StaticClass();
}
struct Z_Construct_UClass_UABCharacterSelectWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "ABCharacterSelectWidget.h" },
		{ "ModuleRelativePath", "Public/ABCharacterSelectWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentIndex_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Public/ABCharacterSelectWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxIndex_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Public/ABCharacterSelectWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrevButton_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ABCharacterSelectWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NextButton_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ABCharacterSelectWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextBox_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ABCharacterSelectWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConfirmButton_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ABCharacterSelectWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PrevButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NextButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TextBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ConfirmButton;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UABCharacterSelectWidget_NextCharacter, "NextCharacter" }, // 3771737380
		{ &Z_Construct_UFunction_UABCharacterSelectWidget_OnConfirmClicked, "OnConfirmClicked" }, // 4028279406
		{ &Z_Construct_UFunction_UABCharacterSelectWidget_OnNextClicked, "OnNextClicked" }, // 4135036213
		{ &Z_Construct_UFunction_UABCharacterSelectWidget_OnPrevClicked, "OnPrevClicked" }, // 1974006972
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UABCharacterSelectWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UABCharacterSelectWidget_Statics::NewProp_CurrentIndex = { "CurrentIndex", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UABCharacterSelectWidget, CurrentIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentIndex_MetaData), NewProp_CurrentIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UABCharacterSelectWidget_Statics::NewProp_MaxIndex = { "MaxIndex", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UABCharacterSelectWidget, MaxIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxIndex_MetaData), NewProp_MaxIndex_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UABCharacterSelectWidget_Statics::NewProp_PrevButton = { "PrevButton", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UABCharacterSelectWidget, PrevButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrevButton_MetaData), NewProp_PrevButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UABCharacterSelectWidget_Statics::NewProp_NextButton = { "NextButton", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UABCharacterSelectWidget, NextButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NextButton_MetaData), NewProp_NextButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UABCharacterSelectWidget_Statics::NewProp_TextBox = { "TextBox", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UABCharacterSelectWidget, TextBox), Z_Construct_UClass_UEditableTextBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextBox_MetaData), NewProp_TextBox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UABCharacterSelectWidget_Statics::NewProp_ConfirmButton = { "ConfirmButton", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UABCharacterSelectWidget, ConfirmButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConfirmButton_MetaData), NewProp_ConfirmButton_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UABCharacterSelectWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABCharacterSelectWidget_Statics::NewProp_CurrentIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABCharacterSelectWidget_Statics::NewProp_MaxIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABCharacterSelectWidget_Statics::NewProp_PrevButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABCharacterSelectWidget_Statics::NewProp_NextButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABCharacterSelectWidget_Statics::NewProp_TextBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABCharacterSelectWidget_Statics::NewProp_ConfirmButton,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UABCharacterSelectWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UABCharacterSelectWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_ArenaBattle5,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UABCharacterSelectWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UABCharacterSelectWidget_Statics::ClassParams = {
	&UABCharacterSelectWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UABCharacterSelectWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UABCharacterSelectWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UABCharacterSelectWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UABCharacterSelectWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UABCharacterSelectWidget()
{
	if (!Z_Registration_Info_UClass_UABCharacterSelectWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UABCharacterSelectWidget.OuterSingleton, Z_Construct_UClass_UABCharacterSelectWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UABCharacterSelectWidget.OuterSingleton;
}
template<> ARENABATTLE5_API UClass* StaticClass<UABCharacterSelectWidget>()
{
	return UABCharacterSelectWidget::StaticClass();
}
UABCharacterSelectWidget::UABCharacterSelectWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UABCharacterSelectWidget);
UABCharacterSelectWidget::~UABCharacterSelectWidget() {}
// End Class UABCharacterSelectWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Git_Study_Unreal_ArenaBattle5_Source_ArenaBattle5_Public_ABCharacterSelectWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UABCharacterSelectWidget, UABCharacterSelectWidget::StaticClass, TEXT("UABCharacterSelectWidget"), &Z_Registration_Info_UClass_UABCharacterSelectWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UABCharacterSelectWidget), 2829738252U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_Study_Unreal_ArenaBattle5_Source_ArenaBattle5_Public_ABCharacterSelectWidget_h_2895082779(TEXT("/Script/ArenaBattle5"),
	Z_CompiledInDeferFile_FID_Git_Study_Unreal_ArenaBattle5_Source_ArenaBattle5_Public_ABCharacterSelectWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Study_Unreal_ArenaBattle5_Source_ArenaBattle5_Public_ABCharacterSelectWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
