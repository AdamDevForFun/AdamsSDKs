#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_Assault_Surgical_Athena_TopTier.B_Assault_Surgical_Athena_TopTier_C
// (Actor)

class UClass* AB_Assault_Surgical_Athena_TopTier_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_Assault_Surgical_Athena_TopTier_C");

	return Clss;
}


// B_Assault_Surgical_Athena_TopTier_C B_Assault_Surgical_Athena_TopTier.Default__B_Assault_Surgical_Athena_TopTier_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AB_Assault_Surgical_Athena_TopTier_C* AB_Assault_Surgical_Athena_TopTier_C::GetDefaultObj()
{
	static class AB_Assault_Surgical_Athena_TopTier_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AB_Assault_Surgical_Athena_TopTier_C*>(AB_Assault_Surgical_Athena_TopTier_C::StaticClass()->DefaultObject);

	return Default;
}

}


