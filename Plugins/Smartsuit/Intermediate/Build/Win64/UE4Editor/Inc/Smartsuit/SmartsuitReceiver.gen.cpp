// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Smartsuit/Public/SmartsuitReceiver.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSmartsuitReceiver() {}
// Cross Module References
	SMARTSUIT_API UClass* Z_Construct_UClass_ASmartsuitReceiver_NoRegister();
	SMARTSUIT_API UClass* Z_Construct_UClass_ASmartsuitReceiver();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Smartsuit();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	SMARTSUIT_API UScriptStruct* Z_Construct_UScriptStruct_FFace();
	SMARTSUIT_API UScriptStruct* Z_Construct_UScriptStruct_FProp();
	SMARTSUIT_API UScriptStruct* Z_Construct_UScriptStruct_FSuitData();
	SMARTSUIT_API UScriptStruct* Z_Construct_UScriptStruct_FTracker();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	DEFINE_FUNCTION(ASmartsuitReceiver::execUPosition)
	{
		P_GET_STRUCT(FVector,Z_Param_position);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=ASmartsuitReceiver::UPosition(Z_Param_position);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASmartsuitReceiver::execFQuatToRotator)
	{
		P_GET_STRUCT(FQuat,Z_Param_rotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=ASmartsuitReceiver::FQuatToRotator(Z_Param_rotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASmartsuitReceiver::execGetTracker)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_name);
		P_GET_UBOOL(Z_Param_isLive);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTracker*)Z_Param__Result=ASmartsuitReceiver::GetTracker(Z_Param_name,Z_Param_isLive);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASmartsuitReceiver::execGetProp)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_name);
		P_GET_UBOOL(Z_Param_isLive);
		P_GET_STRUCT_REF(FProp,Z_Param_Out_OutProp);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetProp(Z_Param_name,Z_Param_isLive,Z_Param_Out_OutProp);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASmartsuitReceiver::execGetAllProps)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FProp>*)Z_Param__Result=ASmartsuitReceiver::GetAllProps();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASmartsuitReceiver::execGetTrackerByConnectionIDFromVP)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_name);
		P_GET_UBOOL(Z_Param_isLive);
		P_GET_UBOOL_REF(Z_Param_Out_found);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTracker*)Z_Param__Result=P_THIS->GetTrackerByConnectionIDFromVP(Z_Param_name,Z_Param_isLive,Z_Param_Out_found);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASmartsuitReceiver::execGetAllSmartsuits)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FSuitData>*)Z_Param__Result=P_THIS->GetAllSmartsuits();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASmartsuitReceiver::execGetAvailableSmartsuitNames)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetAvailableSmartsuitNames();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASmartsuitReceiver::execGetSmartsuitByName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_suitName);
		P_GET_STRUCT_REF(FSuitData,Z_Param_Out_SuitData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetSmartsuitByName(Z_Param_suitName,Z_Param_Out_SuitData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASmartsuitReceiver::execGetFacesNotAssociatedWithActor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FFace>*)Z_Param__Result=P_THIS->GetFacesNotAssociatedWithActor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASmartsuitReceiver::execGetAllFaces)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FFace>*)Z_Param__Result=P_THIS->GetAllFaces();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASmartsuitReceiver::execGetFaceByProfileName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_faceName);
		P_GET_UBOOL_REF(Z_Param_Out_found);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FFace*)Z_Param__Result=P_THIS->GetFaceByProfileName(Z_Param_faceName,Z_Param_Out_found);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASmartsuitReceiver::execGetFaceByFaceID)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_faceName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FFace*)Z_Param__Result=P_THIS->GetFaceByFaceID(Z_Param_faceName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASmartsuitReceiver::execStopListener)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopListener();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASmartsuitReceiver::execStartListener)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartListener();
		P_NATIVE_END;
	}
	void ASmartsuitReceiver::StaticRegisterNativesASmartsuitReceiver()
	{
		UClass* Class = ASmartsuitReceiver::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FQuatToRotator", &ASmartsuitReceiver::execFQuatToRotator },
			{ "GetAllFaces", &ASmartsuitReceiver::execGetAllFaces },
			{ "GetAllProps", &ASmartsuitReceiver::execGetAllProps },
			{ "GetAllSmartsuits", &ASmartsuitReceiver::execGetAllSmartsuits },
			{ "GetAvailableSmartsuitNames", &ASmartsuitReceiver::execGetAvailableSmartsuitNames },
			{ "GetFaceByFaceID", &ASmartsuitReceiver::execGetFaceByFaceID },
			{ "GetFaceByProfileName", &ASmartsuitReceiver::execGetFaceByProfileName },
			{ "GetFacesNotAssociatedWithActor", &ASmartsuitReceiver::execGetFacesNotAssociatedWithActor },
			{ "GetProp", &ASmartsuitReceiver::execGetProp },
			{ "GetSmartsuitByName", &ASmartsuitReceiver::execGetSmartsuitByName },
			{ "GetTracker", &ASmartsuitReceiver::execGetTracker },
			{ "GetTrackerByConnectionIDFromVP", &ASmartsuitReceiver::execGetTrackerByConnectionIDFromVP },
			{ "StartListener", &ASmartsuitReceiver::execStartListener },
			{ "StopListener", &ASmartsuitReceiver::execStopListener },
			{ "UPosition", &ASmartsuitReceiver::execUPosition },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASmartsuitReceiver_FQuatToRotator_Statics
	{
		struct SmartsuitReceiver_eventFQuatToRotator_Parms
		{
			FQuat rotation;
			FRotator ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_rotation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASmartsuitReceiver_FQuatToRotator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SmartsuitReceiver_eventFQuatToRotator_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASmartsuitReceiver_FQuatToRotator_Statics::NewProp_rotation = { "rotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SmartsuitReceiver_eventFQuatToRotator_Parms, rotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASmartsuitReceiver_FQuatToRotator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASmartsuitReceiver_FQuatToRotator_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASmartsuitReceiver_FQuatToRotator_Statics::NewProp_rotation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASmartsuitReceiver_FQuatToRotator_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualProduction" },
		{ "ModuleRelativePath", "Public/SmartsuitReceiver.h" },
		{ "ToolTip", "Converts Quaternions into rotators." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASmartsuitReceiver_FQuatToRotator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASmartsuitReceiver, nullptr, "FQuatToRotator", nullptr, nullptr, sizeof(SmartsuitReceiver_eventFQuatToRotator_Parms), Z_Construct_UFunction_ASmartsuitReceiver_FQuatToRotator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASmartsuitReceiver_FQuatToRotator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASmartsuitReceiver_FQuatToRotator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASmartsuitReceiver_FQuatToRotator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASmartsuitReceiver_FQuatToRotator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASmartsuitReceiver_FQuatToRotator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASmartsuitReceiver_GetAllFaces_Statics
	{
		struct SmartsuitReceiver_eventGetAllFaces_Parms
		{
			TArray<FFace> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASmartsuitReceiver_GetAllFaces_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SmartsuitReceiver_eventGetAllFaces_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASmartsuitReceiver_GetAllFaces_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FFace, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASmartsuitReceiver_GetAllFaces_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASmartsuitReceiver_GetAllFaces_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASmartsuitReceiver_GetAllFaces_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASmartsuitReceiver_GetAllFaces_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SmartsuitReceiver.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASmartsuitReceiver_GetAllFaces_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASmartsuitReceiver, nullptr, "GetAllFaces", nullptr, nullptr, sizeof(SmartsuitReceiver_eventGetAllFaces_Parms), Z_Construct_UFunction_ASmartsuitReceiver_GetAllFaces_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASmartsuitReceiver_GetAllFaces_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASmartsuitReceiver_GetAllFaces_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASmartsuitReceiver_GetAllFaces_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASmartsuitReceiver_GetAllFaces()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASmartsuitReceiver_GetAllFaces_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASmartsuitReceiver_GetAllProps_Statics
	{
		struct SmartsuitReceiver_eventGetAllProps_Parms
		{
			TArray<FProp> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASmartsuitReceiver_GetAllProps_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SmartsuitReceiver_eventGetAllProps_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASmartsuitReceiver_GetAllProps_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FProp, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASmartsuitReceiver_GetAllProps_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASmartsuitReceiver_GetAllProps_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASmartsuitReceiver_GetAllProps_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASmartsuitReceiver_GetAllProps_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualProduction" },
		{ "ModuleRelativePath", "Public/SmartsuitReceiver.h" },
		{ "ToolTip", "Calls a function in VPStreamingNetwork to retrieve all props." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASmartsuitReceiver_GetAllProps_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASmartsuitReceiver, nullptr, "GetAllProps", nullptr, nullptr, sizeof(SmartsuitReceiver_eventGetAllProps_Parms), Z_Construct_UFunction_ASmartsuitReceiver_GetAllProps_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASmartsuitReceiver_GetAllProps_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASmartsuitReceiver_GetAllProps_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASmartsuitReceiver_GetAllProps_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASmartsuitReceiver_GetAllProps()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASmartsuitReceiver_GetAllProps_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASmartsuitReceiver_GetAllSmartsuits_Statics
	{
		struct SmartsuitReceiver_eventGetAllSmartsuits_Parms
		{
			TArray<FSuitData> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASmartsuitReceiver_GetAllSmartsuits_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SmartsuitReceiver_eventGetAllSmartsuits_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASmartsuitReceiver_GetAllSmartsuits_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSuitData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASmartsuitReceiver_GetAllSmartsuits_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASmartsuitReceiver_GetAllSmartsuits_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASmartsuitReceiver_GetAllSmartsuits_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASmartsuitReceiver_GetAllSmartsuits_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SmartsuitReceiver.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASmartsuitReceiver_GetAllSmartsuits_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASmartsuitReceiver, nullptr, "GetAllSmartsuits", nullptr, nullptr, sizeof(SmartsuitReceiver_eventGetAllSmartsuits_Parms), Z_Construct_UFunction_ASmartsuitReceiver_GetAllSmartsuits_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASmartsuitReceiver_GetAllSmartsuits_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASmartsuitReceiver_GetAllSmartsuits_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASmartsuitReceiver_GetAllSmartsuits_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASmartsuitReceiver_GetAllSmartsuits()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASmartsuitReceiver_GetAllSmartsuits_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASmartsuitReceiver_GetAvailableSmartsuitNames_Statics
	{
		struct SmartsuitReceiver_eventGetAvailableSmartsuitNames_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASmartsuitReceiver_GetAvailableSmartsuitNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SmartsuitReceiver_eventGetAvailableSmartsuitNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ASmartsuitReceiver_GetAvailableSmartsuitNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASmartsuitReceiver_GetAvailableSmartsuitNames_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASmartsuitReceiver_GetAvailableSmartsuitNames_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASmartsuitReceiver_GetAvailableSmartsuitNames_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASmartsuitReceiver_GetAvailableSmartsuitNames_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09* Lists the names of all known Smartsuits connected to this computer.\n\x09* It will only list the currently active Smartsuits.\n\x09*\n\x09* @return Returns an array with all the available in the network Smartsuit names.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SmartsuitReceiver.h" },
		{ "ToolTip", "Lists the names of all known Smartsuits connected to this computer.\nIt will only list the currently active Smartsuits.\n\n@return Returns an array with all the available in the network Smartsuit names." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASmartsuitReceiver_GetAvailableSmartsuitNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASmartsuitReceiver, nullptr, "GetAvailableSmartsuitNames", nullptr, nullptr, sizeof(SmartsuitReceiver_eventGetAvailableSmartsuitNames_Parms), Z_Construct_UFunction_ASmartsuitReceiver_GetAvailableSmartsuitNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASmartsuitReceiver_GetAvailableSmartsuitNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASmartsuitReceiver_GetAvailableSmartsuitNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASmartsuitReceiver_GetAvailableSmartsuitNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASmartsuitReceiver_GetAvailableSmartsuitNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASmartsuitReceiver_GetAvailableSmartsuitNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASmartsuitReceiver_GetFaceByFaceID_Statics
	{
		struct SmartsuitReceiver_eventGetFaceByFaceID_Parms
		{
			FString faceName;
			FFace ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_faceName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASmartsuitReceiver_GetFaceByFaceID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SmartsuitReceiver_eventGetFaceByFaceID_Parms, ReturnValue), Z_Construct_UScriptStruct_FFace, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ASmartsuitReceiver_GetFaceByFaceID_Statics::NewProp_faceName = { "faceName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SmartsuitReceiver_eventGetFaceByFaceID_Parms, faceName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASmartsuitReceiver_GetFaceByFaceID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASmartsuitReceiver_GetFaceByFaceID_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASmartsuitReceiver_GetFaceByFaceID_Statics::NewProp_faceName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASmartsuitReceiver_GetFaceByFaceID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SmartsuitReceiver.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASmartsuitReceiver_GetFaceByFaceID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASmartsuitReceiver, nullptr, "GetFaceByFaceID", nullptr, nullptr, sizeof(SmartsuitReceiver_eventGetFaceByFaceID_Parms), Z_Construct_UFunction_ASmartsuitReceiver_GetFaceByFaceID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASmartsuitReceiver_GetFaceByFaceID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASmartsuitReceiver_GetFaceByFaceID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASmartsuitReceiver_GetFaceByFaceID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASmartsuitReceiver_GetFaceByFaceID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASmartsuitReceiver_GetFaceByFaceID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASmartsuitReceiver_GetFaceByProfileName_Statics
	{
		struct SmartsuitReceiver_eventGetFaceByProfileName_Parms
		{
			FString faceName;
			bool found;
			FFace ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static void NewProp_found_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_found;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_faceName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_faceName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASmartsuitReceiver_GetFaceByProfileName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SmartsuitReceiver_eventGetFaceByProfileName_Parms, ReturnValue), Z_Construct_UScriptStruct_FFace, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASmartsuitReceiver_GetFaceByProfileName_Statics::NewProp_found_SetBit(void* Obj)
	{
		((SmartsuitReceiver_eventGetFaceByProfileName_Parms*)Obj)->found = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASmartsuitReceiver_GetFaceByProfileName_Statics::NewProp_found = { "found", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SmartsuitReceiver_eventGetFaceByProfileName_Parms), &Z_Construct_UFunction_ASmartsuitReceiver_GetFaceByProfileName_Statics::NewProp_found_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASmartsuitReceiver_GetFaceByProfileName_Statics::NewProp_faceName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ASmartsuitReceiver_GetFaceByProfileName_Statics::NewProp_faceName = { "faceName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SmartsuitReceiver_eventGetFaceByProfileName_Parms, faceName), METADATA_PARAMS(Z_Construct_UFunction_ASmartsuitReceiver_GetFaceByProfileName_Statics::NewProp_faceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASmartsuitReceiver_GetFaceByProfileName_Statics::NewProp_faceName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASmartsuitReceiver_GetFaceByProfileName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASmartsuitReceiver_GetFaceByProfileName_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASmartsuitReceiver_GetFaceByProfileName_Statics::NewProp_found,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASmartsuitReceiver_GetFaceByProfileName_Statics::NewProp_faceName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASmartsuitReceiver_GetFaceByProfileName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SmartsuitReceiver.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASmartsuitReceiver_GetFaceByProfileName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASmartsuitReceiver, nullptr, "GetFaceByProfileName", nullptr, nullptr, sizeof(SmartsuitReceiver_eventGetFaceByProfileName_Parms), Z_Construct_UFunction_ASmartsuitReceiver_GetFaceByProfileName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASmartsuitReceiver_GetFaceByProfileName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASmartsuitReceiver_GetFaceByProfileName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASmartsuitReceiver_GetFaceByProfileName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASmartsuitReceiver_GetFaceByProfileName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASmartsuitReceiver_GetFaceByProfileName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASmartsuitReceiver_GetFacesNotAssociatedWithActor_Statics
	{
		struct SmartsuitReceiver_eventGetFacesNotAssociatedWithActor_Parms
		{
			TArray<FFace> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASmartsuitReceiver_GetFacesNotAssociatedWithActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SmartsuitReceiver_eventGetFacesNotAssociatedWithActor_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASmartsuitReceiver_GetFacesNotAssociatedWithActor_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FFace, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASmartsuitReceiver_GetFacesNotAssociatedWithActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASmartsuitReceiver_GetFacesNotAssociatedWithActor_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASmartsuitReceiver_GetFacesNotAssociatedWithActor_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASmartsuitReceiver_GetFacesNotAssociatedWithActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SmartsuitReceiver.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASmartsuitReceiver_GetFacesNotAssociatedWithActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASmartsuitReceiver, nullptr, "GetFacesNotAssociatedWithActor", nullptr, nullptr, sizeof(SmartsuitReceiver_eventGetFacesNotAssociatedWithActor_Parms), Z_Construct_UFunction_ASmartsuitReceiver_GetFacesNotAssociatedWithActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASmartsuitReceiver_GetFacesNotAssociatedWithActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASmartsuitReceiver_GetFacesNotAssociatedWithActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASmartsuitReceiver_GetFacesNotAssociatedWithActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASmartsuitReceiver_GetFacesNotAssociatedWithActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASmartsuitReceiver_GetFacesNotAssociatedWithActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASmartsuitReceiver_GetProp_Statics
	{
		struct SmartsuitReceiver_eventGetProp_Parms
		{
			FString name;
			bool isLive;
			FProp OutProp;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutProp;
		static void NewProp_isLive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isLive;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASmartsuitReceiver_GetProp_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SmartsuitReceiver_eventGetProp_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASmartsuitReceiver_GetProp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SmartsuitReceiver_eventGetProp_Parms), &Z_Construct_UFunction_ASmartsuitReceiver_GetProp_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASmartsuitReceiver_GetProp_Statics::NewProp_OutProp = { "OutProp", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SmartsuitReceiver_eventGetProp_Parms, OutProp), Z_Construct_UScriptStruct_FProp, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASmartsuitReceiver_GetProp_Statics::NewProp_isLive_SetBit(void* Obj)
	{
		((SmartsuitReceiver_eventGetProp_Parms*)Obj)->isLive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASmartsuitReceiver_GetProp_Statics::NewProp_isLive = { "isLive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SmartsuitReceiver_eventGetProp_Parms), &Z_Construct_UFunction_ASmartsuitReceiver_GetProp_Statics::NewProp_isLive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ASmartsuitReceiver_GetProp_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SmartsuitReceiver_eventGetProp_Parms, name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASmartsuitReceiver_GetProp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASmartsuitReceiver_GetProp_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASmartsuitReceiver_GetProp_Statics::NewProp_OutProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASmartsuitReceiver_GetProp_Statics::NewProp_isLive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASmartsuitReceiver_GetProp_Statics::NewProp_name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASmartsuitReceiver_GetProp_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualProduction" },
		{ "ModuleRelativePath", "Public/SmartsuitReceiver.h" },
		{ "ToolTip", "Calls a function in VPStreamingNetwork to retrieve a prop by name." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASmartsuitReceiver_GetProp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASmartsuitReceiver, nullptr, "GetProp", nullptr, nullptr, sizeof(SmartsuitReceiver_eventGetProp_Parms), Z_Construct_UFunction_ASmartsuitReceiver_GetProp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASmartsuitReceiver_GetProp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASmartsuitReceiver_GetProp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASmartsuitReceiver_GetProp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASmartsuitReceiver_GetProp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASmartsuitReceiver_GetProp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASmartsuitReceiver_GetSmartsuitByName_Statics
	{
		struct SmartsuitReceiver_eventGetSmartsuitByName_Parms
		{
			FString suitName;
			FSuitData SuitData;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SuitData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_suitName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_suitName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASmartsuitReceiver_GetSmartsuitByName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SmartsuitReceiver_eventGetSmartsuitByName_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASmartsuitReceiver_GetSmartsuitByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SmartsuitReceiver_eventGetSmartsuitByName_Parms), &Z_Construct_UFunction_ASmartsuitReceiver_GetSmartsuitByName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASmartsuitReceiver_GetSmartsuitByName_Statics::NewProp_SuitData = { "SuitData", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SmartsuitReceiver_eventGetSmartsuitByName_Parms, SuitData), Z_Construct_UScriptStruct_FSuitData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASmartsuitReceiver_GetSmartsuitByName_Statics::NewProp_suitName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ASmartsuitReceiver_GetSmartsuitByName_Statics::NewProp_suitName = { "suitName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SmartsuitReceiver_eventGetSmartsuitByName_Parms, suitName), METADATA_PARAMS(Z_Construct_UFunction_ASmartsuitReceiver_GetSmartsuitByName_Statics::NewProp_suitName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASmartsuitReceiver_GetSmartsuitByName_Statics::NewProp_suitName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASmartsuitReceiver_GetSmartsuitByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASmartsuitReceiver_GetSmartsuitByName_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASmartsuitReceiver_GetSmartsuitByName_Statics::NewProp_SuitData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASmartsuitReceiver_GetSmartsuitByName_Statics::NewProp_suitName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASmartsuitReceiver_GetSmartsuitByName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SmartsuitReceiver.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASmartsuitReceiver_GetSmartsuitByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASmartsuitReceiver, nullptr, "GetSmartsuitByName", nullptr, nullptr, sizeof(SmartsuitReceiver_eventGetSmartsuitByName_Parms), Z_Construct_UFunction_ASmartsuitReceiver_GetSmartsuitByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASmartsuitReceiver_GetSmartsuitByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASmartsuitReceiver_GetSmartsuitByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASmartsuitReceiver_GetSmartsuitByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASmartsuitReceiver_GetSmartsuitByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASmartsuitReceiver_GetSmartsuitByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASmartsuitReceiver_GetTracker_Statics
	{
		struct SmartsuitReceiver_eventGetTracker_Parms
		{
			FString name;
			bool isLive;
			FTracker ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static void NewProp_isLive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isLive;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASmartsuitReceiver_GetTracker_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SmartsuitReceiver_eventGetTracker_Parms, ReturnValue), Z_Construct_UScriptStruct_FTracker, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASmartsuitReceiver_GetTracker_Statics::NewProp_isLive_SetBit(void* Obj)
	{
		((SmartsuitReceiver_eventGetTracker_Parms*)Obj)->isLive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASmartsuitReceiver_GetTracker_Statics::NewProp_isLive = { "isLive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SmartsuitReceiver_eventGetTracker_Parms), &Z_Construct_UFunction_ASmartsuitReceiver_GetTracker_Statics::NewProp_isLive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ASmartsuitReceiver_GetTracker_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SmartsuitReceiver_eventGetTracker_Parms, name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASmartsuitReceiver_GetTracker_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASmartsuitReceiver_GetTracker_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASmartsuitReceiver_GetTracker_Statics::NewProp_isLive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASmartsuitReceiver_GetTracker_Statics::NewProp_name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASmartsuitReceiver_GetTracker_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualProduction" },
		{ "ModuleRelativePath", "Public/SmartsuitReceiver.h" },
		{ "ToolTip", "Calls a function in VPStreamingNetwork to retrieve a tracker by name." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASmartsuitReceiver_GetTracker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASmartsuitReceiver, nullptr, "GetTracker", nullptr, nullptr, sizeof(SmartsuitReceiver_eventGetTracker_Parms), Z_Construct_UFunction_ASmartsuitReceiver_GetTracker_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASmartsuitReceiver_GetTracker_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASmartsuitReceiver_GetTracker_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASmartsuitReceiver_GetTracker_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASmartsuitReceiver_GetTracker()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASmartsuitReceiver_GetTracker_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASmartsuitReceiver_GetTrackerByConnectionIDFromVP_Statics
	{
		struct SmartsuitReceiver_eventGetTrackerByConnectionIDFromVP_Parms
		{
			FString name;
			bool isLive;
			bool found;
			FTracker ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static void NewProp_found_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_found;
		static void NewProp_isLive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isLive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASmartsuitReceiver_GetTrackerByConnectionIDFromVP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SmartsuitReceiver_eventGetTrackerByConnectionIDFromVP_Parms, ReturnValue), Z_Construct_UScriptStruct_FTracker, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASmartsuitReceiver_GetTrackerByConnectionIDFromVP_Statics::NewProp_found_SetBit(void* Obj)
	{
		((SmartsuitReceiver_eventGetTrackerByConnectionIDFromVP_Parms*)Obj)->found = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASmartsuitReceiver_GetTrackerByConnectionIDFromVP_Statics::NewProp_found = { "found", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SmartsuitReceiver_eventGetTrackerByConnectionIDFromVP_Parms), &Z_Construct_UFunction_ASmartsuitReceiver_GetTrackerByConnectionIDFromVP_Statics::NewProp_found_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASmartsuitReceiver_GetTrackerByConnectionIDFromVP_Statics::NewProp_isLive_SetBit(void* Obj)
	{
		((SmartsuitReceiver_eventGetTrackerByConnectionIDFromVP_Parms*)Obj)->isLive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASmartsuitReceiver_GetTrackerByConnectionIDFromVP_Statics::NewProp_isLive = { "isLive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SmartsuitReceiver_eventGetTrackerByConnectionIDFromVP_Parms), &Z_Construct_UFunction_ASmartsuitReceiver_GetTrackerByConnectionIDFromVP_Statics::NewProp_isLive_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASmartsuitReceiver_GetTrackerByConnectionIDFromVP_Statics::NewProp_name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ASmartsuitReceiver_GetTrackerByConnectionIDFromVP_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SmartsuitReceiver_eventGetTrackerByConnectionIDFromVP_Parms, name), METADATA_PARAMS(Z_Construct_UFunction_ASmartsuitReceiver_GetTrackerByConnectionIDFromVP_Statics::NewProp_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASmartsuitReceiver_GetTrackerByConnectionIDFromVP_Statics::NewProp_name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASmartsuitReceiver_GetTrackerByConnectionIDFromVP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASmartsuitReceiver_GetTrackerByConnectionIDFromVP_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASmartsuitReceiver_GetTrackerByConnectionIDFromVP_Statics::NewProp_found,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASmartsuitReceiver_GetTrackerByConnectionIDFromVP_Statics::NewProp_isLive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASmartsuitReceiver_GetTrackerByConnectionIDFromVP_Statics::NewProp_name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASmartsuitReceiver_GetTrackerByConnectionIDFromVP_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualProduction" },
		{ "ModuleRelativePath", "Public/SmartsuitReceiver.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASmartsuitReceiver_GetTrackerByConnectionIDFromVP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASmartsuitReceiver, nullptr, "GetTrackerByConnectionIDFromVP", nullptr, nullptr, sizeof(SmartsuitReceiver_eventGetTrackerByConnectionIDFromVP_Parms), Z_Construct_UFunction_ASmartsuitReceiver_GetTrackerByConnectionIDFromVP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASmartsuitReceiver_GetTrackerByConnectionIDFromVP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASmartsuitReceiver_GetTrackerByConnectionIDFromVP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASmartsuitReceiver_GetTrackerByConnectionIDFromVP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASmartsuitReceiver_GetTrackerByConnectionIDFromVP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASmartsuitReceiver_GetTrackerByConnectionIDFromVP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASmartsuitReceiver_StartListener_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASmartsuitReceiver_StartListener_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rokoko" },
		{ "Comment", "/**\n\x09* Starts the SmartsuitReceiver socket so it listens for Smartsuits.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SmartsuitReceiver.h" },
		{ "ToolTip", "Starts the SmartsuitReceiver socket so it listens for Smartsuits." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASmartsuitReceiver_StartListener_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASmartsuitReceiver, nullptr, "StartListener", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASmartsuitReceiver_StartListener_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASmartsuitReceiver_StartListener_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASmartsuitReceiver_StartListener()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASmartsuitReceiver_StartListener_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASmartsuitReceiver_StopListener_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASmartsuitReceiver_StopListener_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rokoko" },
		{ "Comment", "/**\n\x09* Stops the SmartsuitReceiver socket so it stops listening for Smartsuits.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SmartsuitReceiver.h" },
		{ "ToolTip", "Stops the SmartsuitReceiver socket so it stops listening for Smartsuits." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASmartsuitReceiver_StopListener_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASmartsuitReceiver, nullptr, "StopListener", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASmartsuitReceiver_StopListener_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASmartsuitReceiver_StopListener_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASmartsuitReceiver_StopListener()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASmartsuitReceiver_StopListener_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASmartsuitReceiver_UPosition_Statics
	{
		struct SmartsuitReceiver_eventUPosition_Parms
		{
			FVector position;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_position;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASmartsuitReceiver_UPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SmartsuitReceiver_eventUPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASmartsuitReceiver_UPosition_Statics::NewProp_position = { "position", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SmartsuitReceiver_eventUPosition_Parms, position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASmartsuitReceiver_UPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASmartsuitReceiver_UPosition_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASmartsuitReceiver_UPosition_Statics::NewProp_position,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASmartsuitReceiver_UPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualProduction" },
		{ "ModuleRelativePath", "Public/SmartsuitReceiver.h" },
		{ "ToolTip", "Converts position into Unreal position." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASmartsuitReceiver_UPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASmartsuitReceiver, nullptr, "UPosition", nullptr, nullptr, sizeof(SmartsuitReceiver_eventUPosition_Parms), Z_Construct_UFunction_ASmartsuitReceiver_UPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASmartsuitReceiver_UPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASmartsuitReceiver_UPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASmartsuitReceiver_UPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASmartsuitReceiver_UPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASmartsuitReceiver_UPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASmartsuitReceiver_NoRegister()
	{
		return ASmartsuitReceiver::StaticClass();
	}
	struct Z_Construct_UClass_ASmartsuitReceiver_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VPListenPort_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_VPListenPort;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_streamingDataPort_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_streamingDataPort;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASmartsuitReceiver_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Smartsuit,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASmartsuitReceiver_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASmartsuitReceiver_FQuatToRotator, "FQuatToRotator" }, // 2942828009
		{ &Z_Construct_UFunction_ASmartsuitReceiver_GetAllFaces, "GetAllFaces" }, // 3648542285
		{ &Z_Construct_UFunction_ASmartsuitReceiver_GetAllProps, "GetAllProps" }, // 4152607636
		{ &Z_Construct_UFunction_ASmartsuitReceiver_GetAllSmartsuits, "GetAllSmartsuits" }, // 610356443
		{ &Z_Construct_UFunction_ASmartsuitReceiver_GetAvailableSmartsuitNames, "GetAvailableSmartsuitNames" }, // 4213328789
		{ &Z_Construct_UFunction_ASmartsuitReceiver_GetFaceByFaceID, "GetFaceByFaceID" }, // 194237201
		{ &Z_Construct_UFunction_ASmartsuitReceiver_GetFaceByProfileName, "GetFaceByProfileName" }, // 2099504286
		{ &Z_Construct_UFunction_ASmartsuitReceiver_GetFacesNotAssociatedWithActor, "GetFacesNotAssociatedWithActor" }, // 3131966289
		{ &Z_Construct_UFunction_ASmartsuitReceiver_GetProp, "GetProp" }, // 953639074
		{ &Z_Construct_UFunction_ASmartsuitReceiver_GetSmartsuitByName, "GetSmartsuitByName" }, // 3434294130
		{ &Z_Construct_UFunction_ASmartsuitReceiver_GetTracker, "GetTracker" }, // 516908897
		{ &Z_Construct_UFunction_ASmartsuitReceiver_GetTrackerByConnectionIDFromVP, "GetTrackerByConnectionIDFromVP" }, // 2696913995
		{ &Z_Construct_UFunction_ASmartsuitReceiver_StartListener, "StartListener" }, // 959429819
		{ &Z_Construct_UFunction_ASmartsuitReceiver_StopListener, "StopListener" }, // 417820758
		{ &Z_Construct_UFunction_ASmartsuitReceiver_UPosition, "UPosition" }, // 644711538
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASmartsuitReceiver_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SmartsuitReceiver.h" },
		{ "ModuleRelativePath", "Public/SmartsuitReceiver.h" },
		{ "ToolTip", "A SmartsuitReceiver implements the network interface between Smartsuit and Unreal. This is required for SmartsuitController to work properly. You can have only one SmartsuitReceiver at the same time." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASmartsuitReceiver_Statics::NewProp_VPListenPort_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "Comment", "/**\n\x09* The port number used to listen for trackers and props data.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SmartsuitReceiver.h" },
		{ "ToolTip", "The port number used to listen for trackers and props data." },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ASmartsuitReceiver_Statics::NewProp_VPListenPort = { "VPListenPort", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASmartsuitReceiver, VPListenPort), METADATA_PARAMS(Z_Construct_UClass_ASmartsuitReceiver_Statics::NewProp_VPListenPort_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASmartsuitReceiver_Statics::NewProp_VPListenPort_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASmartsuitReceiver_Statics::NewProp_streamingDataPort_MetaData[] = {
		{ "Category", "Smartsuit" },
		{ "Comment", "/**\n\x09* The port number used to listen for the streaming data of Smartsuits.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SmartsuitReceiver.h" },
		{ "ToolTip", "The port number used to listen for the streaming data of Smartsuits." },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ASmartsuitReceiver_Statics::NewProp_streamingDataPort = { "streamingDataPort", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASmartsuitReceiver, streamingDataPort), METADATA_PARAMS(Z_Construct_UClass_ASmartsuitReceiver_Statics::NewProp_streamingDataPort_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASmartsuitReceiver_Statics::NewProp_streamingDataPort_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASmartsuitReceiver_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASmartsuitReceiver_Statics::NewProp_VPListenPort,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASmartsuitReceiver_Statics::NewProp_streamingDataPort,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASmartsuitReceiver_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASmartsuitReceiver>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASmartsuitReceiver_Statics::ClassParams = {
		&ASmartsuitReceiver::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASmartsuitReceiver_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASmartsuitReceiver_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASmartsuitReceiver_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASmartsuitReceiver_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASmartsuitReceiver()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASmartsuitReceiver_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASmartsuitReceiver, 570463433);
	template<> SMARTSUIT_API UClass* StaticClass<ASmartsuitReceiver>()
	{
		return ASmartsuitReceiver::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASmartsuitReceiver(Z_Construct_UClass_ASmartsuitReceiver, &ASmartsuitReceiver::StaticClass, TEXT("/Script/Smartsuit"), TEXT("ASmartsuitReceiver"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASmartsuitReceiver);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
