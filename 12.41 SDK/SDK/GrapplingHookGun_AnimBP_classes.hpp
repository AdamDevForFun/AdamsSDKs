#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x749 (0x9B1 - 0x268)
// AnimBlueprintGeneratedClass GrapplingHookGun_AnimBP.GrapplingHookGun_AnimBP_C
class UGrapplingHookGun_AnimBP_C : public UAnimInstance
{
public:
	uint8                                        Pad_5FC9[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x278(0x30)(None)
	struct FAnimNode_RefPose                     AnimGraphNode_LocalRefPose;                        // 0x2A8(0x18)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone;                          // 0x2C0(0x108)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x3C8(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x3E8(0x20)(None)
	uint8                                        Pad_5FCA[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_RigidBody                   AnimGraphNode_RigidBody;                           // 0x410(0x5A0)(None)
	bool                                         IsFired;                                           // 0x9B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UGrapplingHookGun_AnimBP_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_GrapplingHookGun_AnimBP(int32 EntryPoint, class AActor* CallFunc_GetOwningActor_ReturnValue, const struct FGameplayTagContainer& Temp_struct_Variable, class AB_Hookgun_Athena_C* K2Node_DynamicCast_AsB_Hookgun_Athena, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasTag_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess_1, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface, bool K2Node_DynamicCast_bSuccess_2, const struct FGameplayTagContainer& CallFunc_GetOwnedGameplayTags_TagContainer, float K2Node_Event_DeltaTimeX);
};

}


