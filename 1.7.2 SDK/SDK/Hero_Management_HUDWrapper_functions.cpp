#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Hero_Management_HUDWrapper.Hero_Management_HUDWrapper_C
// (None)

class UClass* UHero_Management_HUDWrapper_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Hero_Management_HUDWrapper_C");

	return Clss;
}


// Hero_Management_HUDWrapper_C Hero_Management_HUDWrapper.Default__Hero_Management_HUDWrapper_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHero_Management_HUDWrapper_C* UHero_Management_HUDWrapper_C::GetDefaultObj()
{
	static class UHero_Management_HUDWrapper_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHero_Management_HUDWrapper_C*>(UHero_Management_HUDWrapper_C::StaticClass()->DefaultObject);

	return Default;
}

}


