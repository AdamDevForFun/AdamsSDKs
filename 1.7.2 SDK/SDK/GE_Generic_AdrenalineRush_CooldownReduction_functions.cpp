#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Generic_AdrenalineRush_CooldownReduction.GE_Generic_AdrenalineRush_CooldownReduction_C
// (None)

class UClass* UGE_Generic_AdrenalineRush_CooldownReduction_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Generic_AdrenalineRush_CooldownReduction_C");

	return Clss;
}


// GE_Generic_AdrenalineRush_CooldownReduction_C GE_Generic_AdrenalineRush_CooldownReduction.Default__GE_Generic_AdrenalineRush_CooldownReduction_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Generic_AdrenalineRush_CooldownReduction_C* UGE_Generic_AdrenalineRush_CooldownReduction_C::GetDefaultObj()
{
	static class UGE_Generic_AdrenalineRush_CooldownReduction_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Generic_AdrenalineRush_CooldownReduction_C*>(UGE_Generic_AdrenalineRush_CooldownReduction_C::StaticClass()->DefaultObject);

	return Default;
}

}


