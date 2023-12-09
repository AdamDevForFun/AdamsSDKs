#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1E0 (0x980 - 0x7A0)
// BlueprintGeneratedClass BGA_HeldObject_Parent.BGA_HeldObject_Parent_C
class ABGA_HeldObject_Parent_C : public ABuildingGameplayActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x7A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UFortWaterInteractionComponent*        FortWaterInteraction;                              // 0x7A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFortLinkToActorComponent*             FortLinkToActor;                                   // 0x7B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFortHeldObjectComponent*              FortHeldObject;                                    // 0x7B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFortProjectileMovementComponent*      FortProjectileMovement;                            // 0x7C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                     Capsule;                                           // 0x7C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                        RepStartMoving;                                    // 0x7D0(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, RepNotify, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	struct FGameplayTag                          GC_HitPlayer;                                      // 0x7D4(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          GC_HitWorld;                                       // 0x7DC(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          GC_Throw;                                          // 0x7E4(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          GC_EnterWater;                                     // 0x7EC(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          GC_Pickup;                                         // 0x7F4(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          GC_Death;                                          // 0x7FC(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         PlayDeathGC;                                       // 0x804(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         RepHideActor;                                      // 0x805(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, RepNotify, NoDestructor, AdvancedDisplay)
	bool                                         SetHideActorOnDeath;                               // 0x806(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsDestructable;                                    // 0x807(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayTag                          GC_GenericDeath;                                   // 0x808(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                        WorldStopSlop;                                     // 0x810(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AttachToWallsAndCeilings;                          // 0x814(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6918[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<enum class ELinkToDirection, struct FVector> Map_DirectionToRelativeVector;                     // 0x818(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, AdvancedDisplay)
	enum class ELinkToDirection                  DirectionToAttach;                                 // 0x868(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	uint8                                        Pad_6919[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                EmptyAttachLinkActor;                              // 0x870(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	uint8                                        Pad_691A[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            AttachRelativeTrans;                               // 0x880(0x30)(Edit, BlueprintVisible, Net, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, AdvancedDisplay)
	struct FTransform                            AttachTransform;                                   // 0x8B0(0x30)(Edit, BlueprintVisible, Net, DisableEditOnInstance, SaveGame, IsPlainOldData, RepNotify, NoDestructor)
	class FText                                  FirstInteractString;                               // 0x8E0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  SecondInteractString;                              // 0x8F8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                        SecondInteractTime;                                // 0x910(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FirstInteractTime;                                 // 0x914(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         EverBeenThrownPlaced;                              // 0x918(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, AdvancedDisplay)
	bool                                         AutoEnableInteractionsOnStop;                      // 0x919(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         AlreadySavedDefaultTransform;                      // 0x91A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, AdvancedDisplay)
	enum class Enum_HeldObject_GenericWeights    ObjectWeights;                                     // 0x91B(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         StopOnFlatSurface;                                 // 0x91C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_691B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 ThrownQuestCreditTargetTag;                        // 0x920(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FGameplayTagContainer                 TC_BlockPickup;                                    // 0x940(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                        Hit_Velocity_Threshold;                            // 0x960(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShouldKillWhenSpawningUnderwater;                  // 0x964(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_691C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimitiveComponent*                   HitComponentToAttachTo;                            // 0x968(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECollisionResponse                CapsuleDefaultCollisionResponseToPawn;             // 0x970(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         RestoreDefaultPawnCollisionOnInteract;             // 0x971(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsAttachedToVehicle;                               // 0x972(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_691D[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                VehicleAttached;                                   // 0x978(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABGA_HeldObject_Parent_C* GetDefaultObj();

	void UbindPlayerControllerOnUnPosses(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AFortPlayerPawn* CallFunc_GetInstigator_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AFortPlayerPawnAthena* K2Node_DynamicCast_AsFort_Player_Pawn_Athena, bool K2Node_DynamicCast_bSuccess);
	void BindPlayerControllerOnUnPosses(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_HasAuthority_ReturnValue, class AFortPlayerPawn* CallFunc_GetInstigator_ReturnValue, class AFortPlayerPawnAthena* K2Node_DynamicCast_AsFort_Player_Pawn_Athena, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue);
	void Server_Only_Handle_Player_Controller_OnUnPossess(class APawn* PlayerPawn);
	void Server_Only_Handle_Attach_To_Vehicle(const struct FVector& HitLoc, class UPrimitiveComponent* HitComponentToAttachTo, bool CallFunc_PerformLinkingCheck_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue);
	void OnDetachFromVehicle(bool CallFunc_IsHeld_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue);
	void OnAttachedToVehicle(bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void OnRep_IsAttachedToVehicle();
	void SetBeenThrownPlaced();
	void GetCanFirstInteract(class AFortPawn* InteractingPawn, bool* Return);
	void OnRep_AttachTransform(const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_BreakTransform_Location_1, const struct FRotator& CallFunc_BreakTransform_Rotation_1, const struct FVector& CallFunc_BreakTransform_Scale_1, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector& CallFunc_GetUpVector_ReturnValue, const struct FVector& CallFunc_GetRightVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, const struct FVector& CallFunc_GetForwardVector_ReturnValue, class USceneComponent* CallFunc_GetAttachComponent_Component, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_2, const struct FVector& CallFunc_K2_GetComponentScale_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_2, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult);
	void SetAttachDefaultTransform(bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsServer_ReturnValue, class USceneComponent* CallFunc_GetAttachComponent_Component, bool CallFunc_BooleanAND_ReturnValue, const struct FTransform& CallFunc_GetRelativeTransform_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
	void GetAttachComponent(class USceneComponent** Component);
	void FindAttachAngle(const struct FVector& HitLoc, float CurrentLowest, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FVector& CallFunc_GetActorRightVector_ReturnValue, TArray<enum class ELinkToDirection>& CallFunc_Map_Keys_Keys, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, enum class ELinkToDirection CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FVector& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, float CallFunc_Dot_VectorVector_ReturnValue, const struct FVector& CallFunc_GetActorUpVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, bool CallFunc_Less_FloatFloat_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_2, TMap<enum class ELinkToDirection, struct FVector> K2Node_MakeMap_Map);
	bool BlueprintGetInteractionTime(class AFortPawn* InteractingPawn, float* OutInteractionTime, enum class EInteractionBeingAttempted InteractionBeingAttempted, enum class EInteractionBeingAttempted Temp_byte_Variable, float Temp_float_Variable, float K2Node_Select_Default);
	class FText BlueprintGetInteractionString(class AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted, enum class EInteractionBeingAttempted Temp_byte_Variable, class FText Temp_text_Variable, class FText K2Node_Select_Default);
	bool ShouldDie(float Damage, class AController* EventInstigator, class AActor* DamageCauser);
	void OnRep_RepHideActor();
	void OnRep_RepStartMoving(class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	bool BlueprintCanInteract(class AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted, enum class ETInteractionType InteractionType, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAnyMatchingGameplayTags_self_CastInput, bool CallFunc_HasAnyMatchingGameplayTags_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_GetCanFirstInteract_Return, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_CanInteract_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void OnReady_BC2B03BE47B5044C184341970EAD7AAB(class AFortGameStateAthena* GameState, class UFortPlaylist* Playlist, struct FGameplayTagContainer& PlaylistContextTags);
	void OnDeathServer(float Damage, struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void HideActor();
	void PlayGenericDeath();
	void BndEvt__FortProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectileBounceDelegate__DelegateSignature(struct FHitResult& ImpactResult, struct FVector& ImpactVelocity);
	void BndEvt__FortWaterInteraction_K2Node_ComponentBoundEvent_3_WaterInteractionOnEnterWater__DelegateSignature(class AFortWaterBodyActor* WaterBody, class UFortWaterInteractionComponent* WaterInteractionComponent, bool bIsFirstBody);
	void BndEvt__FortHeldObject_K2Node_ComponentBoundEvent_2_OnHeldObjectThrown__DelegateSignature();
	void BndEvt__FortProjectileMovement_K2Node_ComponentBoundEvent_4_OnProjectileStopDelegate__DelegateSignature(struct FHitResult& ImpactResult);
	void AttachSetup(struct FVector& Location, struct FVector& HitNormal, bool NewParam);
	void BndEvt__FortHeldObject_K2Node_ComponentBoundEvent_6_OnHeldObjectPickedUp__DelegateSignature();
	void ReceiveBeginPlay();
	void ResetRelativeTransformOnAttach();
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, struct FHitResult& Hit);
	void BndEvt__FortLinkToActor_K2Node_ComponentBoundEvent_0_OnLinkedActorDestroyed__DelegateSignature();
	void OnFirstInteract(class AFortPawn* Interacting_Pawn);
	void BndEvt__FortHeldObject_K2Node_ComponentBoundEvent_5_OnHeldObjectPlaced__DelegateSignature();
	void OnSecondInteract(class AFortPawn* InteractingPawn);
	void ReceiveDestroyed();
	void BlueprintOnInteract(class AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted);
	void OnVehicleDestroyed(class AActor* DestroyedActor);
	void ExecuteUbergraph_BGA_HeldObject_Parent(int32 EntryPoint, const struct FHitResult& K2Node_ComponentBoundEvent_ImpactResult_1, const struct FVector& K2Node_ComponentBoundEvent_ImpactVelocity, class AFortWaterBodyActor* K2Node_ComponentBoundEvent_WaterBody, class UFortWaterInteractionComponent* K2Node_ComponentBoundEvent_WaterInteractionComponent, bool K2Node_ComponentBoundEvent_bIsFirstBody, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, bool CallFunc_BreakHitResult_bBlockingHit_1, bool CallFunc_BreakHitResult_bInitialOverlap_1, float CallFunc_BreakHitResult_Time_1, float CallFunc_BreakHitResult_Distance_1, const struct FVector& CallFunc_BreakHitResult_Location_1, const struct FVector& CallFunc_BreakHitResult_ImpactPoint_1, const struct FVector& CallFunc_BreakHitResult_Normal_1, const struct FVector& CallFunc_BreakHitResult_ImpactNormal_1, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_1, class AActor* CallFunc_BreakHitResult_HitActor_1, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_1, class FName CallFunc_BreakHitResult_HitBoneName_1, int32 CallFunc_BreakHitResult_HitItem_1, int32 CallFunc_BreakHitResult_ElementIndex_1, int32 CallFunc_BreakHitResult_FaceIndex_1, const struct FVector& CallFunc_BreakHitResult_TraceStart_1, const struct FVector& CallFunc_BreakHitResult_TraceEnd_1, bool CallFunc_ComponentHasTag_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IFortVehicleInterface> K2Node_DynamicCast_AsFort_Vehicle_Interface, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue, float CallFunc_VSize_ReturnValue, class AFortPlayerPawn* CallFunc_GetInstigator_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, class AActor* CallFunc_GetHeldObjectAttachedToPlayer_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_MirrorVectorByNormal_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_GetLastWaterSurfaceInfo_WaterPlaneLocation, const struct FVector& CallFunc_GetLastWaterSurfaceInfo_WaterPlaneNormal, const struct FVector& CallFunc_GetLastWaterSurfaceInfo_WaterSurfacePosition, float CallFunc_GetLastWaterSurfaceInfo_WaterDepth, int32 CallFunc_GetLastWaterSurfaceInfo_WaterBodyIdx, const struct FVector& CallFunc_GetLastWaterSurfaceInfo_WaterVelocity, float CallFunc_Conv_IntToFloat_ReturnValue, bool CallFunc_PerformLinkingCheck_ReturnValue, const struct FHitResult& K2Node_ComponentBoundEvent_ImpactResult, bool CallFunc_IsServer_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit_2, bool CallFunc_BreakHitResult_bInitialOverlap_2, float CallFunc_BreakHitResult_Time_2, float CallFunc_BreakHitResult_Distance_2, const struct FVector& CallFunc_BreakHitResult_Location_2, const struct FVector& CallFunc_BreakHitResult_ImpactPoint_2, const struct FVector& CallFunc_BreakHitResult_Normal_2, const struct FVector& CallFunc_BreakHitResult_ImpactNormal_2, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_2, class AActor* CallFunc_BreakHitResult_HitActor_2, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_2, class FName CallFunc_BreakHitResult_HitBoneName_2, int32 CallFunc_BreakHitResult_HitItem_2, int32 CallFunc_BreakHitResult_ElementIndex_2, int32 CallFunc_BreakHitResult_FaceIndex_2, const struct FVector& CallFunc_BreakHitResult_TraceStart_2, const struct FVector& CallFunc_BreakHitResult_TraceEnd_2, bool CallFunc_BreakHitResult_bBlockingHit_3, bool CallFunc_BreakHitResult_bInitialOverlap_3, float CallFunc_BreakHitResult_Time_3, float CallFunc_BreakHitResult_Distance_3, const struct FVector& CallFunc_BreakHitResult_Location_3, const struct FVector& CallFunc_BreakHitResult_ImpactPoint_3, const struct FVector& CallFunc_BreakHitResult_Normal_3, const struct FVector& CallFunc_BreakHitResult_ImpactNormal_3, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_3, class AActor* CallFunc_BreakHitResult_HitActor_3, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_3, class FName CallFunc_BreakHitResult_HitBoneName_3, int32 CallFunc_BreakHitResult_HitItem_3, int32 CallFunc_BreakHitResult_ElementIndex_3, int32 CallFunc_BreakHitResult_FaceIndex_3, const struct FVector& CallFunc_BreakHitResult_TraceStart_3, const struct FVector& CallFunc_BreakHitResult_TraceEnd_3, const struct FVector& K2Node_CustomEvent_Location, const struct FVector& K2Node_CustomEvent_HitNormal, bool K2Node_CustomEvent_NewParam, TScriptInterface<class IFortVehicleInterface> K2Node_DynamicCast_AsFort_Vehicle_Interface_1, bool K2Node_DynamicCast_bSuccess_3, const struct FVector& CallFunc_Cross_VectorVector_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_2, float CallFunc_GetAngleBetweenTwoVectors_Angle__Degrees_, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_VSize_ReturnValue_1, class USceneComponent* CallFunc_GetAttachComponent_Component, const struct FHitResult& CallFunc_K2_SetRelativeTransform_SweepHitResult, float CallFunc_RandomFloat_ReturnValue, class UPrimitiveComponent* K2Node_Event_MyComp, class AActor* K2Node_Event_Other, class UPrimitiveComponent* K2Node_Event_OtherComp, bool K2Node_Event_bSelfMoved, const struct FVector& K2Node_Event_HitLocation, const struct FVector& K2Node_Event_HitNormal, const struct FVector& K2Node_Event_NormalImpulse, const struct FHitResult& K2Node_Event_Hit, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn_1, bool K2Node_DynamicCast_bSuccess_4, float K2Node_Event_Damage, const struct FGameplayTagContainer& K2Node_Event_DamageTags, const struct FVector& K2Node_Event_Momentum, const struct FHitResult& K2Node_Event_HitInfo, class AController* K2Node_Event_InstigatedBy, class AActor* K2Node_Event_DamageCauser, const struct FGameplayEffectContextHandle& K2Node_Event_EffectContext, class AFortPawn* K2Node_CustomEvent_Interacting_Pawn, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_IsServer_ReturnValue_1, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_RotateAngleAxis_ReturnValue, const struct FRotator& CallFunc_MakeRotFromXZ_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class UFortAsyncAction_CurrentPlaylistReady* CallFunc_PlaylistDataReadyAsync_ReturnValue, class AFortGameStateAthena* Temp_object_Variable, bool CallFunc_IsValid_ReturnValue, class AFortPawn* K2Node_CustomEvent_InteractingPawn, class UFortPlaylist* Temp_object_Variable_1, const struct FGameplayTagContainer& Temp_struct_Variable, bool CallFunc_IsInWater_ReturnValue, class AFortGameStateAthena* K2Node_CustomEvent_GameState, class UFortPlaylist* K2Node_CustomEvent_Playlist, const struct FGameplayTagContainer& K2Node_CustomEvent_PlaylistContextTags, int32 CallFunc_Conv_ByteToInt_ReturnValue, const struct FGameplayCueParameters& CallFunc_MakeGameplayCueParameters_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue_1, const struct FGameplayCueParameters& CallFunc_MakeGameplayCueParameters_ReturnValue_1, int32 CallFunc_Conv_ByteToInt_ReturnValue_2, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FGameplayCueParameters& CallFunc_MakeGameplayCueParameters_ReturnValue_2, int32 CallFunc_Conv_ByteToInt_ReturnValue_3, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, const struct FGameplayCueParameters& CallFunc_MakeGameplayCueParameters_ReturnValue_3, int32 CallFunc_Conv_ByteToInt_ReturnValue_4, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue_3, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_3, const struct FGameplayCueParameters& CallFunc_MakeGameplayCueParameters_ReturnValue_4, int32 CallFunc_Conv_ByteToInt_ReturnValue_5, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue_4, bool CallFunc_IsServer_ReturnValue_2, const struct FGameplayCueParameters& CallFunc_MakeGameplayCueParameters_ReturnValue_5, class AFortPlayerPawn* CallFunc_GetInstigator_ReturnValue_1, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, bool CallFunc_SendComplexCustomStatEvent_QuestActive, bool CallFunc_SendComplexCustomStatEvent_QuestCompleted, bool Temp_bool_Variable, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_IsActorSubmergedInOcean_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_4, float CallFunc_GetOceanTotalHeight_ReturnValue, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, float CallFunc_RandomFloatInRange_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_2, class AFortPawn* K2Node_Event_InteractingPawn, enum class EInteractionBeingAttempted K2Node_Event_InteractionBeingAttempted, bool K2Node_SwitchEnum_CmpSuccess, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn_1, bool K2Node_DynamicCast_bSuccess_5, enum class ECollisionResponse CallFunc_GetCollisionResponseToChannel_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AActor* K2Node_CustomEvent_DestroyedActor, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, float Temp_float_Variable, float K2Node_Select_Default, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_1);
};

}


