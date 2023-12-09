#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x11 (0x5C9 - 0x5B8)
// WidgetBlueprintGeneratedClass FortHeroSupportPerkWidget-Overview.FortHeroSupportPerkWidget-Overview_C
class UFortHeroSupportPerkWidgetMinusOverview_C : public UFortHeroSupportPerkWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x5B8(0x8)(Transient, DuplicateTransient)
	class UCommonTextBlock*                      TypeText;                                          // 0x5C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EFortBrushSize                    IconSize;                                          // 0x5C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UFortHeroSupportPerkWidgetMinusOverview_C* GetDefaultObj();

	void OnHeroUpdated();
	void OnSupportTypeUpdated();
	void ExecuteUbergraph_FortHeroSupportPerkWidgetMinusOverview(int32 EntryPoint, bool CallFunc_IsPerkEmpty_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
};

}


