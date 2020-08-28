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
#ifdef FPSGAME_LaunchPad_generated_h
#error "LaunchPad.generated.h already included, missing '#pragma once' in LaunchPad.h"
#endif
#define FPSGAME_LaunchPad_generated_h

#define StealthGame_Source_FPSGame_Public_LaunchPad_h_16_SPARSE_DATA
#define StealthGame_Source_FPSGame_Public_LaunchPad_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOverlapLaunchPad);


#define StealthGame_Source_FPSGame_Public_LaunchPad_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOverlapLaunchPad);


#define StealthGame_Source_FPSGame_Public_LaunchPad_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALaunchPad(); \
	friend struct Z_Construct_UClass_ALaunchPad_Statics; \
public: \
	DECLARE_CLASS(ALaunchPad, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSGame"), NO_API) \
	DECLARE_SERIALIZER(ALaunchPad)


#define StealthGame_Source_FPSGame_Public_LaunchPad_h_16_INCLASS \
private: \
	static void StaticRegisterNativesALaunchPad(); \
	friend struct Z_Construct_UClass_ALaunchPad_Statics; \
public: \
	DECLARE_CLASS(ALaunchPad, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSGame"), NO_API) \
	DECLARE_SERIALIZER(ALaunchPad)


#define StealthGame_Source_FPSGame_Public_LaunchPad_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALaunchPad(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALaunchPad) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALaunchPad); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALaunchPad); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALaunchPad(ALaunchPad&&); \
	NO_API ALaunchPad(const ALaunchPad&); \
public:


#define StealthGame_Source_FPSGame_Public_LaunchPad_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALaunchPad(ALaunchPad&&); \
	NO_API ALaunchPad(const ALaunchPad&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALaunchPad); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALaunchPad); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALaunchPad)


#define StealthGame_Source_FPSGame_Public_LaunchPad_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MeshComp() { return STRUCT_OFFSET(ALaunchPad, MeshComp); } \
	FORCEINLINE static uint32 __PPO__OverlapComp() { return STRUCT_OFFSET(ALaunchPad, OverlapComp); } \
	FORCEINLINE static uint32 __PPO__LaunchStrength() { return STRUCT_OFFSET(ALaunchPad, LaunchStrength); } \
	FORCEINLINE static uint32 __PPO__LaunchPitchAngle() { return STRUCT_OFFSET(ALaunchPad, LaunchPitchAngle); } \
	FORCEINLINE static uint32 __PPO__ActivateLaunchPadEffect() { return STRUCT_OFFSET(ALaunchPad, ActivateLaunchPadEffect); }


#define StealthGame_Source_FPSGame_Public_LaunchPad_h_13_PROLOG
#define StealthGame_Source_FPSGame_Public_LaunchPad_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StealthGame_Source_FPSGame_Public_LaunchPad_h_16_PRIVATE_PROPERTY_OFFSET \
	StealthGame_Source_FPSGame_Public_LaunchPad_h_16_SPARSE_DATA \
	StealthGame_Source_FPSGame_Public_LaunchPad_h_16_RPC_WRAPPERS \
	StealthGame_Source_FPSGame_Public_LaunchPad_h_16_INCLASS \
	StealthGame_Source_FPSGame_Public_LaunchPad_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define StealthGame_Source_FPSGame_Public_LaunchPad_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StealthGame_Source_FPSGame_Public_LaunchPad_h_16_PRIVATE_PROPERTY_OFFSET \
	StealthGame_Source_FPSGame_Public_LaunchPad_h_16_SPARSE_DATA \
	StealthGame_Source_FPSGame_Public_LaunchPad_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	StealthGame_Source_FPSGame_Public_LaunchPad_h_16_INCLASS_NO_PURE_DECLS \
	StealthGame_Source_FPSGame_Public_LaunchPad_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPSGAME_API UClass* StaticClass<class ALaunchPad>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID StealthGame_Source_FPSGame_Public_LaunchPad_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
