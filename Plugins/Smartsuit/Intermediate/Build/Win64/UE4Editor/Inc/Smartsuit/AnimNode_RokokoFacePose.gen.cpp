// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Smartsuit/Public/AnimNode_RokokoFacePose.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_RokokoFacePose() {}
// Cross Module References
	SMARTSUIT_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_RokokoFacePose();
	UPackage* Z_Construct_UPackage__Script_Smartsuit();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
	LIVELINK_API UClass* Z_Construct_UClass_ULiveLinkRetargetAsset_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
// End Cross Module References
class UScriptStruct* FAnimNode_RokokoFacePose::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SMARTSUIT_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_RokokoFacePose_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_RokokoFacePose, Z_Construct_UPackage__Script_Smartsuit(), TEXT("AnimNode_RokokoFacePose"), sizeof(FAnimNode_RokokoFacePose), Get_Z_Construct_UScriptStruct_FAnimNode_RokokoFacePose_Hash());
	}
	return Singleton;
}
template<> SMARTSUIT_API UScriptStruct* StaticStruct<FAnimNode_RokokoFacePose>()
{
	return FAnimNode_RokokoFacePose::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_RokokoFacePose(FAnimNode_RokokoFacePose::StaticStruct, TEXT("/Script/Smartsuit"), TEXT("AnimNode_RokokoFacePose"), false, nullptr, nullptr);
static struct FScriptStruct_Smartsuit_StaticRegisterNativesFAnimNode_RokokoFacePose
{
	FScriptStruct_Smartsuit_StaticRegisterNativesFAnimNode_RokokoFacePose()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_RokokoFacePose")),new UScriptStruct::TCppStructOps<FAnimNode_RokokoFacePose>);
	}
} ScriptStruct_Smartsuit_StaticRegisterNativesFAnimNode_RokokoFacePose;
	struct Z_Construct_UScriptStruct_FAnimNode_RokokoFacePose_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentRetargetAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentRetargetAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RetargetAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_RetargetAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RokokoActorName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_RokokoActorName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputPose_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InputPose;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RokokoFacePose_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AnimNode_RokokoFacePose.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_RokokoFacePose_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_RokokoFacePose>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RokokoFacePose_Statics::NewProp_CurrentRetargetAsset_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNode_RokokoFacePose.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimNode_RokokoFacePose_Statics::NewProp_CurrentRetargetAsset = { "CurrentRetargetAsset", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_RokokoFacePose, CurrentRetargetAsset), Z_Construct_UClass_ULiveLinkRetargetAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RokokoFacePose_Statics::NewProp_CurrentRetargetAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RokokoFacePose_Statics::NewProp_CurrentRetargetAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RokokoFacePose_Statics::NewProp_RetargetAsset_MetaData[] = {
		{ "Category", "Retarget" },
		{ "Comment", "//#if WITH_EDITORONLY_DATA\n//\x09UE_DEPRECATED(4.23, \"FName SubjectName is deprecated. Use the SubjectName of type FLiveLinkSubjectName instead.\")\n//\x09UPROPERTY()\n//\x09""FName SubjectName_DEPRECATED;\n//#endif\n" },
		{ "ModuleRelativePath", "Public/AnimNode_RokokoFacePose.h" },
		{ "NeverAsPin", "" },
		{ "ToolTip", "#if WITH_EDITORONLY_DATA\n       UE_DEPRECATED(4.23, \"FName SubjectName is deprecated. Use the SubjectName of type FLiveLinkSubjectName instead.\")\n       UPROPERTY()\n       FName SubjectName_DEPRECATED;\n#endif" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FAnimNode_RokokoFacePose_Statics::NewProp_RetargetAsset = { "RetargetAsset", nullptr, (EPropertyFlags)0x0014000002000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_RokokoFacePose, RetargetAsset), Z_Construct_UClass_ULiveLinkRetargetAsset_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RokokoFacePose_Statics::NewProp_RetargetAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RokokoFacePose_Statics::NewProp_RetargetAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RokokoFacePose_Statics::NewProp_RokokoActorName_MetaData[] = {
		{ "Category", "SourceData" },
		{ "Comment", "//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SourceData, meta = (PinShownByDefault))\n//FLiveLinkSubjectName LiveLinkSubjectName;\n" },
		{ "ModuleRelativePath", "Public/AnimNode_RokokoFacePose.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SourceData, meta = (PinShownByDefault))\nFLiveLinkSubjectName LiveLinkSubjectName;" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNode_RokokoFacePose_Statics::NewProp_RokokoActorName = { "RokokoActorName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_RokokoFacePose, RokokoActorName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RokokoFacePose_Statics::NewProp_RokokoActorName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RokokoFacePose_Statics::NewProp_RokokoActorName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RokokoFacePose_Statics::NewProp_InputPose_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/AnimNode_RokokoFacePose.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_RokokoFacePose_Statics::NewProp_InputPose = { "InputPose", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_RokokoFacePose, InputPose), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RokokoFacePose_Statics::NewProp_InputPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RokokoFacePose_Statics::NewProp_InputPose_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_RokokoFacePose_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RokokoFacePose_Statics::NewProp_CurrentRetargetAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RokokoFacePose_Statics::NewProp_RetargetAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RokokoFacePose_Statics::NewProp_RokokoActorName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RokokoFacePose_Statics::NewProp_InputPose,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_RokokoFacePose_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Smartsuit,
		Z_Construct_UScriptStruct_FAnimNode_Base,
		&NewStructOps,
		"AnimNode_RokokoFacePose",
		sizeof(FAnimNode_RokokoFacePose),
		alignof(FAnimNode_RokokoFacePose),
		Z_Construct_UScriptStruct_FAnimNode_RokokoFacePose_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RokokoFacePose_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RokokoFacePose_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RokokoFacePose_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_RokokoFacePose()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_RokokoFacePose_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Smartsuit();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_RokokoFacePose"), sizeof(FAnimNode_RokokoFacePose), Get_Z_Construct_UScriptStruct_FAnimNode_RokokoFacePose_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimNode_RokokoFacePose_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_RokokoFacePose_Hash() { return 2014646347U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
