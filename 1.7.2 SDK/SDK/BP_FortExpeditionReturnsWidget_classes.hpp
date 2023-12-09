#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x290 - 0x248)
// WidgetBlueprintGeneratedClass BP_FortExpeditionReturnsWidget.BP_FortExpeditionReturnsWidget_C
class UBP_FortExpeditionReturnsWidget_C : public UFortExpeditionReturnsWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x248(0x8)(Transient, DuplicateTransient)
	class UBP_FortMaterialProgressBar_C*         BP_FortMaterialProgressBar;                        // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      ExpeditionReturns;                                 // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonNumericTextBlock*               ProgressPercentage;                                // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBoxWidget;                                     // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UClass*                                Style;                                             // 0x270(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        MinWidget;                                         // 0x278(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_2D12[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnExpeditionCompleted;                             // 0x280(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UBP_FortExpeditionReturnsWidget_C* GetDefaultObj();

	struct FTimespan Get_Utc_Now_Offset(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, const struct FTimespan& CallFunc_GetPlayerControllerUtcNowMcpOffset_ReturnValue);
	void Get_Expedition_Item_Definition(class UFortExpeditionItem* Item, class UFortExpeditionItemDefinition** ItemDef, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, class UFortExpeditionItemDefinition* K2Node_DynamicCast_AsFort_Expedition_Item_Definition, bool K2Node_DynamicCast_bSuccess);
	void Set_Expedition_Return_Progress(class UFortExpeditionItem* Item, class UFortExpeditionItemDefinition* CallFunc_Get_Expedition_Item_Definition_ItemDef, const struct FTimespan& CallFunc_Get_Utc_Now_Offset_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FTimespan& CallFunc_GetRemainingExpeditionDuration_ReturnValue, float CallFunc_GetTotalSeconds_ReturnValue, int32 CallFunc_FCeil_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue);
	void Set_Expedition_Return_Time(class UFortExpeditionItem* Item, const struct FTimespan& CallFunc_MakeTimespan_ReturnValue, const struct FTimespan& CallFunc_Get_Utc_Now_Offset_ReturnValue, const struct FTimespan& CallFunc_GetRemainingExpeditionDuration_ReturnValue, bool CallFunc_IsExpeditionCompleted_ReturnValue, const struct FTimespan& CallFunc_Add_TimespanTimespan_ReturnValue, class FText CallFunc_GetTimespanAsText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void Refresh_In_Progress_Widgets(class UFortExpeditionItem* Item, bool CallFunc_IsExpeditionInProgress_ReturnValue);
	void SetData(class UFortExpeditionItem* InItem);
	void OnExpeditionInProgressUpdated();
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_BP_FortExpeditionReturnsWidget(int32 EntryPoint, const struct FTimespan& CallFunc_Get_Utc_Now_Offset_ReturnValue, class UFortExpeditionItem* K2Node_Event_InItem, bool K2Node_Event_IsDesignTime, bool CallFunc_IsExpeditionCompleted_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void OnExpeditionCompleted__DelegateSignature(class UFortExpeditionItem* Item);
};

}


