#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LegacyButtonStyle-Base.LegacyButtonStyle-Base_C
// (None)

class UClass* ULegacyButtonStyleMinusBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LegacyButtonStyle-Base_C");

	return Clss;
}


// LegacyButtonStyle-Base_C LegacyButtonStyle-Base.Default__LegacyButtonStyle-Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULegacyButtonStyleMinusBase_C* ULegacyButtonStyleMinusBase_C::GetDefaultObj()
{
	static class ULegacyButtonStyleMinusBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULegacyButtonStyleMinusBase_C*>(ULegacyButtonStyleMinusBase_C::StaticClass()->DefaultObject);

	return Default;
}

}


