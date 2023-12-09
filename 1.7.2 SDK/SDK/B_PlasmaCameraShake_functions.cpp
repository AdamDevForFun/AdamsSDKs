#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_PlasmaCameraShake.B_PlasmaCameraShake_C
// (None)

class UClass* UB_PlasmaCameraShake_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_PlasmaCameraShake_C");

	return Clss;
}


// B_PlasmaCameraShake_C B_PlasmaCameraShake.Default__B_PlasmaCameraShake_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UB_PlasmaCameraShake_C* UB_PlasmaCameraShake_C::GetDefaultObj()
{
	static class UB_PlasmaCameraShake_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UB_PlasmaCameraShake_C*>(UB_PlasmaCameraShake_C::StaticClass()->DefaultObject);

	return Default;
}

}


