#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionGen_1Gate_VLT.MissionGen_1Gate_VLT_C
// (None)

class UClass* UMissionGen_1Gate_VLT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionGen_1Gate_VLT_C");

	return Clss;
}


// MissionGen_1Gate_VLT_C MissionGen_1Gate_VLT.Default__MissionGen_1Gate_VLT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionGen_1Gate_VLT_C* UMissionGen_1Gate_VLT_C::GetDefaultObj()
{
	static class UMissionGen_1Gate_VLT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionGen_1Gate_VLT_C*>(UMissionGen_1Gate_VLT_C::StaticClass()->DefaultObject);

	return Default;
}

}


