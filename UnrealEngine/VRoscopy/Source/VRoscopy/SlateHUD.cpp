// Fill out your copyright notice in the Description page of Project Settings.

//#include "UE4Slate.h"
#include "SlateHUD.h"
#include "SDDFileTree.h"

//#include "Slate/HUDWidget.h"


void ASlateHUD::PostInitializeComponents()
{
	Super::PostInitializeComponents();


	SAssignNew(DDFileTree, SDDFileTree).OwnerHUD(this);
	if (GEngine->IsValidLowLevel())
	{
		GEngine->GameViewport->AddViewportWidgetContent(SNew(SWeakWidget).PossiblyNullContent(DDFileTree.ToSharedRef()));
	}
	if (DDFileTree.IsValid())
	{
		DDFileTree->SetVisibility(EVisibility::Visible);
	}

}
