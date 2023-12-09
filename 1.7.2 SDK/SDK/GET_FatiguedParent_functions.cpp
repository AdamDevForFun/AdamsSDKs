#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GET_FatiguedParent.GET_FatiguedParent_C
// (None)

class UClass* UGET_FatiguedParent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GET_FatiguedParent_C");

	return Clss;
}


// GET_FatiguedParent_C GET_FatiguedParent.Default__GET_FatiguedParent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGET_FatiguedParent_C* UGET_FatiguedParent_C::GetDefaultObj()
{
	static class UGET_FatiguedParent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGET_FatiguedParent_C*>(UGET_FatiguedParent_C::StaticClass()->DefaultObject);

	return Default;
}

}


