#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionGen_2Gates.MissionGen_2Gates_C
// (None)

class UClass* UMissionGen_2Gates_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionGen_2Gates_C");

	return Clss;
}


// MissionGen_2Gates_C MissionGen_2Gates.Default__MissionGen_2Gates_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionGen_2Gates_C* UMissionGen_2Gates_C::GetDefaultObj()
{
	static class UMissionGen_2Gates_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionGen_2Gates_C*>(UMissionGen_2Gates_C::StaticClass()->DefaultObject);

	return Default;
}

}


