#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x4F8 - 0x4E8)
// BlueprintGeneratedClass Announce_LowDurability.Announce_LowDurability_C
class AAnnounce_LowDurability_C : public AFortClientAnnouncement_Basic
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4E8(0x8)(Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x4F0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AAnnounce_LowDurability_C* GetDefaultObj();

	void UserConstructionScript();
	void OnClientAnnouncementStart();
	void ExecuteUbergraph_Announce_LowDurability(int32 EntryPoint);
};

}


