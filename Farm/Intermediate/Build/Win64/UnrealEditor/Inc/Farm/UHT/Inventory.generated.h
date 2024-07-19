// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Inventory.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FARM_Inventory_generated_h
#error "Inventory.generated.h already included, missing '#pragma once' in Inventory.h"
#endif
#define FARM_Inventory_generated_h

#define FID_Farm_Source_Farm_Public_Inventory_h_12_SPARSE_DATA
#define FID_Farm_Source_Farm_Public_Inventory_h_12_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Farm_Source_Farm_Public_Inventory_h_12_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Farm_Source_Farm_Public_Inventory_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRemoveItemFromInventory); \
	DECLARE_FUNCTION(execAddItemToInventory);


#define FID_Farm_Source_Farm_Public_Inventory_h_12_ACCESSORS
#define FID_Farm_Source_Farm_Public_Inventory_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInventory(); \
	friend struct Z_Construct_UClass_UInventory_Statics; \
public: \
	DECLARE_CLASS(UInventory, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Farm"), NO_API) \
	DECLARE_SERIALIZER(UInventory)


#define FID_Farm_Source_Farm_Public_Inventory_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInventory(UInventory&&); \
	NO_API UInventory(const UInventory&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventory); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInventory) \
	NO_API virtual ~UInventory();


#define FID_Farm_Source_Farm_Public_Inventory_h_9_PROLOG
#define FID_Farm_Source_Farm_Public_Inventory_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Farm_Source_Farm_Public_Inventory_h_12_SPARSE_DATA \
	FID_Farm_Source_Farm_Public_Inventory_h_12_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Farm_Source_Farm_Public_Inventory_h_12_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Farm_Source_Farm_Public_Inventory_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Farm_Source_Farm_Public_Inventory_h_12_ACCESSORS \
	FID_Farm_Source_Farm_Public_Inventory_h_12_INCLASS_NO_PURE_DECLS \
	FID_Farm_Source_Farm_Public_Inventory_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FARM_API UClass* StaticClass<class UInventory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Farm_Source_Farm_Public_Inventory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
