// Fill out your copyright notice in the Description page of Project Settings.


#include "SHUDResourcesWidget.h"
#include "SlateOptMacros.h"

BEGIN_SLATE_FUNCTION_BUILD_OPTIMIZATION
void SHUDResourcesWidget::Construct(const FArguments& InArgs)
{
	ChildSlot
	[
		SNew(SHorizontalBox)

		+ SHorizontalBox::Slot()
		.AutoWidth()
		.Padding(5)
		[
			SNew(STextBlock)
			.Text(FText::FromString(TEXT("Resources: ")))
		]

		+ SHorizontalBox::Slot()
		.FillWidth(1.0f)
		.Padding(5)
		[
			SNew(STextBlock)
			.Text(InArgs._ResourcesCountDisplayText)
		]
	];
}
END_SLATE_FUNCTION_BUILD_OPTIMIZATION
