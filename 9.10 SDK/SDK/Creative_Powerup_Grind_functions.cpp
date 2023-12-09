#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Creative_Powerup_Grind.Creative_Powerup_Grind_C
// (Actor)

class UClass* ACreative_Powerup_Grind_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Creative_Powerup_Grind_C");

	return Clss;
}


// Creative_Powerup_Grind_C Creative_Powerup_Grind.Default__Creative_Powerup_Grind_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ACreative_Powerup_Grind_C* ACreative_Powerup_Grind_C::GetDefaultObj()
{
	static class ACreative_Powerup_Grind_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ACreative_Powerup_Grind_C*>(ACreative_Powerup_Grind_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Creative_Powerup_Grind.Creative_Powerup_Grind_C.SetupEffectData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEffectSpecHandle   EffectHandle                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FGameplayEffectSpecHandle   OutEffectHandle                                                  (Parm, OutParm)
// struct FGameplayEffectSpecHandle   LocalEffectHandleRef                                             (Edit, BlueprintVisible)
// struct FGameplayEffectSpecHandle   CallFunc_SetupEffectData_OutEffectHandle                         (None)
// struct FGameplayEffectSpecHandle   CallFunc_AddAssetTag_ReturnValue                                 (None)

void ACreative_Powerup_Grind_C::SetupEffectData(const struct FGameplayEffectSpecHandle& EffectHandle, struct FGameplayEffectSpecHandle* OutEffectHandle, const struct FGameplayEffectSpecHandle& LocalEffectHandleRef, const struct FGameplayEffectSpecHandle& CallFunc_SetupEffectData_OutEffectHandle, const struct FGameplayEffectSpecHandle& CallFunc_AddAssetTag_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Creative_Powerup_Grind_C", "SetupEffectData");

	Params::ACreative_Powerup_Grind_C_SetupEffectData_Params Parms{};

	Parms.EffectHandle = EffectHandle;
	Parms.LocalEffectHandleRef = LocalEffectHandleRef;
	Parms.CallFunc_SetupEffectData_OutEffectHandle = CallFunc_SetupEffectData_OutEffectHandle;
	Parms.CallFunc_AddAssetTag_ReturnValue = CallFunc_AddAssetTag_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OutEffectHandle != nullptr)
		*OutEffectHandle = std::move(Parms.OutEffectHandle);

}

}


