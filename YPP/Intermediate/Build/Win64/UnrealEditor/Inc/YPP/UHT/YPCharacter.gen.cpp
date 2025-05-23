// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "YPP/Public/YPCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYPCharacter() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_YPP();
YPP_API UClass* Z_Construct_UClass_AYPAIController_NoRegister();
YPP_API UClass* Z_Construct_UClass_AYPCharacter();
YPP_API UClass* Z_Construct_UClass_AYPCharacter_NoRegister();
YPP_API UClass* Z_Construct_UClass_AYPPlayerController_NoRegister();
YPP_API UClass* Z_Construct_UClass_AYPWeapon_NoRegister();
YPP_API UClass* Z_Construct_UClass_UYPAnimInstance_NoRegister();
YPP_API UClass* Z_Construct_UClass_UYPCharacterStatComponent_NoRegister();
YPP_API UEnum* Z_Construct_UEnum_YPP_ECharacterState();
// End Cross Module References

// Begin Class AYPCharacter Function OnAttackMontageEnded
struct Z_Construct_UFunction_AYPCharacter_OnAttackMontageEnded_Statics
{
	struct YPCharacter_eventOnAttackMontageEnded_Parms
	{
		UAnimMontage* Montage;
		bool bInterrupted;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xd6\xb4\xcf\xb8\xef\xbf\xbd\xef\xbf\xbd\xcc\xbc\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc5\xb8\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xdf\xb5\xef\xbf\xbd\xef\xbf\xbd\xcf\xb4\xef\xbf\xbd \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/YPCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xd6\xb4\xcf\xb8\xef\xbf\xbd\xef\xbf\xbd\xcc\xbc\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc5\xb8\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xdf\xb5\xef\xbf\xbd\xef\xbf\xbd\xcf\xb4\xef\xbf\xbd \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Montage;
	static void NewProp_bInterrupted_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInterrupted;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AYPCharacter_OnAttackMontageEnded_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YPCharacter_eventOnAttackMontageEnded_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AYPCharacter_OnAttackMontageEnded_Statics::NewProp_bInterrupted_SetBit(void* Obj)
{
	((YPCharacter_eventOnAttackMontageEnded_Parms*)Obj)->bInterrupted = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AYPCharacter_OnAttackMontageEnded_Statics::NewProp_bInterrupted = { "bInterrupted", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(YPCharacter_eventOnAttackMontageEnded_Parms), &Z_Construct_UFunction_AYPCharacter_OnAttackMontageEnded_Statics::NewProp_bInterrupted_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AYPCharacter_OnAttackMontageEnded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AYPCharacter_OnAttackMontageEnded_Statics::NewProp_Montage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AYPCharacter_OnAttackMontageEnded_Statics::NewProp_bInterrupted,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AYPCharacter_OnAttackMontageEnded_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AYPCharacter_OnAttackMontageEnded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AYPCharacter, nullptr, "OnAttackMontageEnded", nullptr, nullptr, Z_Construct_UFunction_AYPCharacter_OnAttackMontageEnded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AYPCharacter_OnAttackMontageEnded_Statics::PropPointers), sizeof(Z_Construct_UFunction_AYPCharacter_OnAttackMontageEnded_Statics::YPCharacter_eventOnAttackMontageEnded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AYPCharacter_OnAttackMontageEnded_Statics::Function_MetaDataParams), Z_Construct_UFunction_AYPCharacter_OnAttackMontageEnded_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AYPCharacter_OnAttackMontageEnded_Statics::YPCharacter_eventOnAttackMontageEnded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AYPCharacter_OnAttackMontageEnded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AYPCharacter_OnAttackMontageEnded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AYPCharacter::execOnAttackMontageEnded)
{
	P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
	P_GET_UBOOL(Z_Param_bInterrupted);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnAttackMontageEnded(Z_Param_Montage,Z_Param_bInterrupted);
	P_NATIVE_END;
}
// End Class AYPCharacter Function OnAttackMontageEnded

// Begin Class AYPCharacter
void AYPCharacter::StaticRegisterNativesAYPCharacter()
{
	UClass* Class = AYPCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnAttackMontageEnded", &AYPCharacter::execOnAttackMontageEnded },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AYPCharacter);
UClass* Z_Construct_UClass_AYPCharacter_NoRegister()
{
	return AYPCharacter::StaticClass();
}
struct Z_Construct_UClass_AYPCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "YPCharacter.h" },
		{ "ModuleRelativePath", "Public/YPCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentWeapon_MetaData[] = {
		{ "Category", "Weapon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/YPCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterStat_MetaData[] = {
		{ "Category", "Stat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xc4\xb3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/YPCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xc4\xb3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/YPCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/YPCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HPBarWidget_MetaData[] = {
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/YPCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsAttacking_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Attack" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc6\xb4\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc4\xbe\xef\xbf\xbd\xef\xbf\xbd\xcf\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/YPCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc6\xb4\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc4\xbe\xef\xbf\xbd\xef\xbf\xbd\xcf\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CanNextCombo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Attack" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xde\xba\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcc\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/YPCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xde\xba\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcc\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsComboInputOn_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Attack" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xde\xba\xef\xbf\xbd \xef\xbf\xbd\xd4\xb7\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \n" },
#endif
		{ "ModuleRelativePath", "Public/YPCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xde\xba\xef\xbf\xbd \xef\xbf\xbd\xd4\xb7\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentCombo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Attack" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xde\xba\xef\xbf\xbd \xc4\xab\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/YPCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xde\xba\xef\xbf\xbd \xc4\xab\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxCombo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Attack" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xde\xba\xef\xbf\xbd \xc4\xab\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd6\xb4\xef\xbf\xbd\xc4\xa1\n" },
#endif
		{ "ModuleRelativePath", "Public/YPCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xde\xba\xef\xbf\xbd \xc4\xab\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd6\xb4\xef\xbf\xbd\xc4\xa1" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_YPAnim_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xd6\xb4\xef\xbf\xbd \xef\xbf\xbd\xce\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcc\xb9\xc7\xb7\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/YPCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xd6\xb4\xef\xbf\xbd \xef\xbf\xbd\xce\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcc\xb9\xc7\xb7\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackRange_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Attack" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n// AttackCheck \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd SweepSingleByChannel\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n// if ENABLE_DRAW_DEBUG\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/YPCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\nAttackCheck \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd SweepSingleByChannel\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\nif ENABLE_DRAW_DEBUG\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackRadius_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Attack" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n// AttackCheck \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd SweepSingleByChannel\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n// if ENABLE_DRAW_DEBUG\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/YPCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\nAttackCheck \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd SweepSingleByChannel\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\nif ENABLE_DRAW_DEBUG\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "State" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc4\xb3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae\n" },
#endif
		{ "ModuleRelativePath", "Public/YPCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc4\xb3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsPlayer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "State" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xc3\xb7\xef\xbf\xbd\xef\xbf\xbd\xcc\xbe\xef\xbf\xbd \xc4\xb3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xb0\xef\xbf\xbd \xef\xbf\xbd\xc2\xb4\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/YPCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xc3\xb7\xef\xbf\xbd\xef\xbf\xbd\xcc\xbe\xef\xbf\xbd \xc4\xb3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xb0\xef\xbf\xbd \xef\xbf\xbd\xc2\xb4\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_YPAIController_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// AI\xef\xbf\xbd\xef\xbf\xbd\xc6\xae\xef\xbf\xbd\xd1\xb7\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/YPCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "AI\xef\xbf\xbd\xef\xbf\xbd\xc6\xae\xef\xbf\xbd\xd1\xb7\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_YPPlayerController_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xc3\xb7\xef\xbf\xbd\xef\xbf\xbd\xcc\xbe\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc6\xae\xef\xbf\xbd\xd1\xb7\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/YPCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xc3\xb7\xef\xbf\xbd\xef\xbf\xbd\xcc\xbe\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc6\xae\xef\xbf\xbd\xd1\xb7\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeadTimer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "State" },
		{ "ModuleRelativePath", "Public/YPCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentWeapon;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterStat;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HPBarWidget;
	static void NewProp_IsAttacking_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsAttacking;
	static void NewProp_CanNextCombo_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CanNextCombo;
	static void NewProp_IsComboInputOn_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsComboInputOn;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentCombo;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxCombo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_YPAnim;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackRadius;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentState;
	static void NewProp_bIsPlayer_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPlayer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_YPAIController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_YPPlayerController;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeadTimer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AYPCharacter_OnAttackMontageEnded, "OnAttackMontageEnded" }, // 3730324297
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AYPCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AYPCharacter_Statics::NewProp_CurrentWeapon = { "CurrentWeapon", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AYPCharacter, CurrentWeapon), Z_Construct_UClass_AYPWeapon_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentWeapon_MetaData), NewProp_CurrentWeapon_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AYPCharacter_Statics::NewProp_CharacterStat = { "CharacterStat", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AYPCharacter, CharacterStat), Z_Construct_UClass_UYPCharacterStatComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterStat_MetaData), NewProp_CharacterStat_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AYPCharacter_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AYPCharacter, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringArm_MetaData), NewProp_SpringArm_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AYPCharacter_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AYPCharacter, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Camera_MetaData), NewProp_Camera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AYPCharacter_Statics::NewProp_HPBarWidget = { "HPBarWidget", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AYPCharacter, HPBarWidget), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HPBarWidget_MetaData), NewProp_HPBarWidget_MetaData) };
void Z_Construct_UClass_AYPCharacter_Statics::NewProp_IsAttacking_SetBit(void* Obj)
{
	((AYPCharacter*)Obj)->IsAttacking = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AYPCharacter_Statics::NewProp_IsAttacking = { "IsAttacking", nullptr, (EPropertyFlags)0x0040000000020815, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AYPCharacter), &Z_Construct_UClass_AYPCharacter_Statics::NewProp_IsAttacking_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsAttacking_MetaData), NewProp_IsAttacking_MetaData) };
void Z_Construct_UClass_AYPCharacter_Statics::NewProp_CanNextCombo_SetBit(void* Obj)
{
	((AYPCharacter*)Obj)->CanNextCombo = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AYPCharacter_Statics::NewProp_CanNextCombo = { "CanNextCombo", nullptr, (EPropertyFlags)0x0040000000020815, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AYPCharacter), &Z_Construct_UClass_AYPCharacter_Statics::NewProp_CanNextCombo_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CanNextCombo_MetaData), NewProp_CanNextCombo_MetaData) };
void Z_Construct_UClass_AYPCharacter_Statics::NewProp_IsComboInputOn_SetBit(void* Obj)
{
	((AYPCharacter*)Obj)->IsComboInputOn = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AYPCharacter_Statics::NewProp_IsComboInputOn = { "IsComboInputOn", nullptr, (EPropertyFlags)0x0040000000020815, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AYPCharacter), &Z_Construct_UClass_AYPCharacter_Statics::NewProp_IsComboInputOn_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsComboInputOn_MetaData), NewProp_IsComboInputOn_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AYPCharacter_Statics::NewProp_CurrentCombo = { "CurrentCombo", nullptr, (EPropertyFlags)0x0040000000020815, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AYPCharacter, CurrentCombo), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentCombo_MetaData), NewProp_CurrentCombo_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AYPCharacter_Statics::NewProp_MaxCombo = { "MaxCombo", nullptr, (EPropertyFlags)0x0040000000020815, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AYPCharacter, MaxCombo), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxCombo_MetaData), NewProp_MaxCombo_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AYPCharacter_Statics::NewProp_YPAnim = { "YPAnim", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AYPCharacter, YPAnim), Z_Construct_UClass_UYPAnimInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_YPAnim_MetaData), NewProp_YPAnim_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AYPCharacter_Statics::NewProp_AttackRange = { "AttackRange", nullptr, (EPropertyFlags)0x0040000000020815, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AYPCharacter, AttackRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackRange_MetaData), NewProp_AttackRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AYPCharacter_Statics::NewProp_AttackRadius = { "AttackRadius", nullptr, (EPropertyFlags)0x0040000000020815, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AYPCharacter, AttackRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackRadius_MetaData), NewProp_AttackRadius_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AYPCharacter_Statics::NewProp_CurrentState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AYPCharacter_Statics::NewProp_CurrentState = { "CurrentState", nullptr, (EPropertyFlags)0x0040000000022815, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AYPCharacter, CurrentState), Z_Construct_UEnum_YPP_ECharacterState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentState_MetaData), NewProp_CurrentState_MetaData) }; // 3663399047
void Z_Construct_UClass_AYPCharacter_Statics::NewProp_bIsPlayer_SetBit(void* Obj)
{
	((AYPCharacter*)Obj)->bIsPlayer = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AYPCharacter_Statics::NewProp_bIsPlayer = { "bIsPlayer", nullptr, (EPropertyFlags)0x0040000000022815, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AYPCharacter), &Z_Construct_UClass_AYPCharacter_Statics::NewProp_bIsPlayer_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsPlayer_MetaData), NewProp_bIsPlayer_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AYPCharacter_Statics::NewProp_YPAIController = { "YPAIController", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AYPCharacter, YPAIController), Z_Construct_UClass_AYPAIController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_YPAIController_MetaData), NewProp_YPAIController_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AYPCharacter_Statics::NewProp_YPPlayerController = { "YPPlayerController", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AYPCharacter, YPPlayerController), Z_Construct_UClass_AYPPlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_YPPlayerController_MetaData), NewProp_YPPlayerController_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AYPCharacter_Statics::NewProp_DeadTimer = { "DeadTimer", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AYPCharacter, DeadTimer), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeadTimer_MetaData), NewProp_DeadTimer_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AYPCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AYPCharacter_Statics::NewProp_CurrentWeapon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AYPCharacter_Statics::NewProp_CharacterStat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AYPCharacter_Statics::NewProp_SpringArm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AYPCharacter_Statics::NewProp_Camera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AYPCharacter_Statics::NewProp_HPBarWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AYPCharacter_Statics::NewProp_IsAttacking,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AYPCharacter_Statics::NewProp_CanNextCombo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AYPCharacter_Statics::NewProp_IsComboInputOn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AYPCharacter_Statics::NewProp_CurrentCombo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AYPCharacter_Statics::NewProp_MaxCombo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AYPCharacter_Statics::NewProp_YPAnim,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AYPCharacter_Statics::NewProp_AttackRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AYPCharacter_Statics::NewProp_AttackRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AYPCharacter_Statics::NewProp_CurrentState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AYPCharacter_Statics::NewProp_CurrentState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AYPCharacter_Statics::NewProp_bIsPlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AYPCharacter_Statics::NewProp_YPAIController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AYPCharacter_Statics::NewProp_YPPlayerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AYPCharacter_Statics::NewProp_DeadTimer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AYPCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AYPCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_YPP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AYPCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AYPCharacter_Statics::ClassParams = {
	&AYPCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AYPCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AYPCharacter_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AYPCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AYPCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AYPCharacter()
{
	if (!Z_Registration_Info_UClass_AYPCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AYPCharacter.OuterSingleton, Z_Construct_UClass_AYPCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AYPCharacter.OuterSingleton;
}
template<> YPP_API UClass* StaticClass<AYPCharacter>()
{
	return AYPCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AYPCharacter);
AYPCharacter::~AYPCharacter() {}
// End Class AYPCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Git_Study_Unreal_YPP_Source_YPP_Public_YPCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AYPCharacter, AYPCharacter::StaticClass, TEXT("AYPCharacter"), &Z_Registration_Info_UClass_AYPCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AYPCharacter), 3308765805U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_Study_Unreal_YPP_Source_YPP_Public_YPCharacter_h_4205886542(TEXT("/Script/YPP"),
	Z_CompiledInDeferFile_FID_Git_Study_Unreal_YPP_Source_YPP_Public_YPCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Study_Unreal_YPP_Source_YPP_Public_YPCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
