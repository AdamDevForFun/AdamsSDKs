#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BottomBarWidget.BottomBarWidget_C
// (None)

class UClass* UBottomBarWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BottomBarWidget_C");

	return Clss;
}


// BottomBarWidget_C BottomBarWidget.Default__BottomBarWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBottomBarWidget_C* UBottomBarWidget_C::GetDefaultObj()
{
	static class UBottomBarWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBottomBarWidget_C*>(UBottomBarWidget_C::StaticClass()->DefaultObject);

	return Default;
}

}


