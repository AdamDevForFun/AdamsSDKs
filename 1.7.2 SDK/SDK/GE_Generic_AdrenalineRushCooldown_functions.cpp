#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Generic_AdrenalineRushCooldown.GE_Generic_AdrenalineRushCooldown_C
// (None)

class UClass* UGE_Generic_AdrenalineRushCooldown_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Generic_AdrenalineRushCooldown_C");

	return Clss;
}


// GE_Generic_AdrenalineRushCooldown_C GE_Generic_AdrenalineRushCooldown.Default__GE_Generic_AdrenalineRushCooldown_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Generic_AdrenalineRushCooldown_C* UGE_Generic_AdrenalineRushCooldown_C::GetDefaultObj()
{
	static class UGE_Generic_AdrenalineRushCooldown_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Generic_AdrenalineRushCooldown_C*>(UGE_Generic_AdrenalineRushCooldown_C::StaticClass()->DefaultObject);

	return Default;
}

}


