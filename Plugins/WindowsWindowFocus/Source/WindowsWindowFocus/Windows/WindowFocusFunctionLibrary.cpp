// Copyright(c) 2018 PaperSloth

#include "WindowFocusFunctionLibrary.h"
#if PLATFORM_WINDOWS
#include "MinWindows.h"
#endif

bool UWindowFocusFunctionLibrary::IsFocusWindow()
{
#if PLATFORM_WINDOWS
	return GetFocus() != nullptr;
#elif
	return false;
#endif
}
