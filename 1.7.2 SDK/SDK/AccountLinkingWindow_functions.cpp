#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AccountLinkingWindow.AccountLinkingWindow_C
// (None)

class UClass* UAccountLinkingWindow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AccountLinkingWindow_C");

	return Clss;
}


// AccountLinkingWindow_C AccountLinkingWindow.Default__AccountLinkingWindow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAccountLinkingWindow_C* UAccountLinkingWindow_C::GetDefaultObj()
{
	static class UAccountLinkingWindow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAccountLinkingWindow_C*>(UAccountLinkingWindow_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AccountLinkingWindow.AccountLinkingWindow_C.SetupLinkText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CallFunc_GetPlatformName_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue2                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAccountLinkingWindow_C::SetupLinkText(const class FString& CallFunc_GetPlatformName_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AccountLinkingWindow_C", "SetupLinkText");

	Params::UAccountLinkingWindow_C_SetupLinkText_Params Parms{};

	Parms.CallFunc_GetPlatformName_ReturnValue = CallFunc_GetPlatformName_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue2 = CallFunc_EqualEqual_StrStr_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AccountLinkingWindow.AccountLinkingWindow_C.HideLinkOptions
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAccountLinkingWindow_C::HideLinkOptions(enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AccountLinkingWindow_C", "HideLinkOptions");

	Params::UAccountLinkingWindow_C_HideLinkOptions_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AccountLinkingWindow.AccountLinkingWindow_C.SetLinkedAccountNeedsPurchase
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bInLinkedAccountNeedsPurchase                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAccountLinkingWindow_C::SetLinkedAccountNeedsPurchase(bool bInLinkedAccountNeedsPurchase)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AccountLinkingWindow_C", "SetLinkedAccountNeedsPurchase");

	Params::UAccountLinkingWindow_C_SetLinkedAccountNeedsPurchase_Params Parms{};

	Parms.bInLinkedAccountNeedsPurchase = bInLinkedAccountNeedsPurchase;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AccountLinkingWindow.AccountLinkingWindow_C.OnAccountNotCreated_2B6C467D495BF62E436C79B3550FE868
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAccountLinkingWindow_C::OnAccountNotCreated_2B6C467D495BF62E436C79B3550FE868()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AccountLinkingWindow_C", "OnAccountNotCreated_2B6C467D495BF62E436C79B3550FE868");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AccountLinkingWindow.AccountLinkingWindow_C.OnAccountCreatedButNotLinked_2B6C467D495BF62E436C79B3550FE868
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAccountLinkingWindow_C::OnAccountCreatedButNotLinked_2B6C467D495BF62E436C79B3550FE868()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AccountLinkingWindow_C", "OnAccountCreatedButNotLinked_2B6C467D495BF62E436C79B3550FE868");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AccountLinkingWindow.AccountLinkingWindow_C.OnAccountCreatedAndLinked_2B6C467D495BF62E436C79B3550FE868
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAccountLinkingWindow_C::OnAccountCreatedAndLinked_2B6C467D495BF62E436C79B3550FE868()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AccountLinkingWindow_C", "OnAccountCreatedAndLinked_2B6C467D495BF62E436C79B3550FE868");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AccountLinkingWindow.AccountLinkingWindow_C.OnNotPurchased_3B76089F4EB5000544C7BD8B10E707CF
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAccountLinkingWindow_C::OnNotPurchased_3B76089F4EB5000544C7BD8B10E707CF()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AccountLinkingWindow_C", "OnNotPurchased_3B76089F4EB5000544C7BD8B10E707CF");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AccountLinkingWindow.AccountLinkingWindow_C.OnPurchased_3B76089F4EB5000544C7BD8B10E707CF
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAccountLinkingWindow_C::OnPurchased_3B76089F4EB5000544C7BD8B10E707CF()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AccountLinkingWindow_C", "OnPurchased_3B76089F4EB5000544C7BD8B10E707CF");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AccountLinkingWindow.AccountLinkingWindow_C.OnAccountNotCreated_9EEEC6E44BF7A7C172929DA05184702A
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAccountLinkingWindow_C::OnAccountNotCreated_9EEEC6E44BF7A7C172929DA05184702A()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AccountLinkingWindow_C", "OnAccountNotCreated_9EEEC6E44BF7A7C172929DA05184702A");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AccountLinkingWindow.AccountLinkingWindow_C.OnAccountCreated_9EEEC6E44BF7A7C172929DA05184702A
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAccountLinkingWindow_C::OnAccountCreated_9EEEC6E44BF7A7C172929DA05184702A()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AccountLinkingWindow_C", "OnAccountCreated_9EEEC6E44BF7A7C172929DA05184702A");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AccountLinkingWindow.AccountLinkingWindow_C.OnShowHaveEpicAccountScreen_6FD0DEB74DEF4060FC743CB004F3E654
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAccountLinkingWindow_C::OnShowHaveEpicAccountScreen_6FD0DEB74DEF4060FC743CB004F3E654()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AccountLinkingWindow_C", "OnShowHaveEpicAccountScreen_6FD0DEB74DEF4060FC743CB004F3E654");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AccountLinkingWindow.AccountLinkingWindow_C.OnShowLinkOrBuyAccessScreen_6FD0DEB74DEF4060FC743CB004F3E654
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAccountLinkingWindow_C::OnShowLinkOrBuyAccessScreen_6FD0DEB74DEF4060FC743CB004F3E654()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AccountLinkingWindow_C", "OnShowLinkOrBuyAccessScreen_6FD0DEB74DEF4060FC743CB004F3E654");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AccountLinkingWindow.AccountLinkingWindow_C.OnCodeRedeemCanceled_E9B5F30942BE3B295E62309A2EB8DA8D
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAccountLinkingWindow_C::OnCodeRedeemCanceled_E9B5F30942BE3B295E62309A2EB8DA8D()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AccountLinkingWindow_C", "OnCodeRedeemCanceled_E9B5F30942BE3B295E62309A2EB8DA8D");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AccountLinkingWindow.AccountLinkingWindow_C.OnCodeRedeemComplete_E9B5F30942BE3B295E62309A2EB8DA8D
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAccountLinkingWindow_C::OnCodeRedeemComplete_E9B5F30942BE3B295E62309A2EB8DA8D()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AccountLinkingWindow_C", "OnCodeRedeemComplete_E9B5F30942BE3B295E62309A2EB8DA8D");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AccountLinkingWindow.AccountLinkingWindow_C.BndEvt__ButtonNoThanks_K2Node_ComponentBoundEvent_447_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAccountLinkingWindow_C::BndEvt__ButtonNoThanks_K2Node_ComponentBoundEvent_447_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AccountLinkingWindow_C", "BndEvt__ButtonNoThanks_K2Node_ComponentBoundEvent_447_CommonButtonClicked__DelegateSignature");

	Params::UAccountLinkingWindow_C_BndEvt__ButtonNoThanks_K2Node_ComponentBoundEvent_447_CommonButtonClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AccountLinkingWindow.AccountLinkingWindow_C.BndEvt__ButtonLogInFromPurchase_K2Node_ComponentBoundEvent_464_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAccountLinkingWindow_C::BndEvt__ButtonLogInFromPurchase_K2Node_ComponentBoundEvent_464_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AccountLinkingWindow_C", "BndEvt__ButtonLogInFromPurchase_K2Node_ComponentBoundEvent_464_CommonButtonClicked__DelegateSignature");

	Params::UAccountLinkingWindow_C_BndEvt__ButtonLogInFromPurchase_K2Node_ComponentBoundEvent_464_CommonButtonClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AccountLinkingWindow.AccountLinkingWindow_C.BndEvt__ButtonLogIn_K2Node_ComponentBoundEvent_431_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAccountLinkingWindow_C::BndEvt__ButtonLogIn_K2Node_ComponentBoundEvent_431_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AccountLinkingWindow_C", "BndEvt__ButtonLogIn_K2Node_ComponentBoundEvent_431_CommonButtonClicked__DelegateSignature");

	Params::UAccountLinkingWindow_C_BndEvt__ButtonLogIn_K2Node_ComponentBoundEvent_431_CommonButtonClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AccountLinkingWindow.AccountLinkingWindow_C.BndEvt__ButtonSignUp_K2Node_ComponentBoundEvent_416_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAccountLinkingWindow_C::BndEvt__ButtonSignUp_K2Node_ComponentBoundEvent_416_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AccountLinkingWindow_C", "BndEvt__ButtonSignUp_K2Node_ComponentBoundEvent_416_CommonButtonClicked__DelegateSignature");

	Params::UAccountLinkingWindow_C_BndEvt__ButtonSignUp_K2Node_ComponentBoundEvent_416_CommonButtonClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AccountLinkingWindow.AccountLinkingWindow_C.BndEvt__ButtonSkipSignInSignIn_K2Node_ComponentBoundEvent_444_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAccountLinkingWindow_C::BndEvt__ButtonSkipSignInSignIn_K2Node_ComponentBoundEvent_444_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AccountLinkingWindow_C", "BndEvt__ButtonSkipSignInSignIn_K2Node_ComponentBoundEvent_444_CommonButtonClicked__DelegateSignature");

	Params::UAccountLinkingWindow_C_BndEvt__ButtonSkipSignInSignIn_K2Node_ComponentBoundEvent_444_CommonButtonClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AccountLinkingWindow.AccountLinkingWindow_C.BndEvt__ButtonSkipSignInLogIn_K2Node_ComponentBoundEvent_463_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAccountLinkingWindow_C::BndEvt__ButtonSkipSignInLogIn_K2Node_ComponentBoundEvent_463_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AccountLinkingWindow_C", "BndEvt__ButtonSkipSignInLogIn_K2Node_ComponentBoundEvent_463_CommonButtonClicked__DelegateSignature");

	Params::UAccountLinkingWindow_C_BndEvt__ButtonSkipSignInLogIn_K2Node_ComponentBoundEvent_463_CommonButtonClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AccountLinkingWindow.AccountLinkingWindow_C.BndEvt__ButtonSkipSignInNoThanks_K2Node_ComponentBoundEvent_483_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAccountLinkingWindow_C::BndEvt__ButtonSkipSignInNoThanks_K2Node_ComponentBoundEvent_483_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AccountLinkingWindow_C", "BndEvt__ButtonSkipSignInNoThanks_K2Node_ComponentBoundEvent_483_CommonButtonClicked__DelegateSignature");

	Params::UAccountLinkingWindow_C_BndEvt__ButtonSkipSignInNoThanks_K2Node_ComponentBoundEvent_483_CommonButtonClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AccountLinkingWindow.AccountLinkingWindow_C.ShowBuyAccessScreen
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAccountLinkingWindow_C::ShowBuyAccessScreen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AccountLinkingWindow_C", "ShowBuyAccessScreen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AccountLinkingWindow.AccountLinkingWindow_C.ShowHaveEpicAccountScreen
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAccountLinkingWindow_C::ShowHaveEpicAccountScreen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AccountLinkingWindow_C", "ShowHaveEpicAccountScreen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AccountLinkingWindow.AccountLinkingWindow_C.ShowSkipSignInScreen
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAccountLinkingWindow_C::ShowSkipSignInScreen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AccountLinkingWindow_C", "ShowSkipSignInScreen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AccountLinkingWindow.AccountLinkingWindow_C.ArtificialDelayExpired
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAccountLinkingWindow_C::ArtificialDelayExpired()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AccountLinkingWindow_C", "ArtificialDelayExpired");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AccountLinkingWindow.AccountLinkingWindow_C.StartSignup
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAccountLinkingWindow_C::StartSignup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AccountLinkingWindow_C", "StartSignup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AccountLinkingWindow.AccountLinkingWindow_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAccountLinkingWindow_C::BndEvt__IconTextButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AccountLinkingWindow_C", "BndEvt__IconTextButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");

	Params::UAccountLinkingWindow_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AccountLinkingWindow.AccountLinkingWindow_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAccountLinkingWindow_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AccountLinkingWindow_C", "OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AccountLinkingWindow.AccountLinkingWindow_C.BndEvt__IconTextButton_0_K2Node_ComponentBoundEvent_305_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAccountLinkingWindow_C::BndEvt__IconTextButton_0_K2Node_ComponentBoundEvent_305_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AccountLinkingWindow_C", "BndEvt__IconTextButton_0_K2Node_ComponentBoundEvent_305_CommonButtonClicked__DelegateSignature");

	Params::UAccountLinkingWindow_C_BndEvt__IconTextButton_0_K2Node_ComponentBoundEvent_305_CommonButtonClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AccountLinkingWindow.AccountLinkingWindow_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAccountLinkingWindow_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AccountLinkingWindow_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AccountLinkingWindow.AccountLinkingWindow_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAccountLinkingWindow_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AccountLinkingWindow_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AccountLinkingWindow.AccountLinkingWindow_C.HandleNewPurchaseReceipt
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAccountLinkingWindow_C::HandleNewPurchaseReceipt()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AccountLinkingWindow_C", "HandleNewPurchaseReceipt");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AccountLinkingWindow.AccountLinkingWindow_C.BndEvt__ButtonPurchasePack_K2Node_ComponentBoundEvent_175_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAccountLinkingWindow_C::BndEvt__ButtonPurchasePack_K2Node_ComponentBoundEvent_175_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AccountLinkingWindow_C", "BndEvt__ButtonPurchasePack_K2Node_ComponentBoundEvent_175_CommonButtonClicked__DelegateSignature");

	Params::UAccountLinkingWindow_C_BndEvt__ButtonPurchasePack_K2Node_ComponentBoundEvent_175_CommonButtonClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AccountLinkingWindow.AccountLinkingWindow_C.ExecuteUbergraph_AccountLinkingWindow
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// class UFortAsyncAction_WebCreateEpicAccountAndLink*CallFunc_WebCreateEpicAccountAndLink_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate4                            (ZeroConstructor, NoDestructor)
// class UFortAsyncAction_ShowPlatformStoreForPurchase*CallFunc_ShowPlatformStoreForPurchase_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate5                            (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate6                            (ZeroConstructor, NoDestructor)
// class UFortAsyncAction_CreateHeadlessAccount*CallFunc_CreateHeadlessAccount_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate7                            (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate8                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate9                            (ZeroConstructor, NoDestructor)
// class UFortAsyncAction_CheckHasRedeemForAccess*CallFunc_CheckHasRedeemForAccess_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate10                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate11                           (ZeroConstructor, NoDestructor)
// class UFortAsyncAction_ShowPlatformRedeemCode*CallFunc_ShowPlatformRedeemCode_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button10                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button9                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button8                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button7                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button6                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button5                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate12                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsPurchaseFree_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default                                            (None)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue3                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate13                           (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate14                           (ZeroConstructor, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAccountLinkingWindow_C::ExecuteUbergraph_AccountLinkingWindow(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class UFortAsyncAction_WebCreateEpicAccountAndLink* CallFunc_WebCreateEpicAccountAndLink_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, bool CallFunc_IsValid_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, class UFortAsyncAction_ShowPlatformStoreForPurchase* CallFunc_ShowPlatformStoreForPurchase_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, bool CallFunc_IsValid_ReturnValue2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6, class UFortAsyncAction_CreateHeadlessAccount* CallFunc_CreateHeadlessAccount_ReturnValue, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate7, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate8, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate9, class UFortAsyncAction_CheckHasRedeemForAccess* CallFunc_CheckHasRedeemForAccess_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate10, bool CallFunc_IsValid_ReturnValue4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate11, class UFortAsyncAction_ShowPlatformRedeemCode* CallFunc_ShowPlatformRedeemCode_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button10, bool CallFunc_IsValid_ReturnValue5, class UCommonButton* K2Node_ComponentBoundEvent_Button9, class UCommonButton* K2Node_ComponentBoundEvent_Button8, class UCommonButton* K2Node_ComponentBoundEvent_Button7, class UCommonButton* K2Node_ComponentBoundEvent_Button6, class UCommonButton* K2Node_ComponentBoundEvent_Button5, class UCommonButton* K2Node_ComponentBoundEvent_Button4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12, bool CallFunc_IsPurchaseFree_ReturnValue, class FText K2Node_Select_Default, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue2, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue3, class UCommonButton* K2Node_ComponentBoundEvent_Button3, class UCommonButton* K2Node_ComponentBoundEvent_Button2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate13, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate14, class UCommonButton* K2Node_ComponentBoundEvent_Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AccountLinkingWindow_C", "ExecuteUbergraph_AccountLinkingWindow");

	Params::UAccountLinkingWindow_C_ExecuteUbergraph_AccountLinkingWindow_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.CallFunc_WebCreateEpicAccountAndLink_ReturnValue = CallFunc_WebCreateEpicAccountAndLink_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate4 = K2Node_CreateDelegate_OutputDelegate4;
	Parms.CallFunc_ShowPlatformStoreForPurchase_ReturnValue = CallFunc_ShowPlatformStoreForPurchase_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate5 = K2Node_CreateDelegate_OutputDelegate5;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.K2Node_CreateDelegate_OutputDelegate6 = K2Node_CreateDelegate_OutputDelegate6;
	Parms.CallFunc_CreateHeadlessAccount_ReturnValue = CallFunc_CreateHeadlessAccount_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_IsValid_ReturnValue3 = CallFunc_IsValid_ReturnValue3;
	Parms.K2Node_CreateDelegate_OutputDelegate7 = K2Node_CreateDelegate_OutputDelegate7;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate8 = K2Node_CreateDelegate_OutputDelegate8;
	Parms.K2Node_CreateDelegate_OutputDelegate9 = K2Node_CreateDelegate_OutputDelegate9;
	Parms.CallFunc_CheckHasRedeemForAccess_ReturnValue = CallFunc_CheckHasRedeemForAccess_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate10 = K2Node_CreateDelegate_OutputDelegate10;
	Parms.CallFunc_IsValid_ReturnValue4 = CallFunc_IsValid_ReturnValue4;
	Parms.K2Node_CreateDelegate_OutputDelegate11 = K2Node_CreateDelegate_OutputDelegate11;
	Parms.CallFunc_ShowPlatformRedeemCode_ReturnValue = CallFunc_ShowPlatformRedeemCode_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button10 = K2Node_ComponentBoundEvent_Button10;
	Parms.CallFunc_IsValid_ReturnValue5 = CallFunc_IsValid_ReturnValue5;
	Parms.K2Node_ComponentBoundEvent_Button9 = K2Node_ComponentBoundEvent_Button9;
	Parms.K2Node_ComponentBoundEvent_Button8 = K2Node_ComponentBoundEvent_Button8;
	Parms.K2Node_ComponentBoundEvent_Button7 = K2Node_ComponentBoundEvent_Button7;
	Parms.K2Node_ComponentBoundEvent_Button6 = K2Node_ComponentBoundEvent_Button6;
	Parms.K2Node_ComponentBoundEvent_Button5 = K2Node_ComponentBoundEvent_Button5;
	Parms.K2Node_ComponentBoundEvent_Button4 = K2Node_ComponentBoundEvent_Button4;
	Parms.K2Node_CreateDelegate_OutputDelegate12 = K2Node_CreateDelegate_OutputDelegate12;
	Parms.CallFunc_IsPurchaseFree_ReturnValue = CallFunc_IsPurchaseFree_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;
	Parms.CallFunc_GetUINavigationManager_ReturnValue2 = CallFunc_GetUINavigationManager_ReturnValue2;
	Parms.CallFunc_GetUINavigationManager_ReturnValue3 = CallFunc_GetUINavigationManager_ReturnValue3;
	Parms.K2Node_ComponentBoundEvent_Button3 = K2Node_ComponentBoundEvent_Button3;
	Parms.K2Node_ComponentBoundEvent_Button2 = K2Node_ComponentBoundEvent_Button2;
	Parms.K2Node_CreateDelegate_OutputDelegate13 = K2Node_CreateDelegate_OutputDelegate13;
	Parms.K2Node_CreateDelegate_OutputDelegate14 = K2Node_CreateDelegate_OutputDelegate14;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AccountLinkingWindow.AccountLinkingWindow_C.OnViewEula__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAccountLinkingWindow_C::OnViewEula__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AccountLinkingWindow_C", "OnViewEula__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AccountLinkingWindow.AccountLinkingWindow_C.OnPopStatus__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAccountLinkingWindow_C::OnPopStatus__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AccountLinkingWindow_C", "OnPopStatus__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AccountLinkingWindow.AccountLinkingWindow_C.OnPushStatus__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        StatusText                                                       (Parm)

void UAccountLinkingWindow_C::OnPushStatus__DelegateSignature(class FText StatusText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AccountLinkingWindow_C", "OnPushStatus__DelegateSignature");

	Params::UAccountLinkingWindow_C_OnPushStatus__DelegateSignature_Params Parms{};

	Parms.StatusText = StatusText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AccountLinkingWindow.AccountLinkingWindow_C.OnAccountLinkingFailed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        FailReason                                                       (Parm)

void UAccountLinkingWindow_C::OnAccountLinkingFailed__DelegateSignature(class FText FailReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AccountLinkingWindow_C", "OnAccountLinkingFailed__DelegateSignature");

	Params::UAccountLinkingWindow_C_OnAccountLinkingFailed__DelegateSignature_Params Parms{};

	Parms.FailReason = FailReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AccountLinkingWindow.AccountLinkingWindow_C.OnRequestSignIn__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAccountLinkingWindow_C::OnRequestSignIn__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AccountLinkingWindow_C", "OnRequestSignIn__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AccountLinkingWindow.AccountLinkingWindow_C.OnAccountLinkingComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAccountLinkingWindow_C::OnAccountLinkingComplete__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AccountLinkingWindow_C", "OnAccountLinkingComplete__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AccountLinkingWindow.AccountLinkingWindow_C.OnRequestAutoLogin__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAccountLinkingWindow_C::OnRequestAutoLogin__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AccountLinkingWindow_C", "OnRequestAutoLogin__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


