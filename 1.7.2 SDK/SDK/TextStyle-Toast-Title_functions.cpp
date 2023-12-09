#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Toast-Title.TextStyle-Toast-Title_C
// (None)

class UClass* UTextStyleMinusToastMinusTitle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Toast-Title_C");

	return Clss;
}


// TextStyle-Toast-Title_C TextStyle-Toast-Title.Default__TextStyle-Toast-Title_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusToastMinusTitle_C* UTextStyleMinusToastMinusTitle_C::GetDefaultObj()
{
	static class UTextStyleMinusToastMinusTitle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusToastMinusTitle_C*>(UTextStyleMinusToastMinusTitle_C::StaticClass()->DefaultObject);

	return Default;
}

}


