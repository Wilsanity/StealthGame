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
#ifdef FPSGAME_FPSExtractionZone_generated_h
#error "FPSExtractionZone.generated.h already included, missing '#pragma once' in FPSExtractionZone.h"
#endif
#define FPSGAME_FPSExtractionZone_generated_h

#define StealthGame_Source_FPSGame_Public_FPSExtractionZone_h_14_SPARSE_DATA
#define StealthGame_Source_FPSGame_Public_FPSExtractionZone_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleOverlap);


#define StealthGame_Source_FPSGame_Public_FPSExtractionZone_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleOverlap);


#define StealthGame_Source_FPSGame_Public_FPSExtractionZone_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPSExtractionZone(); \
	friend struct Z_Construct_UClass_AFPSExtractionZone_Statics; \
public: \
	DECLARE_CLASS(AFPSExtractionZone, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSGame"), NO_API) \
	DECLARE_SERIALIZER(AFPSExtractionZone)


#define StealthGame_Source_FPSGame_Public_FPSExtractionZone_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAFPSExtractionZone(); \
	friend struct Z_Construct_UClass_AFPSExtractionZone_Statics; \
public: \
	DECLARE_CLASS(AFPSExtractionZone, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSGame"), NO_API) \
	DECLARE_SERIALIZER(AFPSExtractionZone)


#define StealthGame_Source_FPSGame_Public_FPSExtractionZone_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFPSExtractionZone(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPSExtractionZone) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSExtractionZone); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSExtractionZone); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSExtractionZone(AFPSExtractionZone&&); \
	NO_API AFPSExtractionZone(const AFPSExtractionZone&); \
public:


#define StealthGame_Source_FPSGame_Public_FPSExtractionZone_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSExtractionZone(AFPSExtractionZone&&); \
	NO_API AFPSExtractionZone(const AFPSExtractionZone&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSExtractionZone); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSExtractionZone); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFPSExtractionZone)


#define StealthGame_Source_FPSGame_Public_FPSExtractionZone_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__OverlapComp() { return STRUCT_OFFSET(AFPSExtractionZone, OverlapComp); } \
	FORCEINLINE static uint32 __PPO__DecalComp() { return STRUCT_OFFSET(AFPSExtractionZone, DecalComp); }


#define StealthGame_Source_FPSGame_Public_FPSExtractionZone_h_11_PROLOG
#define StealthGame_Source_FPSGame_Public_FPSExtractionZone_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StealthGame_Source_FPSGame_Public_FPSExtractionZone_h_14_PRIVATE_PROPERTY_OFFSET \
	StealthGame_Source_FPSGame_Public_FPSExtractionZone_h_14_SPARSE_DATA \
	StealthGame_Source_FPSGame_Public_FPSExtractionZone_h_14_RPC_WRAPPERS \
	StealthGame_Source_FPSGame_Public_FPSExtractionZone_h_14_INCLASS \
	StealthGame_Source_FPSGame_Public_FPSExtractionZone_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define StealthGame_Source_FPSGame_Public_FPSExtractionZone_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StealthGame_Source_FPSGame_Public_FPSExtractionZone_h_14_PRIVATE_PROPERTY_OFFSET \
	StealthGame_Source_FPSGame_Public_FPSExtractionZone_h_14_SPARSE_DATA \
	StealthGame_Source_FPSGame_Public_FPSExtractionZone_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	StealthGame_Source_FPSGame_Public_FPSExtractionZone_h_14_INCLASS_NO_PURE_DECLS \
	StealthGame_Source_FPSGame_Public_FPSExtractionZone_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPSGAME_API UClass* StaticClass<class AFPSExtractionZone>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID StealthGame_Source_FPSGame_Public_FPSExtractionZone_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
