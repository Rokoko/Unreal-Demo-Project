// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Smartsuit/Public/SmartsuitBlueprintLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSmartsuitBlueprintLibrary() {}
// Cross Module References
	SMARTSUIT_API UClass* Z_Construct_UClass_USmartsuitBlueprintLibrary_NoRegister();
	SMARTSUIT_API UClass* Z_Construct_UClass_USmartsuitBlueprintLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Smartsuit();
	SMARTSUIT_API UClass* Z_Construct_UClass_ASmartsuitController_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USmartsuitBlueprintLibrary::execCreateVirtualProductionSource)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		USmartsuitBlueprintLibrary::CreateVirtualProductionSource();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USmartsuitBlueprintLibrary::execJSONTest)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		USmartsuitBlueprintLibrary::JSONTest();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USmartsuitBlueprintLibrary::execGetSmartsuitController)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_id);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ASmartsuitController**)Z_Param__Result=USmartsuitBlueprintLibrary::GetSmartsuitController(Z_Param_id);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USmartsuitBlueprintLibrary::execGetSmartsuitControllerByName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ASmartsuitController**)Z_Param__Result=USmartsuitBlueprintLibrary::GetSmartsuitControllerByName(Z_Param_name);
		P_NATIVE_END;
	}
	void USmartsuitBlueprintLibrary::StaticRegisterNativesUSmartsuitBlueprintLibrary()
	{
		UClass* Class = USmartsuitBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateVirtualProductionSource", &USmartsuitBlueprintLibrary::execCreateVirtualProductionSource },
			{ "GetSmartsuitController", &USmartsuitBlueprintLibrary::execGetSmartsuitController },
			{ "GetSmartsuitControllerByName", &USmartsuitBlueprintLibrary::execGetSmartsuitControllerByName },
			{ "JSONTest", &USmartsuitBlueprintLibrary::execJSONTest },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USmartsuitBlueprintLibrary_CreateVirtualProductionSource_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USmartsuitBlueprintLibrary_CreateVirtualProductionSource_Statics::Function_MetaDataParams[] = {
		{ "Category", "Smartsuit" },
		{ "ModuleRelativePath", "Public/SmartsuitBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USmartsuitBlueprintLibrary_CreateVirtualProductionSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USmartsuitBlueprintLibrary, nullptr, "CreateVirtualProductionSource", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USmartsuitBlueprintLibrary_CreateVirtualProductionSource_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartsuitBlueprintLibrary_CreateVirtualProductionSource_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USmartsuitBlueprintLibrary_CreateVirtualProductionSource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USmartsuitBlueprintLibrary_CreateVirtualProductionSource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetSmartsuitController_Statics
	{
		struct SmartsuitBlueprintLibrary_eventGetSmartsuitController_Parms
		{
			int32 id;
			ASmartsuitController* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_id;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetSmartsuitController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SmartsuitBlueprintLibrary_eventGetSmartsuitController_Parms, ReturnValue), Z_Construct_UClass_ASmartsuitController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetSmartsuitController_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SmartsuitBlueprintLibrary_eventGetSmartsuitController_Parms, id), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetSmartsuitController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetSmartsuitController_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetSmartsuitController_Statics::NewProp_id,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetSmartsuitController_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Smartsuit" },
		{ "ModuleRelativePath", "Public/SmartsuitBlueprintLibrary.h" },
		{ "ToolTip", "Returns a SmartsuitController given it's Index ID. The Index ID is specified in the SmartsuitController details." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetSmartsuitController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USmartsuitBlueprintLibrary, nullptr, "GetSmartsuitController", nullptr, nullptr, sizeof(SmartsuitBlueprintLibrary_eventGetSmartsuitController_Parms), Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetSmartsuitController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetSmartsuitController_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetSmartsuitController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetSmartsuitController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetSmartsuitController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetSmartsuitController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetSmartsuitControllerByName_Statics
	{
		struct SmartsuitBlueprintLibrary_eventGetSmartsuitControllerByName_Parms
		{
			FString name;
			ASmartsuitController* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetSmartsuitControllerByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SmartsuitBlueprintLibrary_eventGetSmartsuitControllerByName_Parms, ReturnValue), Z_Construct_UClass_ASmartsuitController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetSmartsuitControllerByName_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SmartsuitBlueprintLibrary_eventGetSmartsuitControllerByName_Parms, name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetSmartsuitControllerByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetSmartsuitControllerByName_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetSmartsuitControllerByName_Statics::NewProp_name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetSmartsuitControllerByName_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Smartsuit" },
		{ "ModuleRelativePath", "Public/SmartsuitBlueprintLibrary.h" },
		{ "ToolTip", "Returns the SmartsuitController given the Smartsuit name." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetSmartsuitControllerByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USmartsuitBlueprintLibrary, nullptr, "GetSmartsuitControllerByName", nullptr, nullptr, sizeof(SmartsuitBlueprintLibrary_eventGetSmartsuitControllerByName_Parms), Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetSmartsuitControllerByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetSmartsuitControllerByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetSmartsuitControllerByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetSmartsuitControllerByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetSmartsuitControllerByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetSmartsuitControllerByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USmartsuitBlueprintLibrary_JSONTest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USmartsuitBlueprintLibrary_JSONTest_Statics::Function_MetaDataParams[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Public/SmartsuitBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USmartsuitBlueprintLibrary_JSONTest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USmartsuitBlueprintLibrary, nullptr, "JSONTest", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USmartsuitBlueprintLibrary_JSONTest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartsuitBlueprintLibrary_JSONTest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USmartsuitBlueprintLibrary_JSONTest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USmartsuitBlueprintLibrary_JSONTest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USmartsuitBlueprintLibrary_NoRegister()
	{
		return USmartsuitBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_USmartsuitBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USmartsuitBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Smartsuit,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USmartsuitBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USmartsuitBlueprintLibrary_CreateVirtualProductionSource, "CreateVirtualProductionSource" }, // 3607825162
		{ &Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetSmartsuitController, "GetSmartsuitController" }, // 2704058614
		{ &Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetSmartsuitControllerByName, "GetSmartsuitControllerByName" }, // 270468635
		{ &Z_Construct_UFunction_USmartsuitBlueprintLibrary_JSONTest, "JSONTest" }, // 3970344421
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartsuitBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "SmartsuitBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/SmartsuitBlueprintLibrary.h" },
		{ "ScriptName", "SmartsuitLibrary" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USmartsuitBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USmartsuitBlueprintLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USmartsuitBlueprintLibrary_Statics::ClassParams = {
		&USmartsuitBlueprintLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USmartsuitBlueprintLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USmartsuitBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USmartsuitBlueprintLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USmartsuitBlueprintLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USmartsuitBlueprintLibrary, 1508736816);
	template<> SMARTSUIT_API UClass* StaticClass<USmartsuitBlueprintLibrary>()
	{
		return USmartsuitBlueprintLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USmartsuitBlueprintLibrary(Z_Construct_UClass_USmartsuitBlueprintLibrary, &USmartsuitBlueprintLibrary::StaticClass, TEXT("/Script/Smartsuit"), TEXT("USmartsuitBlueprintLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USmartsuitBlueprintLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
