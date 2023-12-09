#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_Creative_Powerup_Jump.GA_Creative_Powerup_Jump_C
// (None)

class UClass* UGA_Creative_Powerup_Jump_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_Creative_Powerup_Jump_C");

	return Clss;
}


// GA_Creative_Powerup_Jump_C GA_Creative_Powerup_Jump.Default__GA_Creative_Powerup_Jump_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_Creative_Powerup_Jump_C* UGA_Creative_Powerup_Jump_C::GetDefaultObj()
{
	static class UGA_Creative_Powerup_Jump_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_Creative_Powerup_Jump_C*>(UGA_Creative_Powerup_Jump_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_Creative_Powerup_Jump.GA_Creative_Powerup_Jump_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          EventData                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_Creative_Powerup_Jump_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Creative_Powerup_Jump_C", "K2_ActivateAbilityFromEvent");

	Params::UGA_Creative_Powerup_Jump_C_K2_ActivateAbilityFromEvent_Params Parms{};

	Parms.EventData = EventData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Creative_Powerup_Jump.GA_Creative_Powerup_Jump_C.ExecuteUbergraph_GA_Creative_Powerup_Jump
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_CommitAbility_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayEventData          K2Node_Event_EventData                                           (ConstParm)
// struct FGameplayEffectSpecHandle   CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue              (None)
// struct FGameplayAbilityTargetDataHandleCallFunc_AbilityTargetDataFromActor_ReturnValue                  (None)
// TArray<struct FActiveGameplayEffectHandle>CallFunc_K2_ApplyGameplayEffectSpecToTarget_ReturnValue          (ZeroConstructor, ReferenceParm)

void UGA_Creative_Powerup_Jump_C::ExecuteUbergraph_GA_Creative_Powerup_Jump(int32 EntryPoint, bool CallFunc_K2_CommitAbility_ReturnValue, const struct FGameplayEventData& K2Node_Event_EventData, const struct FGameplayEffectSpecHandle& CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromActor_ReturnValue, TArray<struct FActiveGameplayEffectHandle>& CallFunc_K2_ApplyGameplayEffectSpecToTarget_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Creative_Powerup_Jump_C", "ExecuteUbergraph_GA_Creative_Powerup_Jump");

	Params::UGA_Creative_Powerup_Jump_C_ExecuteUbergraph_GA_Creative_Powerup_Jump_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_K2_CommitAbility_ReturnValue = CallFunc_K2_CommitAbility_ReturnValue;
	Parms.K2Node_Event_EventData = K2Node_Event_EventData;
	Parms.CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue = CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue;
	Parms.CallFunc_AbilityTargetDataFromActor_ReturnValue = CallFunc_AbilityTargetDataFromActor_ReturnValue;
	Parms.CallFunc_K2_ApplyGameplayEffectSpecToTarget_ReturnValue = CallFunc_K2_ApplyGameplayEffectSpecToTarget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


