#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass TabGameOptionsHud.TabGameOptionsHud_C
// (None)

class UClass* UTabGameOptionsHud_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TabGameOptionsHud_C");

	return Clss;
}


// TabGameOptionsHud_C TabGameOptionsHud.Default__TabGameOptionsHud_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTabGameOptionsHud_C* UTabGameOptionsHud_C::GetDefaultObj()
{
	static class UTabGameOptionsHud_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTabGameOptionsHud_C*>(UTabGameOptionsHud_C::StaticClass()->DefaultObject);

	return Default;
}


// Function TabGameOptionsHud.TabGameOptionsHud_C.Set Settings Tooltip
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonTextBlock*            Tooltip_To_Display                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabGameOptionsHud_C::Set_Settings_Tooltip(class UCommonTextBlock* Tooltip_To_Display)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TabGameOptionsHud_C", "Set Settings Tooltip");

	Params::UTabGameOptionsHud_C_Set_Settings_Tooltip_Params Parms{};

	Parms.Tooltip_To_Display = Tooltip_To_Display;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabGameOptionsHud.TabGameOptionsHud_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UTabGameOptionsHud_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TabGameOptionsHud_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TabGameOptionsHud.TabGameOptionsHud_C.UpdateOptionsTab
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTabGameOptionsHud_C::UpdateOptionsTab()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TabGameOptionsHud_C", "UpdateOptionsTab");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TabGameOptionsHud.TabGameOptionsHud_C.CenterOnTab
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTabGameOptionsHud_C::CenterOnTab()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TabGameOptionsHud_C", "CenterOnTab");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TabGameOptionsHud.TabGameOptionsHud_C.BndEvt__HUDCommonListView_K2Node_ComponentBoundEvent_37_OnListViewItemWidgetCreated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUserWidget*                 Widget                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabGameOptionsHud_C::BndEvt__HUDCommonListView_K2Node_ComponentBoundEvent_37_OnListViewItemWidgetCreated__DelegateSignature(class UUserWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TabGameOptionsHud_C", "BndEvt__HUDCommonListView_K2Node_ComponentBoundEvent_37_OnListViewItemWidgetCreated__DelegateSignature");

	Params::UTabGameOptionsHud_C_BndEvt__HUDCommonListView_K2Node_ComponentBoundEvent_37_OnListViewItemWidgetCreated__DelegateSignature_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabGameOptionsHud.TabGameOptionsHud_C.HUD Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Selected_Index                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Gameplay_Tag                                                     (Parm, NoDestructor, HasGetValueTypeHash)

void UTabGameOptionsHud_C::HUD_Changed(int32 Selected_Index, const struct FGameplayTag& Gameplay_Tag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TabGameOptionsHud_C", "HUD Changed");

	Params::UTabGameOptionsHud_C_HUD_Changed_Params Parms{};

	Parms.Selected_Index = Selected_Index;
	Parms.Gameplay_Tag = Gameplay_Tag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabGameOptionsHud.TabGameOptionsHud_C.ExecuteUbergraph_TabGameOptionsHud
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UUserWidget*                 K2Node_ComponentBoundEvent_Widget                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOptionsMenuHudRotator_C*    K2Node_DynamicCast_AsOptions_Menu_Hud_Rotator                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_CustomEvent_Selected_Index                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_CustomEvent_Gameplay_Tag                                  (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Conv_IntToBool_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_GetItemAt_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabGameOptionsHud_C::ExecuteUbergraph_TabGameOptionsHud(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UUserWidget* K2Node_ComponentBoundEvent_Widget, class UOptionsMenuHudRotator_C* K2Node_DynamicCast_AsOptions_Menu_Hud_Rotator, bool K2Node_DynamicCast_bSuccess, int32 K2Node_CustomEvent_Selected_Index, const struct FGameplayTag& K2Node_CustomEvent_Gameplay_Tag, bool CallFunc_Conv_IntToBool_ReturnValue, class UObject* CallFunc_GetItemAt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TabGameOptionsHud_C", "ExecuteUbergraph_TabGameOptionsHud");

	Params::UTabGameOptionsHud_C_ExecuteUbergraph_TabGameOptionsHud_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_ComponentBoundEvent_Widget = K2Node_ComponentBoundEvent_Widget;
	Parms.K2Node_DynamicCast_AsOptions_Menu_Hud_Rotator = K2Node_DynamicCast_AsOptions_Menu_Hud_Rotator;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CustomEvent_Selected_Index = K2Node_CustomEvent_Selected_Index;
	Parms.K2Node_CustomEvent_Gameplay_Tag = K2Node_CustomEvent_Gameplay_Tag;
	Parms.CallFunc_Conv_IntToBool_ReturnValue = CallFunc_Conv_IntToBool_ReturnValue;
	Parms.CallFunc_GetItemAt_ReturnValue = CallFunc_GetItemAt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


