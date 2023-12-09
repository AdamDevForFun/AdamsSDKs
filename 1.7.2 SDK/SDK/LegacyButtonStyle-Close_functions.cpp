#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LegacyButtonStyle-Close.LegacyButtonStyle-Close_C
// (None)

class UClass* ULegacyButtonStyleMinusClose_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LegacyButtonStyle-Close_C");

	return Clss;
}


// LegacyButtonStyle-Close_C LegacyButtonStyle-Close.Default__LegacyButtonStyle-Close_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULegacyButtonStyleMinusClose_C* ULegacyButtonStyleMinusClose_C::GetDefaultObj()
{
	static class ULegacyButtonStyleMinusClose_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULegacyButtonStyleMinusClose_C*>(ULegacyButtonStyleMinusClose_C::StaticClass()->DefaultObject);

	return Default;
}

}


