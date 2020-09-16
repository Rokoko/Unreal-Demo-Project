// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Smartsuit/Public/SmartsuitDefinitions.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSmartsuitDefinitions() {}
// Cross Module References
	SMARTSUIT_API UScriptStruct* Z_Construct_UScriptStruct_FSuitData();
	UPackage* Z_Construct_UPackage__Script_Smartsuit();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	SMARTSUIT_API UScriptStruct* Z_Construct_UScriptStruct_FSmartsuitBone();
// End Cross Module References
class UScriptStruct* FSuitData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SMARTSUIT_API uint32 Get_Z_Construct_UScriptStruct_FSuitData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSuitData, Z_Construct_UPackage__Script_Smartsuit(), TEXT("SuitData"), sizeof(FSuitData), Get_Z_Construct_UScriptStruct_FSuitData_Hash());
	}
	return Singleton;
}
template<> SMARTSUIT_API UScriptStruct* StaticStruct<FSuitData>()
{
	return FSuitData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSuitData(FSuitData::StaticStruct, TEXT("/Script/Smartsuit"), TEXT("SuitData"), false, nullptr, nullptr);
static struct FScriptStruct_Smartsuit_StaticRegisterNativesFSuitData
{
	FScriptStruct_Smartsuit_StaticRegisterNativesFSuitData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SuitData")),new UScriptStruct::TCppStructOps<FSuitData>);
	}
} ScriptStruct_Smartsuit_StaticRegisterNativesFSuitData;
	struct Z_Construct_UScriptStruct_FSuitData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_color_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_color;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_faceId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_faceId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hasFace_MetaData[];
#endif
		static void NewProp_hasFace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_hasFace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hasBody_MetaData[];
#endif
		static void NewProp_hasBody_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_hasBody;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hasGloves_MetaData[];
#endif
		static void NewProp_hasGloves_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_hasGloves;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_profileName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_profileName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isLive_MetaData[];
#endif
		static void NewProp_isLive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isLive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_id_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_id;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_suitname_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_suitname;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSuitData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*! \\brief Contains data that represent the last frame received from the Smartsuit.\n*\n* This struct represents a Smartsuit data frame as received from the Smartsuit.\n* It also includes meta variables used to manage the state of the Smartsuit in Unreal.\n*/" },
		{ "ModuleRelativePath", "Public/SmartsuitDefinitions.h" },
		{ "ToolTip", "! \\brief Contains data that represent the last frame received from the Smartsuit.\n*\n* This struct represents a Smartsuit data frame as received from the Smartsuit.\n* It also includes meta variables used to manage the state of the Smartsuit in Unreal." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSuitData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSuitData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSuitData_Statics::NewProp_color_MetaData[] = {
		{ "Category", "SuitData" },
		{ "ModuleRelativePath", "Public/SmartsuitDefinitions.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSuitData_Statics::NewProp_color = { "color", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSuitData, color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FSuitData_Statics::NewProp_color_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSuitData_Statics::NewProp_color_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSuitData_Statics::NewProp_faceId_MetaData[] = {
		{ "Category", "SuitData" },
		{ "ModuleRelativePath", "Public/SmartsuitDefinitions.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSuitData_Statics::NewProp_faceId = { "faceId", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSuitData, faceId), METADATA_PARAMS(Z_Construct_UScriptStruct_FSuitData_Statics::NewProp_faceId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSuitData_Statics::NewProp_faceId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSuitData_Statics::NewProp_hasFace_MetaData[] = {
		{ "Category", "SuitData" },
		{ "ModuleRelativePath", "Public/SmartsuitDefinitions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSuitData_Statics::NewProp_hasFace_SetBit(void* Obj)
	{
		((FSuitData*)Obj)->hasFace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSuitData_Statics::NewProp_hasFace = { "hasFace", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSuitData), &Z_Construct_UScriptStruct_FSuitData_Statics::NewProp_hasFace_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSuitData_Statics::NewProp_hasFace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSuitData_Statics::NewProp_hasFace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSuitData_Statics::NewProp_hasBody_MetaData[] = {
		{ "Category", "SuitData" },
		{ "ModuleRelativePath", "Public/SmartsuitDefinitions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSuitData_Statics::NewProp_hasBody_SetBit(void* Obj)
	{
		((FSuitData*)Obj)->hasBody = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSuitData_Statics::NewProp_hasBody = { "hasBody", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSuitData), &Z_Construct_UScriptStruct_FSuitData_Statics::NewProp_hasBody_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSuitData_Statics::NewProp_hasBody_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSuitData_Statics::NewProp_hasBody_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSuitData_Statics::NewProp_hasGloves_MetaData[] = {
		{ "Category", "SuitData" },
		{ "ModuleRelativePath", "Public/SmartsuitDefinitions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSuitData_Statics::NewProp_hasGloves_SetBit(void* Obj)
	{
		((FSuitData*)Obj)->hasGloves = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSuitData_Statics::NewProp_hasGloves = { "hasGloves", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSuitData), &Z_Construct_UScriptStruct_FSuitData_Statics::NewProp_hasGloves_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSuitData_Statics::NewProp_hasGloves_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSuitData_Statics::NewProp_hasGloves_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSuitData_Statics::NewProp_profileName_MetaData[] = {
		{ "Category", "SuitData" },
		{ "Comment", "/** The name of the profile. */" },
		{ "ModuleRelativePath", "Public/SmartsuitDefinitions.h" },
		{ "ToolTip", "The name of the profile." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSuitData_Statics::NewProp_profileName = { "profileName", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSuitData, profileName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSuitData_Statics::NewProp_profileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSuitData_Statics::NewProp_profileName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSuitData_Statics::NewProp_isLive_MetaData[] = {
		{ "Category", "SuitData" },
		{ "ModuleRelativePath", "Public/SmartsuitDefinitions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSuitData_Statics::NewProp_isLive_SetBit(void* Obj)
	{
		((FSuitData*)Obj)->isLive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSuitData_Statics::NewProp_isLive = { "isLive", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSuitData), &Z_Construct_UScriptStruct_FSuitData_Statics::NewProp_isLive_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSuitData_Statics::NewProp_isLive_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSuitData_Statics::NewProp_isLive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSuitData_Statics::NewProp_id_MetaData[] = {
		{ "Category", "SuitData" },
		{ "ModuleRelativePath", "Public/SmartsuitDefinitions.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSuitData_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSuitData, id), METADATA_PARAMS(Z_Construct_UScriptStruct_FSuitData_Statics::NewProp_id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSuitData_Statics::NewProp_id_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSuitData_Statics::NewProp_suitname_MetaData[] = {
		{ "Category", "SuitData" },
		{ "Comment", "/** The name of the Smartsuit. */" },
		{ "ModuleRelativePath", "Public/SmartsuitDefinitions.h" },
		{ "ToolTip", "The name of the Smartsuit." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSuitData_Statics::NewProp_suitname = { "suitname", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSuitData, suitname), METADATA_PARAMS(Z_Construct_UScriptStruct_FSuitData_Statics::NewProp_suitname_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSuitData_Statics::NewProp_suitname_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSuitData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSuitData_Statics::NewProp_color,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSuitData_Statics::NewProp_faceId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSuitData_Statics::NewProp_hasFace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSuitData_Statics::NewProp_hasBody,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSuitData_Statics::NewProp_hasGloves,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSuitData_Statics::NewProp_profileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSuitData_Statics::NewProp_isLive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSuitData_Statics::NewProp_id,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSuitData_Statics::NewProp_suitname,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSuitData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Smartsuit,
		nullptr,
		&NewStructOps,
		"SuitData",
		sizeof(FSuitData),
		alignof(FSuitData),
		Z_Construct_UScriptStruct_FSuitData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSuitData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSuitData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSuitData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSuitData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSuitData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Smartsuit();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SuitData"), sizeof(FSuitData), Get_Z_Construct_UScriptStruct_FSuitData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSuitData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSuitData_Hash() { return 174390969U; }
class UScriptStruct* FSmartsuitBone::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SMARTSUIT_API uint32 Get_Z_Construct_UScriptStruct_FSmartsuitBone_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSmartsuitBone, Z_Construct_UPackage__Script_Smartsuit(), TEXT("SmartsuitBone"), sizeof(FSmartsuitBone), Get_Z_Construct_UScriptStruct_FSmartsuitBone_Hash());
	}
	return Singleton;
}
template<> SMARTSUIT_API UScriptStruct* StaticStruct<FSmartsuitBone>()
{
	return FSmartsuitBone::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSmartsuitBone(FSmartsuitBone::StaticStruct, TEXT("/Script/Smartsuit"), TEXT("SmartsuitBone"), false, nullptr, nullptr);
static struct FScriptStruct_Smartsuit_StaticRegisterNativesFSmartsuitBone
{
	FScriptStruct_Smartsuit_StaticRegisterNativesFSmartsuitBone()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SmartsuitBone")),new UScriptStruct::TCppStructOps<FSmartsuitBone>);
	}
} ScriptStruct_Smartsuit_StaticRegisterNativesFSmartsuitBone;
	struct Z_Construct_UScriptStruct_FSmartsuitBone_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBone_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "///*! \\brief Contains data that represent the last frame received from the Smartsuit.\n//*\n//* This struct represents a Smartsuit data frame as received from the Smartsuit.\n//* It also includes meta variables used to manage the state of the Smartsuit in Unreal.\n//*/\n//struct SuitData {\n//\n//\x09/** The name of the Smartsuit. */\n//\x09""char suitname[5];\n//\n//\x09/** Information about the sensors connected to this Smartsuit, like position, rotation, etc.*/\n//\x09Sensor sensors[19];\n//\n//\x09/** The time to live indicator for this Smartsuit. This indica*/\n//\x09""float ttl;\n//\n//\x09/** The ip address of the Smartsuit.*/\n//\x09uint32 url;\n//\n//\x09/** Indicator if the Smartsuit is broadcasting.*/\n//\x09""bool isBroadcasting;\n//\n//\x09/** Indicator if the Smartsuit has profile.*/\n//\x09""bool hasProfile;\n//\n//\x09/// @private.\n//\x09""bool profileToggle;\n//\n//\x09/** The number of frames received from this Smartsuit during the last second.*/\n//\x09""float fps;\n//\n//\x09/// @private\n//\x09int currFPSCount;\n//\n//\x09/// @private\n//\x09int lastFPSSecond;\n//\n//\x09/**\n//\x09* Shortcut function to get the Hip sensor information for this Smartsuit.\n//\x09*\n//\x09* @return The Sensor information that corresponds to hip, if no sensor is found, it returns nullptr.\n//\x09*/\n//\x09Sensor* Hip() {\n//\x09\x09return GetSensor(SENSOR_HIP);\n//\x09}\n//\n//\x09Sensor* GetSensor(uint16_t address) {\n//\x09\x09""for (int i = 0; i < 19; i++) {\n//\x09\x09\x09if (sensors[i].addr == address) {\n//\x09\x09\x09\x09return &(sensors[i]);\n//\x09\x09\x09}\n//\x09\x09}\n//\x09\x09return nullptr;\n//\x09}\n//\n//\x09""FName GetSubjectName() {\n//\x09\x09return FName(*FString(ANSI_TO_TCHAR(suitname)));\n//\x09}\n//};\n" },
		{ "ModuleRelativePath", "Public/SmartsuitDefinitions.h" },
		{ "ToolTip", "! \\brief Contains data that represent the last frame received from the Smartsuit.\n/\n/ This struct represents a Smartsuit data frame as received from the Smartsuit.\n/ It also includes meta variables used to manage the state of the Smartsuit in Unreal.\n\nstruct SuitData {\n\n        The name of the Smartsuit.\n       char suitname[5];\n\n        Information about the sensors connected to this Smartsuit, like position, rotation, etc.\n       Sensor sensors[19];\n\n        The time to live indicator for this Smartsuit. This indica\n       float ttl;\n\n        The ip address of the Smartsuit.\n       uint32 url;\n\n        Indicator if the Smartsuit is broadcasting.\n       bool isBroadcasting;\n\n        Indicator if the Smartsuit has profile.\n       bool hasProfile;\n\n        @private.\n       bool profileToggle;\n\n        The number of frames received from this Smartsuit during the last second.\n       float fps;\n\n        @private\n       int currFPSCount;\n\n        @private\n       int lastFPSSecond;\n\n\nShortcut function to get the Hip sensor information for this Smartsuit.\n\n@return The Sensor information that corresponds to hip, if no sensor is found, it returns nullptr.\n\n       Sensor* Hip() {\n               return GetSensor(SENSOR_HIP);\n       }\n\n       Sensor* GetSensor(uint16_t address) {\n               for (int i = 0; i < 19; i++) {\n                       if (sensors[i].addr == address) {\n                               return &(sensors[i]);\n                       }\n               }\n               return nullptr;\n       }\n\n       FName GetSubjectName() {\n               return FName(*FString(ANSI_TO_TCHAR(suitname)));\n       }\n};" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSmartsuitBone_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSmartsuitBone>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSmartsuitBone_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Smartsuit,
		nullptr,
		&NewStructOps,
		"SmartsuitBone",
		sizeof(FSmartsuitBone),
		alignof(FSmartsuitBone),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBone_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBone_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSmartsuitBone()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSmartsuitBone_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Smartsuit();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SmartsuitBone"), sizeof(FSmartsuitBone), Get_Z_Construct_UScriptStruct_FSmartsuitBone_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSmartsuitBone_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSmartsuitBone_Hash() { return 2562788217U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
