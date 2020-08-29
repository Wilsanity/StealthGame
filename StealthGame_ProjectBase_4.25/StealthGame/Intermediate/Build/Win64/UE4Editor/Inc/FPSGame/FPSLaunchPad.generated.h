// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef FPSGAME_FPSLaunchPad_generated_h
#error "FPSLaunchPad.generated.h already included, missing '#pragma once' in FPSLaunchPad.h"
#endif
#define FPSGAME_FPSLaunchPad_generated_h

#define StealthGame_Source_FPSGame_Public_FPSLaunchPad_h_16_SPARSE_DATA
#define StealthGame_Source_FPSGame_Public_FPSLaunchPad_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOverlapLaunchPad);


#define StealthGame_Source_FPSGame_Public_FPSLaunchPad_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOverlapLaunchPad);


#define StealthGame_Source_FPSGame_Public_FPSLaunchPad_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPSLaunchPad(); \
	friend struct Z_Construct_UClass_AFPSLaunchPad_Statics; \
public: \
	DECLARE_CLASS(AFPSLaunchPad, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSGame"), NO_API) \
	DECLARE_SERIALIZER(AFPSLaunchPad)


#define StealthGame_Source_FPSGame_Public_FPSLaunchPad_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAFPSLaunchPad(); \
	friend struct Z_Construct_UClass_AFPSLaunchPad_Statics; \
public: \
	DECLARE_CLASS(AFPSLaunchPad, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSGame"), NO_API) \
	DECLARE_SERIALIZER(AFPSLaunchPad)


#define StealthGame_Source_FPSGame_Public_FPSLaunchPad_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFPSLaunchPad(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPSLaunchPad) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSLaunchPad); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSLaunchPad); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSLaunchPad(AFPSLaunchPad&&); \
	NO_API AFPSLaunchPad(const AFPSLaunchPad&); \
public:


#define StealthGame_Source_FPSGame_Public_FPSLaunchPad_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSLaunchPad(AFPSLaunchPad&&); \
	NO_API AFPSLaunchPad(const AFPSLaunchPad&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSLaunchPad); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSLaunchPad); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFPSLaunchPad)


#define StealthGame_Source_FPSGame_Public_FPSLaunchPad_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MeshComp() { return STRUCT_OFFSET(AFPSLaunchPad, MeshComp); } \
	FORCEINLINE static uint32 __PPO__OverlapComp() { return STRUCT_OFFSET(AFPSLaunchPad, OverlapComp); } \
	FORCEINLINE static uint32 __PPO__LaunchStrength() { return STRUCT_OFFSET(AFPSLaunchPad, LaunchStrength); } \
	FORCEINLINE static uint32 __PPO__LaunchPitchAngle() { return STRUCT_OFFSET(AFPSLaunchPad, LaunchPitchAngle); } \
	FORCEINLINE static uint32 __PPO__ActivateLaunchPadEffect() { return STRUCT_OFFSET(AFPSLaunchPad, ActivateLaunchPadEffect); }


#define StealthGame_Source_FPSGame_Public_FPSLaunchPad_h_13_PROLOG
#define StealthGame_Source_FPSGame_Public_FPSLaunchPad_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StealthGame_Source_FPSGame_Public_FPSLaunchPad_h_16_PRIVATE_PROPERTY_OFFSET \
	StealthGame_Source_FPSGame_Public_FPSLaunchPad_h_16_SPARSE_DATA \
	StealthGame_Source_FPSGame_Public_FPSLaunchPad_h_16_RPC_WRAPPERS \
	StealthGame_Source_FPSGame_Public_FPSLaunchPad_h_16_INCLASS \
	StealthGame_Source_FPSGame_Public_FPSLaunchPad_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define StealthGame_Source_FPSGame_Public_FPSLaunchPad_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StealthGame_Source_FPSGame_Public_FPSLaunchPad_h_16_PRIVATE_PROPERTY_OFFSET \
	StealthGame_Source_FPSGame_Public_FPSLaunchPad_h_16_SPARSE_DATA \
	StealthGame_Source_FPSGame_Public_FPSLaunchPad_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	StealthGame_Source_FPSGame_Public_FPSLaunchPad_h_16_INCLASS_NO_PURE_DECLS \
	StealthGame_Source_FPSGame_Public_FPSLaunchPad_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPSGAME_API UClass* StaticClass<class AFPSLaunchPad>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID StealthGame_Source_FPSGame_Public_FPSLaunchPad_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
