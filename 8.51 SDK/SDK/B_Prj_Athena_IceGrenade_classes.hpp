#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x78 (0x810 - 0x798)
// BlueprintGeneratedClass B_Prj_Athena_IceGrenade.B_Prj_Athena_IceGrenade_C
class AB_Prj_Athena_IceGrenade_C : public AB_Prj_ThrownConsumable_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x798(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                       Audio_InAirLoop;                                   // 0x7A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       BeepTimer2;                                        // 0x7A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              Timer_Particle;                                    // 0x7B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       BeepTimer;                                         // 0x7B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               HitLocation;                                       // 0x7C0(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_67AE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPawn*                             Target;                                            // 0x7D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               HitNormal;                                         // 0x7D8(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_67AF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AEnemyPawn_Parent_C*                   DeimosPawn;                                        // 0x7E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  BackendName;                                       // 0x7F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   ObjStat;                                           // 0x7F8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class UFortQuestItemDefinition*              QuestDefinition;                                   // 0x808(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AB_Prj_Athena_IceGrenade_C* GetDefaultObj();

	void QuestUpdate(class APawn* PlayerPawn, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue, TArray<class AFortPlayerController*>& K2Node_MakeArray_Array, bool CallFunc_OnSameTeam_ReturnValue, bool CallFunc_Athena_CheckQuestAndObjectiveCompletion_QuestIsValid, bool CallFunc_Athena_CheckQuestAndObjectiveCompletion_QuestCompleted, bool CallFunc_Athena_CheckQuestAndObjectiveCompletion_ObjectiveCompleted, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, bool CallFunc_Athena_CheckCreativeMode_CanCompleteQuest);
	void Handle_Pawn_Detach_RC(class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess);
	void OnStop(struct FHitResult& Hit);
	void OnExploded(TArray<class AActor*>& HitActors, TArray<struct FHitResult>& HitResults);
	void BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void LaunchDeimos();
	void OnTouched(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, struct FHitResult& HitResult, bool bIsOverlap);
	void BndEvt__ProjectileMovementComponent_K2Node_ComponentBoundEvent_1_OnProjectileBounceDelegate__DelegateSignature(struct FHitResult& ImpactResult, struct FVector& ImpactVelocity);
	void ExecuteUbergraph_B_Prj_Athena_IceGrenade(int32 EntryPoint, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, const struct FHitResult& K2Node_Event_Hit, TArray<class AActor*>& K2Node_Event_HitActors, TArray<struct FHitResult>& K2Node_Event_HitResults, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, class AFortAthenaVehicle* K2Node_DynamicCast_AsFort_Athena_Vehicle, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, class APawn* CallFunc_GetInstigator_ReturnValue, class AFortPlayerPawnAthena* K2Node_DynamicCast_AsFort_Player_Pawn_Athena, bool K2Node_DynamicCast_bSuccess_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector2D& CallFunc_Conv_VectorToVector2D_ReturnValue, const struct FVector& CallFunc_Conv_Vector2DToVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, enum class EEvaluateCurveTableResult CallFunc_EvaluateCurveTableRow_OutResult, float CallFunc_EvaluateCurveTableRow_OutXY, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, enum class EEvaluateCurveTableResult CallFunc_EvaluateCurveTableRow_OutResult_1, float CallFunc_EvaluateCurveTableRow_OutXY_1, enum class EEvaluateCurveTableResult CallFunc_EvaluateCurveTableRow_OutResult_2, float CallFunc_EvaluateCurveTableRow_OutXY_2, float CallFunc_Add_FloatFloat_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, const struct FVector& CallFunc_MakeVector_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_2, bool Temp_bool_Has_Been_Initd_Variable, enum class EEvaluateCurveTableResult CallFunc_EvaluateCurveTableRow_OutResult_3, float CallFunc_EvaluateCurveTableRow_OutXY_3, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_OnSameTeam_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_3, bool CallFunc_BooleanAND_ReturnValue, bool Temp_bool_IsClosed_Variable, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, class AController* CallFunc_GetInstigatorController_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsInVehicle_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit_1, bool CallFunc_BreakHitResult_bInitialOverlap_1, float CallFunc_BreakHitResult_Time_1, float CallFunc_BreakHitResult_Distance_1, const struct FVector& CallFunc_BreakHitResult_Location_1, const struct FVector& CallFunc_BreakHitResult_ImpactPoint_1, const struct FVector& CallFunc_BreakHitResult_Normal_1, const struct FVector& CallFunc_BreakHitResult_ImpactNormal_1, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_1, class AActor* CallFunc_BreakHitResult_HitActor_1, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_1, class FName CallFunc_BreakHitResult_HitBoneName_1, int32 CallFunc_BreakHitResult_HitItem_1, int32 CallFunc_BreakHitResult_FaceIndex_1, const struct FVector& CallFunc_BreakHitResult_TraceStart_1, const struct FVector& CallFunc_BreakHitResult_TraceEnd_1, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_NotEqual_ObjectObject_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsValid_ReturnValue, enum class EEvaluateCurveTableResult CallFunc_EvaluateCurveTableRow_OutResult_4, float CallFunc_EvaluateCurveTableRow_OutXY_4, enum class EEvaluateCurveTableResult CallFunc_EvaluateCurveTableRow_OutResult_5, float CallFunc_EvaluateCurveTableRow_OutXY_5, bool K2Node_SwitchEnum_CmpSuccess_4, bool K2Node_SwitchEnum_CmpSuccess_5, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, int32 Temp_int_Array_Index_Variable, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue_1, class AActor* CallFunc_Array_Get_Item, const struct FVector2D& CallFunc_Conv_VectorToVector2D_ReturnValue_1, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess_4, const struct FVector& CallFunc_Conv_Vector2DToVector_ReturnValue_1, const struct FVector& CallFunc_Normal_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, class AActor* K2Node_Event_OtherActor, class UPrimitiveComponent* K2Node_Event_OtherComp, const struct FHitResult& K2Node_Event_HitResult, bool K2Node_Event_bIsOverlap, float CallFunc_Add_FloatFloat_ReturnValue_1, bool CallFunc_BreakHitResult_bBlockingHit_2, bool CallFunc_BreakHitResult_bInitialOverlap_2, float CallFunc_BreakHitResult_Time_2, float CallFunc_BreakHitResult_Distance_2, const struct FVector& CallFunc_BreakHitResult_Location_2, const struct FVector& CallFunc_BreakHitResult_ImpactPoint_2, const struct FVector& CallFunc_BreakHitResult_Normal_2, const struct FVector& CallFunc_BreakHitResult_ImpactNormal_2, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_2, class AActor* CallFunc_BreakHitResult_HitActor_2, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_2, class FName CallFunc_BreakHitResult_HitBoneName_2, int32 CallFunc_BreakHitResult_HitItem_2, int32 CallFunc_BreakHitResult_FaceIndex_2, const struct FVector& CallFunc_BreakHitResult_TraceStart_2, const struct FVector& CallFunc_BreakHitResult_TraceEnd_2, const struct FVector& CallFunc_MakeVector_ReturnValue_1, bool CallFunc_ComponentHasTag_ReturnValue, const struct FHitResult& K2Node_ComponentBoundEvent_ImpactResult, const struct FVector& K2Node_ComponentBoundEvent_ImpactVelocity, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, int32 Temp_int_Array_Index_Variable_1, class AActor* CallFunc_Array_Get_Item_1, class AEnemyPawn_Parent_C* K2Node_DynamicCast_AsEnemy_Pawn_Parent, bool K2Node_DynamicCast_bSuccess_5, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult);
};

}


