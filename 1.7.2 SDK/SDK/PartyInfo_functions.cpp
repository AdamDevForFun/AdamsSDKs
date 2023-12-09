#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass PartyInfo.PartyInfo_C
// (None)

class UClass* UPartyInfo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PartyInfo_C");

	return Clss;
}


// PartyInfo_C PartyInfo.Default__PartyInfo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPartyInfo_C* UPartyInfo_C::GetDefaultObj()
{
	static class UPartyInfo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPartyInfo_C*>(UPartyInfo_C::StaticClass()->DefaultObject);

	return Default;
}

}


