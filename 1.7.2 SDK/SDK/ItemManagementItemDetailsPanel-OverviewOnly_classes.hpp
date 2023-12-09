#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x2A0 - 0x260)
// WidgetBlueprintGeneratedClass ItemManagementItemDetailsPanel-OverviewOnly.ItemManagementItemDetailsPanel-OverviewOnly_C
class UItemManagementItemDetailsPanelMinusOverviewOnly_C : public UFortItemDetailsPanel
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(Transient, DuplicateTransient)
	class UCommonTextBlock*                      ItemDescription;                                   // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      ItemDisplayNameText;                               // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          NoSelectionDetailsBox;                             // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      NoSelectionText;                                   // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       RootWidgetSwitcher;                                // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              SelectedItemDetailsOverlay;                        // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      SelectionPromptText;                               // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UItemManagementItemDetailsPanelMinusOverviewOnly_C* GetDefaultObj();

	void SetDescriptionText(class UFortTooltipUIContext* CallFunc_GetContext_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, class FText CallFunc_GetDescription_ReturnValue, enum class ESlateVisibility Temp_byte_Variable2, bool Temp_bool_Variable, bool Temp_bool_Variable2, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UFortTooltipContext* CallFunc_SpawnTooltipContextWithSource_ReturnValue, bool CallFunc_IsValid_ReturnValue, class FText CallFunc_GetCombinedDescription_OutDescription, bool CallFunc_GetCombinedDescription_ReturnValue, class FText K2Node_Select_Default, bool CallFunc_TextIsEmpty_ReturnValue, enum class ESlateVisibility K2Node_Select2_Default);
	void HandleDifferentItemToDetailSet();
	void ExecuteUbergraph_ItemManagementItemDetailsPanelMinusOverviewOnly(int32 EntryPoint, class FText CallFunc_GetDisplayName_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}


