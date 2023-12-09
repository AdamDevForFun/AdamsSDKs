#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1A8 (0x410 - 0x268)
// WidgetBlueprintGeneratedClass RewardsWidget.RewardsWidget_C
class URewardsWidget_C : public UFortQuestRewardChoiceWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x268(0x8)(Transient, DuplicateTransient)
	class UWidgetAnimation*                      OpenChestAni_open;                                 // 0x270(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      OpenChestAni;                                      // 0x278(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULegacyButtonIconText_C*               ButtonClaimRewards;                                // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            ChoicePromptText;                                  // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ClosedChest;                                       // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_0;                                           // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_8;                                           // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Details_Icon;                                // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_GodRays;                                     // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Header;                                      // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              MissionRewardsIntroOverlay;                        // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULegacyButtonIconText_C*               OpenChestButton;                                   // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              OverlayRewards;                                    // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPopupFrame_C*                         PopupFrame;                                        // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                QuestRewardBackground1;                            // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                QuestRewardBackgroundCircle;                       // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            RewardScrollBox;                                   // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Details_Description;                          // 0x2F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Details_Name;                                 // 0x300(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_Header;                                  // 0x308(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBoxBody;                                   // 0x310(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAudioComponent*                       Audio;                                             // 0x318(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortConversation*                     QuestConversation;                                 // 0x320(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            Header_Image;                                      // 0x328(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsSelectingRewards;                                // 0x330(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2EA7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortQuestItem*                        RewardsQuest;                                      // 0x338(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class URewardsWidget_C*                      ThisWidget;                                        // 0x340(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FFortItemInstanceQuantityPair> RewardsToPopulate;                                 // 0x348(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class AAnnounce_Gen_Quest_Conversation_C*    ConversationActor;                                 // 0x358(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortQuestItem*                        ClaimedQuest;                                      // 0x360(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class URewardsChoiceButtonWidget_C*>  RewardsWidgets;                                    // 0x368(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FSlateBrush                           ChestIntroImage;                                   // 0x378(0x90)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         bRewardsShown;                                     // 0x408(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2EA8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        PlayerChoice;                                      // 0x40C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class URewardsWidget_C* GetDefaultObj();

	void OnHandleAction(struct FEventReply* Result, bool* bPassThrough, const struct FEventReply& CallFunc_Handled_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
	struct FEventReply On_ClosedChest_MouseButtonDown_1(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Handled_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
	void GetClosedChestImage(class UTexture2D** ChestImage, class UTexture2D* ClosedChestImage, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortUIRewardReport* CallFunc_GetLastMissionRewardReport_ReturnValue, int32 CallFunc_GetRewardDisplayLevel_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess);
	void TerminateQuestConverstation(bool CallFunc_IsValid_ReturnValue);
	void Init();
	void SetupQuestRewardsChoice(class UFortQuestItem* Quest, class FText HeaderText, class UFortQuestItemDefinition* CallFunc_GetQuestDefinitionBP_ReturnValue, TArray<struct FFortMcpQuestRewardInfo>& CallFunc_GetSelectableRewards_BP_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, int32 Temp_int_Variable, TArray<struct FFortItemInstanceQuantityPair>& CallFunc_GetPreviewSelectableRewards_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void CreateRewardChoice(TArray<struct FFortItemInstanceQuantityPair>& Rewards, int32 RewardIndex, bool IsRewardSelection, class FText Temp_text_Variable, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class URewardsChoiceButtonWidget_C* CallFunc_Create_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool Temp_bool_Variable, class UItemOrWidget_C* CallFunc_Create_ReturnValue2, class UPanelSlot* CallFunc_AddChild_ReturnValue, class FText Temp_text_Variable2, class UPanelSlot* CallFunc_AddChild_ReturnValue2, bool Temp_bool_Variable2, int32 CallFunc_Array_Add_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, bool CallFunc_Not_PreBool_ReturnValue, class FText K2Node_Select_Default, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility K2Node_Select2_Default);
	void SelectRewards(int32 RewardIndex, int32 Temp_int_Array_Index_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class URewardsChoiceButtonWidget_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void PlayQuestConversation(class UFortConversation* Conversation, const struct FFortClientAnnouncementData_Conversation& K2Node_MakeStruct_FortClientAnnouncementData_Conversation, TArray<class AFortPlayerController*>& CallFunc_GetLocalFortPlayerControllers_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AAnnounce_Gen_Quest_Conversation_C* CallFunc_FinishSpawningActor_ReturnValue);
	void OnConversationEnded();
	void GetChestImage(class UTexture2D** MissionIcon, class UTexture2D* Header_Image, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortUIRewardReport* CallFunc_GetLastMissionRewardReport_ReturnValue, int32 CallFunc_GetRewardDisplayLevel_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess);
	class FText SelectText(class FText& InText, class FText Default, bool Temp_bool_Variable, bool CallFunc_TextIsEmpty_ReturnValue, class FText K2Node_Select_Default);
	void PopulateFromMissionWithRewards(const struct FFortLastMissionInfo& LastMissionInfo, TArray<struct FFortItemInstanceQuantityPair>& MissionRewards);
	void PopulateMissionUI(const struct FFortLastMissionInfo& Mission, class FText CallFunc_SelectText_ReturnValue, class FText CallFunc_SelectText_ReturnValue2);
	void SetupUI(enum class ERewardType RewardType, class UTexture2D* HeaderImage, class FText HeaderText, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum2_CmpSuccess, class UTexture2D* CallFunc_GetClosedChestImage_ChestImage, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush2, class UTexture2D* CallFunc_GetChestImage_MissionIcon);
	void PopulateFromQuestWithRewards(class UFortQuestItem* Quest, TArray<struct FFortItemInstanceQuantityPair>& Rewards);
	void PopulateQuestUI(class UFortQuestItem* Quest, bool RewardSelect, enum class ESlateVisibility Temp_byte_Variable, class UFortQuestItemDefinition* CallFunc_GetQuestDefinitionBP_ReturnValue, class UFortQuestItemDefinition* CallFunc_GetQuestDefinitionBP_ReturnValue2, class UFortConversation* CallFunc_GetSelectRewardsConversation_ReturnValue, class FText CallFunc_GetCompletionText_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_IsValid_ReturnValue, class FText CallFunc_GetDisplayName_ReturnValue, class UFortConversation* CallFunc_GetClaimConversation_ReturnValue, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_IsValid_ReturnValue3, enum class ESlateVisibility Temp_byte_Variable2, bool Temp_bool_Variable, enum class EFortBrushSize Temp_byte_Variable3, enum class ESlateVisibility K2Node_Select_Default, enum class EFortBrushSize Temp_byte_Variable4, bool Temp_bool_Variable2, enum class EFortBrushSize K2Node_Select2_Default, const struct FSlateBrush& CallFunc_GetItemSmallPreviewImageBrush_ReturnValue);
	void PopulateFromQuest(class UFortQuestItem* Quest, TArray<struct FFortItemInstanceQuantityPair>& CallFunc_GetPreviewRewards_ReturnValue);
	void BndEvt__ButtonIconText_K2Node_ComponentBoundEvent_377_FortBaseButtonClicked__DelegateSignature(class UFortBaseButton* Button);
	void Destruct();
	void BndEvt__ButtonIconText_C_0_K2Node_ComponentBoundEvent_70_FortBaseButtonClicked__DelegateSignature(class UFortBaseButton* Button);
	void SetQuest(class UFortQuestItem* Quest);
	void Construct();
	void HandleClientEvent_ConversationFinished(class UObject* EventSource, class UObject* EventFocus, struct FFortClientEvent& ClientEvent);
	void BndEvt__OpenChestButton_K2Node_ComponentBoundEvent_234_FortBaseButtonClicked__DelegateSignature(class UFortBaseButton* Button);
	void HandleImageClickedEvent();
	void HandleSkipOpenEvent();
	void ExecuteUbergraph_RewardsWidget(int32 EntryPoint, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, class UFortBaseButton* K2Node_ComponentBoundEvent_Button2, class UFortQuestItem* K2Node_Event_Quest, class UObject* K2Node_HandleClientEvent_EventSource, class UObject* K2Node_HandleClientEvent_EventFocus, const struct FFortClientEvent& K2Node_HandleClientEvent_ClientEvent, class UFortBaseButton* K2Node_ComponentBoundEvent_Button, class UTexture2D* CallFunc_GetChestImage_MissionIcon, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue, class UFortBaseButton* K2Node_ComponentBoundEvent_Button3);
};

}


