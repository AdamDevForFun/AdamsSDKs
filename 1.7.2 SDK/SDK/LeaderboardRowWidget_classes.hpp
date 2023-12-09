#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x8E8 - 0x8B0)
// WidgetBlueprintGeneratedClass LeaderboardRowWidget.LeaderboardRowWidget_C
class ULeaderboardRowWidget_C : public UFortLeaderboardEntryWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x8B0(0x8)(Transient, DuplicateTransient)
	class UImage*                                Image_4;                                           // 0x8B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              QuestIconOverlay;                                  // 0x8C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                QuestTreeIcon;                                     // 0x8C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Rank;                                              // 0x8D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      StatValue;                                         // 0x8D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      User;                                              // 0x8E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ULeaderboardRowWidget_C* GetDefaultObj();

	void Refresh(class UFortLeaderboardRowProxyInstance* RowObject, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue2);
	void SetDataDirect(class UFortLeaderboardRowProxyInstance* NewData);
	void OnLeaderboardEntryDataSet();
	void ExecuteUbergraph_LeaderboardRowWidget(int32 EntryPoint, class UFortLeaderboardRowProxyInstance* K2Node_DynamicCast_AsFort_Leaderboard_Row_Proxy_Instance, bool K2Node_DynamicCast_bSuccess);
};

}


