#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x90 (0x2F8 - 0x268)
// AnimBlueprintGeneratedClass BP_Shotgun_SG_BFPA.BP_Shotgun_SG_BFPA_C
class UBP_Shotgun_SG_BFPA_C : public UAnimInstance
{
public:
	uint8                                        Pad_4CBE[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_4F6329394B95E045DDC6838AB743FA3F; // 0x278(0x20)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_58DF360140B29B2553BE3DB3DD1B36FB; // 0x298(0x48)(None)
	struct FAnimNode_RefPose                     AnimGraphNode_LocalRefPose_87A69A934D766ABE8EC875A0703F52BB; // 0x2E0(0x18)(None)

	static class UClass* StaticClass();
	static class UBP_Shotgun_SG_BFPA_C* GetDefaultObj();

	void ExecuteUbergraph_BP_Shotgun_SG_BFPA(int32 EntryPoint);
};

}


