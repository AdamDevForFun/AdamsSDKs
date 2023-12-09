#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x88 (0x468 - 0x3E0)
// WidgetBlueprintGeneratedClass AthenaWinWidget.AthenaWinWidget_C
class UAthenaWinWidget_C : public UCommonActivatablePanel
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3E0(0x8)(Transient, DuplicateTransient)
	class UAthenaKillFeedWidget_C*               AthenaKillFeedWidget;                              // 0x3E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaKillsWidget_C*                  AthenaKillsWidget_78;                              // 0x3F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaPlayersLeftWidget_C*            AthenaPlayersLeftWidget_65;                        // 0x3F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      CommonTextBlock_PrimaryDeathText;                  // 0x400(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_0;                                           // 0x408(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     LeaveButton;                                       // 0x410(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FTimerHandle                          RespawnTimerHandle;                                // 0x418(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	int32                                        ReleaseTimeRemaining;                              // 0x420(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3A24[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ReadyToRespawnText;                                // 0x428(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                          ShowExtraLivesTimerHandle;                         // 0x440(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	int32                                        ResurrectTimeRemaining;                            // 0x448(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3A25[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  PlacePrefixText;                                   // 0x450(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UAthenaWinWidget_C* GetDefaultObj();

	void BndEvt__LeaveButton_K2Node_ComponentBoundEvent_76_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void PreConstruct(bool IsDesignTime);
	void OnActivated();
	void ExecuteUbergraph_AthenaWinWidget(int32 EntryPoint, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool K2Node_Event_IsDesignTime, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess);
};

}


