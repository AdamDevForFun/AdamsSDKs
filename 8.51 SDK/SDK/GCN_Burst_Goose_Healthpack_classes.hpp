#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x1A0 - 0x1A0)
// BlueprintGeneratedClass GCN_Burst_Goose_Healthpack.GCN_Burst_Goose_Healthpack_C
class UGCN_Burst_Goose_Healthpack_C : public UFortGameplayCueNotify_Burst
{
public:

	static class UClass* StaticClass();
	static class UGCN_Burst_Goose_Healthpack_C* GetDefaultObj();

	void OnBurst(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance, class AFerretVehicle_C* K2Node_DynamicCast_AsFerret_Vehicle, bool K2Node_DynamicCast_bSuccess);
};

}


