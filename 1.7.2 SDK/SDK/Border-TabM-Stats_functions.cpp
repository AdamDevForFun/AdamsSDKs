#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Border-TabM-Stats.Border-TabM-Stats_C
// (None)

class UClass* UBorderMinusTabMMinusStats_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Border-TabM-Stats_C");

	return Clss;
}


// Border-TabM-Stats_C Border-TabM-Stats.Default__Border-TabM-Stats_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBorderMinusTabMMinusStats_C* UBorderMinusTabMMinusStats_C::GetDefaultObj()
{
	static class UBorderMinusTabMMinusStats_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBorderMinusTabMMinusStats_C*>(UBorderMinusTabMMinusStats_C::StaticClass()->DefaultObject);

	return Default;
}

}


