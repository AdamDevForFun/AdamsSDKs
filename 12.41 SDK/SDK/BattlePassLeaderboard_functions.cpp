#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BattlePassLeaderboard.BattlePassLeaderboard_C
// (None)

class UClass* UBattlePassLeaderboard_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattlePassLeaderboard_C");

	return Clss;
}


// BattlePassLeaderboard_C BattlePassLeaderboard.Default__BattlePassLeaderboard_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattlePassLeaderboard_C* UBattlePassLeaderboard_C::GetDefaultObj()
{
	static class UBattlePassLeaderboard_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattlePassLeaderboard_C*>(UBattlePassLeaderboard_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BattlePassLeaderboard.BattlePassLeaderboard_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UBattlePassLeaderboard_C::BP_GetDesiredFocusTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassLeaderboard_C", "BP_GetDesiredFocusTarget");

	Params::UBattlePassLeaderboard_C_BP_GetDesiredFocusTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattlePassLeaderboard.BattlePassLeaderboard_C.HandleBack
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PassThrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattlePassLeaderboard_C::HandleBack(bool* PassThrough)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassLeaderboard_C", "HandleBack");

	Params::UBattlePassLeaderboard_C_HandleBack_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (PassThrough != nullptr)
		*PassThrough = Parms.PassThrough;

}


// Function BattlePassLeaderboard.BattlePassLeaderboard_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBattlePassLeaderboard_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassLeaderboard_C", "BP_OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattlePassLeaderboard.BattlePassLeaderboard_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattlePassLeaderboard_C::BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassLeaderboard_C", "BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");

	Params::UBattlePassLeaderboard_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassLeaderboard.BattlePassLeaderboard_C.ExecuteUbergraph_BattlePassLeaderboard
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HandleBack_PassThrough                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattlePassLeaderboard_C::ExecuteUbergraph_BattlePassLeaderboard(int32 EntryPoint, class UCommonButton* K2Node_ComponentBoundEvent_Button, bool CallFunc_HandleBack_PassThrough)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassLeaderboard_C", "ExecuteUbergraph_BattlePassLeaderboard");

	Params::UBattlePassLeaderboard_C_ExecuteUbergraph_BattlePassLeaderboard_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_HandleBack_PassThrough = CallFunc_HandleBack_PassThrough;

	UObject::ProcessEvent(Func, &Parms);

}

}


