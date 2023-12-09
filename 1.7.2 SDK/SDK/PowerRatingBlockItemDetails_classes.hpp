#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x250 - 0x238)
// WidgetBlueprintGeneratedClass PowerRatingBlockItemDetails.PowerRatingBlockItemDetails_C
class UPowerRatingBlockItemDetails_C : public UCommonUserWidget
{
public:
	class UImage*                                PowerRatingIconImage;                              // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStatNumericTextBlock_C*               PowerRatingText;                                   // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         IsComparing;                                       // 0x248(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_30BB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        PowerRatingForComparison;                          // 0x24C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UPowerRatingBlockItemDetails_C* GetDefaultObj();

	void ClearComparison();
	void UpdateComparison(enum class EFortBuffState Temp_byte_Variable, enum class EFortBuffState Temp_byte_Variable2, bool Temp_bool_Variable, enum class EFortBuffState Temp_byte_Variable3, bool Temp_bool_Variable2, enum class EFortBuffState Temp_byte_Variable4, bool Temp_bool_Variable3, float CallFunc_GetTargetValue_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, enum class EFortBuffState K2Node_Select_Default, enum class EFortBuffState K2Node_Select2_Default, enum class EFortBuffState K2Node_Select3_Default);
	void SetPowerRatingValueForComparison(int32 Value);
	void SetPowerRatingFromItem(class UFortItem* Item, float InterpolationDuration, int32 CallFunc_GetRating_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void SetPowerRatingValue(int32 PowerRating, float InterpolationDuration, bool CallFunc_NotEqual_FloatFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue);
};

}


