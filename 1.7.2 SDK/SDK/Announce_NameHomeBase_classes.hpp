#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x5D0 - 0x5C8)
// BlueprintGeneratedClass Announce_NameHomeBase.Announce_NameHomeBase_C
class AAnnounce_NameHomeBase_C : public AAnnounce_TutorialConversation_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x5C8(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class AAnnounce_NameHomeBase_C* GetDefaultObj();

	void UserConstructionScript();
	void InitAnnouncement();
	void HandleSentenceStart_UI(int32 SentenceIdx);
	void HandleSentenceStop_UI(int32 SentenceIdx);
	void ExecuteUbergraph_Announce_NameHomeBase(int32 EntryPoint, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, int32 K2Node_Event_SentenceIdx2, bool K2Node_SwitchInteger_CmpSuccess, int32 K2Node_Event_SentenceIdx, bool K2Node_SwitchInteger2_CmpSuccess);
};

}


