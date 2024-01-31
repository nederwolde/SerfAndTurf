// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "SHUDResourcesWidget.h"

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "MainHUD.generated.h"

/**
 * 
 */
UCLASS()
class AMainHUD : public AHUD
{
	GENERATED_BODY()
	
private:
	TSharedPtr<SHUDResourcesWidget> HUDResourcesWidget;

public:
	void BeginPlay() override;

};
