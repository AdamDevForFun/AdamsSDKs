#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SharedMissionLists.SharedMissionLists_C
// (None)

class UClass* USharedMissionLists_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SharedMissionLists_C");

	return Clss;
}


// SharedMissionLists_C SharedMissionLists.Default__SharedMissionLists_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USharedMissionLists_C* USharedMissionLists_C::GetDefaultObj()
{
	static class USharedMissionLists_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USharedMissionLists_C*>(USharedMissionLists_C::StaticClass()->DefaultObject);

	return Default;
}

}


