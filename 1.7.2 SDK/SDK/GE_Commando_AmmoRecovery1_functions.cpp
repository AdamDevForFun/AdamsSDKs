#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Commando_AmmoRecovery1.GE_Commando_AmmoRecovery1_C
// (None)

class UClass* UGE_Commando_AmmoRecovery1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Commando_AmmoRecovery1_C");

	return Clss;
}


// GE_Commando_AmmoRecovery1_C GE_Commando_AmmoRecovery1.Default__GE_Commando_AmmoRecovery1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Commando_AmmoRecovery1_C* UGE_Commando_AmmoRecovery1_C::GetDefaultObj()
{
	static class UGE_Commando_AmmoRecovery1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Commando_AmmoRecovery1_C*>(UGE_Commando_AmmoRecovery1_C::StaticClass()->DefaultObject);

	return Default;
}

}


