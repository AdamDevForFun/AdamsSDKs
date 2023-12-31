#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x41 (0x281 - 0x240)
// WidgetBlueprintGeneratedClass Results_NameplateWidget.Results_NameplateWidget_C
class UResults_NameplateWidget_C : public UFortUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x240(0x8)(Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anim_Outro;                                        // 0x248(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_Intro;                                        // 0x250(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextZoneCompletion;                                // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                        PostMinusIntro_Delay;                              // 0x260(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_38E0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  IntroComplete;                                     // 0x268(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class USoundBase*                            SoundCue_InitialMusic;                             // 0x278(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Skipped;                                           // 0x280(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UResults_NameplateWidget_C* GetDefaultObj();

	void Outro(bool CallFunc_IsAnimationPlaying_ReturnValue);
	void Intro();
	void Initialize(enum class EFortCompletionResult Result, enum class EFortCompletionResult Temp_byte_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable2, class FText Temp_text_Variable3, class FText Temp_text_Variable4, class FText K2Node_Select_Default);
	void BndEvt__Anim_Intro_K2Node_ComponentBoundEvent_97_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature();
	void BndEvt__Anim_Outro_K2Node_ComponentBoundEvent_121_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature();
	void Construct();
	void ExecuteUbergraph_Results_NameplateWidget(int32 EntryPoint, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_GetEndTime_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue);
	void IntroComplete__DelegateSignature();
};

}


