#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x270 - 0x238)
// WidgetBlueprintGeneratedClass ItemManagementMulchConfirmationDialogContent.ItemManagementMulchConfirmationDialogContent_C
class UItemManagementMulchConfirmationDialogContent_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x238(0x8)(Transient, DuplicateTransient)
	class UScrollBox*                            ItemScrollBox;                                     // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        ItemSlots;                                         // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UFortItem*>                     ItemList;                                          // 0x250(0x10)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn)
	TArray<int32>                                ItemCounts;                                        // 0x260(0x10)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UItemManagementMulchConfirmationDialogContent_C* GetDefaultObj();

	void PreConstruct(bool IsDesignTime);
	void Construct();
	void ExecuteUbergraph_ItemManagementMulchConfirmationDialogContent(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool K2Node_Event_IsDesignTime, const struct FMargin& K2Node_MakeStruct_Margin, class UFortItem* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UMulchConfirmationItem_C* CallFunc_Create_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, int32 CallFunc_Array_Get_Item2, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue);
};

}


