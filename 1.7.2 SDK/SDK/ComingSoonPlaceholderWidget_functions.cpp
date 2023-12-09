#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ComingSoonPlaceholderWidget.ComingSoonPlaceholderWidget_C
// (None)

class UClass* UComingSoonPlaceholderWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ComingSoonPlaceholderWidget_C");

	return Clss;
}


// ComingSoonPlaceholderWidget_C ComingSoonPlaceholderWidget.Default__ComingSoonPlaceholderWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UComingSoonPlaceholderWidget_C* UComingSoonPlaceholderWidget_C::GetDefaultObj()
{
	static class UComingSoonPlaceholderWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UComingSoonPlaceholderWidget_C*>(UComingSoonPlaceholderWidget_C::StaticClass()->DefaultObject);

	return Default;
}

}


