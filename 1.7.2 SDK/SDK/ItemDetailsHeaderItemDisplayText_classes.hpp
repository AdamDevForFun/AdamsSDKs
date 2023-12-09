#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x11 (0x281 - 0x270)
// WidgetBlueprintGeneratedClass ItemDetailsHeaderItemDisplayText.ItemDetailsHeaderItemDisplayText_C
class UItemDetailsHeaderItemDisplayText_C : public UFortItemDetailElementWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(Transient, DuplicateTransient)
	class UCommonTextBlock*                      ItemDisplayName;                                   // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         Show_New_System;                                   // 0x280(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UItemDetailsHeaderItemDisplayText_C* GetDefaultObj();

	void GetDisplayName(class FText* DisplayName, class UFortItemDefinition* CallFunc_GetSchematicCraftingResultBP_ReturnValue, class FText CallFunc_GetDisplayName_ReturnValue, class UFortWeaponItemDefinition* K2Node_DynamicCast_AsFort_Weapon_Item_Definition, bool K2Node_DynamicCast_bSuccess, class FText CallFunc_GetShortDisplayName_ReturnValue);
	void HandlePostDifferentItemToCompareWithSet();
	void HandlePostDifferentItemToDetailSet();
	void ExecuteUbergraph_ItemDetailsHeaderItemDisplayText(int32 EntryPoint, class FText CallFunc_GetDisplayName_DisplayName, bool Temp_bool_Variable, bool CallFunc_TextIsEmpty_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, bool Temp_bool_Variable2, enum class ESlateVisibility Temp_byte_Variable3, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility Temp_byte_Variable4, enum class EFortRarity CallFunc_GetRarity_ReturnValue, const struct FFortRarityItemData& CallFunc_BPGetRarityData_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor, class FText CallFunc_GetDisplayName_DisplayName2, bool CallFunc_TextIsEmpty_ReturnValue2, enum class ESlateVisibility K2Node_Select2_Default);
};

}


