#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x8F8 - 0x8B0)
// WidgetBlueprintGeneratedClass BP_BannerEditorTile.BP_BannerEditorTile_C
class UBP_BannerEditorTile_C : public UFortPlayerProfileBannerEditorTile
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x8B0(0x8)(Transient, DuplicateTransient)
	class UImage*                                ColorImage;                                        // 0x8B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 CommonWidgetSwitcher_0;                            // 0x8C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                IconImage;                                         // 0x8C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonLoadGuard*                      IconLoadGuard;                                     // 0x8D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNormalBangWrapper_C*                  NormalBangWrapper;                                 // 0x8D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              ColorMID;                                          // 0x8E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UMulticastDelegateProperty_                  BannerTileBangUpdated;                             // 0x8E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UBP_BannerEditorTile_C* GetDefaultObj();

	void Mark_Item_as_Seen(bool bAlreadySeen, class UObject* CallFunc_GetData_ReturnValue, class UFortAccountItem* K2Node_DynamicCast_AsFort_Account_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasBeenSeenLocally_ReturnValue);
	void Update_Bang_State(class UObject* CallFunc_GetData_ReturnValue, class UFortAccountItem* K2Node_DynamicCast_AsFort_Account_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasBeenSeenLocally_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void SetData(class UObject* InData, class UCommonListView* OwningList);
	void Construct();
	void HandleBannerIconLoadGuardFinished(class UObject* Object);
	void OnSelected();
	void OnHovered();
	void ExecuteUbergraph_BP_BannerEditorTile(int32 EntryPoint, class UObject* CallFunc_GetData_ReturnValue, class UFortHomebaseBannerColorItem* K2Node_DynamicCast_AsFort_Homebase_Banner_Color_Item, bool K2Node_DynamicCast_bSuccess, class UFortHomebaseBannerIconItem* K2Node_DynamicCast_AsFort_Homebase_Banner_Icon_Item, bool K2Node_DynamicCast_bSuccess2, class UObject* CallFunc_GetData_ReturnValue2, class UFortHomebaseBannerIconItem* K2Node_DynamicCast_AsFort_Homebase_Banner_Icon_Item2, bool K2Node_DynamicCast_bSuccess3, TSoftObjectPtr<class UTexture2D> CallFunc_GetBannerSmallIconAsset_ReturnValue, class UObject* K2Node_CustomEvent_Object, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess4, class UObject* CallFunc_GetData_ReturnValue3, class UFortHomebaseBannerColorItem* K2Node_DynamicCast_AsFort_Homebase_Banner_Color_Item2, bool K2Node_DynamicCast_bSuccess5, const struct FLinearColor& CallFunc_GetBannerColorSecondaryColor_ReturnValue, const struct FLinearColor& CallFunc_GetBannerColorPrimaryColor_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UObject* K2Node_Event_InData, class UCommonListView* K2Node_Event_OwningList);
	void BannerTileBangUpdated__DelegateSignature();
};

}


