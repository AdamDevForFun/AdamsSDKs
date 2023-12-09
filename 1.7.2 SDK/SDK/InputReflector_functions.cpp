#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass InputReflector.InputReflector_C
// (None)

class UClass* UInputReflector_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InputReflector_C");

	return Clss;
}


// InputReflector_C InputReflector.Default__InputReflector_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UInputReflector_C* UInputReflector_C::GetDefaultObj()
{
	static class UInputReflector_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UInputReflector_C*>(UInputReflector_C::StaticClass()->DefaultObject);

	return Default;
}


// Function InputReflector.InputReflector_C.OnButtonAdded
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class UCommonButton*               AddedButton                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCommonInputActionHandlerDataData                                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor)

void UInputReflector_C::OnButtonAdded(class UCommonButton* AddedButton, struct FCommonInputActionHandlerData& Data)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InputReflector_C", "OnButtonAdded");

	Params::UInputReflector_C_OnButtonAdded_Params Parms{};

	Parms.AddedButton = AddedButton;
	Parms.Data = Data;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InputReflector.InputReflector_C.ClearButtons
// (Event, Public, BlueprintEvent)
// Parameters:

void UInputReflector_C::ClearButtons()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InputReflector_C", "ClearButtons");



	UObject::ProcessEvent(Func, nullptr);

}


// Function InputReflector.InputReflector_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UInputReflector_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InputReflector_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function InputReflector.InputReflector_C.ExecuteUbergraph_InputReflector
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_Event_AddedButton                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCommonInputActionHandlerDataK2Node_Event_Data                                                (ConstParm, NoDestructor)
// class UIconTextButton_C*           K2Node_DynamicCast_AsIcon_Text_Button                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UHorizontalBoxSlot*          CallFunc_AddChildToHorizontalBox_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInputReflector_C::ExecuteUbergraph_InputReflector(int32 EntryPoint, class UCommonButton* K2Node_Event_AddedButton, const struct FCommonInputActionHandlerData& K2Node_Event_Data, class UIconTextButton_C* K2Node_DynamicCast_AsIcon_Text_Button, bool K2Node_DynamicCast_bSuccess, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InputReflector_C", "ExecuteUbergraph_InputReflector");

	Params::UInputReflector_C_ExecuteUbergraph_InputReflector_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_AddedButton = K2Node_Event_AddedButton;
	Parms.K2Node_Event_Data = K2Node_Event_Data;
	Parms.K2Node_DynamicCast_AsIcon_Text_Button = K2Node_DynamicCast_AsIcon_Text_Button;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_AddChildToHorizontalBox_ReturnValue = CallFunc_AddChildToHorizontalBox_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


