#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1D8 (0x508 - 0x330)
// WidgetBlueprintGeneratedClass StatsListItemWIdget.StatsListItemWIdget_C
class UStatsListItemWIdget_C : public UFortAttributeListItem_NUI
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(Transient, DuplicateTransient)
	class UImage*                                BasicPairBuffArrow;                                // 0x338(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                BasicPairIcon;                                     // 0x340(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      BasicPairLabel;                                    // 0x348(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      BasicPairValue;                                    // 0x350(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                BasicSingleBuffArrow;                              // 0x358(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      BasicSingleValue;                                  // 0x360(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               Border_StatDeltaColor;                             // 0x368(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ClampedValuePaired;                                // 0x370(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ClampedValueSingle;                                // 0x378(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_74;                                          // 0x380(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         PairedBackgroundBorder;                            // 0x388(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        PairedHbox;                                        // 0x390(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        Single;                                            // 0x398(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         SingleBackgroundBorder;                            // 0x3A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                               Spacer_0;                                          // 0x3A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               StatBackground;                                    // 0x3B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       SwitcherPairedBasic;                               // 0x3B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VBStatHeader;                                      // 0x3C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSlateBrush                           StatIcon;                                          // 0x3C8(0x90)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FSlateBrush                           NormalBorderStyle;                                 // 0x458(0x90)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         Indent;                                            // 0x4E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_1EB5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  OverrideStateName;                                 // 0x4F0(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UStatsListItemWIdget_C* GetDefaultObj();

	class UWidget* GetListItemTooltipWidget(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, const struct FFortDisplayAttribute& CallFunc_GetCurrentAttributeCopy_OutDisplayAttribute, class UCommonUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsUsingGamepad_ReturnValue, class UUserWidget* CallFunc_Create_Basic_Tooltip_Output);
	void SetStatIcon(const struct FSlateBrush& NewParam);
	void UpdateBuffArrows(const struct FFortDisplayAttribute& CurrentAttribute, const struct FFortDisplayAttribute& LocalCurrentAttribute, float Temp_float_Variable, float Temp_float_Variable2, float Temp_float_Variable3, enum class EFortClampState Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility Temp_byte_Variable3, enum class ESlateVisibility Temp_byte_Variable4, enum class EFortComparisonType Temp_byte_Variable5, float Temp_float_Variable4, float Temp_float_Variable5, float Temp_float_Variable6, float Temp_float_Variable7, enum class EFortComparisonType Temp_byte_Variable6, float K2Node_Select_Default, enum class ESlateVisibility Temp_byte_Variable7, enum class ESlateVisibility Temp_byte_Variable8, enum class ESlateVisibility Temp_byte_Variable9, enum class ESlateVisibility Temp_byte_Variable10, enum class ESlateVisibility K2Node_Select2_Default, enum class ESlateVisibility K2Node_Select3_Default, enum class EFortClampState Temp_byte_Variable11, float K2Node_Select4_Default);
	void UpdateBasicPairLabel(const struct FFortDisplayAttribute& CurrentAttribute, class FText CallFunc_GetEmptyText_ReturnValue, bool CallFunc_NotEqual_TextText_ReturnValue);
	void UpdateValueText(const struct FFortDisplayAttribute& CurrentAttribute);
	void UpdateType(const struct FFortDisplayAttribute& CurrentAttribute, enum class EFortStatValueDisplayType Temp_byte_Variable, class UWidget* K2Node_Select_Default);
	void UpdateColors(const struct FFortDisplayAttribute& CurrentAttribute, const struct FFortDisplayAttribute& LocalCurrentAttribute, const struct FLinearColor& BuffColor, const struct FLinearColor& BaseColor, enum class EFortBuffState Temp_byte_Variable, const struct FLinearColor& CallFunc_Get_Base___Buff_Colors_Base, const struct FLinearColor& CallFunc_Get_Base___Buff_Colors_Buff, enum class EFortComparisonType Temp_byte_Variable2, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_NotEqual_TextText_ReturnValue, const struct FLinearColor& K2Node_Select_Default, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FLinearColor& K2Node_Select2_Default);
	void Update(const struct FFortDisplayAttribute& CurrentAttribute, const struct FFortDisplayAttribute& CallFunc_GetCurrentAttributeCopy_OutDisplayAttribute);
	void DisplayAttributeChanged();
	void PreviewStarted();
	void PreviewEnded();
	void ValueChanged(float Delta);
	void Construct();
	void ExecuteUbergraph_StatsListItemWIdget(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, float K2Node_Event_Delta, const struct FFortDisplayAttribute& CallFunc_GetCurrentAttributeCopy_OutDisplayAttribute, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select_Default);
};

}


