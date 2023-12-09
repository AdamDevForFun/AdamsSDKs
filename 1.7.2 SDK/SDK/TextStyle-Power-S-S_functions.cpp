#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Power-S-S.TextStyle-Power-S-S_C
// (None)

class UClass* UTextStyleMinusPowerMinusSMinusS_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Power-S-S_C");

	return Clss;
}


// TextStyle-Power-S-S_C TextStyle-Power-S-S.Default__TextStyle-Power-S-S_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusPowerMinusSMinusS_C* UTextStyleMinusPowerMinusSMinusS_C::GetDefaultObj()
{
	static class UTextStyleMinusPowerMinusSMinusS_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusPowerMinusSMinusS_C*>(UTextStyleMinusPowerMinusSMinusS_C::StaticClass()->DefaultObject);

	return Default;
}

}


