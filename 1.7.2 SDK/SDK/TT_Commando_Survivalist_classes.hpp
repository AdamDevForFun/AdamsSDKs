#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x118 - 0x118)
// BlueprintGeneratedClass TT_Commando_Survivalist.TT_Commando_Survivalist_C
class UTT_Commando_Survivalist_C : public UFortGameplayAbilityTooltip
{
public:

	static class UClass* StaticClass();
	static class UTT_Commando_Survivalist_C* GetDefaultObj();

	void ConvertSurvivalistHealthIntoModifiedHealth(float InStaticHealth, class UGameplayAbility* InAbility);
	bool GetTextForTokenFromAbilityInstanceInternal(class UGameplayAbility* AbilityInstance, struct FGameplayTag& Tag, class UFortTooltipContext* Context, struct FGameplayTag& Token, class FText* OutText, float ConvertedHealth, bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess, class UGA_Commando_Survivalist_C* K2Node_DynamicCast_AsGA_Commando_Survivalist, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FFortBaseWeaponStats& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class FText CallFunc_Conv_FloatToText_ReturnValue);
	void InitializeAbilityInstanceInternal(class UGameplayAbility* AbilityInstance, class UFortTooltipContext* Context, class UGA_Commando_Survivalist_C* K2Node_DynamicCast_AsGA_Commando_Survivalist, bool K2Node_DynamicCast_bSuccess);
};

}


