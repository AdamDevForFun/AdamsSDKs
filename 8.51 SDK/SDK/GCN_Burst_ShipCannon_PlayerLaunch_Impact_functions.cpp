#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GCN_Burst_ShipCannon_PlayerLaunch_Impact.GCN_Burst_ShipCannon_PlayerLaunch_Impact_C
// (None)

class UClass* UGCN_Burst_ShipCannon_PlayerLaunch_Impact_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GCN_Burst_ShipCannon_PlayerLaunch_Impact_C");

	return Clss;
}


// GCN_Burst_ShipCannon_PlayerLaunch_Impact_C GCN_Burst_ShipCannon_PlayerLaunch_Impact.Default__GCN_Burst_ShipCannon_PlayerLaunch_Impact_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGCN_Burst_ShipCannon_PlayerLaunch_Impact_C* UGCN_Burst_ShipCannon_PlayerLaunch_Impact_C::GetDefaultObj()
{
	static class UGCN_Burst_ShipCannon_PlayerLaunch_Impact_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGCN_Burst_ShipCannon_PlayerLaunch_Impact_C*>(UGCN_Burst_ShipCannon_PlayerLaunch_Impact_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GCN_Burst_ShipCannon_PlayerLaunch_Impact.GCN_Burst_ShipCannon_PlayerLaunch_Impact_C.OnBurst
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor*                      MyTarget                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// TArray<class UParticleSystemComponent*>ParticleComponents                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UAudioComponent*>     AudioComponents                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UCameraShake*                BurstCameraShakeInstance                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ADecalActor*                 BurstDecalInstance                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGCN_Burst_ShipCannon_PlayerLaunch_Impact_C::OnBurst(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GCN_Burst_ShipCannon_PlayerLaunch_Impact_C", "OnBurst");

	Params::UGCN_Burst_ShipCannon_PlayerLaunch_Impact_C_OnBurst_Params Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = Parameters;
	Parms.ParticleComponents = ParticleComponents;
	Parms.AudioComponents = AudioComponents;
	Parms.BurstCameraShakeInstance = BurstCameraShakeInstance;
	Parms.BurstDecalInstance = BurstDecalInstance;

	UObject::ProcessEvent(Func, &Parms);

}

}


