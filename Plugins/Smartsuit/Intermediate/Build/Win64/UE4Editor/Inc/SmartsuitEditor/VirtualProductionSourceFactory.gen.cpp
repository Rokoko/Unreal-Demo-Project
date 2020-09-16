// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SmartsuitEditor/Private/VirtualProductionSourceFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVirtualProductionSourceFactory() {}
// Cross Module References
	SMARTSUITEDITOR_API UClass* Z_Construct_UClass_UVirtualProductionSourceFactory_NoRegister();
	SMARTSUITEDITOR_API UClass* Z_Construct_UClass_UVirtualProductionSourceFactory();
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkSourceFactory();
	UPackage* Z_Construct_UPackage__Script_SmartsuitEditor();
// End Cross Module References
	void UVirtualProductionSourceFactory::StaticRegisterNativesUVirtualProductionSourceFactory()
	{
	}
	UClass* Z_Construct_UClass_UVirtualProductionSourceFactory_NoRegister()
	{
		return UVirtualProductionSourceFactory::StaticClass();
	}
	struct Z_Construct_UClass_UVirtualProductionSourceFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVirtualProductionSourceFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULiveLinkSourceFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_SmartsuitEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVirtualProductionSourceFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VirtualProductionSourceFactory.h" },
		{ "ModuleRelativePath", "Private/VirtualProductionSourceFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVirtualProductionSourceFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVirtualProductionSourceFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVirtualProductionSourceFactory_Statics::ClassParams = {
		&UVirtualProductionSourceFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVirtualProductionSourceFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualProductionSourceFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVirtualProductionSourceFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVirtualProductionSourceFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVirtualProductionSourceFactory, 3821777564);
	template<> SMARTSUITEDITOR_API UClass* StaticClass<UVirtualProductionSourceFactory>()
	{
		return UVirtualProductionSourceFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVirtualProductionSourceFactory(Z_Construct_UClass_UVirtualProductionSourceFactory, &UVirtualProductionSourceFactory::StaticClass, TEXT("/Script/SmartsuitEditor"), TEXT("UVirtualProductionSourceFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVirtualProductionSourceFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
