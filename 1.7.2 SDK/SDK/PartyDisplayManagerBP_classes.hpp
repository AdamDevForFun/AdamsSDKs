#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB9 (0x4E9 - 0x430)
// BlueprintGeneratedClass PartyDisplayManagerBP.PartyDisplayManagerBP_C
class APartyDisplayManagerBP_C : public APartyDisplayManager
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x430(0x8)(Transient, DuplicateTransient)
	class USkeletalMeshComponent*                SkeletalMesh;                                      // 0x438(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  StaticMesh;                                        // 0x440(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  ScalePivot;                                        // 0x448(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  PivotHolder;                                       // 0x450(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              CelebratoryFX;                                     // 0x458(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x460(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        ScaleAnimEvolve_Scaling_6D0D09564D54A0DEA88CCC96FA6653CC; // 0x468(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                ScaleAnimEvolve__Direction_6D0D09564D54A0DEA88CCC96FA6653CC; // 0x46C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3BF9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    ScaleAnimEvolve;                                   // 0x470(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ScaleAnimLevel_Scaling_CC68128E49202D0C982B7A945E41AF43; // 0x478(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                ScaleAnimLevel__Direction_CC68128E49202D0C982B7A945E41AF43; // 0x47C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3BFA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    ScaleAnimLevel;                                    // 0x480(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          TimerHandle;                                       // 0x488(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	float                                        Rotation;                                          // 0x490(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3BFB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortItem*                             ItemToRepresent;                                   // 0x498(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         PreviewRotation;                                   // 0x4A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3BFC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCurveFloat*                           RotationAnimation;                                 // 0x4A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       LevelUpFX;                                         // 0x4B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       EvolveUpFX;                                        // 0x4B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               FXTargetLocation;                                  // 0x4C0(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsCharacter;                                       // 0x4CC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsEvolve;                                          // 0x4CD(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3BFD[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystem*                       CharLevelUpFX;                                     // 0x4D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       CharEvolveUpFX;                                    // 0x4D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              UIoverrideMID;                                     // 0x4E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HasResetVisuals;                                   // 0x4E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class APartyDisplayManagerBP_C* GetDefaultObj();

	void GetItemDefinitionToShow(class UFortItemDefinition** ItemDefinition, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, class UFortItemDefinition* CallFunc_GetSchematicCraftingResultBP_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue2, bool Temp_bool_Variable, class UFortItemDefinition* K2Node_Select_Default);
	void SetUIOverrideVisuals(class UTexture2D* Large_Texture, class UFortItemDefinition* Item, enum class EFortRarity Rarity, const struct FFortRarityItemData& CallFunc_BPGetRarityData_ReturnValue, const class FString& CallFunc_GetPersistentName_ReturnValue, int32 CallFunc_FindSubstring_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool CallFunc_Conv_IntToBool_ReturnValue, int32 CallFunc_FindSubstring_ReturnValue2, int32 CallFunc_FindSubstring_ReturnValue3, bool CallFunc_Conv_IntToBool_ReturnValue2, bool CallFunc_Conv_IntToBool_ReturnValue3, int32 CallFunc_FindSubstring_ReturnValue4, bool CallFunc_Conv_IntToBool_ReturnValue4);
	struct FTransform GetWeaponPlacementTransform(const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue2, const struct FTransform& CallFunc_ComposeTransforms_ReturnValue);
	void UpdatePreviewMeshTransforms(const struct FTransform& CallFunc_GetPreviewMeshWorldTransform_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Percent_FloatFloat_ReturnValue);
	struct FTransform GetItemPreviewOffset(class UFortItemDefinition* ItemDefinition, bool Temp_bool_Variable, const struct FTransform& CallFunc_GetPreviewMeshOffset_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, bool CallFunc_EqualEqual_RotatorRotator_ReturnValue, const struct FTransform& K2Node_Select_Default, const struct FVector& CallFunc_BreakTransform_Location2, const struct FRotator& CallFunc_BreakTransform_Rotation2, const struct FVector& CallFunc_BreakTransform_Scale2, const struct FTransform& CallFunc_MakeTransform_ReturnValue2, const struct FTransform& CallFunc_MakeTransform_ReturnValue3, const struct FTransform& CallFunc_ComposeTransforms_ReturnValue);
	struct FTransform GetPreviewMeshWorldTransform(float Temp_float_Variable, bool Temp_bool_Variable, class UFortItemDefinition* CallFunc_GetItemDefinitionToShow_ItemDefinition, bool CallFunc_IsValid_ReturnValue, const struct FTransform& CallFunc_GetItemPreviewOffset_ReturnValue, const struct FTransform& CallFunc_GetWeaponPlacementTransform_ReturnValue, float K2Node_Select_Default, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FTransform& CallFunc_ComposeTransforms_ReturnValue, const struct FTransform& CallFunc_ComposeTransforms_ReturnValue2);
	void SetupStaticMeshVisuals(class UStaticMesh* NewMesh, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult, bool CallFunc_SetStaticMesh_ReturnValue);
	void SetupSkeletalMeshVisuals(class USkeletalMesh* NewMesh, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult);
	void ResetVisuals(bool CallFunc_SetStaticMesh_ReturnValue);
	void UserConstructionScript();
	void ScaleAnimLevel__FinishedFunc();
	void ScaleAnimLevel__UpdateFunc();
	void ScaleAnimEvolve__FinishedFunc();
	void ScaleAnimEvolve__UpdateFunc();
	void ShowLoading();
	void HideLoading();
	void ShowItem(class UFortItem* ItemToView);
	void PlayLevelUpEffect();
	void PlayEvolutionEffect();
	void CelebrateWithFX();
	void PerformScaleMeshFX();
	void HandleLoadingAssetsForItemCompleted(class UFortItemDefinition* ItemWhoseAssetsWereLoaded, TArray<class UObject*>& LoadedAssets);
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_PartyDisplayManagerBP(int32 EntryPoint, float K2Node_Event_DeltaSeconds, const struct FTransform& CallFunc_GetWeaponPlacementTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult2, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult, class UFortItemDefinition* K2Node_Event_ItemWhoseAssetsWereLoaded, TArray<class UObject*>& K2Node_Event_LoadedAssets, class UFortItem* K2Node_Event_ItemToView, class UFortItemDefinition* CallFunc_GetItemDefinitionToShow_ItemDefinition, class UFortItemDefinition* CallFunc_GetItemDefinitionToShow_ItemDefinition2, bool CallFunc_IsValid_ReturnValue, TSoftObjectPtr<class USkeletalMesh> CallFunc_GetPreviewSkeletalMeshAsset_Asset, bool CallFunc_GetPreviewSkeletalMeshAsset_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, TArray<TSoftObjectPtr<class UObject>>& K2Node_MakeArray_Array, TSoftObjectPtr<class UStaticMesh> CallFunc_GetPreviewStaticMeshAsset_Asset, bool CallFunc_GetPreviewStaticMeshAsset_ReturnValue, TArray<TSoftObjectPtr<class UObject>>& K2Node_MakeArray_Array2, bool CallFunc_IsDedicatedServer_ReturnValue, class UFortItemDefinition* CallFunc_GetItemDefinitionToShow_ItemDefinition3, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue2, class UFortItemDefinition* CallFunc_GetItemDefinitionToShow_ItemDefinition4, bool CallFunc_IsValid_ReturnValue2, TSoftObjectPtr<class USkeletalMesh> CallFunc_GetPreviewSkeletalMeshAsset_Asset2, bool CallFunc_GetPreviewSkeletalMeshAsset_ReturnValue2, TArray<TSoftObjectPtr<class UObject>>& K2Node_MakeArray_Array3, TSoftObjectPtr<class UStaticMesh> CallFunc_GetPreviewStaticMeshAsset_Asset2, bool CallFunc_GetPreviewStaticMeshAsset_ReturnValue2, class UFortItemDefinition* CallFunc_GetItemDefinitionToShow_ItemDefinition5, TSoftObjectPtr<class UTexture2D> CallFunc_GetLargePreviewImage_ReturnValue, TSoftObjectPtr<class UStaticMesh> CallFunc_GetPreviewStaticMeshAsset_Asset3, bool CallFunc_GetPreviewStaticMeshAsset_ReturnValue3, TArray<TSoftObjectPtr<class UObject>>& K2Node_MakeArray_Array4, class UObject* CallFunc_Conv_AssetToObject_ReturnValue, TSoftObjectPtr<class USkeletalMesh> CallFunc_GetPreviewSkeletalMeshAsset_Asset3, bool CallFunc_GetPreviewSkeletalMeshAsset_ReturnValue3, class UStaticMesh* K2Node_DynamicCast_AsStatic_Mesh, bool K2Node_DynamicCast_bSuccess, class UObject* CallFunc_Conv_AssetToObject_ReturnValue2, class USkeletalMesh* K2Node_DynamicCast_AsSkeletal_Mesh, bool K2Node_DynamicCast_bSuccess2, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue, class UFortItemDefinition* CallFunc_GetItemDefinitionToShow_ItemDefinition6, TSoftObjectPtr<class UStaticMesh> CallFunc_GetPreviewStaticMeshAsset_Asset4, bool CallFunc_GetPreviewStaticMeshAsset_ReturnValue4, enum class EFortRarity CallFunc_GetRarity_ReturnValue, class UObject* CallFunc_Conv_AssetToObject_ReturnValue3, TSoftObjectPtr<class UTexture2D> CallFunc_GetLargePreviewImage_ReturnValue2, class UStaticMesh* K2Node_DynamicCast_AsStatic_Mesh2, bool K2Node_DynamicCast_bSuccess3, class UObject* CallFunc_Conv_AssetToObject_ReturnValue4, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess4, TSoftObjectPtr<class USkeletalMesh> CallFunc_GetPreviewSkeletalMeshAsset_Asset4, bool CallFunc_GetPreviewSkeletalMeshAsset_ReturnValue4, class UFortItemDefinition* CallFunc_GetSchematicCraftingResultBP_ReturnValue, class UObject* CallFunc_Conv_AssetToObject_ReturnValue5, bool CallFunc_IsValid_ReturnValue3, class USkeletalMesh* K2Node_DynamicCast_AsSkeletal_Mesh2, bool K2Node_DynamicCast_bSuccess5, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue2, class UFortItemDefinition* CallFunc_GetSchematicCraftingResultBP_ReturnValue2, bool CallFunc_IsValid_ReturnValue4, class UFortItemDefinition* CallFunc_GetItemDefinitionToShow_ItemDefinition7);
};

}


