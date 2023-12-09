#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionGen_TheOutpost_PvE_02.MissionGen_TheOutpost_PvE_02_C
// (None)

class UClass* UMissionGen_TheOutpost_PvE_02_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionGen_TheOutpost_PvE_02_C");

	return Clss;
}


// MissionGen_TheOutpost_PvE_02_C MissionGen_TheOutpost_PvE_02.Default__MissionGen_TheOutpost_PvE_02_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionGen_TheOutpost_PvE_02_C* UMissionGen_TheOutpost_PvE_02_C::GetDefaultObj()
{
	static class UMissionGen_TheOutpost_PvE_02_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionGen_TheOutpost_PvE_02_C*>(UMissionGen_TheOutpost_PvE_02_C::StaticClass()->DefaultObject);

	return Default;
}

}


