#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Creative_Powerup_Jump.GE_Creative_Powerup_Jump_C
// (None)

class UClass* UGE_Creative_Powerup_Jump_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Creative_Powerup_Jump_C");

	return Clss;
}


// GE_Creative_Powerup_Jump_C GE_Creative_Powerup_Jump.Default__GE_Creative_Powerup_Jump_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Creative_Powerup_Jump_C* UGE_Creative_Powerup_Jump_C::GetDefaultObj()
{
	static class UGE_Creative_Powerup_Jump_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Creative_Powerup_Jump_C*>(UGE_Creative_Powerup_Jump_C::StaticClass()->DefaultObject);

	return Default;
}

}


