#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA8 (0x360 - 0x2B8)
// AnimBlueprintGeneratedClass LowTower_Chaplin_AnimBP.LowTower_Chaplin_AnimBP_C
class ULowTower_Chaplin_AnimBP_C : public UAnimInstance
{
public:
	uint8                                        Pad_5A75[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimInstanceSubsystemData            AnimBlueprintClassSubsystem_PropertyAccess;        // 0x2C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5A76[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x2D0(0x30)(None)
	struct FAnimNode_RefPose                     AnimGraphNode_LocalRefPose;                        // 0x300(0x18)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x318(0x48)(None)

	static class UClass* StaticClass();
	static class ULowTower_Chaplin_AnimBP_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_LowTower_Chaplin_AnimBP(int32 EntryPoint);
};

}


