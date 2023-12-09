#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Border-ItemDetailsBG.Border-ItemDetailsBG_C
// (None)

class UClass* UBorderMinusItemDetailsBG_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Border-ItemDetailsBG_C");

	return Clss;
}


// Border-ItemDetailsBG_C Border-ItemDetailsBG.Default__Border-ItemDetailsBG_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBorderMinusItemDetailsBG_C* UBorderMinusItemDetailsBG_C::GetDefaultObj()
{
	static class UBorderMinusItemDetailsBG_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBorderMinusItemDetailsBG_C*>(UBorderMinusItemDetailsBG_C::StaticClass()->DefaultObject);

	return Default;
}

}


