#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Map_Offense_To_WeaponDamage.GE_Map_Offense_To_WeaponDamage_C
// (None)

class UClass* UGE_Map_Offense_To_WeaponDamage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Map_Offense_To_WeaponDamage_C");

	return Clss;
}


// GE_Map_Offense_To_WeaponDamage_C GE_Map_Offense_To_WeaponDamage.Default__GE_Map_Offense_To_WeaponDamage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Map_Offense_To_WeaponDamage_C* UGE_Map_Offense_To_WeaponDamage_C::GetDefaultObj()
{
	static class UGE_Map_Offense_To_WeaponDamage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Map_Offense_To_WeaponDamage_C*>(UGE_Map_Offense_To_WeaponDamage_C::StaticClass()->DefaultObject);

	return Default;
}

}


