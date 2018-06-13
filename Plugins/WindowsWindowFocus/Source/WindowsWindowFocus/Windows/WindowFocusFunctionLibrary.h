// Copyright(c) 2018 PaperSloth

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "WindowFocusFunctionLibrary.generated.h"

UCLASS()
class WINDOWSWINDOWFOCUS_API UWindowFocusFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	UFUNCTION(BlueprintPure, Category = "Library | Windows")
	static bool IsFocusWindow();
};
