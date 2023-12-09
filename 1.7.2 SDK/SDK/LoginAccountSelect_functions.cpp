#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass LoginAccountSelect.LoginAccountSelect_C
// (None)

class UClass* ULoginAccountSelect_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LoginAccountSelect_C");

	return Clss;
}


// LoginAccountSelect_C LoginAccountSelect.Default__LoginAccountSelect_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULoginAccountSelect_C* ULoginAccountSelect_C::GetDefaultObj()
{
	static class ULoginAccountSelect_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULoginAccountSelect_C*>(ULoginAccountSelect_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LoginAccountSelect.LoginAccountSelect_C.BndEvt__EpicLoginButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULoginAccountSelect_C::BndEvt__EpicLoginButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoginAccountSelect_C", "BndEvt__EpicLoginButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");

	Params::ULoginAccountSelect_C_BndEvt__EpicLoginButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoginAccountSelect.LoginAccountSelect_C.BndEvt__PlayStationLoginButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULoginAccountSelect_C::BndEvt__PlayStationLoginButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoginAccountSelect_C", "BndEvt__PlayStationLoginButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");

	Params::ULoginAccountSelect_C_BndEvt__PlayStationLoginButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoginAccountSelect.LoginAccountSelect_C.BndEvt__XBoxLoginButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULoginAccountSelect_C::BndEvt__XBoxLoginButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoginAccountSelect_C", "BndEvt__XBoxLoginButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature");

	Params::ULoginAccountSelect_C_BndEvt__XBoxLoginButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoginAccountSelect.LoginAccountSelect_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void ULoginAccountSelect_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoginAccountSelect_C", "OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LoginAccountSelect.LoginAccountSelect_C.ExecuteUbergraph_LoginAccountSelect
// (None)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULoginAccountSelect_C::ExecuteUbergraph_LoginAccountSelect(int32 EntryPoint, class UCommonButton* K2Node_ComponentBoundEvent_Button3, class UCommonButton* K2Node_ComponentBoundEvent_Button2, class UCommonButton* K2Node_ComponentBoundEvent_Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoginAccountSelect_C", "ExecuteUbergraph_LoginAccountSelect");

	Params::ULoginAccountSelect_C_ExecuteUbergraph_LoginAccountSelect_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Button3 = K2Node_ComponentBoundEvent_Button3;
	Parms.K2Node_ComponentBoundEvent_Button2 = K2Node_ComponentBoundEvent_Button2;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;

	UObject::ProcessEvent(Func, &Parms);

}

}


