// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "unrecrod_huyna/unrecrod_huynaCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeunrecrod_huynaCharacter() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	UNRECROD_HUYNA_API UClass* Z_Construct_UClass_Aunrecrod_huynaCharacter();
	UNRECROD_HUYNA_API UClass* Z_Construct_UClass_Aunrecrod_huynaCharacter_NoRegister();
	UPackage* Z_Construct_UPackage__Script_unrecrod_huyna();
// End Cross Module References
	DEFINE_FUNCTION(Aunrecrod_huynaCharacter::execGetHasRifle)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetHasRifle();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Aunrecrod_huynaCharacter::execSetHasRifle)
	{
		P_GET_UBOOL(Z_Param_bNewHasRifle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHasRifle(Z_Param_bNewHasRifle);
		P_NATIVE_END;
	}
	void Aunrecrod_huynaCharacter::StaticRegisterNativesAunrecrod_huynaCharacter()
	{
		UClass* Class = Aunrecrod_huynaCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetHasRifle", &Aunrecrod_huynaCharacter::execGetHasRifle },
			{ "SetHasRifle", &Aunrecrod_huynaCharacter::execSetHasRifle },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_Aunrecrod_huynaCharacter_GetHasRifle_Statics
	{
		struct unrecrod_huynaCharacter_eventGetHasRifle_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_Aunrecrod_huynaCharacter_GetHasRifle_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((unrecrod_huynaCharacter_eventGetHasRifle_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_Aunrecrod_huynaCharacter_GetHasRifle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(unrecrod_huynaCharacter_eventGetHasRifle_Parms), &Z_Construct_UFunction_Aunrecrod_huynaCharacter_GetHasRifle_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Aunrecrod_huynaCharacter_GetHasRifle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Aunrecrod_huynaCharacter_GetHasRifle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Aunrecrod_huynaCharacter_GetHasRifle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Getter for the bool */" },
#endif
		{ "ModuleRelativePath", "unrecrod_huynaCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Getter for the bool" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_Aunrecrod_huynaCharacter_GetHasRifle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Aunrecrod_huynaCharacter, nullptr, "GetHasRifle", nullptr, nullptr, Z_Construct_UFunction_Aunrecrod_huynaCharacter_GetHasRifle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Aunrecrod_huynaCharacter_GetHasRifle_Statics::PropPointers), sizeof(Z_Construct_UFunction_Aunrecrod_huynaCharacter_GetHasRifle_Statics::unrecrod_huynaCharacter_eventGetHasRifle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_Aunrecrod_huynaCharacter_GetHasRifle_Statics::Function_MetaDataParams), Z_Construct_UFunction_Aunrecrod_huynaCharacter_GetHasRifle_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_Aunrecrod_huynaCharacter_GetHasRifle_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_Aunrecrod_huynaCharacter_GetHasRifle_Statics::unrecrod_huynaCharacter_eventGetHasRifle_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_Aunrecrod_huynaCharacter_GetHasRifle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_Aunrecrod_huynaCharacter_GetHasRifle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Aunrecrod_huynaCharacter_SetHasRifle_Statics
	{
		struct unrecrod_huynaCharacter_eventSetHasRifle_Parms
		{
			bool bNewHasRifle;
		};
		static void NewProp_bNewHasRifle_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewHasRifle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_Aunrecrod_huynaCharacter_SetHasRifle_Statics::NewProp_bNewHasRifle_SetBit(void* Obj)
	{
		((unrecrod_huynaCharacter_eventSetHasRifle_Parms*)Obj)->bNewHasRifle = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_Aunrecrod_huynaCharacter_SetHasRifle_Statics::NewProp_bNewHasRifle = { "bNewHasRifle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(unrecrod_huynaCharacter_eventSetHasRifle_Parms), &Z_Construct_UFunction_Aunrecrod_huynaCharacter_SetHasRifle_Statics::NewProp_bNewHasRifle_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Aunrecrod_huynaCharacter_SetHasRifle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Aunrecrod_huynaCharacter_SetHasRifle_Statics::NewProp_bNewHasRifle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Aunrecrod_huynaCharacter_SetHasRifle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Setter to set the bool */" },
#endif
		{ "ModuleRelativePath", "unrecrod_huynaCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Setter to set the bool" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_Aunrecrod_huynaCharacter_SetHasRifle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Aunrecrod_huynaCharacter, nullptr, "SetHasRifle", nullptr, nullptr, Z_Construct_UFunction_Aunrecrod_huynaCharacter_SetHasRifle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Aunrecrod_huynaCharacter_SetHasRifle_Statics::PropPointers), sizeof(Z_Construct_UFunction_Aunrecrod_huynaCharacter_SetHasRifle_Statics::unrecrod_huynaCharacter_eventSetHasRifle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_Aunrecrod_huynaCharacter_SetHasRifle_Statics::Function_MetaDataParams), Z_Construct_UFunction_Aunrecrod_huynaCharacter_SetHasRifle_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_Aunrecrod_huynaCharacter_SetHasRifle_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_Aunrecrod_huynaCharacter_SetHasRifle_Statics::unrecrod_huynaCharacter_eventSetHasRifle_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_Aunrecrod_huynaCharacter_SetHasRifle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_Aunrecrod_huynaCharacter_SetHasRifle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(Aunrecrod_huynaCharacter);
	UClass* Z_Construct_UClass_Aunrecrod_huynaCharacter_NoRegister()
	{
		return Aunrecrod_huynaCharacter::StaticClass();
	}
	struct Z_Construct_UClass_Aunrecrod_huynaCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh1P_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh1P;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FirstPersonCameraComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FirstPersonCameraComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasRifle_MetaData[];
#endif
		static void NewProp_bHasRifle_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasRifle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Aunrecrod_huynaCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_unrecrod_huyna,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_Aunrecrod_huynaCharacter_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_Aunrecrod_huynaCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_Aunrecrod_huynaCharacter_GetHasRifle, "GetHasRifle" }, // 2215889405
		{ &Z_Construct_UFunction_Aunrecrod_huynaCharacter_SetHasRifle, "SetHasRifle" }, // 264848642
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_Aunrecrod_huynaCharacter_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aunrecrod_huynaCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "unrecrod_huynaCharacter.h" },
		{ "ModuleRelativePath", "unrecrod_huynaCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aunrecrod_huynaCharacter_Statics::NewProp_Mesh1P_MetaData[] = {
		{ "Category", "Mesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Pawn mesh: 1st person view (arms; seen only by self) */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "unrecrod_huynaCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pawn mesh: 1st person view (arms; seen only by self)" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Aunrecrod_huynaCharacter_Statics::NewProp_Mesh1P = { "Mesh1P", nullptr, (EPropertyFlags)0x00400000000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Aunrecrod_huynaCharacter, Mesh1P), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_Aunrecrod_huynaCharacter_Statics::NewProp_Mesh1P_MetaData), Z_Construct_UClass_Aunrecrod_huynaCharacter_Statics::NewProp_Mesh1P_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aunrecrod_huynaCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** First person camera */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "unrecrod_huynaCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "First person camera" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Aunrecrod_huynaCharacter_Statics::NewProp_FirstPersonCameraComponent = { "FirstPersonCameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Aunrecrod_huynaCharacter, FirstPersonCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_Aunrecrod_huynaCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData), Z_Construct_UClass_Aunrecrod_huynaCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aunrecrod_huynaCharacter_Statics::NewProp_DefaultMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** MappingContext */" },
#endif
		{ "ModuleRelativePath", "unrecrod_huynaCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MappingContext" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Aunrecrod_huynaCharacter_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Aunrecrod_huynaCharacter, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_Aunrecrod_huynaCharacter_Statics::NewProp_DefaultMappingContext_MetaData), Z_Construct_UClass_Aunrecrod_huynaCharacter_Statics::NewProp_DefaultMappingContext_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aunrecrod_huynaCharacter_Statics::NewProp_JumpAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Jump Input Action */" },
#endif
		{ "ModuleRelativePath", "unrecrod_huynaCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Jump Input Action" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Aunrecrod_huynaCharacter_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Aunrecrod_huynaCharacter, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_Aunrecrod_huynaCharacter_Statics::NewProp_JumpAction_MetaData), Z_Construct_UClass_Aunrecrod_huynaCharacter_Statics::NewProp_JumpAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aunrecrod_huynaCharacter_Statics::NewProp_MoveAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Move Input Action */" },
#endif
		{ "ModuleRelativePath", "unrecrod_huynaCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Move Input Action" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Aunrecrod_huynaCharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Aunrecrod_huynaCharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_Aunrecrod_huynaCharacter_Statics::NewProp_MoveAction_MetaData), Z_Construct_UClass_Aunrecrod_huynaCharacter_Statics::NewProp_MoveAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aunrecrod_huynaCharacter_Statics::NewProp_LookAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Look Input Action */" },
#endif
		{ "ModuleRelativePath", "unrecrod_huynaCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Look Input Action" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Aunrecrod_huynaCharacter_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Aunrecrod_huynaCharacter, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_Aunrecrod_huynaCharacter_Statics::NewProp_LookAction_MetaData), Z_Construct_UClass_Aunrecrod_huynaCharacter_Statics::NewProp_LookAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aunrecrod_huynaCharacter_Statics::NewProp_bHasRifle_MetaData[] = {
		{ "Category", "Weapon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Bool for AnimBP to switch to another animation set */" },
#endif
		{ "ModuleRelativePath", "unrecrod_huynaCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Bool for AnimBP to switch to another animation set" },
#endif
	};
#endif
	void Z_Construct_UClass_Aunrecrod_huynaCharacter_Statics::NewProp_bHasRifle_SetBit(void* Obj)
	{
		((Aunrecrod_huynaCharacter*)Obj)->bHasRifle = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_Aunrecrod_huynaCharacter_Statics::NewProp_bHasRifle = { "bHasRifle", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Aunrecrod_huynaCharacter), &Z_Construct_UClass_Aunrecrod_huynaCharacter_Statics::NewProp_bHasRifle_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_Aunrecrod_huynaCharacter_Statics::NewProp_bHasRifle_MetaData), Z_Construct_UClass_Aunrecrod_huynaCharacter_Statics::NewProp_bHasRifle_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_Aunrecrod_huynaCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aunrecrod_huynaCharacter_Statics::NewProp_Mesh1P,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aunrecrod_huynaCharacter_Statics::NewProp_FirstPersonCameraComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aunrecrod_huynaCharacter_Statics::NewProp_DefaultMappingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aunrecrod_huynaCharacter_Statics::NewProp_JumpAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aunrecrod_huynaCharacter_Statics::NewProp_MoveAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aunrecrod_huynaCharacter_Statics::NewProp_LookAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aunrecrod_huynaCharacter_Statics::NewProp_bHasRifle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_Aunrecrod_huynaCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Aunrecrod_huynaCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_Aunrecrod_huynaCharacter_Statics::ClassParams = {
		&Aunrecrod_huynaCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_Aunrecrod_huynaCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_Aunrecrod_huynaCharacter_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_Aunrecrod_huynaCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_Aunrecrod_huynaCharacter_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_Aunrecrod_huynaCharacter_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_Aunrecrod_huynaCharacter()
	{
		if (!Z_Registration_Info_UClass_Aunrecrod_huynaCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_Aunrecrod_huynaCharacter.OuterSingleton, Z_Construct_UClass_Aunrecrod_huynaCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_Aunrecrod_huynaCharacter.OuterSingleton;
	}
	template<> UNRECROD_HUYNA_API UClass* StaticClass<Aunrecrod_huynaCharacter>()
	{
		return Aunrecrod_huynaCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(Aunrecrod_huynaCharacter);
	Aunrecrod_huynaCharacter::~Aunrecrod_huynaCharacter() {}
	struct Z_CompiledInDeferFile_FID_Users_kulik_OneDrive_Documents_unrecrod_huyna_Source_unrecrod_huyna_unrecrod_huynaCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kulik_OneDrive_Documents_unrecrod_huyna_Source_unrecrod_huyna_unrecrod_huynaCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_Aunrecrod_huynaCharacter, Aunrecrod_huynaCharacter::StaticClass, TEXT("Aunrecrod_huynaCharacter"), &Z_Registration_Info_UClass_Aunrecrod_huynaCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(Aunrecrod_huynaCharacter), 2462933817U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kulik_OneDrive_Documents_unrecrod_huyna_Source_unrecrod_huyna_unrecrod_huynaCharacter_h_3329389861(TEXT("/Script/unrecrod_huyna"),
		Z_CompiledInDeferFile_FID_Users_kulik_OneDrive_Documents_unrecrod_huyna_Source_unrecrod_huyna_unrecrod_huynaCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kulik_OneDrive_Documents_unrecrod_huyna_Source_unrecrod_huyna_unrecrod_huynaCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
