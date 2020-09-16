// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FBodyModel;
#ifdef SMARTSUIT_SmartsuitController_generated_h
#error "SmartsuitController.generated.h already included, missing '#pragma once' in SmartsuitController.h"
#endif
#define SMARTSUIT_SmartsuitController_generated_h

#define Unreal_Demo_Project_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitController_h_22_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBodyModel_Statics; \
	SMARTSUIT_API static class UScriptStruct* StaticStruct();


template<> SMARTSUIT_API UScriptStruct* StaticStruct<struct FBodyModel>();

#define Unreal_Demo_Project_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitController_h_135_SPARSE_DATA
#define Unreal_Demo_Project_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitController_h_135_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDoTests); \
	DECLARE_FUNCTION(execGetBodyModel); \
	DECLARE_FUNCTION(execSetBodyModel); \
	DECLARE_FUNCTION(execUnicast); \
	DECLARE_FUNCTION(execBroadcast); \
	DECLARE_FUNCTION(execCalibrate); \
	DECLARE_FUNCTION(execRestart);


#define Unreal_Demo_Project_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitController_h_135_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDoTests); \
	DECLARE_FUNCTION(execGetBodyModel); \
	DECLARE_FUNCTION(execSetBodyModel); \
	DECLARE_FUNCTION(execUnicast); \
	DECLARE_FUNCTION(execBroadcast); \
	DECLARE_FUNCTION(execCalibrate); \
	DECLARE_FUNCTION(execRestart);


#define Unreal_Demo_Project_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitController_h_135_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASmartsuitController(); \
	friend struct Z_Construct_UClass_ASmartsuitController_Statics; \
public: \
	DECLARE_CLASS(ASmartsuitController, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Smartsuit"), NO_API) \
	DECLARE_SERIALIZER(ASmartsuitController)


#define Unreal_Demo_Project_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitController_h_135_INCLASS \
private: \
	static void StaticRegisterNativesASmartsuitController(); \
	friend struct Z_Construct_UClass_ASmartsuitController_Statics; \
public: \
	DECLARE_CLASS(ASmartsuitController, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Smartsuit"), NO_API) \
	DECLARE_SERIALIZER(ASmartsuitController)


#define Unreal_Demo_Project_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitController_h_135_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASmartsuitController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASmartsuitController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASmartsuitController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASmartsuitController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASmartsuitController(ASmartsuitController&&); \
	NO_API ASmartsuitController(const ASmartsuitController&); \
public:


#define Unreal_Demo_Project_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitController_h_135_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASmartsuitController(ASmartsuitController&&); \
	NO_API ASmartsuitController(const ASmartsuitController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASmartsuitController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASmartsuitController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASmartsuitController)


#define Unreal_Demo_Project_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitController_h_135_PRIVATE_PROPERTY_OFFSET
#define Unreal_Demo_Project_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitController_h_132_PROLOG
#define Unreal_Demo_Project_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitController_h_135_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Unreal_Demo_Project_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitController_h_135_PRIVATE_PROPERTY_OFFSET \
	Unreal_Demo_Project_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitController_h_135_SPARSE_DATA \
	Unreal_Demo_Project_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitController_h_135_RPC_WRAPPERS \
	Unreal_Demo_Project_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitController_h_135_INCLASS \
	Unreal_Demo_Project_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitController_h_135_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Unreal_Demo_Project_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitController_h_135_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Unreal_Demo_Project_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitController_h_135_PRIVATE_PROPERTY_OFFSET \
	Unreal_Demo_Project_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitController_h_135_SPARSE_DATA \
	Unreal_Demo_Project_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitController_h_135_RPC_WRAPPERS_NO_PURE_DECLS \
	Unreal_Demo_Project_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitController_h_135_INCLASS_NO_PURE_DECLS \
	Unreal_Demo_Project_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitController_h_135_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SMARTSUIT_API UClass* StaticClass<class ASmartsuitController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Unreal_Demo_Project_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
