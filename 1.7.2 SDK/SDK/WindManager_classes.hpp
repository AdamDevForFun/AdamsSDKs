#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x97 (0x66F - 0x5D8)
// BlueprintGeneratedClass WindManager.WindManager_C
class AWindManager_C : public AFortWindManager
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x5D8(0x8)(Transient, DuplicateTransient)
	class UStaticMeshComponent*                  EmptyStaticMesh;                                   // 0x5E0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              ParticleSystem;                                    // 0x5E8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneCaptureComponent2D*              TopDownCaptureActorOfTheWorld;                     // 0x5F0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              DebugParticleSystem;                               // 0x5F8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneCaptureComponent2D*              SceneCaptureComponent2D03;                         // 0x600(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneCaptureComponent2D*              SceneCaptureComponent2D02;                         // 0x608(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneCaptureComponent2D*              SceneCaptureComponent2D01;                         // 0x610(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x618(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        SmallerRenderTargetOrthoWidth;                     // 0x620(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LargestRenderTargetOrthoWidth;                     // 0x624(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MidSizedRenderTargetOrthoWidth;                    // 0x628(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_26D8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        External_Test_Actor;                               // 0x630(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                         DebugParticleBasedWind;                            // 0x640(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_26D9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AFortStaticMeshActor*>          World_Terrain_Meshes;                              // 0x648(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	struct FVector                               Camera_Height_Offset;                              // 0x658(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Character_Initialized;                             // 0x664(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_26DA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Particle_Z_Offset;                                 // 0x668(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Activate_Grass_Wind_And_Top_Down_Z_Depth_Texture_Renders_Of_the_World; // 0x66C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Has_Water_Interaction_Enabled_Variable_Been_Set;   // 0x66D(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Is_Water_Interaction_Enabled;                      // 0x66E(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class AWindManager_C* GetDefaultObj();

	struct FVector CeilVector(float Scale, class USceneCaptureComponent2D* Scene_Capture, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, const struct FVector& CallFunc_GetCameraLocation_ReturnValue, const struct FVector& CallFunc_Divide_VectorFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue2, const struct FVector& CallFunc_MakeVector_ReturnValue2, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, const struct FVector& CallFunc_Divide_VectorVector_ReturnValue, const struct FVector& CallFunc_Subtract_VectorFloat_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, int32 CallFunc_FCeil_ReturnValue, int32 CallFunc_FCeil_ReturnValue2, float CallFunc_Conv_IntToFloat_ReturnValue3, float CallFunc_Conv_IntToFloat_ReturnValue4, int32 CallFunc_FCeil_ReturnValue3, float CallFunc_Conv_IntToFloat_ReturnValue5, const struct FVector& CallFunc_MakeVector_ReturnValue3, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue2);
	void ActivateTestContent(bool Condition);
	void SetRenderOnlyAssets(class UPrimitiveComponent* InComponent, int32 CallFunc_GetRenderingMaterialQualityLevel_ReturnValue, float CallFunc_GetScalarParameterValue_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void InitializeOrthoSettings(float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue);
	void UserConstructionScript();
	void Add_Render_To_Texture_Particle(class UParticleSystem* EmitterTemplate, struct FTransform& InTransform);
	void OnWorldReady();
	void ReceiveTick(float DeltaSeconds);
	void Register_player_for_render_to_texture_purposes(class APlayerPawn_Generic_C* Player_Pawn_Generic);
	void ExecuteUbergraph_WindManager(int32 EntryPoint, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_GetRenderingMaterialQualityLevel_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, float CallFunc_GetScalarParameterValue_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_GetScalarParameterValue_ReturnValue2, bool CallFunc_Greater_FloatFloat_ReturnValue2, int32 CallFunc_GetRenderingMaterialQualityLevel_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue2, float CallFunc_GetScalarParameterValue_ReturnValue3, bool CallFunc_Greater_FloatFloat_ReturnValue3, int32 CallFunc_GetRenderingMaterialQualityLevel_ReturnValue3, bool CallFunc_EqualEqual_IntInt_ReturnValue3, bool CallFunc_BooleanAND_ReturnValue3, float CallFunc_GetScalarParameterValue_ReturnValue4, bool CallFunc_Greater_FloatFloat_ReturnValue4, int32 CallFunc_GetRenderingMaterialQualityLevel_ReturnValue4, bool CallFunc_EqualEqual_IntInt_ReturnValue4, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_BooleanAND_ReturnValue4, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class AFortStaticMeshActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue2, bool CallFunc_Less_IntInt_ReturnValue, TArray<class AFortStaticMeshActor*>& CallFunc_GetAllActorsOfClass_OutActors, class UParticleSystem* K2Node_CustomEvent_EmitterTemplate, const struct FTransform& K2Node_CustomEvent_InTransform, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, const struct FVector& CallFunc_CeilVector_ReturnValue, const struct FVector& CallFunc_CeilVector_ReturnValue2, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue2, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult2, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue2, const struct FVector& CallFunc_CeilVector_ReturnValue3, const struct FVector& CallFunc_Add_VectorVector_ReturnValue3, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult3, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue3, int32 Temp_int_Loop_Counter_Variable2, bool CallFunc_Less_IntInt_ReturnValue2, int32 CallFunc_Add_IntInt_ReturnValue2, float CallFunc_GetScalarParameterValue_ReturnValue5, float K2Node_Event_DeltaSeconds, class APlayerPawn_Generic_C* K2Node_CustomEvent_Player_Pawn_Generic, bool CallFunc_IsDedicatedServer_ReturnValue, int32 Temp_int_Array_Index_Variable2, class AActor* CallFunc_Array_Get_Item2, bool CallFunc_IsDedicatedServer_ReturnValue2);
};

}


