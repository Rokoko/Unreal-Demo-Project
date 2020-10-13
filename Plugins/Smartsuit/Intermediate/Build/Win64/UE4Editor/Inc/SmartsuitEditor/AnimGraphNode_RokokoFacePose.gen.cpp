// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SmartsuitEditor/Public/AnimGraphNode_RokokoFacePose.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimGraphNode_RokokoFacePose() {}
// Cross Module References
	SMARTSUITEDITOR_API UClass* Z_Construct_UClass_UAnimGraphNode_RokokoFacePose_NoRegister();
	SMARTSUITEDITOR_API UClass* Z_Construct_UClass_UAnimGraphNode_RokokoFacePose();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_Base();
	UPackage* Z_Construct_UPackage__Script_SmartsuitEditor();
	SMARTSUIT_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_RokokoFacePose();
// End Cross Module References
	void UAnimGraphNode_RokokoFacePose::StaticRegisterNativesUAnimGraphNode_RokokoFacePose()
	{
	}
	UClass* Z_Construct_UClass_UAnimGraphNode_RokokoFacePose_NoRegister()
	{
		return UAnimGraphNode_RokokoFacePose::StaticClass();
	}
	struct Z_Construct_UClass_UAnimGraphNode_RokokoFacePose_Statics
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
	UObject* (*const Z_Construct_UClass_UAnimGraphNode_RokokoFacePose_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_SmartsuitEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_RokokoFacePose_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimGraphNode_RokokoFacePose.h" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_RokokoFacePose.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_RokokoFacePose_Statics::NewProp_Node_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_RokokoFacePose.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimGraphNode_RokokoFacePose_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimGraphNode_RokokoFacePose, Node), Z_Construct_UScriptStruct_FAnimNode_RokokoFacePose, METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_RokokoFacePose_Statics::NewProp_Node_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_RokokoFacePose_Statics::NewProp_Node_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimGraphNode_RokokoFacePose_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_RokokoFacePose_Statics::NewProp_Node,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimGraphNode_RokokoFacePose_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimGraphNode_RokokoFacePose>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimGraphNode_RokokoFacePose_Statics::ClassParams = {
		&UAnimGraphNode_RokokoFacePose::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimGraphNode_RokokoFacePose_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_RokokoFacePose_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_RokokoFacePose_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_RokokoFacePose_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimGraphNode_RokokoFacePose()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimGraphNode_RokokoFacePose_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimGraphNode_RokokoFacePose, 524427505);
	template<> SMARTSUITEDITOR_API UClass* StaticClass<UAnimGraphNode_RokokoFacePose>()
	{
		return UAnimGraphNode_RokokoFacePose::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimGraphNode_RokokoFacePose(Z_Construct_UClass_UAnimGraphNode_RokokoFacePose, &UAnimGraphNode_RokokoFacePose::StaticClass, TEXT("/Script/SmartsuitEditor"), TEXT("UAnimGraphNode_RokokoFacePose"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimGraphNode_RokokoFacePose);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
