#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0x298 - 0x238)
// WidgetBlueprintGeneratedClass MtxOffersList_2.MtxOffersList_2_C
class UMtxOffersList_2_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x238(0x8)(Transient, DuplicateTransient)
	class UMtxOffer_2_C*                         MtxOffer_2;                                        // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              NoOffers_Overlay;                                  // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        OffersList;                                        // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCircularThrobber*                     Throbber;                                          // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	UMulticastDelegateProperty_                  PurchaseComplete;                                  // 0x260(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                        CountUpdateRate;                                   // 0x270(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_27A5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          CountTimer;                                        // 0x278(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	float                                        CurrentMtxAmount_Float;                            // 0x280(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TargetMtxAmount_Float;                             // 0x284(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DisplayedMtxAmount_Float;                          // 0x288(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MtxLerpRate_Float;                                 // 0x28C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       VBucksCountSound;                                  // 0x290(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UMtxOffersList_2_C* GetDefaultObj();

	void PlayMtxOfferAnimation_MouseLeave();
	void PlayMtxOfferAnimation_MouseEnter();
	void Construct();
	void OnPackagesListed(TArray<struct FMtxPackage>& Offers);
	void OnBuyItem(const class FString& OfferId);
	void OnPurchaseComplete(bool bSuccess);
	void CustomEvent_0();
	void CustomEvent_0_Copy();
	void ExecuteUbergraph_MtxOffersList_2(int32 EntryPoint, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UMtxOffer_2_C* CallFunc_Create_ReturnValue, TArray<struct FMtxPackage>& K2Node_CustomEvent_Offers, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue2, bool CallFunc_Greater_IntInt_ReturnValue, const class FString& K2Node_CustomEvent_OfferId, bool K2Node_CustomEvent_bSuccess, class UPanelSlot* CallFunc_AddChild_ReturnValue, int32 Temp_int_Array_Index_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, bool CallFunc_EqualEqual_IntInt_ReturnValue, const struct FMtxPackage& CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_StrStr_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue, class UFortStoreContext* CallFunc_GetContext_ReturnValue2, class UFortStoreContext* CallFunc_GetContext_ReturnValue3, class UFortMcpContext* CallFunc_GetContext_ReturnValue4, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class UUserWidget* CallFunc_GetCachedWidget_ReturnValue, class UMtxStoreRoot_C* K2Node_DynamicCast_AsMtx_Store_Root, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue5);
	void PurchaseComplete__DelegateSignature(bool bSuccess);
};

}


