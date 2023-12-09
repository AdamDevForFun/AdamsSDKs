#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x14E (0xC58 - 0xB0A)
// BlueprintGeneratedClass GA_Commando_DebilitatingShots.GA_Commando_DebilitatingShots_C
class UGA_Commando_DebilitatingShots_C : public UGAT_CommandoTriggeredAbility_C
{
public:
	uint8                                        Pad_2B31[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB10(0x8)(Transient, DuplicateTransient)
	struct FGameplayTag                          TC_IsGun;                                          // 0xB18(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          EventActivation;                                   // 0xB20(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UClass*                                GE_DebilitatingShots;                              // 0xB28(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          EventComplete;                                     // 0xB30(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          EventDirectTrigger;                                // 0xB38(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                        StackCount;                                        // 0xB40(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        DefaultStackCount;                                 // 0xB44(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        PerfectEngineeringStack;                           // 0xB48(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B32[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayAbilityTargetDataHandle      TargetData;                                        // 0xB50(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                 TC_LingeringPain;                                  // 0xB70(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                 TC_DebilitationTraining;                           // 0xB90(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                 TC_Kneecapper;                                     // 0xBB0(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                 TC_HackStackBreaker;                               // 0xBD0(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                GE_LingeringPain;                                  // 0xBF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DebuffValue;                                       // 0xBF8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DefaultValue;                                      // 0xBFC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        KneecapperValue;                                   // 0xC00(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DebuffDuration;                                    // 0xC04(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                GE_DebilitationTraining_FatigueInstant;            // 0xC08(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 TC_IsAfflicted;                                    // 0xC10(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	class AFortPawn*                             HitTargetPawn;                                     // 0xC30(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                GE_DebilitationTraining_FatigueDuration;           // 0xC38(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Kneecapper;                                        // 0xC40(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         DebilitationTraining;                              // 0xC41(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         LingeringPain;                                     // 0xC42(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2B33[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MaxStacks;                                         // 0xC44(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        LingeringPainStacks;                               // 0xC48(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        DefaultStacks;                                     // 0xC4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       PS;                                                // 0xC50(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_Commando_DebilitatingShots_C* GetDefaultObj();

	void SetupAbility(class UAbilitySystemComponent* AbilitySystem, int32 CallFunc_SelectInt_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAllMatchingGameplayTags_TagContainerInterface2_CastInput, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue2, bool Temp_bool_Variable, float K2Node_Select_Default, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAllMatchingGameplayTags_TagContainerInterface3_CastInput, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue3);
	void SetupDebilitationTraining(struct FGameplayEffectSpecHandle* EffectspecOutInstant, struct FGameplayEffectSpecHandle* EffectspecOutDuration, const struct FGameplayEffectSpecHandle& CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue, const struct FGameplayEffectSpecHandle& CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue2);
	void SetupAppliedEffect(float Magnitude, float Duration, int32 Stack_Count, const struct FGameplayEffectSpecHandle& EffectSpecHandle, struct FGameplayEffectSpecHandle* EffectspecHandleOut, const struct FGameplayEffectSpecHandle& CallFunc_AssignSetByCallerMagnitude_ReturnValue, const struct FGameplayEffectSpecHandle& CallFunc_AssignSetByCallerMagnitude_ReturnValue2, const struct FGameplayEffectSpecHandle& CallFunc_SetStackCount_ReturnValue);
	void SetupGameplayEffect(const struct FGameplayTag& EventTag, class AActor* HitActor, class UObject* OptionalObject, struct FGameplayAbilityTargetDataHandle* Target_Data, class UClass** DebilitatingShots, int32* Effect_Level, int32* Stack_Count, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromActor_ReturnValue, bool CallFunc_MatchesTag_ReturnValue);
	bool K2_ShouldAbilityRespondToEvent(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayEventData& Payload, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasTag_ReturnValue, bool CallFunc_MatchesTag_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue2, bool CallFunc_BooleanOR_ReturnValue);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void ExecuteUbergraph_GA_Commando_DebilitatingShots(int32 EntryPoint, const struct FGameplayEffectSpecHandle& CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue, const struct FGameplayEffectSpecHandle& CallFunc_SetupDebilitationTraining_EffectspecOutInstant, const struct FGameplayEffectSpecHandle& CallFunc_SetupDebilitationTraining_EffectspecOutDuration, const struct FGameplayEffectSpecHandle& CallFunc_SetupAppliedEffect_EffectspecHandleOut, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAllMatchingGameplayTags_TagContainerInterface2_CastInput, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue, TArray<struct FActiveGameplayEffectHandle>& CallFunc_K2_ApplyGameplayEffectSpecToTarget_ReturnValue, TArray<struct FActiveGameplayEffectHandle>& CallFunc_K2_ApplyGameplayEffectSpecToTarget_ReturnValue2, TArray<struct FActiveGameplayEffectHandle>& CallFunc_K2_ApplyGameplayEffectSpecToTarget_ReturnValue3, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, const struct FGameplayEventData& K2Node_Event_EventData, const struct FGameplayAbilityTargetDataHandle& CallFunc_SetupGameplayEffect_Target_Data, class UClass* CallFunc_SetupGameplayEffect_DebilitatingShots, int32 CallFunc_SetupGameplayEffect_Effect_Level, int32 CallFunc_SetupGameplayEffect_Stack_Count, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess, const struct FGameplayEffectSpecHandle& CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue2, const struct FGameplayEffectSpecHandle& CallFunc_SetupAppliedEffect_EffectspecHandleOut2, TArray<struct FActiveGameplayEffectHandle>& CallFunc_K2_ApplyGameplayEffectSpecToTarget_ReturnValue4, bool CallFunc_BooleanAND_ReturnValue2);
};

}


