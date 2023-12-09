#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Border-PerkList-Unlocked.Border-PerkList-Unlocked_C
// (None)

class UClass* UBorderMinusPerkListMinusUnlocked_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Border-PerkList-Unlocked_C");

	return Clss;
}


// Border-PerkList-Unlocked_C Border-PerkList-Unlocked.Default__Border-PerkList-Unlocked_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBorderMinusPerkListMinusUnlocked_C* UBorderMinusPerkListMinusUnlocked_C::GetDefaultObj()
{
	static class UBorderMinusPerkListMinusUnlocked_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBorderMinusPerkListMinusUnlocked_C*>(UBorderMinusPerkListMinusUnlocked_C::StaticClass()->DefaultObject);

	return Default;
}

}


