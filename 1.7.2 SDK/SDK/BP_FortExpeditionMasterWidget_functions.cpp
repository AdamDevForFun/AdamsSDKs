#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C
// (None)

class UClass* UBP_FortExpeditionMasterWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_FortExpeditionMasterWidget_C");

	return Clss;
}


// BP_FortExpeditionMasterWidget_C BP_FortExpeditionMasterWidget.Default__BP_FortExpeditionMasterWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_FortExpeditionMasterWidget_C* UBP_FortExpeditionMasterWidget_C::GetDefaultObj()
{
	static class UBP_FortExpeditionMasterWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_FortExpeditionMasterWidget_C*>(UBP_FortExpeditionMasterWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C.HandleSortExpeditionListAction
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PassThrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_Add_ByteByte_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_ByteByte_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_FortExpeditionMasterWidget_C::HandleSortExpeditionListAction(bool* PassThrough, uint8 CallFunc_Add_ByteByte_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, bool CallFunc_Greater_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FortExpeditionMasterWidget_C", "HandleSortExpeditionListAction");

	Params::UBP_FortExpeditionMasterWidget_C_HandleSortExpeditionListAction_Params Parms{};

	Parms.CallFunc_Add_ByteByte_ReturnValue = CallFunc_Add_ByteByte_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.CallFunc_Greater_ByteByte_ReturnValue = CallFunc_Greater_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (PassThrough != nullptr)
		*PassThrough = Parms.PassThrough;

}


// Function BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C.Disable Input Action
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle         InputActionRow                                                   (Parm, NoDestructor)

void UBP_FortExpeditionMasterWidget_C::Disable_Input_Action(const struct FDataTableRowHandle& InputActionRow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FortExpeditionMasterWidget_C", "Disable Input Action");

	Params::UBP_FortExpeditionMasterWidget_C_Disable_Input_Action_Params Parms{};

	Parms.InputActionRow = InputActionRow;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C.HandleCollectExpeditionAction
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PassThrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_FortExpeditionMasterWidget_C::HandleCollectExpeditionAction(bool* PassThrough)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FortExpeditionMasterWidget_C", "HandleCollectExpeditionAction");

	Params::UBP_FortExpeditionMasterWidget_C_HandleCollectExpeditionAction_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (PassThrough != nullptr)
		*PassThrough = Parms.PassThrough;

}


// Function BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C.HandleAbandonExpeditionAction
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PassThrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_FortExpeditionMasterWidget_C::HandleAbandonExpeditionAction(bool* PassThrough)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FortExpeditionMasterWidget_C", "HandleAbandonExpeditionAction");

	Params::UBP_FortExpeditionMasterWidget_C_HandleAbandonExpeditionAction_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (PassThrough != nullptr)
		*PassThrough = Parms.PassThrough;

}


// Function BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C.HandleBuildExpeditionAction
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PassThrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HandleBuildExpeditionAction_PassThrough                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_FortExpeditionMasterWidget_C::HandleBuildExpeditionAction(bool* PassThrough, bool CallFunc_HandleBuildExpeditionAction_PassThrough)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FortExpeditionMasterWidget_C", "HandleBuildExpeditionAction");

	Params::UBP_FortExpeditionMasterWidget_C_HandleBuildExpeditionAction_Params Parms{};

	Parms.CallFunc_HandleBuildExpeditionAction_PassThrough = CallFunc_HandleBuildExpeditionAction_PassThrough;

	UObject::ProcessEvent(Func, &Parms);

	if (PassThrough != nullptr)
		*PassThrough = Parms.PassThrough;

}


// Function BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C.Present Reward UI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_FortExpeditionMasterWidget_C::Present_Reward_UI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FortExpeditionMasterWidget_C", "Present Reward UI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C.Show Input Action
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle         InputActionRow                                                   (Parm, NoDestructor)

void UBP_FortExpeditionMasterWidget_C::Show_Input_Action(const struct FDataTableRowHandle& InputActionRow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FortExpeditionMasterWidget_C", "Show Input Action");

	Params::UBP_FortExpeditionMasterWidget_C_Show_Input_Action_Params Parms{};

	Parms.InputActionRow = InputActionRow;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C.Hide Input Action
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle         InputActionRow                                                   (Parm, NoDestructor)

void UBP_FortExpeditionMasterWidget_C::Hide_Input_Action(const struct FDataTableRowHandle& InputActionRow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FortExpeditionMasterWidget_C", "Hide Input Action");

	Params::UBP_FortExpeditionMasterWidget_C_Hide_Input_Action_Params Parms{};

	Parms.InputActionRow = InputActionRow;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C.Update Master Widget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_AreAnyExpeditionsComplete_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_FortExpeditionMasterWidget_C::Update_Master_Widget(bool CallFunc_AreAnyExpeditionsComplete_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FortExpeditionMasterWidget_C", "Update Master Widget");

	Params::UBP_FortExpeditionMasterWidget_C_Update_Master_Widget_Params Parms{};

	Parms.CallFunc_AreAnyExpeditionsComplete_ReturnValue = CallFunc_AreAnyExpeditionsComplete_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C.Setup Bindings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)

void UBP_FortExpeditionMasterWidget_C::Setup_Bindings(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FortExpeditionMasterWidget_C", "Setup Bindings");

	Params::UBP_FortExpeditionMasterWidget_C_Setup_Bindings_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C.Setup Input Action Handlers
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate4                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate5                            (ZeroConstructor, NoDestructor)

void UBP_FortExpeditionMasterWidget_C::Setup_Input_Action_Handlers(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FortExpeditionMasterWidget_C", "Setup Input Action Handlers");

	Params::UBP_FortExpeditionMasterWidget_C_Setup_Input_Action_Handlers_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.K2Node_CreateDelegate_OutputDelegate4 = K2Node_CreateDelegate_OutputDelegate4;
	Parms.K2Node_CreateDelegate_OutputDelegate5 = K2Node_CreateDelegate_OutputDelegate5;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C.Handle Back
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PassThrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FortExpeditionMasterWidget_C::Handle_Back(bool* PassThrough, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FortExpeditionMasterWidget_C", "Handle Back");

	Params::UBP_FortExpeditionMasterWidget_C_Handle_Back_Params Parms{};

	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (PassThrough != nullptr)
		*PassThrough = Parms.PassThrough;

}


// Function BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UBP_FortExpeditionMasterWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FortExpeditionMasterWidget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UBP_FortExpeditionMasterWidget_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FortExpeditionMasterWidget_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C.HandleAllCompletedExpeditionsCollected
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_FortExpeditionMasterWidget_C::HandleAllCompletedExpeditionsCollected()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FortExpeditionMasterWidget_C", "HandleAllCompletedExpeditionsCollected");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C.HACK_OnActivate_UpdateMasterWidget
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_FortExpeditionMasterWidget_C::HACK_OnActivate_UpdateMasterWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FortExpeditionMasterWidget_C", "HACK_OnActivate_UpdateMasterWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBP_FortExpeditionMasterWidget_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FortExpeditionMasterWidget_C", "OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C.ExecuteUbergraph_BP_FortExpeditionMasterWidget
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue2                        (NoDestructor)

void UBP_FortExpeditionMasterWidget_C::ExecuteUbergraph_BP_FortExpeditionMasterWidget(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FortExpeditionMasterWidget_C", "ExecuteUbergraph_BP_FortExpeditionMasterWidget");

	Params::UBP_FortExpeditionMasterWidget_C_ExecuteUbergraph_BP_FortExpeditionMasterWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue2 = CallFunc_K2_SetTimerDelegate_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}

}


