#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass OutpostScreenCanEditRow.OutpostScreenCanEditRow_C
// (None)

class UClass* UOutpostScreenCanEditRow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OutpostScreenCanEditRow_C");

	return Clss;
}


// OutpostScreenCanEditRow_C OutpostScreenCanEditRow.Default__OutpostScreenCanEditRow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UOutpostScreenCanEditRow_C* UOutpostScreenCanEditRow_C::GetDefaultObj()
{
	static class UOutpostScreenCanEditRow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UOutpostScreenCanEditRow_C*>(UOutpostScreenCanEditRow_C::StaticClass()->DefaultObject);

	return Default;
}


// Function OutpostScreenCanEditRow.OutpostScreenCanEditRow_C.CenterWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOutpostScreenCanEditRow_C::CenterWidget(class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OutpostScreenCanEditRow_C", "CenterWidget");

	Params::UOutpostScreenCanEditRow_C_CenterWidget_Params Parms{};

	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OutpostScreenCanEditRow.OutpostScreenCanEditRow_C.Init
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerStateOutpost*     InPlayer                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerStateOutpost*     InOutpostOwner                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanEditOutpost_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UOutpostScreenCanEditRow_C::Init(class AFortPlayerStateOutpost* InPlayer, class AFortPlayerStateOutpost* InOutpostOwner, bool CallFunc_CanEditOutpost_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OutpostScreenCanEditRow_C", "Init");

	Params::UOutpostScreenCanEditRow_C_Init_Params Parms{};

	Parms.InPlayer = InPlayer;
	Parms.InOutpostOwner = InOutpostOwner;
	Parms.CallFunc_CanEditOutpost_ReturnValue = CallFunc_CanEditOutpost_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OutpostScreenCanEditRow.OutpostScreenCanEditRow_C.BndEvt__CanEditButton_K2Node_ComponentBoundEvent_43_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOutpostScreenCanEditRow_C::BndEvt__CanEditButton_K2Node_ComponentBoundEvent_43_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OutpostScreenCanEditRow_C", "BndEvt__CanEditButton_K2Node_ComponentBoundEvent_43_CommonButtonClicked__DelegateSignature");

	Params::UOutpostScreenCanEditRow_C_BndEvt__CanEditButton_K2Node_ComponentBoundEvent_43_CommonButtonClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OutpostScreenCanEditRow.OutpostScreenCanEditRow_C.ExecuteUbergraph_OutpostScreenCanEditRow
// (None)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetSelected_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOutpostScreenCanEditRow_C::ExecuteUbergraph_OutpostScreenCanEditRow(int32 EntryPoint, bool CallFunc_GetSelected_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OutpostScreenCanEditRow_C", "ExecuteUbergraph_OutpostScreenCanEditRow");

	Params::UOutpostScreenCanEditRow_C_ExecuteUbergraph_OutpostScreenCanEditRow_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetSelected_ReturnValue = CallFunc_GetSelected_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;

	UObject::ProcessEvent(Func, &Parms);

}

}


