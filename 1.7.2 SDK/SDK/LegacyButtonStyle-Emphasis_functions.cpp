#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LegacyButtonStyle-Emphasis.LegacyButtonStyle-Emphasis_C
// (None)

class UClass* ULegacyButtonStyleMinusEmphasis_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LegacyButtonStyle-Emphasis_C");

	return Clss;
}


// LegacyButtonStyle-Emphasis_C LegacyButtonStyle-Emphasis.Default__LegacyButtonStyle-Emphasis_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULegacyButtonStyleMinusEmphasis_C* ULegacyButtonStyleMinusEmphasis_C::GetDefaultObj()
{
	static class ULegacyButtonStyleMinusEmphasis_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULegacyButtonStyleMinusEmphasis_C*>(ULegacyButtonStyleMinusEmphasis_C::StaticClass()->DefaultObject);

	return Default;
}

}


