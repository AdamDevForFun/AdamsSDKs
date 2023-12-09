#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionGen_T1_LT_LtB.MissionGen_T1_LT_LtB_C
// (None)

class UClass* UMissionGen_T1_LT_LtB_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionGen_T1_LT_LtB_C");

	return Clss;
}


// MissionGen_T1_LT_LtB_C MissionGen_T1_LT_LtB.Default__MissionGen_T1_LT_LtB_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionGen_T1_LT_LtB_C* UMissionGen_T1_LT_LtB_C::GetDefaultObj()
{
	static class UMissionGen_T1_LT_LtB_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionGen_T1_LT_LtB_C*>(UMissionGen_T1_LT_LtB_C::StaticClass()->DefaultObject);

	return Default;
}

}


