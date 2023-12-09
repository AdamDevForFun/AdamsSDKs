#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WM_PinMedium.WM_PinMedium_C
// (Actor)

class UClass* AWM_PinMedium_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WM_PinMedium_C");

	return Clss;
}


// WM_PinMedium_C WM_PinMedium.Default__WM_PinMedium_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AWM_PinMedium_C* AWM_PinMedium_C::GetDefaultObj()
{
	static class AWM_PinMedium_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AWM_PinMedium_C*>(AWM_PinMedium_C::StaticClass()->DefaultObject);

	return Default;
}

}


