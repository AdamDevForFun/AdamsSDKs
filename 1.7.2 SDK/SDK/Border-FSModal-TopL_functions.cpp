#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Border-FSModal-TopL.Border-FSModal-TopL_C
// (None)

class UClass* UBorderMinusFSModalMinusTopL_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Border-FSModal-TopL_C");

	return Clss;
}


// Border-FSModal-TopL_C Border-FSModal-TopL.Default__Border-FSModal-TopL_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBorderMinusFSModalMinusTopL_C* UBorderMinusFSModalMinusTopL_C::GetDefaultObj()
{
	static class UBorderMinusFSModalMinusTopL_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBorderMinusFSModalMinusTopL_C*>(UBorderMinusFSModalMinusTopL_C::StaticClass()->DefaultObject);

	return Default;
}

}


