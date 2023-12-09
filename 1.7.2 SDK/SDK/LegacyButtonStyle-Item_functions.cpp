#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LegacyButtonStyle-Item.LegacyButtonStyle-Item_C
// (None)

class UClass* ULegacyButtonStyleMinusItem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LegacyButtonStyle-Item_C");

	return Clss;
}


// LegacyButtonStyle-Item_C LegacyButtonStyle-Item.Default__LegacyButtonStyle-Item_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULegacyButtonStyleMinusItem_C* ULegacyButtonStyleMinusItem_C::GetDefaultObj()
{
	static class ULegacyButtonStyleMinusItem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULegacyButtonStyleMinusItem_C*>(ULegacyButtonStyleMinusItem_C::StaticClass()->DefaultObject);

	return Default;
}

}


