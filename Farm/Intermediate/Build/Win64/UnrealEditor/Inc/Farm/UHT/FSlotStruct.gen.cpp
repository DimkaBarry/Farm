// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Farm/Public/FSlotStruct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFSlotStruct() {}
// Cross Module References
	FARM_API UScriptStruct* Z_Construct_UScriptStruct_FSlotStruct();
	UPackage* Z_Construct_UPackage__Script_Farm();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SlotStruct;
class UScriptStruct* FSlotStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SlotStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SlotStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSlotStruct, (UObject*)Z_Construct_UPackage__Script_Farm(), TEXT("SlotStruct"));
	}
	return Z_Registration_Info_UScriptStruct_SlotStruct.OuterSingleton;
}
template<> FARM_API UScriptStruct* StaticStruct<FSlotStruct>()
{
	return FSlotStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSlotStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemID_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ItemID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Quantity_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Quantity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlotStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FSlotStruct.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSlotStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSlotStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlotStruct_Statics::NewProp_ItemID_MetaData[] = {
		{ "Category", "SlotStruct" },
		{ "ModuleRelativePath", "Public/FSlotStruct.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSlotStruct_Statics::NewProp_ItemID = { "ItemID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSlotStruct, ItemID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlotStruct_Statics::NewProp_ItemID_MetaData), Z_Construct_UScriptStruct_FSlotStruct_Statics::NewProp_ItemID_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlotStruct_Statics::NewProp_Quantity_MetaData[] = {
		{ "Category", "SlotStruct" },
		{ "ModuleRelativePath", "Public/FSlotStruct.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSlotStruct_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSlotStruct, Quantity), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlotStruct_Statics::NewProp_Quantity_MetaData), Z_Construct_UScriptStruct_FSlotStruct_Statics::NewProp_Quantity_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSlotStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlotStruct_Statics::NewProp_ItemID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlotStruct_Statics::NewProp_Quantity,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSlotStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Farm,
		nullptr,
		&NewStructOps,
		"SlotStruct",
		Z_Construct_UScriptStruct_FSlotStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlotStruct_Statics::PropPointers),
		sizeof(FSlotStruct),
		alignof(FSlotStruct),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlotStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSlotStruct_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlotStruct_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSlotStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_SlotStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SlotStruct.InnerSingleton, Z_Construct_UScriptStruct_FSlotStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SlotStruct.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Farm_Source_Farm_Public_FSlotStruct_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Farm_Source_Farm_Public_FSlotStruct_h_Statics::ScriptStructInfo[] = {
		{ FSlotStruct::StaticStruct, Z_Construct_UScriptStruct_FSlotStruct_Statics::NewStructOps, TEXT("SlotStruct"), &Z_Registration_Info_UScriptStruct_SlotStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSlotStruct), 2170588033U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Farm_Source_Farm_Public_FSlotStruct_h_1494832839(TEXT("/Script/Farm"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Farm_Source_Farm_Public_FSlotStruct_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Farm_Source_Farm_Public_FSlotStruct_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
