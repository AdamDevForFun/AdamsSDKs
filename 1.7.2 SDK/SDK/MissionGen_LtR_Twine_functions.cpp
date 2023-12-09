#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionGen_LtR_Twine.MissionGen_LtR_Twine_C
// (None)

class UClass* UMissionGen_LtR_Twine_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionGen_LtR_Twine_C");

	return Clss;
}


// MissionGen_LtR_Twine_C MissionGen_LtR_Twine.Default__MissionGen_LtR_Twine_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionGen_LtR_Twine_C* UMissionGen_LtR_Twine_C::GetDefaultObj()
{
	static class UMissionGen_LtR_Twine_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionGen_LtR_Twine_C*>(UMissionGen_LtR_Twine_C::StaticClass()->DefaultObject);

	return Default;
}

}


