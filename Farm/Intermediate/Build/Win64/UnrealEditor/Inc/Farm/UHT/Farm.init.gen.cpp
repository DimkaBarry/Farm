// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFarm_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Farm;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Farm()
	{
		if (!Z_Registration_Info_UPackage__Script_Farm.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Farm",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x1A17BB7A,
				0x425B7324,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Farm.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Farm.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Farm(Z_Construct_UPackage__Script_Farm, TEXT("/Script/Farm"), Z_Registration_Info_UPackage__Script_Farm, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x1A17BB7A, 0x425B7324));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
