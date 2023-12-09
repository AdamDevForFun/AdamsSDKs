#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AthenaInventoryDragDrop.AthenaInventoryDragDrop_C
// (None)

class UClass* UAthenaInventoryDragDrop_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaInventoryDragDrop_C");

	return Clss;
}


// AthenaInventoryDragDrop_C AthenaInventoryDragDrop.Default__AthenaInventoryDragDrop_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthenaInventoryDragDrop_C* UAthenaInventoryDragDrop_C::GetDefaultObj()
{
	static class UAthenaInventoryDragDrop_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaInventoryDragDrop_C*>(UAthenaInventoryDragDrop_C::StaticClass()->DefaultObject);

	return Default;
}

}


