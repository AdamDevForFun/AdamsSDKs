#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x124 (0x79C - 0x678)
// WidgetBlueprintGeneratedClass MissionSetDetails.MissionSetDetails_C
class UMissionSetDetails_C : public UAthenaChallengeSetDetails_Missions
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x678(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      BacktoNormalTimeline;                              // 0x680(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      NewPrestigeTimeline;                               // 0x688(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      PrestigeFX_Off;                                    // 0x690(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      PrestigeFX;                                        // 0x698(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      ItemInfoIntroOutro;                                // 0x6A0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Intro;                                             // 0x6A8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class USizeBox*                              CameraFramingWidget;                               // 0x6B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCloseButton_C*                        CloseButton;                                       // 0x6B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonRichTextBlock*                  CommonRichTextBlock;                               // 0x6C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonRichTextBlock*                  CommonRichTextBlock_95;                            // 0x6C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                CompletionCheck;                                   // 0x6D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                CompletionCheck_1;                                 // 0x6D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                HeaderBase;                                        // 0x6E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Icon_BattlePass;                                   // 0x6E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Icon_LimitedTime;                                  // 0x6F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Icon_Prestige;                                     // 0x6F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          ItemInfo;                                          // 0x700(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortLazyImage*                        LazyImage_Background;                              // 0x708(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortLazyImage*                        LazyImage_MaterChase;                              // 0x710(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Prestige_Shimmer;                                  // 0x718(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Prestige_Shine_Header;                             // 0x720(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                PrestigeBorder;                                    // 0x728(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                PrestigeIcon_1;                                    // 0x730(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                             SafeZone_0;                                        // 0x738(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                             ScaleBoxTextScale;                                 // 0x740(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          TextDisplay;                                       // 0x748(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  PrestigeBundleText;                                // 0x750(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  ViewPrestigeMissions;                              // 0x768(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  ViewNormalMissions;                                // 0x780(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                        FXRenderOpacity;                                   // 0x798(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UMissionSetDetails_C* GetDefaultObj();

	void AnimateInNormalTimeline(class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue);
	void AnimateInPrestigeTimeline(class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue);
	void SetPrestigeFXStatePrestige(float CallFunc_GetRenderOpacity_ReturnValue);
	void AnimatePrestigeFX_Off(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue);
	void AnimatePrestigeFX(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue);
	void SetPrestigeFXStateNormal(float CallFunc_GetRenderOpacity_ReturnValue);
	void SetupPrestigeFXColors(const struct FLinearColor& PrimaryColor, const struct FLinearColor& SecondaryColor, const struct FLinearColor& AccentColor, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1);
	class UWidget* GetWidgetForFramingViewedItem();
	void SetDynamicColors(class UImage* DetailsDynamicMaterialTarget, struct FFortChallengeSetStyle& FortChallengeSetStyle, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue);
	void HandleBack(bool* PassThrough);
	void Construct();
	void UpdateLevelUpBundleButtonText();
	void StylePageForPrestige();
	void StylePageForNormal(bool FirstRun);
	void HidePriestigeInfo(bool bHidePriestigeUpsell);
	void VeiwingBundleLevelChanged();
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnChallengeSetEstablished(struct FFortChallengeSetStyle& DisplayStyle, bool bIsComplete);
	void ExecuteUbergraph_MissionSetDetails(int32 EntryPoint, const struct FFortChallengeSetStyle& K2Node_Event_DisplayStyle, bool K2Node_Event_bIsComplete, const struct FLinearColor& CallFunc_GetChallengeStyleLightAccentColor_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, bool CallFunc_CanLevelBundle_ReturnValue, class UIconTextButton_C* K2Node_DynamicCast_AsIcon_Text_Button, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsCurrentlyViewPrestige_ReturnValue, bool CallFunc_IsCurrentlyViewPrestige_ReturnValue_1, bool K2Node_CustomEvent_FirstRun, bool K2Node_Event_bHidePriestigeUpsell, class UCircleArrowButton_C* K2Node_DynamicCast_AsCircle_Arrow_Button, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsCurrentlyViewPrestige_ReturnValue_2, TSoftObjectPtr<class UTexture2D> CallFunc_GetChaseRewardForBundleLevel_ReturnValue, bool CallFunc_IsAssetNull_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, float CallFunc_MakeLiteralFloat_ReturnValue, float CallFunc_MakeLiteralFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_IsUrgentMission_ReturnValue, bool CallFunc_HandleBack_PassThrough, class UMissionProgressDisplay_C* K2Node_DynamicCast_AsMission_Progress_Display, bool K2Node_DynamicCast_bSuccess_2, class UItemInfoHeaderWidget_C* K2Node_DynamicCast_AsItem_Info_Header_Widget, bool K2Node_DynamicCast_bSuccess_3, class UMissionProgressDisplay_C* K2Node_DynamicCast_AsMission_Progress_Display_1, bool K2Node_DynamicCast_bSuccess_4, class UCircleArrowButton_C* K2Node_DynamicCast_AsCircle_Arrow_Button_1, bool K2Node_DynamicCast_bSuccess_5, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UCircleArrowButton_C* K2Node_DynamicCast_AsCircle_Arrow_Button_2, bool K2Node_DynamicCast_bSuccess_6, class UCommonButton* K2Node_ComponentBoundEvent_Button);
};

}


