#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x7A8 - 0x790)
// BlueprintGeneratedClass GC_Melee_Piercing_Spear_Joust_Loop.GC_Melee_Piercing_Spear_Joust_Loop_C
class AGC_Melee_Piercing_Spear_Joust_Loop_C : public AFortGameplayCueNotify_Loop
{
public:
	TArray<class FName>                          Dust_Emitters;                                     // 0x790(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class ABP_SplineVolumeTrail_v1b_C*           Teleport_Spline;                                   // 0x7A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AGC_Melee_Piercing_Spear_Joust_Loop_C* GetDefaultObj();

};

}


