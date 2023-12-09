#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass MissionRewardItem-Tooltip.MissionRewardItem-Tooltip_C
// (None)

class UClass* UMissionRewardItemMinusTooltip_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionRewardItem-Tooltip_C");

	return Clss;
}


// MissionRewardItem-Tooltip_C MissionRewardItem-Tooltip.Default__MissionRewardItem-Tooltip_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionRewardItemMinusTooltip_C* UMissionRewardItemMinusTooltip_C::GetDefaultObj()
{
	static class UMissionRewardItemMinusTooltip_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionRewardItemMinusTooltip_C*>(UMissionRewardItemMinusTooltip_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MissionRewardItem-Tooltip.MissionRewardItem-Tooltip_C.Get Rarity Color (SlateColor)
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FLinearColor                CallFunc_Get_Rarity_Color_ReturnValue                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)

struct FSlateColor UMissionRewardItemMinusTooltip_C::Get_Rarity_Color__SlateColor_(const struct FLinearColor& CallFunc_Get_Rarity_Color_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionRewardItem-Tooltip_C", "Get Rarity Color (SlateColor)");

	Params::UMissionRewardItemMinusTooltip_C_Get_Rarity_Color__SlateColor__Params Parms{};

	Parms.CallFunc_Get_Rarity_Color_ReturnValue = CallFunc_Get_Rarity_Color_ReturnValue;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MissionRewardItem-Tooltip.MissionRewardItem-Tooltip_C.Get Rarity Color
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor                ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                RarityColor                                                      (Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortRarity             CallFunc_GetRarity_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortRarityItemData         CallFunc_BPGetRarityData_ReturnValue                             (None)

struct FLinearColor UMissionRewardItemMinusTooltip_C::Get_Rarity_Color(const struct FLinearColor& RarityColor, bool CallFunc_IsValid_ReturnValue, enum class EFortRarity CallFunc_GetRarity_ReturnValue, const struct FFortRarityItemData& CallFunc_BPGetRarityData_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionRewardItem-Tooltip_C", "Get Rarity Color");

	Params::UMissionRewardItemMinusTooltip_C_Get_Rarity_Color_Params Parms{};

	Parms.RarityColor = RarityColor;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetRarity_ReturnValue = CallFunc_GetRarity_ReturnValue;
	Parms.CallFunc_BPGetRarityData_ReturnValue = CallFunc_BPGetRarityData_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MissionRewardItem-Tooltip.MissionRewardItem-Tooltip_C.Get Reward Icon
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FSlateBrush                 Reward_Icon                                                      (Edit)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateBrush                 CallFunc_GetItemSmallPreviewImageBrush_ReturnValue               (None)

struct FSlateBrush UMissionRewardItemMinusTooltip_C::Get_Reward_Icon(const struct FSlateBrush& Reward_Icon, bool CallFunc_IsValid_ReturnValue, const struct FSlateBrush& CallFunc_GetItemSmallPreviewImageBrush_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionRewardItem-Tooltip_C", "Get Reward Icon");

	Params::UMissionRewardItemMinusTooltip_C_Get_Reward_Icon_Params Parms{};

	Parms.Reward_Icon = Reward_Icon;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetItemSmallPreviewImageBrush_ReturnValue = CallFunc_GetItemSmallPreviewImageBrush_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MissionRewardItem-Tooltip.MissionRewardItem-Tooltip_C.Get Reward Name
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FText                        Reward_Name                                                      (Edit)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetDisplayName_ReturnValue                              (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default                                            (None)

class FText UMissionRewardItemMinusTooltip_C::Get_Reward_Name(class FText Reward_Name, bool Temp_bool_Variable, class FText CallFunc_GetDisplayName_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionRewardItem-Tooltip_C", "Get Reward Name");

	Params::UMissionRewardItemMinusTooltip_C_Get_Reward_Name_Params Parms{};

	Parms.Reward_Name = Reward_Name;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


