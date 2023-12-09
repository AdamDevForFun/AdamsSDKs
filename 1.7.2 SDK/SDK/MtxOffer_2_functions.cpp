#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass MtxOffer_2.MtxOffer_2_C
// (None)

class UClass* UMtxOffer_2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MtxOffer_2_C");

	return Clss;
}


// MtxOffer_2_C MtxOffer_2.Default__MtxOffer_2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMtxOffer_2_C* UMtxOffer_2_C::GetDefaultObj()
{
	static class UMtxOffer_2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMtxOffer_2_C*>(UMtxOffer_2_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MtxOffer_2.MtxOffer_2_C.BndEvt__Purchase_Button_K2Node_ComponentBoundEvent_516_FortBaseButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UFortBaseButton*             Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMtxOffer_2_C::BndEvt__Purchase_Button_K2Node_ComponentBoundEvent_516_FortBaseButtonClicked__DelegateSignature(class UFortBaseButton* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MtxOffer_2_C", "BndEvt__Purchase_Button_K2Node_ComponentBoundEvent_516_FortBaseButtonClicked__DelegateSignature");

	Params::UMtxOffer_2_C_BndEvt__Purchase_Button_K2Node_ComponentBoundEvent_516_FortBaseButtonClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MtxOffer_2.MtxOffer_2_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UMtxOffer_2_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MtxOffer_2_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MtxOffer_2.MtxOffer_2_C.BndEvt__Purchase_Button_K2Node_ComponentBoundEvent_3_On Mouse Hovered Changed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               Is_Hovered                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMtxOffer_2_C::BndEvt__Purchase_Button_K2Node_ComponentBoundEvent_3_On_Mouse_Hovered_Changed__DelegateSignature(bool Is_Hovered)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MtxOffer_2_C", "BndEvt__Purchase_Button_K2Node_ComponentBoundEvent_3_On Mouse Hovered Changed__DelegateSignature");

	Params::UMtxOffer_2_C_BndEvt__Purchase_Button_K2Node_ComponentBoundEvent_3_On_Mouse_Hovered_Changed__DelegateSignature_Params Parms{};

	Parms.Is_Hovered = Is_Hovered;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MtxOffer_2.MtxOffer_2_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_51_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMtxOffer_2_C::BndEvt__IconTextButton_K2Node_ComponentBoundEvent_51_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MtxOffer_2_C", "BndEvt__IconTextButton_K2Node_ComponentBoundEvent_51_CommonButtonClicked__DelegateSignature");

	Params::UMtxOffer_2_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_51_CommonButtonClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MtxOffer_2.MtxOffer_2_C.ExecuteUbergraph_MtxOffer_2
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortBaseButton*             K2Node_ComponentBoundEvent_Button2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// class FString                      CallFunc_LeftChop_ReturnValue                                    (ZeroConstructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FString                      CallFunc_Right_ReturnValue                                       (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue2                          (None)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue2                             (None)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue2                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue3                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue4                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_IntToText_ReturnValue3                             (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData2                            (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData3                            (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array2                                          (ZeroConstructor, ReferenceParm)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array3                                          (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue2                                     (None)
// class FText                        CallFunc_Format_ReturnValue3                                     (None)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue4                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue5                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue6                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue7                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue8                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_Is_Hovered                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMtxOffer_2_C::ExecuteUbergraph_MtxOffer_2(int32 EntryPoint, class UFortBaseButton* K2Node_ComponentBoundEvent_Button2, const class FString& CallFunc_Conv_TextToString_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, const class FString& CallFunc_LeftChop_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText CallFunc_Conv_StringToText_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, const class FString& CallFunc_Right_ReturnValue, class FText CallFunc_Format_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue2, int32 CallFunc_Subtract_IntInt_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue2, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue2, bool CallFunc_EqualEqual_IntInt_ReturnValue3, bool CallFunc_EqualEqual_IntInt_ReturnValue4, class FText CallFunc_Conv_IntToText_ReturnValue3, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData3, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array3, class FText CallFunc_Format_ReturnValue2, class FText CallFunc_Format_ReturnValue3, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue2, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue3, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue4, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue5, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue6, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue7, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue8, bool K2Node_ComponentBoundEvent_Is_Hovered, class UCommonButton* K2Node_ComponentBoundEvent_Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MtxOffer_2_C", "ExecuteUbergraph_MtxOffer_2");

	Params::UMtxOffer_2_C_ExecuteUbergraph_MtxOffer_2_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Button2 = K2Node_ComponentBoundEvent_Button2;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_LeftChop_ReturnValue = CallFunc_LeftChop_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Right_ReturnValue = CallFunc_Right_ReturnValue;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue2 = CallFunc_Conv_StringToText_ReturnValue2;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue2 = CallFunc_Conv_IntToText_ReturnValue2;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue2 = CallFunc_EqualEqual_IntInt_ReturnValue2;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue3 = CallFunc_EqualEqual_IntInt_ReturnValue3;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue4 = CallFunc_EqualEqual_IntInt_ReturnValue4;
	Parms.CallFunc_Conv_IntToText_ReturnValue3 = CallFunc_Conv_IntToText_ReturnValue3;
	Parms.K2Node_MakeStruct_FormatArgumentData2 = K2Node_MakeStruct_FormatArgumentData2;
	Parms.K2Node_MakeStruct_FormatArgumentData3 = K2Node_MakeStruct_FormatArgumentData3;
	Parms.K2Node_MakeArray_Array2 = K2Node_MakeArray_Array2;
	Parms.K2Node_MakeArray_Array3 = K2Node_MakeArray_Array3;
	Parms.CallFunc_Format_ReturnValue2 = CallFunc_Format_ReturnValue2;
	Parms.CallFunc_Format_ReturnValue3 = CallFunc_Format_ReturnValue3;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue2 = CallFunc_GetDynamicMaterial_ReturnValue2;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue3 = CallFunc_GetDynamicMaterial_ReturnValue3;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue4 = CallFunc_GetDynamicMaterial_ReturnValue4;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue5 = CallFunc_GetDynamicMaterial_ReturnValue5;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue6 = CallFunc_GetDynamicMaterial_ReturnValue6;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue7 = CallFunc_GetDynamicMaterial_ReturnValue7;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue8 = CallFunc_GetDynamicMaterial_ReturnValue8;
	Parms.K2Node_ComponentBoundEvent_Is_Hovered = K2Node_ComponentBoundEvent_Is_Hovered;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MtxOffer_2.MtxOffer_2_C.MtxOfferMouseLeave_EventDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMtxOffer_2_C::MtxOfferMouseLeave_EventDispatcher__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MtxOffer_2_C", "MtxOfferMouseLeave_EventDispatcher__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MtxOffer_2.MtxOffer_2_C.MtxOfferMouseEnter_EventDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMtxOffer_2_C::MtxOfferMouseEnter_EventDispatcher__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MtxOffer_2_C", "MtxOfferMouseEnter_EventDispatcher__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MtxOffer_2.MtxOffer_2_C.BuyItem__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      OfferId                                                          (Parm, ZeroConstructor, HasGetValueTypeHash)

void UMtxOffer_2_C::BuyItem__DelegateSignature(const class FString& OfferId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MtxOffer_2_C", "BuyItem__DelegateSignature");

	Params::UMtxOffer_2_C_BuyItem__DelegateSignature_Params Parms{};

	Parms.OfferId = OfferId;

	UObject::ProcessEvent(Func, &Parms);

}

}


