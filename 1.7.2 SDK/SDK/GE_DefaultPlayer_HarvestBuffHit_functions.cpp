#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_DefaultPlayer_HarvestBuffHit.GE_DefaultPlayer_HarvestBuffHit_C
// (None)

class UClass* UGE_DefaultPlayer_HarvestBuffHit_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_DefaultPlayer_HarvestBuffHit_C");

	return Clss;
}


// GE_DefaultPlayer_HarvestBuffHit_C GE_DefaultPlayer_HarvestBuffHit.Default__GE_DefaultPlayer_HarvestBuffHit_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_DefaultPlayer_HarvestBuffHit_C* UGE_DefaultPlayer_HarvestBuffHit_C::GetDefaultObj()
{
	static class UGE_DefaultPlayer_HarvestBuffHit_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_DefaultPlayer_HarvestBuffHit_C*>(UGE_DefaultPlayer_HarvestBuffHit_C::StaticClass()->DefaultObject);

	return Default;
}

}


