#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass UIMapManager.UIMapManager_C
// (Actor)

class UClass* AUIMapManager_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UIMapManager_C");

	return Clss;
}


// UIMapManager_C UIMapManager.Default__UIMapManager_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AUIMapManager_C* AUIMapManager_C::GetDefaultObj()
{
	static class AUIMapManager_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AUIMapManager_C*>(AUIMapManager_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UIMapManager.UIMapManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AUIMapManager_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIMapManager_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}

}


