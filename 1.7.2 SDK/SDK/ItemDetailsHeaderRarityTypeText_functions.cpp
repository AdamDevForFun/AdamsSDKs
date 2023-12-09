#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ItemDetailsHeaderRarityTypeText.ItemDetailsHeaderRarityTypeText_C
// (None)

class UClass* UItemDetailsHeaderRarityTypeText_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ItemDetailsHeaderRarityTypeText_C");

	return Clss;
}


// ItemDetailsHeaderRarityTypeText_C ItemDetailsHeaderRarityTypeText.Default__ItemDetailsHeaderRarityTypeText_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UItemDetailsHeaderRarityTypeText_C* UItemDetailsHeaderRarityTypeText_C::GetDefaultObj()
{
	static class UItemDetailsHeaderRarityTypeText_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UItemDetailsHeaderRarityTypeText_C*>(UItemDetailsHeaderRarityTypeText_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ItemDetailsHeaderRarityTypeText.ItemDetailsHeaderRarityTypeText_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UItemDetailsHeaderRarityTypeText_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemDetailsHeaderRarityTypeText_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ItemDetailsHeaderRarityTypeText.ItemDetailsHeaderRarityTypeText_C.HandlePostDifferentItemToDetailSet
// (Event, Protected, BlueprintEvent)
// Parameters:

void UItemDetailsHeaderRarityTypeText_C::HandlePostDifferentItemToDetailSet()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemDetailsHeaderRarityTypeText_C", "HandlePostDifferentItemToDetailSet");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ItemDetailsHeaderRarityTypeText.ItemDetailsHeaderRarityTypeText_C.HandlePostDifferentItemToCompareWithSet
// (Event, Protected, BlueprintEvent)
// Parameters:

void UItemDetailsHeaderRarityTypeText_C::HandlePostDifferentItemToCompareWithSet()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemDetailsHeaderRarityTypeText_C", "HandlePostDifferentItemToCompareWithSet");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ItemDetailsHeaderRarityTypeText.ItemDetailsHeaderRarityTypeText_C.ExecuteUbergraph_ItemDetailsHeaderRarityTypeText
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortItemType           CallFunc_GetType_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortRarity             CallFunc_GetRarity_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_ToText_ReturnValue                                      (None)
// struct FFortRarityItemData         CallFunc_BPGetRarityData_ReturnValue                             (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor2                                    (None)
// class UFortItemDefinition*         CallFunc_GetSchematicCraftingResultBP_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortWeaponItemDefinition*   K2Node_DynamicCast_AsFort_Weapon_Item_Definition                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemDetailsHeaderRarityTypeText_C::ExecuteUbergraph_ItemDetailsHeaderRarityTypeText(int32 EntryPoint, enum class EFortItemType CallFunc_GetType_ReturnValue, enum class EFortRarity CallFunc_GetRarity_ReturnValue, class FText CallFunc_ToText_ReturnValue, const struct FFortRarityItemData& CallFunc_BPGetRarityData_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, const struct FSlateColor& K2Node_MakeStruct_SlateColor, class FText CallFunc_Format_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor2, class UFortItemDefinition* CallFunc_GetSchematicCraftingResultBP_ReturnValue, class UFortWeaponItemDefinition* K2Node_DynamicCast_AsFort_Weapon_Item_Definition, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemDetailsHeaderRarityTypeText_C", "ExecuteUbergraph_ItemDetailsHeaderRarityTypeText");

	Params::UItemDetailsHeaderRarityTypeText_C_ExecuteUbergraph_ItemDetailsHeaderRarityTypeText_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetType_ReturnValue = CallFunc_GetType_ReturnValue;
	Parms.CallFunc_GetRarity_ReturnValue = CallFunc_GetRarity_ReturnValue;
	Parms.CallFunc_ToText_ReturnValue = CallFunc_ToText_ReturnValue;
	Parms.CallFunc_BPGetRarityData_ReturnValue = CallFunc_BPGetRarityData_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_MakeStruct_SlateColor2 = K2Node_MakeStruct_SlateColor2;
	Parms.CallFunc_GetSchematicCraftingResultBP_ReturnValue = CallFunc_GetSchematicCraftingResultBP_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Weapon_Item_Definition = K2Node_DynamicCast_AsFort_Weapon_Item_Definition;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


