#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass LoginBackground.LoginBackground_C
// (None)

class UClass* ULoginBackground_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LoginBackground_C");

	return Clss;
}


// LoginBackground_C LoginBackground.Default__LoginBackground_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULoginBackground_C* ULoginBackground_C::GetDefaultObj()
{
	static class ULoginBackground_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULoginBackground_C*>(ULoginBackground_C::StaticClass()->DefaultObject);

	return Default;
}

}


