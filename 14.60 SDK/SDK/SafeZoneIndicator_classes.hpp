#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x140 (0x5C0 - 0x480)
// BlueprintGeneratedClass SafeZoneIndicator.SafeZoneIndicator_C
class ASafeZoneIndicator_C : public AFortSafeZoneIndicator
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x480(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UChildActorComponent*                  BP_StormMeshRotator;                               // 0x488(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        VolumetricStormFadeTimeline_StormFadeIn_5D8CED344AED096A33ABDAA94E2E18CD; // 0x490(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                VolumetricStormFadeTimeline__Direction_5D8CED344AED096A33ABDAA94E2E18CD; // 0x494(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6C20[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    VolumetricStormFadeTimeline;                       // 0x498(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        StormFadeTimeline_StormFadeIn_6FB75EFB416FB419D85F8797DEDD058C; // 0x4A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                StormFadeTimeline__Direction_6FB75EFB416FB419D85F8797DEDD058C; // 0x4A4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6C21[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    StormFadeTimeline;                                 // 0x4A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Pre_Damage_Audio_Ramp_Intensity_05A077AD4FED08F2426E5CA16BD41D7C; // 0x4B0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Pre_Damage_Audio_Ramp__Direction_05A077AD4FED08F2426E5CA16BD41D7C; // 0x4B4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6C22[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Pre_Damage_Audio_Ramp;                             // 0x4B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            ShieldBoundaryLoopSound;                           // 0x4C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            HoldingLoopSound;                                  // 0x4C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HoldingStartTime_0;                                // 0x4D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6C23[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            HoldingLoopTickSound;                              // 0x4D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              SafeZoneMID;                                       // 0x4E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          MegaStormDamageTimer;                              // 0x4E8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                        MegastormAudioDuration;                            // 0x4F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6C24[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnSafeZoneStateChangeDispatcher;                   // 0x4F8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	enum class EFortSafeZoneState                SafeZoneState;                                     // 0x508(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6C25[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<enum class EFortSafeZoneState, struct FVector2D> SafeZoneStateThunderFreqs;                         // 0x510(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<enum class EFortSafeZoneState, float>   SafeZoneStateThunderDuration;                      // 0x560(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         OceanEnabled;                                      // 0x5B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6C26[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NumberofImpactEffects;                             // 0x5B4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ImapctFX_MaxHeight;                                // 0x5B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ImapctFX_MinHeight;                                // 0x5BC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ASafeZoneIndicator_C* GetDefaultObj();

	void GetRandomPointInPlayerDir(struct FVector* Position, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, const struct FVector& CallFunc_GetRandomPointOnBoundary_Position, const struct FVector& CallFunc_RotateAngleAxis_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, const struct FVector& CallFunc_MakeVector_ReturnValue);
	void GetRandomPointOnBoundary(struct FVector* Position, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_GetSafeZoneRadius_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, const struct FVector& CallFunc_RotateAngleAxis_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue);
	void GetAthenaGameState(class AAthena_GameState_C** AthenaGS, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AAthena_GameState_C* K2Node_DynamicCast_AsAthena_Game_State, bool K2Node_DynamicCast_bSuccess);
	void HandleInsideOutsideMix();
	void InitClosestPointAudio(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue_1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue);
	void UserConstructionScript(bool CallFunc_IsDedicatedServer_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
	void Pre_Damage_Audio_Ramp__FinishedFunc();
	void Pre_Damage_Audio_Ramp__UpdateFunc();
	void StormFadeTimeline__FinishedFunc();
	void StormFadeTimeline__UpdateFunc();
	void VolumetricStormFadeTimeline__FinishedFunc();
	void VolumetricStormFadeTimeline__UpdateFunc();
	void ResetSafeZoneScale();
	void Stormy(float NewParam);
	void ReceiveDestroyed();
	void OnBeginStartingStateEffectsEvent();
	void Megastorm_Pre_Damage_Tell();
	void Start_Megastorm_Audio();
	void Play_Storm_Grow_Audio();
	void Trigger_Distant_Storm_Oneshot();
	void Stop_Distant_Storm_Oneshots();
	void OnSafeZoneStateChange(enum class EFortSafeZoneState NewState, bool bInitial);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_SafeZoneIndicator(int32 EntryPoint, float CallFunc_GetSafeZoneFinishShrinkTime_ReturnValue, float CallFunc_GetSafeZoneStartShrinkTime_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float CallFunc_Subtract_FloatFloat_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, const struct FLinearColor& K2Node_MakeStruct_LinearColor, float CallFunc_GetTimelineLength_ReturnValue, float K2Node_CustomEvent_NewParam, class AAthena_GameState_C* CallFunc_GetAthenaGameState_AthenaGS, float CallFunc_GetTimeSinceSafeZonesStart_ReturnValue, float CallFunc_GetServerWorldTimeSeconds_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_K2_IsTimerActiveHandle_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_2, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FVector& CallFunc_GetRandomPointInPlayerDir_Position, const struct FVector2D& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_RandomFloatInRange_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_3, const struct FVector& CallFunc_GetRandomPointOnBoundary_Position, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, enum class EFortSafeZoneState K2Node_Event_NewState, bool K2Node_Event_bInitial, bool K2Node_SwitchEnum_CmpSuccess, float CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_4, bool CallFunc_GetIsPlayingReplay_ReturnValue, class ABP_SafeZoneStorm_C* CallFunc_GetActorOfClass_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void OnSafeZoneStateChangeDispatcher__DelegateSignature(enum class EFortSafeZoneState SafeZoneState);
};

}


