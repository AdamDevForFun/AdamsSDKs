#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x420 (0xDB0 - 0x990)
// BlueprintGeneratedClass GAB_Melee_Tool_LeapAttack_Athena.GAB_Melee_Tool_LeapAttack_Athena_C
class UGAB_Melee_Tool_LeapAttack_Athena_C : public UGAB_Melee_GenericHeavyAttack_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x990(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AActor*                                AvatarActor;                                       // 0x998(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	class AFortPlayerPawn*                       FortPawn;                                          // 0x9A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	uint8                                        Pad_66C6[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            ImpactTargetingOffset;                             // 0x9B0(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay)
	float                                        ImpactTargetingOffsetDistance;                     // 0x9E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_66C7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimMontage*                          MontageIntroAndLoop;                               // 0x9E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          MontageLandAndHit;                                 // 0x9F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Finished_Ability;                                  // 0x9F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay)
	bool                                         FinishedTargeting;                                 // 0x9F9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay)
	bool                                         FinishedRecoveryAnimation;                         // 0x9FA(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay)
	bool                                         ReachedFinishAbilityMontageStop;                   // 0x9FB(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay)
	float                                        Failsafe_Recovery_Time;                            // 0x9FC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          Outro_Failsafe_Timer_Handle;                       // 0xA00(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	class UForceFeedbackEffect*                  LaunchFeedback;                                    // 0xA08(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               LaunchVelocity;                                    // 0xA10(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Ground_Arc;                                        // 0xA1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Grav;                                              // 0xA20(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         NotLookingDown;                                    // 0xA24(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_66C8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EObjectTypeQuery>          DestroyObjectTypes;                                // 0xA28(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FTimerHandle                          BuildingDestroyTImer;                              // 0xA38(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Initial_Overlap_Box_Extents;                       // 0xA40(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        UnitsInfrontOfPawnOverlapStarts;                   // 0xA4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        OverlapAdditionalZ;                                // 0xA50(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        InitialOverlapTraceDistance;                       // 0xA54(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                HitActor;                                          // 0xA58(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle           GEJumpingFX;                                       // 0xA60(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UClass*                                BuildingDestroyGE;                                 // 0xA68(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 BoogieBombTags;                                    // 0xA70(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                        AnimPlayRate;                                      // 0xA90(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        AdditionalZDownLook;                               // 0xA94(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LandinSphereRadius;                                // 0xA98(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_66C9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        ActorsToIgnore;                                    // 0xAA0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	float                                        VehicleImpulseVelocityMultiplier;                  // 0xAB0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_66CA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FScalableFloat                        RecoveryAnimBasePlayrate;                          // 0xAB8(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        Leap_Distance_Base;                                // 0xAD8(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        LeapMinimumDistance;                               // 0xAF8(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        Leap_Distance_Air;                                 // 0xB18(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        DownSlashGravityMultiplier;                        // 0xB38(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        VelocityYClampMin;                                 // 0xB58(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        VelocityYClampMax;                                 // 0xB78(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        VelocityZClampMin;                                 // 0xB98(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        VelocityZClampMax;                                 // 0xBB8(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        TraceFrames;                                       // 0xBD8(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        PawnImpactZImpulse;                                // 0xBF8(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        VehicleZImpulse;                                   // 0xC18(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        VehicleImpulseMultiplier;                          // 0xC38(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        OnHitAnimPlayrate;                                 // 0xC58(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UAnimMontage*                          MontageLandAndHitNoRM;                             // 0xC78(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bLandingOnIce;                                     // 0xC80(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_66CB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FScalableFloat                        CapsuleHalfHeight;                                 // 0xC88(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        CapsuleRadius;                                     // 0xCA8(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class AActor*>                        JumpHitActors;                                     // 0xCC8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	struct FScalableFloat                        IcyFeetVelocityClamp;                              // 0xCD8(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         bInAirPawnCollision;                               // 0xCF8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_66CC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FScalableFloat                        PawnCollision;                                     // 0xD00(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                          GE_DamageActivationGameplayTag;                    // 0xD20(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            HitResult;                                         // 0xD28(0x88)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, ContainsInstancedReference)

	static class UClass* StaticClass();
	static class UGAB_Melee_Tool_LeapAttack_Athena_C* GetDefaultObj();

	void DoesFortPawnHavePermissionToEditWorld(bool* bHasPermissionToEditWorld, bool bHasPermission, class AController* CallFunc_GetController_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, bool CallFunc_HasPermissionToEditWorld_ReturnValue);
	bool K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, struct FGameplayTagContainer* RelevantTags, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsFlying_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void TraceCheck(const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, TArray<class AActor*>& Temp_object_Variable, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, enum class EPhysicalSurface CallFunc_GetFortPhysicalSurface_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void ApplyDamageAndImpulseGEs(class UObject* VehicleInstigator, class AActor* LeapSlamTarget, float CallFunc_GetValueAtLevel_ReturnValue, int32 Temp_int_Loop_Counter_Variable, const struct FVector& CallFunc_MakeVector_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, float CallFunc_GetValueAtLevel_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue_1, float CallFunc_GetValueAtLevel_ReturnValue_2, float CallFunc_GetValueAtLevel_ReturnValue_3, float CallFunc_GetValueAtLevel_ReturnValue_4, float CallFunc_GetValueAtLevel_ReturnValue_5, float CallFunc_GetValueAtLevel_ReturnValue_6, float CallFunc_GetValueAtLevel_ReturnValue_7, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromActor_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, TArray<struct FActiveGameplayEffectHandle>& CallFunc_ApplyGameplayEffectContainer_ReturnValue, class AFortAthenaVehicle* K2Node_DynamicCast_AsFort_Athena_Vehicle, bool K2Node_DynamicCast_bSuccess, class AFortAthenaFerretVehicle* K2Node_DynamicCast_AsFort_Athena_Ferret_Vehicle, bool K2Node_DynamicCast_bSuccess_1, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, int32 CallFunc_Array_Add_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue_2, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_3, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_2, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_2, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromActor_ReturnValue_1, TArray<struct FHitResult>& CallFunc_BoxTraceMulti_OutHits, bool CallFunc_BoxTraceMulti_ReturnValue, TArray<struct FActiveGameplayEffectHandle>& CallFunc_ApplyGameplayEffectContainer_ReturnValue_1, const struct FHitResult& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, bool CallFunc_Less_IntInt_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_4, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn_1, bool K2Node_DynamicCast_bSuccess_3, class AFortAthenaVehicle* K2Node_DynamicCast_AsFort_Athena_Vehicle_1, bool K2Node_DynamicCast_bSuccess_4, class AFortAthenaFerretVehicle* K2Node_DynamicCast_AsFort_Athena_Ferret_Vehicle_1, bool K2Node_DynamicCast_bSuccess_5, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_5, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_6, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue_1, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue_2, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_3, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_4, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_3, const struct FVector& CallFunc_MakeVector_ReturnValue_3, TArray<struct FHitResult>& CallFunc_SphereTraceMulti_OutHits, bool CallFunc_SphereTraceMulti_ReturnValue, const struct FHitResult& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_BreakHitResult_bBlockingHit_1, bool CallFunc_BreakHitResult_bInitialOverlap_1, float CallFunc_BreakHitResult_Time_1, float CallFunc_BreakHitResult_Distance_1, const struct FVector& CallFunc_BreakHitResult_Location_1, const struct FVector& CallFunc_BreakHitResult_ImpactPoint_1, const struct FVector& CallFunc_BreakHitResult_Normal_1, const struct FVector& CallFunc_BreakHitResult_ImpactNormal_1, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_1, class AActor* CallFunc_BreakHitResult_HitActor_1, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_1, class FName CallFunc_BreakHitResult_HitBoneName_1, int32 CallFunc_BreakHitResult_HitItem_1, int32 CallFunc_BreakHitResult_FaceIndex_1, const struct FVector& CallFunc_BreakHitResult_TraceStart_1, const struct FVector& CallFunc_BreakHitResult_TraceEnd_1, bool CallFunc_Less_IntInt_ReturnValue_1);
	void CameraShakeAndForceFeedback(class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue);
	void OnRep_Outro_Failsafe_Timer_Handle();
	void DestroyBuilding(TArray<struct FHitResult>& BuildingActor, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_DoesFortPawnHavePermissionToEditWorld_bHasPermissionToEditWorld, int32 CallFunc_Array_Add_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Less_IntInt_ReturnValue, const struct FHitResult& CallFunc_Array_Get_Item, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, class ABP_DeimosRift_C* K2Node_DynamicCast_AsBP_Deimos_Rift, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Add_IntInt_ReturnValue, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue, class AAthenaBarrierObjective* K2Node_DynamicCast_AsAthena_Barrier_Objective, bool K2Node_DynamicCast_bSuccess_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class ABuildingActor* K2Node_DynamicCast_AsBuilding_Actor, bool K2Node_DynamicCast_bSuccess_2, class AAthena_Prop_ParentBuildingContainerBlueprint_C* K2Node_DynamicCast_AsAthena_Prop_Parent_Building_Container_Blueprint, bool K2Node_DynamicCast_bSuccess_3, class ABuildingProp* K2Node_DynamicCast_AsBuilding_Prop, bool K2Node_DynamicCast_bSuccess_4, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue_1, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue);
	void CalculateTargetingOffsetTransform(struct FTransform* TargetingOffsetTransform, bool Temp_bool_Variable, const struct FVector& CallFunc_GetLocationAtDistanceFromActorFacing_Location, TArray<class AActor*>& K2Node_MakeArray_Array, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue_1, const struct FTransform& K2Node_Select_Default);
	void IsTargetFartherThanAdjustedDesiredLeapDistance(class AActor* PlayerActor, class AActor* TargetActor, float DesiredLandingDistance, float GapClosingPercentageWhenNearTarget, bool* TargetIsFartherThanAdjustedDesiredLeapDistance, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_FMax_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, float CallFunc_FMin_ReturnValue, float CallFunc_DistanceBetweenTwoVectors_Distance, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue);
	void CalculateLandingDistanceFromTarget(class AActor* PlayerActor, class AActor* TargetActor, float DesiredLandingDistance, float GapClosingPercentageWhenNearTarget, struct FVector* TargetLocationOffset, float LeapLandingDistanceFromTarget, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_IsTargetFartherThanAdjustedDesiredLeapDistance_TargetIsFartherThanAdjustedDesiredLeapDistance, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn_1, bool K2Node_DynamicCast_bSuccess_1, float CallFunc_GetScaledCapsuleRadius_ReturnValue, float CallFunc_GetScaledCapsuleRadius_ReturnValue_1, bool Temp_bool_Variable, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_FMax_ReturnValue, float CallFunc_FMax_ReturnValue_1, bool Temp_bool_Variable_1, float K2Node_Select_Default, float K2Node_Select_Default_1, const struct FVector& CallFunc_MakeVector_ReturnValue);
	void Ability_Setup(class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetValueAtLevel_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue, class AFortPlayerControllerZone* K2Node_DynamicCast_AsFort_Player_Controller_Zone, bool K2Node_DynamicCast_bSuccess_1);
	struct FTransform GetCustomAbilitySourceTransform();
	void OnCancelled_352A42F64EBE813D74D56DB415B7CD62();
	void OnInterrupted_352A42F64EBE813D74D56DB415B7CD62();
	void OnBlendOut_352A42F64EBE813D74D56DB415B7CD62();
	void OnCompleted_352A42F64EBE813D74D56DB415B7CD62();
	void OnSync_22429617414EC4188078988F1235BC84();
	void OnCancelled_AB9C83D743604335AF0531B0DACAEF61();
	void OnInterrupted_AB9C83D743604335AF0531B0DACAEF61();
	void OnBlendOut_AB9C83D743604335AF0531B0DACAEF61();
	void OnCompleted_AB9C83D743604335AF0531B0DACAEF61();
	void OnChange_AD790DE0455B18BDD70FE1A9CBD0DE5B(enum class EMovementMode NewMovementMode);
	void Added_7D7B60B24D2223A5D44A0889BC877870();
	void Added_654A6DE7422183CAA3D5D48DC39BE0A0();
	void PawnLanded(struct FHitResult& Hit);
	void Outro_Failsafe();
	void TryEndAbility();
	void K2_ActivateAbility();
	void Trace_ON();
	void K2_OnEndAbility(bool bWasCancelled);
	void FOR_TESTING();
	void PawnLandedAll();
	void ForceEndAbility();
	void ExecuteUbergraph_GAB_Melee_Tool_LeapAttack_Athena(int32 EntryPoint, bool Temp_bool_Variable, TArray<class AActor*>& Temp_object_Variable, enum class EMovementMode K2Node_CustomEvent_NewMovementMode, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EMovementMode Temp_byte_Variable, class UAbilityTask_WaitMovementModeChange* CallFunc_CreateWaitMovementModeChange_ReturnValue, bool CallFunc_IsValid_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UAbilityTask_WaitGameplayTagAdded* CallFunc_WaitGameplayTagAdd_ReturnValue, bool Temp_bool_Variable_1, bool CallFunc_IsValid_ReturnValue_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UAbilityTask_WaitGameplayTagAdded* CallFunc_WaitGameplayTagAdd_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class UAbilityTask_PlayMontageAndWait* CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, const struct FHitResult& K2Node_CustomEvent_Hit, bool CallFunc_IsDBNO_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_GetActorEyesViewPoint_OutLocation, const struct FRotator& CallFunc_GetActorEyesViewPoint_OutRotation, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, bool K2Node_SwitchEnum_CmpSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, float CallFunc_GetBaseAimPitchQuantized_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, bool CallFunc_InRange_FloatFloat_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FVector& CallFunc_GetActorEyesViewPoint_OutLocation_1, const struct FRotator& CallFunc_GetActorEyesViewPoint_OutRotation_1, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue_1, const struct FVector& CallFunc_GetForwardVector_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, bool K2Node_Event_bWasCancelled, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class UAbilityTask_NetworkSyncPoint* CallFunc_WaitNetSync_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, float CallFunc_Add_FloatFloat_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, TArray<struct FHitResult>& CallFunc_BoxTraceMultiForObjects_OutHits, bool CallFunc_BoxTraceMultiForObjects_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, bool CallFunc_IsValid_ReturnValue_5, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue, bool CallFunc_IsDead_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, const struct FVector& CallFunc_GetActorEyesViewPoint_OutLocation_2, const struct FRotator& CallFunc_GetActorEyesViewPoint_OutRotation_2, const struct FGameplayAbilityActorInfo& CallFunc_GetActorInfo_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue_2, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromActor_ReturnValue, TArray<struct FActiveGameplayEffectHandle>& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAnyMatchingGameplayTags_self_CastInput, bool CallFunc_HasAnyMatchingGameplayTags_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_2, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_3, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_2, float CallFunc_BreakVector_X_2, float CallFunc_BreakVector_Y_2, float CallFunc_BreakVector_Z_2, const struct FVector& CallFunc_SuggestProjectileVelocity_CustomArc_OutLaunchVelocity, bool CallFunc_SuggestProjectileVelocity_CustomArc_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue_1, float CallFunc_GetValueAtLevel_ReturnValue_2, const struct FVector& CallFunc_SuggestProjectileVelocity_CustomArc_OutLaunchVelocity_1, bool CallFunc_SuggestProjectileVelocity_CustomArc_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_4, const struct FVector& K2Node_Select_Default, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_3, const struct FVector& CallFunc_SuggestProjectileVelocity_CustomArc_OutLaunchVelocity_2, bool CallFunc_SuggestProjectileVelocity_CustomArc_ReturnValue_2, float CallFunc_GetValueAtLevel_ReturnValue_3, float CallFunc_GetValueAtLevel_ReturnValue_4, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_1, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, class UAnimMontage* K2Node_Select_Default_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_3, class UAbilityTask_PlayMontageAndWait* CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue_1, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_5, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_6, float CallFunc_GetValueAtLevel_ReturnValue_5, float CallFunc_GetValueAtLevel_ReturnValue_6, TArray<struct FHitResult>& CallFunc_CapsuleTraceMultiForObjects_OutHits, bool CallFunc_CapsuleTraceMultiForObjects_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, float CallFunc_GetValueAtLevel_ReturnValue_7, float CallFunc_GetValueAtLevel_ReturnValue_8, float CallFunc_FClamp_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue_9, bool CallFunc_K2_CommitAbility_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue_10, float CallFunc_FClamp_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue_2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, float CallFunc_GetValueAtLevel_ReturnValue_11, class UPawnMovementComponent* CallFunc_GetMovementComponent_ReturnValue, const struct FVector& CallFunc_ClampVectorSize_ReturnValue);
};

}


