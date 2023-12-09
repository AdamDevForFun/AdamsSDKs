#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_SupplyDropCameraShake.B_SupplyDropCameraShake_C
// (None)

class UClass* UB_SupplyDropCameraShake_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_SupplyDropCameraShake_C");

	return Clss;
}


// B_SupplyDropCameraShake_C B_SupplyDropCameraShake.Default__B_SupplyDropCameraShake_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UB_SupplyDropCameraShake_C* UB_SupplyDropCameraShake_C::GetDefaultObj()
{
	static class UB_SupplyDropCameraShake_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UB_SupplyDropCameraShake_C*>(UB_SupplyDropCameraShake_C::StaticClass()->DefaultObject);

	return Default;
}

}


