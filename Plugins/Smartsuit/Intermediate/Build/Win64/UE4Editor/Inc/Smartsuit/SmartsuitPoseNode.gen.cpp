// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Smartsuit/Public/SmartsuitPoseNode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSmartsuitPoseNode() {}
// Cross Module References
	SMARTSUIT_API UScriptStruct* Z_Construct_UScriptStruct_FSmartsuitPoseNode();
	UPackage* Z_Construct_UPackage__Script_Smartsuit();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
	SMARTSUIT_API UClass* Z_Construct_UClass_USmartsuitBodyMapData_NoRegister();
	SMARTSUIT_API UScriptStruct* Z_Construct_UScriptStruct_FSmartsuitBodyMap();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
	SMARTSUIT_API UClass* Z_Construct_UClass_USmartsuitBodyMapData();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
// End Cross Module References
class UScriptStruct* FSmartsuitPoseNode::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SMARTSUIT_API uint32 Get_Z_Construct_UScriptStruct_FSmartsuitPoseNode_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSmartsuitPoseNode, Z_Construct_UPackage__Script_Smartsuit(), TEXT("SmartsuitPoseNode"), sizeof(FSmartsuitPoseNode), Get_Z_Construct_UScriptStruct_FSmartsuitPoseNode_Hash());
	}
	return Singleton;
}
template<> SMARTSUIT_API UScriptStruct* StaticStruct<FSmartsuitPoseNode>()
{
	return FSmartsuitPoseNode::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSmartsuitPoseNode(FSmartsuitPoseNode::StaticStruct, TEXT("/Script/Smartsuit"), TEXT("SmartsuitPoseNode"), false, nullptr, nullptr);
static struct FScriptStruct_Smartsuit_StaticRegisterNativesFSmartsuitPoseNode
{
	FScriptStruct_Smartsuit_StaticRegisterNativesFSmartsuitPoseNode()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SmartsuitPoseNode")),new UScriptStruct::TCppStructOps<FSmartsuitPoseNode>);
	}
} ScriptStruct_Smartsuit_StaticRegisterNativesFSmartsuitPoseNode;
	struct Z_Construct_UScriptStruct_FSmartsuitPoseNode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RokokoActorName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_RokokoActorName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneMapOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BoneMapOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoneMap;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitPoseNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/*! \\brief An animation controller which poses a humanoid character to the pose as received from the Smartsuit.\n*\n* This is the main animation blueprint node for Smartsuit. It takes as input a character in T-pose along with a mapping of the bones necessary to drive the animation.\n* Then it rotates the bones and translates the hip so the character behaves as the player in the Smartsuit.\n*/" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
		{ "ToolTip", "! \\brief An animation controller which poses a humanoid character to the pose as received from the Smartsuit.\n*\n* This is the main animation blueprint node for Smartsuit. It takes as input a character in T-pose along with a mapping of the bones necessary to drive the animation.\n* Then it rotates the bones and translates the hip so the character behaves as the player in the Smartsuit." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSmartsuitPoseNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSmartsuitPoseNode>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitPoseNode_Statics::NewProp_RokokoActorName_MetaData[] = {
		{ "Category", "SourceData" },
		{ "Comment", "//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SourceData, meta = (PinShownByDefault))\n//FLiveLinkSubjectName LiveLinkSubjectName;\n" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SourceData, meta = (PinShownByDefault))\nFLiveLinkSubjectName LiveLinkSubjectName;" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSmartsuitPoseNode_Statics::NewProp_RokokoActorName = { "RokokoActorName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSmartsuitPoseNode, RokokoActorName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitPoseNode_Statics::NewProp_RokokoActorName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitPoseNode_Statics::NewProp_RokokoActorName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitPoseNode_Statics::NewProp_BoneMapOverride_MetaData[] = {
		{ "Category", "SmartsuitAnimationSetup" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSmartsuitPoseNode_Statics::NewProp_BoneMapOverride = { "BoneMapOverride", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSmartsuitPoseNode, BoneMapOverride), Z_Construct_UClass_USmartsuitBodyMapData_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitPoseNode_Statics::NewProp_BoneMapOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitPoseNode_Statics::NewProp_BoneMapOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitPoseNode_Statics::NewProp_BoneMap_MetaData[] = {
		{ "Category", "SmartsuitAnimationSetup" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
		{ "ToolTip", "A mapping between the Smartsuit expected bone names and the bones that will animate from the Smartsuit component. Every bone is required for the animation to work properly." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitPoseNode_Statics::NewProp_BoneMap = { "BoneMap", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSmartsuitPoseNode, BoneMap), Z_Construct_UScriptStruct_FSmartsuitBodyMap, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitPoseNode_Statics::NewProp_BoneMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitPoseNode_Statics::NewProp_BoneMap_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSmartsuitPoseNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitPoseNode_Statics::NewProp_RokokoActorName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitPoseNode_Statics::NewProp_BoneMapOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitPoseNode_Statics::NewProp_BoneMap,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSmartsuitPoseNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Smartsuit,
		Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
		&NewStructOps,
		"SmartsuitPoseNode",
		sizeof(FSmartsuitPoseNode),
		alignof(FSmartsuitPoseNode),
		Z_Construct_UScriptStruct_FSmartsuitPoseNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitPoseNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitPoseNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitPoseNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSmartsuitPoseNode()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSmartsuitPoseNode_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Smartsuit();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SmartsuitPoseNode"), sizeof(FSmartsuitPoseNode), Get_Z_Construct_UScriptStruct_FSmartsuitPoseNode_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSmartsuitPoseNode_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSmartsuitPoseNode_Hash() { return 832459608U; }
class UScriptStruct* FSmartsuitBodyMap::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SMARTSUIT_API uint32 Get_Z_Construct_UScriptStruct_FSmartsuitBodyMap_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSmartsuitBodyMap, Z_Construct_UPackage__Script_Smartsuit(), TEXT("SmartsuitBodyMap"), sizeof(FSmartsuitBodyMap), Get_Z_Construct_UScriptStruct_FSmartsuitBodyMap_Hash());
	}
	return Singleton;
}
template<> SMARTSUIT_API UScriptStruct* StaticStruct<FSmartsuitBodyMap>()
{
	return FSmartsuitBodyMap::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSmartsuitBodyMap(FSmartsuitBodyMap::StaticStruct, TEXT("/Script/Smartsuit"), TEXT("SmartsuitBodyMap"), false, nullptr, nullptr);
static struct FScriptStruct_Smartsuit_StaticRegisterNativesFSmartsuitBodyMap
{
	FScriptStruct_Smartsuit_StaticRegisterNativesFSmartsuitBodyMap()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SmartsuitBodyMap")),new UScriptStruct::TCppStructOps<FSmartsuitBodyMap>);
	}
} ScriptStruct_Smartsuit_StaticRegisterNativesFSmartsuitBodyMap;
	struct Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rightLittleTip_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_rightLittleTip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rightLittleDistal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_rightLittleDistal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rightLittleMedial_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_rightLittleMedial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rightLittleProximal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_rightLittleProximal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rightRingTip_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_rightRingTip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rightRingDistal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_rightRingDistal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rightRingMedial_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_rightRingMedial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rightRingProximal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_rightRingProximal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rightMiddleTip_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_rightMiddleTip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rightMiddleDistal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_rightMiddleDistal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rightMiddleMedial_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_rightMiddleMedial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rightMiddleProximal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_rightMiddleProximal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rightIndexTip_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_rightIndexTip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rightIndexDistal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_rightIndexDistal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rightIndexMedial_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_rightIndexMedial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rightIndexProximal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_rightIndexProximal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rightThumbTip_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_rightThumbTip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rightThumbDistal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_rightThumbDistal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rightThumbMedial_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_rightThumbMedial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rightThumbProximal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_rightThumbProximal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_leftLittleTip_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_leftLittleTip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_leftLittleDistal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_leftLittleDistal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_leftLittleMedial_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_leftLittleMedial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_leftLittleProximal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_leftLittleProximal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_leftRingTip_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_leftRingTip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_leftRingDistal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_leftRingDistal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_leftRingMedial_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_leftRingMedial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_leftRingProximal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_leftRingProximal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_leftMiddleTip_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_leftMiddleTip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_leftMiddleDistal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_leftMiddleDistal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_leftMiddleMedial_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_leftMiddleMedial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_leftMiddleProximal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_leftMiddleProximal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_leftIndexTip_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_leftIndexTip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_leftIndexDistal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_leftIndexDistal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_leftIndexMedial_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_leftIndexMedial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_leftIndexProximal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_leftIndexProximal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_leftThumbTip_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_leftThumbTip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_leftThumbDistal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_leftThumbDistal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_leftThumbMedial_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_leftThumbMedial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_leftThumbProximal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_leftThumbProximal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rightFoot_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_rightFoot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rightLeg_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_rightLeg;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rightUpleg_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_rightUpleg;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_leftFoot_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_leftFoot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_leftLeg_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_leftLeg;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_leftUpleg_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_leftUpleg;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rightHand_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_rightHand;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rightForearm_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_rightForearm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rightArm_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_rightArm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rightShoulder_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_rightShoulder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_leftHand_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_leftHand;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_leftForearm_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_leftForearm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_leftArm_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_leftArm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_leftShoulder_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_leftShoulder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_head_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_head;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_neck_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_neck;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_chest_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_chest;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_stomach_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_stomach;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hip_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_hip;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*! \\brief Bone reference mapping that is used to map bones between Smartsuit sensors and skeleton.*/" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
		{ "ToolTip", "! \\brief Bone reference mapping that is used to map bones between Smartsuit sensors and skeleton." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSmartsuitBodyMap>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightLittleTip_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightLittleTip = { "rightLittleTip", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSmartsuitBodyMap, rightLittleTip), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightLittleTip_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightLittleTip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightLittleDistal_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightLittleDistal = { "rightLittleDistal", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSmartsuitBodyMap, rightLittleDistal), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightLittleDistal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightLittleDistal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightLittleMedial_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightLittleMedial = { "rightLittleMedial", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSmartsuitBodyMap, rightLittleMedial), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightLittleMedial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightLittleMedial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightLittleProximal_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightLittleProximal = { "rightLittleProximal", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSmartsuitBodyMap, rightLittleProximal), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightLittleProximal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightLittleProximal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightRingTip_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightRingTip = { "rightRingTip", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSmartsuitBodyMap, rightRingTip), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightRingTip_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightRingTip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightRingDistal_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightRingDistal = { "rightRingDistal", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSmartsuitBodyMap, rightRingDistal), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightRingDistal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightRingDistal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightRingMedial_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightRingMedial = { "rightRingMedial", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSmartsuitBodyMap, rightRingMedial), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightRingMedial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightRingMedial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightRingProximal_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightRingProximal = { "rightRingProximal", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSmartsuitBodyMap, rightRingProximal), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightRingProximal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightRingProximal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightMiddleTip_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightMiddleTip = { "rightMiddleTip", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSmartsuitBodyMap, rightMiddleTip), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightMiddleTip_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightMiddleTip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightMiddleDistal_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightMiddleDistal = { "rightMiddleDistal", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSmartsuitBodyMap, rightMiddleDistal), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightMiddleDistal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightMiddleDistal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightMiddleMedial_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightMiddleMedial = { "rightMiddleMedial", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSmartsuitBodyMap, rightMiddleMedial), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightMiddleMedial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightMiddleMedial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightMiddleProximal_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightMiddleProximal = { "rightMiddleProximal", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSmartsuitBodyMap, rightMiddleProximal), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightMiddleProximal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightMiddleProximal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightIndexTip_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightIndexTip = { "rightIndexTip", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSmartsuitBodyMap, rightIndexTip), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightIndexTip_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightIndexTip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightIndexDistal_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightIndexDistal = { "rightIndexDistal", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSmartsuitBodyMap, rightIndexDistal), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightIndexDistal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightIndexDistal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightIndexMedial_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightIndexMedial = { "rightIndexMedial", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSmartsuitBodyMap, rightIndexMedial), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightIndexMedial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightIndexMedial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightIndexProximal_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightIndexProximal = { "rightIndexProximal", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSmartsuitBodyMap, rightIndexProximal), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightIndexProximal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightIndexProximal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightThumbTip_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightThumbTip = { "rightThumbTip", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSmartsuitBodyMap, rightThumbTip), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightThumbTip_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightThumbTip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightThumbDistal_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightThumbDistal = { "rightThumbDistal", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSmartsuitBodyMap, rightThumbDistal), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightThumbDistal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightThumbDistal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightThumbMedial_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightThumbMedial = { "rightThumbMedial", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSmartsuitBodyMap, rightThumbMedial), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightThumbMedial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightThumbMedial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightThumbProximal_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightThumbProximal = { "rightThumbProximal", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSmartsuitBodyMap, rightThumbProximal), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightThumbProximal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightThumbProximal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftLittleTip_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftLittleTip = { "leftLittleTip", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSmartsuitBodyMap, leftLittleTip), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftLittleTip_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftLittleTip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftLittleDistal_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftLittleDistal = { "leftLittleDistal", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSmartsuitBodyMap, leftLittleDistal), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftLittleDistal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftLittleDistal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftLittleMedial_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftLittleMedial = { "leftLittleMedial", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSmartsuitBodyMap, leftLittleMedial), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftLittleMedial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftLittleMedial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftLittleProximal_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftLittleProximal = { "leftLittleProximal", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSmartsuitBodyMap, leftLittleProximal), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftLittleProximal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftLittleProximal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftRingTip_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftRingTip = { "leftRingTip", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSmartsuitBodyMap, leftRingTip), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftRingTip_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftRingTip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftRingDistal_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftRingDistal = { "leftRingDistal", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSmartsuitBodyMap, leftRingDistal), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftRingDistal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftRingDistal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftRingMedial_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftRingMedial = { "leftRingMedial", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSmartsuitBodyMap, leftRingMedial), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftRingMedial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftRingMedial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftRingProximal_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftRingProximal = { "leftRingProximal", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSmartsuitBodyMap, leftRingProximal), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftRingProximal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftRingProximal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftMiddleTip_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftMiddleTip = { "leftMiddleTip", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSmartsuitBodyMap, leftMiddleTip), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftMiddleTip_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftMiddleTip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftMiddleDistal_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftMiddleDistal = { "leftMiddleDistal", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSmartsuitBodyMap, leftMiddleDistal), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftMiddleDistal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftMiddleDistal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftMiddleMedial_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftMiddleMedial = { "leftMiddleMedial", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSmartsuitBodyMap, leftMiddleMedial), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftMiddleMedial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftMiddleMedial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftMiddleProximal_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftMiddleProximal = { "leftMiddleProximal", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSmartsuitBodyMap, leftMiddleProximal), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftMiddleProximal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftMiddleProximal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftIndexTip_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftIndexTip = { "leftIndexTip", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSmartsuitBodyMap, leftIndexTip), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftIndexTip_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftIndexTip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftIndexDistal_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftIndexDistal = { "leftIndexDistal", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSmartsuitBodyMap, leftIndexDistal), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftIndexDistal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftIndexDistal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftIndexMedial_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftIndexMedial = { "leftIndexMedial", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSmartsuitBodyMap, leftIndexMedial), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftIndexMedial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftIndexMedial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftIndexProximal_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftIndexProximal = { "leftIndexProximal", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSmartsuitBodyMap, leftIndexProximal), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftIndexProximal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftIndexProximal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftThumbTip_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftThumbTip = { "leftThumbTip", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSmartsuitBodyMap, leftThumbTip), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftThumbTip_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftThumbTip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftThumbDistal_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftThumbDistal = { "leftThumbDistal", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSmartsuitBodyMap, leftThumbDistal), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftThumbDistal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftThumbDistal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftThumbMedial_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftThumbMedial = { "leftThumbMedial", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSmartsuitBodyMap, leftThumbMedial), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftThumbMedial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftThumbMedial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftThumbProximal_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "Comment", "/**Right toe bone reference.*///UPROPERTY(EditAnywhere, Category = SkeletalControl, meta = (ToolTip = \"The right toe bone to control.\"))\n//\x09""FBoneReference rightToe;\n" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
		{ "ToolTip", "Right toe bone reference.//UPROPERTY(EditAnywhere, Category = SkeletalControl, meta = (ToolTip = \"The right toe bone to control.\"))\n//     FBoneReference rightToe;" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftThumbProximal = { "leftThumbProximal", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSmartsuitBodyMap, leftThumbProximal), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftThumbProximal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftThumbProximal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightFoot_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
		{ "ToolTip", "The right foot bone to control." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightFoot = { "rightFoot", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSmartsuitBodyMap, rightFoot), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightFoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightFoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightLeg_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
		{ "ToolTip", "The right lower leg bone to control." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightLeg = { "rightLeg", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSmartsuitBodyMap, rightLeg), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightLeg_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightLeg_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightUpleg_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
		{ "ToolTip", "The right upper leg bone to control." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightUpleg = { "rightUpleg", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSmartsuitBodyMap, rightUpleg), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightUpleg_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightUpleg_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftFoot_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
		{ "ToolTip", "The left foot bone to control." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftFoot = { "leftFoot", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSmartsuitBodyMap, leftFoot), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftFoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftFoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftLeg_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
		{ "ToolTip", "The left lower leg bone to control." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftLeg = { "leftLeg", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSmartsuitBodyMap, leftLeg), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftLeg_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftLeg_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftUpleg_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
		{ "ToolTip", "The left upper leg bone to control." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftUpleg = { "leftUpleg", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSmartsuitBodyMap, leftUpleg), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftUpleg_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftUpleg_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightHand_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
		{ "ToolTip", "The right hand bone to control." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightHand = { "rightHand", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSmartsuitBodyMap, rightHand), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightHand_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightForearm_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
		{ "ToolTip", "The right lower arm bone to control." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightForearm = { "rightForearm", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSmartsuitBodyMap, rightForearm), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightForearm_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightForearm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightArm_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
		{ "ToolTip", "The right upper arm bone to control." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightArm = { "rightArm", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSmartsuitBodyMap, rightArm), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightArm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightShoulder_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
		{ "ToolTip", "The right shoulder bone to control." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightShoulder = { "rightShoulder", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSmartsuitBodyMap, rightShoulder), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightShoulder_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightShoulder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftHand_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
		{ "ToolTip", "The left hand bone to control." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftHand = { "leftHand", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSmartsuitBodyMap, leftHand), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftHand_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftForearm_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
		{ "ToolTip", "The left lower arm bone to control." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftForearm = { "leftForearm", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSmartsuitBodyMap, leftForearm), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftForearm_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftForearm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftArm_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
		{ "ToolTip", "The left upper arm bone to control." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftArm = { "leftArm", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSmartsuitBodyMap, leftArm), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftArm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftShoulder_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
		{ "ToolTip", "The left shoulder bone to control." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftShoulder = { "leftShoulder", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSmartsuitBodyMap, leftShoulder), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftShoulder_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftShoulder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_head_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
		{ "ToolTip", "The head bone to control." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_head = { "head", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSmartsuitBodyMap, head), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_head_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_head_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_neck_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
		{ "ToolTip", "The neck bone to control." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_neck = { "neck", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSmartsuitBodyMap, neck), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_neck_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_neck_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_chest_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
		{ "ToolTip", "The chest bone to control." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_chest = { "chest", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSmartsuitBodyMap, chest), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_chest_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_chest_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_stomach_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
		{ "ToolTip", "The stomach bone to control." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_stomach = { "stomach", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSmartsuitBodyMap, stomach), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_stomach_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_stomach_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_hip_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
		{ "ToolTip", "The hip bone to control." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_hip = { "hip", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSmartsuitBodyMap, hip), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_hip_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_hip_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightLittleTip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightLittleDistal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightLittleMedial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightLittleProximal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightRingTip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightRingDistal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightRingMedial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightRingProximal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightMiddleTip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightMiddleDistal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightMiddleMedial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightMiddleProximal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightIndexTip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightIndexDistal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightIndexMedial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightIndexProximal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightThumbTip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightThumbDistal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightThumbMedial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightThumbProximal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftLittleTip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftLittleDistal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftLittleMedial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftLittleProximal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftRingTip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftRingDistal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftRingMedial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftRingProximal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftMiddleTip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftMiddleDistal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftMiddleMedial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftMiddleProximal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftIndexTip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftIndexDistal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftIndexMedial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftIndexProximal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftThumbTip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftThumbDistal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftThumbMedial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftThumbProximal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightFoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightLeg,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightUpleg,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftFoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftLeg,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftUpleg,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightForearm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightArm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightShoulder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftForearm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftArm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftShoulder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_head,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_neck,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_chest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_stomach,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_hip,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Smartsuit,
		nullptr,
		&NewStructOps,
		"SmartsuitBodyMap",
		sizeof(FSmartsuitBodyMap),
		alignof(FSmartsuitBodyMap),
		Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSmartsuitBodyMap()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSmartsuitBodyMap_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Smartsuit();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SmartsuitBodyMap"), sizeof(FSmartsuitBodyMap), Get_Z_Construct_UScriptStruct_FSmartsuitBodyMap_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSmartsuitBodyMap_Hash() { return 2275842215U; }
	void USmartsuitBodyMapData::StaticRegisterNativesUSmartsuitBodyMapData()
	{
	}
	UClass* Z_Construct_UClass_USmartsuitBodyMapData_NoRegister()
	{
		return USmartsuitBodyMapData::StaticClass();
	}
	struct Z_Construct_UClass_USmartsuitBodyMapData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rightLittleTip_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_rightLittleTip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rightLittleDistal_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_rightLittleDistal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rightLittleMedial_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_rightLittleMedial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rightLittleProximal_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_rightLittleProximal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rightRingTip_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_rightRingTip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rightRingDistal_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_rightRingDistal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rightRingMedial_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_rightRingMedial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rightRingProximal_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_rightRingProximal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rightMiddleTip_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_rightMiddleTip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rightMiddleDistal_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_rightMiddleDistal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rightMiddleMedial_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_rightMiddleMedial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rightMiddleProximal_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_rightMiddleProximal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rightIndexTip_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_rightIndexTip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rightIndexDistal_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_rightIndexDistal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rightIndexMedial_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_rightIndexMedial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rightIndexProximal_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_rightIndexProximal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rightThumbTip_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_rightThumbTip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rightThumbDistal_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_rightThumbDistal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rightThumbMedial_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_rightThumbMedial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rightThumbProximal_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_rightThumbProximal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_leftLittleTip_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_leftLittleTip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_leftLittleDistal_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_leftLittleDistal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_leftLittleMedial_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_leftLittleMedial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_leftLittleProximal_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_leftLittleProximal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_leftRingTip_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_leftRingTip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_leftRingDistal_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_leftRingDistal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_leftRingMedial_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_leftRingMedial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_leftRingProximal_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_leftRingProximal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_leftMiddleTip_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_leftMiddleTip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_leftMiddleDistal_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_leftMiddleDistal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_leftMiddleMedial_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_leftMiddleMedial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_leftMiddleProximal_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_leftMiddleProximal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_leftIndexTip_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_leftIndexTip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_leftIndexDistal_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_leftIndexDistal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_leftIndexMedial_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_leftIndexMedial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_leftIndexProximal_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_leftIndexProximal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_leftThumbTip_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_leftThumbTip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_leftThumbDistal_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_leftThumbDistal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_leftThumbMedial_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_leftThumbMedial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_leftThumbProximal_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_leftThumbProximal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rightFoot_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_rightFoot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rightLeg_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_rightLeg;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rightUpleg_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_rightUpleg;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_leftFoot_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_leftFoot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_leftLeg_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_leftLeg;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_leftUpleg_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_leftUpleg;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rightHand_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_rightHand;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rightForearm_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_rightForearm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rightArm_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_rightArm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rightShoulder_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_rightShoulder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_leftHand_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_leftHand;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_leftForearm_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_leftForearm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_leftArm_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_leftArm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_leftShoulder_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_leftShoulder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_head_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_head;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_neck_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_neck;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_chest_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_chest;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_stomach_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_stomach;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hip_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_hip;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USmartsuitBodyMapData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Smartsuit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartsuitBodyMapData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SmartsuitPoseNode.h" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightLittleTip_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightLittleTip = { "rightLittleTip", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USmartsuitBodyMapData, rightLittleTip), METADATA_PARAMS(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightLittleTip_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightLittleTip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightLittleDistal_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightLittleDistal = { "rightLittleDistal", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USmartsuitBodyMapData, rightLittleDistal), METADATA_PARAMS(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightLittleDistal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightLittleDistal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightLittleMedial_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightLittleMedial = { "rightLittleMedial", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USmartsuitBodyMapData, rightLittleMedial), METADATA_PARAMS(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightLittleMedial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightLittleMedial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightLittleProximal_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightLittleProximal = { "rightLittleProximal", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USmartsuitBodyMapData, rightLittleProximal), METADATA_PARAMS(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightLittleProximal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightLittleProximal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightRingTip_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightRingTip = { "rightRingTip", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USmartsuitBodyMapData, rightRingTip), METADATA_PARAMS(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightRingTip_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightRingTip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightRingDistal_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightRingDistal = { "rightRingDistal", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USmartsuitBodyMapData, rightRingDistal), METADATA_PARAMS(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightRingDistal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightRingDistal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightRingMedial_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightRingMedial = { "rightRingMedial", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USmartsuitBodyMapData, rightRingMedial), METADATA_PARAMS(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightRingMedial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightRingMedial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightRingProximal_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightRingProximal = { "rightRingProximal", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USmartsuitBodyMapData, rightRingProximal), METADATA_PARAMS(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightRingProximal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightRingProximal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightMiddleTip_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightMiddleTip = { "rightMiddleTip", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USmartsuitBodyMapData, rightMiddleTip), METADATA_PARAMS(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightMiddleTip_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightMiddleTip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightMiddleDistal_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightMiddleDistal = { "rightMiddleDistal", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USmartsuitBodyMapData, rightMiddleDistal), METADATA_PARAMS(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightMiddleDistal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightMiddleDistal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightMiddleMedial_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightMiddleMedial = { "rightMiddleMedial", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USmartsuitBodyMapData, rightMiddleMedial), METADATA_PARAMS(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightMiddleMedial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightMiddleMedial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightMiddleProximal_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightMiddleProximal = { "rightMiddleProximal", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USmartsuitBodyMapData, rightMiddleProximal), METADATA_PARAMS(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightMiddleProximal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightMiddleProximal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightIndexTip_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightIndexTip = { "rightIndexTip", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USmartsuitBodyMapData, rightIndexTip), METADATA_PARAMS(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightIndexTip_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightIndexTip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightIndexDistal_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightIndexDistal = { "rightIndexDistal", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USmartsuitBodyMapData, rightIndexDistal), METADATA_PARAMS(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightIndexDistal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightIndexDistal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightIndexMedial_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightIndexMedial = { "rightIndexMedial", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USmartsuitBodyMapData, rightIndexMedial), METADATA_PARAMS(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightIndexMedial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightIndexMedial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightIndexProximal_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightIndexProximal = { "rightIndexProximal", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USmartsuitBodyMapData, rightIndexProximal), METADATA_PARAMS(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightIndexProximal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightIndexProximal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightThumbTip_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightThumbTip = { "rightThumbTip", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USmartsuitBodyMapData, rightThumbTip), METADATA_PARAMS(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightThumbTip_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightThumbTip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightThumbDistal_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightThumbDistal = { "rightThumbDistal", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USmartsuitBodyMapData, rightThumbDistal), METADATA_PARAMS(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightThumbDistal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightThumbDistal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightThumbMedial_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightThumbMedial = { "rightThumbMedial", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USmartsuitBodyMapData, rightThumbMedial), METADATA_PARAMS(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightThumbMedial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightThumbMedial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightThumbProximal_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightThumbProximal = { "rightThumbProximal", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USmartsuitBodyMapData, rightThumbProximal), METADATA_PARAMS(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightThumbProximal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightThumbProximal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftLittleTip_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftLittleTip = { "leftLittleTip", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USmartsuitBodyMapData, leftLittleTip), METADATA_PARAMS(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftLittleTip_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftLittleTip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftLittleDistal_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftLittleDistal = { "leftLittleDistal", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USmartsuitBodyMapData, leftLittleDistal), METADATA_PARAMS(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftLittleDistal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftLittleDistal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftLittleMedial_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftLittleMedial = { "leftLittleMedial", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USmartsuitBodyMapData, leftLittleMedial), METADATA_PARAMS(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftLittleMedial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftLittleMedial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftLittleProximal_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftLittleProximal = { "leftLittleProximal", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USmartsuitBodyMapData, leftLittleProximal), METADATA_PARAMS(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftLittleProximal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftLittleProximal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftRingTip_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftRingTip = { "leftRingTip", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USmartsuitBodyMapData, leftRingTip), METADATA_PARAMS(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftRingTip_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftRingTip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftRingDistal_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftRingDistal = { "leftRingDistal", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USmartsuitBodyMapData, leftRingDistal), METADATA_PARAMS(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftRingDistal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftRingDistal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftRingMedial_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftRingMedial = { "leftRingMedial", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USmartsuitBodyMapData, leftRingMedial), METADATA_PARAMS(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftRingMedial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftRingMedial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftRingProximal_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftRingProximal = { "leftRingProximal", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USmartsuitBodyMapData, leftRingProximal), METADATA_PARAMS(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftRingProximal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftRingProximal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftMiddleTip_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftMiddleTip = { "leftMiddleTip", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USmartsuitBodyMapData, leftMiddleTip), METADATA_PARAMS(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftMiddleTip_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftMiddleTip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftMiddleDistal_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftMiddleDistal = { "leftMiddleDistal", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USmartsuitBodyMapData, leftMiddleDistal), METADATA_PARAMS(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftMiddleDistal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftMiddleDistal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftMiddleMedial_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftMiddleMedial = { "leftMiddleMedial", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USmartsuitBodyMapData, leftMiddleMedial), METADATA_PARAMS(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftMiddleMedial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftMiddleMedial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftMiddleProximal_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftMiddleProximal = { "leftMiddleProximal", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USmartsuitBodyMapData, leftMiddleProximal), METADATA_PARAMS(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftMiddleProximal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftMiddleProximal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftIndexTip_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftIndexTip = { "leftIndexTip", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USmartsuitBodyMapData, leftIndexTip), METADATA_PARAMS(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftIndexTip_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftIndexTip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftIndexDistal_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftIndexDistal = { "leftIndexDistal", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USmartsuitBodyMapData, leftIndexDistal), METADATA_PARAMS(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftIndexDistal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftIndexDistal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftIndexMedial_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftIndexMedial = { "leftIndexMedial", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USmartsuitBodyMapData, leftIndexMedial), METADATA_PARAMS(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftIndexMedial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftIndexMedial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftIndexProximal_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftIndexProximal = { "leftIndexProximal", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USmartsuitBodyMapData, leftIndexProximal), METADATA_PARAMS(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftIndexProximal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftIndexProximal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftThumbTip_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftThumbTip = { "leftThumbTip", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USmartsuitBodyMapData, leftThumbTip), METADATA_PARAMS(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftThumbTip_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftThumbTip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftThumbDistal_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftThumbDistal = { "leftThumbDistal", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USmartsuitBodyMapData, leftThumbDistal), METADATA_PARAMS(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftThumbDistal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftThumbDistal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftThumbMedial_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftThumbMedial = { "leftThumbMedial", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USmartsuitBodyMapData, leftThumbMedial), METADATA_PARAMS(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftThumbMedial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftThumbMedial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftThumbProximal_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "Comment", "//UPROPERTY(EditAnywhere, Category = SkeletalControl)\n//FName rightToe;\n" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
		{ "ToolTip", "UPROPERTY(EditAnywhere, Category = SkeletalControl)\nFName rightToe;" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftThumbProximal = { "leftThumbProximal", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USmartsuitBodyMapData, leftThumbProximal), METADATA_PARAMS(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftThumbProximal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftThumbProximal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightFoot_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightFoot = { "rightFoot", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USmartsuitBodyMapData, rightFoot), METADATA_PARAMS(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightFoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightFoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightLeg_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightLeg = { "rightLeg", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USmartsuitBodyMapData, rightLeg), METADATA_PARAMS(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightLeg_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightLeg_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightUpleg_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "Comment", "//UPROPERTY(EditAnywhere, Category = SkeletalControl)\n//FName leftToe;\n" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
		{ "ToolTip", "UPROPERTY(EditAnywhere, Category = SkeletalControl)\nFName leftToe;" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightUpleg = { "rightUpleg", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USmartsuitBodyMapData, rightUpleg), METADATA_PARAMS(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightUpleg_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightUpleg_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftFoot_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftFoot = { "leftFoot", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USmartsuitBodyMapData, leftFoot), METADATA_PARAMS(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftFoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftFoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftLeg_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftLeg = { "leftLeg", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USmartsuitBodyMapData, leftLeg), METADATA_PARAMS(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftLeg_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftLeg_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftUpleg_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "Comment", "//UPROPERTY(EditAnywhere, Category = SkeletalControl)\n//FName rightFingerTip;\n" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
		{ "ToolTip", "UPROPERTY(EditAnywhere, Category = SkeletalControl)\nFName rightFingerTip;" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftUpleg = { "leftUpleg", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USmartsuitBodyMapData, leftUpleg), METADATA_PARAMS(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftUpleg_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftUpleg_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightHand_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightHand = { "rightHand", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USmartsuitBodyMapData, rightHand), METADATA_PARAMS(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightHand_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightForearm_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightForearm = { "rightForearm", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USmartsuitBodyMapData, rightForearm), METADATA_PARAMS(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightForearm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightForearm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightArm_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightArm = { "rightArm", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USmartsuitBodyMapData, rightArm), METADATA_PARAMS(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightArm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightShoulder_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "Comment", "//UPROPERTY(EditAnywhere, Category = SkeletalControl)\n//FName leftFingerTip;\n" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
		{ "ToolTip", "UPROPERTY(EditAnywhere, Category = SkeletalControl)\nFName leftFingerTip;" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightShoulder = { "rightShoulder", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USmartsuitBodyMapData, rightShoulder), METADATA_PARAMS(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightShoulder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightShoulder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftHand_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftHand = { "leftHand", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USmartsuitBodyMapData, leftHand), METADATA_PARAMS(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftHand_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftForearm_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftForearm = { "leftForearm", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USmartsuitBodyMapData, leftForearm), METADATA_PARAMS(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftForearm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftForearm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftArm_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftArm = { "leftArm", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USmartsuitBodyMapData, leftArm), METADATA_PARAMS(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftArm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftShoulder_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "Comment", "//UPROPERTY(EditAnywhere, Category = SkeletalControl)\n//FName headTop;\n" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
		{ "ToolTip", "UPROPERTY(EditAnywhere, Category = SkeletalControl)\nFName headTop;" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftShoulder = { "leftShoulder", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USmartsuitBodyMapData, leftShoulder), METADATA_PARAMS(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftShoulder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftShoulder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_head_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_head = { "head", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USmartsuitBodyMapData, head), METADATA_PARAMS(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_head_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_head_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_neck_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_neck = { "neck", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USmartsuitBodyMapData, neck), METADATA_PARAMS(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_neck_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_neck_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_chest_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_chest = { "chest", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USmartsuitBodyMapData, chest), METADATA_PARAMS(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_chest_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_chest_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_stomach_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_stomach = { "stomach", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USmartsuitBodyMapData, stomach), METADATA_PARAMS(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_stomach_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_stomach_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_hip_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_hip = { "hip", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USmartsuitBodyMapData, hip), METADATA_PARAMS(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_hip_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_hip_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USmartsuitBodyMapData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightLittleTip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightLittleDistal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightLittleMedial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightLittleProximal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightRingTip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightRingDistal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightRingMedial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightRingProximal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightMiddleTip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightMiddleDistal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightMiddleMedial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightMiddleProximal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightIndexTip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightIndexDistal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightIndexMedial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightIndexProximal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightThumbTip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightThumbDistal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightThumbMedial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightThumbProximal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftLittleTip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftLittleDistal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftLittleMedial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftLittleProximal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftRingTip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftRingDistal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftRingMedial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftRingProximal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftMiddleTip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftMiddleDistal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftMiddleMedial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftMiddleProximal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftIndexTip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftIndexDistal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftIndexMedial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftIndexProximal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftThumbTip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftThumbDistal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftThumbMedial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftThumbProximal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightFoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightLeg,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightUpleg,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftFoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftLeg,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftUpleg,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightForearm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightArm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightShoulder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftForearm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftArm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftShoulder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_head,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_neck,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_chest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_stomach,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_hip,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USmartsuitBodyMapData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USmartsuitBodyMapData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USmartsuitBodyMapData_Statics::ClassParams = {
		&USmartsuitBodyMapData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USmartsuitBodyMapData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USmartsuitBodyMapData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USmartsuitBodyMapData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USmartsuitBodyMapData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USmartsuitBodyMapData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USmartsuitBodyMapData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USmartsuitBodyMapData, 24812900);
	template<> SMARTSUIT_API UClass* StaticClass<USmartsuitBodyMapData>()
	{
		return USmartsuitBodyMapData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USmartsuitBodyMapData(Z_Construct_UClass_USmartsuitBodyMapData, &USmartsuitBodyMapData::StaticClass, TEXT("/Script/Smartsuit"), TEXT("USmartsuitBodyMapData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USmartsuitBodyMapData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
