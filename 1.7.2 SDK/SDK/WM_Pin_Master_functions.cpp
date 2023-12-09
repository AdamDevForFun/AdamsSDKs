#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WM_Pin_Master.WM_Pin_Master_C
// (Actor)

class UClass* AWM_Pin_Master_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WM_Pin_Master_C");

	return Clss;
}


// WM_Pin_Master_C WM_Pin_Master.Default__WM_Pin_Master_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AWM_Pin_Master_C* AWM_Pin_Master_C::GetDefaultObj()
{
	static class AWM_Pin_Master_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AWM_Pin_Master_C*>(AWM_Pin_Master_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WM_Pin_Master.WM_Pin_Master_C.UpdateSelectionState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void AWM_Pin_Master_C::UpdateSelectionState(bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WM_Pin_Master_C", "UpdateSelectionState");

	Params::AWM_Pin_Master_C_UpdateSelectionState_Params Parms{};

	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WM_Pin_Master.WM_Pin_Master_C.OnQuestsCompleted
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFortQuestItem*>      QuestItems                                                       (Parm, OutParm, ZeroConstructor, ReferenceParm)

void AWM_Pin_Master_C::OnQuestsCompleted(TArray<class UFortQuestItem*>& QuestItems)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WM_Pin_Master_C", "OnQuestsCompleted");

	Params::AWM_Pin_Master_C_OnQuestsCompleted_Params Parms{};

	Parms.QuestItems = QuestItems;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WM_Pin_Master.WM_Pin_Master_C.OnTheaterSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      TheaterId                                                        (Parm, ZeroConstructor, HasGetValueTypeHash)

void AWM_Pin_Master_C::OnTheaterSelected(const class FString& TheaterId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WM_Pin_Master_C", "OnTheaterSelected");

	Params::AWM_Pin_Master_C_OnTheaterSelected_Params Parms{};

	Parms.TheaterId = TheaterId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WM_Pin_Master.WM_Pin_Master_C.OnSetPreviewedSceneTheater
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      PreviewedTheaterId                                               (Parm, ZeroConstructor, HasGetValueTypeHash)

void AWM_Pin_Master_C::OnSetPreviewedSceneTheater(const class FString& PreviewedTheaterId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WM_Pin_Master_C", "OnSetPreviewedSceneTheater");

	Params::AWM_Pin_Master_C_OnSetPreviewedSceneTheater_Params Parms{};

	Parms.PreviewedTheaterId = PreviewedTheaterId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WM_Pin_Master.WM_Pin_Master_C.InitializeContextEvents
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestManager*           CallFunc_GetQuestManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AWM_Pin_Master_C::InitializeContextEvents(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue3, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WM_Pin_Master_C", "InitializeContextEvents");

	Params::AWM_Pin_Master_C_InitializeContextEvents_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.CallFunc_GetContext_ReturnValue3 = CallFunc_GetContext_ReturnValue3;
	Parms.CallFunc_GetQuestManager_ReturnValue = CallFunc_GetQuestManager_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WM_Pin_Master.WM_Pin_Master_C.UpdateVisuals
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_CanAccessPin_Accessible                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void AWM_Pin_Master_C::UpdateVisuals(bool CallFunc_CanAccessPin_Accessible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WM_Pin_Master_C", "UpdateVisuals");

	Params::AWM_Pin_Master_C_UpdateVisuals_Params Parms{};

	Parms.CallFunc_CanAccessPin_Accessible = CallFunc_CanAccessPin_Accessible;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WM_Pin_Master.WM_Pin_Master_C.GetRequiredText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        RequirementText                                                  (Parm, OutParm)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortTheaterMapData         CallFunc_GetTheaterData_OutTheaterData                           (None)
// bool                               CallFunc_GetTheaterData_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetRequirementText_ReturnValue                          (None)

void AWM_Pin_Master_C::GetRequiredText(class FText* RequirementText, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue2, const struct FFortTheaterMapData& CallFunc_GetTheaterData_OutTheaterData, bool CallFunc_GetTheaterData_ReturnValue, class FText CallFunc_GetRequirementText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WM_Pin_Master_C", "GetRequiredText");

	Params::AWM_Pin_Master_C_GetRequiredText_Params Parms{};

	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_GetTheaterData_OutTheaterData = CallFunc_GetTheaterData_OutTheaterData;
	Parms.CallFunc_GetTheaterData_ReturnValue = CallFunc_GetTheaterData_ReturnValue;
	Parms.CallFunc_GetRequirementText_ReturnValue = CallFunc_GetRequirementText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (RequirementText != nullptr)
		*RequirementText = Parms.RequirementText;

}


// Function WM_Pin_Master.WM_Pin_Master_C.CanAccessPin
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Accessible                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortTheaterMapData         CallFunc_GetTheaterData_OutTheaterData                           (None)
// bool                               CallFunc_GetTheaterData_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       K2Node_DynamicCast_AsFort_Player_Controller                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsRequirementsMet_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void AWM_Pin_Master_C::CanAccessPin(bool* Accessible, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, const struct FFortTheaterMapData& CallFunc_GetTheaterData_OutTheaterData, bool CallFunc_GetTheaterData_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsRequirementsMet_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WM_Pin_Master_C", "CanAccessPin");

	Params::AWM_Pin_Master_C_CanAccessPin_Params Parms{};

	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetTheaterData_OutTheaterData = CallFunc_GetTheaterData_OutTheaterData;
	Parms.CallFunc_GetTheaterData_ReturnValue = CallFunc_GetTheaterData_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller = K2Node_DynamicCast_AsFort_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsRequirementsMet_ReturnValue = CallFunc_IsRequirementsMet_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Accessible != nullptr)
		*Accessible = Parms.Accessible;

}


// Function WM_Pin_Master.WM_Pin_Master_C.IsLeader
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Enabled                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocalPlayerPartyLeader_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void AWM_Pin_Master_C::IsLeader(bool* Enabled, class UFortPartyContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsLocalPlayerPartyLeader_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WM_Pin_Master_C", "IsLeader");

	Params::AWM_Pin_Master_C_IsLeader_Params Parms{};

	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsLocalPlayerPartyLeader_ReturnValue = CallFunc_IsLocalPlayerPartyLeader_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Enabled != nullptr)
		*Enabled = Parms.Enabled;

}


// Function WM_Pin_Master.WM_Pin_Master_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue2              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue3              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue4              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWM_Pin_Master_C::UserConstructionScript(float CallFunc_RandomFloatInRange_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue2, float CallFunc_RandomFloatInRange_ReturnValue2, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue3, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WM_Pin_Master_C", "UserConstructionScript");

	Params::AWM_Pin_Master_C_UserConstructionScript_Params Parms{};

	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue2 = CallFunc_CreateDynamicMaterialInstance_ReturnValue2;
	Parms.CallFunc_RandomFloatInRange_ReturnValue2 = CallFunc_RandomFloatInRange_ReturnValue2;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue3 = CallFunc_CreateDynamicMaterialInstance_ReturnValue3;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue4 = CallFunc_CreateDynamicMaterialInstance_ReturnValue4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WM_Pin_Master.WM_Pin_Master_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AWM_Pin_Master_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WM_Pin_Master_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WM_Pin_Master.WM_Pin_Master_C.HandleOnClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      TouchedActor                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        ButtonPressed                                                    (Parm, HasGetValueTypeHash)

void AWM_Pin_Master_C::HandleOnClicked(class AActor* TouchedActor, const struct FKey& ButtonPressed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WM_Pin_Master_C", "HandleOnClicked");

	Params::AWM_Pin_Master_C_HandleOnClicked_Params Parms{};

	Parms.TouchedActor = TouchedActor;
	Parms.ButtonPressed = ButtonPressed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WM_Pin_Master.WM_Pin_Master_C.HandleOnBeginCursorOver
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      TouchedActor                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWM_Pin_Master_C::HandleOnBeginCursorOver(class AActor* TouchedActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WM_Pin_Master_C", "HandleOnBeginCursorOver");

	Params::AWM_Pin_Master_C_HandleOnBeginCursorOver_Params Parms{};

	Parms.TouchedActor = TouchedActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WM_Pin_Master.WM_Pin_Master_C.HandleOnEndCursorOver
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      TouchedActor                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWM_Pin_Master_C::HandleOnEndCursorOver(class AActor* TouchedActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WM_Pin_Master_C", "HandleOnEndCursorOver");

	Params::AWM_Pin_Master_C_HandleOnEndCursorOver_Params Parms{};

	Parms.TouchedActor = TouchedActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WM_Pin_Master.WM_Pin_Master_C.OnTheaterIdSet
// (Event, Public, BlueprintEvent)
// Parameters:

void AWM_Pin_Master_C::OnTheaterIdSet()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WM_Pin_Master_C", "OnTheaterIdSet");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WM_Pin_Master.WM_Pin_Master_C.ExecuteUbergraph_WM_Pin_Master
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_TouchedActor3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_CustomEvent_ButtonPressed                                 (HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_TouchedActor2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_TouchedActor                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWM_Pin_Master_C::ExecuteUbergraph_WM_Pin_Master(int32 EntryPoint, class AActor* K2Node_CustomEvent_TouchedActor3, const struct FKey& K2Node_CustomEvent_ButtonPressed, class AActor* K2Node_CustomEvent_TouchedActor2, class AActor* K2Node_CustomEvent_TouchedActor, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WM_Pin_Master_C", "ExecuteUbergraph_WM_Pin_Master");

	Params::AWM_Pin_Master_C_ExecuteUbergraph_WM_Pin_Master_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_TouchedActor3 = K2Node_CustomEvent_TouchedActor3;
	Parms.K2Node_CustomEvent_ButtonPressed = K2Node_CustomEvent_ButtonPressed;
	Parms.K2Node_CustomEvent_TouchedActor2 = K2Node_CustomEvent_TouchedActor2;
	Parms.K2Node_CustomEvent_TouchedActor = K2Node_CustomEvent_TouchedActor;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


