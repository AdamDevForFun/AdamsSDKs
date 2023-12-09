#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x470 - 0x468)
// BlueprintGeneratedClass GCN_Commando_IncendiaryRoundsDOT.GCN_Commando_IncendiaryRoundsDOT_C
class AGCN_Commando_IncendiaryRoundsDOT_C : public AFortGameplayCueNotify_Looping
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x468(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class AGCN_Commando_IncendiaryRoundsDOT_C* GetDefaultObj();

	void UserConstructionScript();
	void ReceiveDestroyed();
	void ExecuteUbergraph_GCN_Commando_IncendiaryRoundsDOT(int32 EntryPoint);
};

}


