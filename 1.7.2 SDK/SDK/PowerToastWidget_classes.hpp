#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x91 (0x2F1 - 0x260)
// WidgetBlueprintGeneratedClass PowerToastWidget.PowerToastWidget_C
class UPowerToastWidget_C : public UFortPlayerTrackerBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(Transient, DuplicateTransient)
	class UWidgetAnimation*                      LookAtMe;                                          // 0x268(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      Outro;                                             // 0x270(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      Intro;                                             // 0x278(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      BoostedPower;                                      // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Description;                                       // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_2;                                           // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Power;                                       // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                LineSeparator;                                     // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPlayerBanner_C*                       PlayerBanner;                                      // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                PowerIconGlow;                                     // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TeamMemberPower;                                   // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Title;                                             // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortUINotification*                   ToastNotification;                                 // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        AnimationFinishedDelay;                            // 0x2D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_371D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnFinishedToast;                                   // 0x2D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FTimerHandle                          AnimationDelayTimer;                               // 0x2E8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                         Show_Toast;                                        // 0x2F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UPowerToastWidget_C* GetDefaultObj();

	void StartIntro(bool CallFunc_IsAnimationPlaying_ReturnValue);
	void ShowText(class FText Text, class UCommonTextBlock* TextBlock, class UCommonTextBlock* LocalTextBlock, class FText LocalText, bool CallFunc_TextIsEmpty_ReturnValue);
	void SetToast(class UFortUINotification* Toast, class FText CallFunc_MakeLiteralText_ReturnValue);
	void HandleIntroFinished();
	void HandleOutroFinished();
	void HandleAnimationDelay();
	void OnMouseEnter(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent);
	void OnMouseLeave(struct FPointerEvent& MouseEvent);
	void BndEvt__OpenButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnPlayerInfoChanged(const struct FFortTeamMemberInfo& NewInfo);
	void Construct();
	void BndEvt__Intro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature();
	void BndEvt__Outro_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature();
	void OnTeamMemberFinishedSynchronizing_Event_0(const struct FUniqueNetIdRepl& NewTeamMemberId);
	void ExecuteUbergraph_PowerToastWidget(int32 EntryPoint, class UHomeBaseContext* CallFunc_GetContext_ReturnValue, class UFortPartyContext* CallFunc_GetContext_ReturnValue2, int32 CallFunc_GetLocalPlayerHomebaseRating_Rating, float CallFunc_GetLocalPlayerHomebaseRating_ProgressFraction, bool CallFunc_GetLocalPlayerHomebaseRating_ReturnValue, const struct FFortTeamMemberInfo& CallFunc_GetLocalPlayerTeamMemberInfo_LocalPlayerInfo, class UFortPartyContext* CallFunc_GetContext_ReturnValue3, class UFortUITeamInfo* CallFunc_GetLocalPlayerTeam_ReturnValue, int32 CallFunc_GetTeamHomebaseRating_Rating, float CallFunc_GetTeamHomebaseRating_ProgressFraction, bool CallFunc_GetTeamHomebaseRating_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, bool CallFunc_Greater_IntInt_ReturnValue, class FText CallFunc_Format_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue4, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, const struct FPointerEvent& K2Node_Event_MouseEvent2, const struct FPointerEvent& K2Node_Event_MouseEvent, class UCommonButton* K2Node_ComponentBoundEvent_Button, const struct FFortTeamMemberInfo& K2Node_Event_NewInfo, enum class ESlateVisibility Temp_byte_Variable, int32 CallFunc_GetHomebaseRating_Rating, float CallFunc_GetHomebaseRating_ProgressFraction, bool CallFunc_GetHomebaseRating_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, enum class ESlateVisibility Temp_byte_Variable2, const struct FUniqueNetIdRepl& K2Node_CustomEvent_NewTeamMemberId, bool Temp_bool_Variable, bool CallFunc_EqualEqual_UniqueNetIdReplUniqueNetIdRepl_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue2);
	void OnFinishedToast__DelegateSignature();
};

}


