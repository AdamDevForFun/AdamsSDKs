#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass RewardsListEntry.RewardsListEntry_C
// (None)

class UClass* URewardsListEntry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RewardsListEntry_C");

	return Clss;
}


// RewardsListEntry_C RewardsListEntry.Default__RewardsListEntry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URewardsListEntry_C* URewardsListEntry_C::GetDefaultObj()
{
	static class URewardsListEntry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URewardsListEntry_C*>(URewardsListEntry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function RewardsListEntry.RewardsListEntry_C.ConfigForSchematic
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void URewardsListEntry_C::ConfigForSchematic()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RewardsListEntry_C", "ConfigForSchematic");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RewardsListEntry.RewardsListEntry_C.ConfigForCommonRewards
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void URewardsListEntry_C::ConfigForCommonRewards()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RewardsListEntry_C", "ConfigForCommonRewards");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RewardsListEntry.RewardsListEntry_C.ConfigForTransformKey
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void URewardsListEntry_C::ConfigForTransformKey()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RewardsListEntry_C", "ConfigForTransformKey");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RewardsListEntry.RewardsListEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void URewardsListEntry_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RewardsListEntry_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RewardsListEntry.RewardsListEntry_C.ConfigForPeople
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void URewardsListEntry_C::ConfigForPeople()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RewardsListEntry_C", "ConfigForPeople");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RewardsListEntry.RewardsListEntry_C.ExecuteUbergraph_RewardsListEntry
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ERewardListEntryType    Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable2                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable3                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortItemType           CallFunc_GetType_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateBrush                 CallFunc_GetItemSmallPreviewImageBrush_ReturnValue               (None)
// struct FLinearColor                CallFunc_GetRarityColor_ReturnValue                              (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// struct FSlateBrush                 CallFunc_GetItemSmallPreviewImageBrush_ReturnValue2              (None)
// class FText                        CallFunc_GetDisplayName_ReturnValue                              (None)
// enum class ESlateVisibility        Temp_byte_Variable5                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// struct FLinearColor                CallFunc_GetRarityColor_ReturnValue2                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor2                                    (None)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumInStack_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetDisplayName_ReturnValue2                             (None)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetEmptyText_ReturnValue                                (None)
// class FText                        CallFunc_GetDisplayName_ReturnValue3                             (None)
// bool                               CallFunc_EqualEqual_TextText_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetPrimaryCategory_ItemCategoryText                     (None)
// bool                               CallFunc_GetPrimaryCategory_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateBrush                 CallFunc_GetItemSmallPreviewImageBrush_ReturnValue3              (None)
// enum class ESlateVisibility        Temp_byte_Variable6                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetPrimaryCategory_ItemCategoryText2                    (None)
// bool                               CallFunc_GetPrimaryCategory_ReturnValue2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData2                            (HasGetValueTypeHash)
// class FText                        CallFunc_GetDisplayName_ReturnValue4                             (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData3                            (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array2                                          (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue2                                     (None)
// enum class ERewardListEntryType    Temp_byte_Variable7                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select3_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void URewardsListEntry_C::ExecuteUbergraph_RewardsListEntry(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, enum class ERewardListEntryType Temp_byte_Variable2, int32 Temp_int_Variable, int32 Temp_int_Variable2, int32 Temp_int_Variable3, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable3, enum class ESlateVisibility Temp_byte_Variable4, enum class EFortItemType CallFunc_GetType_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FSlateBrush& CallFunc_GetItemSmallPreviewImageBrush_ReturnValue, const struct FLinearColor& CallFunc_GetRarityColor_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateBrush& CallFunc_GetItemSmallPreviewImageBrush_ReturnValue2, class FText CallFunc_GetDisplayName_ReturnValue, enum class ESlateVisibility Temp_byte_Variable5, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const struct FLinearColor& CallFunc_GetRarityColor_ReturnValue2, const struct FSlateColor& K2Node_MakeStruct_SlateColor2, int32 K2Node_Select_Default, int32 CallFunc_GetNumInStack_ReturnValue, class FText CallFunc_GetDisplayName_ReturnValue2, float CallFunc_Conv_IntToFloat_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, enum class ESlateVisibility K2Node_Select2_Default, class FText CallFunc_GetEmptyText_ReturnValue, class FText CallFunc_GetDisplayName_ReturnValue3, bool CallFunc_EqualEqual_TextText_ReturnValue, class FText CallFunc_GetPrimaryCategory_ItemCategoryText, bool CallFunc_GetPrimaryCategory_ReturnValue, const struct FSlateBrush& CallFunc_GetItemSmallPreviewImageBrush_ReturnValue3, enum class ESlateVisibility Temp_byte_Variable6, class FText CallFunc_GetPrimaryCategory_ItemCategoryText2, bool CallFunc_GetPrimaryCategory_ReturnValue2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData2, class FText CallFunc_GetDisplayName_ReturnValue4, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData3, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array2, class FText CallFunc_Format_ReturnValue2, enum class ERewardListEntryType Temp_byte_Variable7, enum class ESlateVisibility K2Node_Select3_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RewardsListEntry_C", "ExecuteUbergraph_RewardsListEntry");

	Params::URewardsListEntry_C_ExecuteUbergraph_RewardsListEntry_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable2 = Temp_int_Variable2;
	Parms.Temp_int_Variable3 = Temp_int_Variable3;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.Temp_byte_Variable4 = Temp_byte_Variable4;
	Parms.CallFunc_GetType_ReturnValue = CallFunc_GetType_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetItemSmallPreviewImageBrush_ReturnValue = CallFunc_GetItemSmallPreviewImageBrush_ReturnValue;
	Parms.CallFunc_GetRarityColor_ReturnValue = CallFunc_GetRarityColor_ReturnValue;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.CallFunc_GetItemSmallPreviewImageBrush_ReturnValue2 = CallFunc_GetItemSmallPreviewImageBrush_ReturnValue2;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.Temp_byte_Variable5 = Temp_byte_Variable5;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_GetRarityColor_ReturnValue2 = CallFunc_GetRarityColor_ReturnValue2;
	Parms.K2Node_MakeStruct_SlateColor2 = K2Node_MakeStruct_SlateColor2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetNumInStack_ReturnValue = CallFunc_GetNumInStack_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue2 = CallFunc_GetDisplayName_ReturnValue2;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.CallFunc_GetEmptyText_ReturnValue = CallFunc_GetEmptyText_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue3 = CallFunc_GetDisplayName_ReturnValue3;
	Parms.CallFunc_EqualEqual_TextText_ReturnValue = CallFunc_EqualEqual_TextText_ReturnValue;
	Parms.CallFunc_GetPrimaryCategory_ItemCategoryText = CallFunc_GetPrimaryCategory_ItemCategoryText;
	Parms.CallFunc_GetPrimaryCategory_ReturnValue = CallFunc_GetPrimaryCategory_ReturnValue;
	Parms.CallFunc_GetItemSmallPreviewImageBrush_ReturnValue3 = CallFunc_GetItemSmallPreviewImageBrush_ReturnValue3;
	Parms.Temp_byte_Variable6 = Temp_byte_Variable6;
	Parms.CallFunc_GetPrimaryCategory_ItemCategoryText2 = CallFunc_GetPrimaryCategory_ItemCategoryText2;
	Parms.CallFunc_GetPrimaryCategory_ReturnValue2 = CallFunc_GetPrimaryCategory_ReturnValue2;
	Parms.K2Node_MakeStruct_FormatArgumentData2 = K2Node_MakeStruct_FormatArgumentData2;
	Parms.CallFunc_GetDisplayName_ReturnValue4 = CallFunc_GetDisplayName_ReturnValue4;
	Parms.K2Node_MakeStruct_FormatArgumentData3 = K2Node_MakeStruct_FormatArgumentData3;
	Parms.K2Node_MakeArray_Array2 = K2Node_MakeArray_Array2;
	Parms.CallFunc_Format_ReturnValue2 = CallFunc_Format_ReturnValue2;
	Parms.Temp_byte_Variable7 = Temp_byte_Variable7;
	Parms.K2Node_Select3_Default = K2Node_Select3_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}


