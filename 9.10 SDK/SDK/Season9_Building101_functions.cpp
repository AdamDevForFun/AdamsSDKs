#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Season9_Building101.Season9_Building101_C
// (Actor)

class UClass* ASeason9_Building101_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Season9_Building101_C");

	return Clss;
}


// Season9_Building101_C Season9_Building101.Default__Season9_Building101_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASeason9_Building101_C* ASeason9_Building101_C::GetDefaultObj()
{
	static class ASeason9_Building101_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASeason9_Building101_C*>(ASeason9_Building101_C::StaticClass()->DefaultObject);

	return Default;
}

}


