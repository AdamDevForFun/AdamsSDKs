#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionGen_T2_R4_EtShelter_Tutorial.MissionGen_T2_R4_EtShelter_Tutorial_C
// (None)

class UClass* UMissionGen_T2_R4_EtShelter_Tutorial_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionGen_T2_R4_EtShelter_Tutorial_C");

	return Clss;
}


// MissionGen_T2_R4_EtShelter_Tutorial_C MissionGen_T2_R4_EtShelter_Tutorial.Default__MissionGen_T2_R4_EtShelter_Tutorial_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionGen_T2_R4_EtShelter_Tutorial_C* UMissionGen_T2_R4_EtShelter_Tutorial_C::GetDefaultObj()
{
	static class UMissionGen_T2_R4_EtShelter_Tutorial_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionGen_T2_R4_EtShelter_Tutorial_C*>(UMissionGen_T2_R4_EtShelter_Tutorial_C::StaticClass()->DefaultObject);

	return Default;
}

}


