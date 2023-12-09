#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass SquadSlotItemPicker.SquadSlotItemPicker_C
// (None)

class UClass* USquadSlotItemPicker_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SquadSlotItemPicker_C");

	return Clss;
}


// SquadSlotItemPicker_C SquadSlotItemPicker.Default__SquadSlotItemPicker_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USquadSlotItemPicker_C* USquadSlotItemPicker_C::GetDefaultObj()
{
	static class USquadSlotItemPicker_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USquadSlotItemPicker_C*>(USquadSlotItemPicker_C::StaticClass()->DefaultObject);

	return Default;
}

}


