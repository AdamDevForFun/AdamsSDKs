#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_HighTower_Grape_BrambleShield_RunOver_Knockback.GA_HighTower_Grape_BrambleShield_RunOver_Knockback_C
// (None)

class UClass* UGA_HighTower_Grape_BrambleShield_RunOver_Knockback_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_HighTower_Grape_BrambleShield_RunOver_Knockback_C");

	return Clss;
}


// GA_HighTower_Grape_BrambleShield_RunOver_Knockback_C GA_HighTower_Grape_BrambleShield_RunOver_Knockback.Default__GA_HighTower_Grape_BrambleShield_RunOver_Knockback_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_HighTower_Grape_BrambleShield_RunOver_Knockback_C* UGA_HighTower_Grape_BrambleShield_RunOver_Knockback_C::GetDefaultObj()
{
	static class UGA_HighTower_Grape_BrambleShield_RunOver_Knockback_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_HighTower_Grape_BrambleShield_RunOver_Knockback_C*>(UGA_HighTower_Grape_BrambleShield_RunOver_Knockback_C::StaticClass()->DefaultObject);

	return Default;
}

}


