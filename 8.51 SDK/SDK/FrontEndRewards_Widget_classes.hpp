#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x158 (0x530 - 0x3D8)
// WidgetBlueprintGeneratedClass FrontEndRewards_Widget.FrontEndRewards_Widget_C
class UFrontEndRewards_Widget_C : public UFortRewardNotificationWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3D8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      AnimShowBorder;                                    // 0x3E0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      AnimFadeHeader;                                    // 0x3E8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      AnimShowHeader;                                    // 0x3F0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UIconTextButton_C*                     ButtonPrimaryAction;                               // 0x3F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFrontEndRewards_ChoiceRewards_C*      ChoiceRewards;                                     // 0x400(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFrontEndRewards_Conversation_VO_C*    ConversationWidget;                                // 0x408(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFrontEndRewards_CurrentReward_C*      CurrentRewardIcon;                                 // 0x410(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFrontEndRewards_Expedition_C*         ExpeditionRewards;                                 // 0x418(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInputReflector_C*                     InputReflector;                                    // 0x420(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFrontEndRewards_ListRewards_C*        ListRewards;                                       // 0x428(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFrontEndRewards_EpicQuest_C*          NewQuest;                                          // 0x430(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URewards_Header_C*                     RewardHeader;                                      // 0x438(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFrontEndRewards_Queue_C*              RewardsQueue;                                      // 0x440(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 RewardSwitcher;                                    // 0x448(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URotatingStarburstWidget_C*            RotatingStarburst;                                 // 0x450(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                             SafeZone_4;                                        // 0x458(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                             SafeZone_5;                                        // 0x460(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                             SafeZone_6;                                        // 0x468(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBoxBottom;                                     // 0x470(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBoxTop;                                        // 0x478(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TextStorage;                                       // 0x480(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortRewardNotificationSubWidget*      CurrentSubWidget;                                  // 0x488(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsIntroComplete;                                   // 0x490(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_56F4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastInlineDelegateProperty_            OnComplete;                                        // 0x498(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         IsReadyToShowRewardWidget;                         // 0x4A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_56F5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UFortRewardNotificationSubWidget*> SubWidgets;                                        // 0x4B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                         ShowClaimedReward;                                 // 0x4C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsSubWidgetPopulated;                              // 0x4C1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsError;                                           // 0x4C2(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_56F6[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastInlineDelegateProperty_            OnRewardsClaimed;                                  // 0x4C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UItemInspectScreen_C*                  ItemInspectScreen;                                 // 0x4D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UMulticastInlineDelegateProperty_            OnRewardsClaimError;                               // 0x4E0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         ClaimErrorEnountered;                              // 0x4F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bRunningFrontEndRewards;                           // 0x4F1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         TriggerUpdateOnComplete;                           // 0x4F2(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_56F7[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortRewardNotificationData*           LastClaimedReward;                                 // 0x4F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsPendingSafePop;                                  // 0x500(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_56F8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastInlineDelegateProperty_            OnRewardsIgnored;                                  // 0x508(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         bCompleted;                                        // 0x518(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_56F9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortGiftBoxItem*                      LastGiftBox;                                       // 0x520(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFort_Entry_Music_Controller_BP_C*     MusicController;                                   // 0x528(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UFrontEndRewards_Widget_C* GetDefaultObj();

	void Play_Victory_Music(TArray<class AFort_Entry_Music_Controller_BP_C*>& CallFunc_GetAllActorsOfClass_OutActors, class AFort_Entry_Music_Controller_BP_C* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue);
	void HandleOnItemCacheRewardsClaimFailed();
	void HandleOnItemCacheRewardsClaimed(TArray<struct FFortItemInstanceQuantityPair>& Rewards, TArray<class URewards_ItemCard_C*>& CallFunc_CreateCardsFromItemInstanceQuantityList_Cards);
	void PopulateItemCacheReward(class UFortMcpContext* CallFunc_GetContext_ReturnValue, class UFortRewardItemCacheData* K2Node_DynamicCast_AsFort_Reward_Item_Cache_Data, bool K2Node_DynamicCast_bSuccess);
	void HandleOnGiftBoxRemoved(bool bSucceeded, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortMcpContext* CallFunc_GetContext_ReturnValue);
	void ShowGiftBox(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortGiftBoxItemDefinition* CallFunc_GetGiftBoxDefinition_ReturnValue, class UClass* CallFunc_TryLoadPreMessageWidgetClass_OutWidgetClass, bool CallFunc_TryLoadPreMessageWidgetClass_ReturnValue, bool CallFunc_HasPreMessageWidget_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UItemReceived_Base_C* CallFunc_Create_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue_1, class UUserWidget* CallFunc_Create_ReturnValue_1, class UItemReceived_PrePrompt_C* K2Node_DynamicCast_AsItem_Received_Pre_Prompt, bool K2Node_DynamicCast_bSuccess);
	void HandleGiftBoxOpened();
	void PopulateGiftBox(class UFortMcpContext* CallFunc_GetContext_ReturnValue, class UFortGiftBoxItem* CallFunc_GetNextGiftBox_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue_1);
	void HandleOnDifficultyIncreaseRewardsClaimFailed();
	void HandleOnDifficultyIncreaseRewardsClaimed(TArray<struct FFortItemInstanceQuantityPair>& Rewards, TArray<class URewards_ItemCard_C*>& CallFunc_CreateCardsFromItemInstanceQuantityList_Cards);
	void ClaimDifficultyIncreaseRewards(class UFortMcpContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void PopulateDifficultyIncreaseRewards();
	void HandleOnMissionRewardsClaimFailed();
	void DebugPrintChoiceReward(class UObject* Object, const class FString& CallFunc_GetDisplayName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void SafePop(class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, bool CallFunc_IsActivated_ReturnValue);
	void TriggerUpdateWhenDone();
	void HandleOnMissionAlertRewardsClaimed(TArray<struct FFortItemInstanceQuantityPair>& Rewards, TArray<class URewards_ItemCard_C*>& CallFunc_CreateCardsFromItemInstanceQuantityList_Cards);
	void ClaimMissionAlertRewards(class UFortMcpContext* CallFunc_GetContext_ReturnValue);
	void PopulateMissionAlertRewards();
	void InitRewardsQueue(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UFortRewardNotificationData* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class URewardsIcon_C* CallFunc_QueueReward_OutIcon);
	void InitializeRewardsData(struct FFrontEndRewards_Definition& FrontEndRewards_Definition, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable_3, int32 Temp_int_Array_Index_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue_3, class UFortItem* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FFortCollectionBookRewards& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, class UFortExpeditionItem* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, class UFortQuestItem* CallFunc_Array_Get_Item_3, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_3);
	void InitAdditionalRewards(const struct FFrontEndRewards_Definition& Definition);
	void HandleBorderShown();
	void SkipPopAnimation(const struct FWidgetTransform& K2Node_MakeStruct_WidgetTransform);
	void SkipOpenAnimation();
	void PopulateVO(class UFortRewardQuestData* K2Node_DynamicCast_AsFort_Reward_Quest_Data, bool K2Node_DynamicCast_bSuccess, class UFortRewardEpicQuestData* K2Node_DynamicCast_AsFort_Reward_Epic_Quest_Data, bool K2Node_DynamicCast_bSuccess_1, class UFortQuestItemDefinition* CallFunc_GetQuestDefinitionBP_ReturnValue, class UFortQuestItemDefinition* CallFunc_GetQuestDefinitionBP_ReturnValue_1, class UFortConversation* CallFunc_GetClaimConversation_ReturnValue, class UFortConversation* CallFunc_GetIntroConversation_ReturnValue);
	void HandleOnNoRewardsToClaim();
	void UnbindEvents(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 CallFunc_Array_Length_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Less_IntInt_ReturnValue, class UFortRewardNotificationSubWidget* CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_14, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_15, class UFortCollectionBookManager* CallFunc_GetCollectionBookManager_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue_2, class UFortMcpContext* CallFunc_GetContext_ReturnValue_3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_16, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_17, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_18);
	void ResetQueueState();
	void TransitionIn(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void OpenReward();
	void PopulateChoiceRewardsWidgetFromCardList(TArray<class URewards_ItemCard_C*>& Cards, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void HandleCurrentRewardTransitionOutComplete();
	void HandleOpenAnimationFinished();
	void InitSubWidgets(int32 Temp_int_Variable, class UWidget* CallFunc_GetChildAt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, class UFortRewardNotificationSubWidget* K2Node_DynamicCast_AsFort_Reward_Notification_Sub_Widget, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void HandleOnMissionRewardsClaimed(TArray<struct FFortItemInstanceQuantityPair>& Rewards, TArray<class URewards_ItemCard_C*>& CallFunc_CreateCardsFromItemInstanceQuantityList_Cards);
	void PopulateListRewardsWidgetFromCardList(TArray<class URewards_ItemCard_C*>& Cards, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void HandleOnCollectionBookRewardsClaimed(const struct FFortCollectionBookRewards& RewardRequested, bool Success, TArray<struct FFortItemInstanceQuantityPair>& ActualRewards, TArray<class URewards_ItemCard_C*>& CallFunc_CreateCardsFromItemInstanceQuantityList_Cards);
	void HandleOnQuestRewardsClaimed(class UFortQuestItem* Quest, TArray<struct FFortItemInstanceQuantityPair>& Rewards, TArray<class URewards_ItemCard_C*>& CallFunc_CreateCardsFromItemInstanceQuantityList_Cards);
	void ClaimCollectionBookChoiceReward(class UFortRewardNotificationData* NotificationData, int32 SelectionIndex, class UFortItem* Item, class UFortRewardCollectionBookData* K2Node_DynamicCast_AsFort_Reward_Collection_Book_Data, bool K2Node_DynamicCast_bSuccess, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortCollectionBookManager* CallFunc_GetCollectionBookManager_ReturnValue);
	void ClaimCollectionBookRewards(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortCollectionBookManager* CallFunc_GetCollectionBookManager_ReturnValue, class UFortRewardCollectionBookData* K2Node_DynamicCast_AsFort_Reward_Collection_Book_Data, bool K2Node_DynamicCast_bSuccess);
	void ClaimQuestListReward(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, class UFortRewardQuestData* K2Node_DynamicCast_AsFort_Reward_Quest_Data, bool K2Node_DynamicCast_bSuccess);
	void PopulateCollectionBookRewards(const TArray<struct FFortItemQuantityPair>& TempCollectionBookRewards, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class UFortRewardCollectionBookData* K2Node_DynamicCast_AsFort_Reward_Collection_Book_Data, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_HasSelectableRewards_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FFortSelectableRewardOption& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FFortItemQuantityPair& CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue, TArray<class URewards_ItemCard_C*>& CallFunc_CreateCardsFromItemQuantityList_Cards, int32 CallFunc_Array_Add_ReturnValue);
	void PopulateExpedition(class UFortRewardExpeditionData* K2Node_DynamicCast_AsFort_Reward_Expedition_Data, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_GetDisplayName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void PopulateNewQuest(class UFortRewardEpicQuestData* K2Node_DynamicCast_AsFort_Reward_Epic_Quest_Data, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_GetDisplayName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void PopulateQuestRewards(class UFortQuestItem* Quest, TArray<struct FFortItemInstanceQuantityPair>& CallFunc_GetPreviewAllSelectableRewards_ReturnValue, TArray<class URewards_ItemCard_C*>& CallFunc_CreateCardsFromItemInstanceQuantityList_Cards, class UFortRewardQuestData* K2Node_DynamicCast_AsFort_Reward_Quest_Data, bool K2Node_DynamicCast_bSuccess, class UFortQuestItemDefinition* CallFunc_GetQuestDefinitionBP_ReturnValue, enum class EFortQuestRewardType CallFunc_GetRewardType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void PopulateMissionRewards();
	void SetHeaderVisibility(bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void ClaimMissionRewards(class UFortMcpContext* CallFunc_GetContext_ReturnValue);
	void CreateCardsFromItemInstanceQuantityList(TArray<struct FFortItemInstanceQuantityPair>& Items, TArray<class URewards_ItemCard_C*>* Cards, const TArray<class URewards_ItemCard_C*>& NewCards, const TArray<enum class EFortInventoryType>& ItemInventoryTypeList, const TArray<class UFortItem*>& FortItemList, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FFortItemInstanceQuantityPair& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, class URewards_ItemCard_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, TArray<class URewards_ItemCard_C*>& CallFunc_CreateCardsFromItemList_Cards);
	void CreateCardsFromItemQuantityList(TArray<struct FFortItemQuantityPair>& Items, TArray<class URewards_ItemCard_C*>* Cards, const TArray<enum class EFortInventoryType>& ItemInventoryTypeList, const TArray<class UFortItem*>& FortItemList, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FFortItemQuantityPair& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, class UFortItemDefinition* CallFunc_GetItemFromItemQuantityPair_ReturnValue, class UFortItem* CallFunc_CreateTemporaryItemInstanceBP_ReturnValue, TArray<class URewards_ItemCard_C*>& CallFunc_CreateCardsFromItemList_Cards, int32 CallFunc_Array_Add_ReturnValue);
	void CreateCardsFromItemList(TArray<class UFortItem*>& Items, TArray<enum class EFortInventoryType>& ItemInventoryTypeList, TArray<class URewards_ItemCard_C*>* Cards, const TArray<class URewards_ItemCard_C*>& CardList, int32 CallFunc_Array_Length_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class URewards_ItemCard_C* CallFunc_Create_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class UFortItem* CallFunc_Array_Get_Item, enum class EFortInventoryType CallFunc_Array_Get_Item_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void ClaimQuestChoiceReward(class UFortRewardNotificationData* NotificationData, int32 SelectionIndex, class UFortItem* Item, class UFortRewardQuestData* K2Node_DynamicCast_AsFort_Reward_Quest_Data, bool K2Node_DynamicCast_bSuccess, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue);
	void HandleChoiceRewardSelected(int32 RewardIndex, class UFortItem* Item, class UFortRewardNotificationData* NotificationData, class UFortRewardQuestData* K2Node_DynamicCast_AsFort_Reward_Quest_Data, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class UFortQuestItemDefinition* CallFunc_GetQuestDefinitionBP_ReturnValue, enum class EFortQuestRewardType CallFunc_GetRewardType_ReturnValue, class UFortQuestItemDefinition* CallFunc_GetQuestDefinitionBP_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, TArray<struct FFortItemQuantityPair>& CallFunc_GetRewards_BP_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, const class FString& CallFunc_GetPersistentName_ReturnValue, bool CallFunc_Contains_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void InitInitialRewards(const struct FFrontEndRewards_Definition& Definition);
	void HandleExpeditionCompleted(bool Succeeded, TArray<struct FFortItemInstanceQuantityPair>& Rewards, TArray<class URewards_ItemCard_C*>& CallFunc_CreateCardsFromItemInstanceQuantityList_Cards);
	void Cleanup();
	void ShowCurrentReward(bool CallFunc_IsValid_ReturnValue, class UFortRewardEpicQuestData* K2Node_DynamicCast_AsFort_Reward_Epic_Quest_Data, bool K2Node_DynamicCast_bSuccess, class UFrontEndRewards_ChoiceRewards_C* K2Node_DynamicCast_AsFront_End_Rewards_Choice_Rewards, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_BooleanAND_ReturnValue);
	void PopulateCurrentRewardWidget(const TArray<struct FFortItemQuantityPair>& TempCollectionBookRewards, class UFortQuestItem* Quest, class UFortRewardNotificationData* RewardData, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void AdjustCurrentRewardPadding(class UOverlaySlot* K2Node_DynamicCast_AsOverlay_Slot, bool K2Node_DynamicCast_bSuccess, class UOverlaySlot* K2Node_DynamicCast_AsOverlay_Slot_1, bool K2Node_DynamicCast_bSuccess_1, const struct FMargin& K2Node_MakeStruct_Margin);
	void BindEvents(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Add_IntInt_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, class UFortCollectionBookManager* CallFunc_GetCollectionBookManager_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue_2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_14, class UFortRewardNotificationSubWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_15, class UFortMcpContext* CallFunc_GetContext_ReturnValue_3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_16, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_17, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_18);
	void HandleShowHeaderFinished(class UFortRewardQuestData* K2Node_DynamicCast_AsFort_Reward_Quest_Data, bool K2Node_DynamicCast_bSuccess);
	void PopNextReward(class UFortRewardNotificationData* NextReward, bool CallFunc_IsValid_ReturnValue, class UFortRewardNotificationData* CallFunc_DequeueReward_OutReward);
	void DropReward(class UFortRewardNotificationData* InReward);
	void HandleCurrentRewardDisplayed(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void OnNavigationLeft();
	void OnNavigationRight();
	void OnNavigationUp();
	void OnNavigationDown();
	void OnPrimaryActionDisabled();
	void OnPrimaryActionEnabled();
	void OnPrimaryActionHidden();
	void OnPrimaryActionTextChanged(class FText& Text);
	void BndEvt__ButtonOpen_K2Node_ComponentBoundEvent_26_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnActivated();
	void HideStarburst(float Delay);
	void InspectItem(class UFortItem* ItemToInspect);
	void IntroSequence();
	void Destruct();
	void OnMatchmakingOrLobbyStarted();
	void Construct();
	void ExecuteUbergraph_FrontEndRewards_Widget(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, class FText K2Node_Event_Text, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, class UWidget* CallFunc_GetActiveWidget_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_GetIsEnabled_ReturnValue, float K2Node_CustomEvent_Delay, bool CallFunc_IsValid_ReturnValue_5, class UFortItem* K2Node_Event_ItemToInspect, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_6, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UItemInspectScreen_C* CallFunc_Create_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue_2, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue_1, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_7);
	void OnRewardsIgnored__DelegateSignature(class UFrontEndRewards_Widget_C* RewardsWidget);
	void OnRewardsClaimError__DelegateSignature(class UFrontEndRewards_Widget_C* RewardsWidget);
	void OnRewardsClaimed__DelegateSignature(class UFrontEndRewards_Widget_C* RewardsWidget);
	void OnComplete__DelegateSignature();
};

}


