#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Base-M-B_Blue50.TextStyle-Base-M-B_Blue50_C
// (None)

class UClass* UTextStyleMinusBaseMinusMMinusB_Blue50_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Base-M-B_Blue50_C");

	return Clss;
}


// TextStyle-Base-M-B_Blue50_C TextStyle-Base-M-B_Blue50.Default__TextStyle-Base-M-B_Blue50_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusBaseMinusMMinusB_Blue50_C* UTextStyleMinusBaseMinusMMinusB_Blue50_C::GetDefaultObj()
{
	static class UTextStyleMinusBaseMinusMMinusB_Blue50_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusBaseMinusMMinusB_Blue50_C*>(UTextStyleMinusBaseMinusMMinusB_Blue50_C::StaticClass()->DefaultObject);

	return Default;
}

}


