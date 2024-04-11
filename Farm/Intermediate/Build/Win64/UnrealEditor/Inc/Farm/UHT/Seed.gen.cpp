// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Farm/Public/Items/Seed.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSeed() {}
// Cross Module References
	FARM_API UClass* Z_Construct_UClass_AItem();
	FARM_API UClass* Z_Construct_UClass_ASeed();
	FARM_API UClass* Z_Construct_UClass_ASeed_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Farm();
// End Cross Module References
	void ASeed::StaticRegisterNativesASeed()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASeed);
	UClass* Z_Construct_UClass_ASeed_NoRegister()
	{
		return ASeed::StaticClass();
	}
	struct Z_Construct_UClass_ASeed_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASeed_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AItem,
		(UObject* (*)())Z_Construct_UPackage__Script_Farm,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASeed_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASeed_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Items/Seed.h" },
		{ "ModuleRelativePath", "Public/Items/Seed.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASeed_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASeed>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASeed_Statics::ClassParams = {
		&ASeed::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASeed_Statics::Class_MetaDataParams), Z_Construct_UClass_ASeed_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ASeed()
	{
		if (!Z_Registration_Info_UClass_ASeed.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASeed.OuterSingleton, Z_Construct_UClass_ASeed_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASeed.OuterSingleton;
	}
	template<> FARM_API UClass* StaticClass<ASeed>()
	{
		return ASeed::StaticClass();
	}
	ASeed::ASeed() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASeed);
	ASeed::~ASeed() {}
	struct Z_CompiledInDeferFile_FID_Farm_Source_Farm_Public_Items_Seed_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Farm_Source_Farm_Public_Items_Seed_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASeed, ASeed::StaticClass, TEXT("ASeed"), &Z_Registration_Info_UClass_ASeed, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASeed), 3901689191U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Farm_Source_Farm_Public_Items_Seed_h_491694858(TEXT("/Script/Farm"),
		Z_CompiledInDeferFile_FID_Farm_Source_Farm_Public_Items_Seed_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Farm_Source_Farm_Public_Items_Seed_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
