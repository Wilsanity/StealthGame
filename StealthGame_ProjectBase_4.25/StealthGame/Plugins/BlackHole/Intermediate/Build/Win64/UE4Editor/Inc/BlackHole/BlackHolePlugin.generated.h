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
#ifdef BLACKHOLE_BlackHolePlugin_generated_h
#error "BlackHolePlugin.generated.h already included, missing '#pragma once' in BlackHolePlugin.h"
#endif
#define BLACKHOLE_BlackHolePlugin_generated_h

#define StealthGame_Plugins_BlackHole_Source_BlackHole_Public_BlackHolePlugin_h_15_SPARSE_DATA
#define StealthGame_Plugins_BlackHole_Source_BlackHole_Public_BlackHolePlugin_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOverlapInnerSphere);


#define StealthGame_Plugins_BlackHole_Source_BlackHole_Public_BlackHolePlugin_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOverlapInnerSphere);


#define StealthGame_Plugins_BlackHole_Source_BlackHole_Public_BlackHolePlugin_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABlackHolePlugin(); \
	friend struct Z_Construct_UClass_ABlackHolePlugin_Statics; \
public: \
	DECLARE_CLASS(ABlackHolePlugin, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BlackHole"), NO_API) \
	DECLARE_SERIALIZER(ABlackHolePlugin)


#define StealthGame_Plugins_BlackHole_Source_BlackHole_Public_BlackHolePlugin_h_15_INCLASS \
private: \
	static void StaticRegisterNativesABlackHolePlugin(); \
	friend struct Z_Construct_UClass_ABlackHolePlugin_Statics; \
public: \
	DECLARE_CLASS(ABlackHolePlugin, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BlackHole"), NO_API) \
	DECLARE_SERIALIZER(ABlackHolePlugin)


#define StealthGame_Plugins_BlackHole_Source_BlackHole_Public_BlackHolePlugin_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABlackHolePlugin(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABlackHolePlugin) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABlackHolePlugin); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABlackHolePlugin); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABlackHolePlugin(ABlackHolePlugin&&); \
	NO_API ABlackHolePlugin(const ABlackHolePlugin&); \
public:


#define StealthGame_Plugins_BlackHole_Source_BlackHole_Public_BlackHolePlugin_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABlackHolePlugin(ABlackHolePlugin&&); \
	NO_API ABlackHolePlugin(const ABlackHolePlugin&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABlackHolePlugin); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABlackHolePlugin); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABlackHolePlugin)


#define StealthGame_Plugins_BlackHole_Source_BlackHole_Public_BlackHolePlugin_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MeshComp() { return STRUCT_OFFSET(ABlackHolePlugin, MeshComp); } \
	FORCEINLINE static uint32 __PPO__InnerSphereComponent() { return STRUCT_OFFSET(ABlackHolePlugin, InnerSphereComponent); } \
	FORCEINLINE static uint32 __PPO__OuterSphereComponent() { return STRUCT_OFFSET(ABlackHolePlugin, OuterSphereComponent); }


#define StealthGame_Plugins_BlackHole_Source_BlackHole_Public_BlackHolePlugin_h_12_PROLOG
#define StealthGame_Plugins_BlackHole_Source_BlackHole_Public_BlackHolePlugin_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StealthGame_Plugins_BlackHole_Source_BlackHole_Public_BlackHolePlugin_h_15_PRIVATE_PROPERTY_OFFSET \
	StealthGame_Plugins_BlackHole_Source_BlackHole_Public_BlackHolePlugin_h_15_SPARSE_DATA \
	StealthGame_Plugins_BlackHole_Source_BlackHole_Public_BlackHolePlugin_h_15_RPC_WRAPPERS \
	StealthGame_Plugins_BlackHole_Source_BlackHole_Public_BlackHolePlugin_h_15_INCLASS \
	StealthGame_Plugins_BlackHole_Source_BlackHole_Public_BlackHolePlugin_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define StealthGame_Plugins_BlackHole_Source_BlackHole_Public_BlackHolePlugin_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StealthGame_Plugins_BlackHole_Source_BlackHole_Public_BlackHolePlugin_h_15_PRIVATE_PROPERTY_OFFSET \
	StealthGame_Plugins_BlackHole_Source_BlackHole_Public_BlackHolePlugin_h_15_SPARSE_DATA \
	StealthGame_Plugins_BlackHole_Source_BlackHole_Public_BlackHolePlugin_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	StealthGame_Plugins_BlackHole_Source_BlackHole_Public_BlackHolePlugin_h_15_INCLASS_NO_PURE_DECLS \
	StealthGame_Plugins_BlackHole_Source_BlackHole_Public_BlackHolePlugin_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLACKHOLE_API UClass* StaticClass<class ABlackHolePlugin>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID StealthGame_Plugins_BlackHole_Source_BlackHole_Public_BlackHolePlugin_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
