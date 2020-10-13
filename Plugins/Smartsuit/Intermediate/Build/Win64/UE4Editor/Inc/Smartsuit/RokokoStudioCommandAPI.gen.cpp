// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Smartsuit/Public/RokokoStudioCommandAPI.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRokokoStudioCommandAPI() {}
// Cross Module References
	SMARTSUIT_API UFunction* Z_Construct_UDelegateFunction_Smartsuit_OnCompletedRequest__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Smartsuit();
	SMARTSUIT_API UScriptStruct* Z_Construct_UScriptStruct_FRokokoCommandAPI_IPInfo();
	SMARTSUIT_API UClass* Z_Construct_UClass_URokokoStudioCommandAPI_NoRegister();
	SMARTSUIT_API UClass* Z_Construct_UClass_URokokoStudioCommandAPI();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Smartsuit_OnCompletedRequest__DelegateSignature_Statics
	{
		struct _Script_Smartsuit_eventOnCompletedRequest_Parms
		{
			int32 ResponseCode;
			FString ResponseContentString;
			bool bSucceeded;
		};
		static void NewProp_bSucceeded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSucceeded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResponseContentString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ResponseContentString;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ResponseCode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_Smartsuit_OnCompletedRequest__DelegateSignature_Statics::NewProp_bSucceeded_SetBit(void* Obj)
	{
		((_Script_Smartsuit_eventOnCompletedRequest_Parms*)Obj)->bSucceeded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_Smartsuit_OnCompletedRequest__DelegateSignature_Statics::NewProp_bSucceeded = { "bSucceeded", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_Smartsuit_eventOnCompletedRequest_Parms), &Z_Construct_UDelegateFunction_Smartsuit_OnCompletedRequest__DelegateSignature_Statics::NewProp_bSucceeded_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Smartsuit_OnCompletedRequest__DelegateSignature_Statics::NewProp_ResponseContentString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_Smartsuit_OnCompletedRequest__DelegateSignature_Statics::NewProp_ResponseContentString = { "ResponseContentString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Smartsuit_eventOnCompletedRequest_Parms, ResponseContentString), METADATA_PARAMS(Z_Construct_UDelegateFunction_Smartsuit_OnCompletedRequest__DelegateSignature_Statics::NewProp_ResponseContentString_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Smartsuit_OnCompletedRequest__DelegateSignature_Statics::NewProp_ResponseContentString_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_Smartsuit_OnCompletedRequest__DelegateSignature_Statics::NewProp_ResponseCode = { "ResponseCode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Smartsuit_eventOnCompletedRequest_Parms, ResponseCode), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Smartsuit_OnCompletedRequest__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Smartsuit_OnCompletedRequest__DelegateSignature_Statics::NewProp_bSucceeded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Smartsuit_OnCompletedRequest__DelegateSignature_Statics::NewProp_ResponseContentString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Smartsuit_OnCompletedRequest__DelegateSignature_Statics::NewProp_ResponseCode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Smartsuit_OnCompletedRequest__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RokokoStudioCommandAPI.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Smartsuit_OnCompletedRequest__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Smartsuit, nullptr, "OnCompletedRequest__DelegateSignature", nullptr, nullptr, sizeof(_Script_Smartsuit_eventOnCompletedRequest_Parms), Z_Construct_UDelegateFunction_Smartsuit_OnCompletedRequest__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Smartsuit_OnCompletedRequest__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Smartsuit_OnCompletedRequest__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Smartsuit_OnCompletedRequest__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Smartsuit_OnCompletedRequest__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Smartsuit_OnCompletedRequest__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
class UScriptStruct* FRokokoCommandAPI_IPInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SMARTSUIT_API uint32 Get_Z_Construct_UScriptStruct_FRokokoCommandAPI_IPInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRokokoCommandAPI_IPInfo, Z_Construct_UPackage__Script_Smartsuit(), TEXT("RokokoCommandAPI_IPInfo"), sizeof(FRokokoCommandAPI_IPInfo), Get_Z_Construct_UScriptStruct_FRokokoCommandAPI_IPInfo_Hash());
	}
	return Singleton;
}
template<> SMARTSUIT_API UScriptStruct* StaticStruct<FRokokoCommandAPI_IPInfo>()
{
	return FRokokoCommandAPI_IPInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRokokoCommandAPI_IPInfo(FRokokoCommandAPI_IPInfo::StaticStruct, TEXT("/Script/Smartsuit"), TEXT("RokokoCommandAPI_IPInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Smartsuit_StaticRegisterNativesFRokokoCommandAPI_IPInfo
{
	FScriptStruct_Smartsuit_StaticRegisterNativesFRokokoCommandAPI_IPInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RokokoCommandAPI_IPInfo")),new UScriptStruct::TCppStructOps<FRokokoCommandAPI_IPInfo>);
	}
} ScriptStruct_Smartsuit_StaticRegisterNativesFRokokoCommandAPI_IPInfo;
	struct Z_Construct_UScriptStruct_FRokokoCommandAPI_IPInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_APIKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_APIKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Port_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Port;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IPAddress_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_IPAddress;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRokokoCommandAPI_IPInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RokokoStudioCommandAPI.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRokokoCommandAPI_IPInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRokokoCommandAPI_IPInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRokokoCommandAPI_IPInfo_Statics::NewProp_APIKey_MetaData[] = {
		{ "Category", "Command API" },
		{ "ModuleRelativePath", "Public/RokokoStudioCommandAPI.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRokokoCommandAPI_IPInfo_Statics::NewProp_APIKey = { "APIKey", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRokokoCommandAPI_IPInfo, APIKey), METADATA_PARAMS(Z_Construct_UScriptStruct_FRokokoCommandAPI_IPInfo_Statics::NewProp_APIKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRokokoCommandAPI_IPInfo_Statics::NewProp_APIKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRokokoCommandAPI_IPInfo_Statics::NewProp_Port_MetaData[] = {
		{ "Category", "Command API" },
		{ "ModuleRelativePath", "Public/RokokoStudioCommandAPI.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRokokoCommandAPI_IPInfo_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRokokoCommandAPI_IPInfo, Port), METADATA_PARAMS(Z_Construct_UScriptStruct_FRokokoCommandAPI_IPInfo_Statics::NewProp_Port_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRokokoCommandAPI_IPInfo_Statics::NewProp_Port_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRokokoCommandAPI_IPInfo_Statics::NewProp_IPAddress_MetaData[] = {
		{ "Category", "Command API" },
		{ "ModuleRelativePath", "Public/RokokoStudioCommandAPI.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRokokoCommandAPI_IPInfo_Statics::NewProp_IPAddress = { "IPAddress", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRokokoCommandAPI_IPInfo, IPAddress), METADATA_PARAMS(Z_Construct_UScriptStruct_FRokokoCommandAPI_IPInfo_Statics::NewProp_IPAddress_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRokokoCommandAPI_IPInfo_Statics::NewProp_IPAddress_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRokokoCommandAPI_IPInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRokokoCommandAPI_IPInfo_Statics::NewProp_APIKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRokokoCommandAPI_IPInfo_Statics::NewProp_Port,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRokokoCommandAPI_IPInfo_Statics::NewProp_IPAddress,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRokokoCommandAPI_IPInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Smartsuit,
		nullptr,
		&NewStructOps,
		"RokokoCommandAPI_IPInfo",
		sizeof(FRokokoCommandAPI_IPInfo),
		alignof(FRokokoCommandAPI_IPInfo),
		Z_Construct_UScriptStruct_FRokokoCommandAPI_IPInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRokokoCommandAPI_IPInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRokokoCommandAPI_IPInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRokokoCommandAPI_IPInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRokokoCommandAPI_IPInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRokokoCommandAPI_IPInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Smartsuit();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RokokoCommandAPI_IPInfo"), sizeof(FRokokoCommandAPI_IPInfo), Get_Z_Construct_UScriptStruct_FRokokoCommandAPI_IPInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRokokoCommandAPI_IPInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRokokoCommandAPI_IPInfo_Hash() { return 2128826510U; }
	DEFINE_FUNCTION(URokokoStudioCommandAPI::execSaveConfigFile)
	{
		P_GET_STRUCT_REF(FRokokoCommandAPI_IPInfo,Z_Param_Out_IPInfo);
		P_GET_PROPERTY(FStrProperty,Z_Param_SmartSuitname);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SaveConfigFile(Z_Param_Out_IPInfo,Z_Param_SmartSuitname);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URokokoStudioCommandAPI::execStopRecording)
	{
		P_GET_STRUCT_REF(FRokokoCommandAPI_IPInfo,Z_Param_Out_IPInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopRecording(Z_Param_Out_IPInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URokokoStudioCommandAPI::execStartRecording)
	{
		P_GET_STRUCT_REF(FRokokoCommandAPI_IPInfo,Z_Param_Out_IPInfo);
		P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartRecording(Z_Param_Out_IPInfo,Z_Param_FileName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URokokoStudioCommandAPI::execCalibrate)
	{
		P_GET_STRUCT_REF(FRokokoCommandAPI_IPInfo,Z_Param_Out_IPInfo);
		P_GET_PROPERTY(FStrProperty,Z_Param_SmartSuitName);
		P_GET_PROPERTY(FIntProperty,Z_Param_CountdownDelay);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Calibrate(Z_Param_Out_IPInfo,Z_Param_SmartSuitName,Z_Param_CountdownDelay);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URokokoStudioCommandAPI::execRestart)
	{
		P_GET_STRUCT_REF(FRokokoCommandAPI_IPInfo,Z_Param_Out_IPInfo);
		P_GET_PROPERTY(FStrProperty,Z_Param_SmartSuitName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Restart(Z_Param_Out_IPInfo,Z_Param_SmartSuitName);
		P_NATIVE_END;
	}
	void URokokoStudioCommandAPI::StaticRegisterNativesURokokoStudioCommandAPI()
	{
		UClass* Class = URokokoStudioCommandAPI::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Calibrate", &URokokoStudioCommandAPI::execCalibrate },
			{ "Restart", &URokokoStudioCommandAPI::execRestart },
			{ "SaveConfigFile", &URokokoStudioCommandAPI::execSaveConfigFile },
			{ "StartRecording", &URokokoStudioCommandAPI::execStartRecording },
			{ "StopRecording", &URokokoStudioCommandAPI::execStopRecording },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URokokoStudioCommandAPI_Calibrate_Statics
	{
		struct RokokoStudioCommandAPI_eventCalibrate_Parms
		{
			FRokokoCommandAPI_IPInfo IPInfo;
			FString SmartSuitName;
			int32 CountdownDelay;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CountdownDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SmartSuitName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SmartSuitName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IPInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_IPInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URokokoStudioCommandAPI_Calibrate_Statics::NewProp_CountdownDelay = { "CountdownDelay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RokokoStudioCommandAPI_eventCalibrate_Parms, CountdownDelay), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URokokoStudioCommandAPI_Calibrate_Statics::NewProp_SmartSuitName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URokokoStudioCommandAPI_Calibrate_Statics::NewProp_SmartSuitName = { "SmartSuitName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RokokoStudioCommandAPI_eventCalibrate_Parms, SmartSuitName), METADATA_PARAMS(Z_Construct_UFunction_URokokoStudioCommandAPI_Calibrate_Statics::NewProp_SmartSuitName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URokokoStudioCommandAPI_Calibrate_Statics::NewProp_SmartSuitName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URokokoStudioCommandAPI_Calibrate_Statics::NewProp_IPInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URokokoStudioCommandAPI_Calibrate_Statics::NewProp_IPInfo = { "IPInfo", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RokokoStudioCommandAPI_eventCalibrate_Parms, IPInfo), Z_Construct_UScriptStruct_FRokokoCommandAPI_IPInfo, METADATA_PARAMS(Z_Construct_UFunction_URokokoStudioCommandAPI_Calibrate_Statics::NewProp_IPInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URokokoStudioCommandAPI_Calibrate_Statics::NewProp_IPInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URokokoStudioCommandAPI_Calibrate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URokokoStudioCommandAPI_Calibrate_Statics::NewProp_CountdownDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URokokoStudioCommandAPI_Calibrate_Statics::NewProp_SmartSuitName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URokokoStudioCommandAPI_Calibrate_Statics::NewProp_IPInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URokokoStudioCommandAPI_Calibrate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Command API" },
		{ "CPP_Default_CountdownDelay", "3" },
		{ "ModuleRelativePath", "Public/RokokoStudioCommandAPI.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URokokoStudioCommandAPI_Calibrate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URokokoStudioCommandAPI, nullptr, "Calibrate", nullptr, nullptr, sizeof(RokokoStudioCommandAPI_eventCalibrate_Parms), Z_Construct_UFunction_URokokoStudioCommandAPI_Calibrate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URokokoStudioCommandAPI_Calibrate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URokokoStudioCommandAPI_Calibrate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URokokoStudioCommandAPI_Calibrate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URokokoStudioCommandAPI_Calibrate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URokokoStudioCommandAPI_Calibrate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URokokoStudioCommandAPI_Restart_Statics
	{
		struct RokokoStudioCommandAPI_eventRestart_Parms
		{
			FRokokoCommandAPI_IPInfo IPInfo;
			FString SmartSuitName;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SmartSuitName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SmartSuitName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IPInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_IPInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URokokoStudioCommandAPI_Restart_Statics::NewProp_SmartSuitName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URokokoStudioCommandAPI_Restart_Statics::NewProp_SmartSuitName = { "SmartSuitName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RokokoStudioCommandAPI_eventRestart_Parms, SmartSuitName), METADATA_PARAMS(Z_Construct_UFunction_URokokoStudioCommandAPI_Restart_Statics::NewProp_SmartSuitName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URokokoStudioCommandAPI_Restart_Statics::NewProp_SmartSuitName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URokokoStudioCommandAPI_Restart_Statics::NewProp_IPInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URokokoStudioCommandAPI_Restart_Statics::NewProp_IPInfo = { "IPInfo", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RokokoStudioCommandAPI_eventRestart_Parms, IPInfo), Z_Construct_UScriptStruct_FRokokoCommandAPI_IPInfo, METADATA_PARAMS(Z_Construct_UFunction_URokokoStudioCommandAPI_Restart_Statics::NewProp_IPInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URokokoStudioCommandAPI_Restart_Statics::NewProp_IPInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URokokoStudioCommandAPI_Restart_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URokokoStudioCommandAPI_Restart_Statics::NewProp_SmartSuitName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URokokoStudioCommandAPI_Restart_Statics::NewProp_IPInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URokokoStudioCommandAPI_Restart_Statics::Function_MetaDataParams[] = {
		{ "Category", "Command API" },
		{ "ModuleRelativePath", "Public/RokokoStudioCommandAPI.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URokokoStudioCommandAPI_Restart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URokokoStudioCommandAPI, nullptr, "Restart", nullptr, nullptr, sizeof(RokokoStudioCommandAPI_eventRestart_Parms), Z_Construct_UFunction_URokokoStudioCommandAPI_Restart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URokokoStudioCommandAPI_Restart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URokokoStudioCommandAPI_Restart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URokokoStudioCommandAPI_Restart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URokokoStudioCommandAPI_Restart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URokokoStudioCommandAPI_Restart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URokokoStudioCommandAPI_SaveConfigFile_Statics
	{
		struct RokokoStudioCommandAPI_eventSaveConfigFile_Parms
		{
			FRokokoCommandAPI_IPInfo IPInfo;
			FString SmartSuitname;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SmartSuitname_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SmartSuitname;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IPInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_IPInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URokokoStudioCommandAPI_SaveConfigFile_Statics::NewProp_SmartSuitname_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URokokoStudioCommandAPI_SaveConfigFile_Statics::NewProp_SmartSuitname = { "SmartSuitname", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RokokoStudioCommandAPI_eventSaveConfigFile_Parms, SmartSuitname), METADATA_PARAMS(Z_Construct_UFunction_URokokoStudioCommandAPI_SaveConfigFile_Statics::NewProp_SmartSuitname_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URokokoStudioCommandAPI_SaveConfigFile_Statics::NewProp_SmartSuitname_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URokokoStudioCommandAPI_SaveConfigFile_Statics::NewProp_IPInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URokokoStudioCommandAPI_SaveConfigFile_Statics::NewProp_IPInfo = { "IPInfo", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RokokoStudioCommandAPI_eventSaveConfigFile_Parms, IPInfo), Z_Construct_UScriptStruct_FRokokoCommandAPI_IPInfo, METADATA_PARAMS(Z_Construct_UFunction_URokokoStudioCommandAPI_SaveConfigFile_Statics::NewProp_IPInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URokokoStudioCommandAPI_SaveConfigFile_Statics::NewProp_IPInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URokokoStudioCommandAPI_SaveConfigFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URokokoStudioCommandAPI_SaveConfigFile_Statics::NewProp_SmartSuitname,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URokokoStudioCommandAPI_SaveConfigFile_Statics::NewProp_IPInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URokokoStudioCommandAPI_SaveConfigFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Command API" },
		{ "ModuleRelativePath", "Public/RokokoStudioCommandAPI.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URokokoStudioCommandAPI_SaveConfigFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URokokoStudioCommandAPI, nullptr, "SaveConfigFile", nullptr, nullptr, sizeof(RokokoStudioCommandAPI_eventSaveConfigFile_Parms), Z_Construct_UFunction_URokokoStudioCommandAPI_SaveConfigFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URokokoStudioCommandAPI_SaveConfigFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URokokoStudioCommandAPI_SaveConfigFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URokokoStudioCommandAPI_SaveConfigFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URokokoStudioCommandAPI_SaveConfigFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URokokoStudioCommandAPI_SaveConfigFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URokokoStudioCommandAPI_StartRecording_Statics
	{
		struct RokokoStudioCommandAPI_eventStartRecording_Parms
		{
			FRokokoCommandAPI_IPInfo IPInfo;
			FString FileName;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FileName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FileName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IPInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_IPInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URokokoStudioCommandAPI_StartRecording_Statics::NewProp_FileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URokokoStudioCommandAPI_StartRecording_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RokokoStudioCommandAPI_eventStartRecording_Parms, FileName), METADATA_PARAMS(Z_Construct_UFunction_URokokoStudioCommandAPI_StartRecording_Statics::NewProp_FileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URokokoStudioCommandAPI_StartRecording_Statics::NewProp_FileName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URokokoStudioCommandAPI_StartRecording_Statics::NewProp_IPInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URokokoStudioCommandAPI_StartRecording_Statics::NewProp_IPInfo = { "IPInfo", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RokokoStudioCommandAPI_eventStartRecording_Parms, IPInfo), Z_Construct_UScriptStruct_FRokokoCommandAPI_IPInfo, METADATA_PARAMS(Z_Construct_UFunction_URokokoStudioCommandAPI_StartRecording_Statics::NewProp_IPInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URokokoStudioCommandAPI_StartRecording_Statics::NewProp_IPInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URokokoStudioCommandAPI_StartRecording_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URokokoStudioCommandAPI_StartRecording_Statics::NewProp_FileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URokokoStudioCommandAPI_StartRecording_Statics::NewProp_IPInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URokokoStudioCommandAPI_StartRecording_Statics::Function_MetaDataParams[] = {
		{ "Category", "Command API" },
		{ "ModuleRelativePath", "Public/RokokoStudioCommandAPI.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URokokoStudioCommandAPI_StartRecording_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URokokoStudioCommandAPI, nullptr, "StartRecording", nullptr, nullptr, sizeof(RokokoStudioCommandAPI_eventStartRecording_Parms), Z_Construct_UFunction_URokokoStudioCommandAPI_StartRecording_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URokokoStudioCommandAPI_StartRecording_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URokokoStudioCommandAPI_StartRecording_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URokokoStudioCommandAPI_StartRecording_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URokokoStudioCommandAPI_StartRecording()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URokokoStudioCommandAPI_StartRecording_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URokokoStudioCommandAPI_StopRecording_Statics
	{
		struct RokokoStudioCommandAPI_eventStopRecording_Parms
		{
			FRokokoCommandAPI_IPInfo IPInfo;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IPInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_IPInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URokokoStudioCommandAPI_StopRecording_Statics::NewProp_IPInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URokokoStudioCommandAPI_StopRecording_Statics::NewProp_IPInfo = { "IPInfo", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RokokoStudioCommandAPI_eventStopRecording_Parms, IPInfo), Z_Construct_UScriptStruct_FRokokoCommandAPI_IPInfo, METADATA_PARAMS(Z_Construct_UFunction_URokokoStudioCommandAPI_StopRecording_Statics::NewProp_IPInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URokokoStudioCommandAPI_StopRecording_Statics::NewProp_IPInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URokokoStudioCommandAPI_StopRecording_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URokokoStudioCommandAPI_StopRecording_Statics::NewProp_IPInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URokokoStudioCommandAPI_StopRecording_Statics::Function_MetaDataParams[] = {
		{ "Category", "Command API" },
		{ "ModuleRelativePath", "Public/RokokoStudioCommandAPI.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URokokoStudioCommandAPI_StopRecording_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URokokoStudioCommandAPI, nullptr, "StopRecording", nullptr, nullptr, sizeof(RokokoStudioCommandAPI_eventStopRecording_Parms), Z_Construct_UFunction_URokokoStudioCommandAPI_StopRecording_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URokokoStudioCommandAPI_StopRecording_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URokokoStudioCommandAPI_StopRecording_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URokokoStudioCommandAPI_StopRecording_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URokokoStudioCommandAPI_StopRecording()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URokokoStudioCommandAPI_StopRecording_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_URokokoStudioCommandAPI_NoRegister()
	{
		return URokokoStudioCommandAPI::StaticClass();
	}
	struct Z_Construct_UClass_URokokoStudioCommandAPI_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Default_SmartSuitName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Default_SmartSuitName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Default_IPInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Default_IPInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCompletedRequest_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCompletedRequest;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URokokoStudioCommandAPI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Smartsuit,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URokokoStudioCommandAPI_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URokokoStudioCommandAPI_Calibrate, "Calibrate" }, // 10263879
		{ &Z_Construct_UFunction_URokokoStudioCommandAPI_Restart, "Restart" }, // 3830005045
		{ &Z_Construct_UFunction_URokokoStudioCommandAPI_SaveConfigFile, "SaveConfigFile" }, // 528051385
		{ &Z_Construct_UFunction_URokokoStudioCommandAPI_StartRecording, "StartRecording" }, // 2844109364
		{ &Z_Construct_UFunction_URokokoStudioCommandAPI_StopRecording, "StopRecording" }, // 1168466631
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoStudioCommandAPI_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "RokokoStudioCommandAPI.h" },
		{ "ModuleRelativePath", "Public/RokokoStudioCommandAPI.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoStudioCommandAPI_Statics::NewProp_Default_SmartSuitName_MetaData[] = {
		{ "Category", "Command API" },
		{ "ModuleRelativePath", "Public/RokokoStudioCommandAPI.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_URokokoStudioCommandAPI_Statics::NewProp_Default_SmartSuitName = { "Default_SmartSuitName", nullptr, (EPropertyFlags)0x0010000000004014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URokokoStudioCommandAPI, Default_SmartSuitName), METADATA_PARAMS(Z_Construct_UClass_URokokoStudioCommandAPI_Statics::NewProp_Default_SmartSuitName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoStudioCommandAPI_Statics::NewProp_Default_SmartSuitName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoStudioCommandAPI_Statics::NewProp_Default_IPInfo_MetaData[] = {
		{ "Category", "Command API" },
		{ "ModuleRelativePath", "Public/RokokoStudioCommandAPI.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_URokokoStudioCommandAPI_Statics::NewProp_Default_IPInfo = { "Default_IPInfo", nullptr, (EPropertyFlags)0x0010000000004014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URokokoStudioCommandAPI, Default_IPInfo), Z_Construct_UScriptStruct_FRokokoCommandAPI_IPInfo, METADATA_PARAMS(Z_Construct_UClass_URokokoStudioCommandAPI_Statics::NewProp_Default_IPInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoStudioCommandAPI_Statics::NewProp_Default_IPInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoStudioCommandAPI_Statics::NewProp_OnCompletedRequest_MetaData[] = {
		{ "Category", "Command API" },
		{ "ModuleRelativePath", "Public/RokokoStudioCommandAPI.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URokokoStudioCommandAPI_Statics::NewProp_OnCompletedRequest = { "OnCompletedRequest", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URokokoStudioCommandAPI, OnCompletedRequest), Z_Construct_UDelegateFunction_Smartsuit_OnCompletedRequest__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_URokokoStudioCommandAPI_Statics::NewProp_OnCompletedRequest_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoStudioCommandAPI_Statics::NewProp_OnCompletedRequest_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URokokoStudioCommandAPI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoStudioCommandAPI_Statics::NewProp_Default_SmartSuitName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoStudioCommandAPI_Statics::NewProp_Default_IPInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoStudioCommandAPI_Statics::NewProp_OnCompletedRequest,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URokokoStudioCommandAPI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URokokoStudioCommandAPI>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URokokoStudioCommandAPI_Statics::ClassParams = {
		&URokokoStudioCommandAPI::StaticClass,
		"RokokoStudioCommandAPI",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URokokoStudioCommandAPI_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URokokoStudioCommandAPI_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_URokokoStudioCommandAPI_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoStudioCommandAPI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URokokoStudioCommandAPI()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URokokoStudioCommandAPI_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URokokoStudioCommandAPI, 557693923);
	template<> SMARTSUIT_API UClass* StaticClass<URokokoStudioCommandAPI>()
	{
		return URokokoStudioCommandAPI::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URokokoStudioCommandAPI(Z_Construct_UClass_URokokoStudioCommandAPI, &URokokoStudioCommandAPI::StaticClass, TEXT("/Script/Smartsuit"), TEXT("URokokoStudioCommandAPI"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URokokoStudioCommandAPI);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
