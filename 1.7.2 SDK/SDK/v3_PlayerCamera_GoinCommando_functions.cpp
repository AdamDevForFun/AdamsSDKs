#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass v3_PlayerCamera_GoinCommando.v3_PlayerCamera_GoinCommando_C
// (None)

class UClass* UV3_PlayerCamera_GoinCommando_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("v3_PlayerCamera_GoinCommando_C");

	return Clss;
}


// v3_PlayerCamera_GoinCommando_C v3_PlayerCamera_GoinCommando.Default__v3_PlayerCamera_GoinCommando_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UV3_PlayerCamera_GoinCommando_C* UV3_PlayerCamera_GoinCommando_C::GetDefaultObj()
{
	static class UV3_PlayerCamera_GoinCommando_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UV3_PlayerCamera_GoinCommando_C*>(UV3_PlayerCamera_GoinCommando_C::StaticClass()->DefaultObject);

	return Default;
}

}


