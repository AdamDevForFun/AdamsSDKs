#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionGen_T2_1Gate.MissionGen_T2_1Gate_C
// (None)

class UClass* UMissionGen_T2_1Gate_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionGen_T2_1Gate_C");

	return Clss;
}


// MissionGen_T2_1Gate_C MissionGen_T2_1Gate.Default__MissionGen_T2_1Gate_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionGen_T2_1Gate_C* UMissionGen_T2_1Gate_C::GetDefaultObj()
{
	static class UMissionGen_T2_1Gate_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionGen_T2_1Gate_C*>(UMissionGen_T2_1Gate_C::StaticClass()->DefaultObject);

	return Default;
}

}


