#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass HeroSquadManagementScreen.HeroSquadManagementScreen_C
// (None)

class UClass* UHeroSquadManagementScreen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HeroSquadManagementScreen_C");

	return Clss;
}


// HeroSquadManagementScreen_C HeroSquadManagementScreen.Default__HeroSquadManagementScreen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHeroSquadManagementScreen_C* UHeroSquadManagementScreen_C::GetDefaultObj()
{
	static class UHeroSquadManagementScreen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHeroSquadManagementScreen_C*>(UHeroSquadManagementScreen_C::StaticClass()->DefaultObject);

	return Default;
}


// Function HeroSquadManagementScreen.HeroSquadManagementScreen_C.UpdateSquadSlotInfoPanel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SquadSlotIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable2                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue2                            (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue3                            (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue4                            (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue5                            (None)
// class FText                        K2Node_Select_Default                                            (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue6                            (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue7                            (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue8                            (None)
// class FText                        K2Node_Select2_Default                                           (None)

void UHeroSquadManagementScreen_C::UpdateSquadSlotInfoPanel(int32 SquadSlotIndex, int32 Temp_int_Variable, int32 Temp_int_Variable2, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue2, class FText CallFunc_MakeLiteralText_ReturnValue3, class FText CallFunc_MakeLiteralText_ReturnValue4, class FText CallFunc_MakeLiteralText_ReturnValue5, class FText K2Node_Select_Default, class FText CallFunc_MakeLiteralText_ReturnValue6, class FText CallFunc_MakeLiteralText_ReturnValue7, class FText CallFunc_MakeLiteralText_ReturnValue8, class FText K2Node_Select2_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeroSquadManagementScreen_C", "UpdateSquadSlotInfoPanel");

	Params::UHeroSquadManagementScreen_C_UpdateSquadSlotInfoPanel_Params Parms{};

	Parms.SquadSlotIndex = SquadSlotIndex;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable2 = Temp_int_Variable2;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue2 = CallFunc_MakeLiteralText_ReturnValue2;
	Parms.CallFunc_MakeLiteralText_ReturnValue3 = CallFunc_MakeLiteralText_ReturnValue3;
	Parms.CallFunc_MakeLiteralText_ReturnValue4 = CallFunc_MakeLiteralText_ReturnValue4;
	Parms.CallFunc_MakeLiteralText_ReturnValue5 = CallFunc_MakeLiteralText_ReturnValue5;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_MakeLiteralText_ReturnValue6 = CallFunc_MakeLiteralText_ReturnValue6;
	Parms.CallFunc_MakeLiteralText_ReturnValue7 = CallFunc_MakeLiteralText_ReturnValue7;
	Parms.CallFunc_MakeLiteralText_ReturnValue8 = CallFunc_MakeLiteralText_ReturnValue8;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HeroSquadManagementScreen.HeroSquadManagementScreen_C.Update Hero Squad Bonus Highlight State
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UHeroSquadBonus_C*           K2Node_DynamicCast_AsHero_Squad_Bonus                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UHeroSquadBonus_C*           K2Node_DynamicCast_AsHero_Squad_Bonus2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UHeroSquadSlotsView_C*       K2Node_DynamicCast_AsHero_Squad_Slots_View                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess3                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UHeroSquadBonus_C*           K2Node_DynamicCast_AsHero_Squad_Bonus3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess4                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UHeroSquadBonus_C*           K2Node_DynamicCast_AsHero_Squad_Bonus4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess5                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UHeroSquadBonus_C*           K2Node_DynamicCast_AsHero_Squad_Bonus5                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess6                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UHeroSquadBonus_C*           K2Node_DynamicCast_AsHero_Squad_Bonus6                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess7                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UHeroSquadManagementScreen_C::Update_Hero_Squad_Bonus_Highlight_State(class UHeroSquadBonus_C* K2Node_DynamicCast_AsHero_Squad_Bonus, bool K2Node_DynamicCast_bSuccess, class UHeroSquadBonus_C* K2Node_DynamicCast_AsHero_Squad_Bonus2, bool K2Node_DynamicCast_bSuccess2, class UHeroSquadSlotsView_C* K2Node_DynamicCast_AsHero_Squad_Slots_View, bool K2Node_DynamicCast_bSuccess3, class UHeroSquadBonus_C* K2Node_DynamicCast_AsHero_Squad_Bonus3, bool K2Node_DynamicCast_bSuccess4, bool K2Node_SwitchInteger_CmpSuccess, class UHeroSquadBonus_C* K2Node_DynamicCast_AsHero_Squad_Bonus4, bool K2Node_DynamicCast_bSuccess5, class UHeroSquadBonus_C* K2Node_DynamicCast_AsHero_Squad_Bonus5, bool K2Node_DynamicCast_bSuccess6, class UHeroSquadBonus_C* K2Node_DynamicCast_AsHero_Squad_Bonus6, bool K2Node_DynamicCast_bSuccess7)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeroSquadManagementScreen_C", "Update Hero Squad Bonus Highlight State");

	Params::UHeroSquadManagementScreen_C_Update_Hero_Squad_Bonus_Highlight_State_Params Parms{};

	Parms.K2Node_DynamicCast_AsHero_Squad_Bonus = K2Node_DynamicCast_AsHero_Squad_Bonus;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsHero_Squad_Bonus2 = K2Node_DynamicCast_AsHero_Squad_Bonus2;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.K2Node_DynamicCast_AsHero_Squad_Slots_View = K2Node_DynamicCast_AsHero_Squad_Slots_View;
	Parms.K2Node_DynamicCast_bSuccess3 = K2Node_DynamicCast_bSuccess3;
	Parms.K2Node_DynamicCast_AsHero_Squad_Bonus3 = K2Node_DynamicCast_AsHero_Squad_Bonus3;
	Parms.K2Node_DynamicCast_bSuccess4 = K2Node_DynamicCast_bSuccess4;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.K2Node_DynamicCast_AsHero_Squad_Bonus4 = K2Node_DynamicCast_AsHero_Squad_Bonus4;
	Parms.K2Node_DynamicCast_bSuccess5 = K2Node_DynamicCast_bSuccess5;
	Parms.K2Node_DynamicCast_AsHero_Squad_Bonus5 = K2Node_DynamicCast_AsHero_Squad_Bonus5;
	Parms.K2Node_DynamicCast_bSuccess6 = K2Node_DynamicCast_bSuccess6;
	Parms.K2Node_DynamicCast_AsHero_Squad_Bonus6 = K2Node_DynamicCast_AsHero_Squad_Bonus6;
	Parms.K2Node_DynamicCast_bSuccess7 = K2Node_DynamicCast_bSuccess7;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HeroSquadManagementScreen.HeroSquadManagementScreen_C.Update Hero Squad Bonus Tiles SubIcon Glow State
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UHeroSquadSlotsView_C*       K2Node_DynamicCast_AsHero_Squad_Slots_View                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPerkUnlocked_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPerkEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USimpleSquadSlotButton_C*    K2Node_DynamicCast_AsSimple_Squad_Slot_Button                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USimpleSquadSlotButton_C*    K2Node_DynamicCast_AsSimple_Squad_Slot_Button2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess3                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPerkEmpty_ReturnValue2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPerkUnlocked_ReturnValue2                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UHeroSquadManagementScreen_C::Update_Hero_Squad_Bonus_Tiles_SubIcon_Glow_State(class UHeroSquadSlotsView_C* K2Node_DynamicCast_AsHero_Squad_Slots_View, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsPerkUnlocked_ReturnValue, bool CallFunc_IsPerkEmpty_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class USimpleSquadSlotButton_C* K2Node_DynamicCast_AsSimple_Squad_Slot_Button, bool K2Node_DynamicCast_bSuccess2, class UWidget* CallFunc_GetChildAt_ReturnValue2, class USimpleSquadSlotButton_C* K2Node_DynamicCast_AsSimple_Squad_Slot_Button2, bool K2Node_DynamicCast_bSuccess3, bool CallFunc_IsPerkEmpty_ReturnValue2, bool CallFunc_IsPerkUnlocked_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeroSquadManagementScreen_C", "Update Hero Squad Bonus Tiles SubIcon Glow State");

	Params::UHeroSquadManagementScreen_C_Update_Hero_Squad_Bonus_Tiles_SubIcon_Glow_State_Params Parms{};

	Parms.K2Node_DynamicCast_AsHero_Squad_Slots_View = K2Node_DynamicCast_AsHero_Squad_Slots_View;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsPerkUnlocked_ReturnValue = CallFunc_IsPerkUnlocked_ReturnValue;
	Parms.CallFunc_IsPerkEmpty_ReturnValue = CallFunc_IsPerkEmpty_ReturnValue;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_DynamicCast_AsSimple_Squad_Slot_Button = K2Node_DynamicCast_AsSimple_Squad_Slot_Button;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.CallFunc_GetChildAt_ReturnValue2 = CallFunc_GetChildAt_ReturnValue2;
	Parms.K2Node_DynamicCast_AsSimple_Squad_Slot_Button2 = K2Node_DynamicCast_AsSimple_Squad_Slot_Button2;
	Parms.K2Node_DynamicCast_bSuccess3 = K2Node_DynamicCast_bSuccess3;
	Parms.CallFunc_IsPerkEmpty_ReturnValue2 = CallFunc_IsPerkEmpty_ReturnValue2;
	Parms.CallFunc_IsPerkUnlocked_ReturnValue2 = CallFunc_IsPerkUnlocked_ReturnValue2;
	Parms.CallFunc_BooleanAND_ReturnValue2 = CallFunc_BooleanAND_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HeroSquadManagementScreen.HeroSquadManagementScreen_C.HideSlotInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UHeroSquadManagementScreen_C::HideSlotInfo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeroSquadManagementScreen_C", "HideSlotInfo");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HeroSquadManagementScreen.HeroSquadManagementScreen_C.ShowSlotInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        HeaderText                                                       (Parm)
// class FText                        BodyText                                                         (Parm)
// class FText                        LocalItemType                                                    (Edit)
// class FText                        LocalDisplayName                                                 (Edit)
// class FText                        LocalHeaderText                                                  (Edit)

void UHeroSquadManagementScreen_C::ShowSlotInfo(class FText HeaderText, class FText BodyText, class FText LocalItemType, class FText LocalDisplayName, class FText LocalHeaderText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeroSquadManagementScreen_C", "ShowSlotInfo");

	Params::UHeroSquadManagementScreen_C_ShowSlotInfo_Params Parms{};

	Parms.HeaderText = HeaderText;
	Parms.BodyText = BodyText;
	Parms.LocalItemType = LocalItemType;
	Parms.LocalDisplayName = LocalDisplayName;
	Parms.LocalHeaderText = LocalHeaderText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HeroSquadManagementScreen.HeroSquadManagementScreen_C.HandleClosePicker
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bPassThrough                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UHeroSquadSlotsView_C*       K2Node_DynamicCast_AsHero_Squad_Slots_View                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UHeroSquadManagementScreen_C::HandleClosePicker(bool* bPassThrough, class UHeroSquadSlotsView_C* K2Node_DynamicCast_AsHero_Squad_Slots_View, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeroSquadManagementScreen_C", "HandleClosePicker");

	Params::UHeroSquadManagementScreen_C_HandleClosePicker_Params Parms{};

	Parms.K2Node_DynamicCast_AsHero_Squad_Slots_View = K2Node_DynamicCast_AsHero_Squad_Slots_View;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (bPassThrough != nullptr)
		*bPassThrough = Parms.bPassThrough;

}


// Function HeroSquadManagementScreen.HeroSquadManagementScreen_C.GetInZoneVisibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInZone_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)

enum class ESlateVisibility UHeroSquadManagementScreen_C::GetInZoneVisibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsInZone_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeroSquadManagementScreen_C", "GetInZoneVisibility");

	Params::UHeroSquadManagementScreen_C_GetInZoneVisibility_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsInZone_ReturnValue = CallFunc_IsInZone_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function HeroSquadManagementScreen.HeroSquadManagementScreen_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UHeroSquadManagementScreen_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeroSquadManagementScreen_C", "OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HeroSquadManagementScreen.HeroSquadManagementScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UHeroSquadManagementScreen_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeroSquadManagementScreen_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HeroSquadManagementScreen.HeroSquadManagementScreen_C.SetDefaultScroll
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UHeroSquadManagementScreen_C::SetDefaultScroll()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeroSquadManagementScreen_C", "SetDefaultScroll");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HeroSquadManagementScreen.HeroSquadManagementScreen_C.OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UHeroSquadManagementScreen_C::OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeroSquadManagementScreen_C", "OnDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HeroSquadManagementScreen.HeroSquadManagementScreen_C.HandleSquadSlotPickerShown
// (Event, Protected, BlueprintEvent)
// Parameters:

void UHeroSquadManagementScreen_C::HandleSquadSlotPickerShown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeroSquadManagementScreen_C", "HandleSquadSlotPickerShown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HeroSquadManagementScreen.HeroSquadManagementScreen_C.HandleSquadSlotPickerHidden
// (Event, Protected, BlueprintEvent)
// Parameters:

void UHeroSquadManagementScreen_C::HandleSquadSlotPickerHidden()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeroSquadManagementScreen_C", "HandleSquadSlotPickerHidden");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HeroSquadManagementScreen.HeroSquadManagementScreen_C.BndEvt__SquadSlotsView_K2Node_ComponentBoundEvent_2_OnDifferentSquadSlotSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              SquadSlotIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHeroSquadManagementScreen_C::BndEvt__SquadSlotsView_K2Node_ComponentBoundEvent_2_OnDifferentSquadSlotSelected__DelegateSignature(int32 SquadSlotIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeroSquadManagementScreen_C", "BndEvt__SquadSlotsView_K2Node_ComponentBoundEvent_2_OnDifferentSquadSlotSelected__DelegateSignature");

	Params::UHeroSquadManagementScreen_C_BndEvt__SquadSlotsView_K2Node_ComponentBoundEvent_2_OnDifferentSquadSlotSelected__DelegateSignature_Params Parms{};

	Parms.SquadSlotIndex = SquadSlotIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HeroSquadManagementScreen.HeroSquadManagementScreen_C.ExecuteUbergraph_HeroSquadManagementScreen
// (None)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USquadStatsWidget_C*         K2Node_DynamicCast_AsSquad_Stats_Widget                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class USquadStatsWidget_C*         K2Node_DynamicCast_AsSquad_Stats_Widget2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USquadStatsWidget_C*         K2Node_DynamicCast_AsSquad_Stats_Widget3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess3                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetIndexOfSelectedSquadSlot_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USquadSlotDetailsPanel_C*    K2Node_DynamicCast_AsSquad_Slot_Details_Panel                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess4                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_ComponentBoundEvent_SquadSlotIndex                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHeroSquadBonuses_C*         K2Node_DynamicCast_AsHero_Squad_Bonuses                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess5                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UHeroSquadManagementScreen_C::ExecuteUbergraph_HeroSquadManagementScreen(int32 EntryPoint, class USquadStatsWidget_C* K2Node_DynamicCast_AsSquad_Stats_Widget, bool K2Node_DynamicCast_bSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class USquadStatsWidget_C* K2Node_DynamicCast_AsSquad_Stats_Widget2, bool K2Node_DynamicCast_bSuccess2, class USquadStatsWidget_C* K2Node_DynamicCast_AsSquad_Stats_Widget3, bool K2Node_DynamicCast_bSuccess3, int32 CallFunc_GetIndexOfSelectedSquadSlot_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class USquadSlotDetailsPanel_C* K2Node_DynamicCast_AsSquad_Slot_Details_Panel, bool K2Node_DynamicCast_bSuccess4, int32 K2Node_ComponentBoundEvent_SquadSlotIndex, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, class UHeroSquadBonuses_C* K2Node_DynamicCast_AsHero_Squad_Bonuses, bool K2Node_DynamicCast_bSuccess5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeroSquadManagementScreen_C", "ExecuteUbergraph_HeroSquadManagementScreen");

	Params::UHeroSquadManagementScreen_C_ExecuteUbergraph_HeroSquadManagementScreen_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_DynamicCast_AsSquad_Stats_Widget = K2Node_DynamicCast_AsSquad_Stats_Widget;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_DynamicCast_AsSquad_Stats_Widget2 = K2Node_DynamicCast_AsSquad_Stats_Widget2;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.K2Node_DynamicCast_AsSquad_Stats_Widget3 = K2Node_DynamicCast_AsSquad_Stats_Widget3;
	Parms.K2Node_DynamicCast_bSuccess3 = K2Node_DynamicCast_bSuccess3;
	Parms.CallFunc_GetIndexOfSelectedSquadSlot_ReturnValue = CallFunc_GetIndexOfSelectedSquadSlot_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_DynamicCast_AsSquad_Slot_Details_Panel = K2Node_DynamicCast_AsSquad_Slot_Details_Panel;
	Parms.K2Node_DynamicCast_bSuccess4 = K2Node_DynamicCast_bSuccess4;
	Parms.K2Node_ComponentBoundEvent_SquadSlotIndex = K2Node_ComponentBoundEvent_SquadSlotIndex;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_DynamicCast_AsHero_Squad_Bonuses = K2Node_DynamicCast_AsHero_Squad_Bonuses;
	Parms.K2Node_DynamicCast_bSuccess5 = K2Node_DynamicCast_bSuccess5;

	UObject::ProcessEvent(Func, &Parms);

}

}


