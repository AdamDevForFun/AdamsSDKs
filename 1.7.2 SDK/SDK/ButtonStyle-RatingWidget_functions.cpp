#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-RatingWidget.ButtonStyle-RatingWidget_C
// (None)

class UClass* UButtonStyleMinusRatingWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-RatingWidget_C");

	return Clss;
}


// ButtonStyle-RatingWidget_C ButtonStyle-RatingWidget.Default__ButtonStyle-RatingWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusRatingWidget_C* UButtonStyleMinusRatingWidget_C::GetDefaultObj()
{
	static class UButtonStyleMinusRatingWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusRatingWidget_C*>(UButtonStyleMinusRatingWidget_C::StaticClass()->DefaultObject);

	return Default;
}

}


