#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x950 - 0x940)
// BlueprintGeneratedClass GA_Athena_DogSweater_PlayerPassiveFX.GA_Athena_DogSweater_PlayerPassiveFX_C
class UGA_Athena_DogSweater_PlayerPassiveFX_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x940(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTag                          DogSweaterStormFX;                                 // 0x948(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_Athena_DogSweater_PlayerPassiveFX_C* GetDefaultObj();

	void Removed_9B18571947D88D2D392E9F919618BA07();
	void Added_F23CD61E4EBADE7B3BAE168A97EA634F();
	void Removed_793DD4E543340613E22CAA8B94E118F2();
	void Added_EC6ED2E74606B29C554DD8B234BF411B();
	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_Athena_DogSweater_PlayerPassiveFX(int32 EntryPoint, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, class UAbilityTask_WaitGameplayTagRemoved* CallFunc_WaitGameplayTagRemove_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue, bool CallFunc_IsValid_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UAbilityTask_WaitGameplayTagAdded* CallFunc_WaitGameplayTagAdd_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue_1, class UAbilityTask_WaitGameplayTagRemoved* CallFunc_WaitGameplayTagRemove_ReturnValue_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsValid_ReturnValue_2, class UAbilityTask_WaitGameplayTagAdded* CallFunc_WaitGameplayTagAdd_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_IsServer_ReturnValue, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue_1, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput_1, bool CallFunc_HasMatchingGameplayTag_ReturnValue_1, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_3, class APlayerPawn_Athena_C* K2Node_DynamicCast_AsPlayer_Pawn_Athena, bool K2Node_DynamicCast_bSuccess, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue_2, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput_2, bool CallFunc_HasMatchingGameplayTag_ReturnValue_2, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_4, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_5, class APlayerPawn_Athena_C* K2Node_DynamicCast_AsPlayer_Pawn_Athena_1, bool K2Node_DynamicCast_bSuccess_1, class APlayerPawn_Athena_C* K2Node_DynamicCast_AsPlayer_Pawn_Athena_2, bool K2Node_DynamicCast_bSuccess_2, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_6, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue_3, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput_3, bool CallFunc_HasMatchingGameplayTag_ReturnValue_3, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_7, class APlayerPawn_Athena_C* K2Node_DynamicCast_AsPlayer_Pawn_Athena_3, bool K2Node_DynamicCast_bSuccess_3);
};

}


