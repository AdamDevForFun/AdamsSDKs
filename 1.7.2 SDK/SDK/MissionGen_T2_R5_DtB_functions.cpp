#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionGen_T2_R5_DtB.MissionGen_T2_R5_DtB_C
// (None)

class UClass* UMissionGen_T2_R5_DtB_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionGen_T2_R5_DtB_C");

	return Clss;
}


// MissionGen_T2_R5_DtB_C MissionGen_T2_R5_DtB.Default__MissionGen_T2_R5_DtB_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionGen_T2_R5_DtB_C* UMissionGen_T2_R5_DtB_C::GetDefaultObj()
{
	static class UMissionGen_T2_R5_DtB_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionGen_T2_R5_DtB_C*>(UMissionGen_T2_R5_DtB_C::StaticClass()->DefaultObject);

	return Default;
}

}


