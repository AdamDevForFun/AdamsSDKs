#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x94 (0x88C - 0x7F8)
// BlueprintGeneratedClass B_Prj_AdrenalineRush.B_Prj_AdrenalineRush_C
class AB_Prj_AdrenalineRush_C : public AFortProjectileBase
{
public:
	uint8                                        Pad_3C83[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x800(0x8)(Transient, DuplicateTransient)
	class UParticleSystemComponent*              P_AdrenalineRush_HealingSparkleInit_01;            // 0x808(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPostProcessComponent*                 ShockwavePostProcess;                              // 0x810(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              Shockwave;                                         // 0x818(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        PP_Shockwave_Transition_9A3E45BA49610747DB8700A8BAA24ED4; // 0x820(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        PP_Shockwave_Fader_9A3E45BA49610747DB8700A8BAA24ED4; // 0x824(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                PP_Shockwave__Direction_9A3E45BA49610747DB8700A8BAA24ED4; // 0x828(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C84[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    PP_Shockwave;                                      // 0x830(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Shockwave_Ring_Size_Z;                             // 0x838(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C85[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPostProcessComponent*                 ShockwavePP;                                       // 0x840(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<float>                                PP_Shockwave_PlayRate;                             // 0x848(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                PP_Shockwave_SpawnRate;                            // 0x858(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                        Shockwave_Particle_Max_Radius_Clamp;               // 0x868(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C86[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            Sound_AdrenalineRush_Start;                        // 0x870(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Sound_AdrenalineShockWave_FP;                      // 0x878(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Sound_AdrenalineShockWave_TP;                      // 0x880(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ShockWave_PlayRate;                                // 0x888(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AB_Prj_AdrenalineRush_C* GetDefaultObj();

	void DestroyPP();
	void UserConstructionScript();
	void PP_Shockwave__FinishedFunc();
	void PP_Shockwave__UpdateFunc();
	void PassInfo(float Radius, class AFortPlayerPawn* Owner, bool AOE_Heal, bool Upgrade_InstaHeal, bool HOT, float HOT_Duration, bool Resurrect);
	void ExecuteUbergraph_B_Prj_AdrenalineRush(int32 EntryPoint, float K2Node_CustomEvent_Radius, class AFortPlayerPawn* K2Node_CustomEvent_Owner, bool K2Node_CustomEvent_AOE_Heal, bool K2Node_CustomEvent_Upgrade_InstaHeal, bool K2Node_CustomEvent_HOT, float K2Node_CustomEvent_HOT_Duration, bool K2Node_CustomEvent_Resurrect, bool CallFunc_IsLocallyControlled_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_K2_AttachTo_ReturnValue, float CallFunc_FClamp_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue2, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue3);
};

}


