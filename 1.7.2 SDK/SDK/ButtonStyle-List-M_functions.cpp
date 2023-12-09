#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-List-M.ButtonStyle-List-M_C
// (None)

class UClass* UButtonStyleMinusListMinusM_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-List-M_C");

	return Clss;
}


// ButtonStyle-List-M_C ButtonStyle-List-M.Default__ButtonStyle-List-M_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusListMinusM_C* UButtonStyleMinusListMinusM_C::GetDefaultObj()
{
	static class UButtonStyleMinusListMinusM_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusListMinusM_C*>(UButtonStyleMinusListMinusM_C::StaticClass()->DefaultObject);

	return Default;
}

}


