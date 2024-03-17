// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "unrecrod_huyna/unrecrod_huynaPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeunrecrod_huynaPlayerController() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	UNRECROD_HUYNA_API UClass* Z_Construct_UClass_Aunrecrod_huynaPlayerController();
	UNRECROD_HUYNA_API UClass* Z_Construct_UClass_Aunrecrod_huynaPlayerController_NoRegister();
	UPackage* Z_Construct_UPackage__Script_unrecrod_huyna();
// End Cross Module References
	void Aunrecrod_huynaPlayerController::StaticRegisterNativesAunrecrod_huynaPlayerController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(Aunrecrod_huynaPlayerController);
	UClass* Z_Construct_UClass_Aunrecrod_huynaPlayerController_NoRegister()
	{
		return Aunrecrod_huynaPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_Aunrecrod_huynaPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMappingContext;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Aunrecrod_huynaPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_unrecrod_huyna,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_Aunrecrod_huynaPlayerController_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aunrecrod_huynaPlayerController_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "unrecrod_huynaPlayerController.h" },
		{ "ModuleRelativePath", "unrecrod_huynaPlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aunrecrod_huynaPlayerController_Statics::NewProp_InputMappingContext_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Input Mapping Context to be used for player input */" },
#endif
		{ "ModuleRelativePath", "unrecrod_huynaPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input Mapping Context to be used for player input" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Aunrecrod_huynaPlayerController_Statics::NewProp_InputMappingContext = { "InputMappingContext", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Aunrecrod_huynaPlayerController, InputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_Aunrecrod_huynaPlayerController_Statics::NewProp_InputMappingContext_MetaData), Z_Construct_UClass_Aunrecrod_huynaPlayerController_Statics::NewProp_InputMappingContext_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_Aunrecrod_huynaPlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aunrecrod_huynaPlayerController_Statics::NewProp_InputMappingContext,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_Aunrecrod_huynaPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Aunrecrod_huynaPlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_Aunrecrod_huynaPlayerController_Statics::ClassParams = {
		&Aunrecrod_huynaPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_Aunrecrod_huynaPlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_Aunrecrod_huynaPlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_Aunrecrod_huynaPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_Aunrecrod_huynaPlayerController_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_Aunrecrod_huynaPlayerController_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_Aunrecrod_huynaPlayerController()
	{
		if (!Z_Registration_Info_UClass_Aunrecrod_huynaPlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_Aunrecrod_huynaPlayerController.OuterSingleton, Z_Construct_UClass_Aunrecrod_huynaPlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_Aunrecrod_huynaPlayerController.OuterSingleton;
	}
	template<> UNRECROD_HUYNA_API UClass* StaticClass<Aunrecrod_huynaPlayerController>()
	{
		return Aunrecrod_huynaPlayerController::StaticClass();
	}
	Aunrecrod_huynaPlayerController::Aunrecrod_huynaPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(Aunrecrod_huynaPlayerController);
	Aunrecrod_huynaPlayerController::~Aunrecrod_huynaPlayerController() {}
	struct Z_CompiledInDeferFile_FID_UnrealProjects_unreal_huyna_unrecrod_huyna_Source_unrecrod_huyna_unrecrod_huynaPlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_unreal_huyna_unrecrod_huyna_Source_unrecrod_huyna_unrecrod_huynaPlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_Aunrecrod_huynaPlayerController, Aunrecrod_huynaPlayerController::StaticClass, TEXT("Aunrecrod_huynaPlayerController"), &Z_Registration_Info_UClass_Aunrecrod_huynaPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(Aunrecrod_huynaPlayerController), 2158832487U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_unreal_huyna_unrecrod_huyna_Source_unrecrod_huyna_unrecrod_huynaPlayerController_h_2859518209(TEXT("/Script/unrecrod_huyna"),
		Z_CompiledInDeferFile_FID_UnrealProjects_unreal_huyna_unrecrod_huyna_Source_unrecrod_huyna_unrecrod_huynaPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_unreal_huyna_unrecrod_huyna_Source_unrecrod_huyna_unrecrod_huynaPlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
