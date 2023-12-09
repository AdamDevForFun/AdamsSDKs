#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SoulSuckCameraShake.SoulSuckCameraShake_C
// (None)

class UClass* USoulSuckCameraShake_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SoulSuckCameraShake_C");

	return Clss;
}


// SoulSuckCameraShake_C SoulSuckCameraShake.Default__SoulSuckCameraShake_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USoulSuckCameraShake_C* USoulSuckCameraShake_C::GetDefaultObj()
{
	static class USoulSuckCameraShake_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USoulSuckCameraShake_C*>(USoulSuckCameraShake_C::StaticClass()->DefaultObject);

	return Default;
}

}


