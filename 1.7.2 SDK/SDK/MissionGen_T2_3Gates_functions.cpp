#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionGen_T2_3Gates.MissionGen_T2_3Gates_C
// (None)

class UClass* UMissionGen_T2_3Gates_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionGen_T2_3Gates_C");

	return Clss;
}


// MissionGen_T2_3Gates_C MissionGen_T2_3Gates.Default__MissionGen_T2_3Gates_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionGen_T2_3Gates_C* UMissionGen_T2_3Gates_C::GetDefaultObj()
{
	static class UMissionGen_T2_3Gates_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionGen_T2_3Gates_C*>(UMissionGen_T2_3Gates_C::StaticClass()->DefaultObject);

	return Default;
}

}


