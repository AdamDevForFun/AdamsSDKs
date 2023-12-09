#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GCN_NPC_Fire.GCN_NPC_Fire_C
// (Actor)

class UClass* AGCN_NPC_Fire_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GCN_NPC_Fire_C");

	return Clss;
}


// GCN_NPC_Fire_C GCN_NPC_Fire.Default__GCN_NPC_Fire_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGCN_NPC_Fire_C* AGCN_NPC_Fire_C::GetDefaultObj()
{
	static class AGCN_NPC_Fire_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGCN_NPC_Fire_C*>(AGCN_NPC_Fire_C::StaticClass()->DefaultObject);

	return Default;
}

}


