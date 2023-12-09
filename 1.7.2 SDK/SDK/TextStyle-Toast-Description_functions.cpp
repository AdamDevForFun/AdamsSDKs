#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Toast-Description.TextStyle-Toast-Description_C
// (None)

class UClass* UTextStyleMinusToastMinusDescription_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Toast-Description_C");

	return Clss;
}


// TextStyle-Toast-Description_C TextStyle-Toast-Description.Default__TextStyle-Toast-Description_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusToastMinusDescription_C* UTextStyleMinusToastMinusDescription_C::GetDefaultObj()
{
	static class UTextStyleMinusToastMinusDescription_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusToastMinusDescription_C*>(UTextStyleMinusToastMinusDescription_C::StaticClass()->DefaultObject);

	return Default;
}

}


