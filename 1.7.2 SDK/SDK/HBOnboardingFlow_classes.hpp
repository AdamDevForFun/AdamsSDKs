#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x80 (0x408 - 0x388)
// BlueprintGeneratedClass HBOnboardingFlow.HBOnboardingFlow_C
class AHBOnboardingFlow_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x388(0x8)(Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x390(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFortQuestManager*                     QuestManager;                                      // 0x398(0x8)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortQuestItemDefinition*              OnboardingQuest;                                   // 0x3A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortQuestItemDefinition*              OnboardingAfterOutpostQuest;                       // 0x3A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   CompleteZoneObjective;                             // 0x3B0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   NameHomebaseObjective;                             // 0x3C0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class UFortQuestItem*                        OnboardingQuestItem;                               // 0x3D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                               NotificationPadding;                               // 0x3D8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   PlaySatelliteCineObjective;                        // 0x3E8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class UFortAccountItemDefinition*            ShowNewsToken;                                     // 0x3F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ClientQuestLoginRetryCount;                        // 0x400(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ClientQuestLoginNumRetries;                        // 0x404(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AHBOnboardingFlow_C* GetDefaultObj();

	void Handle_Client_Quest_Login_Failed(int32 NewLocalVar_0, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
	void ShowBannerSelect(class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UUserWidget* CallFunc_GetCachedWidget_ReturnValue, class UBannerSelectionWidget_C* K2Node_DynamicCast_AsBanner_Selection_Widget, bool K2Node_DynamicCast_bSuccess);
	void HandleMcpFailure();
	void UpdateVariableCache(bool* Success, class UFortQuestItem* CallFunc_GetQuestWithDefinition_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void UserConstructionScript();
	void OnCanceled_C2C889344301B8DBF8F046A2A175D133();
	void OnAllClientsReady_C2C889344301B8DBF8F046A2A175D133();
	void OnCanceled_856A325D44ECC73B857CE5B35313D7CD();
	void OnAllClientsReady_856A325D44ECC73B857CE5B35313D7CD();
	void OnFailure_0A5ABC9C483947108FD9FB9980E7C62F();
	void OnIgnored_0A5ABC9C483947108FD9FB9980E7C62F();
	void OnSuccess_0A5ABC9C483947108FD9FB9980E7C62F();
	void OnFailure_F17CF9054AFDDDAF314AC4911BC9818F();
	void OnIgnored_F17CF9054AFDDDAF314AC4911BC9818F();
	void OnSuccess_F17CF9054AFDDDAF314AC4911BC9818F();
	void OnStateEntered_CC1C02F844ADF1F9F5546C8115CF00F0();
	void OnStateEntered_6973C4804831A19E4BDA22AFFEE0F251();
	void OnStateEntered_FEE56B7E40F9EBA0E7D44DBF3391C2D6();
	void OnStateEntered_99CD286F4BDD72A81163058464B73990();
	void OnFailure_74930F274B5470B17CF720953FE7E260();
	void OnSuccess_74930F274B5470B17CF720953FE7E260();
	void OnStateEntered_D3C1532F46B8ACB52198EBB597FE9EF0();
	void OnStateEntered_7FBC276641DD576B7417ED97A4734318();
	void OnStateEntered_B1212BA945BD8297BCCDC69BA3015CC2();
	void StartPlaySatelliteCine();
	void StartNameHomebase();
	void HandleClientEvent_HomebasePersonalized(class UObject* EventSource, class UObject* EventFocus, struct FFortClientEvent& ClientEvent);
	void StartOnboardingZone();
	void StartFlow();
	void RejoinCheckCompleted(enum class ERejoinStatus RejoinStatus);
	void HandleCheckExistingSession();
	void HandleCheckOnboardingZoneComplete();
	void HandleSwitchToHomeBase();
	void HandlePlaySatelliteCine();
	void HandleNameHomebase();
	void Handle_Client_Quest_Login_Failed_Retry();
	void Handle_Client_Quest_Login_Retries_Exhausted();
	void HandleClientEvent_SubGameSelected(class UObject* EventSource, class UObject* EventFocus, struct FFortClientEvent& ClientEvent);
	void HandleSubGameSelection();
	void HandleClientEvent_OnRejoinGameAbandoned(class UObject* EventSource, class UObject* EventFocus, struct FFortClientEvent& ClientEvent);
	void ExecuteUbergraph_HBOnboardingFlow(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortAsyncAction_SetUIState* CallFunc_SetUIState_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, bool CallFunc_IsValid_ReturnValue, class UFortAsyncAction_SetUIState* CallFunc_SetUIState_ReturnValue2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, bool CallFunc_IsValid_ReturnValue2, class UFortAsyncAction_SetUIState* CallFunc_SetUIState_ReturnValue3, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue, bool CallFunc_NeedToCheckRejoinStatus_ReturnValue, bool CallFunc_IsValid_ReturnValue3, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue2, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue3, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue4, bool CallFunc_IsJoinableGameAvailable_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue5, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6, class UFortAsyncAction_SetUIState* CallFunc_SetUIState_ReturnValue4, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue6, bool CallFunc_IsValid_ReturnValue4, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue7, bool CallFunc_AutoSelectSubGame_ReturnValue, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate7, class UFortAsyncAction_SetUIState* CallFunc_SetUIState_ReturnValue5, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate8, bool CallFunc_IsValid_ReturnValue5, class UFortAsyncAction_SetUIState* CallFunc_SetUIState_ReturnValue6, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue8, bool CallFunc_IsValid_ReturnValue6, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue9, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue10, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue11, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue12, enum class ESubGame CallFunc_GetSubGame_ReturnValue2, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue13, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate9, TArray<class AFortPlayerController*>& K2Node_MakeArray_Array, const struct FTransform& CallFunc_MakeTransform_ReturnValue, bool Temp_bool_IsClosed_Variable, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AFortClientAnnouncement* CallFunc_FinishSpawningActor_ReturnValue, class UFortAsyncAction_WaitForClientAnnouncement* CallFunc_WaitForClientAnnouncement_ReturnValue, bool CallFunc_IsValid_ReturnValue7, bool Temp_bool_Has_Been_Initd_Variable, class UFortMcpContext* CallFunc_GetContext_ReturnValue14, const struct FFortHomeBaseInfo& CallFunc_GetHomeBaseInfo_Result, class UFortAsyncAction_SetUIState* CallFunc_SetUIState_ReturnValue7, bool CallFunc_Not_PreBool_ReturnValue2, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_IsValid_ReturnValue8, bool CallFunc_BooleanOR_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue2, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue2, bool CallFunc_IsValidClass_ReturnValue, class AFortClientAnnouncement* CallFunc_FinishSpawningActor_ReturnValue2, class UFortAsyncAction_WaitForClientAnnouncement* CallFunc_WaitForClientAnnouncement_ReturnValue2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate10, bool CallFunc_IsValid_ReturnValue9, TArray<class AFortPlayerController*>& K2Node_MakeArray_Array2, class UFortAsyncAction_SendQuestStatEvent* CallFunc_SendClientStatEvent_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate11, bool CallFunc_IsValid_ReturnValue10, class UObject* K2Node_HandleClientEvent_EventSource3, class UObject* K2Node_HandleClientEvent_EventFocus3, const struct FFortClientEvent& K2Node_HandleClientEvent_ClientEvent3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12, class UFortAsyncAction_SendQuestStatEvent* CallFunc_SendClientStatEvent_ReturnValue2, bool CallFunc_IsValid_ReturnValue11, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate13, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, enum class EFortUIState CallFunc__BPGetCurrentUIState_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate14, bool CallFunc_HasCompletedOnboardingObjective_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue3, bool CallFunc_IsValid_ReturnValue12, bool CallFunc_HasCompletedOnboardingObjective_ReturnValue2, bool CallFunc_Not_PreBool_ReturnValue4, bool CallFunc_HasCompletedOnboardingObjective_ReturnValue3, bool CallFunc_Not_PreBool_ReturnValue5, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate15, enum class ERejoinStatus K2Node_CustomEvent_RejoinStatus, class UFortAsyncAction_EnsureClientQuestLogin* CallFunc_SendEnsureClientQuestLogin_ReturnValue, bool CallFunc_IsValid_ReturnValue13, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate16, bool CallFunc_HasCompletedQuest_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate17, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate18, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue2, enum class EFortUIState CallFunc__BPGetCurrentUIState_ReturnValue2, bool CallFunc_EqualEqual_ByteByte_ReturnValue3, class UObject* K2Node_HandleClientEvent_EventSource2, class UObject* K2Node_HandleClientEvent_EventFocus2, const struct FFortClientEvent& K2Node_HandleClientEvent_ClientEvent2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate19, bool CallFunc_UpdateVariableCache_Success, class UObject* K2Node_HandleClientEvent_EventSource, class UObject* K2Node_HandleClientEvent_EventFocus, const struct FFortClientEvent& K2Node_HandleClientEvent_ClientEvent, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate20, bool CallFunc_HasCompletedOnboardingObjective_ReturnValue4, bool CallFunc_Not_PreBool_ReturnValue6, bool CallFunc_BooleanAND_ReturnValue);
};

}


