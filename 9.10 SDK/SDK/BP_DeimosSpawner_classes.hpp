#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0xCE0 - 0xC80)
// BlueprintGeneratedClass BP_DeimosSpawner.BP_DeimosSpawner_C
class ABP_DeimosSpawner_C : public ABuildingProp_DeimosSpawner
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xC80(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  SpawnAreaRadiusMesh;                               // 0xC88(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UToyOptionsComponent_C*                ToyOptionsComponent;                               // 0xC90(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFXStaticMeshComponent_C*              CosmeticBase;                                      // 0xC98(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       SpawnPoint;                                        // 0xCA0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                        AINumberPresetIndex;                               // 0xCA8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        AITypePresetIndex;                                 // 0xCAC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        SpawnFreqPresetIndex;                              // 0xCB0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ActivationRangePresetIndex;                        // 0xCB4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        SpawnLimitPresetIndex;                             // 0xCB8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        DespawnRangePresetIndex;                           // 0xCBC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        DespawnTypePresetIndex;                            // 0xCC0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bDamageOnSpawn;                                    // 0xCC4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bDamageBuildings;                                  // 0xCC5(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bInvincible;                                       // 0xCC6(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bIsVisible;                                        // 0xCC7(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bVFXVisible;                                       // 0xCC8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6563[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SpawnRadiusPresetIndex;                            // 0xCCC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        SpawnAtVisiblePreset;                              // 0xCD0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        SpawnWithinRadiusPreset;                           // 0xCD4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              SpawnAreaMID;                                      // 0xCD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_DeimosSpawner_C* GetDefaultObj();

	class UMaterialInterface* GetOverrideMeshMaterial(class UStaticMeshComponent* MeshComp, int32 MatIdx, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void UpdateSpawnLocationVisuals(bool CallFunc_IsDedicatedServer_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue);
	void ChooseEQSRift(bool bUseArea, bool bUseVisibility, int32 CalculatedIndex, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue_1, TSoftObjectPtr<class UEnvQuery> CallFunc_Array_Get_Item);
	void SetupConfigurables(float CallFunc_Multiply_IntFloat_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, TSoftClassPtr<class UFortDifficultyOptionEncounter_SpawnGroupProgression> CallFunc_Array_Get_Item, TSoftClassPtr<class UFortDifficultyOptionEncounter_PawnNumberCap> CallFunc_Array_Get_Item_1, TSoftClassPtr<class UFortDifficultyOptionEncounter_SpawnLimitPawns> CallFunc_Array_Get_Item_2, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, TSoftClassPtr<class UFortDifficultyOptionEncounter_SpawnTiming> CallFunc_Array_Get_Item_3);
	bool BP_ShouldTrigger(TArray<class AActor*>& TouchingActors, const TArray<class AActor*>& Touching, bool bTouchingIsAlreadyLaunched);
	void UserConstructionScript(bool CallFunc_IsDedicatedServer_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
	void ReceiveBeginPlay();
	void MinigameStarted();
	void MinigameEnded();
	void OnSpawnedRift(class ABuildingRift* SpawnedRift);
	void BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_0_AnyPropertyChangedDelegate__DelegateSignature();
	void BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_1_AnyPropertyChangedDelegate__DelegateSignature();
	void ExecuteUbergraph_BP_DeimosSpawner(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasStarted_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class ABuildingRift* K2Node_Event_SpawnedRift, bool CallFunc_IsDedicatedServer_ReturnValue, class ABP_CreativeDeimosRift_C* K2Node_DynamicCast_AsBP_Creative_Deimos_Rift, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue_1);
};

}


