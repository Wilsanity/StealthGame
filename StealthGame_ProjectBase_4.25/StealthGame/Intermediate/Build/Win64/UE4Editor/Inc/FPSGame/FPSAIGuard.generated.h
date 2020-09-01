// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
struct FVector;
enum class EAIState : uint8;
#ifdef FPSGAME_FPSAIGuard_generated_h
#error "FPSAIGuard.generated.h already included, missing '#pragma once' in FPSAIGuard.h"
#endif
#define FPSGAME_FPSAIGuard_generated_h

#define StealthGame_Source_FPSGame_Public_FPSAIGuard_h_26_SPARSE_DATA
#define StealthGame_Source_FPSGame_Public_FPSAIGuard_h_26_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_GuardState); \
	DECLARE_FUNCTION(execResetOrientation); \
	DECLARE_FUNCTION(execOnNoiseHeard); \
	DECLARE_FUNCTION(execOnPawnSeen);


#define StealthGame_Source_FPSGame_Public_FPSAIGuard_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_GuardState); \
	DECLARE_FUNCTION(execResetOrientation); \
	DECLARE_FUNCTION(execOnNoiseHeard); \
	DECLARE_FUNCTION(execOnPawnSeen);


#define StealthGame_Source_FPSGame_Public_FPSAIGuard_h_26_EVENT_PARMS \
	struct FPSAIGuard_eventOnStateChanged_Parms \
	{ \
		EAIState NewState; \
	};


#define StealthGame_Source_FPSGame_Public_FPSAIGuard_h_26_CALLBACK_WRAPPERS
#define StealthGame_Source_FPSGame_Public_FPSAIGuard_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPSAIGuard(); \
	friend struct Z_Construct_UClass_AFPSAIGuard_Statics; \
public: \
	DECLARE_CLASS(AFPSAIGuard, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSGame"), NO_API) \
	DECLARE_SERIALIZER(AFPSAIGuard) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		GuardState=NETFIELD_REP_START, \
		NETFIELD_REP_END=GuardState	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define StealthGame_Source_FPSGame_Public_FPSAIGuard_h_26_INCLASS \
private: \
	static void StaticRegisterNativesAFPSAIGuard(); \
	friend struct Z_Construct_UClass_AFPSAIGuard_Statics; \
public: \
	DECLARE_CLASS(AFPSAIGuard, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSGame"), NO_API) \
	DECLARE_SERIALIZER(AFPSAIGuard) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		GuardState=NETFIELD_REP_START, \
		NETFIELD_REP_END=GuardState	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define StealthGame_Source_FPSGame_Public_FPSAIGuard_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFPSAIGuard(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPSAIGuard) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSAIGuard); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSAIGuard); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSAIGuard(AFPSAIGuard&&); \
	NO_API AFPSAIGuard(const AFPSAIGuard&); \
public:


#define StealthGame_Source_FPSGame_Public_FPSAIGuard_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSAIGuard(AFPSAIGuard&&); \
	NO_API AFPSAIGuard(const AFPSAIGuard&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSAIGuard); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSAIGuard); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFPSAIGuard)


#define StealthGame_Source_FPSGame_Public_FPSAIGuard_h_26_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PawnSensingComp() { return STRUCT_OFFSET(AFPSAIGuard, PawnSensingComp); } \
	FORCEINLINE static uint32 __PPO__GuardState() { return STRUCT_OFFSET(AFPSAIGuard, GuardState); } \
	FORCEINLINE static uint32 __PPO__bPatrol() { return STRUCT_OFFSET(AFPSAIGuard, bPatrol); } \
	FORCEINLINE static uint32 __PPO__FirstPatrolPoint() { return STRUCT_OFFSET(AFPSAIGuard, FirstPatrolPoint); } \
	FORCEINLINE static uint32 __PPO__SecondPatrolPoint() { return STRUCT_OFFSET(AFPSAIGuard, SecondPatrolPoint); }


#define StealthGame_Source_FPSGame_Public_FPSAIGuard_h_23_PROLOG \
	StealthGame_Source_FPSGame_Public_FPSAIGuard_h_26_EVENT_PARMS


#define StealthGame_Source_FPSGame_Public_FPSAIGuard_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StealthGame_Source_FPSGame_Public_FPSAIGuard_h_26_PRIVATE_PROPERTY_OFFSET \
	StealthGame_Source_FPSGame_Public_FPSAIGuard_h_26_SPARSE_DATA \
	StealthGame_Source_FPSGame_Public_FPSAIGuard_h_26_RPC_WRAPPERS \
	StealthGame_Source_FPSGame_Public_FPSAIGuard_h_26_CALLBACK_WRAPPERS \
	StealthGame_Source_FPSGame_Public_FPSAIGuard_h_26_INCLASS \
	StealthGame_Source_FPSGame_Public_FPSAIGuard_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define StealthGame_Source_FPSGame_Public_FPSAIGuard_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StealthGame_Source_FPSGame_Public_FPSAIGuard_h_26_PRIVATE_PROPERTY_OFFSET \
	StealthGame_Source_FPSGame_Public_FPSAIGuard_h_26_SPARSE_DATA \
	StealthGame_Source_FPSGame_Public_FPSAIGuard_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	StealthGame_Source_FPSGame_Public_FPSAIGuard_h_26_CALLBACK_WRAPPERS \
	StealthGame_Source_FPSGame_Public_FPSAIGuard_h_26_INCLASS_NO_PURE_DECLS \
	StealthGame_Source_FPSGame_Public_FPSAIGuard_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPSGAME_API UClass* StaticClass<class AFPSAIGuard>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID StealthGame_Source_FPSGame_Public_FPSAIGuard_h


#define FOREACH_ENUM_EAISTATE(op) \
	op(EAIState::Idle) \
	op(EAIState::Suspicious) \
	op(EAIState::Alerted) 

enum class EAIState : uint8;
template<> FPSGAME_API UEnum* StaticEnum<EAIState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
