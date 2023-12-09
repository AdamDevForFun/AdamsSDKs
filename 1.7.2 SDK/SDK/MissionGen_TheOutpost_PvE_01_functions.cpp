#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionGen_TheOutpost_PvE_01.MissionGen_TheOutpost_PvE_01_C
// (None)

class UClass* UMissionGen_TheOutpost_PvE_01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionGen_TheOutpost_PvE_01_C");

	return Clss;
}


// MissionGen_TheOutpost_PvE_01_C MissionGen_TheOutpost_PvE_01.Default__MissionGen_TheOutpost_PvE_01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionGen_TheOutpost_PvE_01_C* UMissionGen_TheOutpost_PvE_01_C::GetDefaultObj()
{
	static class UMissionGen_TheOutpost_PvE_01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionGen_TheOutpost_PvE_01_C*>(UMissionGen_TheOutpost_PvE_01_C::StaticClass()->DefaultObject);

	return Default;
}

}


