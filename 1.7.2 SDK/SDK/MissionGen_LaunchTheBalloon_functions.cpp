#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionGen_LaunchTheBalloon.MissionGen_LaunchTheBalloon_C
// (None)

class UClass* UMissionGen_LaunchTheBalloon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionGen_LaunchTheBalloon_C");

	return Clss;
}


// MissionGen_LaunchTheBalloon_C MissionGen_LaunchTheBalloon.Default__MissionGen_LaunchTheBalloon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionGen_LaunchTheBalloon_C* UMissionGen_LaunchTheBalloon_C::GetDefaultObj()
{
	static class UMissionGen_LaunchTheBalloon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionGen_LaunchTheBalloon_C*>(UMissionGen_LaunchTheBalloon_C::StaticClass()->DefaultObject);

	return Default;
}

}


