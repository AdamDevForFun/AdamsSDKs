#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class Account.OnlineAccountCommon
// (None)

class UClass* UOnlineAccountCommon::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OnlineAccountCommon");

	return Clss;
}


// OnlineAccountCommon Account.Default__OnlineAccountCommon
// (Public, ClassDefaultObject, ArchetypeObject)

class UOnlineAccountCommon* UOnlineAccountCommon::GetDefaultObj()
{
	static class UOnlineAccountCommon* Default = nullptr;

	if (!Default)
		Default = static_cast<UOnlineAccountCommon*>(UOnlineAccountCommon::StaticClass()->DefaultObject);

	return Default;
}

}


