#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Outlander_FragmentTeamSpeedBoost.GE_Outlander_FragmentTeamSpeedBoost_C
// (None)

class UClass* UGE_Outlander_FragmentTeamSpeedBoost_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Outlander_FragmentTeamSpeedBoost_C");

	return Clss;
}


// GE_Outlander_FragmentTeamSpeedBoost_C GE_Outlander_FragmentTeamSpeedBoost.Default__GE_Outlander_FragmentTeamSpeedBoost_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Outlander_FragmentTeamSpeedBoost_C* UGE_Outlander_FragmentTeamSpeedBoost_C::GetDefaultObj()
{
	static class UGE_Outlander_FragmentTeamSpeedBoost_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Outlander_FragmentTeamSpeedBoost_C*>(UGE_Outlander_FragmentTeamSpeedBoost_C::StaticClass()->DefaultObject);

	return Default;
}

}


