#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Base-XS-LightGray.TextStyle-Base-XS-LightGray_C
// (None)

class UClass* UTextStyleMinusBaseMinusXSMinusLightGray_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Base-XS-LightGray_C");

	return Clss;
}


// TextStyle-Base-XS-LightGray_C TextStyle-Base-XS-LightGray.Default__TextStyle-Base-XS-LightGray_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusBaseMinusXSMinusLightGray_C* UTextStyleMinusBaseMinusXSMinusLightGray_C::GetDefaultObj()
{
	static class UTextStyleMinusBaseMinusXSMinusLightGray_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusBaseMinusXSMinusLightGray_C*>(UTextStyleMinusBaseMinusXSMinusLightGray_C::StaticClass()->DefaultObject);

	return Default;
}

}


