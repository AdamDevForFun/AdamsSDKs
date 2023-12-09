#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x3A8 - 0x3A0)
// BlueprintGeneratedClass Frontend_Lobby.Frontend_Lobby_C
class AFrontend_Lobby_C : public AFortLevelScriptActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3A0(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class AFrontend_Lobby_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_Frontend_Lobby(int32 EntryPoint);
};

}


