#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionGen_RetrieveTheData.MissionGen_RetrieveTheData_C
// (None)

class UClass* UMissionGen_RetrieveTheData_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionGen_RetrieveTheData_C");

	return Clss;
}


// MissionGen_RetrieveTheData_C MissionGen_RetrieveTheData.Default__MissionGen_RetrieveTheData_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionGen_RetrieveTheData_C* UMissionGen_RetrieveTheData_C::GetDefaultObj()
{
	static class UMissionGen_RetrieveTheData_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionGen_RetrieveTheData_C*>(UMissionGen_RetrieveTheData_C::StaticClass()->DefaultObject);

	return Default;
}

}


