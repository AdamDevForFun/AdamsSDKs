#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_Prj_Athena_Consumable_Thrown_FlopperShield.B_Prj_Athena_Consumable_Thrown_FlopperShield_C
// (Actor)

class UClass* AB_Prj_Athena_Consumable_Thrown_FlopperShield_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_Prj_Athena_Consumable_Thrown_FlopperShield_C");

	return Clss;
}


// B_Prj_Athena_Consumable_Thrown_FlopperShield_C B_Prj_Athena_Consumable_Thrown_FlopperShield.Default__B_Prj_Athena_Consumable_Thrown_FlopperShield_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AB_Prj_Athena_Consumable_Thrown_FlopperShield_C* AB_Prj_Athena_Consumable_Thrown_FlopperShield_C::GetDefaultObj()
{
	static class AB_Prj_Athena_Consumable_Thrown_FlopperShield_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AB_Prj_Athena_Consumable_Thrown_FlopperShield_C*>(AB_Prj_Athena_Consumable_Thrown_FlopperShield_C::StaticClass()->DefaultObject);

	return Default;
}

}


