#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Border-ModalHeader-Recycle.Border-ModalHeader-Recycle_C
// (None)

class UClass* UBorderMinusModalHeaderMinusRecycle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Border-ModalHeader-Recycle_C");

	return Clss;
}


// Border-ModalHeader-Recycle_C Border-ModalHeader-Recycle.Default__Border-ModalHeader-Recycle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBorderMinusModalHeaderMinusRecycle_C* UBorderMinusModalHeaderMinusRecycle_C::GetDefaultObj()
{
	static class UBorderMinusModalHeaderMinusRecycle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBorderMinusModalHeaderMinusRecycle_C*>(UBorderMinusModalHeaderMinusRecycle_C::StaticClass()->DefaultObject);

	return Default;
}

}


