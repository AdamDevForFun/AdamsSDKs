#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x480 - 0x448)
// WidgetBlueprintGeneratedClass AthenaBannerSelectModal.AthenaBannerSelectModal_C
class UAthenaBannerSelectModal_C : public UFortBannerSelectModal
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x448(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonBorder*                         BorderTouch;                                       // 0x450(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_LocalPlayerBannerEditor_C*         BP_LocalPlayerBannerEditor;                        // 0x458(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULightbox_C*                           Lightbox;                                          // 0x460(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                             ScaleBox_Banner;                                   // 0x468(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FDataTableRowHandle                   CloseAction;                                       // 0x470(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class UAthenaBannerSelectModal_C* GetDefaultObj();

	struct FEventReply On_BorderTouch_MouseButtonDown_0(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Unhandled_ReturnValue, bool CallFunc_IsMobileGame_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue);
	void Setup_Input_Action_Handlers(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void HandleCloseAction(bool* PassThrough, bool CallFunc_Attempt_Leave_Picker_Left);
	void Construct();
	void BndEvt__BP_LocalPlayerBannerEditor_K2Node_ComponentBoundEvent_18_CloseBannerEditor__DelegateSignature(class FName IconId, class FName ColorId);
	void BP_OnDeactivated();
	void BP_OnActivated();
	void Close();
	void ExecuteUbergraph_AthenaBannerSelectModal(int32 EntryPoint, bool CallFunc_IsMobileGame_ReturnValue, bool CallFunc_HandleCloseAction_PassThrough, bool CallFunc_HandleCloseAction_PassThrough_1, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, class FName K2Node_ComponentBoundEvent_IconId, class FName K2Node_ComponentBoundEvent_ColorId);
};

}


