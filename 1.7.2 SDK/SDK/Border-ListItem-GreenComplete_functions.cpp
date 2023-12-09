#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Border-ListItem-GreenComplete.Border-ListItem-GreenComplete_C
// (None)

class UClass* UBorderMinusListItemMinusGreenComplete_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Border-ListItem-GreenComplete_C");

	return Clss;
}


// Border-ListItem-GreenComplete_C Border-ListItem-GreenComplete.Default__Border-ListItem-GreenComplete_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBorderMinusListItemMinusGreenComplete_C* UBorderMinusListItemMinusGreenComplete_C::GetDefaultObj()
{
	static class UBorderMinusListItemMinusGreenComplete_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBorderMinusListItemMinusGreenComplete_C*>(UBorderMinusListItemMinusGreenComplete_C::StaticClass()->DefaultObject);

	return Default;
}

}


