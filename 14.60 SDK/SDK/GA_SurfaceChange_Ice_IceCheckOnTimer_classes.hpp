#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0xAC8 - 0xAA8)
// BlueprintGeneratedClass GA_SurfaceChange_Ice_IceCheckOnTimer.GA_SurfaceChange_Ice_IceCheckOnTimer_C
class UGA_SurfaceChange_Ice_IceCheckOnTimer_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xAA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AFortPlayerPawn*                       FortPlayerPawn;                                    // 0xAB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          TraceTimer;                                        // 0xAB8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          OffIceTimer;                                       // 0xAC0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_SurfaceChange_Ice_IceCheckOnTimer_C* GetDefaultObj();

	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void TraceForTerrain();
	void RemoveIceGE();
	void ExecuteUbergraph_GA_SurfaceChange_Ice_IceCheckOnTimer(int32 EntryPoint, TArray<class AActor*>& Temp_object_Variable, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue_1, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EPhysicalSurface CallFunc_GetFortPhysicalSurface_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, bool K2Node_Event_bWasCancelled, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_K2_IsTimerActiveHandle_ReturnValue, TArray<class AActor*>& Temp_object_Variable_1, const struct FHitResult& CallFunc_LineTraceSingle_OutHit_1, bool CallFunc_LineTraceSingle_ReturnValue_1, enum class EPhysicalSurface CallFunc_GetFortPhysicalSurface_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_1);
};

}


