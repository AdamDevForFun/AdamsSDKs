#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Athena_PlayerCameraModeTargetingRifle.Athena_PlayerCameraModeTargetingRifle_C
// (None)

class UClass* UAthena_PlayerCameraModeTargetingRifle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Athena_PlayerCameraModeTargetingRifle_C");

	return Clss;
}


// Athena_PlayerCameraModeTargetingRifle_C Athena_PlayerCameraModeTargetingRifle.Default__Athena_PlayerCameraModeTargetingRifle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthena_PlayerCameraModeTargetingRifle_C* UAthena_PlayerCameraModeTargetingRifle_C::GetDefaultObj()
{
	static class UAthena_PlayerCameraModeTargetingRifle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthena_PlayerCameraModeTargetingRifle_C*>(UAthena_PlayerCameraModeTargetingRifle_C::StaticClass()->DefaultObject);

	return Default;
}

}


