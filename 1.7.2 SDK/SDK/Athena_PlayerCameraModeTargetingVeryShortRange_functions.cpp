#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Athena_PlayerCameraModeTargetingVeryShortRange.Athena_PlayerCameraModeTargetingVeryShortRange_C
// (None)

class UClass* UAthena_PlayerCameraModeTargetingVeryShortRange_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Athena_PlayerCameraModeTargetingVeryShortRange_C");

	return Clss;
}


// Athena_PlayerCameraModeTargetingVeryShortRange_C Athena_PlayerCameraModeTargetingVeryShortRange.Default__Athena_PlayerCameraModeTargetingVeryShortRange_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthena_PlayerCameraModeTargetingVeryShortRange_C* UAthena_PlayerCameraModeTargetingVeryShortRange_C::GetDefaultObj()
{
	static class UAthena_PlayerCameraModeTargetingVeryShortRange_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthena_PlayerCameraModeTargetingVeryShortRange_C*>(UAthena_PlayerCameraModeTargetingVeryShortRange_C::StaticClass()->DefaultObject);

	return Default;
}

}


