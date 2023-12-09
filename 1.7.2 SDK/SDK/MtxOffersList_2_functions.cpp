#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass MtxOffersList_2.MtxOffersList_2_C
// (None)

class UClass* UMtxOffersList_2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MtxOffersList_2_C");

	return Clss;
}


// MtxOffersList_2_C MtxOffersList_2.Default__MtxOffersList_2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMtxOffersList_2_C* UMtxOffersList_2_C::GetDefaultObj()
{
	static class UMtxOffersList_2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMtxOffersList_2_C*>(UMtxOffersList_2_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MtxOffersList_2.MtxOffersList_2_C.PlayMtxOfferAnimation_MouseLeave
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMtxOffersList_2_C::PlayMtxOfferAnimation_MouseLeave()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MtxOffersList_2_C", "PlayMtxOfferAnimation_MouseLeave");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MtxOffersList_2.MtxOffersList_2_C.PlayMtxOfferAnimation_MouseEnter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMtxOffersList_2_C::PlayMtxOfferAnimation_MouseEnter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MtxOffersList_2_C", "PlayMtxOfferAnimation_MouseEnter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MtxOffersList_2.MtxOffersList_2_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UMtxOffersList_2_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MtxOffersList_2_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MtxOffersList_2.MtxOffersList_2_C.OnPackagesListed
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FMtxPackage>         Offers                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UMtxOffersList_2_C::OnPackagesListed(TArray<struct FMtxPackage>& Offers)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MtxOffersList_2_C", "OnPackagesListed");

	Params::UMtxOffersList_2_C_OnPackagesListed_Params Parms{};

	Parms.Offers = Offers;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MtxOffersList_2.MtxOffersList_2_C.OnBuyItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      OfferId                                                          (Parm, ZeroConstructor, HasGetValueTypeHash)

void UMtxOffersList_2_C::OnBuyItem(const class FString& OfferId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MtxOffersList_2_C", "OnBuyItem");

	Params::UMtxOffersList_2_C_OnBuyItem_Params Parms{};

	Parms.OfferId = OfferId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MtxOffersList_2.MtxOffersList_2_C.OnPurchaseComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bSuccess                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMtxOffersList_2_C::OnPurchaseComplete(bool bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MtxOffersList_2_C", "OnPurchaseComplete");

	Params::UMtxOffersList_2_C_OnPurchaseComplete_Params Parms{};

	Parms.bSuccess = bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MtxOffersList_2.MtxOffersList_2_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMtxOffersList_2_C::CustomEvent_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MtxOffersList_2_C", "CustomEvent_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MtxOffersList_2.MtxOffersList_2_C.CustomEvent_0_Copy
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMtxOffersList_2_C::CustomEvent_0_Copy()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MtxOffersList_2_C", "CustomEvent_0_Copy");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MtxOffersList_2.MtxOffersList_2_C.ExecuteUbergraph_MtxOffersList_2
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UMtxOffer_2_C*               CallFunc_Create_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FMtxPackage>         K2Node_CustomEvent_Offers                                        (ConstParm, ZeroConstructor, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_CustomEvent_OfferId                                       (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FMtxPackage                 CallFunc_Array_Get_Item                                          (None)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortStoreContext*           CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortStoreContext*           CallFunc_GetContext_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetCachedWidget_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMtxStoreRoot_C*             K2Node_DynamicCast_AsMtx_Store_Root                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMtxOffersList_2_C::ExecuteUbergraph_MtxOffersList_2(int32 EntryPoint, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UMtxOffer_2_C* CallFunc_Create_ReturnValue, TArray<struct FMtxPackage>& K2Node_CustomEvent_Offers, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue2, bool CallFunc_Greater_IntInt_ReturnValue, const class FString& K2Node_CustomEvent_OfferId, bool K2Node_CustomEvent_bSuccess, class UPanelSlot* CallFunc_AddChild_ReturnValue, int32 Temp_int_Array_Index_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, bool CallFunc_EqualEqual_IntInt_ReturnValue, const struct FMtxPackage& CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_StrStr_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue, class UFortStoreContext* CallFunc_GetContext_ReturnValue2, class UFortStoreContext* CallFunc_GetContext_ReturnValue3, class UFortMcpContext* CallFunc_GetContext_ReturnValue4, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class UUserWidget* CallFunc_GetCachedWidget_ReturnValue, class UMtxStoreRoot_C* K2Node_DynamicCast_AsMtx_Store_Root, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MtxOffersList_2_C", "ExecuteUbergraph_MtxOffersList_2");

	Params::UMtxOffersList_2_C_ExecuteUbergraph_MtxOffersList_2_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_CustomEvent_Offers = K2Node_CustomEvent_Offers;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue2 = CallFunc_Array_Length_ReturnValue2;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_CustomEvent_OfferId = K2Node_CustomEvent_OfferId;
	Parms.K2Node_CustomEvent_bSuccess = K2Node_CustomEvent_bSuccess;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_GetContext_ReturnValue3 = CallFunc_GetContext_ReturnValue3;
	Parms.CallFunc_GetContext_ReturnValue4 = CallFunc_GetContext_ReturnValue4;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetCachedWidget_ReturnValue = CallFunc_GetCachedWidget_ReturnValue;
	Parms.K2Node_DynamicCast_AsMtx_Store_Root = K2Node_DynamicCast_AsMtx_Store_Root;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue5 = CallFunc_GetContext_ReturnValue5;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MtxOffersList_2.MtxOffersList_2_C.PurchaseComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bSuccess                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMtxOffersList_2_C::PurchaseComplete__DelegateSignature(bool bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MtxOffersList_2_C", "PurchaseComplete__DelegateSignature");

	Params::UMtxOffersList_2_C_PurchaseComplete__DelegateSignature_Params Parms{};

	Parms.bSuccess = bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


