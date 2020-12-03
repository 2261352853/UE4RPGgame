// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPGgame/RPGgameGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRPGgameGameModeBase() {}
// Cross Module References
	RPGGAME_API UClass* Z_Construct_UClass_ARPGgameGameModeBase_NoRegister();
	RPGGAME_API UClass* Z_Construct_UClass_ARPGgameGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_RPGgame();
// End Cross Module References
	void ARPGgameGameModeBase::StaticRegisterNativesARPGgameGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ARPGgameGameModeBase_NoRegister()
	{
		return ARPGgameGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ARPGgameGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARPGgameGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_RPGgame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARPGgameGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "RPGgameGameModeBase.h" },
		{ "ModuleRelativePath", "RPGgameGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARPGgameGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARPGgameGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARPGgameGameModeBase_Statics::ClassParams = {
		&ARPGgameGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ARPGgameGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARPGgameGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARPGgameGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARPGgameGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARPGgameGameModeBase, 1023435127);
	template<> RPGGAME_API UClass* StaticClass<ARPGgameGameModeBase>()
	{
		return ARPGgameGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARPGgameGameModeBase(Z_Construct_UClass_ARPGgameGameModeBase, &ARPGgameGameModeBase::StaticClass, TEXT("/Script/RPGgame"), TEXT("ARPGgameGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARPGgameGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
