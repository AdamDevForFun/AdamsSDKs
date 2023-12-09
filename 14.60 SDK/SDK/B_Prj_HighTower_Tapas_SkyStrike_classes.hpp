#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xEA (0x962 - 0x878)
// BlueprintGeneratedClass B_Prj_HighTower_Tapas_SkyStrike.B_Prj_HighTower_Tapas_SkyStrike_C
class AB_Prj_HighTower_Tapas_SkyStrike_C : public AFortProjectileBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x878(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                       InAirSound;                                        // 0x880(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              ParticleSystem;                                    // 0x888(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                HighTower_Tapas_Axe;                               // 0x890(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         HitDamagable;                                      // 0x898(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6E7E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FScalableFloat                        OverlapBuildingRadius;                             // 0x8A0(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<enum class EObjectTypeQuery>          OverlapBuildingObjectType;                         // 0x8C0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<class AActor*>                        OverlapBuildingActorsToIgnore;                     // 0x8D0(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, HasGetValueTypeHash)
	class UClass*                                GE_EnvironmentalDamage;                            // 0x8E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          DestroyBuildingsTimer;                             // 0x8E8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                        ProjectileVelocity;                                // 0x8F0(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                        DestroyBuildsTick;                                 // 0x910(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DestroyBuildsBuffer;                               // 0x914(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               NewVar_0;                                          // 0x918(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6E7F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            Water_Impact_Sound;                                // 0x928(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                GE_KnockBack;                                      // 0x930(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                GE_PlayerDamage;                                   // 0x938(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                        DamagePlayersWhileFalling;                         // 0x940(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         Stopped;                                           // 0x960(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         HitWater;                                          // 0x961(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class AB_Prj_HighTower_Tapas_SkyStrike_C* GetDefaultObj();

	void OnExploded(TArray<class AActor*>& HitActors, TArray<struct FHitResult>& HitResults);
	void BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature(class AFortWaterBodyActor* WaterBody, class UFortWaterInteractionComponent* WaterInteractionComponent, bool bIsFirstBody);
	void DestroyOnTick();
	void ReceiveBeginPlay();
	void SnapToGround();
	void HitGround(const struct FVector& GroundPos);
	void ApplyHammerEffects(TArray<class AActor*>& Array, bool AlwaysDamagePlayers);
	void ExecuteUbergraph_B_Prj_HighTower_Tapas_SkyStrike(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TArray<class AActor*>& K2Node_Event_HitActors, TArray<struct FHitResult>& K2Node_Event_HitResults, class AFortWaterBodyActor* K2Node_ComponentBoundEvent_WaterBody, class UFortWaterInteractionComponent* K2Node_ComponentBoundEvent_WaterInteractionComponent, bool K2Node_ComponentBoundEvent_bIsFirstBody, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, float CallFunc_GetValueAtLevel_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& K2Node_CustomEvent_GroundPos, float CallFunc_GetValueAtLevel_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, TArray<class AActor*>& Temp_object_Variable, bool CallFunc_HasAuthority_ReturnValue_1, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_2, const struct FVector& CallFunc_SelectVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, uint8 CallFunc_GetActorTeam_ReturnValue, TArray<enum class EFortTeamAffiliation>& K2Node_MakeArray_Array, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_3, const struct FVector& CallFunc_GetWaterSurfaceInfo_WaterPlaneLocation, const struct FVector& CallFunc_GetWaterSurfaceInfo_WaterPlaneNormal, const struct FVector& CallFunc_GetWaterSurfaceInfo_WaterSurfacePosition, float CallFunc_GetWaterSurfaceInfo_WaterDepth, int32 CallFunc_GetWaterSurfaceInfo_WaterBodyIdx, const struct FVector& CallFunc_GetWaterSurfaceInfo_WaterVelocity, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, TArray<class AActor*>& K2Node_CustomEvent_Array, bool K2Node_CustomEvent_AlwaysDamagePlayers, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue_3, bool CallFunc_IsValid_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue_1, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue_2, class AFortWeakPoint* K2Node_DynamicCast_AsFort_Weak_Point, bool K2Node_DynamicCast_bSuccess, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue_2, TArray<class AActor*>& Temp_object_Variable_1, const struct FHitResult& CallFunc_LineTraceSingle_OutHit_1, bool CallFunc_LineTraceSingle_ReturnValue_1, bool CallFunc_RowToBool_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit_1, bool CallFunc_BreakHitResult_bInitialOverlap_1, float CallFunc_BreakHitResult_Time_1, float CallFunc_BreakHitResult_Distance_1, const struct FVector& CallFunc_BreakHitResult_Location_1, const struct FVector& CallFunc_BreakHitResult_ImpactPoint_1, const struct FVector& CallFunc_BreakHitResult_Normal_1, const struct FVector& CallFunc_BreakHitResult_ImpactNormal_1, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_1, class AActor* CallFunc_BreakHitResult_HitActor_1, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_1, class FName CallFunc_BreakHitResult_HitBoneName_1, int32 CallFunc_BreakHitResult_HitItem_1, int32 CallFunc_BreakHitResult_ElementIndex_1, int32 CallFunc_BreakHitResult_FaceIndex_1, const struct FVector& CallFunc_BreakHitResult_TraceStart_1, const struct FVector& CallFunc_BreakHitResult_TraceEnd_1, bool CallFunc_BooleanOR_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_2, const struct FVector& CallFunc_MakeVector_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue_1, TArray<class AActor*>& CallFunc_CapsuleOverlapActors_OutActors, bool CallFunc_CapsuleOverlapActors_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, bool CallFunc_OnSameTeam_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_2, const struct FVector& CallFunc_SelectVector_ReturnValue_1, TArray<class AActor*>& CallFunc_CapsuleOverlapActors_OutActors_1, bool CallFunc_CapsuleOverlapActors_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1);
};

}


