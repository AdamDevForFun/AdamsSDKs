#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionGen_TheOutpost_PvE_04.MissionGen_TheOutpost_PvE_04_C
// (None)

class UClass* UMissionGen_TheOutpost_PvE_04_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionGen_TheOutpost_PvE_04_C");

	return Clss;
}


// MissionGen_TheOutpost_PvE_04_C MissionGen_TheOutpost_PvE_04.Default__MissionGen_TheOutpost_PvE_04_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionGen_TheOutpost_PvE_04_C* UMissionGen_TheOutpost_PvE_04_C::GetDefaultObj()
{
	static class UMissionGen_TheOutpost_PvE_04_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionGen_TheOutpost_PvE_04_C*>(UMissionGen_TheOutpost_PvE_04_C::StaticClass()->DefaultObject);

	return Default;
}

}


