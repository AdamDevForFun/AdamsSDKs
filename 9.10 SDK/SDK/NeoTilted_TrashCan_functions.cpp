#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NeoTilted_TrashCan.NeoTilted_TrashCan_C
// (Actor)

class UClass* ANeoTilted_TrashCan_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NeoTilted_TrashCan_C");

	return Clss;
}


// NeoTilted_TrashCan_C NeoTilted_TrashCan.Default__NeoTilted_TrashCan_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ANeoTilted_TrashCan_C* ANeoTilted_TrashCan_C::GetDefaultObj()
{
	static class ANeoTilted_TrashCan_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ANeoTilted_TrashCan_C*>(ANeoTilted_TrashCan_C::StaticClass()->DefaultObject);

	return Default;
}

}


