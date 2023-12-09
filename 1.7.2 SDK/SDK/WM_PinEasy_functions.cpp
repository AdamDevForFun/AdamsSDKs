#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WM_PinEasy.WM_PinEasy_C
// (Actor)

class UClass* AWM_PinEasy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WM_PinEasy_C");

	return Clss;
}


// WM_PinEasy_C WM_PinEasy.Default__WM_PinEasy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AWM_PinEasy_C* AWM_PinEasy_C::GetDefaultObj()
{
	static class AWM_PinEasy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AWM_PinEasy_C*>(AWM_PinEasy_C::StaticClass()->DefaultObject);

	return Default;
}

}


