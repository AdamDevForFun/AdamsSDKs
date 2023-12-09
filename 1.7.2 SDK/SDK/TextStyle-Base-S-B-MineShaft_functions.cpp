#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Base-S-B-MineShaft.TextStyle-Base-S-B-MineShaft_C
// (None)

class UClass* UTextStyleMinusBaseMinusSMinusBMinusMineShaft_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Base-S-B-MineShaft_C");

	return Clss;
}


// TextStyle-Base-S-B-MineShaft_C TextStyle-Base-S-B-MineShaft.Default__TextStyle-Base-S-B-MineShaft_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusBaseMinusSMinusBMinusMineShaft_C* UTextStyleMinusBaseMinusSMinusBMinusMineShaft_C::GetDefaultObj()
{
	static class UTextStyleMinusBaseMinusSMinusBMinusMineShaft_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusBaseMinusSMinusBMinusMineShaft_C*>(UTextStyleMinusBaseMinusSMinusBMinusMineShaft_C::StaticClass()->DefaultObject);

	return Default;
}

}


