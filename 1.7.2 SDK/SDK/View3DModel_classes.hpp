#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x3E8 - 0x3E0)
// WidgetBlueprintGeneratedClass View3DModel.View3DModel_C
class UView3DModel_C : public UCommonActivatablePanel
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3E0(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UView3DModel_C* GetDefaultObj();

	void HandleBack(bool* PassThrough, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue);
	void Construct();
	void OnActivated();
	void ExecuteUbergraph_View3DModel(int32 EntryPoint, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
};

}


