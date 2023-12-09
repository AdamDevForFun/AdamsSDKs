#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NeoTilted_BusStop.NeoTilted_BusStop_C
// (Actor)

class UClass* ANeoTilted_BusStop_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NeoTilted_BusStop_C");

	return Clss;
}


// NeoTilted_BusStop_C NeoTilted_BusStop.Default__NeoTilted_BusStop_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ANeoTilted_BusStop_C* ANeoTilted_BusStop_C::GetDefaultObj()
{
	static class ANeoTilted_BusStop_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ANeoTilted_BusStop_C*>(ANeoTilted_BusStop_C::StaticClass()->DefaultObject);

	return Default;
}

}


