// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "VERSION_0HUD.generated.h"

UCLASS()
class AVERSION_0HUD : public AHUD
{
	GENERATED_BODY()

public:
	AVERSION_0HUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

