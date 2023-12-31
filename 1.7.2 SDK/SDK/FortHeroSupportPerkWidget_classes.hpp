#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8B (0x643 - 0x5B8)
// WidgetBlueprintGeneratedClass FortHeroSupportPerkWidget.FortHeroSupportPerkWidget_C
class UFortHeroSupportPerkWidget_C : public UFortHeroSupportPerkWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x5B8(0x8)(Transient, DuplicateTransient)
	class UCommonBorder*                         BorderShell;                                       // 0x5C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 DescriptionTextSwitcher;                           // 0x5C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         EvolutionBorder;                                   // 0x5D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         HighlightBorder;                                   // 0x5D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ImageSquadBonusType;                               // 0x5E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ImageSquadBonusTypeShadow;                         // 0x5E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                InvalidForSlotImage;                               // 0x5F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      InvalidSlotText;                                   // 0x5F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                LockedPerkImage;                                   // 0x600(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         PerkBoxBorder;                                     // 0x608(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      SquadBonusTypeText;                                // 0x610(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                StarsRequired;                                     // 0x618(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      UnlockAtText;                                      // 0x620(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        UnlockText;                                        // 0x628(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UClass*                                Name_Text_Style;                                   // 0x630(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UClass*                                Description_Text_Style;                            // 0x638(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         SupportTypeMatchesDisplay;                         // 0x640(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         DisplayHeaderIfActive;                             // 0x641(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         DisplayedOutsideOfHeroSquad;                       // 0x642(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UFortHeroSupportPerkWidget_C* GetDefaultObj();

	void UpdateComparisonVisibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, bool CallFunc_IsPerkHighlighted_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void UpdateEmptyVisibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, bool CallFunc_IsPerkEmpty_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void UpdateActiveDisplay(class UClass* Temp_class_Variable, bool Temp_bool_Variable, bool Temp_bool_Variable2, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, bool Temp_bool_Variable3, int32 Temp_int_Variable, int32 Temp_int_Variable2, bool Temp_bool_Variable4, class UMaterialInterface* Temp_object_Variable, class UMaterialInterface* Temp_object_Variable2, bool Temp_bool_Variable5, enum class ESlateVisibility Temp_byte_Variable3, enum class ESlateVisibility Temp_byte_Variable4, bool CallFunc_IsPerkInCorrectSlot_ReturnValue, class UClass* Temp_class_Variable2, bool CallFunc_IsPerkInCorrectSlot_ReturnValue2, bool CallFunc_Not_PreBool_ReturnValue, bool Temp_bool_Variable6, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue2, class UClass* K2Node_Select_Default, class UMaterialInterface* K2Node_Select2_Default, const struct FSlateColor& K2Node_MakeStruct_SlateColor, bool CallFunc_BooleanAND_ReturnValue2, bool CallFunc_IsPerkActive_ReturnValue, bool CallFunc_BooleanOR_ReturnValue2, const struct FSlateColor& K2Node_MakeStruct_SlateColor2, enum class ESlateVisibility K2Node_Select3_Default, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, enum class ESlateVisibility K2Node_Select4_Default, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush2, const struct FSlateBrush& K2Node_Select5_Default, bool CallFunc_BooleanOR_ReturnValue3, int32 K2Node_Select6_Default);
	void UpdateLockedVisibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, bool CallFunc_IsPerkUnlocked_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void UpdateVisibility();
	void Update(bool DisplayedOutsideOfHeroSquad, enum class EFortSupportBonusType TargetedSupportType, enum class EFortSupportBonusType Temp_byte_Variable, class UTexture2D* Temp_object_Variable, class UTexture2D* Temp_object_Variable2, class UTexture2D* Temp_object_Variable3, enum class EFortSupportBonusType Temp_byte_Variable2, class FText Temp_text_Variable, class FText Temp_text_Variable2, class FText Temp_text_Variable3, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, class UTexture2D* K2Node_Select_Default, class FText K2Node_Select2_Default, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void OnHeroUpdated();
	void OnSupportTypeUpdated();
	void Construct();
	void OnStateChanged();
	void ExecuteUbergraph_FortHeroSupportPerkWidget(int32 EntryPoint);
};

}


