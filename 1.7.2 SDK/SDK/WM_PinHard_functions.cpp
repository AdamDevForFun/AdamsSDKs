#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WM_PinHard.WM_PinHard_C
// (Actor)

class UClass* AWM_PinHard_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WM_PinHard_C");

	return Clss;
}


// WM_PinHard_C WM_PinHard.Default__WM_PinHard_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AWM_PinHard_C* AWM_PinHard_C::GetDefaultObj()
{
	static class AWM_PinHard_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AWM_PinHard_C*>(AWM_PinHard_C::StaticClass()->DefaultObject);

	return Default;
}

}


