// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Smartsuit/Public/VirtualProductionSource.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVirtualProductionSource() {}
// Cross Module References
	SMARTSUIT_API UScriptStruct* Z_Construct_UScriptStruct_FVPMorphTargetMapping();
	UPackage* Z_Construct_UPackage__Script_Smartsuit();
	SMARTSUIT_API UClass* Z_Construct_UClass_URokokoFaceMapData_NoRegister();
	SMARTSUIT_API UClass* Z_Construct_UClass_URokokoFaceMapData();
	LIVELINK_API UClass* Z_Construct_UClass_ULiveLinkRemapAsset();
	SMARTSUIT_API UClass* Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_NoRegister();
	SMARTSUIT_API UClass* Z_Construct_UClass_UVPFaceMorphTargetNameRemapping();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
// End Cross Module References
class UScriptStruct* FVPMorphTargetMapping::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SMARTSUIT_API uint32 Get_Z_Construct_UScriptStruct_FVPMorphTargetMapping_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVPMorphTargetMapping, Z_Construct_UPackage__Script_Smartsuit(), TEXT("VPMorphTargetMapping"), sizeof(FVPMorphTargetMapping), Get_Z_Construct_UScriptStruct_FVPMorphTargetMapping_Hash());
	}
	return Singleton;
}
template<> SMARTSUIT_API UScriptStruct* StaticStruct<FVPMorphTargetMapping>()
{
	return FVPMorphTargetMapping::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVPMorphTargetMapping(FVPMorphTargetMapping::StaticStruct, TEXT("/Script/Smartsuit"), TEXT("VPMorphTargetMapping"), false, nullptr, nullptr);
static struct FScriptStruct_Smartsuit_StaticRegisterNativesFVPMorphTargetMapping
{
	FScriptStruct_Smartsuit_StaticRegisterNativesFVPMorphTargetMapping()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VPMorphTargetMapping")),new UScriptStruct::TCppStructOps<FVPMorphTargetMapping>);
	}
} ScriptStruct_Smartsuit_StaticRegisterNativesFVPMorphTargetMapping;
	struct Z_Construct_UScriptStruct_FVPMorphTargetMapping_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurveNameOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CurveNameOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurveName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CurveName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVPMorphTargetMapping_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVPMorphTargetMapping_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVPMorphTargetMapping>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVPMorphTargetMapping_Statics::NewProp_CurveNameOverride_MetaData[] = {
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVPMorphTargetMapping_Statics::NewProp_CurveNameOverride = { "CurveNameOverride", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVPMorphTargetMapping, CurveNameOverride), METADATA_PARAMS(Z_Construct_UScriptStruct_FVPMorphTargetMapping_Statics::NewProp_CurveNameOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVPMorphTargetMapping_Statics::NewProp_CurveNameOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVPMorphTargetMapping_Statics::NewProp_CurveName_MetaData[] = {
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVPMorphTargetMapping_Statics::NewProp_CurveName = { "CurveName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVPMorphTargetMapping, CurveName), METADATA_PARAMS(Z_Construct_UScriptStruct_FVPMorphTargetMapping_Statics::NewProp_CurveName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVPMorphTargetMapping_Statics::NewProp_CurveName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVPMorphTargetMapping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVPMorphTargetMapping_Statics::NewProp_CurveNameOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVPMorphTargetMapping_Statics::NewProp_CurveName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVPMorphTargetMapping_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Smartsuit,
		nullptr,
		&NewStructOps,
		"VPMorphTargetMapping",
		sizeof(FVPMorphTargetMapping),
		alignof(FVPMorphTargetMapping),
		Z_Construct_UScriptStruct_FVPMorphTargetMapping_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVPMorphTargetMapping_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVPMorphTargetMapping_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVPMorphTargetMapping_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVPMorphTargetMapping()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVPMorphTargetMapping_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Smartsuit();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VPMorphTargetMapping"), sizeof(FVPMorphTargetMapping), Get_Z_Construct_UScriptStruct_FVPMorphTargetMapping_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVPMorphTargetMapping_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVPMorphTargetMapping_Hash() { return 1231633063U; }
	DEFINE_FUNCTION(URokokoFaceMapData::execInitializeTMap)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeTMap();
		P_NATIVE_END;
	}
	void URokokoFaceMapData::StaticRegisterNativesURokokoFaceMapData()
	{
		UClass* Class = URokokoFaceMapData::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "InitializeTMap", &URokokoFaceMapData::execInitializeTMap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URokokoFaceMapData_InitializeTMap_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URokokoFaceMapData_InitializeTMap_Statics::Function_MetaDataParams[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URokokoFaceMapData_InitializeTMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URokokoFaceMapData, nullptr, "InitializeTMap", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URokokoFaceMapData_InitializeTMap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URokokoFaceMapData_InitializeTMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URokokoFaceMapData_InitializeTMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URokokoFaceMapData_InitializeTMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_URokokoFaceMapData_NoRegister()
	{
		return URokokoFaceMapData::StaticClass();
	}
	struct Z_Construct_UClass_URokokoFaceMapData_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tongueOut_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_tongueOut;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_noseSneerRight_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_noseSneerRight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_noseSneerLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_noseSneerLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mouthUpperUpRight_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_mouthUpperUpRight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mouthUpperUpLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_mouthUpperUpLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mouthStretchRight_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_mouthStretchRight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mouthStretchLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_mouthStretchLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mouthSmileRight_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_mouthSmileRight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mouthSmileLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_mouthSmileLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mouthShrugUpper_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_mouthShrugUpper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mouthShrugLower_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_mouthShrugLower;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mouthRollUpper_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_mouthRollUpper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mouthRollLower_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_mouthRollLower;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mouthRight_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_mouthRight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mouthPucker_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_mouthPucker;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mouthPressRight_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_mouthPressRight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mouthPressLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_mouthPressLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mouthLowerDownRight_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_mouthLowerDownRight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mouthLowerDownLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_mouthLowerDownLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mouthLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_mouthLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mouthFunnel_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_mouthFunnel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mouthFrownRight_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_mouthFrownRight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mouthFrownLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_mouthFrownLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mouthDimpleRight_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_mouthDimpleRight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mouthDimpleLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_mouthDimpleLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mouthClose_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_mouthClose;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_jawRight_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_jawRight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_jawLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_jawLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_jawForward_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_jawForward;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_jawOpen_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_jawOpen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_eyeWideRight_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_eyeWideRight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_eyeWideLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_eyeWideLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_eyeSquintRight_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_eyeSquintRight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_eyeSquintLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_eyeSquintLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_eyeLookUpRight_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_eyeLookUpRight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_eyeLookUpLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_eyeLookUpLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_eyeLookOutRight_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_eyeLookOutRight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_eyeLookOutLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_eyeLookOutLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_eyeLookInRight_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_eyeLookInRight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_eyeLookInLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_eyeLookInLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_eyeLookDownRight_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_eyeLookDownRight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_eyeLookDownLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_eyeLookDownLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_eyeBlinkRight_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_eyeBlinkRight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_eyeBlinkLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_eyeBlinkLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_cheekSquintRight_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_cheekSquintRight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_cheekSquintLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_cheekSquintLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_cheekPuff_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_cheekPuff;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_browOuterUpRight_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_browOuterUpRight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_browOuterUpLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_browOuterUpLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_browInnerUp_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_browInnerUp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_browDownRight_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_browDownRight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_browDownLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_browDownLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NameMapping_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_NameMapping;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_NameMapping_Key_KeyProp;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_NameMapping_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URokokoFaceMapData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULiveLinkRemapAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Smartsuit,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URokokoFaceMapData_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URokokoFaceMapData_InitializeTMap, "InitializeTMap" }, // 2849278313
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoFaceMapData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "VirtualProductionSource.h" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_tongueOut_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_tongueOut = { "tongueOut", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URokokoFaceMapData, tongueOut), METADATA_PARAMS(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_tongueOut_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_tongueOut_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_noseSneerRight_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_noseSneerRight = { "noseSneerRight", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URokokoFaceMapData, noseSneerRight), METADATA_PARAMS(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_noseSneerRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_noseSneerRight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_noseSneerLeft_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_noseSneerLeft = { "noseSneerLeft", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URokokoFaceMapData, noseSneerLeft), METADATA_PARAMS(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_noseSneerLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_noseSneerLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthUpperUpRight_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthUpperUpRight = { "mouthUpperUpRight", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URokokoFaceMapData, mouthUpperUpRight), METADATA_PARAMS(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthUpperUpRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthUpperUpRight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthUpperUpLeft_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthUpperUpLeft = { "mouthUpperUpLeft", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URokokoFaceMapData, mouthUpperUpLeft), METADATA_PARAMS(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthUpperUpLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthUpperUpLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthStretchRight_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthStretchRight = { "mouthStretchRight", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URokokoFaceMapData, mouthStretchRight), METADATA_PARAMS(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthStretchRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthStretchRight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthStretchLeft_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthStretchLeft = { "mouthStretchLeft", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URokokoFaceMapData, mouthStretchLeft), METADATA_PARAMS(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthStretchLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthStretchLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthSmileRight_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthSmileRight = { "mouthSmileRight", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URokokoFaceMapData, mouthSmileRight), METADATA_PARAMS(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthSmileRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthSmileRight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthSmileLeft_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthSmileLeft = { "mouthSmileLeft", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URokokoFaceMapData, mouthSmileLeft), METADATA_PARAMS(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthSmileLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthSmileLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthShrugUpper_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthShrugUpper = { "mouthShrugUpper", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URokokoFaceMapData, mouthShrugUpper), METADATA_PARAMS(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthShrugUpper_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthShrugUpper_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthShrugLower_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthShrugLower = { "mouthShrugLower", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URokokoFaceMapData, mouthShrugLower), METADATA_PARAMS(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthShrugLower_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthShrugLower_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthRollUpper_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthRollUpper = { "mouthRollUpper", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URokokoFaceMapData, mouthRollUpper), METADATA_PARAMS(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthRollUpper_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthRollUpper_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthRollLower_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthRollLower = { "mouthRollLower", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URokokoFaceMapData, mouthRollLower), METADATA_PARAMS(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthRollLower_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthRollLower_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthRight_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthRight = { "mouthRight", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URokokoFaceMapData, mouthRight), METADATA_PARAMS(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthRight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthPucker_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthPucker = { "mouthPucker", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URokokoFaceMapData, mouthPucker), METADATA_PARAMS(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthPucker_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthPucker_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthPressRight_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthPressRight = { "mouthPressRight", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URokokoFaceMapData, mouthPressRight), METADATA_PARAMS(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthPressRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthPressRight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthPressLeft_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthPressLeft = { "mouthPressLeft", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URokokoFaceMapData, mouthPressLeft), METADATA_PARAMS(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthPressLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthPressLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthLowerDownRight_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthLowerDownRight = { "mouthLowerDownRight", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URokokoFaceMapData, mouthLowerDownRight), METADATA_PARAMS(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthLowerDownRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthLowerDownRight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthLowerDownLeft_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthLowerDownLeft = { "mouthLowerDownLeft", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URokokoFaceMapData, mouthLowerDownLeft), METADATA_PARAMS(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthLowerDownLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthLowerDownLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthLeft_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthLeft = { "mouthLeft", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URokokoFaceMapData, mouthLeft), METADATA_PARAMS(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthFunnel_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthFunnel = { "mouthFunnel", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URokokoFaceMapData, mouthFunnel), METADATA_PARAMS(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthFunnel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthFunnel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthFrownRight_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthFrownRight = { "mouthFrownRight", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URokokoFaceMapData, mouthFrownRight), METADATA_PARAMS(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthFrownRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthFrownRight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthFrownLeft_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthFrownLeft = { "mouthFrownLeft", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URokokoFaceMapData, mouthFrownLeft), METADATA_PARAMS(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthFrownLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthFrownLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthDimpleRight_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthDimpleRight = { "mouthDimpleRight", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URokokoFaceMapData, mouthDimpleRight), METADATA_PARAMS(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthDimpleRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthDimpleRight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthDimpleLeft_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthDimpleLeft = { "mouthDimpleLeft", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URokokoFaceMapData, mouthDimpleLeft), METADATA_PARAMS(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthDimpleLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthDimpleLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthClose_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthClose = { "mouthClose", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URokokoFaceMapData, mouthClose), METADATA_PARAMS(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthClose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthClose_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_jawRight_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_jawRight = { "jawRight", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URokokoFaceMapData, jawRight), METADATA_PARAMS(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_jawRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_jawRight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_jawLeft_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_jawLeft = { "jawLeft", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URokokoFaceMapData, jawLeft), METADATA_PARAMS(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_jawLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_jawLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_jawForward_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_jawForward = { "jawForward", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URokokoFaceMapData, jawForward), METADATA_PARAMS(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_jawForward_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_jawForward_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_jawOpen_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_jawOpen = { "jawOpen", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URokokoFaceMapData, jawOpen), METADATA_PARAMS(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_jawOpen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_jawOpen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeWideRight_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeWideRight = { "eyeWideRight", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URokokoFaceMapData, eyeWideRight), METADATA_PARAMS(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeWideRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeWideRight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeWideLeft_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeWideLeft = { "eyeWideLeft", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URokokoFaceMapData, eyeWideLeft), METADATA_PARAMS(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeWideLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeWideLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeSquintRight_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeSquintRight = { "eyeSquintRight", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URokokoFaceMapData, eyeSquintRight), METADATA_PARAMS(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeSquintRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeSquintRight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeSquintLeft_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeSquintLeft = { "eyeSquintLeft", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URokokoFaceMapData, eyeSquintLeft), METADATA_PARAMS(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeSquintLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeSquintLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeLookUpRight_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeLookUpRight = { "eyeLookUpRight", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URokokoFaceMapData, eyeLookUpRight), METADATA_PARAMS(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeLookUpRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeLookUpRight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeLookUpLeft_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeLookUpLeft = { "eyeLookUpLeft", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URokokoFaceMapData, eyeLookUpLeft), METADATA_PARAMS(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeLookUpLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeLookUpLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeLookOutRight_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeLookOutRight = { "eyeLookOutRight", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URokokoFaceMapData, eyeLookOutRight), METADATA_PARAMS(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeLookOutRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeLookOutRight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeLookOutLeft_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeLookOutLeft = { "eyeLookOutLeft", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URokokoFaceMapData, eyeLookOutLeft), METADATA_PARAMS(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeLookOutLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeLookOutLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeLookInRight_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeLookInRight = { "eyeLookInRight", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URokokoFaceMapData, eyeLookInRight), METADATA_PARAMS(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeLookInRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeLookInRight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeLookInLeft_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeLookInLeft = { "eyeLookInLeft", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URokokoFaceMapData, eyeLookInLeft), METADATA_PARAMS(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeLookInLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeLookInLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeLookDownRight_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeLookDownRight = { "eyeLookDownRight", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URokokoFaceMapData, eyeLookDownRight), METADATA_PARAMS(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeLookDownRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeLookDownRight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeLookDownLeft_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeLookDownLeft = { "eyeLookDownLeft", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URokokoFaceMapData, eyeLookDownLeft), METADATA_PARAMS(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeLookDownLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeLookDownLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeBlinkRight_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeBlinkRight = { "eyeBlinkRight", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URokokoFaceMapData, eyeBlinkRight), METADATA_PARAMS(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeBlinkRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeBlinkRight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeBlinkLeft_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeBlinkLeft = { "eyeBlinkLeft", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URokokoFaceMapData, eyeBlinkLeft), METADATA_PARAMS(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeBlinkLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeBlinkLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_cheekSquintRight_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_cheekSquintRight = { "cheekSquintRight", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URokokoFaceMapData, cheekSquintRight), METADATA_PARAMS(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_cheekSquintRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_cheekSquintRight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_cheekSquintLeft_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_cheekSquintLeft = { "cheekSquintLeft", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URokokoFaceMapData, cheekSquintLeft), METADATA_PARAMS(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_cheekSquintLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_cheekSquintLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_cheekPuff_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_cheekPuff = { "cheekPuff", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URokokoFaceMapData, cheekPuff), METADATA_PARAMS(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_cheekPuff_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_cheekPuff_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_browOuterUpRight_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_browOuterUpRight = { "browOuterUpRight", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URokokoFaceMapData, browOuterUpRight), METADATA_PARAMS(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_browOuterUpRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_browOuterUpRight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_browOuterUpLeft_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_browOuterUpLeft = { "browOuterUpLeft", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URokokoFaceMapData, browOuterUpLeft), METADATA_PARAMS(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_browOuterUpLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_browOuterUpLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_browInnerUp_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_browInnerUp = { "browInnerUp", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URokokoFaceMapData, browInnerUp), METADATA_PARAMS(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_browInnerUp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_browInnerUp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_browDownRight_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_browDownRight = { "browDownRight", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URokokoFaceMapData, browDownRight), METADATA_PARAMS(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_browDownRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_browDownRight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_browDownLeft_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_browDownLeft = { "browDownLeft", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URokokoFaceMapData, browDownLeft), METADATA_PARAMS(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_browDownLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_browDownLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_NameMapping_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_NameMapping = { "NameMapping", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URokokoFaceMapData, NameMapping), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_NameMapping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_NameMapping_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_NameMapping_Key_KeyProp = { "NameMapping_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_NameMapping_ValueProp = { "NameMapping", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URokokoFaceMapData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_tongueOut,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_noseSneerRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_noseSneerLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthUpperUpRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthUpperUpLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthStretchRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthStretchLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthSmileRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthSmileLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthShrugUpper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthShrugLower,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthRollUpper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthRollLower,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthPucker,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthPressRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthPressLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthLowerDownRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthLowerDownLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthFunnel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthFrownRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthFrownLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthDimpleRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthDimpleLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthClose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_jawRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_jawLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_jawForward,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_jawOpen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeWideRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeWideLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeSquintRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeSquintLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeLookUpRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeLookUpLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeLookOutRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeLookOutLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeLookInRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeLookInLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeLookDownRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeLookDownLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeBlinkRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeBlinkLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_cheekSquintRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_cheekSquintLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_cheekPuff,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_browOuterUpRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_browOuterUpLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_browInnerUp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_browDownRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_browDownLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_NameMapping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_NameMapping_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_NameMapping_ValueProp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URokokoFaceMapData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URokokoFaceMapData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URokokoFaceMapData_Statics::ClassParams = {
		&URokokoFaceMapData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URokokoFaceMapData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URokokoFaceMapData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URokokoFaceMapData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoFaceMapData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URokokoFaceMapData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URokokoFaceMapData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URokokoFaceMapData, 4012962968);
	template<> SMARTSUIT_API UClass* StaticClass<URokokoFaceMapData>()
	{
		return URokokoFaceMapData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URokokoFaceMapData(Z_Construct_UClass_URokokoFaceMapData, &URokokoFaceMapData::StaticClass, TEXT("/Script/Smartsuit"), TEXT("URokokoFaceMapData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URokokoFaceMapData);
	DEFINE_FUNCTION(UVPFaceMorphTargetNameRemapping::execInitializeTMap)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeTMap();
		P_NATIVE_END;
	}
	void UVPFaceMorphTargetNameRemapping::StaticRegisterNativesUVPFaceMorphTargetNameRemapping()
	{
		UClass* Class = UVPFaceMorphTargetNameRemapping::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "InitializeTMap", &UVPFaceMorphTargetNameRemapping::execInitializeTMap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVPFaceMorphTargetNameRemapping_InitializeTMap_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPFaceMorphTargetNameRemapping_InitializeTMap_Statics::Function_MetaDataParams[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVPFaceMorphTargetNameRemapping_InitializeTMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVPFaceMorphTargetNameRemapping, nullptr, "InitializeTMap", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVPFaceMorphTargetNameRemapping_InitializeTMap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPFaceMorphTargetNameRemapping_InitializeTMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVPFaceMorphTargetNameRemapping_InitializeTMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVPFaceMorphTargetNameRemapping_InitializeTMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_NoRegister()
	{
		return UVPFaceMorphTargetNameRemapping::StaticClass();
	}
	struct Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tongueOut_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_tongueOut;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_noseSneerRight_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_noseSneerRight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_noseSneerLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_noseSneerLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mouthUpperUpRight_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_mouthUpperUpRight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mouthUpperUpLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_mouthUpperUpLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mouthStretchRight_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_mouthStretchRight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mouthStretchLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_mouthStretchLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mouthSmileRight_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_mouthSmileRight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mouthSmileLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_mouthSmileLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mouthShrugUpper_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_mouthShrugUpper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mouthShrugLower_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_mouthShrugLower;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mouthRollUpper_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_mouthRollUpper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mouthRollLower_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_mouthRollLower;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mouthRight_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_mouthRight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mouthPucker_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_mouthPucker;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mouthPressRight_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_mouthPressRight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mouthPressLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_mouthPressLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mouthLowerDownRight_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_mouthLowerDownRight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mouthLowerDownLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_mouthLowerDownLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mouthLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_mouthLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mouthFunnel_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_mouthFunnel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mouthFrownRight_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_mouthFrownRight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mouthFrownLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_mouthFrownLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mouthDimpleRight_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_mouthDimpleRight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mouthDimpleLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_mouthDimpleLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mouthClose_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_mouthClose;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_jawRight_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_jawRight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_jawLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_jawLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_jawForward_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_jawForward;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_jawOpen_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_jawOpen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_eyeWideRight_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_eyeWideRight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_eyeWideLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_eyeWideLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_eyeSquintRight_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_eyeSquintRight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_eyeSquintLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_eyeSquintLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_eyeLookUpRight_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_eyeLookUpRight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_eyeLookUpLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_eyeLookUpLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_eyeLookOutRight_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_eyeLookOutRight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_eyeLookOutLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_eyeLookOutLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_eyeLookInRight_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_eyeLookInRight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_eyeLookInLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_eyeLookInLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_eyeLookDownRight_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_eyeLookDownRight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_eyeLookDownLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_eyeLookDownLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_eyeBlinkRight_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_eyeBlinkRight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_eyeBlinkLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_eyeBlinkLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_cheekSquintRight_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_cheekSquintRight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_cheekSquintLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_cheekSquintLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_cheekPuff_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_cheekPuff;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_browOuterUpRight_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_browOuterUpRight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_browOuterUpLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_browOuterUpLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_browInnerUp_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_browInnerUp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_browDownRight_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_browDownRight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_browDownLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_browDownLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NameMapping_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_NameMapping;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_NameMapping_Key_KeyProp;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_NameMapping_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Smartsuit,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVPFaceMorphTargetNameRemapping_InitializeTMap, "InitializeTMap" }, // 295447085
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "VirtualProductionSource.h" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_tongueOut_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_tongueOut = { "tongueOut", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVPFaceMorphTargetNameRemapping, tongueOut), METADATA_PARAMS(Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_tongueOut_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_tongueOut_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_noseSneerRight_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_noseSneerRight = { "noseSneerRight", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVPFaceMorphTargetNameRemapping, noseSneerRight), METADATA_PARAMS(Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_noseSneerRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_noseSneerRight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_noseSneerLeft_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_noseSneerLeft = { "noseSneerLeft", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVPFaceMorphTargetNameRemapping, noseSneerLeft), METADATA_PARAMS(Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_noseSneerLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_noseSneerLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_mouthUpperUpRight_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_mouthUpperUpRight = { "mouthUpperUpRight", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVPFaceMorphTargetNameRemapping, mouthUpperUpRight), METADATA_PARAMS(Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_mouthUpperUpRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_mouthUpperUpRight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_mouthUpperUpLeft_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_mouthUpperUpLeft = { "mouthUpperUpLeft", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVPFaceMorphTargetNameRemapping, mouthUpperUpLeft), METADATA_PARAMS(Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_mouthUpperUpLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_mouthUpperUpLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_mouthStretchRight_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_mouthStretchRight = { "mouthStretchRight", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVPFaceMorphTargetNameRemapping, mouthStretchRight), METADATA_PARAMS(Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_mouthStretchRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_mouthStretchRight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_mouthStretchLeft_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_mouthStretchLeft = { "mouthStretchLeft", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVPFaceMorphTargetNameRemapping, mouthStretchLeft), METADATA_PARAMS(Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_mouthStretchLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_mouthStretchLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_mouthSmileRight_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_mouthSmileRight = { "mouthSmileRight", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVPFaceMorphTargetNameRemapping, mouthSmileRight), METADATA_PARAMS(Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_mouthSmileRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_mouthSmileRight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_mouthSmileLeft_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_mouthSmileLeft = { "mouthSmileLeft", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVPFaceMorphTargetNameRemapping, mouthSmileLeft), METADATA_PARAMS(Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_mouthSmileLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_mouthSmileLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_mouthShrugUpper_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_mouthShrugUpper = { "mouthShrugUpper", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVPFaceMorphTargetNameRemapping, mouthShrugUpper), METADATA_PARAMS(Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_mouthShrugUpper_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_mouthShrugUpper_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_mouthShrugLower_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_mouthShrugLower = { "mouthShrugLower", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVPFaceMorphTargetNameRemapping, mouthShrugLower), METADATA_PARAMS(Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_mouthShrugLower_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_mouthShrugLower_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_mouthRollUpper_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_mouthRollUpper = { "mouthRollUpper", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVPFaceMorphTargetNameRemapping, mouthRollUpper), METADATA_PARAMS(Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_mouthRollUpper_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_mouthRollUpper_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_mouthRollLower_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_mouthRollLower = { "mouthRollLower", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVPFaceMorphTargetNameRemapping, mouthRollLower), METADATA_PARAMS(Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_mouthRollLower_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_mouthRollLower_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_mouthRight_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_mouthRight = { "mouthRight", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVPFaceMorphTargetNameRemapping, mouthRight), METADATA_PARAMS(Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_mouthRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_mouthRight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_mouthPucker_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_mouthPucker = { "mouthPucker", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVPFaceMorphTargetNameRemapping, mouthPucker), METADATA_PARAMS(Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_mouthPucker_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_mouthPucker_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_mouthPressRight_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_mouthPressRight = { "mouthPressRight", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVPFaceMorphTargetNameRemapping, mouthPressRight), METADATA_PARAMS(Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_mouthPressRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_mouthPressRight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_mouthPressLeft_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_mouthPressLeft = { "mouthPressLeft", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVPFaceMorphTargetNameRemapping, mouthPressLeft), METADATA_PARAMS(Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_mouthPressLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_mouthPressLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_mouthLowerDownRight_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_mouthLowerDownRight = { "mouthLowerDownRight", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVPFaceMorphTargetNameRemapping, mouthLowerDownRight), METADATA_PARAMS(Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_mouthLowerDownRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_mouthLowerDownRight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_mouthLowerDownLeft_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_mouthLowerDownLeft = { "mouthLowerDownLeft", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVPFaceMorphTargetNameRemapping, mouthLowerDownLeft), METADATA_PARAMS(Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_mouthLowerDownLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_mouthLowerDownLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_mouthLeft_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_mouthLeft = { "mouthLeft", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVPFaceMorphTargetNameRemapping, mouthLeft), METADATA_PARAMS(Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_mouthLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_mouthLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_mouthFunnel_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_mouthFunnel = { "mouthFunnel", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVPFaceMorphTargetNameRemapping, mouthFunnel), METADATA_PARAMS(Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_mouthFunnel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_mouthFunnel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_mouthFrownRight_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_mouthFrownRight = { "mouthFrownRight", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVPFaceMorphTargetNameRemapping, mouthFrownRight), METADATA_PARAMS(Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_mouthFrownRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_mouthFrownRight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_mouthFrownLeft_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_mouthFrownLeft = { "mouthFrownLeft", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVPFaceMorphTargetNameRemapping, mouthFrownLeft), METADATA_PARAMS(Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_mouthFrownLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_mouthFrownLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_mouthDimpleRight_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_mouthDimpleRight = { "mouthDimpleRight", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVPFaceMorphTargetNameRemapping, mouthDimpleRight), METADATA_PARAMS(Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_mouthDimpleRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_mouthDimpleRight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_mouthDimpleLeft_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_mouthDimpleLeft = { "mouthDimpleLeft", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVPFaceMorphTargetNameRemapping, mouthDimpleLeft), METADATA_PARAMS(Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_mouthDimpleLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_mouthDimpleLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_mouthClose_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_mouthClose = { "mouthClose", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVPFaceMorphTargetNameRemapping, mouthClose), METADATA_PARAMS(Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_mouthClose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_mouthClose_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_jawRight_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_jawRight = { "jawRight", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVPFaceMorphTargetNameRemapping, jawRight), METADATA_PARAMS(Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_jawRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_jawRight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_jawLeft_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_jawLeft = { "jawLeft", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVPFaceMorphTargetNameRemapping, jawLeft), METADATA_PARAMS(Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_jawLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_jawLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_jawForward_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_jawForward = { "jawForward", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVPFaceMorphTargetNameRemapping, jawForward), METADATA_PARAMS(Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_jawForward_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_jawForward_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_jawOpen_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_jawOpen = { "jawOpen", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVPFaceMorphTargetNameRemapping, jawOpen), METADATA_PARAMS(Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_jawOpen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_jawOpen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_eyeWideRight_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_eyeWideRight = { "eyeWideRight", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVPFaceMorphTargetNameRemapping, eyeWideRight), METADATA_PARAMS(Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_eyeWideRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_eyeWideRight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_eyeWideLeft_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_eyeWideLeft = { "eyeWideLeft", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVPFaceMorphTargetNameRemapping, eyeWideLeft), METADATA_PARAMS(Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_eyeWideLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_eyeWideLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_eyeSquintRight_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_eyeSquintRight = { "eyeSquintRight", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVPFaceMorphTargetNameRemapping, eyeSquintRight), METADATA_PARAMS(Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_eyeSquintRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_eyeSquintRight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_eyeSquintLeft_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_eyeSquintLeft = { "eyeSquintLeft", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVPFaceMorphTargetNameRemapping, eyeSquintLeft), METADATA_PARAMS(Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_eyeSquintLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_eyeSquintLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_eyeLookUpRight_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_eyeLookUpRight = { "eyeLookUpRight", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVPFaceMorphTargetNameRemapping, eyeLookUpRight), METADATA_PARAMS(Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_eyeLookUpRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_eyeLookUpRight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_eyeLookUpLeft_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_eyeLookUpLeft = { "eyeLookUpLeft", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVPFaceMorphTargetNameRemapping, eyeLookUpLeft), METADATA_PARAMS(Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_eyeLookUpLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_eyeLookUpLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_eyeLookOutRight_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_eyeLookOutRight = { "eyeLookOutRight", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVPFaceMorphTargetNameRemapping, eyeLookOutRight), METADATA_PARAMS(Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_eyeLookOutRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_eyeLookOutRight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_eyeLookOutLeft_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_eyeLookOutLeft = { "eyeLookOutLeft", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVPFaceMorphTargetNameRemapping, eyeLookOutLeft), METADATA_PARAMS(Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_eyeLookOutLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_eyeLookOutLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_eyeLookInRight_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_eyeLookInRight = { "eyeLookInRight", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVPFaceMorphTargetNameRemapping, eyeLookInRight), METADATA_PARAMS(Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_eyeLookInRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_eyeLookInRight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_eyeLookInLeft_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_eyeLookInLeft = { "eyeLookInLeft", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVPFaceMorphTargetNameRemapping, eyeLookInLeft), METADATA_PARAMS(Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_eyeLookInLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_eyeLookInLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_eyeLookDownRight_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_eyeLookDownRight = { "eyeLookDownRight", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVPFaceMorphTargetNameRemapping, eyeLookDownRight), METADATA_PARAMS(Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_eyeLookDownRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_eyeLookDownRight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_eyeLookDownLeft_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_eyeLookDownLeft = { "eyeLookDownLeft", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVPFaceMorphTargetNameRemapping, eyeLookDownLeft), METADATA_PARAMS(Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_eyeLookDownLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_eyeLookDownLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_eyeBlinkRight_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_eyeBlinkRight = { "eyeBlinkRight", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVPFaceMorphTargetNameRemapping, eyeBlinkRight), METADATA_PARAMS(Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_eyeBlinkRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_eyeBlinkRight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_eyeBlinkLeft_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_eyeBlinkLeft = { "eyeBlinkLeft", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVPFaceMorphTargetNameRemapping, eyeBlinkLeft), METADATA_PARAMS(Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_eyeBlinkLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_eyeBlinkLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_cheekSquintRight_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_cheekSquintRight = { "cheekSquintRight", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVPFaceMorphTargetNameRemapping, cheekSquintRight), METADATA_PARAMS(Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_cheekSquintRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_cheekSquintRight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_cheekSquintLeft_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_cheekSquintLeft = { "cheekSquintLeft", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVPFaceMorphTargetNameRemapping, cheekSquintLeft), METADATA_PARAMS(Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_cheekSquintLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_cheekSquintLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_cheekPuff_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_cheekPuff = { "cheekPuff", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVPFaceMorphTargetNameRemapping, cheekPuff), METADATA_PARAMS(Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_cheekPuff_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_cheekPuff_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_browOuterUpRight_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_browOuterUpRight = { "browOuterUpRight", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVPFaceMorphTargetNameRemapping, browOuterUpRight), METADATA_PARAMS(Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_browOuterUpRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_browOuterUpRight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_browOuterUpLeft_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_browOuterUpLeft = { "browOuterUpLeft", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVPFaceMorphTargetNameRemapping, browOuterUpLeft), METADATA_PARAMS(Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_browOuterUpLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_browOuterUpLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_browInnerUp_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_browInnerUp = { "browInnerUp", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVPFaceMorphTargetNameRemapping, browInnerUp), METADATA_PARAMS(Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_browInnerUp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_browInnerUp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_browDownRight_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_browDownRight = { "browDownRight", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVPFaceMorphTargetNameRemapping, browDownRight), METADATA_PARAMS(Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_browDownRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_browDownRight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_browDownLeft_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_browDownLeft = { "browDownLeft", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVPFaceMorphTargetNameRemapping, browDownLeft), METADATA_PARAMS(Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_browDownLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_browDownLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_NameMapping_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_NameMapping = { "NameMapping", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVPFaceMorphTargetNameRemapping, NameMapping), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_NameMapping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_NameMapping_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_NameMapping_Key_KeyProp = { "NameMapping_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_NameMapping_ValueProp = { "NameMapping", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_tongueOut,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_noseSneerRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_noseSneerLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_mouthUpperUpRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_mouthUpperUpLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_mouthStretchRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_mouthStretchLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_mouthSmileRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_mouthSmileLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_mouthShrugUpper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_mouthShrugLower,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_mouthRollUpper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_mouthRollLower,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_mouthRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_mouthPucker,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_mouthPressRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_mouthPressLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_mouthLowerDownRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_mouthLowerDownLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_mouthLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_mouthFunnel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_mouthFrownRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_mouthFrownLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_mouthDimpleRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_mouthDimpleLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_mouthClose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_jawRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_jawLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_jawForward,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_jawOpen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_eyeWideRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_eyeWideLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_eyeSquintRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_eyeSquintLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_eyeLookUpRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_eyeLookUpLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_eyeLookOutRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_eyeLookOutLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_eyeLookInRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_eyeLookInLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_eyeLookDownRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_eyeLookDownLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_eyeBlinkRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_eyeBlinkLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_cheekSquintRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_cheekSquintLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_cheekPuff,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_browOuterUpRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_browOuterUpLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_browInnerUp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_browDownRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_browDownLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_NameMapping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_NameMapping_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::NewProp_NameMapping_ValueProp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVPFaceMorphTargetNameRemapping>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::ClassParams = {
		&UVPFaceMorphTargetNameRemapping::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVPFaceMorphTargetNameRemapping()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVPFaceMorphTargetNameRemapping, 3652298386);
	template<> SMARTSUIT_API UClass* StaticClass<UVPFaceMorphTargetNameRemapping>()
	{
		return UVPFaceMorphTargetNameRemapping::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVPFaceMorphTargetNameRemapping(Z_Construct_UClass_UVPFaceMorphTargetNameRemapping, &UVPFaceMorphTargetNameRemapping::StaticClass, TEXT("/Script/Smartsuit"), TEXT("UVPFaceMorphTargetNameRemapping"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVPFaceMorphTargetNameRemapping);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
