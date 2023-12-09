#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LegacyButtonStyle-StarRating.LegacyButtonStyle-StarRating_C
// (None)

class UClass* ULegacyButtonStyleMinusStarRating_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LegacyButtonStyle-StarRating_C");

	return Clss;
}


// LegacyButtonStyle-StarRating_C LegacyButtonStyle-StarRating.Default__LegacyButtonStyle-StarRating_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULegacyButtonStyleMinusStarRating_C* ULegacyButtonStyleMinusStarRating_C::GetDefaultObj()
{
	static class ULegacyButtonStyleMinusStarRating_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULegacyButtonStyleMinusStarRating_C*>(ULegacyButtonStyleMinusStarRating_C::StaticClass()->DefaultObject);

	return Default;
}

}


