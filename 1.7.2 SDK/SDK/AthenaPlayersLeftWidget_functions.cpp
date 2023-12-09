#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AthenaPlayersLeftWidget.AthenaPlayersLeftWidget_C
// (None)

class UClass* UAthenaPlayersLeftWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaPlayersLeftWidget_C");

	return Clss;
}


// AthenaPlayersLeftWidget_C AthenaPlayersLeftWidget.Default__AthenaPlayersLeftWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthenaPlayersLeftWidget_C* UAthenaPlayersLeftWidget_C::GetDefaultObj()
{
	static class UAthenaPlayersLeftWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaPlayersLeftWidget_C*>(UAthenaPlayersLeftWidget_C::StaticClass()->DefaultObject);

	return Default;
}

}


