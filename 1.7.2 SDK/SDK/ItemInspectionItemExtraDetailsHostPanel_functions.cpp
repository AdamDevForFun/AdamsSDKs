#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ItemInspectionItemExtraDetailsHostPanel.ItemInspectionItemExtraDetailsHostPanel_C
// (None)

class UClass* UItemInspectionItemExtraDetailsHostPanel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ItemInspectionItemExtraDetailsHostPanel_C");

	return Clss;
}


// ItemInspectionItemExtraDetailsHostPanel_C ItemInspectionItemExtraDetailsHostPanel.Default__ItemInspectionItemExtraDetailsHostPanel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UItemInspectionItemExtraDetailsHostPanel_C* UItemInspectionItemExtraDetailsHostPanel_C::GetDefaultObj()
{
	static class UItemInspectionItemExtraDetailsHostPanel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UItemInspectionItemExtraDetailsHostPanel_C*>(UItemInspectionItemExtraDetailsHostPanel_C::StaticClass()->DefaultObject);

	return Default;
}

}


