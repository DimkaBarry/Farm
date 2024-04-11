// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Items/Seed.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FARM_Seed_generated_h
#error "Seed.generated.h already included, missing '#pragma once' in Seed.h"
#endif
#define FARM_Seed_generated_h

#define FID_Farm_Source_Farm_Public_Items_Seed_h_15_SPARSE_DATA
#define FID_Farm_Source_Farm_Public_Items_Seed_h_15_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Farm_Source_Farm_Public_Items_Seed_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Farm_Source_Farm_Public_Items_Seed_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Farm_Source_Farm_Public_Items_Seed_h_15_ACCESSORS
#define FID_Farm_Source_Farm_Public_Items_Seed_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASeed(); \
	friend struct Z_Construct_UClass_ASeed_Statics; \
public: \
	DECLARE_CLASS(ASeed, AItem, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Farm"), NO_API) \
	DECLARE_SERIALIZER(ASeed)


#define FID_Farm_Source_Farm_Public_Items_Seed_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASeed(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASeed(ASeed&&); \
	NO_API ASeed(const ASeed&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASeed); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASeed); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASeed) \
	NO_API virtual ~ASeed();


#define FID_Farm_Source_Farm_Public_Items_Seed_h_12_PROLOG
#define FID_Farm_Source_Farm_Public_Items_Seed_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Farm_Source_Farm_Public_Items_Seed_h_15_SPARSE_DATA \
	FID_Farm_Source_Farm_Public_Items_Seed_h_15_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Farm_Source_Farm_Public_Items_Seed_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Farm_Source_Farm_Public_Items_Seed_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Farm_Source_Farm_Public_Items_Seed_h_15_ACCESSORS \
	FID_Farm_Source_Farm_Public_Items_Seed_h_15_INCLASS_NO_PURE_DECLS \
	FID_Farm_Source_Farm_Public_Items_Seed_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FARM_API UClass* StaticClass<class ASeed>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Farm_Source_Farm_Public_Items_Seed_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
