#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Map_Commando_Offense_AllWeaponDamage.GE_Map_Commando_Offense_AllWeaponDamage_C
// (None)

class UClass* UGE_Map_Commando_Offense_AllWeaponDamage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Map_Commando_Offense_AllWeaponDamage_C");

	return Clss;
}


// GE_Map_Commando_Offense_AllWeaponDamage_C GE_Map_Commando_Offense_AllWeaponDamage.Default__GE_Map_Commando_Offense_AllWeaponDamage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Map_Commando_Offense_AllWeaponDamage_C* UGE_Map_Commando_Offense_AllWeaponDamage_C::GetDefaultObj()
{
	static class UGE_Map_Commando_Offense_AllWeaponDamage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Map_Commando_Offense_AllWeaponDamage_C*>(UGE_Map_Commando_Offense_AllWeaponDamage_C::StaticClass()->DefaultObject);

	return Default;
}

}


