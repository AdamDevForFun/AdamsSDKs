#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x2F8 - 0x2E0)
// WidgetBlueprintGeneratedClass MissionTrackerEntry.MissionTrackerEntry_C
class UMissionTrackerEntry_C : public UFortMissionTrackerEntry
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2E0(0x8)(Transient, DuplicateTransient)
	UMulticastDelegateProperty_                  WidgetVisibilityChanged;                           // 0x2E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UMissionTrackerEntry_C* GetDefaultObj();

	void Construct();
	void OnMissionSet();
	void ExecuteUbergraph_MissionTrackerEntry(int32 EntryPoint, const struct FLinearColor& K2Node_MakeStruct_LinearColor);
	void WidgetVisibilityChanged__DelegateSignature();
};

}


