#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x298 - 0x260)
// WidgetBlueprintGeneratedClass Athena_Mustache_LockOnWidget.Athena_Mustache_LockOnWidget_C
class UAthena_Mustache_LockOnWidget_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Flash;                                             // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Scale;                                             // 0x270(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                Image_83;                                          // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class AActor*                                Target;                                            // 0x280(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            LockinOnSound;                                     // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            LockinOffSound;                                    // 0x290(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAthena_Mustache_LockOnWidget_C* GetDefaultObj();

	void Construct();
	void MoveUI();
	void Destruct();
	void WidgetAnimationEvt_Scale_K2Node_WidgetAnimationEvent_0();
	void ExecuteUbergraph_Athena_Mustache_LockOnWidget(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, const struct FVector2D& CallFunc_GetViewportSize_ReturnValue, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, float CallFunc_BroadcastPlayerImpactAtLocation_Loudness, float CallFunc_BroadcastPlayerImpactAtLocation_Duration, bool CallFunc_BroadcastPlayerImpactAtLocation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue);
};

}


