#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_DefaultPlayer_HarvestBuff_T1.GE_DefaultPlayer_HarvestBuff_T1_C
// (None)

class UClass* UGE_DefaultPlayer_HarvestBuff_T1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_DefaultPlayer_HarvestBuff_T1_C");

	return Clss;
}


// GE_DefaultPlayer_HarvestBuff_T1_C GE_DefaultPlayer_HarvestBuff_T1.Default__GE_DefaultPlayer_HarvestBuff_T1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_DefaultPlayer_HarvestBuff_T1_C* UGE_DefaultPlayer_HarvestBuff_T1_C::GetDefaultObj()
{
	static class UGE_DefaultPlayer_HarvestBuff_T1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_DefaultPlayer_HarvestBuff_T1_C*>(UGE_DefaultPlayer_HarvestBuff_T1_C::StaticClass()->DefaultObject);

	return Default;
}

}


