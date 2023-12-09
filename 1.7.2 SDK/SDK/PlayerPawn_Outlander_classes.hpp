#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x448 (0x2070 - 0x1C28)
// BlueprintGeneratedClass PlayerPawn_Outlander.PlayerPawn_Outlander_C
class APlayerPawn_Outlander_C : public APlayerPawn_Generic_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1C28(0x8)(Transient, DuplicateTransient)
	class UBoxComponent*                         AntiMaterialHitBox;                                // 0x1C30(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              P_Outlander_Teleport_01;                           // 0x1C38(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                      KeenEyesRadius;                                    // 0x1C40(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              P_Outlander_PhaseShift_Impact_01;                  // 0x1C48(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                Effect_HeadSkeletalMesh;                           // 0x1C50(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                Effect_BodySkeletalMesh;                           // 0x1C58(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        Teleport_PP_TL_PP_AC5FCC484D689B95F59DF9B01327BE09; // 0x1C60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Teleport_PP_TL__Direction_AC5FCC484D689B95F59DF9B01327BE09; // 0x1C64(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2A09[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Teleport_PP_TL;                                    // 0x1C68(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Phase_Shift_Activation_Timeline_Sweep_6D72A2BD427987D65B765788F442228C; // 0x1C70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Phase_Shift_Activation_Timeline_Opacity_6D72A2BD427987D65B765788F442228C; // 0x1C74(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Phase_Shift_Activation_Timeline__Direction_6D72A2BD427987D65B765788F442228C; // 0x1C78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2A0A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Phase_Shift_Activation_Timeline;                   // 0x1C80(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        PhaseShiftHitSweep_Sweep_81A0178F416D1106B841D9A9B7E8C737; // 0x1C88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                PhaseShiftHitSweep__Direction_81A0178F416D1106B841D9A9B7E8C737; // 0x1C8C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2A0B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    PhaseShiftHitSweep;                                // 0x1C90(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       P_FragmentActivation;                              // 0x1C98(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              Core_Index_0;                                      // 0x1CA0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              Core_Index_1;                                      // 0x1CA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              Core_Index_2;                                      // 0x1CB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              Diamond_Index3;                                    // 0x1CB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              Diamond_Index4;                                    // 0x1CC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              Diamond_Index5;                                    // 0x1CC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              Sparkles_Index8;                                   // 0x1CD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              Smoke_Index7;                                      // 0x1CD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              Diamond_Index6;                                    // 0x1CE0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              Sparkles_Index9;                                   // 0x1CE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          OffensiveColor1;                                   // 0x1CF0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          OffensiveColor2;                                   // 0x1D00(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          DefensiveColor1;                                   // 0x1D10(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          DefensiveColor2;                                   // 0x1D20(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          SpecialtyColor1;                                   // 0x1D30(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          SpecialtyColor2;                                   // 0x1D40(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 TC_SpecialityBuff;                                 // 0x1D50(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                 TC_DefensiveBuff;                                  // 0x1D70(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                 TC_OffensiveBuff;                                  // 0x1D90(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	enum class E_Outlander_FragmentTypes         FragType;                                          // 0x1DB0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2A0C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystem*                       P_FragmentOffense;                                 // 0x1DB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       P_FragmentDefense;                                 // 0x1DC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       P_FragmentSpeciality;                              // 0x1DC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       P_InTheZone_Activate;                              // 0x1DD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         OnPlayerBuiltFloor;                                // 0x1DD8(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_2A0D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayEventData                    EventData;                                         // 0x1DE0(0xA8)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                          EventNeedRoadsActivate;                            // 0x1E88(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          EventNeedRoadsDeactivate;                          // 0x1E90(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 TC_WhereWereGoingWeNeedRoads_0;                    // 0x1E98(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UParticleSystem*                       P_Fragment;                                        // 0x1EB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       P_Specialty;                                       // 0x1EC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       P_Defensive;                                       // 0x1EC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       P_Offensive;                                       // 0x1ED0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortFeedbackHandle                   Feedback_ShardGet;                                 // 0x1ED8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FFortFeedbackHandle                   Feedback_OffensiveShard;                           // 0x1EF0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FFortFeedbackHandle                   Feedback_DefensiveShard;                           // 0x1F08(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FFortFeedbackHandle                   Feedback_SpecialtyShard;                           // 0x1F20(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class USoundBase*                            Sound_Frg_Offensive_Start;                         // 0x1F38(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Sound_Frg_Defensive_Start;                         // 0x1F40(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Sound_Frg_Resource_Start;                          // 0x1F48(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Sound_Frg_Stop;                                    // 0x1F50(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Sound_Frg_Collect;                                 // 0x1F58(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       P_InTheZone_Running;                               // 0x1F60(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       P_InTheZone_Hit;                                   // 0x1F68(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Spawn_Color;                                       // 0x1F70(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UMaterialInstanceDynamic*>      Head_Effect_Mesh_Materials;                        // 0x1F78(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>      Body_Effect_Mesh_Materials;                        // 0x1F88(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UMaterialInterface*                    Phase_Shift_Material_;                             // 0x1F98(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       PhaseShiftActivateParticles;                       // 0x1FA0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bPhaseShiftActive_;                                // 0x1FA8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2A0E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystem*                       KnockKnockFX;                                      // 0x1FB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       P_Handtrail;                                       // 0x1FB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       P_AMCDustKickup;                                   // 0x1FC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       P_AMCShockwave;                                    // 0x1FC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              P_Handtrail_Active;                                // 0x1FD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       P_ArmThruster;                                     // 0x1FD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              P_Arm_Thuster_Active;                              // 0x1FE0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            ChargeUpSoundCue;                                  // 0x1FE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       ChargeUpAudioComp;                                 // 0x1FF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                ChargeUpCameraShake;                               // 0x1FF8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                             AMCImpactEnemySound;                               // 0x2000(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                             AMCImpactBuildingSound;                            // 0x2008(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                AMCImpactCameraShake;                              // 0x2010(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       Teleport_Particles;                                // 0x2018(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       TeleportActivateParticles;                         // 0x2020(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_SplineVolumeTrail_v1b_C*           Teleport_Spline_BP;                                // 0x2028(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Current_Index;                                     // 0x2030(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2A0F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          TeleportDustEmitters;                              // 0x2038(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class USkeletalMeshComponent*                GuantletReference;                                 // 0x2048(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              P_SpawnedHandTrail;                                // 0x2050(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ChargeTrailIsVisible;                              // 0x2058(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2A10[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystem*                       P_HitBurst;                                        // 0x2060(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPostProcessComponent*                 TeleportPP;                                        // 0x2068(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class APlayerPawn_Outlander_C* GetDefaultObj();

	void StopTeleportSplinesIfValid(bool CallFunc_IsValid_ReturnValue);
	void OnRep_OnPlayerBuiltFloor(const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData);
	void UserConstructionScript(bool CallFunc_K2_AttachToComponent_ReturnValue);
	void PhaseShiftHitSweep__FinishedFunc();
	void PhaseShiftHitSweep__UpdateFunc();
	void Phase_Shift_Activation_Timeline__FinishedFunc();
	void Phase_Shift_Activation_Timeline__UpdateFunc();
	void Teleport_PP_TL__FinishedFunc();
	void Teleport_PP_TL__UpdateFunc();
	void GameplayCue_Explorer_Fragment(enum class EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Outlander_InTheZone_FX(enum class EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
	void ReceivePossessed(class AController* NewController);
	void GameplayCue_Explorer_Fragment_Offense_PickupFX(enum class EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Explorer_Fragment_Defense_PickupFX(enum class EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Explorer_Fragment_Specialty_PickupFX(enum class EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
	void WithinReachOfTreasure(const struct FLinearColor& VSpawnColor, bool Activate);
	void GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier1(enum class EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier2(enum class EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Outlander_Phaseshift_AppliedFX(enum class EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
	void RefreshIcons();
	void OnCharacterPartsReinitialized();
	void OnDamagePlayEffects(float Damage, struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void EventOnDamagePlayFX();
	void GameplayCue_Outlander_KnockKnock(enum class EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Abilities_Activation_Outlander_AntiMaterialCharge(enum class EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Abilities_Activation_Outlander_AntiMaterialChargeThruster(enum class EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Abilities_Activation_Outlander_AntiMaterialChargeChargeUp(enum class EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Abilities_Activation_Outlander_AntiMaterialChargeImpact(enum class EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
	void SetTeleportEffects(bool On);
	void ForceQuickbarUpdate();
	void ReceiveBeginPlay();
	void PlayGauntletMontage(class UAnimMontage* MontageName);
	void SetMenuScreenClassName();
	void ChargedUp();
	void PlayChargeCommonFX();
	void Deactivate_Phaseshift_Materials(float Timeline_Duration);
	void Activate_Phaseshift_Materials(float Timeline_Duration);
	void Deactivate_Teleport_PP(float Timeline_Duration);
	void Activate_Teleport_PP(float Timeline_Duration);
	void ExecuteUbergraph_PlayerPawn_Outlander(int32 EntryPoint, bool Temp_bool_Variable, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue2, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue2, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, int32 CallFunc_GetNumMaterials_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue2, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable2, int32 CallFunc_Add_IntInt_ReturnValue2, int32 Temp_int_Array_Index_Variable2, bool Temp_bool_Variable2, class USkeletalMeshComponent* K2Node_Select_Default, class FName Temp_name_Variable, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetVisualEffectQuality_ReturnValue, const struct FVector& Temp_struct_Variable, bool K2Node_SwitchInteger_CmpSuccess, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue2, int32 CallFunc_GetVisualEffectQuality_ReturnValue2, int32 Temp_int_Array_Index_Variable3, bool K2Node_SwitchInteger2_CmpSuccess, int32 Temp_int_Loop_Counter_Variable3, bool CallFunc_IsDedicatedServer_ReturnValue3, int32 CallFunc_Add_IntInt_ReturnValue3, bool Temp_bool_IsClosed_Variable, int32 Temp_int_Array_Index_Variable4, int32 Temp_int_Variable, const struct FRotator& Temp_struct_Variable2, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue4, class USceneComponent* K2Node_Select2_Default, const struct FTransform& CallFunc_GetRelativeTransform_ReturnValue, enum class EGameplayCueEvent K2Node_GameplayCueEvent_EventType13, const struct FGameplayCueParameters& K2Node_GameplayCueEvent_Parameters13, bool K2Node_SwitchEnum_CmpSuccess, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, enum class EGameplayCueEvent K2Node_GameplayCueEvent_EventType12, const struct FGameplayCueParameters& K2Node_GameplayCueEvent_Parameters12, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue, bool K2Node_SwitchEnum2_CmpSuccess, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAllMatchingGameplayTags_TagContainerInterface2_CastInput, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue2, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAllMatchingGameplayTags_TagContainerInterface3_CastInput, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue3, int32 Temp_int_Variable2, class UMaterialInterface* CallFunc_Array_Get_Item, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue2, int32 CallFunc_Add_IntInt_ReturnValue5, class AController* K2Node_Event_NewController, int32 Temp_int_Loop_Counter_Variable4, int32 CallFunc_Add_IntInt_ReturnValue6, enum class EGameplayCueEvent K2Node_GameplayCueEvent_EventType11, const struct FGameplayCueParameters& K2Node_GameplayCueEvent_Parameters11, enum class EGameplayCueEvent K2Node_GameplayCueEvent_EventType10, const struct FGameplayCueParameters& K2Node_GameplayCueEvent_Parameters10, bool K2Node_SwitchEnum3_CmpSuccess, bool K2Node_SwitchEnum4_CmpSuccess, enum class EGameplayCueEvent K2Node_GameplayCueEvent_EventType9, const struct FGameplayCueParameters& K2Node_GameplayCueEvent_Parameters9, bool K2Node_SwitchEnum5_CmpSuccess, bool Temp_bool_Has_Been_Initd_Variable, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue2, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue3, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue4, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue5, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue6, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue7, const struct FLinearColor& K2Node_CustomEvent_VSpawnColor, bool K2Node_CustomEvent_Activate, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue2, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue3, bool CallFunc_EqualEqual_ByteByte_ReturnValue3, bool CallFunc_EqualEqual_ByteByte_ReturnValue4, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue2, bool CallFunc_BooleanOR_ReturnValue2, TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue2, int32 CallFunc_GetNumMaterials_ReturnValue2, bool CallFunc_IsValid_ReturnValue3, int32 CallFunc_Subtract_IntInt_ReturnValue2, bool CallFunc_IsValid_ReturnValue4, enum class EGameplayCueEvent K2Node_GameplayCueEvent_EventType8, const struct FGameplayCueParameters& K2Node_GameplayCueEvent_Parameters8, enum class EGameplayCueEvent K2Node_GameplayCueEvent_EventType7, const struct FGameplayCueParameters& K2Node_GameplayCueEvent_Parameters7, bool K2Node_SwitchEnum6_CmpSuccess, bool K2Node_SwitchEnum7_CmpSuccess, class AController* CallFunc_GetController_ReturnValue, class AController* CallFunc_GetController_ReturnValue2, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller2, bool K2Node_DynamicCast_bSuccess2, enum class EGameplayCueEvent K2Node_GameplayCueEvent_EventType6, const struct FGameplayCueParameters& K2Node_GameplayCueEvent_Parameters6, bool K2Node_SwitchEnum8_CmpSuccess, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue8, bool CallFunc_K2_AttachToComponent_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeTransform_SweepHitResult, bool CallFunc_IsValid_ReturnValue5, bool CallFunc_K2_AttachToComponent_ReturnValue2, bool CallFunc_IsValid_ReturnValue6, int32 CallFunc_Array_LastIndex_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item2, int32 CallFunc_Array_LastIndex_ReturnValue2, bool CallFunc_NotEqual_IntInt_ReturnValue2, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue2, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue2, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue4, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue9, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue10, float K2Node_Event_Damage, const struct FGameplayTagContainer& K2Node_Event_DamageTags, const struct FVector& K2Node_Event_Momentum, const struct FHitResult& K2Node_Event_HitInfo, class AFortPawn* K2Node_Event_InstigatedBy, class AActor* K2Node_Event_DamageCauser, const struct FGameplayEffectContextHandle& K2Node_Event_EffectContext, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue2, enum class EGameplayCueEvent K2Node_GameplayCueEvent_EventType5, const struct FGameplayCueParameters& K2Node_GameplayCueEvent_Parameters5, bool K2Node_SwitchEnum9_CmpSuccess, const struct FRotator& CallFunc_MakeRotFromX_ReturnValue, enum class EGameplayCueEvent K2Node_GameplayCueEvent_EventType4, const struct FGameplayCueParameters& K2Node_GameplayCueEvent_Parameters4, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue5, const struct FRotator& CallFunc_GetSocketRotation_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue2, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue6, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, enum class EGameplayCueEvent K2Node_GameplayCueEvent_EventType3, const struct FGameplayCueParameters& K2Node_GameplayCueEvent_Parameters3, bool K2Node_SwitchEnum10_CmpSuccess, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, class AController* CallFunc_GetController_ReturnValue3, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue11, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller3, bool K2Node_DynamicCast_bSuccess3, bool CallFunc_IsLocalPlayerController_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue3, int32 CallFunc_GetVisualEffectQuality_ReturnValue3, enum class EGameplayCueEvent K2Node_GameplayCueEvent_EventType2, const struct FGameplayCueParameters& K2Node_GameplayCueEvent_Parameters2, bool K2Node_SwitchInteger3_CmpSuccess, bool K2Node_SwitchEnum11_CmpSuccess, class AController* CallFunc_GetController_ReturnValue4, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller4, bool K2Node_DynamicCast_bSuccess4, bool CallFunc_IsLocalPlayerController_ReturnValue2, enum class EGameplayCueEvent K2Node_GameplayCueEvent_EventType, const struct FGameplayCueParameters& K2Node_GameplayCueEvent_Parameters, class AController* CallFunc_GetController_ReturnValue5, bool K2Node_SwitchEnum12_CmpSuccess, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller5, bool K2Node_DynamicCast_bSuccess5, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, int32 Temp_int_Variable3, bool CallFunc_LessEqual_IntInt_ReturnValue3, int32 CallFunc_Add_IntInt_ReturnValue7, bool CallFunc_IsDedicatedServer_ReturnValue4, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, bool K2Node_CustomEvent_On, class ABP_SplineVolumeTrail_v1b_C* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_IsMovingOnGround_ReturnValue, class FName CallFunc_Array_Get_Item3, int32 CallFunc_Array_Length_ReturnValue3, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable5, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item4, int32 Temp_int_Loop_Counter_Variable5, int32 Temp_int_Loop_Counter_Variable6, bool CallFunc_Less_IntInt_ReturnValue2, int32 CallFunc_Add_IntInt_ReturnValue8, bool CallFunc_Less_IntInt_ReturnValue3, int32 CallFunc_Add_IntInt_ReturnValue9, bool Temp_bool_Variable3, class USkeletalMeshComponent* K2Node_Select3_Default, int32 Temp_int_Array_Index_Variable6, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item5, bool CallFunc_EqualEqual_ByteByte_ReturnValue5, const struct FTransform& Temp_struct_Variable3, bool CallFunc_EqualEqual_ByteByte_ReturnValue6, class UPostProcessComponent* CallFunc_AddComponent_ReturnValue, bool Temp_bool_Variable4, bool CallFunc_IsLocallyControlled_ReturnValue, class USceneComponent* K2Node_Select4_Default, bool CallFunc_IsLocallyControlled_ReturnValue2, const struct FTransform& CallFunc_GetRelativeTransform_ReturnValue2, const struct FHitResult& CallFunc_K2_SetRelativeTransform_SweepHitResult2, class UAnimMontage* K2Node_CustomEvent_MontageName, TArray<class USceneComponent*>& CallFunc_GetChildrenComponents_Children, class USceneComponent* CallFunc_Array_Get_Item6, bool CallFunc_IsValid_ReturnValue7, class USkeletalMeshComponent* K2Node_DynamicCast_AsSkeletal_Mesh_Component, bool K2Node_DynamicCast_bSuccess6, const class FString& CallFunc_GetDisplayName_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, bool CallFunc_Contains_ReturnValue, float CallFunc_Montage_Play_ReturnValue, int32 CallFunc_Array_Length_ReturnValue4, class AGameStateBase* CallFunc_GetGameState_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue4, class AFortGameStateZone* K2Node_DynamicCast_AsFort_Game_State_Zone, bool K2Node_DynamicCast_bSuccess7, bool CallFunc_GetGender_IsMale, bool CallFunc_GetGender_IsFemale, bool CallFunc_GetGender_IsMale2, bool CallFunc_GetGender_IsFemale2, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue2, class UFortnite_M_Avg_Player_MenusScreen_AnimBP_C* K2Node_DynamicCast_AsFortnite_M_Avg_Player_Menus_Screen_Anim_BP, bool K2Node_DynamicCast_bSuccess8, const struct FVector& CallFunc_GetSocketLocation_ReturnValue2, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue7, float CallFunc_BreakVector_X2, float CallFunc_BreakVector_Y2, float CallFunc_BreakVector_Z2, float CallFunc_Subtract_FloatFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue8, int32 Temp_int_Variable4, class UMaterialInterface* CallFunc_Array_Get_Item7, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item8, bool CallFunc_LessEqual_IntInt_ReturnValue4, int32 CallFunc_Add_IntInt_ReturnValue10, float K2Node_CustomEvent_Timeline_Duration4, float CallFunc_Divide_FloatFloat_ReturnValue, float K2Node_CustomEvent_Timeline_Duration3, float CallFunc_Divide_FloatFloat_ReturnValue2, class FName CallFunc_MakeLiteralName_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue2, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item9, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item10, int32 CallFunc_Array_Length_ReturnValue5, int32 CallFunc_Array_Length_ReturnValue6, bool CallFunc_Less_IntInt_ReturnValue5, bool CallFunc_Less_IntInt_ReturnValue6, bool CallFunc_IsValid_ReturnValue8, bool CallFunc_IsValid_ReturnValue9, bool CallFunc_IsValid_ReturnValue10, float K2Node_CustomEvent_Timeline_Duration2, float K2Node_CustomEvent_Timeline_Duration, float CallFunc_Divide_FloatFloat_ReturnValue3, float CallFunc_Divide_FloatFloat_ReturnValue4);
};

}


