// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Smartsuit/Public/AnimNode_ModifyFaceCurves.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_ModifyFaceCurves() {}
// Cross Module References
	SMARTSUIT_API UEnum* Z_Construct_UEnum_Smartsuit_EModifyFaceCurvesApplyMode();
	UPackage* Z_Construct_UPackage__Script_Smartsuit();
	SMARTSUIT_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_ModifyFaceCurves();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
	SMARTSUIT_API UClass* Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_NoRegister();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSubjectRepresentation();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
// End Cross Module References
	static UEnum* EModifyFaceCurvesApplyMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Smartsuit_EModifyFaceCurvesApplyMode, Z_Construct_UPackage__Script_Smartsuit(), TEXT("EModifyFaceCurvesApplyMode"));
		}
		return Singleton;
	}
	template<> SMARTSUIT_API UEnum* StaticEnum<EModifyFaceCurvesApplyMode>()
	{
		return EModifyFaceCurvesApplyMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EModifyFaceCurvesApplyMode(EModifyFaceCurvesApplyMode_StaticEnum, TEXT("/Script/Smartsuit"), TEXT("EModifyFaceCurvesApplyMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Smartsuit_EModifyFaceCurvesApplyMode_Hash() { return 1312093141U; }
	UEnum* Z_Construct_UEnum_Smartsuit_EModifyFaceCurvesApplyMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Smartsuit();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EModifyFaceCurvesApplyMode"), 0, Get_Z_Construct_UEnum_Smartsuit_EModifyFaceCurvesApplyMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EModifyFaceCurvesApplyMode::Add", (int64)EModifyFaceCurvesApplyMode::Add },
				{ "EModifyFaceCurvesApplyMode::Scale", (int64)EModifyFaceCurvesApplyMode::Scale },
				{ "EModifyFaceCurvesApplyMode::Blend", (int64)EModifyFaceCurvesApplyMode::Blend },
				{ "EModifyFaceCurvesApplyMode::WeightedMovingAverage", (int64)EModifyFaceCurvesApplyMode::WeightedMovingAverage },
				{ "EModifyFaceCurvesApplyMode::RemapCurve", (int64)EModifyFaceCurvesApplyMode::RemapCurve },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Add.Comment", "/** Add new value to input curve value */" },
				{ "Add.Name", "EModifyFaceCurvesApplyMode::Add" },
				{ "Add.ToolTip", "Add new value to input curve value" },
				{ "Blend.Comment", "/** Blend input with new curve value, using Alpha setting on the node */" },
				{ "Blend.Name", "EModifyFaceCurvesApplyMode::Blend" },
				{ "Blend.ToolTip", "Blend input with new curve value, using Alpha setting on the node" },
				{ "ModuleRelativePath", "Public/AnimNode_ModifyFaceCurves.h" },
				{ "RemapCurve.Comment", "/** Remaps the new curve value between the CurveValues entry and 1.0 (.5 in CurveValues makes 0.51 map to 0.02) */" },
				{ "RemapCurve.Name", "EModifyFaceCurvesApplyMode::RemapCurve" },
				{ "RemapCurve.ToolTip", "Remaps the new curve value between the CurveValues entry and 1.0 (.5 in CurveValues makes 0.51 map to 0.02)" },
				{ "Scale.Comment", "/** Scale input value by new value */" },
				{ "Scale.Name", "EModifyFaceCurvesApplyMode::Scale" },
				{ "Scale.ToolTip", "Scale input value by new value" },
				{ "WeightedMovingAverage.Comment", "/** Blend the new curve value with the last curve value using Alpha to determine the weighting (.5 is a moving average, higher values react to new values faster, lower slower) */" },
				{ "WeightedMovingAverage.Name", "EModifyFaceCurvesApplyMode::WeightedMovingAverage" },
				{ "WeightedMovingAverage.ToolTip", "Blend the new curve value with the last curve value using Alpha to determine the weighting (.5 is a moving average, higher values react to new values faster, lower slower)" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Smartsuit,
				nullptr,
				"EModifyFaceCurvesApplyMode",
				"EModifyFaceCurvesApplyMode",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FAnimNode_ModifyFaceCurves::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SMARTSUIT_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_ModifyFaceCurves_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_ModifyFaceCurves, Z_Construct_UPackage__Script_Smartsuit(), TEXT("AnimNode_ModifyFaceCurves"), sizeof(FAnimNode_ModifyFaceCurves), Get_Z_Construct_UScriptStruct_FAnimNode_ModifyFaceCurves_Hash());
	}
	return Singleton;
}
template<> SMARTSUIT_API UScriptStruct* StaticStruct<FAnimNode_ModifyFaceCurves>()
{
	return FAnimNode_ModifyFaceCurves::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_ModifyFaceCurves(FAnimNode_ModifyFaceCurves::StaticStruct, TEXT("/Script/Smartsuit"), TEXT("AnimNode_ModifyFaceCurves"), false, nullptr, nullptr);
static struct FScriptStruct_Smartsuit_StaticRegisterNativesFAnimNode_ModifyFaceCurves
{
	FScriptStruct_Smartsuit_StaticRegisterNativesFAnimNode_ModifyFaceCurves()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_ModifyFaceCurves")),new UScriptStruct::TCppStructOps<FAnimNode_ModifyFaceCurves>);
	}
} ScriptStruct_Smartsuit_StaticRegisterNativesFAnimNode_ModifyFaceCurves;
	struct Z_Construct_UScriptStruct_FAnimNode_ModifyFaceCurves_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ApplyMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ApplyMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ApplyMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MorphTargetRemapAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MorphTargetRemapAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubjectRepresentation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SubjectRepresentation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Alpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Alpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurveNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CurveNames;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CurveNames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurveValues_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CurveValues;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurveValues_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourcePose_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SourcePose;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ModifyFaceCurves_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/** Easy way to modify curve values on a pose */" },
		{ "ModuleRelativePath", "Public/AnimNode_ModifyFaceCurves.h" },
		{ "ToolTip", "Easy way to modify curve values on a pose" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_ModifyFaceCurves_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_ModifyFaceCurves>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ModifyFaceCurves_Statics::NewProp_ApplyMode_MetaData[] = {
		{ "Category", "ModifyCurve" },
		{ "ModuleRelativePath", "Public/AnimNode_ModifyFaceCurves.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimNode_ModifyFaceCurves_Statics::NewProp_ApplyMode = { "ApplyMode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_ModifyFaceCurves, ApplyMode), Z_Construct_UEnum_Smartsuit_EModifyFaceCurvesApplyMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ModifyFaceCurves_Statics::NewProp_ApplyMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ModifyFaceCurves_Statics::NewProp_ApplyMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_ModifyFaceCurves_Statics::NewProp_ApplyMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ModifyFaceCurves_Statics::NewProp_MorphTargetRemapAsset_MetaData[] = {
		{ "Category", "ModifyCurve" },
		{ "ModuleRelativePath", "Public/AnimNode_ModifyFaceCurves.h" },
		{ "PinShownByDefault", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimNode_ModifyFaceCurves_Statics::NewProp_MorphTargetRemapAsset = { "MorphTargetRemapAsset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_ModifyFaceCurves, MorphTargetRemapAsset), Z_Construct_UClass_UVPFaceMorphTargetNameRemapping_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ModifyFaceCurves_Statics::NewProp_MorphTargetRemapAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ModifyFaceCurves_Statics::NewProp_MorphTargetRemapAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ModifyFaceCurves_Statics::NewProp_SubjectRepresentation_MetaData[] = {
		{ "Category", "ModifyCurve" },
		{ "Comment", "//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ModifyCurve, meta = (PinShownByDefault))\n//FName LiveLinkSubjectName;\n" },
		{ "ModuleRelativePath", "Public/AnimNode_ModifyFaceCurves.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ModifyCurve, meta = (PinShownByDefault))\nFName LiveLinkSubjectName;" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_ModifyFaceCurves_Statics::NewProp_SubjectRepresentation = { "SubjectRepresentation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_ModifyFaceCurves, SubjectRepresentation), Z_Construct_UScriptStruct_FLiveLinkSubjectRepresentation, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ModifyFaceCurves_Statics::NewProp_SubjectRepresentation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ModifyFaceCurves_Statics::NewProp_SubjectRepresentation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ModifyFaceCurves_Statics::NewProp_Alpha_MetaData[] = {
		{ "Category", "ModifyCurve" },
		{ "ModuleRelativePath", "Public/AnimNode_ModifyFaceCurves.h" },
		{ "PinShownByDefault", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_ModifyFaceCurves_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_ModifyFaceCurves, Alpha), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ModifyFaceCurves_Statics::NewProp_Alpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ModifyFaceCurves_Statics::NewProp_Alpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ModifyFaceCurves_Statics::NewProp_CurveNames_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNode_ModifyFaceCurves.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_ModifyFaceCurves_Statics::NewProp_CurveNames = { "CurveNames", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_ModifyFaceCurves, CurveNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ModifyFaceCurves_Statics::NewProp_CurveNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ModifyFaceCurves_Statics::NewProp_CurveNames_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNode_ModifyFaceCurves_Statics::NewProp_CurveNames_Inner = { "CurveNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ModifyFaceCurves_Statics::NewProp_CurveValues_MetaData[] = {
		{ "Category", "ModifyCurve" },
		{ "ModuleRelativePath", "Public/AnimNode_ModifyFaceCurves.h" },
		{ "PinShownByDefault", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_ModifyFaceCurves_Statics::NewProp_CurveValues = { "CurveValues", nullptr, (EPropertyFlags)0x0010000000000045, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_ModifyFaceCurves, CurveValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ModifyFaceCurves_Statics::NewProp_CurveValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ModifyFaceCurves_Statics::NewProp_CurveValues_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_ModifyFaceCurves_Statics::NewProp_CurveValues_Inner = { "CurveValues", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ModifyFaceCurves_Statics::NewProp_SourcePose_MetaData[] = {
		{ "Category", "Links" },
		{ "ModuleRelativePath", "Public/AnimNode_ModifyFaceCurves.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_ModifyFaceCurves_Statics::NewProp_SourcePose = { "SourcePose", nullptr, (EPropertyFlags)0x0010000000000045, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_ModifyFaceCurves, SourcePose), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ModifyFaceCurves_Statics::NewProp_SourcePose_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ModifyFaceCurves_Statics::NewProp_SourcePose_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_ModifyFaceCurves_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ModifyFaceCurves_Statics::NewProp_ApplyMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ModifyFaceCurves_Statics::NewProp_ApplyMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ModifyFaceCurves_Statics::NewProp_MorphTargetRemapAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ModifyFaceCurves_Statics::NewProp_SubjectRepresentation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ModifyFaceCurves_Statics::NewProp_Alpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ModifyFaceCurves_Statics::NewProp_CurveNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ModifyFaceCurves_Statics::NewProp_CurveNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ModifyFaceCurves_Statics::NewProp_CurveValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ModifyFaceCurves_Statics::NewProp_CurveValues_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ModifyFaceCurves_Statics::NewProp_SourcePose,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_ModifyFaceCurves_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Smartsuit,
		Z_Construct_UScriptStruct_FAnimNode_Base,
		&NewStructOps,
		"AnimNode_ModifyFaceCurves",
		sizeof(FAnimNode_ModifyFaceCurves),
		alignof(FAnimNode_ModifyFaceCurves),
		Z_Construct_UScriptStruct_FAnimNode_ModifyFaceCurves_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ModifyFaceCurves_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ModifyFaceCurves_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ModifyFaceCurves_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_ModifyFaceCurves()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_ModifyFaceCurves_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Smartsuit();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_ModifyFaceCurves"), sizeof(FAnimNode_ModifyFaceCurves), Get_Z_Construct_UScriptStruct_FAnimNode_ModifyFaceCurves_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimNode_ModifyFaceCurves_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_ModifyFaceCurves_Hash() { return 806720541U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
