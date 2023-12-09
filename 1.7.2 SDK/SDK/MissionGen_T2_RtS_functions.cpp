#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionGen_T2_RtS.MissionGen_T2_RtS_C
// (None)

class UClass* UMissionGen_T2_RtS_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionGen_T2_RtS_C");

	return Clss;
}


// MissionGen_T2_RtS_C MissionGen_T2_RtS.Default__MissionGen_T2_RtS_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionGen_T2_RtS_C* UMissionGen_T2_RtS_C::GetDefaultObj()
{
	static class UMissionGen_T2_RtS_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionGen_T2_RtS_C*>(UMissionGen_T2_RtS_C::StaticClass()->DefaultObject);

	return Default;
}

}


