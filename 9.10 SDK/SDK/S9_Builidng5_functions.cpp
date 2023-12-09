#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass S9_Builidng5.S9_Builidng5_C
// (Actor)

class UClass* AS9_Builidng5_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("S9_Builidng5_C");

	return Clss;
}


// S9_Builidng5_C S9_Builidng5.Default__S9_Builidng5_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AS9_Builidng5_C* AS9_Builidng5_C::GetDefaultObj()
{
	static class AS9_Builidng5_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AS9_Builidng5_C*>(AS9_Builidng5_C::StaticClass()->DefaultObject);

	return Default;
}

}


