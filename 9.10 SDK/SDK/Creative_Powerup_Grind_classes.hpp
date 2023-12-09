#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1 (0x771 - 0x770)
// BlueprintGeneratedClass Creative_Powerup_Grind.Creative_Powerup_Grind_C
class ACreative_Powerup_Grind_C : public ACreative_Powerup_C
{
public:
	bool                                         ShouldShowGrindEffect;                             // 0x770(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ACreative_Powerup_Grind_C* GetDefaultObj();

	void SetupEffectData(const struct FGameplayEffectSpecHandle& EffectHandle, struct FGameplayEffectSpecHandle* OutEffectHandle, const struct FGameplayEffectSpecHandle& LocalEffectHandleRef, const struct FGameplayEffectSpecHandle& CallFunc_SetupEffectData_OutEffectHandle, const struct FGameplayEffectSpecHandle& CallFunc_AddAssetTag_ReturnValue);
};

}


