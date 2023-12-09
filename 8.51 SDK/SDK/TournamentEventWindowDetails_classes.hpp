#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF8 (0x6C8 - 0x5D0)
// WidgetBlueprintGeneratedClass TournamentEventWindowDetails.TournamentEventWindowDetails_C
class UTournamentEventWindowDetails_C : public UFortShowdownDetailView
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x5D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      PayoutHover;                                       // 0x5D8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      LeaderboardHover;                                  // 0x5E0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      RefreshData;                                       // 0x5E8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      RefreshTime;                                       // 0x5F0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      RefreshDate;                                       // 0x5F8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                               Border_SubheaderBG;                                // 0x600(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEventsSimpleButton_C*                 Button_Leaderboard;                                // 0x608(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEventsSimpleButton_C*                 Button_Payout;                                     // 0x610(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         CommonBorder_LeaderboardButtonBG;                  // 0x618(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         CommonBorder_PayoutButtonBG;                       // 0x620(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         CommonBorder_StartingScore;                        // 0x628(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 CommonWidgetSwitcher_isFuture;                     // 0x630(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEventScoreRow_C*                      EliminationsInfo;                                  // 0x638(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      EventDateText;                                     // 0x640(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBox_SquadInfoContainer;                  // 0x648(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEventScoreBigStat_C*                  MatchesPlayedInfo;                                 // 0x650(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      MatchTypeText;                                     // 0x658(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_LeaderboardButton;                         // 0x660(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_PayoutButton;                              // 0x668(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEventScoreRow_C*                      PlacementInfo;                                     // 0x670(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEventScoreBigStat_C*                  PointsScoredInfo;                                  // 0x678(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                        RichTextBlock_OtherReason;                         // 0x680(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Text_BusFare;                                      // 0x688(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TournamentContextText;                             // 0x690(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEventScoreRow_C*                      VictoryRoyaleInfo;                                 // 0x698(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	UMulticastInlineDelegateProperty_            ViewLeaderboard;                                   // 0x6A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         AllowLeaderboardAccess;                            // 0x6B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5047[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastInlineDelegateProperty_            ViewPayouts;                                       // 0x6B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UTournamentEventWindowDetails_C* GetDefaultObj();

	void RefreshDataBP();
	void EventColorize();
	void BndEvt__Button_Leaderboard_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__Button_Leaderboard_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__Button_Leaderboard_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__Button_Payout_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__Button_Payout_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__Button_Payout_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void ExecuteUbergraph_TournamentEventWindowDetails(int32 EntryPoint, bool Temp_bool_Variable, int32 Temp_int_Variable, enum class EFortEventWindowEligibility Temp_byte_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, enum class EFortEventWindowEligibility Temp_byte_Variable_1, class FText Temp_text_Variable_4, class FText Temp_text_Variable_5, class FText Temp_text_Variable_6, class FText Temp_text_Variable_7, enum class EFortEventWindowEligibility Temp_byte_Variable_2, class FText Temp_text_Variable_8, class FText Temp_text_Variable_9, class FText Temp_text_Variable_10, class FText Temp_text_Variable_11, enum class EFortEventWindowEligibility Temp_byte_Variable_3, class FText Temp_text_Variable_12, class FText Temp_text_Variable_13, class FText Temp_text_Variable_14, class FText Temp_text_Variable_15, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_4, enum class ESlateVisibility Temp_byte_Variable_5, bool Temp_bool_Variable_2, class FText Temp_text_Variable_16, bool Temp_bool_Variable_3, enum class ESlateVisibility Temp_byte_Variable_6, enum class ESlateVisibility Temp_byte_Variable_7, int32 Temp_int_Variable_1, int32 Temp_int_Variable_2, int32 Temp_int_Variable_3, int32 Temp_int_Variable_4, int32 Temp_int_Variable_5, int32 Temp_int_Variable_6, int32 Temp_int_Variable_7, int32 Temp_int_Variable_8, int32 Temp_int_Variable_9, int32 Temp_int_Variable_10, float Temp_float_Variable, enum class EFortShowdownEventState Temp_byte_Variable_8, class FText Temp_text_Variable_17, class FText Temp_text_Variable_18, class FText Temp_text_Variable_19, class FText Temp_text_Variable_20, class FText Temp_text_Variable_21, class FText Temp_text_Variable_22, class FText Temp_text_Variable_23, class FText Temp_text_Variable_24, enum class EFortShowdownEventState Temp_byte_Variable_9, enum class ESlateVisibility Temp_byte_Variable_10, enum class ESlateVisibility Temp_byte_Variable_11, class FText CallFunc_GetText_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool Temp_bool_Variable_4, enum class ESlateVisibility Temp_byte_Variable_12, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_13, enum class EFortShowdownMatchType CallFunc_GetTournamentMatchType_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, float CallFunc_PauseAnimation_ReturnValue, float CallFunc_GetStartTime_ReturnValue, float CallFunc_PauseAnimation_ReturnValue_1, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_GetEndTime_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue, int32 CallFunc_GetTournamentPinUnlockScore_ReturnValue, bool Temp_bool_Variable_5, const struct FFortShowdownEventBestResultsSummary& CallFunc_GetEventResultsSummary_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, const struct FSlateColor& K2Node_MakeStruct_SlateColor, int32 CallFunc_GetTournamentMatchCap_ReturnValue, float Temp_float_Variable_1, class UCommonButton* K2Node_ComponentBoundEvent_Button_5, bool CallFunc_IsEventLeaderboardAvailable_ReturnValue, bool CallFunc_IsEventLeaderboardAvailable_ReturnValue_1, const class FString& CallFunc_GetTournamentId_ReturnValue, const class FString& CallFunc_GetEventId_ReturnValue, bool Temp_bool_Variable_6, class UCommonButton* K2Node_ComponentBoundEvent_Button_4, float K2Node_Select_Default_1, class UCommonButton* K2Node_ComponentBoundEvent_Button_3, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, float CallFunc_PauseAnimation_ReturnValue_2, float CallFunc_GetStartTime_ReturnValue_1, float CallFunc_PauseAnimation_ReturnValue_3, bool CallFunc_LessEqual_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_1, float CallFunc_GetEndTime_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3, float CallFunc_Subtract_FloatFloat_ReturnValue_1, float CallFunc_PauseAnimation_ReturnValue_4, float CallFunc_GetStartTime_ReturnValue_2, float CallFunc_PauseAnimation_ReturnValue_5, bool CallFunc_LessEqual_FloatFloat_ReturnValue_2, float CallFunc_Add_FloatFloat_ReturnValue_2, float CallFunc_GetEndTime_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_4, float CallFunc_Subtract_FloatFloat_ReturnValue_2, float Temp_float_Variable_2, bool CallFunc_BooleanAND_ReturnValue_1, int32 CallFunc_GetEventWindowSessionNumber_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, bool Temp_bool_Variable_7, class FText CallFunc_Format_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue_1, enum class EFortEventWindowEligibility CallFunc_GetEventWindowEligibility_ReturnValue, class FText K2Node_Select_Default_3, class FText K2Node_Select_Default_4, bool Temp_bool_Variable_8, class FText K2Node_Select_Default_5, enum class EFortEventWindowEligibility CallFunc_GetEventWindowEligibility_ReturnValue_1, float K2Node_Select_Default_6, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_5, class FText K2Node_Select_Default_7, float Temp_float_Variable_3, const struct FFortShowdownEventBestResultsSummary& CallFunc_GetEventResultsSummary_ReturnValue_1, const struct FDateTime& CallFunc_GetEventBeginTime_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, class FText CallFunc_GetEventDateAsText_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, bool CallFunc_NotEqual_IntInt_ReturnValue, class FText CallFunc_Format_ReturnValue_1, enum class ESlateVisibility K2Node_Select_Default_8, const struct FDateTime& CallFunc_GetEventEndTime_ReturnValue, class FText CallFunc_GetEventDateAsText_ReturnValue_1, bool CallFunc_EqualEqual_TextText_ReturnValue, const struct FDateTime& CallFunc_GetEventBeginTime_ReturnValue_1, class FText CallFunc_GetEventTimeAsText_ReturnValue, const struct FDateTime& CallFunc_GetEventEndTime_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, class FText CallFunc_GetEventTimeAsText_ReturnValue_1, bool Temp_bool_Variable_9, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, const struct FDateTime& CallFunc_GetEventBeginTime_ReturnValue_2, float K2Node_Select_Default_9, class FText CallFunc_GetEventDateAsText_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_6, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_4, const struct FDateTime& CallFunc_GetEventEndTime_ReturnValue_2, float Temp_float_Variable_4, class FText CallFunc_GetEventDateAsText_ReturnValue_3, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_5, enum class EFortShowdownEventState CallFunc_GetEventTimeState_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_2, class FText CallFunc_Format_ReturnValue_2, class FText K2Node_Select_Default_10, class FText K2Node_Select_Default_11, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_6, enum class EFortShowdownEventState CallFunc_GetEventPlayerParticipationState_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_3, class FText CallFunc_Format_ReturnValue_3, int32 K2Node_Select_Default_12, bool CallFunc_NotEqual_TextText_ReturnValue, bool CallFunc_IsEventLeaderboardAvailable_ReturnValue_2, class UCommonButton* K2Node_ComponentBoundEvent_Button_2, enum class ESlateVisibility K2Node_Select_Default_13, const class FString& CallFunc_GetEventId_ReturnValue_1, float CallFunc_PauseAnimation_ReturnValue_6, float CallFunc_GetStartTime_ReturnValue_3, float CallFunc_PauseAnimation_ReturnValue_7, bool CallFunc_LessEqual_FloatFloat_ReturnValue_3, float CallFunc_Add_FloatFloat_ReturnValue_3, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_7, float CallFunc_GetEndTime_ReturnValue_3, float CallFunc_PauseAnimation_ReturnValue_8, float CallFunc_Subtract_FloatFloat_ReturnValue_3, float CallFunc_GetStartTime_ReturnValue_4, float K2Node_Select_Default_14, bool CallFunc_LessEqual_FloatFloat_ReturnValue_4, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_8, float CallFunc_PauseAnimation_ReturnValue_9, float CallFunc_GetEndTime_ReturnValue_4, float CallFunc_Add_FloatFloat_ReturnValue_4, float CallFunc_Subtract_FloatFloat_ReturnValue_4, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_9, float K2Node_Select_Default_15, class UCommonButton* K2Node_ComponentBoundEvent_Button_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_10, class UCommonButton* K2Node_ComponentBoundEvent_Button);
	void ViewPayouts__DelegateSignature(const class FString& EventWindowId);
	void ViewLeaderboard__DelegateSignature(const class FString& TournamentId, const class FString& EventId);
};

}


