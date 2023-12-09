#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LegacyButtonStyle-Default.LegacyButtonStyle-Default_C
// (None)

class UClass* ULegacyButtonStyleMinusDefault_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LegacyButtonStyle-Default_C");

	return Clss;
}


// LegacyButtonStyle-Default_C LegacyButtonStyle-Default.Default__LegacyButtonStyle-Default_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULegacyButtonStyleMinusDefault_C* ULegacyButtonStyleMinusDefault_C::GetDefaultObj()
{
	static class ULegacyButtonStyleMinusDefault_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULegacyButtonStyleMinusDefault_C*>(ULegacyButtonStyleMinusDefault_C::StaticClass()->DefaultObject);

	return Default;
}

}


