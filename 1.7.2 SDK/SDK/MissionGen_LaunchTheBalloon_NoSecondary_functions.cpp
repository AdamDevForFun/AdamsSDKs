#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionGen_LaunchTheBalloon_NoSecondary.MissionGen_LaunchTheBalloon_NoSecondary_C
// (None)

class UClass* UMissionGen_LaunchTheBalloon_NoSecondary_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionGen_LaunchTheBalloon_NoSecondary_C");

	return Clss;
}


// MissionGen_LaunchTheBalloon_NoSecondary_C MissionGen_LaunchTheBalloon_NoSecondary.Default__MissionGen_LaunchTheBalloon_NoSecondary_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionGen_LaunchTheBalloon_NoSecondary_C* UMissionGen_LaunchTheBalloon_NoSecondary_C::GetDefaultObj()
{
	static class UMissionGen_LaunchTheBalloon_NoSecondary_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionGen_LaunchTheBalloon_NoSecondary_C*>(UMissionGen_LaunchTheBalloon_NoSecondary_C::StaticClass()->DefaultObject);

	return Default;
}

}


