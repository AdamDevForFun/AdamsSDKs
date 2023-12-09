#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Commando_QuickClip.GE_Commando_QuickClip_C
// (None)

class UClass* UGE_Commando_QuickClip_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Commando_QuickClip_C");

	return Clss;
}


// GE_Commando_QuickClip_C GE_Commando_QuickClip.Default__GE_Commando_QuickClip_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Commando_QuickClip_C* UGE_Commando_QuickClip_C::GetDefaultObj()
{
	static class UGE_Commando_QuickClip_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Commando_QuickClip_C*>(UGE_Commando_QuickClip_C::StaticClass()->DefaultObject);

	return Default;
}

}


