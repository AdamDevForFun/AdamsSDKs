#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NeoTilted_Planter_Rectangle.NeoTilted_Planter_Rectangle_C
// (Actor)

class UClass* ANeoTilted_Planter_Rectangle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NeoTilted_Planter_Rectangle_C");

	return Clss;
}


// NeoTilted_Planter_Rectangle_C NeoTilted_Planter_Rectangle.Default__NeoTilted_Planter_Rectangle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ANeoTilted_Planter_Rectangle_C* ANeoTilted_Planter_Rectangle_C::GetDefaultObj()
{
	static class ANeoTilted_Planter_Rectangle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ANeoTilted_Planter_Rectangle_C*>(ANeoTilted_Planter_Rectangle_C::StaticClass()->DefaultObject);

	return Default;
}

}


