// Fill out your copyright notice in the Description page of Project Settings.


#include "MainHUD.h"

void AMainHUD::BeginPlay() {

	Super::BeginPlay();

	HUDResourcesWidget
		= SNew(SHUDResourcesWidget)
		.ResourcesCountDisplayText(FText::FromString(TEXT("100")));

	UGameViewportClient* ViewportClient
		= GetWorld()->GetGameViewport();

	ViewportClient->AddViewportWidgetContent(
		HUDResourcesWidget.ToSharedRef()
	);

}