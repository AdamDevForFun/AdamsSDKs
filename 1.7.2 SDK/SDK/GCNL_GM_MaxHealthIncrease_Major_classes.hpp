#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x468 - 0x468)
// BlueprintGeneratedClass GCNL_GM_MaxHealthIncrease_Major.GCNL_GM_MaxHealthIncrease_Major_C
class AGCNL_GM_MaxHealthIncrease_Major_C : public AFortGameplayCueNotify_Looping
{
public:

	static class UClass* StaticClass();
	static class AGCNL_GM_MaxHealthIncrease_Major_C* GetDefaultObj();

	bool OnActive(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, class AEnemyPawn_Parent_C* K2Node_DynamicCast_AsEnemy_Pawn_Parent, bool K2Node_DynamicCast_bSuccess);
	void UserConstructionScript();
};

}


