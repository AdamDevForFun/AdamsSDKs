#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass PopupFrame.PopupFrame_C
// (None)

class UClass* UPopupFrame_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PopupFrame_C");

	return Clss;
}


// PopupFrame_C PopupFrame.Default__PopupFrame_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPopupFrame_C* UPopupFrame_C::GetDefaultObj()
{
	static class UPopupFrame_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPopupFrame_C*>(UPopupFrame_C::StaticClass()->DefaultObject);

	return Default;
}

}


