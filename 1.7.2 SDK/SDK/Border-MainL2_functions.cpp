#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Border-MainL2.Border-MainL2_C
// (None)

class UClass* UBorderMinusMainL2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Border-MainL2_C");

	return Clss;
}


// Border-MainL2_C Border-MainL2.Default__Border-MainL2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBorderMinusMainL2_C* UBorderMinusMainL2_C::GetDefaultObj()
{
	static class UBorderMinusMainL2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBorderMinusMainL2_C*>(UBorderMinusMainL2_C::StaticClass()->DefaultObject);

	return Default;
}

}


