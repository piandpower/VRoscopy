// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "Engine.h"
#include "GameFramework/HUD.h"
#include "SlateHUD.generated.h"

/**
 *
 */
UCLASS()
class VROSCOPY_API ASlateHUD : public AHUD
{
	GENERATED_BODY()

public:
	virtual void PostInitializeComponents() override;
	TSharedPtr<class SDDFileTree> DDFileTree;


protected:
	//TSharedPtr<class SDDFileTree> DDFileTree;
	//TSharedPtr<class SWeakWidget> HUDWidgetContainer;
};
