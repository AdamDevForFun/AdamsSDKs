#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-Right-Dark.ButtonStyle-Right-Dark_C
// (None)

class UClass* UButtonStyleMinusRightMinusDark_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-Right-Dark_C");

	return Clss;
}


// ButtonStyle-Right-Dark_C ButtonStyle-Right-Dark.Default__ButtonStyle-Right-Dark_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusRightMinusDark_C* UButtonStyleMinusRightMinusDark_C::GetDefaultObj()
{
	static class UButtonStyleMinusRightMinusDark_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusRightMinusDark_C*>(UButtonStyleMinusRightMinusDark_C::StaticClass()->DefaultObject);

	return Default;
}

}


