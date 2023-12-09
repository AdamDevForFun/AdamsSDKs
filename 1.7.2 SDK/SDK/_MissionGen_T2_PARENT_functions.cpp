#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass _MissionGen_T2_PARENT._MissionGen_T2_PARENT_C
// (None)

class UClass* U_MissionGen_T2_PARENT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("_MissionGen_T2_PARENT_C");

	return Clss;
}


// _MissionGen_T2_PARENT_C _MissionGen_T2_PARENT.Default___MissionGen_T2_PARENT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class U_MissionGen_T2_PARENT_C* U_MissionGen_T2_PARENT_C::GetDefaultObj()
{
	static class U_MissionGen_T2_PARENT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<U_MissionGen_T2_PARENT_C*>(U_MissionGen_T2_PARENT_C::StaticClass()->DefaultObject);

	return Default;
}

}


