#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ZT_ChallengeTheHorde_Canny_L.BP_ZT_ChallengeTheHorde_Canny_L_C
// (None)

class UClass* UBP_ZT_ChallengeTheHorde_Canny_L_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ZT_ChallengeTheHorde_Canny_L_C");

	return Clss;
}


// BP_ZT_ChallengeTheHorde_Canny_L_C BP_ZT_ChallengeTheHorde_Canny_L.Default__BP_ZT_ChallengeTheHorde_Canny_L_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ZT_ChallengeTheHorde_Canny_L_C* UBP_ZT_ChallengeTheHorde_Canny_L_C::GetDefaultObj()
{
	static class UBP_ZT_ChallengeTheHorde_Canny_L_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ZT_ChallengeTheHorde_Canny_L_C*>(UBP_ZT_ChallengeTheHorde_Canny_L_C::StaticClass()->DefaultObject);

	return Default;
}

}


