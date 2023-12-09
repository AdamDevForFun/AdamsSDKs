#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x250 - 0x240)
// WidgetBlueprintGeneratedClass Announcement_QuestUpdate.Announcement_QuestUpdate_C
class UAnnouncement_QuestUpdate_C : public UFortAnnouncementWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x240(0x8)(Transient, DuplicateTransient)
	class UQuestUpdateEntry_C*                   QuestUpdateEntry;                                  // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAnnouncement_QuestUpdate_C* GetDefaultObj();

	void UpdateWidgetData(class AFortClientAnnouncement* Announcement);
	void AllUpdatesFinished(class UQuestUpdateEntry_C* UpdateWidget);
	void ExecuteUbergraph_Announcement_QuestUpdate(int32 EntryPoint, class UQuestUpdateEntry_C* K2Node_CustomEvent_UpdateWidget, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AFortClientAnnouncement* K2Node_Event_Announcement, class AAnnounce_QuestUpdate_C* K2Node_DynamicCast_AsAnnounce_Quest_Update, bool K2Node_DynamicCast_bSuccess, bool CallFunc_OnReceiveQuestUpdate_Success);
};

}


