// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SmartsuitEditor/Public/SmartsuitPose.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSmartsuitPose() {}
// Cross Module References
	SMARTSUITEDITOR_API UClass* Z_Construct_UClass_USmartsuitPose_NoRegister();
	SMARTSUITEDITOR_API UClass* Z_Construct_UClass_USmartsuitPose();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_SkeletalControlBase();
	UPackage* Z_Construct_UPackage__Script_SmartsuitEditor();
	SMARTSUIT_API UScriptStruct* Z_Construct_UScriptStruct_FSmartsuitPoseNode();
// End Cross Module References
	void USmartsuitPose::StaticRegisterNativesUSmartsuitPose()
	{
	}
	UClass* Z_Construct_UClass_USmartsuitPose_NoRegister()
	{
		return USmartsuitPose::StaticClass();
	}
	struct Z_Construct_UClass_USmartsuitPose_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Node;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USmartsuitPose_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_SkeletalControlBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SmartsuitEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartsuitPose_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/// @cond no_doc\n" },
		{ "IncludePath", "SmartsuitPose.h" },
		{ "Keywords", "Smartsuit Pose" },
		{ "ModuleRelativePath", "Public/SmartsuitPose.h" },
		{ "ToolTip", "@cond no_doc" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartsuitPose_Statics::NewProp_Node_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/SmartsuitPose.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USmartsuitPose_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USmartsuitPose, Node), Z_Construct_UScriptStruct_FSmartsuitPoseNode, METADATA_PARAMS(Z_Construct_UClass_USmartsuitPose_Statics::NewProp_Node_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmartsuitPose_Statics::NewProp_Node_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USmartsuitPose_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartsuitPose_Statics::NewProp_Node,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USmartsuitPose_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USmartsuitPose>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USmartsuitPose_Statics::ClassParams = {
		&USmartsuitPose::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USmartsuitPose_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USmartsuitPose_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USmartsuitPose_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USmartsuitPose_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USmartsuitPose()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USmartsuitPose_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USmartsuitPose, 1761234604);
	template<> SMARTSUITEDITOR_API UClass* StaticClass<USmartsuitPose>()
	{
		return USmartsuitPose::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USmartsuitPose(Z_Construct_UClass_USmartsuitPose, &USmartsuitPose::StaticClass, TEXT("/Script/SmartsuitEditor"), TEXT("USmartsuitPose"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USmartsuitPose);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
