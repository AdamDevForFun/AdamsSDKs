#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Tree_Bush_1a.Tree_Bush_1a_C
// (Actor)

class UClass* ATree_Bush_1a_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Tree_Bush_1a_C");

	return Clss;
}


// Tree_Bush_1a_C Tree_Bush_1a.Default__Tree_Bush_1a_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATree_Bush_1a_C* ATree_Bush_1a_C::GetDefaultObj()
{
	static class ATree_Bush_1a_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATree_Bush_1a_C*>(ATree_Bush_1a_C::StaticClass()->DefaultObject);

	return Default;
}

}


