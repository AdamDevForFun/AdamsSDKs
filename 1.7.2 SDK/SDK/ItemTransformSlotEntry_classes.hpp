#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x288 - 0x238)
// WidgetBlueprintGeneratedClass ItemTransformSlotEntry.ItemTransformSlotEntry_C
class UItemTransformSlotEntry_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x238(0x8)(Transient, DuplicateTransient)
	class UPanelButton_C*                        PanelButton;                                       // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonNumericTextBlock*               SacrificePointText;                                // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortMultiSizeItemCard*                SelectedItemCard;                                  // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SlotSizeBox;                                       // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	UMulticastDelegateProperty_                  OnSlotChosen;                                      // 0x260(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UFortItem*                             CurrentItem;                                       // 0x270(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UMulticastDelegateProperty_                  OnSlotSelected;                                    // 0x278(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UItemTransformSlotEntry_C* GetDefaultObj();

	void SetSlotSelection(bool Selected);
	void SetSacrificeItem(class UFortItem* SelectedSacrificeItem, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, const struct FTransmogSacrifice& CallFunc_GetTransmogSacrificeDataFromItemDefintion_OutTransmogData, bool CallFunc_GetTransmogSacrificeDataFromItemDefintion_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue);
	void BndEvt__PanelButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__PanelButton_K2Node_ComponentBoundEvent_93_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__PanelButton_K2Node_ComponentBoundEvent_115_CommonSelectedStateChanged__DelegateSignature(class UCommonButton* Button, bool Selected);
	void ExecuteUbergraph_ItemTransformSlotEntry(int32 EntryPoint, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool K2Node_Event_IsDesignTime, class UFortCheatManager* K2Node_DynamicCast_AsFort_Cheat_Manager, bool K2Node_DynamicCast_bSuccess, bool CallFunc_ShouldUseNewItemCards_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button3, const struct FVector2D& CallFunc_GetCardDimensions_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, class UCommonButton* K2Node_ComponentBoundEvent_Button2, class UCommonButton* K2Node_ComponentBoundEvent_Button, bool K2Node_ComponentBoundEvent_Selected, class UCommonUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsUsingGamepad_ReturnValue, class UCommonUIContext* CallFunc_GetContext_ReturnValue2, bool CallFunc_IsUsingGamepad_ReturnValue2, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue2);
	void OnSlotSelected__DelegateSignature();
	void OnSlotChosen__DelegateSignature();
};

}


