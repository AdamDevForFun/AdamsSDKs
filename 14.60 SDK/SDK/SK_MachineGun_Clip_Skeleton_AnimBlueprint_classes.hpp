#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA8 (0x360 - 0x2B8)
// AnimBlueprintGeneratedClass SK_MachineGun_Clip_Skeleton_AnimBlueprint.SK_MachineGun_Clip_Skeleton_AnimBlueprint_C
class USK_MachineGun_Clip_Skeleton_AnimBlueprint_C : public UAnimInstance
{
public:
	uint8                                        Pad_67B1[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimInstanceSubsystemData            AnimBlueprintClassSubsystem_PropertyAccess;        // 0x2C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_67B2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x2D0(0x30)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x300(0x48)(None)
	struct FAnimNode_RefPose                     AnimGraphNode_LocalRefPose;                        // 0x348(0x18)(None)

	static class UClass* StaticClass();
	static class USK_MachineGun_Clip_Skeleton_AnimBlueprint_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_SK_MachineGun_Clip_Skeleton_AnimBlueprint(int32 EntryPoint);
};

}


