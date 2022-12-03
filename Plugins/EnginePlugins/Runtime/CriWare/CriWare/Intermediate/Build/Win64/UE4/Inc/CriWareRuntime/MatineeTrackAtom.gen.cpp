// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/MatineeTrackAtom.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMatineeTrackAtom() {}
// Cross Module References
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UMatineeTrackAtom_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UMatineeTrackAtom();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UMatineeTrackAtomSoundBase();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomTrackKeyframe();
// End Cross Module References
	void UMatineeTrackAtom::StaticRegisterNativesUMatineeTrackAtom()
	{
	}
	UClass* Z_Construct_UClass_UMatineeTrackAtom_NoRegister()
	{
		return UMatineeTrackAtom::StaticClass();
	}
	UClass* Z_Construct_UClass_UMatineeTrackAtom()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UMatineeTrackAtomSoundBase,
				(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "HideCategories", "Object" },
				{ "IncludePath", "MatineeTrackAtom.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/MatineeTrackAtom.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyframeList_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "MatineeTrackAtom" },
				{ "ModuleRelativePath", "Public/MatineeTrackAtom.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_KeyframeList = { UE4CodeGen_Private::EPropertyClass::Array, "KeyframeList", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000045, 1, nullptr, STRUCT_OFFSET(UMatineeTrackAtom, KeyframeList), METADATA_PARAMS(NewProp_KeyframeList_MetaData, ARRAY_COUNT(NewProp_KeyframeList_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_KeyframeList_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "KeyframeList", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FAtomTrackKeyframe, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectorList_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "MatineeTrackAtom" },
				{ "ModuleRelativePath", "Public/MatineeTrackAtom.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SelectorList = { UE4CodeGen_Private::EPropertyClass::Array, "SelectorList", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMatineeTrackAtom, SelectorList), METADATA_PARAMS(NewProp_SelectorList_MetaData, ARRAY_COUNT(NewProp_SelectorList_MetaData)) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_SelectorList_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "SelectorList", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AisacList_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "MatineeTrackAtom" },
				{ "ModuleRelativePath", "Public/MatineeTrackAtom.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AisacList = { UE4CodeGen_Private::EPropertyClass::Array, "AisacList", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMatineeTrackAtom, AisacList), METADATA_PARAMS(NewProp_AisacList_MetaData, ARRAY_COUNT(NewProp_AisacList_MetaData)) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_AisacList_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "AisacList", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_KeyframeList,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_KeyframeList_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SelectorList,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SelectorList_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AisacList,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AisacList_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMatineeTrackAtom>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMatineeTrackAtom::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00082080u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMatineeTrackAtom, 3326822960);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMatineeTrackAtom(Z_Construct_UClass_UMatineeTrackAtom, &UMatineeTrackAtom::StaticClass, TEXT("/Script/CriWareRuntime"), TEXT("UMatineeTrackAtom"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMatineeTrackAtom);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif