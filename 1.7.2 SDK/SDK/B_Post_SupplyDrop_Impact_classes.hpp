#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x8B8 - 0x8A0)
// BlueprintGeneratedClass B_Post_SupplyDrop_Impact.B_Post_SupplyDrop_Impact_C
class AB_Post_SupplyDrop_Impact_C : public AB_Post_Explosion_Generic_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x8A0(0x8)(Transient, DuplicateTransient)
	float                                        Timeline_0_BlendWeight_69D06A67407476376496A4814EB654AE; // 0x8A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_0__Direction_69D06A67407476376496A4814EB654AE; // 0x8AC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3CA8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_0;                                        // 0x8B0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AB_Post_SupplyDrop_Impact_C* GetDefaultObj();

	void UserConstructionScript();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void SpawnPostFX(float PostFX_BoxScaleDyn, const struct FVector& PostFX_CamShakeLoc, bool PostFX_UseCamShake, float PostFX_DeactivateDelay, bool PostFX_UseForceFeedback);
	void ExecuteUbergraph_B_Post_SupplyDrop_Impact(int32 EntryPoint, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue2, float CallFunc_Multiply_FloatFloat_ReturnValue3, float K2Node_CustomEvent_PostFX_BoxScaleDyn, const struct FVector& K2Node_CustomEvent_PostFX_CamShakeLoc, bool K2Node_CustomEvent_PostFX_UseCamShake, float K2Node_CustomEvent_PostFX_DeactivateDelay, bool K2Node_CustomEvent_PostFX_UseForceFeedback, const struct FVector& CallFunc_MakeVector_ReturnValue);
};

}


