#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FrontEndSettingsBP.FrontEndSettingsBP_C
// (Actor)

class UClass* AFrontEndSettingsBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FrontEndSettingsBP_C");

	return Clss;
}


// FrontEndSettingsBP_C FrontEndSettingsBP.Default__FrontEndSettingsBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AFrontEndSettingsBP_C* AFrontEndSettingsBP_C::GetDefaultObj()
{
	static class AFrontEndSettingsBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AFrontEndSettingsBP_C*>(AFrontEndSettingsBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function FrontEndSettingsBP.FrontEndSettingsBP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AFrontEndSettingsBP_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FrontEndSettingsBP_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}

}


