// Fill out your copyright notice in the Description page of Project Settings.

#include "MyGameModeBase.h"
#include "SlateHUD.h"




AMyGameModeBase::AMyGameModeBase()
{
	HUDClass = ASlateHUD::StaticClass();
}