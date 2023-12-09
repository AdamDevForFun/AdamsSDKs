#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Map_Commando_Prowess_TrapDamage.GE_Map_Commando_Prowess_TrapDamage_C
// (None)

class UClass* UGE_Map_Commando_Prowess_TrapDamage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Map_Commando_Prowess_TrapDamage_C");

	return Clss;
}


// GE_Map_Commando_Prowess_TrapDamage_C GE_Map_Commando_Prowess_TrapDamage.Default__GE_Map_Commando_Prowess_TrapDamage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Map_Commando_Prowess_TrapDamage_C* UGE_Map_Commando_Prowess_TrapDamage_C::GetDefaultObj()
{
	static class UGE_Map_Commando_Prowess_TrapDamage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Map_Commando_Prowess_TrapDamage_C*>(UGE_Map_Commando_Prowess_TrapDamage_C::StaticClass()->DefaultObject);

	return Default;
}

}


