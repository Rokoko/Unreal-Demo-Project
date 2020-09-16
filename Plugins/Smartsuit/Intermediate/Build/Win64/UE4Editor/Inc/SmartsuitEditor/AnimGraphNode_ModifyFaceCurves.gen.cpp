// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SmartsuitEditor/Public/AnimGraphNode_ModifyFaceCurves.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimGraphNode_ModifyFaceCurves() {}
// Cross Module References
	SMARTSUITEDITOR_API UClass* Z_Construct_UClass_UAnimGraphNode_ModifyFaceCurves_NoRegister();
	SMARTSUITEDITOR_API UClass* Z_Construct_UClass_UAnimGraphNode_ModifyFaceCurves();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_Base();
	UPackage* Z_Construct_UPackage__Script_SmartsuitEditor();
	SMARTSUIT_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_ModifyFaceCurves();
// End Cross Module References
	void UAnimGraphNode_ModifyFaceCurves::StaticRegisterNativesUAnimGraphNode_ModifyFaceCurves()
	{
	}
	UClass* Z_Construct_UClass_UAnimGraphNode_ModifyFaceCurves_NoRegister()
	{
		return UAnimGraphNode_ModifyFaceCurves::StaticClass();
	}
	struct Z_Construct_UClass_UAnimGraphNode_ModifyFaceCurves_Statics
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
	UObject* (*const Z_Construct_UClass_UAnimGraphNode_ModifyFaceCurves_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_SmartsuitEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_ModifyFaceCurves_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Easy way to modify curve values on a pose */" },
		{ "IncludePath", "AnimGraphNode_ModifyFaceCurves.h" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_ModifyFaceCurves.h" },
		{ "ToolTip", "Easy way to modify curve values on a pose" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_ModifyFaceCurves_Statics::NewProp_Node_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_ModifyFaceCurves.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimGraphNode_ModifyFaceCurves_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimGraphNode_ModifyFaceCurves, Node), Z_Construct_UScriptStruct_FAnimNode_ModifyFaceCurves, METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_ModifyFaceCurves_Statics::NewProp_Node_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_ModifyFaceCurves_Statics::NewProp_Node_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimGraphNode_ModifyFaceCurves_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_ModifyFaceCurves_Statics::NewProp_Node,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimGraphNode_ModifyFaceCurves_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimGraphNode_ModifyFaceCurves>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimGraphNode_ModifyFaceCurves_Statics::ClassParams = {
		&UAnimGraphNode_ModifyFaceCurves::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimGraphNode_ModifyFaceCurves_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_ModifyFaceCurves_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_ModifyFaceCurves_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_ModifyFaceCurves_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimGraphNode_ModifyFaceCurves()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimGraphNode_ModifyFaceCurves_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimGraphNode_ModifyFaceCurves, 466834567);
	template<> SMARTSUITEDITOR_API UClass* StaticClass<UAnimGraphNode_ModifyFaceCurves>()
	{
		return UAnimGraphNode_ModifyFaceCurves::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimGraphNode_ModifyFaceCurves(Z_Construct_UClass_UAnimGraphNode_ModifyFaceCurves, &UAnimGraphNode_ModifyFaceCurves::StaticClass, TEXT("/Script/SmartsuitEditor"), TEXT("UAnimGraphNode_ModifyFaceCurves"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimGraphNode_ModifyFaceCurves);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
