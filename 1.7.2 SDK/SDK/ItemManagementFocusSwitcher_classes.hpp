#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x258 - 0x238)
// WidgetBlueprintGeneratedClass ItemManagementFocusSwitcher.ItemManagementFocusSwitcher_C
class UItemManagementFocusSwitcher_C : public UCommonUserWidget
{
public:
	class UIconTabButton_C*                      IconTabButton;                                     // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortItemTileView*                     TileViewA;                                         // 0x240(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItemTileView*                     TileViewB;                                         // 0x248(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItemTileView*                     PreviousFocus;                                     // 0x250(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UItemManagementFocusSwitcher_C* GetDefaultObj();

	void ExecuteFocusSwitch(class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, int32 CallFunc_GetNumItems_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UObject* CallFunc_GetSelectedItem_ReturnValue, int32 CallFunc_GetNumItems_ReturnValue2, class UObject* CallFunc_GetSelectedItem_ReturnValue2, bool CallFunc_Greater_IntInt_ReturnValue2, int32 CallFunc_GetNumItems_ReturnValue3, bool CallFunc_Greater_IntInt_ReturnValue3, class UObject* CallFunc_GetItemAt_ReturnValue, class UObject* CallFunc_GetItemAt_ReturnValue2, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_SetSelectedIndex_ReturnValue, bool CallFunc_SetSelectedIndex_ReturnValue2);
	void DeferFocusSwitch(const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UObject* CallFunc_GetSelectedItem_ReturnValue, bool CallFunc_IsValid_ReturnValue2);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, const struct FEventReply& CallFunc_Handled_ReturnValue);
};

}


