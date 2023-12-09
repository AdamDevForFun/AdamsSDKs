#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionGen_EvacuateTheSurvivors.MissionGen_EvacuateTheSurvivors_C
// (None)

class UClass* UMissionGen_EvacuateTheSurvivors_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionGen_EvacuateTheSurvivors_C");

	return Clss;
}


// MissionGen_EvacuateTheSurvivors_C MissionGen_EvacuateTheSurvivors.Default__MissionGen_EvacuateTheSurvivors_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionGen_EvacuateTheSurvivors_C* UMissionGen_EvacuateTheSurvivors_C::GetDefaultObj()
{
	static class UMissionGen_EvacuateTheSurvivors_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionGen_EvacuateTheSurvivors_C*>(UMissionGen_EvacuateTheSurvivors_C::StaticClass()->DefaultObject);

	return Default;
}

}


