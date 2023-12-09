#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x5C0 (0x918 - 0x358)
// AnimBlueprintGeneratedClass VinderTech_Umbrella_AnimBP.VinderTech_Umbrella_AnimBP_C
class UVinderTech_Umbrella_AnimBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x358(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_47C162A34E75B5D855F1039C8811E06C; // 0x360(0x48)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_55B0C7EB4409F55E838D3CA7B7457964; // 0x3A8(0x60)(None)
	uint8                                        Pad_3C79[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_9592CEBA49F2B067A15FFFBB6AB5105E; // 0x410(0x80)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_F81EA3C344FA6DFC7A5EA1B792B511A5; // 0x490(0x80)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_3753F99B490EFDA0C68FF0B8819E664F; // 0x510(0x80)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_1A7F7CBD4C68973F2BBDFCBF93433107; // 0x590(0x80)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_8F6CE6514B2B120BE5A47CA93BF6B64F; // 0x610(0x70)(None)
	struct FAnimNode_Root                        AnimGraphNode_StateResult_0FA712374C2DD4AE7BAB068F07EF1E2A; // 0x680(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_FB121E7E466BDC2AEC2334AABA7B7973; // 0x6C8(0x70)(None)
	struct FAnimNode_Root                        AnimGraphNode_StateResult_12B937664A6236CA6C6F30B310D7D872; // 0x738(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_CAD550DB43A0B090364489A1ED4F53F6; // 0x780(0x70)(None)
	struct FAnimNode_Root                        AnimGraphNode_StateResult_90756A2C41FA0E67C991218B04CCA9C1; // 0x7F0(0x48)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_AD38D8EC41D7A5D47CC14C9AC67E6D6E; // 0x838(0xD8)(None)
	bool                                         IsParachuteOpen;                                   // 0x910(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C7A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DeltaSeconds;                                      // 0x914(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UVinderTech_Umbrella_AnimBP_C* GetDefaultObj();

	void EvaluateGraphExposedInputs_ExecuteUbergraph_VinderTech_Umbrella_AnimBP_AnimGraphNode_TransitionResult_3753F99B490EFDA0C68FF0B8819E664F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_VinderTech_Umbrella_AnimBP_AnimGraphNode_TransitionResult_F81EA3C344FA6DFC7A5EA1B792B511A5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_VinderTech_Umbrella_AnimBP_AnimGraphNode_TransitionResult_1A7F7CBD4C68973F2BBDFCBF93433107();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_VinderTech_Umbrella_AnimBP_AnimGraphNode_TransitionResult_9592CEBA49F2B067A15FFFBB6AB5105E();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_VinderTech_Umbrella_AnimBP(int32 EntryPoint, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, class AFortPlayerPawnAthena* K2Node_DynamicCast_AsFort_Player_Pawn_Athena, bool K2Node_DynamicCast_bSuccess2, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsParachuteOpen_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue2, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue, float K2Node_Event_DeltaTimeX, bool CallFunc_EqualEqual_FloatFloat_ReturnValue);
};

}


