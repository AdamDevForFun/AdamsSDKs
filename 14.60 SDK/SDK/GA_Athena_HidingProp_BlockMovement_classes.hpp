#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xAB0 - 0xAA8)
// BlueprintGeneratedClass GA_Athena_HidingProp_BlockMovement.GA_Athena_HidingProp_BlockMovement_C
class UGA_Athena_HidingProp_BlockMovement_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xAA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UGA_Athena_HidingProp_BlockMovement_C* GetDefaultObj();

	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_Athena_HidingProp_BlockMovement(int32 EntryPoint);
};

}


