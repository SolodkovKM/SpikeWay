// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/BP_timeline.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBP_timeline() {}
// Cross Module References
	MYPROJECT_API UClass* Z_Construct_UClass_UBP_timeline_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_UBP_timeline();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_MyProject();
// End Cross Module References
	void UBP_timeline::StaticRegisterNativesUBP_timeline()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBP_timeline);
	UClass* Z_Construct_UClass_UBP_timeline_NoRegister()
	{
		return UBP_timeline::StaticClass();
	}
	struct Z_Construct_UClass_UBP_timeline_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBP_timeline_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBP_timeline_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "BP_timeline.h" },
		{ "ModuleRelativePath", "BP_timeline.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBP_timeline_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBP_timeline>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBP_timeline_Statics::ClassParams = {
		&UBP_timeline::StaticClass,
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
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBP_timeline_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBP_timeline_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBP_timeline()
	{
		if (!Z_Registration_Info_UClass_UBP_timeline.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBP_timeline.OuterSingleton, Z_Construct_UClass_UBP_timeline_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBP_timeline.OuterSingleton;
	}
	template<> MYPROJECT_API UClass* StaticClass<UBP_timeline>()
	{
		return UBP_timeline::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBP_timeline);
	struct Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_BP_timeline_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_BP_timeline_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBP_timeline, UBP_timeline::StaticClass, TEXT("UBP_timeline"), &Z_Registration_Info_UClass_UBP_timeline, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBP_timeline), 3765655759U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_BP_timeline_h_73585722(TEXT("/Script/MyProject"),
		Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_BP_timeline_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_BP_timeline_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
