#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Hex_BuildTheBase.BP_Hex_BuildTheBase_C
// (Actor)

class UClass* ABP_Hex_BuildTheBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Hex_BuildTheBase_C");

	return Clss;
}


// BP_Hex_BuildTheBase_C BP_Hex_BuildTheBase.Default__BP_Hex_BuildTheBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Hex_BuildTheBase_C* ABP_Hex_BuildTheBase_C::GetDefaultObj()
{
	static class ABP_Hex_BuildTheBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Hex_BuildTheBase_C*>(ABP_Hex_BuildTheBase_C::StaticClass()->DefaultObject);

	return Default;
}

}


