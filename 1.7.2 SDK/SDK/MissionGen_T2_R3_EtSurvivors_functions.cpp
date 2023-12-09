#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionGen_T2_R3_EtSurvivors.MissionGen_T2_R3_EtSurvivors_C
// (None)

class UClass* UMissionGen_T2_R3_EtSurvivors_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionGen_T2_R3_EtSurvivors_C");

	return Clss;
}


// MissionGen_T2_R3_EtSurvivors_C MissionGen_T2_R3_EtSurvivors.Default__MissionGen_T2_R3_EtSurvivors_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionGen_T2_R3_EtSurvivors_C* UMissionGen_T2_R3_EtSurvivors_C::GetDefaultObj()
{
	static class UMissionGen_T2_R3_EtSurvivors_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionGen_T2_R3_EtSurvivors_C*>(UMissionGen_T2_R3_EtSurvivors_C::StaticClass()->DefaultObject);

	return Default;
}

}


