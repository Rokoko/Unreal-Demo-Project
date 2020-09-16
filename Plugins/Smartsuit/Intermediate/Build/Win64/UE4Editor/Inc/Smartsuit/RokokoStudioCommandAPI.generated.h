// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FRokokoCommandAPI_IPInfo;
#ifdef SMARTSUIT_RokokoStudioCommandAPI_generated_h
#error "RokokoStudioCommandAPI.generated.h already included, missing '#pragma once' in RokokoStudioCommandAPI.h"
#endif
#define SMARTSUIT_RokokoStudioCommandAPI_generated_h

#define Unreal_Demo_Project_Plugins_Smartsuit_Source_Smartsuit_Public_RokokoStudioCommandAPI_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRokokoCommandAPI_IPInfo_Statics; \
	SMARTSUIT_API static class UScriptStruct* StaticStruct();


template<> SMARTSUIT_API UScriptStruct* StaticStruct<struct FRokokoCommandAPI_IPInfo>();

#define Unreal_Demo_Project_Plugins_Smartsuit_Source_Smartsuit_Public_RokokoStudioCommandAPI_h_25_DELEGATE \
struct _Script_Smartsuit_eventOnCompletedRequest_Parms \
{ \
	int32 ResponseCode; \
	FString ResponseContentString; \
	bool bSucceeded; \
}; \
static inline void FOnCompletedRequest_DelegateWrapper(const FMulticastScriptDelegate& OnCompletedRequest, int32 ResponseCode, const FString& ResponseContentString, bool bSucceeded) \
{ \
	_Script_Smartsuit_eventOnCompletedRequest_Parms Parms; \
	Parms.ResponseCode=ResponseCode; \
	Parms.ResponseContentString=ResponseContentString; \
	Parms.bSucceeded=bSucceeded ? true : false; \
	OnCompletedRequest.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Unreal_Demo_Project_Plugins_Smartsuit_Source_Smartsuit_Public_RokokoStudioCommandAPI_h_33_SPARSE_DATA
#define Unreal_Demo_Project_Plugins_Smartsuit_Source_Smartsuit_Public_RokokoStudioCommandAPI_h_33_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSaveConfigFile); \
	DECLARE_FUNCTION(execStopRecording); \
	DECLARE_FUNCTION(execStartRecording); \
	DECLARE_FUNCTION(execCalibrate); \
	DECLARE_FUNCTION(execRestart);


#define Unreal_Demo_Project_Plugins_Smartsuit_Source_Smartsuit_Public_RokokoStudioCommandAPI_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSaveConfigFile); \
	DECLARE_FUNCTION(execStopRecording); \
	DECLARE_FUNCTION(execStartRecording); \
	DECLARE_FUNCTION(execCalibrate); \
	DECLARE_FUNCTION(execRestart);


#define Unreal_Demo_Project_Plugins_Smartsuit_Source_Smartsuit_Public_RokokoStudioCommandAPI_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURokokoStudioCommandAPI(); \
	friend struct Z_Construct_UClass_URokokoStudioCommandAPI_Statics; \
public: \
	DECLARE_CLASS(URokokoStudioCommandAPI, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Smartsuit"), NO_API) \
	DECLARE_SERIALIZER(URokokoStudioCommandAPI) \
	static const TCHAR* StaticConfigName() {return TEXT("RokokoStudioCommandAPI");} \



#define Unreal_Demo_Project_Plugins_Smartsuit_Source_Smartsuit_Public_RokokoStudioCommandAPI_h_33_INCLASS \
private: \
	static void StaticRegisterNativesURokokoStudioCommandAPI(); \
	friend struct Z_Construct_UClass_URokokoStudioCommandAPI_Statics; \
public: \
	DECLARE_CLASS(URokokoStudioCommandAPI, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Smartsuit"), NO_API) \
	DECLARE_SERIALIZER(URokokoStudioCommandAPI) \
	static const TCHAR* StaticConfigName() {return TEXT("RokokoStudioCommandAPI");} \



#define Unreal_Demo_Project_Plugins_Smartsuit_Source_Smartsuit_Public_RokokoStudioCommandAPI_h_33_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URokokoStudioCommandAPI(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URokokoStudioCommandAPI) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URokokoStudioCommandAPI); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URokokoStudioCommandAPI); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URokokoStudioCommandAPI(URokokoStudioCommandAPI&&); \
	NO_API URokokoStudioCommandAPI(const URokokoStudioCommandAPI&); \
public:


#define Unreal_Demo_Project_Plugins_Smartsuit_Source_Smartsuit_Public_RokokoStudioCommandAPI_h_33_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URokokoStudioCommandAPI(URokokoStudioCommandAPI&&); \
	NO_API URokokoStudioCommandAPI(const URokokoStudioCommandAPI&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URokokoStudioCommandAPI); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URokokoStudioCommandAPI); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URokokoStudioCommandAPI)


#define Unreal_Demo_Project_Plugins_Smartsuit_Source_Smartsuit_Public_RokokoStudioCommandAPI_h_33_PRIVATE_PROPERTY_OFFSET
#define Unreal_Demo_Project_Plugins_Smartsuit_Source_Smartsuit_Public_RokokoStudioCommandAPI_h_30_PROLOG
#define Unreal_Demo_Project_Plugins_Smartsuit_Source_Smartsuit_Public_RokokoStudioCommandAPI_h_33_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Unreal_Demo_Project_Plugins_Smartsuit_Source_Smartsuit_Public_RokokoStudioCommandAPI_h_33_PRIVATE_PROPERTY_OFFSET \
	Unreal_Demo_Project_Plugins_Smartsuit_Source_Smartsuit_Public_RokokoStudioCommandAPI_h_33_SPARSE_DATA \
	Unreal_Demo_Project_Plugins_Smartsuit_Source_Smartsuit_Public_RokokoStudioCommandAPI_h_33_RPC_WRAPPERS \
	Unreal_Demo_Project_Plugins_Smartsuit_Source_Smartsuit_Public_RokokoStudioCommandAPI_h_33_INCLASS \
	Unreal_Demo_Project_Plugins_Smartsuit_Source_Smartsuit_Public_RokokoStudioCommandAPI_h_33_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Unreal_Demo_Project_Plugins_Smartsuit_Source_Smartsuit_Public_RokokoStudioCommandAPI_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Unreal_Demo_Project_Plugins_Smartsuit_Source_Smartsuit_Public_RokokoStudioCommandAPI_h_33_PRIVATE_PROPERTY_OFFSET \
	Unreal_Demo_Project_Plugins_Smartsuit_Source_Smartsuit_Public_RokokoStudioCommandAPI_h_33_SPARSE_DATA \
	Unreal_Demo_Project_Plugins_Smartsuit_Source_Smartsuit_Public_RokokoStudioCommandAPI_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	Unreal_Demo_Project_Plugins_Smartsuit_Source_Smartsuit_Public_RokokoStudioCommandAPI_h_33_INCLASS_NO_PURE_DECLS \
	Unreal_Demo_Project_Plugins_Smartsuit_Source_Smartsuit_Public_RokokoStudioCommandAPI_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SMARTSUIT_API UClass* StaticClass<class URokokoStudioCommandAPI>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Unreal_Demo_Project_Plugins_Smartsuit_Source_Smartsuit_Public_RokokoStudioCommandAPI_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
