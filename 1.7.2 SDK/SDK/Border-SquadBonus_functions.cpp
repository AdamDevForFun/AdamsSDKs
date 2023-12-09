#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Border-SquadBonus.Border-SquadBonus_C
// (None)

class UClass* UBorderMinusSquadBonus_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Border-SquadBonus_C");

	return Clss;
}


// Border-SquadBonus_C Border-SquadBonus.Default__Border-SquadBonus_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBorderMinusSquadBonus_C* UBorderMinusSquadBonus_C::GetDefaultObj()
{
	static class UBorderMinusSquadBonus_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBorderMinusSquadBonus_C*>(UBorderMinusSquadBonus_C::StaticClass()->DefaultObject);

	return Default;
}

}


