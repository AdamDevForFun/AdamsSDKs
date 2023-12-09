#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Athena_Tree_Medium_03_.Athena_Tree_Medium_03__C
// (Actor)

class UClass* AAthena_Tree_Medium_03__C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Athena_Tree_Medium_03__C");

	return Clss;
}


// Athena_Tree_Medium_03__C Athena_Tree_Medium_03_.Default__Athena_Tree_Medium_03__C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AAthena_Tree_Medium_03__C* AAthena_Tree_Medium_03__C::GetDefaultObj()
{
	static class AAthena_Tree_Medium_03__C* Default = nullptr;

	if (!Default)
		Default = static_cast<AAthena_Tree_Medium_03__C*>(AAthena_Tree_Medium_03__C::StaticClass()->DefaultObject);

	return Default;
}

}


