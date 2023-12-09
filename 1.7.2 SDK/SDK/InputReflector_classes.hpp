#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x280 - 0x260)
// WidgetBlueprintGeneratedClass InputReflector.InputReflector_C
class UInputReflector_C : public UCommonInputReflector
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(Transient, DuplicateTransient)
	class UHorizontalBox*                        ButtonBox;                                         // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FMargin                               DefaultButtonMargin;                               // 0x270(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class UInputReflector_C* GetDefaultObj();

	void OnButtonAdded(class UCommonButton* AddedButton, struct FCommonInputActionHandlerData& Data);
	void ClearButtons();
	void Construct();
	void ExecuteUbergraph_InputReflector(int32 EntryPoint, class UCommonButton* K2Node_Event_AddedButton, const struct FCommonInputActionHandlerData& K2Node_Event_Data, class UIconTextButton_C* K2Node_DynamicCast_AsIcon_Text_Button, bool K2Node_DynamicCast_bSuccess, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue);
};

}


