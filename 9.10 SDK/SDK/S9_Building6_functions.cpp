#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass S9_Building6.S9_Building6_C
// (Actor)

class UClass* AS9_Building6_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("S9_Building6_C");

	return Clss;
}


// S9_Building6_C S9_Building6.Default__S9_Building6_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AS9_Building6_C* AS9_Building6_C::GetDefaultObj()
{
	static class AS9_Building6_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AS9_Building6_C*>(AS9_Building6_C::StaticClass()->DefaultObject);

	return Default;
}

}


