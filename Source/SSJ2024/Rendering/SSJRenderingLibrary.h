// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SSJRenderingLibrary.generated.h"

/**
 * 
 */
UCLASS()
class SSJ2024_API USSJRenderingLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
	static UTexture2D* CreateTextureFromRenderTarget(UObject* WorldContextObject, UTextureRenderTarget2D* RT);
};
