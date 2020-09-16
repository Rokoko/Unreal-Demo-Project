// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SMARTSUIT_AnimNode_ModifyFaceCurves_generated_h
#error "AnimNode_ModifyFaceCurves.generated.h already included, missing '#pragma once' in AnimNode_ModifyFaceCurves.h"
#endif
#define SMARTSUIT_AnimNode_ModifyFaceCurves_generated_h

#define Unreal_Demo_Project_Plugins_Smartsuit_Source_Smartsuit_Public_AnimNode_ModifyFaceCurves_h_34_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimNode_ModifyFaceCurves_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FAnimNode_Base Super;


template<> SMARTSUIT_API UScriptStruct* StaticStruct<struct FAnimNode_ModifyFaceCurves>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Unreal_Demo_Project_Plugins_Smartsuit_Source_Smartsuit_Public_AnimNode_ModifyFaceCurves_h


#define FOREACH_ENUM_EMODIFYFACECURVESAPPLYMODE(op) \
	op(EModifyFaceCurvesApplyMode::Add) \
	op(EModifyFaceCurvesApplyMode::Scale) \
	op(EModifyFaceCurvesApplyMode::Blend) \
	op(EModifyFaceCurvesApplyMode::WeightedMovingAverage) \
	op(EModifyFaceCurvesApplyMode::RemapCurve) 

enum class EModifyFaceCurvesApplyMode : uint8;
template<> SMARTSUIT_API UEnum* StaticEnum<EModifyFaceCurvesApplyMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
