#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x120 - 0x118)
// BlueprintGeneratedClass TT_Generic_AdrenalineRush.TT_Generic_AdrenalineRush_C
class UTT_Generic_AdrenalineRush_C : public UFortGameplayAbilityTooltip
{
public:
	class UGA_Generic_AdrenalineRush_C*          AdrenalineRushAbilityInstance;                     // 0x118(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UTT_Generic_AdrenalineRush_C* GetDefaultObj();

	bool GetApplicationTag(class UGameplayAbility* AbilityInstance, struct FGameplayTag* OutTag, class UGA_Generic_AdrenalineRush_C* K2Node_DynamicCast_AsGA_Generic_Adrenaline_Rush, bool K2Node_DynamicCast_bSuccess);
	bool GetTextForTokenFromAbilityInstanceInternal(class UGameplayAbility* AbilityInstance, struct FGameplayTag& Tag, class UFortTooltipContext* Context, struct FGameplayTag& Token, class FText* OutText, class UGA_Generic_AdrenalineRush_C* AdrenalineRush, bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess, class UGA_Generic_AdrenalineRush_C* K2Node_DynamicCast_AsGA_Generic_Adrenaline_Rush, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class FText Temp_text_Variable, int32 CallFunc_Round_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_Conv_FloatToText_ReturnValue, class FText Temp_text_Variable2, bool Temp_bool_Variable, int32 CallFunc_Round_ReturnValue2, class FText K2Node_Select_Default, class FText CallFunc_Conv_IntToText_ReturnValue2, class FText Temp_text_Variable3, class FText Temp_text_Variable4, bool Temp_bool_Variable2, class FText K2Node_Select2_Default);
	void InitializeAbilityInstanceInternal(class UGameplayAbility* AbilityInstance, class UFortTooltipContext* Context, class UGA_Generic_AdrenalineRush_C* K2Node_DynamicCast_AsGA_Generic_Adrenaline_Rush, bool K2Node_DynamicCast_bSuccess);
};

}


