#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionGen_LtR_CannyValley.MissionGen_LtR_CannyValley_C
// (None)

class UClass* UMissionGen_LtR_CannyValley_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionGen_LtR_CannyValley_C");

	return Clss;
}


// MissionGen_LtR_CannyValley_C MissionGen_LtR_CannyValley.Default__MissionGen_LtR_CannyValley_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionGen_LtR_CannyValley_C* UMissionGen_LtR_CannyValley_C::GetDefaultObj()
{
	static class UMissionGen_LtR_CannyValley_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionGen_LtR_CannyValley_C*>(UMissionGen_LtR_CannyValley_C::StaticClass()->DefaultObject);

	return Default;
}

}


