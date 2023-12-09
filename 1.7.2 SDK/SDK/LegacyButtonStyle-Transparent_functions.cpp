#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LegacyButtonStyle-Transparent.LegacyButtonStyle-Transparent_C
// (None)

class UClass* ULegacyButtonStyleMinusTransparent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LegacyButtonStyle-Transparent_C");

	return Clss;
}


// LegacyButtonStyle-Transparent_C LegacyButtonStyle-Transparent.Default__LegacyButtonStyle-Transparent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULegacyButtonStyleMinusTransparent_C* ULegacyButtonStyleMinusTransparent_C::GetDefaultObj()
{
	static class ULegacyButtonStyleMinusTransparent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULegacyButtonStyleMinusTransparent_C*>(ULegacyButtonStyleMinusTransparent_C::StaticClass()->DefaultObject);

	return Default;
}

}


