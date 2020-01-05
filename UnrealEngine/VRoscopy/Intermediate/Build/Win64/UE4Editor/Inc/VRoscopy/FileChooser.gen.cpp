// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRoscopy/FileChooser.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFileChooser() {}
// Cross Module References
	VROSCOPY_API UClass* Z_Construct_UClass_UFileChooser_NoRegister();
	VROSCOPY_API UClass* Z_Construct_UClass_UFileChooser();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_VRoscopy();
	VROSCOPY_API UFunction* Z_Construct_UFunction_UFileChooser_OpenFileDialog();
	VROSCOPY_API UFunction* Z_Construct_UFunction_UFileChooser_OpenFolderDialog();
	VROSCOPY_API UFunction* Z_Construct_UFunction_UFileChooser_PrintData();
// End Cross Module References
	void UFileChooser::StaticRegisterNativesUFileChooser()
	{
		UClass* Class = UFileChooser::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OpenFileDialog", &UFileChooser::execOpenFileDialog },
			{ "OpenFolderDialog", &UFileChooser::execOpenFolderDialog },
			{ "PrintData", &UFileChooser::execPrintData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFileChooser_OpenFileDialog_Statics
	{
		struct FileChooser_eventOpenFileDialog_Parms
		{
			FString DialogTitle;
			FString DefaultPath;
			FString FileTypes;
			TArray<FString> OutFileNames;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutFileNames;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OutFileNames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FileTypes_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FileTypes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DefaultPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DialogTitle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DialogTitle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFileChooser_OpenFileDialog_Statics::NewProp_OutFileNames = { "OutFileNames", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileChooser_eventOpenFileDialog_Parms, OutFileNames), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileChooser_OpenFileDialog_Statics::NewProp_OutFileNames_Inner = { "OutFileNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileChooser_OpenFileDialog_Statics::NewProp_FileTypes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileChooser_OpenFileDialog_Statics::NewProp_FileTypes = { "FileTypes", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileChooser_eventOpenFileDialog_Parms, FileTypes), METADATA_PARAMS(Z_Construct_UFunction_UFileChooser_OpenFileDialog_Statics::NewProp_FileTypes_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFileChooser_OpenFileDialog_Statics::NewProp_FileTypes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileChooser_OpenFileDialog_Statics::NewProp_DefaultPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileChooser_OpenFileDialog_Statics::NewProp_DefaultPath = { "DefaultPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileChooser_eventOpenFileDialog_Parms, DefaultPath), METADATA_PARAMS(Z_Construct_UFunction_UFileChooser_OpenFileDialog_Statics::NewProp_DefaultPath_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFileChooser_OpenFileDialog_Statics::NewProp_DefaultPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileChooser_OpenFileDialog_Statics::NewProp_DialogTitle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileChooser_OpenFileDialog_Statics::NewProp_DialogTitle = { "DialogTitle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileChooser_eventOpenFileDialog_Parms, DialogTitle), METADATA_PARAMS(Z_Construct_UFunction_UFileChooser_OpenFileDialog_Statics::NewProp_DialogTitle_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFileChooser_OpenFileDialog_Statics::NewProp_DialogTitle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileChooser_OpenFileDialog_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileChooser_OpenFileDialog_Statics::NewProp_OutFileNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileChooser_OpenFileDialog_Statics::NewProp_OutFileNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileChooser_OpenFileDialog_Statics::NewProp_FileTypes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileChooser_OpenFileDialog_Statics::NewProp_DefaultPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileChooser_OpenFileDialog_Statics::NewProp_DialogTitle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileChooser_OpenFileDialog_Statics::Function_MetaDataParams[] = {
		{ "Category", "FileChooser" },
		{ "ModuleRelativePath", "FileChooser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileChooser_OpenFileDialog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileChooser, nullptr, "OpenFileDialog", nullptr, nullptr, sizeof(FileChooser_eventOpenFileDialog_Parms), Z_Construct_UFunction_UFileChooser_OpenFileDialog_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFileChooser_OpenFileDialog_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileChooser_OpenFileDialog_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFileChooser_OpenFileDialog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileChooser_OpenFileDialog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFileChooser_OpenFileDialog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileChooser_OpenFolderDialog_Statics
	{
		struct FileChooser_eventOpenFolderDialog_Parms
		{
			FString DialogTitle;
			FString DefaultPath;
			FString OutFolder;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OutFolder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DefaultPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DialogTitle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DialogTitle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileChooser_OpenFolderDialog_Statics::NewProp_OutFolder = { "OutFolder", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileChooser_eventOpenFolderDialog_Parms, OutFolder), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileChooser_OpenFolderDialog_Statics::NewProp_DefaultPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileChooser_OpenFolderDialog_Statics::NewProp_DefaultPath = { "DefaultPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileChooser_eventOpenFolderDialog_Parms, DefaultPath), METADATA_PARAMS(Z_Construct_UFunction_UFileChooser_OpenFolderDialog_Statics::NewProp_DefaultPath_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFileChooser_OpenFolderDialog_Statics::NewProp_DefaultPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileChooser_OpenFolderDialog_Statics::NewProp_DialogTitle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileChooser_OpenFolderDialog_Statics::NewProp_DialogTitle = { "DialogTitle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileChooser_eventOpenFolderDialog_Parms, DialogTitle), METADATA_PARAMS(Z_Construct_UFunction_UFileChooser_OpenFolderDialog_Statics::NewProp_DialogTitle_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFileChooser_OpenFolderDialog_Statics::NewProp_DialogTitle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileChooser_OpenFolderDialog_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileChooser_OpenFolderDialog_Statics::NewProp_OutFolder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileChooser_OpenFolderDialog_Statics::NewProp_DefaultPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileChooser_OpenFolderDialog_Statics::NewProp_DialogTitle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileChooser_OpenFolderDialog_Statics::Function_MetaDataParams[] = {
		{ "Category", "FileChooser" },
		{ "ModuleRelativePath", "FileChooser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileChooser_OpenFolderDialog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileChooser, nullptr, "OpenFolderDialog", nullptr, nullptr, sizeof(FileChooser_eventOpenFolderDialog_Parms), Z_Construct_UFunction_UFileChooser_OpenFolderDialog_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFileChooser_OpenFolderDialog_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileChooser_OpenFolderDialog_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFileChooser_OpenFolderDialog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileChooser_OpenFolderDialog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFileChooser_OpenFolderDialog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileChooser_PrintData_Statics
	{
		struct FileChooser_eventPrintData_Parms
		{
			FString File;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_File_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_File;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileChooser_PrintData_Statics::NewProp_File_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileChooser_PrintData_Statics::NewProp_File = { "File", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileChooser_eventPrintData_Parms, File), METADATA_PARAMS(Z_Construct_UFunction_UFileChooser_PrintData_Statics::NewProp_File_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFileChooser_PrintData_Statics::NewProp_File_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileChooser_PrintData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileChooser_PrintData_Statics::NewProp_File,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileChooser_PrintData_Statics::Function_MetaDataParams[] = {
		{ "Category", "FileChooser" },
		{ "Comment", "/*Prints the data of the given file*/" },
		{ "ModuleRelativePath", "FileChooser.h" },
		{ "ToolTip", "Prints the data of the given file" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileChooser_PrintData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileChooser, nullptr, "PrintData", nullptr, nullptr, sizeof(FileChooser_eventPrintData_Parms), Z_Construct_UFunction_UFileChooser_PrintData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFileChooser_PrintData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileChooser_PrintData_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFileChooser_PrintData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileChooser_PrintData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFileChooser_PrintData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFileChooser_NoRegister()
	{
		return UFileChooser::StaticClass();
	}
	struct Z_Construct_UClass_UFileChooser_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFileChooser_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_VRoscopy,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFileChooser_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFileChooser_OpenFileDialog, "OpenFileDialog" }, // 1029768797
		{ &Z_Construct_UFunction_UFileChooser_OpenFolderDialog, "OpenFolderDialog" }, // 2089501593
		{ &Z_Construct_UFunction_UFileChooser_PrintData, "PrintData" }, // 131993480
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFileChooser_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "FileChooser.h" },
		{ "ModuleRelativePath", "FileChooser.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFileChooser_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFileChooser>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFileChooser_Statics::ClassParams = {
		&UFileChooser::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFileChooser_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFileChooser_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFileChooser()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFileChooser_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFileChooser, 2866800514);
	template<> VROSCOPY_API UClass* StaticClass<UFileChooser>()
	{
		return UFileChooser::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFileChooser(Z_Construct_UClass_UFileChooser, &UFileChooser::StaticClass, TEXT("/Script/VRoscopy"), TEXT("UFileChooser"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFileChooser);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
