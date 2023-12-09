#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AthenaWatchers.AthenaWatchers_C
// (None)

class UClass* UAthenaWatchers_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaWatchers_C");

	return Clss;
}


// AthenaWatchers_C AthenaWatchers.Default__AthenaWatchers_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthenaWatchers_C* UAthenaWatchers_C::GetDefaultObj()
{
	static class UAthenaWatchers_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaWatchers_C*>(UAthenaWatchers_C::StaticClass()->DefaultObject);

	return Default;
}

}


