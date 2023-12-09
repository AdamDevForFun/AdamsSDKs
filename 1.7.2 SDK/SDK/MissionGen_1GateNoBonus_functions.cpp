#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionGen_1GateNoBonus.MissionGen_1GateNoBonus_C
// (None)

class UClass* UMissionGen_1GateNoBonus_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionGen_1GateNoBonus_C");

	return Clss;
}


// MissionGen_1GateNoBonus_C MissionGen_1GateNoBonus.Default__MissionGen_1GateNoBonus_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionGen_1GateNoBonus_C* UMissionGen_1GateNoBonus_C::GetDefaultObj()
{
	static class UMissionGen_1GateNoBonus_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionGen_1GateNoBonus_C*>(UMissionGen_1GateNoBonus_C::StaticClass()->DefaultObject);

	return Default;
}

}


