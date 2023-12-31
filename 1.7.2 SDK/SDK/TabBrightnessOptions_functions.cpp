#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass TabBrightnessOptions.TabBrightnessOptions_C
// (None)

class UClass* UTabBrightnessOptions_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TabBrightnessOptions_C");

	return Clss;
}


// TabBrightnessOptions_C TabBrightnessOptions.Default__TabBrightnessOptions_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTabBrightnessOptions_C* UTabBrightnessOptions_C::GetDefaultObj()
{
	static class UTabBrightnessOptions_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTabBrightnessOptions_C*>(UTabBrightnessOptions_C::StaticClass()->DefaultObject);

	return Default;
}


// Function TabBrightnessOptions.TabBrightnessOptions_C.Set Default Call Out
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_GetDefaultGammaSettings_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue                            (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue2                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue2                              (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UTabBrightnessOptions_C::Set_Default_Call_Out(float CallFunc_GetDefaultGammaSettings_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_Conv_FloatToText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue2, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue2, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TabBrightnessOptions_C", "Set Default Call Out");

	Params::UTabBrightnessOptions_C_Set_Default_Call_Out_Params Parms{};

	Parms.CallFunc_GetDefaultGammaSettings_ReturnValue = CallFunc_GetDefaultGammaSettings_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_Conv_FloatToText_ReturnValue = CallFunc_Conv_FloatToText_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue2 = CallFunc_Conv_TextToString_ReturnValue2;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue2 = CallFunc_Concat_StrStr_ReturnValue2;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabBrightnessOptions.TabBrightnessOptions_C.Initialize Data
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTabBrightnessOptions_C::Initialize_Data()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TabBrightnessOptions_C", "Initialize Data");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TabBrightnessOptions.TabBrightnessOptions_C.Update Data
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_GetGammaSettings_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetEmptyText_ReturnValue                                (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)

void UTabBrightnessOptions_C::Update_Data(float CallFunc_GetGammaSettings_ReturnValue, class FText CallFunc_GetEmptyText_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TabBrightnessOptions_C", "Update Data");

	Params::UTabBrightnessOptions_C_Update_Data_Params Parms{};

	Parms.CallFunc_GetGammaSettings_ReturnValue = CallFunc_GetGammaSettings_ReturnValue;
	Parms.CallFunc_GetEmptyText_ReturnValue = CallFunc_GetEmptyText_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabBrightnessOptions.TabBrightnessOptions_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UTabBrightnessOptions_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TabBrightnessOptions_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TabBrightnessOptions.TabBrightnessOptions_C.BndEvt__MouseSensitivity_K2Node_ComponentBoundEvent_0_SliderChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              Slider_Value                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabBrightnessOptions_C::BndEvt__MouseSensitivity_K2Node_ComponentBoundEvent_0_SliderChanged__DelegateSignature(float Slider_Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TabBrightnessOptions_C", "BndEvt__MouseSensitivity_K2Node_ComponentBoundEvent_0_SliderChanged__DelegateSignature");

	Params::UTabBrightnessOptions_C_BndEvt__MouseSensitivity_K2Node_ComponentBoundEvent_0_SliderChanged__DelegateSignature_Params Parms{};

	Parms.Slider_Value = Slider_Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabBrightnessOptions.TabBrightnessOptions_C.UpdateOptionsTab
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTabBrightnessOptions_C::UpdateOptionsTab()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TabBrightnessOptions_C", "UpdateOptionsTab");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TabBrightnessOptions.TabBrightnessOptions_C.CenterOnTab
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTabBrightnessOptions_C::CenterOnTab()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TabBrightnessOptions_C", "CenterOnTab");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TabBrightnessOptions.TabBrightnessOptions_C.ExecuteUbergraph_TabBrightnessOptions
// (None)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_Slider_Value                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabBrightnessOptions_C::ExecuteUbergraph_TabBrightnessOptions(int32 EntryPoint, float K2Node_ComponentBoundEvent_Slider_Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TabBrightnessOptions_C", "ExecuteUbergraph_TabBrightnessOptions");

	Params::UTabBrightnessOptions_C_ExecuteUbergraph_TabBrightnessOptions_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Slider_Value = K2Node_ComponentBoundEvent_Slider_Value;

	UObject::ProcessEvent(Func, &Parms);

}

}


