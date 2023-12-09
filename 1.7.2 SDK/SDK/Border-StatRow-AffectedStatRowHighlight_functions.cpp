#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Border-StatRow-AffectedStatRowHighlight.Border-StatRow-AffectedStatRowHighlight_C
// (None)

class UClass* UBorderMinusStatRowMinusAffectedStatRowHighlight_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Border-StatRow-AffectedStatRowHighlight_C");

	return Clss;
}


// Border-StatRow-AffectedStatRowHighlight_C Border-StatRow-AffectedStatRowHighlight.Default__Border-StatRow-AffectedStatRowHighlight_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBorderMinusStatRowMinusAffectedStatRowHighlight_C* UBorderMinusStatRowMinusAffectedStatRowHighlight_C::GetDefaultObj()
{
	static class UBorderMinusStatRowMinusAffectedStatRowHighlight_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBorderMinusStatRowMinusAffectedStatRowHighlight_C*>(UBorderMinusStatRowMinusAffectedStatRowHighlight_C::StaticClass()->DefaultObject);

	return Default;
}

}


