#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GCN_NPC_Lightning.GCN_NPC_Lightning_C
// (Actor)

class UClass* AGCN_NPC_Lightning_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GCN_NPC_Lightning_C");

	return Clss;
}


// GCN_NPC_Lightning_C GCN_NPC_Lightning.Default__GCN_NPC_Lightning_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGCN_NPC_Lightning_C* AGCN_NPC_Lightning_C::GetDefaultObj()
{
	static class AGCN_NPC_Lightning_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGCN_NPC_Lightning_C*>(AGCN_NPC_Lightning_C::StaticClass()->DefaultObject);

	return Default;
}

}


