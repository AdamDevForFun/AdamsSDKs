#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1C (0x884 - 0x868)
// WidgetBlueprintGeneratedClass RewardsChoiceButtonWidget.RewardsChoiceButtonWidget_C
class URewardsChoiceButtonWidget_C : public UFortBaseButton
{
public:
	class UBorder*                               RewardsBorderHighlight;                            // 0x868(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URewardsListWidget_C*                  RewardsListWidget;                                 // 0x870(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URewardsWidget_C*                      Owner;                                             // 0x878(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        RewardIndex;                                       // 0x880(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class URewardsChoiceButtonWidget_C* GetDefaultObj();

	void SetHighlight(bool EnableHighlight, const struct FLinearColor& K2Node_MakeStruct_LinearColor, const struct FLinearColor& K2Node_MakeStruct_LinearColor2);
	void SelectRewards();
	struct FEventReply OnPreviewMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Unhandled_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue);
	void PopulateRewards(class URewardsWidget_C* Owner, int32 RewardIndex, TArray<struct FFortItemInstanceQuantityPair>& Rewards, const TArray<struct FFortItemInstanceQuantityPair>& EmptyArray);
};

}


