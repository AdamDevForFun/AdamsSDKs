#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GAB_AthenaDBNO.GAB_AthenaDBNO_C
// (None)

class UClass* UGAB_AthenaDBNO_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GAB_AthenaDBNO_C");

	return Clss;
}


// GAB_AthenaDBNO_C GAB_AthenaDBNO.Default__GAB_AthenaDBNO_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGAB_AthenaDBNO_C* UGAB_AthenaDBNO_C::GetDefaultObj()
{
	static class UGAB_AthenaDBNO_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGAB_AthenaDBNO_C*>(UGAB_AthenaDBNO_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.Get DBNO Montage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UAnimMontage*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsSurfaceSwimming_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsSkydiving_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

class UAnimMontage* UGAB_AthenaDBNO_C::Get_DBNO_Montage(bool CallFunc_IsSurfaceSwimming_ReturnValue, bool CallFunc_IsSkydiving_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GAB_AthenaDBNO_C", "Get DBNO Montage");

	Params::UGAB_AthenaDBNO_C_Get_DBNO_Montage_Params Parms{};

	Parms.CallFunc_IsSurfaceSwimming_ReturnValue = CallFunc_IsSurfaceSwimming_ReturnValue;
	Parms.CallFunc_IsSkydiving_ReturnValue = CallFunc_IsSkydiving_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.GetInitialHealAmount
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Health                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEvaluateCurveTableResultCallFunc_EvaluateCurveTableRow_OutResult                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_EvaluateCurveTableRow_OutXY                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetAvatarActorFromActorInfo_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetFloatAttribute_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGAB_AthenaDBNO_C::GetInitialHealAmount(float* Health, enum class EEvaluateCurveTableResult CallFunc_EvaluateCurveTableRow_OutResult, float CallFunc_EvaluateCurveTableRow_OutXY, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttribute_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, float CallFunc_Subtract_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GAB_AthenaDBNO_C", "GetInitialHealAmount");

	Params::UGAB_AthenaDBNO_C_GetInitialHealAmount_Params Parms{};

	Parms.CallFunc_EvaluateCurveTableRow_OutResult = CallFunc_EvaluateCurveTableRow_OutResult;
	Parms.CallFunc_EvaluateCurveTableRow_OutXY = CallFunc_EvaluateCurveTableRow_OutXY;
	Parms.CallFunc_GetAvatarActorFromActorInfo_ReturnValue = CallFunc_GetAvatarActorFromActorInfo_ReturnValue;
	Parms.CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute = CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute;
	Parms.CallFunc_GetFloatAttribute_ReturnValue = CallFunc_GetFloatAttribute_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Health != nullptr)
		*Health = Parms.Health;

}


// Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.InitializeDeathHitDirection
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          EventHitData                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FVector                     CallFunc_GetImpulseData_ImpulseDirection                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetImpulseData_KnockbackMagnitude                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetImpulseData_KnockbackZAngle                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_EffectContextGetHitResult_ReturnValue                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGAB_AthenaDBNO_C::InitializeDeathHitDirection(const struct FGameplayEventData& EventHitData, const struct FVector& CallFunc_GetImpulseData_ImpulseDirection, float CallFunc_GetImpulseData_KnockbackMagnitude, float CallFunc_GetImpulseData_KnockbackZAngle, const struct FHitResult& CallFunc_EffectContextGetHitResult_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GAB_AthenaDBNO_C", "InitializeDeathHitDirection");

	Params::UGAB_AthenaDBNO_C_InitializeDeathHitDirection_Params Parms{};

	Parms.EventHitData = EventHitData;
	Parms.CallFunc_GetImpulseData_ImpulseDirection = CallFunc_GetImpulseData_ImpulseDirection;
	Parms.CallFunc_GetImpulseData_KnockbackMagnitude = CallFunc_GetImpulseData_KnockbackMagnitude;
	Parms.CallFunc_GetImpulseData_KnockbackZAngle = CallFunc_GetImpulseData_KnockbackZAngle;
	Parms.CallFunc_EffectContextGetHitResult_ReturnValue = CallFunc_EffectContextGetHitResult_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.OnCancelled_F0F6785443BD2E74F5591884CB19F35F
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGAB_AthenaDBNO_C::OnCancelled_F0F6785443BD2E74F5591884CB19F35F()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GAB_AthenaDBNO_C", "OnCancelled_F0F6785443BD2E74F5591884CB19F35F");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.OnInterrupted_F0F6785443BD2E74F5591884CB19F35F
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGAB_AthenaDBNO_C::OnInterrupted_F0F6785443BD2E74F5591884CB19F35F()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GAB_AthenaDBNO_C", "OnInterrupted_F0F6785443BD2E74F5591884CB19F35F");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.OnBlendOut_F0F6785443BD2E74F5591884CB19F35F
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGAB_AthenaDBNO_C::OnBlendOut_F0F6785443BD2E74F5591884CB19F35F()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GAB_AthenaDBNO_C", "OnBlendOut_F0F6785443BD2E74F5591884CB19F35F");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.OnCompleted_F0F6785443BD2E74F5591884CB19F35F
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGAB_AthenaDBNO_C::OnCompleted_F0F6785443BD2E74F5591884CB19F35F()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GAB_AthenaDBNO_C", "OnCompleted_F0F6785443BD2E74F5591884CB19F35F");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.OnStateInterrupted_C85094F843D5075FE4872C95AFC5D6B6
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGAB_AthenaDBNO_C::OnStateInterrupted_C85094F843D5075FE4872C95AFC5D6B6()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GAB_AthenaDBNO_C", "OnStateInterrupted_C85094F843D5075FE4872C95AFC5D6B6");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.OnStateEnded_C85094F843D5075FE4872C95AFC5D6B6
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGAB_AthenaDBNO_C::OnStateEnded_C85094F843D5075FE4872C95AFC5D6B6()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GAB_AthenaDBNO_C", "OnStateEnded_C85094F843D5075FE4872C95AFC5D6B6");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.OnFinish_4C169D40441E45B462D83CBBA67F6E45
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGAB_AthenaDBNO_C::OnFinish_4C169D40441E45B462D83CBBA67F6E45()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GAB_AthenaDBNO_C", "OnFinish_4C169D40441E45B462D83CBBA67F6E45");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          EventData                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGAB_AthenaDBNO_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GAB_AthenaDBNO_C", "K2_ActivateAbilityFromEvent");

	Params::UGAB_AthenaDBNO_C_K2_ActivateAbilityFromEvent_Params Parms{};

	Parms.EventData = EventData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bWasCancelled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGAB_AthenaDBNO_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GAB_AthenaDBNO_C", "K2_OnEndAbility");

	Params::UGAB_AthenaDBNO_C_K2_OnEndAbility_Params Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.DropHeldObjects
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGAB_AthenaDBNO_C::DropHeldObjects()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GAB_AthenaDBNO_C", "DropHeldObjects");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.ExecuteUbergraph_GAB_AthenaDBNO
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// class UAbilityTask_StartAbilityState*CallFunc_StartAbilityState_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAbilityTask_WaitDelay*      CallFunc_WaitDelay_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_Event_EventData                                           (ConstParm)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetAvatarActorFromActorInfo_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerPawnAthena*       K2Node_DynamicCast_AsFort_Player_Pawn_Athena                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue               (NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectSpecHandle   CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue              (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// float                              CallFunc_GetInitialHealAmount_Health                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bWasCancelled                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayEffectSpecHandle   CallFunc_AssignSetByCallerMagnitude_ReturnValue                  (None)
// struct FActiveGameplayEffectHandle CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue           (NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimMontage*                CallFunc_Get_DBNO_Montage_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilityTask_PlayMontageAndWait*CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortHeldObjectComponent*    CallFunc_GetHeldObjectComponentAttachedToPlayer_ReturnValue      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGAB_AthenaDBNO_C::ExecuteUbergraph_GAB_AthenaDBNO(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UAbilityTask_StartAbilityState* CallFunc_StartAbilityState_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool CallFunc_IsValid_ReturnValue, class UAbilityTask_WaitDelay* CallFunc_WaitDelay_ReturnValue, const struct FGameplayEventData& K2Node_Event_EventData, bool CallFunc_IsValid_ReturnValue_1, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, class AFortPlayerPawnAthena* K2Node_DynamicCast_AsFort_Player_Pawn_Athena, bool K2Node_DynamicCast_bSuccess_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue, const struct FGameplayEffectSpecHandle& CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, float CallFunc_GetInitialHealAmount_Health, bool K2Node_Event_bWasCancelled, const struct FGameplayEffectSpecHandle& CallFunc_AssignSetByCallerMagnitude_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn_1, bool K2Node_DynamicCast_bSuccess_2, class UAnimMontage* CallFunc_Get_DBNO_Montage_ReturnValue, class UAbilityTask_PlayMontageAndWait* CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn_2, bool K2Node_DynamicCast_bSuccess_3, class UFortHeldObjectComponent* CallFunc_GetHeldObjectComponentAttachedToPlayer_ReturnValue, bool CallFunc_IsValid_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GAB_AthenaDBNO_C", "ExecuteUbergraph_GAB_AthenaDBNO");

	Params::UGAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_StartAbilityState_ReturnValue = CallFunc_StartAbilityState_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_WaitDelay_ReturnValue = CallFunc_WaitDelay_ReturnValue;
	Parms.K2Node_Event_EventData = K2Node_Event_EventData;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetAvatarActorFromActorInfo_ReturnValue = CallFunc_GetAvatarActorFromActorInfo_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn = K2Node_DynamicCast_AsFort_Player_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn_Athena = K2Node_DynamicCast_AsFort_Player_Pawn_Athena;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue = CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue;
	Parms.CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue = CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.CallFunc_GetInitialHealAmount_Health = CallFunc_GetInitialHealAmount_Health;
	Parms.K2Node_Event_bWasCancelled = K2Node_Event_bWasCancelled;
	Parms.CallFunc_AssignSetByCallerMagnitude_ReturnValue = CallFunc_AssignSetByCallerMagnitude_ReturnValue;
	Parms.CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue = CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue;
	Parms.CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1 = CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn_1 = K2Node_DynamicCast_AsFort_Player_Pawn_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_Get_DBNO_Montage_ReturnValue = CallFunc_Get_DBNO_Montage_ReturnValue;
	Parms.CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue = CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2 = CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn_2 = K2Node_DynamicCast_AsFort_Player_Pawn_2;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_GetHeldObjectComponentAttachedToPlayer_ReturnValue = CallFunc_GetHeldObjectComponentAttachedToPlayer_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}

}


