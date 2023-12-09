#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x40 - 0x40)
// BlueprintGeneratedClass GCNStatic_MantisStrike.GCNStatic_MantisStrike_C
class UGCNStatic_MantisStrike_C : public UGameplayCueNotify_Static
{
public:

	static class UClass* StaticClass();
	static class UGCNStatic_MantisStrike_C* GetDefaultObj();

	bool OnExecute(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, class USoundBase* LocalMantisStrikeImpactCue, class UParticleSystem* LocalP_MantisStrikeImpact, const struct FRotator& CallFunc_MakeRotFromZ_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue);
};

}


