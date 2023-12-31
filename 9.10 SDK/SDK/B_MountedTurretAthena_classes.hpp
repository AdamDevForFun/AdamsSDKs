#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0xE60 - 0xE50)
// BlueprintGeneratedClass B_MountedTurretAthena.B_MountedTurretAthena_C
class AB_MountedTurretAthena_C : public AB_Ranged_Dual_Generic_MountedTurret_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xE50(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTag                          SnowmanCue;                                        // 0xE58(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AB_MountedTurretAthena_C* GetDefaultObj();

	void OnHostVehicleSetup();
	void MountedTurretSnowmanCheck();
	void K2_OnUnEquip();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_B_MountedTurretAthena(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, class APawn* CallFunc_GetInstigator_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, TArray<class AActor*>& CallFunc_GetAttachedActors_OutActors, int32 CallFunc_RemoveActiveEffectsWithGrantedTags_ReturnValue, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class AAthena_Player_SneakySnowman_C* K2Node_DynamicCast_AsAthena_Player_Sneaky_Snowman, bool K2Node_DynamicCast_bSuccess_1, TArray<class AActor*>& CallFunc_GetAttachedActors_OutActors_1, class AActor* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, class AAthena_Player_SneakySnowman_C* K2Node_DynamicCast_AsAthena_Player_Sneaky_Snowman_1, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class AB_MountedTurretAthena_C* K2Node_DynamicCast_AsB_Mounted_Turret_Athena, bool K2Node_DynamicCast_bSuccess_3, class AB_SneakySnowman_Athena_C* K2Node_DynamicCast_AsB_Sneaky_Snowman_Athena, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_BooleanOR_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1);
};

}


