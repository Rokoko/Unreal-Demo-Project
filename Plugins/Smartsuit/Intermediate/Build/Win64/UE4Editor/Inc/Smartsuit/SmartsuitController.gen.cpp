// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Smartsuit/Public/SmartsuitController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSmartsuitController() {}
// Cross Module References
	SMARTSUIT_API UScriptStruct* Z_Construct_UScriptStruct_FBodyModel();
	UPackage* Z_Construct_UPackage__Script_Smartsuit();
	SMARTSUIT_API UClass* Z_Construct_UClass_ASmartsuitController_NoRegister();
	SMARTSUIT_API UClass* Z_Construct_UClass_ASmartsuitController();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
// End Cross Module References
class UScriptStruct* FBodyModel::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SMARTSUIT_API uint32 Get_Z_Construct_UScriptStruct_FBodyModel_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBodyModel, Z_Construct_UPackage__Script_Smartsuit(), TEXT("BodyModel"), sizeof(FBodyModel), Get_Z_Construct_UScriptStruct_FBodyModel_Hash());
	}
	return Singleton;
}
template<> SMARTSUIT_API UScriptStruct* StaticStruct<FBodyModel>()
{
	return FBodyModel::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBodyModel(FBodyModel::StaticStruct, TEXT("/Script/Smartsuit"), TEXT("BodyModel"), false, nullptr, nullptr);
static struct FScriptStruct_Smartsuit_StaticRegisterNativesFBodyModel
{
	FScriptStruct_Smartsuit_StaticRegisterNativesFBodyModel()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BodyModel")),new UScriptStruct::TCppStructOps<FBodyModel>);
	}
} ScriptStruct_Smartsuit_StaticRegisterNativesFBodyModel;
	struct Z_Construct_UScriptStruct_FBodyModel_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeelOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HeelOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FootLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FootLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnkleHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AnkleHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArmSpan_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ArmSpan;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShoulderWidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ShoulderWidth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HipWidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HipWidth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HipHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HipHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShoulderHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ShoulderHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TotalHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyModel_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SmartsuitController.h" },
		{ "ToolTip", "The BodyModel represents the dimensions of the player that wears the suit. Having this information correct is important for the Smartsuit to perform better." },
	};
#endif
	void* Z_Construct_UScriptStruct_FBodyModel_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBodyModel>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyModel_Statics::NewProp_HeelOffset_MetaData[] = {
		{ "Category", "Smartsuit" },
		{ "ModuleRelativePath", "Public/SmartsuitController.h" },
		{ "ToolTip", "The heel offset of the player wearing the Smartsuit." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBodyModel_Statics::NewProp_HeelOffset = { "HeelOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBodyModel, HeelOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyModel_Statics::NewProp_HeelOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyModel_Statics::NewProp_HeelOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyModel_Statics::NewProp_FootLength_MetaData[] = {
		{ "Category", "Smartsuit" },
		{ "ModuleRelativePath", "Public/SmartsuitController.h" },
		{ "ToolTip", "The foot length of the player wearing the Smartsuit." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBodyModel_Statics::NewProp_FootLength = { "FootLength", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBodyModel, FootLength), METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyModel_Statics::NewProp_FootLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyModel_Statics::NewProp_FootLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyModel_Statics::NewProp_AnkleHeight_MetaData[] = {
		{ "Category", "Smartsuit" },
		{ "ModuleRelativePath", "Public/SmartsuitController.h" },
		{ "ToolTip", "The ankle height of the player wearing the Smartsuit." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBodyModel_Statics::NewProp_AnkleHeight = { "AnkleHeight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBodyModel, AnkleHeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyModel_Statics::NewProp_AnkleHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyModel_Statics::NewProp_AnkleHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyModel_Statics::NewProp_ArmSpan_MetaData[] = {
		{ "Category", "Smartsuit" },
		{ "ModuleRelativePath", "Public/SmartsuitController.h" },
		{ "ToolTip", "The arm span of the player wearing the Smartsuit." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBodyModel_Statics::NewProp_ArmSpan = { "ArmSpan", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBodyModel, ArmSpan), METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyModel_Statics::NewProp_ArmSpan_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyModel_Statics::NewProp_ArmSpan_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyModel_Statics::NewProp_ShoulderWidth_MetaData[] = {
		{ "Category", "Smartsuit" },
		{ "ModuleRelativePath", "Public/SmartsuitController.h" },
		{ "ToolTip", "The shoulder width of the player wearing the Smartsuit." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBodyModel_Statics::NewProp_ShoulderWidth = { "ShoulderWidth", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBodyModel, ShoulderWidth), METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyModel_Statics::NewProp_ShoulderWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyModel_Statics::NewProp_ShoulderWidth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyModel_Statics::NewProp_HipWidth_MetaData[] = {
		{ "Category", "Smartsuit" },
		{ "ModuleRelativePath", "Public/SmartsuitController.h" },
		{ "ToolTip", "The hip width of the player wearing the Smartsuit." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBodyModel_Statics::NewProp_HipWidth = { "HipWidth", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBodyModel, HipWidth), METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyModel_Statics::NewProp_HipWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyModel_Statics::NewProp_HipWidth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyModel_Statics::NewProp_HipHeight_MetaData[] = {
		{ "Category", "Smartsuit" },
		{ "ModuleRelativePath", "Public/SmartsuitController.h" },
		{ "ToolTip", "The hip height of the player wearing the Smartsuit." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBodyModel_Statics::NewProp_HipHeight = { "HipHeight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBodyModel, HipHeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyModel_Statics::NewProp_HipHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyModel_Statics::NewProp_HipHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyModel_Statics::NewProp_ShoulderHeight_MetaData[] = {
		{ "Category", "Smartsuit" },
		{ "ModuleRelativePath", "Public/SmartsuitController.h" },
		{ "ToolTip", "The shoulder height of the player wearing the Smartsuit." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBodyModel_Statics::NewProp_ShoulderHeight = { "ShoulderHeight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBodyModel, ShoulderHeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyModel_Statics::NewProp_ShoulderHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyModel_Statics::NewProp_ShoulderHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyModel_Statics::NewProp_TotalHeight_MetaData[] = {
		{ "Category", "Smartsuit" },
		{ "ModuleRelativePath", "Public/SmartsuitController.h" },
		{ "ToolTip", "The total height of the player wearing the Smartsuit." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBodyModel_Statics::NewProp_TotalHeight = { "TotalHeight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBodyModel, TotalHeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyModel_Statics::NewProp_TotalHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyModel_Statics::NewProp_TotalHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyModel_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Smartsuit" },
		{ "ModuleRelativePath", "Public/SmartsuitController.h" },
		{ "ToolTip", "A friendly name for the BodyProfile." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBodyModel_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBodyModel, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyModel_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyModel_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBodyModel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyModel_Statics::NewProp_HeelOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyModel_Statics::NewProp_FootLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyModel_Statics::NewProp_AnkleHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyModel_Statics::NewProp_ArmSpan,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyModel_Statics::NewProp_ShoulderWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyModel_Statics::NewProp_HipWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyModel_Statics::NewProp_HipHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyModel_Statics::NewProp_ShoulderHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyModel_Statics::NewProp_TotalHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyModel_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBodyModel_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Smartsuit,
		nullptr,
		&NewStructOps,
		"BodyModel",
		sizeof(FBodyModel),
		alignof(FBodyModel),
		Z_Construct_UScriptStruct_FBodyModel_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyModel_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyModel_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyModel_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBodyModel()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBodyModel_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Smartsuit();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BodyModel"), sizeof(FBodyModel), Get_Z_Construct_UScriptStruct_FBodyModel_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBodyModel_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBodyModel_Hash() { return 1059914567U; }
	DEFINE_FUNCTION(ASmartsuitController::execDoTests)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DoTests();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASmartsuitController::execGetBodyModel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetBodyModel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASmartsuitController::execSetBodyModel)
	{
		P_GET_STRUCT(FBodyModel,Z_Param_bodyToSet);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBodyModel(Z_Param_bodyToSet);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASmartsuitController::execUnicast)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Unicast();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASmartsuitController::execBroadcast)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Broadcast();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASmartsuitController::execCalibrate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Calibrate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASmartsuitController::execRestart)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Restart();
		P_NATIVE_END;
	}
	void ASmartsuitController::StaticRegisterNativesASmartsuitController()
	{
		UClass* Class = ASmartsuitController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Broadcast", &ASmartsuitController::execBroadcast },
			{ "Calibrate", &ASmartsuitController::execCalibrate },
			{ "DoTests", &ASmartsuitController::execDoTests },
			{ "GetBodyModel", &ASmartsuitController::execGetBodyModel },
			{ "Restart", &ASmartsuitController::execRestart },
			{ "SetBodyModel", &ASmartsuitController::execSetBodyModel },
			{ "Unicast", &ASmartsuitController::execUnicast },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASmartsuitController_Broadcast_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASmartsuitController_Broadcast_Statics::Function_MetaDataParams[] = {
		{ "Category", "Smartsuit" },
		{ "ModuleRelativePath", "Public/SmartsuitController.h" },
		{ "ToolTip", "Send a request to make the Smartsuit, Broadcast it's UDP messages. This only applies for the real-time motion data. Not command responses." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASmartsuitController_Broadcast_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASmartsuitController, nullptr, "Broadcast", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASmartsuitController_Broadcast_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASmartsuitController_Broadcast_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASmartsuitController_Broadcast()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASmartsuitController_Broadcast_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASmartsuitController_Calibrate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASmartsuitController_Calibrate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Smartsuit" },
		{ "ModuleRelativePath", "Public/SmartsuitController.h" },
		{ "ToolTip", "Send an A-pose calibration command to the Smartsuit binded to this Controller." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASmartsuitController_Calibrate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASmartsuitController, nullptr, "Calibrate", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASmartsuitController_Calibrate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASmartsuitController_Calibrate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASmartsuitController_Calibrate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASmartsuitController_Calibrate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASmartsuitController_DoTests_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASmartsuitController_DoTests_Statics::Function_MetaDataParams[] = {
		{ "Category", "Smartsuit" },
		{ "ModuleRelativePath", "Public/SmartsuitController.h" },
		{ "ToolTip", "Tests" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASmartsuitController_DoTests_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASmartsuitController, nullptr, "DoTests", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASmartsuitController_DoTests_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASmartsuitController_DoTests_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASmartsuitController_DoTests()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASmartsuitController_DoTests_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASmartsuitController_GetBodyModel_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASmartsuitController_GetBodyModel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Smartsuit" },
		{ "ModuleRelativePath", "Public/SmartsuitController.h" },
		{ "ToolTip", "Sends a request to the Smartsuit to ask what BodyModel the Smartsuit is using. Once the Controller receives the response. It updates it's BodyModel to match the one the Smartsuit is using." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASmartsuitController_GetBodyModel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASmartsuitController, nullptr, "GetBodyModel", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASmartsuitController_GetBodyModel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASmartsuitController_GetBodyModel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASmartsuitController_GetBodyModel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASmartsuitController_GetBodyModel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASmartsuitController_Restart_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASmartsuitController_Restart_Statics::Function_MetaDataParams[] = {
		{ "Category", "Smartsuit" },
		{ "ModuleRelativePath", "Public/SmartsuitController.h" },
		{ "ToolTip", "Send a restart command to the Smartsuit binded to this Controller." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASmartsuitController_Restart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASmartsuitController, nullptr, "Restart", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASmartsuitController_Restart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASmartsuitController_Restart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASmartsuitController_Restart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASmartsuitController_Restart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASmartsuitController_SetBodyModel_Statics
	{
		struct SmartsuitController_eventSetBodyModel_Parms
		{
			FBodyModel bodyToSet;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bodyToSet;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASmartsuitController_SetBodyModel_Statics::NewProp_bodyToSet = { "bodyToSet", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SmartsuitController_eventSetBodyModel_Parms, bodyToSet), Z_Construct_UScriptStruct_FBodyModel, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASmartsuitController_SetBodyModel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASmartsuitController_SetBodyModel_Statics::NewProp_bodyToSet,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASmartsuitController_SetBodyModel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Smartsuit" },
		{ "ModuleRelativePath", "Public/SmartsuitController.h" },
		{ "ToolTip", "Send a command to set a BodyModel to the Smartsuit binded to this Controller." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASmartsuitController_SetBodyModel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASmartsuitController, nullptr, "SetBodyModel", nullptr, nullptr, sizeof(SmartsuitController_eventSetBodyModel_Parms), Z_Construct_UFunction_ASmartsuitController_SetBodyModel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASmartsuitController_SetBodyModel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASmartsuitController_SetBodyModel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASmartsuitController_SetBodyModel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASmartsuitController_SetBodyModel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASmartsuitController_SetBodyModel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASmartsuitController_Unicast_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASmartsuitController_Unicast_Statics::Function_MetaDataParams[] = {
		{ "Category", "Smartsuit" },
		{ "ModuleRelativePath", "Public/SmartsuitController.h" },
		{ "ToolTip", "Send a request to make the Smartsuit, Unicast it's UDP messages to the current device. This only applies for the real-time motion data. Not command responses." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASmartsuitController_Unicast_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASmartsuitController, nullptr, "Unicast", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASmartsuitController_Unicast_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASmartsuitController_Unicast_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASmartsuitController_Unicast()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASmartsuitController_Unicast_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASmartsuitController_NoRegister()
	{
		return ASmartsuitController::StaticClass();
	}
	struct Z_Construct_UClass_ASmartsuitController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bodyModel_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bodyModel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_wifiApiVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_wifiApiVersion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fps_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fps;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hasProfile_MetaData[];
#endif
		static void NewProp_hasProfile_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_hasProfile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isBroadcast_MetaData[];
#endif
		static void NewProp_isBroadcast_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isBroadcast;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IndexID_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_IndexID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_suitname_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_suitname;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoConnect_MetaData[];
#endif
		static void NewProp_AutoConnect_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AutoConnect;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASmartsuitController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Smartsuit,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASmartsuitController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASmartsuitController_Broadcast, "Broadcast" }, // 4244067947
		{ &Z_Construct_UFunction_ASmartsuitController_Calibrate, "Calibrate" }, // 1973392089
		{ &Z_Construct_UFunction_ASmartsuitController_DoTests, "DoTests" }, // 2138879215
		{ &Z_Construct_UFunction_ASmartsuitController_GetBodyModel, "GetBodyModel" }, // 3837323962
		{ &Z_Construct_UFunction_ASmartsuitController_Restart, "Restart" }, // 2375850908
		{ &Z_Construct_UFunction_ASmartsuitController_SetBodyModel, "SetBodyModel" }, // 2772242389
		{ &Z_Construct_UFunction_ASmartsuitController_Unicast, "Unicast" }, // 2250182643
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASmartsuitController_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SmartsuitController.h" },
		{ "ModuleRelativePath", "Public/SmartsuitController.h" },
		{ "ToolTip", "A SmartsuitController provides functionality to connect with a Smartsuit, send and receive commands. You need to define one SmartsuitController per Smartsuit you waant to support in your game. For example if you have one Smartsuit, you need one SmartsuitController that will bind to the Smartsuit. This component will work only if one SmartsuitReceiver is in the level." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASmartsuitController_Statics::NewProp_bodyModel_MetaData[] = {
		{ "Category", "SmartsuitReadOnly" },
		{ "ModuleRelativePath", "Public/SmartsuitController.h" },
		{ "ToolTip", "Read-only: Indicates the current known BodyProfile for the Smartsuit connected to this SmartsuitController." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASmartsuitController_Statics::NewProp_bodyModel = { "bodyModel", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASmartsuitController, bodyModel), Z_Construct_UScriptStruct_FBodyModel, METADATA_PARAMS(Z_Construct_UClass_ASmartsuitController_Statics::NewProp_bodyModel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASmartsuitController_Statics::NewProp_bodyModel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASmartsuitController_Statics::NewProp_wifiApiVersion_MetaData[] = {
		{ "Category", "SmartsuitReadOnly" },
		{ "ModuleRelativePath", "Public/SmartsuitController.h" },
		{ "ToolTip", "WiFi API Version of the Smartsuit hub." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ASmartsuitController_Statics::NewProp_wifiApiVersion = { "wifiApiVersion", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASmartsuitController, wifiApiVersion), METADATA_PARAMS(Z_Construct_UClass_ASmartsuitController_Statics::NewProp_wifiApiVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASmartsuitController_Statics::NewProp_wifiApiVersion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASmartsuitController_Statics::NewProp_fps_MetaData[] = {
		{ "Category", "SmartsuitReadOnly" },
		{ "ModuleRelativePath", "Public/SmartsuitController.h" },
		{ "ToolTip", "Read-only: Indicates the Frames per second that Unreal is receiving frames from the Smartsuit. If WiFi is stable this value should be around 100." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASmartsuitController_Statics::NewProp_fps = { "fps", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASmartsuitController, fps), METADATA_PARAMS(Z_Construct_UClass_ASmartsuitController_Statics::NewProp_fps_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASmartsuitController_Statics::NewProp_fps_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASmartsuitController_Statics::NewProp_hasProfile_MetaData[] = {
		{ "Category", "SmartsuitReadOnly" },
		{ "ModuleRelativePath", "Public/SmartsuitController.h" },
		{ "ToolTip", "Read-only: Indicates weither the Smartsuit has a BodyProfile. If false it is using the Default profile." },
	};
#endif
	void Z_Construct_UClass_ASmartsuitController_Statics::NewProp_hasProfile_SetBit(void* Obj)
	{
		((ASmartsuitController*)Obj)->hasProfile = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASmartsuitController_Statics::NewProp_hasProfile = { "hasProfile", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASmartsuitController), &Z_Construct_UClass_ASmartsuitController_Statics::NewProp_hasProfile_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASmartsuitController_Statics::NewProp_hasProfile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASmartsuitController_Statics::NewProp_hasProfile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASmartsuitController_Statics::NewProp_isBroadcast_MetaData[] = {
		{ "Category", "SmartsuitReadOnly" },
		{ "ModuleRelativePath", "Public/SmartsuitController.h" },
		{ "ToolTip", "Read-only: Indicates if the Smartsuit is broadcasting or unicasting." },
	};
#endif
	void Z_Construct_UClass_ASmartsuitController_Statics::NewProp_isBroadcast_SetBit(void* Obj)
	{
		((ASmartsuitController*)Obj)->isBroadcast = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASmartsuitController_Statics::NewProp_isBroadcast = { "isBroadcast", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASmartsuitController), &Z_Construct_UClass_ASmartsuitController_Statics::NewProp_isBroadcast_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASmartsuitController_Statics::NewProp_isBroadcast_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASmartsuitController_Statics::NewProp_isBroadcast_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASmartsuitController_Statics::NewProp_IndexID_MetaData[] = {
		{ "Category", "Smartsuit" },
		{ "DisplayName", "Index Identifier" },
		{ "ModuleRelativePath", "Public/SmartsuitController.h" },
		{ "ToolTip", "This is an Internal ID that you can use to access this controller from C++ or Blueprints. You have to set this number into something unique for each SmartsuitController." },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ASmartsuitController_Statics::NewProp_IndexID = { "IndexID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASmartsuitController, IndexID), METADATA_PARAMS(Z_Construct_UClass_ASmartsuitController_Statics::NewProp_IndexID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASmartsuitController_Statics::NewProp_IndexID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASmartsuitController_Statics::NewProp_suitname_MetaData[] = {
		{ "Category", "Smartsuit" },
		{ "ModuleRelativePath", "Public/SmartsuitController.h" },
		{ "ToolTip", "The controller will bind with the Smartsuit with this name." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ASmartsuitController_Statics::NewProp_suitname = { "suitname", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASmartsuitController, suitname), METADATA_PARAMS(Z_Construct_UClass_ASmartsuitController_Statics::NewProp_suitname_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASmartsuitController_Statics::NewProp_suitname_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASmartsuitController_Statics::NewProp_AutoConnect_MetaData[] = {
		{ "Category", "Smartsuit" },
		{ "ModuleRelativePath", "Public/SmartsuitController.h" },
		{ "ToolTip", "If true then the suitname will be ignored. The controller will bind with the first active Smartsuit that will appear online" },
	};
#endif
	void Z_Construct_UClass_ASmartsuitController_Statics::NewProp_AutoConnect_SetBit(void* Obj)
	{
		((ASmartsuitController*)Obj)->AutoConnect = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASmartsuitController_Statics::NewProp_AutoConnect = { "AutoConnect", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASmartsuitController), &Z_Construct_UClass_ASmartsuitController_Statics::NewProp_AutoConnect_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASmartsuitController_Statics::NewProp_AutoConnect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASmartsuitController_Statics::NewProp_AutoConnect_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASmartsuitController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASmartsuitController_Statics::NewProp_bodyModel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASmartsuitController_Statics::NewProp_wifiApiVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASmartsuitController_Statics::NewProp_fps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASmartsuitController_Statics::NewProp_hasProfile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASmartsuitController_Statics::NewProp_isBroadcast,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASmartsuitController_Statics::NewProp_IndexID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASmartsuitController_Statics::NewProp_suitname,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASmartsuitController_Statics::NewProp_AutoConnect,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASmartsuitController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASmartsuitController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASmartsuitController_Statics::ClassParams = {
		&ASmartsuitController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASmartsuitController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASmartsuitController_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASmartsuitController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASmartsuitController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASmartsuitController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASmartsuitController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASmartsuitController, 3156126458);
	template<> SMARTSUIT_API UClass* StaticClass<ASmartsuitController>()
	{
		return ASmartsuitController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASmartsuitController(Z_Construct_UClass_ASmartsuitController, &ASmartsuitController::StaticClass, TEXT("/Script/Smartsuit"), TEXT("ASmartsuitController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASmartsuitController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
