#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GET_VulnerableParent.GET_VulnerableParent_C
// (None)

class UClass* UGET_VulnerableParent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GET_VulnerableParent_C");

	return Clss;
}


// GET_VulnerableParent_C GET_VulnerableParent.Default__GET_VulnerableParent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGET_VulnerableParent_C* UGET_VulnerableParent_C::GetDefaultObj()
{
	static class UGET_VulnerableParent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGET_VulnerableParent_C*>(UGET_VulnerableParent_C::StaticClass()->DefaultObject);

	return Default;
}

}


