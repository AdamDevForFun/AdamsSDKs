#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x27B8 - 0x27A8)
// BlueprintGeneratedClass BP_SpectatorPC.BP_SpectatorPC_C
class ABP_SpectatorPC_C : public AFortPlayerControllerSpectating
{
public:
	uint8                                        Pad_412E[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x27B0(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_SpectatorPC_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_SpectatorPC(int32 EntryPoint, bool CallFunc_IsLocalPlayerController_ReturnValue, const struct FTransform& Temp_struct_Variable, class UBP_AmbientAudioController_C* CallFunc_AddComponent_ReturnValue);
};

}


