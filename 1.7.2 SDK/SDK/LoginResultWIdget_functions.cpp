#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass LoginResultWIdget.LoginResultWIdget_C
// (None)

class UClass* ULoginResultWIdget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LoginResultWIdget_C");

	return Clss;
}


// LoginResultWIdget_C LoginResultWIdget.Default__LoginResultWIdget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULoginResultWIdget_C* ULoginResultWIdget_C::GetDefaultObj()
{
	static class ULoginResultWIdget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULoginResultWIdget_C*>(ULoginResultWIdget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LoginResultWIdget.LoginResultWIdget_C.SetResultsData
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Title                                                            (Parm)
// bool                               bShowError                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Description                                                      (Parm)

void ULoginResultWIdget_C::SetResultsData(class FText Title, bool bShowError, class FText Description)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoginResultWIdget_C", "SetResultsData");

	Params::ULoginResultWIdget_C_SetResultsData_Params Parms{};

	Parms.Title = Title;
	Parms.bShowError = bShowError;
	Parms.Description = Description;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoginResultWIdget.LoginResultWIdget_C.SetDescription
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Description                                                      (Parm)

void ULoginResultWIdget_C::SetDescription(class FText Description)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoginResultWIdget_C", "SetDescription");

	Params::ULoginResultWIdget_C_SetDescription_Params Parms{};

	Parms.Description = Description;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoginResultWIdget.LoginResultWIdget_C.SetTitle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Title                                                            (Parm)
// bool                               bShowError                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      Temp_class_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULoginResultWIdget_C::SetTitle(class FText Title, bool bShowError, class UClass* Temp_class_Variable, class UClass* Temp_class_Variable2, bool Temp_bool_Variable, class UClass* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoginResultWIdget_C", "SetTitle");

	Params::ULoginResultWIdget_C_SetTitle_Params Parms{};

	Parms.Title = Title;
	Parms.bShowError = bShowError;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.Temp_class_Variable2 = Temp_class_Variable2;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoginResultWIdget.LoginResultWIdget_C.BndEvt__ContinueButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULoginResultWIdget_C::BndEvt__ContinueButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoginResultWIdget_C", "BndEvt__ContinueButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");

	Params::ULoginResultWIdget_C_BndEvt__ContinueButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoginResultWIdget.LoginResultWIdget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void ULoginResultWIdget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoginResultWIdget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LoginResultWIdget.LoginResultWIdget_C.ExecuteUbergraph_LoginResultWIdget
// (None)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasKeyboardFocus_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULoginResultWIdget_C::ExecuteUbergraph_LoginResultWIdget(int32 EntryPoint, class UCommonButton* K2Node_ComponentBoundEvent_Button, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, bool CallFunc_HasKeyboardFocus_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoginResultWIdget_C", "ExecuteUbergraph_LoginResultWIdget");

	Params::ULoginResultWIdget_C_ExecuteUbergraph_LoginResultWIdget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;
	Parms.CallFunc_HasKeyboardFocus_ReturnValue = CallFunc_HasKeyboardFocus_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoginResultWIdget.LoginResultWIdget_C.OnResultConfirmed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ULoginResultWIdget_C::OnResultConfirmed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoginResultWIdget_C", "OnResultConfirmed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


