#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Outlander_PhaseShiftClearCD_OLD.GE_Outlander_PhaseShiftClearCD_OLD_C
// (None)

class UClass* UGE_Outlander_PhaseShiftClearCD_OLD_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Outlander_PhaseShiftClearCD_OLD_C");

	return Clss;
}


// GE_Outlander_PhaseShiftClearCD_OLD_C GE_Outlander_PhaseShiftClearCD_OLD.Default__GE_Outlander_PhaseShiftClearCD_OLD_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Outlander_PhaseShiftClearCD_OLD_C* UGE_Outlander_PhaseShiftClearCD_OLD_C::GetDefaultObj()
{
	static class UGE_Outlander_PhaseShiftClearCD_OLD_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Outlander_PhaseShiftClearCD_OLD_C*>(UGE_Outlander_PhaseShiftClearCD_OLD_C::StaticClass()->DefaultObject);

	return Default;
}

}


