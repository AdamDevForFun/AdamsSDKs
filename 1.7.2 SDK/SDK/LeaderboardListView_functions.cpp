#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass LeaderboardListView.LeaderboardListView_C
// (None)

class UClass* ULeaderboardListView_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LeaderboardListView_C");

	return Clss;
}


// LeaderboardListView_C LeaderboardListView.Default__LeaderboardListView_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULeaderboardListView_C* ULeaderboardListView_C::GetDefaultObj()
{
	static class ULeaderboardListView_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULeaderboardListView_C*>(ULeaderboardListView_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LeaderboardListView.LeaderboardListView_C.FocusListView
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     CallFunc_GetItemAt_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetSelectedIndex_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULeaderboardListView_C::FocusListView(class UObject* CallFunc_GetItemAt_ReturnValue, bool CallFunc_SetSelectedIndex_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LeaderboardListView_C", "FocusListView");

	Params::ULeaderboardListView_C_FocusListView_Params Parms{};

	Parms.CallFunc_GetItemAt_ReturnValue = CallFunc_GetItemAt_ReturnValue;
	Parms.CallFunc_SetSelectedIndex_ReturnValue = CallFunc_SetSelectedIndex_ReturnValue;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


