#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x118 - 0x118)
// BlueprintGeneratedClass TT_Commando_DebilitatingShots.TT_Commando_DebilitatingShots_C
class UTT_Commando_DebilitatingShots_C : public UFortGameplayAbilityTooltip
{
public:

	static class UClass* StaticClass();
	static class UTT_Commando_DebilitatingShots_C* GetDefaultObj();

	bool BP_GetTokenizedDescriptionText(class UObject* ObjectToDescribe, struct FGameplayTag& Tag, class UFortTooltipContext* Context, TArray<class FText>* OutDescription, TArray<class FText>& K2Node_MakeArray_Array);
	bool GetTextForTokenFromAbilityInstanceInternal(class UGameplayAbility* AbilityInstance, struct FGameplayTag& Tag, class UFortTooltipContext* Context, struct FGameplayTag& Token, class FText* OutText, class UGA_Commando_DebilitatingShots_C* DibilitatingShots, bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess, class UGA_Commando_DebilitatingShots_C* K2Node_DynamicCast_AsGA_Commando_Debilitating_Shots, bool K2Node_DynamicCast_bSuccess, class FText CallFunc_Conv_IntToText_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_Abs_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, class FText Temp_text_Variable, int32 CallFunc_FTrunc_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText Temp_text_Variable2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, bool Temp_bool_Variable, class FText K2Node_Select_Default);
	void InitializeAbilityInstanceInternal(class UGameplayAbility* AbilityInstance, class UFortTooltipContext* Context, class UGA_Commando_DebilitatingShots_C* K2Node_DynamicCast_AsGA_Commando_Debilitating_Shots, bool K2Node_DynamicCast_bSuccess);
};

}


