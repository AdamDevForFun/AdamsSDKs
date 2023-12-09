#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Creative_Powerup_Grind.GE_Creative_Powerup_Grind_C
// (None)

class UClass* UGE_Creative_Powerup_Grind_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Creative_Powerup_Grind_C");

	return Clss;
}


// GE_Creative_Powerup_Grind_C GE_Creative_Powerup_Grind.Default__GE_Creative_Powerup_Grind_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Creative_Powerup_Grind_C* UGE_Creative_Powerup_Grind_C::GetDefaultObj()
{
	static class UGE_Creative_Powerup_Grind_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Creative_Powerup_Grind_C*>(UGE_Creative_Powerup_Grind_C::StaticClass()->DefaultObject);

	return Default;
}

}


