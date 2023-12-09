#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionGen_T2_RtL.MissionGen_T2_RtL_C
// (None)

class UClass* UMissionGen_T2_RtL_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionGen_T2_RtL_C");

	return Clss;
}


// MissionGen_T2_RtL_C MissionGen_T2_RtL.Default__MissionGen_T2_RtL_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionGen_T2_RtL_C* UMissionGen_T2_RtL_C::GetDefaultObj()
{
	static class UMissionGen_T2_RtL_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionGen_T2_RtL_C*>(UMissionGen_T2_RtL_C::StaticClass()->DefaultObject);

	return Default;
}

}


