#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GET_MoveSpeed.GET_MoveSpeed_C
// (None)

class UClass* UGET_MoveSpeed_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GET_MoveSpeed_C");

	return Clss;
}


// GET_MoveSpeed_C GET_MoveSpeed.Default__GET_MoveSpeed_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGET_MoveSpeed_C* UGET_MoveSpeed_C::GetDefaultObj()
{
	static class UGET_MoveSpeed_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGET_MoveSpeed_C*>(UGET_MoveSpeed_C::StaticClass()->DefaultObject);

	return Default;
}

}


