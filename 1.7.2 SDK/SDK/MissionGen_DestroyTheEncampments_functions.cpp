#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionGen_DestroyTheEncampments.MissionGen_DestroyTheEncampments_C
// (None)

class UClass* UMissionGen_DestroyTheEncampments_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionGen_DestroyTheEncampments_C");

	return Clss;
}


// MissionGen_DestroyTheEncampments_C MissionGen_DestroyTheEncampments.Default__MissionGen_DestroyTheEncampments_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionGen_DestroyTheEncampments_C* UMissionGen_DestroyTheEncampments_C::GetDefaultObj()
{
	static class UMissionGen_DestroyTheEncampments_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionGen_DestroyTheEncampments_C*>(UMissionGen_DestroyTheEncampments_C::StaticClass()->DefaultObject);

	return Default;
}

}


