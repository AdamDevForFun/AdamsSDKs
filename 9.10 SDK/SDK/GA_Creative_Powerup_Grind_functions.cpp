#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_Creative_Powerup_Grind.GA_Creative_Powerup_Grind_C
// (None)

class UClass* UGA_Creative_Powerup_Grind_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_Creative_Powerup_Grind_C");

	return Clss;
}


// GA_Creative_Powerup_Grind_C GA_Creative_Powerup_Grind.Default__GA_Creative_Powerup_Grind_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_Creative_Powerup_Grind_C* UGA_Creative_Powerup_Grind_C::GetDefaultObj()
{
	static class UGA_Creative_Powerup_Grind_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_Creative_Powerup_Grind_C*>(UGA_Creative_Powerup_Grind_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_Creative_Powerup_Grind.GA_Creative_Powerup_Grind_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          EventData                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_Creative_Powerup_Grind_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Creative_Powerup_Grind_C", "K2_ActivateAbilityFromEvent");

	Params::UGA_Creative_Powerup_Grind_C_K2_ActivateAbilityFromEvent_Params Parms{};

	Parms.EventData = EventData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Creative_Powerup_Grind.GA_Creative_Powerup_Grind_C.ExecuteUbergraph_GA_Creative_Powerup_Grind
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectSpecHandle   CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue              (None)
// bool                               CallFunc_K2_CommitAbility_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayEventData          K2Node_Event_EventData                                           (ConstParm)
// class ACreative_Powerup_C*         K2Node_DynamicCast_AsCreative_Powerup                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayAbilityTargetDataHandleCallFunc_AbilityTargetDataFromActor_ReturnValue                  (None)
// struct FGameplayEffectSpecHandle   CallFunc_SetupEffectData_OutEffectHandle                         (None)
// TArray<struct FActiveGameplayEffectHandle>CallFunc_K2_ApplyGameplayEffectSpecToTarget_ReturnValue          (ZeroConstructor, ReferenceParm)

void UGA_Creative_Powerup_Grind_C::ExecuteUbergraph_GA_Creative_Powerup_Grind(int32 EntryPoint, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, const struct FGameplayEffectSpecHandle& CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue, bool CallFunc_K2_CommitAbility_ReturnValue, const struct FGameplayEventData& K2Node_Event_EventData, class ACreative_Powerup_C* K2Node_DynamicCast_AsCreative_Powerup, bool K2Node_DynamicCast_bSuccess, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromActor_ReturnValue, const struct FGameplayEffectSpecHandle& CallFunc_SetupEffectData_OutEffectHandle, TArray<struct FActiveGameplayEffectHandle>& CallFunc_K2_ApplyGameplayEffectSpecToTarget_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Creative_Powerup_Grind_C", "ExecuteUbergraph_GA_Creative_Powerup_Grind");

	Params::UGA_Creative_Powerup_Grind_C_ExecuteUbergraph_GA_Creative_Powerup_Grind_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue = CallFunc_GetAbilitySystemComponent_ReturnValue;
	Parms.CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue = CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue;
	Parms.CallFunc_K2_CommitAbility_ReturnValue = CallFunc_K2_CommitAbility_ReturnValue;
	Parms.K2Node_Event_EventData = K2Node_Event_EventData;
	Parms.K2Node_DynamicCast_AsCreative_Powerup = K2Node_DynamicCast_AsCreative_Powerup;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_AbilityTargetDataFromActor_ReturnValue = CallFunc_AbilityTargetDataFromActor_ReturnValue;
	Parms.CallFunc_SetupEffectData_OutEffectHandle = CallFunc_SetupEffectData_OutEffectHandle;
	Parms.CallFunc_K2_ApplyGameplayEffectSpecToTarget_ReturnValue = CallFunc_K2_ApplyGameplayEffectSpecToTarget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


