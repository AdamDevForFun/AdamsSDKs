#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x310 (0x600 - 0x2F0)
// AnimBlueprintGeneratedClass WrapBandages_Prop_AnimBP.WrapBandages_Prop_AnimBP_C
class UWrapBandages_Prop_AnimBP_C : public UFortItemAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimInstanceSubsystemData            AnimBlueprintClassSubsystem_PropertyAccess;        // 0x2F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5405[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x300(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x330(0x78)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_1;                              // 0x3A8(0x48)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum;                     // 0x3F0(0xB0)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose;                      // 0x4A0(0xC8)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_1;                     // 0x568(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose;                       // 0x590(0x28)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x5B8(0x48)(None)

	static class UClass* StaticClass();
	static class UWrapBandages_Prop_AnimBP_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_WrapBandages_Prop_AnimBP(int32 EntryPoint);
};

}


