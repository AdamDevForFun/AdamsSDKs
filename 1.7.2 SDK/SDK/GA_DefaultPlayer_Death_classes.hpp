#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xBD8 - 0xBD0)
// BlueprintGeneratedClass GA_DefaultPlayer_Death.GA_DefaultPlayer_Death_C
class UGA_DefaultPlayer_Death_C : public UGAB_GenericDeath_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xBD0(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UGA_DefaultPlayer_Death_C* GetDefaultObj();

	void PickDeathMontageSection();
	void ExecuteUbergraph_GA_DefaultPlayer_Death(int32 EntryPoint, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue, class APlayerPawn_Generic_C* K2Node_DynamicCast_AsPlayer_Pawn_Generic, bool K2Node_DynamicCast_bSuccess);
};

}


