// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
//#include "Components/ActorComponent.h"
#include "Engine/Blueprint.h"
#include "FilePicker.generated.h"


UCLASS(Blueprintable)
class VROSCOPY_API UFilePicker : public UBlueprint
{
public:	
	GENERATED_BODY()
	/*
 * Opens a file dialog for the specified data. Leave FileTypes empty to be able to select any files.
 * Filetypes must be in the format of: <File type Description>|*.<actual extension>
 * You can combine multiple extensions by placing ";" between them
 * For example: Text Files|*.txt|Excel files|*.csv|Image Files|*.png;*.jpg;*.bmp will display 3 lines for 3 different type of files.
 */
	UFUNCTION(BlueprintCallable, meta=(WorldContext = "WorldContextObject", CallableWithoutWorldContext), Category = "ChooseFileFolder")
		static void OpenFileDialog(const FString& DialogTitle, const FString& DefaultPath, const FString& FileTypes, TArray<FString>& OutFileNames);

	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", CallableWithoutWorldContext), Category = "ChooseFileFolder")
		static void OpenFolderDialog(const FString& DialogTitle, const FString& DefaultPath, const FString& FileTypes, FString& OutFolder);

	/*Prints the data of the given file*/
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", CallableWithoutWorldContext), Category = "ChooseFileFolder")
		static void PrintData(const FString& File);
		
};
