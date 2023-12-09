#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x118 - 0x118)
// BlueprintGeneratedClass TT_Commando_AmmoRecovery1.TT_Commando_AmmoRecovery1_C
class UTT_Commando_AmmoRecovery1_C : public UFortGameplayAbilityTooltip
{
public:

	static class UClass* StaticClass();
	static class UTT_Commando_AmmoRecovery1_C* GetDefaultObj();

	bool GetTextForTokenFromAbilityInstanceInternal(class UGameplayAbility* AbilityInstance, struct FGameplayTag& Tag, class UFortTooltipContext* Context, struct FGameplayTag& Token, class FText* OutText, class UGA_Commando_AmmoRecovery_C* AmmoRecovery, bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess, class UGA_Commando_AmmoRecovery_C* K2Node_DynamicCast_AsGA_Commando_Ammo_Recovery, bool K2Node_DynamicCast_bSuccess, class FText CallFunc_Conv_IntToText_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void InitializeAbilityInstanceInternal(class UGameplayAbility* AbilityInstance, class UFortTooltipContext* Context, class UGA_Commando_AmmoRecovery_C* K2Node_DynamicCast_AsGA_Commando_Ammo_Recovery, bool K2Node_DynamicCast_bSuccess);
};

}


