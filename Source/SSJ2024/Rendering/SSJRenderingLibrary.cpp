// Fill out your copyright notice in the Description page of Project Settings.


#include "SSJRenderingLibrary.h"

#include "Engine/TextureRenderTarget2D.h"

UTexture2D* USSJRenderingLibrary::CreateTextureFromRenderTarget(UObject* WorldContextObject, UTextureRenderTarget2D* RT)
{
	return RT->ConstructTexture2D(WorldContextObject, "BlockTexture", RF_Transient);
}
