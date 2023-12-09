#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-LeftDark.ButtonStyle-LeftDark_C
// (None)

class UClass* UButtonStyleMinusLeftDark_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-LeftDark_C");

	return Clss;
}


// ButtonStyle-LeftDark_C ButtonStyle-LeftDark.Default__ButtonStyle-LeftDark_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusLeftDark_C* UButtonStyleMinusLeftDark_C::GetDefaultObj()
{
	static class UButtonStyleMinusLeftDark_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusLeftDark_C*>(UButtonStyleMinusLeftDark_C::StaticClass()->DefaultObject);

	return Default;
}

}


