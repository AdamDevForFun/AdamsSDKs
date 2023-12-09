#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x5D8 (0x840 - 0x268)
// AnimBlueprintGeneratedClass Bunker_Man_1h_Axe_AnimBP.Bunker_Man_1h_Axe_AnimBP_C
class UBunker_Man_1h_Axe_AnimBP_C : public UAnimInstance
{
public:
	uint8                                        Pad_454D[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_6E43C361416B401CE03952BEE67316D4; // 0x278(0x20)(None)
	struct FAnimNode_RefPose                     AnimGraphNode_LocalRefPose_415B4F71451D4B7D24387CBC763C2954; // 0x298(0x18)(None)
	struct FAnimNode_RigidBody                   AnimGraphNode_RigidBody_DDB7BA7E4B30010F7ABC448D1E8C5269; // 0x2B0(0x550)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_BED935E247CC763212C0BC94576DDCF6; // 0x800(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_A1806E1A4079DDFDC3E9618896D7452A; // 0x820(0x20)(None)

	static class UClass* StaticClass();
	static class UBunker_Man_1h_Axe_AnimBP_C* GetDefaultObj();

	void ExecuteUbergraph_Bunker_Man_1h_Axe_AnimBP(int32 EntryPoint);
};

}


