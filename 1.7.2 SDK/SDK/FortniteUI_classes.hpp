#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x138 (0x160 - 0x28)
// Class FortniteUI.AthenaHUDContext
class UAthenaHUDContext : public UBlueprintContextBase
{
public:
	uint8                                        Pad_1EBE[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnLocalPlayerWon;                                  // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnLocalTeamWon;                                    // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnLocalPlayerKilledPlayer;                         // 0x50(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnLocalPlayerDBNOStateChanged;                     // 0x60(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnUIGameplayCue;                                   // 0x70(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnViewTargetHealthChanged;                         // 0x80(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnViewTargetShieldChanged;                         // 0x90(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnViewTargetDBNOChanged;                           // 0xA0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnTeamMemberAdded;                                 // 0xB0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnTeamMemberRemoved;                               // 0xC0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnTeamHitPointFractionsChanged;                    // 0xD0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnTeamMemberDBNOChanged;                           // 0xE0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnTeamMemberRevivingChanged;                       // 0xF0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnTeamMemberDeadChanged;                           // 0x100(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnTeamMemberPlayerNamesChanged;                    // 0x110(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnTeamMemberTalkingChanged;                        // 0x120(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnTeamMemberMutedChanged;                          // 0x130(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnInventoryItemSelected;                           // 0x140(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                         bPendingAttachToHUD;                               // 0x150(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1EBF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TWeakObjectPtr<class UFortItem>              LastSelectedInventoryItem;                         // 0x154(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1EC0[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAthenaHUDContext* GetDefaultObj();

	void SetSelectedInventoryItem(class UFortItem* Item);
	void HandleUIGameplayCue(class FName CueName, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters& Parameters);
	void HandleLocalPlayerDBNOStateChanged(bool bIsDBNO);
	class UFortItem* GetSelectedInventoryItem();
};

// 0x28 (0x260 - 0x238)
// Class FortniteUI.FortHUDElementWidget
class UFortHUDElementWidget : public UCommonUserWidget
{
public:
	struct FGameplayTagContainer                 HUDElementTag;                                     // 0x238(0x20)(Edit, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1EC2[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortHUDElementWidget* GetDefaultObj();

	void HandleOnHUDElementVisibilityChanged(struct FGameplayTagContainer& HiddenHUDElementTags);
};

// 0x10 (0x128 - 0x118)
// Class FortniteUI.AthenaHUDTeamIndicatorBase
class UAthenaHUDTeamIndicatorBase : public UWidget
{
public:
	uint8                                        Pad_1EC6[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAthenaHUDTeamIndicatorBase* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class FortniteUI.FortTabButtonInterface
class IFortTabButtonInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IFortTabButtonInterface* GetDefaultObj();

	void SetTabLabelInfo(struct FFortTabButtonLabelInfo& TabLabelInfo);
};

// 0x60 (0x360 - 0x300)
// Class FortniteUI.FortTabListWidgetBase
class UFortTabListWidgetBase : public UCommonTabListWidget
{
public:
	TArray<struct FFortTabListRegistrationInfo>  PreregisteredTabInfoArray;                         // 0x300(0x10)(Edit, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TMap<class FName, struct FFortTabButtonLabelInfo> PendingTabLabelInfoMap;                            // 0x310(0x50)(ZeroConstructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortTabListWidgetBase* GetDefaultObj();

	void SetPreviousTabInputActionData(const struct FDataTableRowHandle& PreviousData);
	void SetNextTabInputActionData(const struct FDataTableRowHandle& NextData);
	bool RegisterFortTab(class FName TabNameID, TSubclassOf<class UCommonButton> TabButtonType, struct FFortTabButtonLabelInfo& LabelInfo, class UWidget* ContentWidget);
	void RegisterAllPreregisteredTabInfos();
	bool IsLastTabActive();
	bool IsFirstTabActive();
	bool GetPreregisteredTabInfo(class FName TabNameID, struct FFortTabListRegistrationInfo* OutTabInfo);
};

// 0x70 (0x450 - 0x3E0)
// Class FortniteUI.AthenaInventoryPanelBase
class UAthenaInventoryPanelBase : public UCommonActivatablePanel
{
public:
	enum class EInventoryContentSortType         CurrentSortType;                                   // 0x3E0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1ECC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonLoadGuard*                      TileViewLoadGuard;                                 // 0x3E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortItemTileView*                     TileView;                                          // 0x3F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortItemTileView*                     ResourceTiles;                                     // 0x3F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1ECD[0x50];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAthenaInventoryPanelBase* GetDefaultObj();

	void SetSortType(enum class EInventoryContentSortType SortType);
	void RequestEquip(class UFortItem* Item);
	void OnInventoryItemSelected(class UFortItem* Item);
	void HandleResourceItemDoubleClicked(class UObject* Item);
	void HandleQuickBarChangedBP(enum class EFortQuickBars QuickBarType);
	void HandleItemWidgetCreated(class UUserWidget* ItemWidget);
	void HandleInventoryUpdatedEvent();
	void HandleInventoryItemSelected(class UObject* Item, bool bIsSelected);
	void HandleInventoryItemHovered(class UObject* Item);
	void HandleInventoryItemDoubleClicked(class UObject* Item);
	void HandleInventoryItemClicked(class UObject* Item);
	void HandleDifferentSortTypeSetBP();
	void HandleCursorModeChangedBP(bool bCursorModeEnabled, class FName ActionName, class UUserWidget* CursorModeContentWidget);
	void HandleCursorModeChanged(bool bCursorModeEnabled, class FName ActionName, class UUserWidget* CursorModeContentWidget);
	TArray<enum class EInventoryContentSortType> GetSupportedSortTypesForCurrentInventory();
	void CycleSortType();
	void AdvanceSelection();
};

// 0xF0 (0x4D0 - 0x3E0)
// Class FortniteUI.AthenaLeaderboardScreenBase
class UAthenaLeaderboardScreenBase : public UCommonActivatablePanel
{
public:
	class UFortTabListWidgetBase*                LeaderboardTabList;                                // 0x3E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonRotator*                        MatchRotator;                                      // 0x3E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonRotator*                        LeaderboardTypeRotator;                            // 0x3F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                      ResetTimeText;                                     // 0x3F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                      RefreshTimeText;                                   // 0x400(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDataTable*                            LeaderboardDisplayData;                            // 0x408(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TMap<class FName, class UCommonButton*>      ActiveTabButtons;                                  // 0x410(0x50)(BlueprintVisible, ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	TArray<class UFortLeaderboardRowProxyInstance*> RowProxies;                                        // 0x460(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	TArray<class UFortLeaderboardRowProxyInstance*> RowProxiesFreeList;                                // 0x470(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	class UFortLeaderboardRowProxyInstance*      LocalUserRowProxy;                                 // 0x480(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLeaderboardFilter                    CurrentLeaderboardFilter;                          // 0x488(0x18)(Transient, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1ECF[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAthenaLeaderboardScreenBase* GetDefaultObj();

	void OnUpdateTabButtonText(class UCommonButton* Button, struct FAthenaPlaylistLeaderboardData& PlaylistTabData);
	void OnUpdateListHeader(struct FAthenaPlaylistLeaderboardData& PlaylistTabData);
	void OnUpdateLeaderboardListUI(bool bWasSuccessful, class UFortLeaderboardRowProxyInstance* LocalUserRow, class FText& ErrorStr);
	void OnQueryStarted();
	void OnQueryFinished();
	void OnMatchTypeChanged(int32 MatchTypeIndex);
	void OnFriendsFilterChanged(int32 FriendsFilterIndex);
	void OnActiveLeaderboardTabChanged(int32 ActiveWidgetIndex);
	bool CanShowFriendsOnlyLeaderboard();
};

// 0x50 (0x430 - 0x3E0)
// Class FortniteUI.AthenaLobbyBase
class UAthenaLobbyBase : public UCommonActivatablePanel
{
public:
	uint8                                        Pad_1ED0[0x40];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UOverlay*                              OverlayMain;                                       // 0x420(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1ED1[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAthenaLobbyBase* GetDefaultObj();

	void OnPlayerClicked(int32 PlayerIndex);
	void OnNavigationRight();
	void OnNavigationLeft();
	void OnEndCursorOverPlayer(int32 PlayerIndex);
	void OnBeginCursorOverPlayer(int32 PlayerIndex);
};

// 0x0 (0x3E0 - 0x3E0)
// Class FortniteUI.AthenaLootStoreScreenBase
class UAthenaLootStoreScreenBase : public UCommonActivatablePanel
{
public:

	static class UClass* StaticClass();
	static class UAthenaLootStoreScreenBase* GetDefaultObj();

};

// 0x70 (0x2A0 - 0x230)
// Class FortniteUI.AthenaMatchReadyDesktopPopup
class UAthenaMatchReadyDesktopPopup : public UUserWidget
{
public:
	uint8                                        Pad_1ED2[0x70];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAthenaMatchReadyDesktopPopup* GetDefaultObj();

	void UserDismissedDialog(bool bBringToFront);
};

// 0x90 (0x470 - 0x3E0)
// Class FortniteUI.AthenaStatsScreenBase
class UAthenaStatsScreenBase : public UCommonActivatablePanel
{
public:
	class UCommonTabListWidget*                  StatsTabList;                                      // 0x3E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        CurrentPlaylistId;                                 // 0x3E8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bWasLastQuerySuccessful;                           // 0x3EC(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1ED4[0x83];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAthenaStatsScreenBase* GetDefaultObj();

	void OnTabSelected(class FName TabName);
	void OnQueryStarted();
	void OnQueryFinished(bool bWasSuccessful);
	class FString GetWinsTag();
	class FString GetThirdTierPlaceTag();
	int32 GetStatValue(const class FString& BaseGameplayTag);
	class FString GetStatGameplayTag(const class FString& BaseStatName);
	class FString GetSecondTierPlaceTag();
	class FText GetLastUpdateTime();
	class FText FormatStatValueAsElapsedTime(struct FTimespan& ValueAsTimespan);
};

// 0x50 (0x78 - 0x28)
// Class FortniteUI.FortAbilitySystemContext
class UFortAbilitySystemContext : public UBlueprintContextBase
{
public:
	uint8                                        Pad_1EDE[0x50];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortAbilitySystemContext* GetDefaultObj();

	void RemoveDelegatesFromWidget(class UWidget* Widget);
	void RegisterForAttributeChanged(class UWidget* Widget, class UAbilitySystemComponent* ASC, const struct FGameplayAttribute& Attribute, UDelegateProperty_ Callback);
};

// 0x0 (0x28 - 0x28)
// Class FortniteUI.FortAccountStatsContext
class UFortAccountStatsContext : public UBlueprintContextBase
{
public:

	static class UClass* StaticClass();
	static class UFortAccountStatsContext* GetDefaultObj();

	bool CanShowAccountStats();
};

// 0x28 (0x408 - 0x3E0)
// Class FortniteUI.FortActivatablePanel
class UFortActivatablePanel : public UCommonActivatablePanel
{
public:
	bool                                         bIsPushedOnToContentPanelStack;                    // 0x3E0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsAlreadyOnContentPanelStack;                     // 0x3E1(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EInputPriority                    InputPriority;                                     // 0x3E2(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EDF[0x25];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortActivatablePanel* GetDefaultObj();

	void RestoreScrollWidget();
	void RestoreCenterWidget();
};

// 0x38 (0x440 - 0x408)
// Class FortniteUI.FortAccountLinkingWindow
class UFortAccountLinkingWindow : public UFortActivatablePanel
{
public:
	UMulticastDelegateProperty_                  OnNewPurchaseReceipt;                              // 0x408(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class FString                                FoundersPackStoreCategory;                         // 0x418(0x10)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bPSPlusHasFreeAccess;                              // 0x428(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1EE0[0x17];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortAccountLinkingWindow* GetDefaultObj();

	bool IsPurchaseFree();
};

// 0x28 (0x50 - 0x28)
// Class FortniteUI.FortAsyncAction_CheckHasRedeemForAccess
class UFortAsyncAction_CheckHasRedeemForAccess : public UBlueprintAsyncActionBase
{
public:
	UMulticastDelegateProperty_                  OnShowLinkOrBuyAccessScreen;                       // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnShowHaveEpicAccountScreen;                       // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UObject*                               WorldContextObject;                                // 0x48(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortAsyncAction_CheckHasRedeemForAccess* GetDefaultObj();

	class UFortAsyncAction_CheckHasRedeemForAccess* CheckHasRedeemForAccess(class UObject* InWorldContextObject);
};

// 0x28 (0x50 - 0x28)
// Class FortniteUI.FortAsyncAction_ShowPlatformStoreForPurchase
class UFortAsyncAction_ShowPlatformStoreForPurchase : public UBlueprintAsyncActionBase
{
public:
	UMulticastDelegateProperty_                  OnPurchased;                                       // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnNotPurchased;                                    // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UObject*                               WorldContextObject;                                // 0x48(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortAsyncAction_ShowPlatformStoreForPurchase* GetDefaultObj();

	class UFortAsyncAction_ShowPlatformStoreForPurchase* ShowPlatformStoreForPurchase(class UObject* InWorldContextObject);
};

// 0x28 (0x50 - 0x28)
// Class FortniteUI.FortAsyncAction_ShowPlatformRedeemCode
class UFortAsyncAction_ShowPlatformRedeemCode : public UBlueprintAsyncActionBase
{
public:
	UMulticastDelegateProperty_                  OnCodeRedeemComplete;                              // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnCodeRedeemCanceled;                              // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UObject*                               WorldContextObject;                                // 0x48(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortAsyncAction_ShowPlatformRedeemCode* GetDefaultObj();

	class UFortAsyncAction_ShowPlatformRedeemCode* ShowPlatformRedeemCode(class UObject* InWorldContextObject);
};

// 0x40 (0x68 - 0x28)
// Class FortniteUI.FortAsyncAction_WebCreateEpicAccountAndLink
class UFortAsyncAction_WebCreateEpicAccountAndLink : public UBlueprintAsyncActionBase
{
public:
	UMulticastDelegateProperty_                  OnAccountCreatedAndLinked;                         // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnAccountCreatedButNotLinked;                      // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnAccountNotCreated;                               // 0x48(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UObject*                               WorldContextObject;                                // 0x58(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bAccountLinked;                                    // 0x60(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1EE2[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortAsyncAction_WebCreateEpicAccountAndLink* GetDefaultObj();

	class UFortAsyncAction_WebCreateEpicAccountAndLink* WebCreateEpicAccountAndLink(class UObject* InWorldContextObject);
};

// 0x28 (0x50 - 0x28)
// Class FortniteUI.FortAsyncAction_CreateHeadlessAccount
class UFortAsyncAction_CreateHeadlessAccount : public UBlueprintAsyncActionBase
{
public:
	UMulticastDelegateProperty_                  OnAccountCreated;                                  // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnAccountNotCreated;                               // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UObject*                               WorldContextObject;                                // 0x48(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortAsyncAction_CreateHeadlessAccount* GetDefaultObj();

	class UFortAsyncAction_CreateHeadlessAccount* CreateHeadlessAccount(class UObject* InWorldContextObject);
};

// 0x10 (0x248 - 0x238)
// Class FortniteUI.FortCollectionBookProgressionRewardDetailInspectWidget
class UFortCollectionBookProgressionRewardDetailInspectWidget : public UCommonUserWidget
{
public:
	class UCommonNumericTextBlock*               LevelTextWidget;                                   // 0x238(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortRewardInfoWidget*                 RewardWidget;                                      // 0x240(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortCollectionBookProgressionRewardDetailInspectWidget* GetDefaultObj();

	void SetAssociatedLevel(int32 Level);
};

// 0x68 (0x470 - 0x408)
// Class FortniteUI.FortCollectionBookProgressionRewardsModalWidget
class UFortCollectionBookProgressionRewardsModalWidget : public UFortActivatablePanel
{
public:
	TSoftClassPtr<class UFortCollectionBookProgressionRewardDetailInspectWidget> RewardWidgetClass;                                 // 0x408(0x20)(Edit, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FMargin                               RewardWidgetPadding;                               // 0x428(0x10)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	int32                                        NumRewardsToShow;                                  // 0x438(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1EEA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UVerticalBox*                          RewardBoxWidget;                                   // 0x440(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UVerticalBox*                          MajorRewardBoxWidget;                              // 0x448(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                      XPTextWidget;                                      // 0x450(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonNumericTextBlock*               LevelTextWidget;                                   // 0x458(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButtonGroup*                    ButtonGroup;                                       // 0x460(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1EEB[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortCollectionBookProgressionRewardsModalWidget* GetDefaultObj();

	void OnSelectedButtonChanged(class UCommonButton* SelectedButton, int32 ButtonIndex);
	void OnLevelProgressionSet(int32 CurrentLevel, float NextLvlPct);
	void OnInputMethodChanged(bool bUsingGamepad);
	void InspectItemBP(class UFortItem* Item);
};

// 0x38 (0x440 - 0x408)
// Class FortniteUI.FortCollectionBookWidget
class UFortCollectionBookWidget : public UFortActivatablePanel
{
public:
	class UFortCollectionBookProgressWidget*     ProgressWidget;                                    // 0x408(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonWidgetSwitcher*                 MainWidgetSwitcher;                                // 0x410(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortCollectionBookPrimaryPanel*       PrimaryPanelWidget;                                // 0x418(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortCollectionBookSectionPanel*       SectionPanelWidget;                                // 0x420(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        PrimaryPanelIdx;                                   // 0x428(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        SectionPanelIdx;                                   // 0x42C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1EEC[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortCollectionBookWidget* GetDefaultObj();

	void OnPreviewXPChangeRequest(int32 XPChange);
	void OnCollectionBookSectionCloseRequest();
	void OnCollectionBookSectionClicked(class UFortCollectionBookSection* ClickedSection);
	void OnCollectionBookPageSelected(class UFortCollectionBookPage* SelectedPage);
	void OnCollectionBookPageClicked(class UFortCollectionBookPage* ClickedPage);
};

// 0x18 (0x420 - 0x408)
// Class FortniteUI.FortErrorWindow
class UFortErrorWindow : public UFortActivatablePanel
{
public:
	TSubclassOf<class UCommonUserWidget>         ErrorEntryClass;                                   // 0x408(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UCommonUserWidget*>             ErrorEntriesPool;                                  // 0x410(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortErrorWindow* GetDefaultObj();

	void PutErrorEntries(TArray<class UCommonUserWidget*>& ErrorEntries);
	class UCommonUserWidget* GetErrorEntry();
	void DismissErrors(const TArray<struct FFortErrorInfo>& ErrorInfos);
};

// 0x98 (0x4A0 - 0x408)
// Class FortniteUI.FortGameFeedbackBase
class UFortGameFeedbackBase : public UFortActivatablePanel
{
public:
	class UEditableText*                         SubjectEditable;                                   // 0x408(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMultiLineEditableText*                BodyEditable;                                      // 0x410(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButtonGroup*                    ButtonGroup;                                       // 0x418(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1EEF[0x80];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortGameFeedbackBase* GetDefaultObj();

	void SubmitFeedback();
	void OnSelectionButtonChanged(class UCommonButton* SelectedButton, int32 ButtonIndex);
	void OnInitiateDebugInfoForFeedbackComplete();
	void InitiateDebugInfoForFeedback();
	void CancelFeedback();
	void AddButtonWithFeedbackType(class UCommonButton* Button, enum class EFortUIGameFeedbackType GameFeedbackType);
};

// 0x8 (0x410 - 0x408)
// Class FortniteUI.FortInfoWindow
class UFortInfoWindow : public UFortActivatablePanel
{
public:
	class UCommonListView*                       InfoEntries;                                       // 0x408(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFortInfoWindow* GetDefaultObj();

	class UWidget* GetListWidget(class UObject* Item);
};

// 0x160 (0x188 - 0x28)
// Class FortniteUI.FortMtxOfferData
class UFortMtxOfferData : public UPrimaryDataAsset
{
public:
	struct FSlateBrush                           TileImage;                                         // 0x28(0x90)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FSlateBrush                           DetailsImage;                                      // 0xB8(0x90)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TArray<struct FFortMtxDetailsAttribute>      DetailsAttributes;                                 // 0x148(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FFortMtxGradient                      Gradient;                                          // 0x158(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FLinearColor                          Background;                                        // 0x178(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFortMtxOfferData* GetDefaultObj();

};

// 0xA8 (0x4B0 - 0x408)
// Class FortniteUI.FortMtxOfferDetailsBase
class UFortMtxOfferDetailsBase : public UFortActivatablePanel
{
public:
	class UFortMtxOfferData*                     OfferDisplayAsset;                                 // 0x408(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FMtxPackage                           MtxOffer;                                          // 0x410(0xA0)(Transient, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortMtxOfferDetailsBase* GetDefaultObj();

	void UpdateMtxOffer(class UFortMtxStoreOfferBase* MtxOfferWidget);
	struct FSlateBrush GetTileImage();
	enum class EFortMtxStoreOfferType GetStoreOfferType();
	bool GetSalePrice(class FText* SalePrice);
	class FString GetOfferId();
	class FText GetNormalPrice();
	class FText GetName();
	struct FFortMtxGradient GetGradient();
	struct FSlateBrush GetDetailsImage();
	TArray<struct FFortMtxDetailsAttribute> GetDetailsAttributes();
	class FText GetDescription();
	int32 GetBonusQuantity();
	int32 GetBaseQuantity();
	struct FLinearColor GetBackground();
};

// 0x8 (0x410 - 0x408)
// Class FortniteUI.FortPlayerProfileModalWidget
class UFortPlayerProfileModalWidget : public UFortActivatablePanel
{
public:
	uint8                                        Pad_1EF1[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortPlayerProfileModalWidget* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class FortniteUI.FortFrontendInventoryFilterFunctionLibrary
class UFortFrontendInventoryFilterFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UFortFrontendInventoryFilterFunctionLibrary* GetDefaultObj();

	class FText ToText(enum class EFortFrontendInventoryFilter FrontendInventoryFilter);
};

// 0x330 (0x710 - 0x3E0)
// Class FortniteUI.FortItemManagementScreen
class UFortItemManagementScreen : public UCommonActivatablePanel
{
public:
	uint8                                        Pad_1EF5[0x2A0];                                   // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EFortItemManagementMode           Mode;                                              // 0x680(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortFrontendInventoryFilter      FrontendInventoryFilter;                           // 0x681(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ConsumeItemRequestInProgress;                      // 0x682(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EF6[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortItemManagementInventoryPanel*     InventoryPanel;                                    // 0x688(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortItemManagementModeDetailsPanel*   ModeDetailsPanel;                                  // 0x690(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UFortItem>              ItemToDetail;                                      // 0x698(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1EF7[0x70];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortItemManagementScreen* GetDefaultObj();

	void SetFrontendInventoryFilter(enum class EFortFrontendInventoryFilter FrontendInventoryFilter);
	void SetConsumeItemRequestInProgress(bool InProgress);
	void NotifyPanelDeactivated();
	void NotifyPanelActivated();
	void InspectItem(class UFortItem* Item);
	bool HasItemBeenSeen(class UFortAccountItem* AccountItem);
	void HandleItemToDetailChanged(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged);
	void HandleItemToCompareWithChanged(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged);
	void HandleInspectItemBP(class UFortItem* Item);
	void HandleEquipItemBP(class UFortItem* Item);
	void HandleDifferentItemManagementModeSetBP();
	void HandleCraftItemBP(class UFortSchematicItem* SchematicItem);
	void HandleConsumeItemBP(class UFortConsumableAccountItem* ConsumableItem);
	int32 GetNumItemsToMulch();
	class UFortItem* GetItemToDetail();
	class UFortItem* GetItemToCompareDetailsWith();
	TArray<class UFortItem*> GetItemsToMulchBP();
	void EquipItem(class UFortItem* Item);
	void EnterMulchMode(class UFortItem* ItemToMulch);
	void EnterDetailsMode(class UFortItem* ItemToDetail);
	void EnterComparisonMode(class UFortItem* ItemToCompareDetailsWith);
	void CycleSortType();
	void CraftItem(class UFortSchematicItem* SchematicItem);
	void ConsumeItem(class UFortConsumableAccountItem* ConsumableItem);
	bool CanItemBeMulched(class UFortItem* Item, class FText* OutRestrictionReason);
};

// 0x0 (0x28 - 0x28)
// Class FortniteUI.FortItemViewContextInterface
class IFortItemViewContextInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IFortItemViewContextInterface* GetDefaultObj();

};

// 0xD0 (0xF8 - 0x28)
// Class FortniteUI.FortSquadManagementItemViewContextBase
class UFortSquadManagementItemViewContextBase : public UObject
{
public:
	uint8                                        Pad_1EF8[0xD0];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortSquadManagementItemViewContextBase* GetDefaultObj();

};

// 0x8 (0x100 - 0xF8)
// Class FortniteUI.FortItemViewContext_SquadSlotsView
class UFortItemViewContext_SquadSlotsView : public UFortSquadManagementItemViewContextBase
{
public:
	uint8                                        Pad_1EF9[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortItemViewContext_SquadSlotsView* GetDefaultObj();

};

// 0x10 (0x108 - 0xF8)
// Class FortniteUI.FortItemViewContext_SquadSlotItemPicker
class UFortItemViewContext_SquadSlotItemPicker : public UFortSquadManagementItemViewContextBase
{
public:
	uint8                                        Pad_1EFA[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortItemViewContext_SquadSlotItemPicker* GetDefaultObj();

};

// 0x8 (0x108 - 0x100)
// Class FortniteUI.FortItemViewContext_ExpeditionSquadSlotsView
class UFortItemViewContext_ExpeditionSquadSlotsView : public UFortItemViewContext_SquadSlotsView
{
public:
	uint8                                        Pad_1EFB[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortItemViewContext_ExpeditionSquadSlotsView* GetDefaultObj();

};

// 0x8 (0x110 - 0x108)
// Class FortniteUI.FortItemViewContext_ExpeditionSquadSlotItemPicker
class UFortItemViewContext_ExpeditionSquadSlotItemPicker : public UFortItemViewContext_SquadSlotItemPicker
{
public:
	uint8                                        Pad_1EFC[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortItemViewContext_ExpeditionSquadSlotItemPicker* GetDefaultObj();

};

// 0xC0 (0x4C8 - 0x408)
// Class FortniteUI.FortSquadManagementScreenBase
class UFortSquadManagementScreenBase : public UFortActivatablePanel
{
public:
	uint8                                        Pad_1EFE[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortSquadStatsWidgetBase*             SquadStatsWidget;                                  // 0x418(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortSquadSlotsView*                   SquadSlotsView;                                    // 0x420(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortSquadSlotDetailsPanel*            SelectedSlotDetailsPanel;                          // 0x428(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortSquadSlotItemPicker*              SelectedSlotItemPicker;                            // 0x430(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   InspectInputActionRowHandle;                       // 0x438(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   ManageInputActionRowHandle;                        // 0x448(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   BackInputActionRowHandle;                          // 0x458(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   InventoryInputActionRowHandle;                     // 0x468(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   InventoryCloseInputActionRowHandle;                // 0x478(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   ClosePickerInputActionRowHandle;                   // 0x488(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   SelectPickerSlotActionRowHandle;                   // 0x498(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1EFF[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortItemViewContext_SquadSlotsView*   ItemViewContext_SquadSlotsView;                    // 0x4B8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortItemViewContext_SquadSlotItemPicker* ItemViewContext_SquadSlotItemPicker;               // 0x4C0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortSquadManagementScreenBase* GetDefaultObj();

	bool TryGetStaticSquadDataBP(struct FHomebaseSquad* OutSquadData);
	void SetIdOfSquadToManageBP(class FName& SquadId);
	void NavigateToSquadSlot(int32 SquadSlotIndex);
	void HandleSquadSlotPickerShown();
	void HandleSquadSlotPickerHidden();
	void HandleSelectPickerSlotInputAction();
	void HandlePickerSelectionCommitted(class UFortItem* CommittedItem);
	void HandlePickerSelectionChanged(class UFortItem* SelectedItem);
	void HandleOpenSquadSlot(int32 SquadSlotIndex);
	void HandleManageInputAction();
	void HandleInventoryInputAction();
	void HandleInspectInputAction();
	void HandleDifferentSquadSlotSelected(int32 SquadSlotIndex);
	void HandleDifferentSquadSetBP();
	void HandleClosePickerInputAction();
	void HandleBackInputAction();
	class FName GetIdOfSquadToManageBP();
};

// 0x18 (0x4E0 - 0x4C8)
// Class FortniteUI.FortHeroSquadManagementScreen
class UFortHeroSquadManagementScreen : public UFortSquadManagementScreenBase
{
public:
	struct FDataTableRowHandle                   ManageDefendersInputActionRowHandle;               // 0x4C8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	class UFortHeroSquadBonusPerksWidgetBase*    BonusPerksWidget;                                  // 0x4D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortHeroSquadManagementScreen* GetDefaultObj();

};

// 0x8 (0x4D0 - 0x4C8)
// Class FortniteUI.FortSurvivorSquadManagementScreen
class UFortSurvivorSquadManagementScreen : public UFortSquadManagementScreenBase
{
public:
	class UFortSurvivorSquadStatMatchesBase*     StatMatchesWidget;                                 // 0x4C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortSurvivorSquadManagementScreen* GetDefaultObj();

};

// 0x20 (0x8C0 - 0x8A0)
// Class FortniteUI.FortSquadSelectorButton
class UFortSquadSelectorButton : public UCommonButton
{
public:
	uint8                                        Pad_1F01[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UFortSquadManagementScreenBase> SquadManagementScreenType;                         // 0x8B0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F02[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortSquadSelectorButton* GetDefaultObj();

	bool TryGetStaticSquadDataBP(struct FHomebaseSquad* OutSquadData);
	void SetIdOfSquadToManageBP(class FName& SquadId);
	void HandleSquadChangedBP();
	void HandleDifferentSquadSetBP();
	class FName GetIdOfSquadToManageBP();
};

// 0x48 (0x450 - 0x408)
// Class FortniteUI.FortSquadTypeLandingPageBase
class UFortSquadTypeLandingPageBase : public UFortActivatablePanel
{
public:
	enum class EFortHomebaseSquadType            SquadType;                                         // 0x408(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1F03[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   ManageInputActionRowHandle;                        // 0x410(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   BackInputActionRowHandle;                          // 0x420(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	enum class EFortFrontendInventoryFilter      ItemManagementScreenFilter;                        // 0x430(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1F04[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TWeakObjectPtr<class UFortSquadSelectorButton>> SquadSelectorButtons;                              // 0x438(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                        Pad_1F05[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortSquadTypeLandingPageBase* GetDefaultObj();

	void HandlePendingNavigationOp();
	void HandleManageInputAction(bool* bPassThrough);
	void HandleBackInputAction(bool* bPassThrough);
	class UFortSquadSelectorButton* CreateAndAddSquadButton(class FName& SquadId);
};

// 0x8 (0x410 - 0x408)
// Class FortniteUI.FortTopBarPanel
class UFortTopBarPanel : public UFortActivatablePanel
{
public:
	uint8                                        Pad_1F06[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortTopBarPanel* GetDefaultObj();

};

// 0x8 (0x410 - 0x408)
// Class FortniteUI.FortTwitchLoginModalWidget
class UFortTwitchLoginModalWidget : public UFortActivatablePanel
{
public:
	class UNativeWidgetHost*                     NativeHost;                                        // 0x408(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortTwitchLoginModalWidget* GetDefaultObj();

	void OnNativeHostContentChanged();
};

// 0x50 (0x180 - 0x130)
// Class FortniteUI.FortActorCanvas
class UFortActorCanvas : public UPanelWidget
{
public:
	struct FGameplayTagContainer                 DefaultHUDElementTags;                             // 0x130(0x20)(Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1F07[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortActorCanvas* GetDefaultObj();

	void OnHUDElementVisibilityChanged(struct FGameplayTagContainer& HiddenHUDElementTags);
	class UFortActorCanvasSlot* AddActorIndicator(class UFortActorIndicatorWidget* Indicator);
};

// 0x10 (0x48 - 0x38)
// Class FortniteUI.FortActorCanvasSlot
class UFortActorCanvasSlot : public UPanelSlot
{
public:
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x38(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x39(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanAutoRemove;                                    // 0x3A(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F08[0xD];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortActorCanvasSlot* GetDefaultObj();

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment);
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment);
	void SetCanAutoRemove(bool bAllowAutoRemove);
};

// 0x28 (0x260 - 0x238)
// Class FortniteUI.FortAlterationsWidget_NUI
class UFortAlterationsWidget_NUI : public UCommonUserWidget
{
public:
	class UFortItem*                             Item;                                              // 0x238(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortAlterationWidgetState        State;                                             // 0x240(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F09[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortItem*                             ItemToCompareWith;                                 // 0x248(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F0A[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortAlterationsWidget_NUI* GetDefaultObj();

	void SetState(enum class EFortAlterationWidgetState InState);
	void SetItemToCompareWith(class UFortItem* InItem);
	void SetItem(class UFortItem* InItem);
	void ProcessAlterations();
	void OnStateChanged();
	void OnItemToCompareWithChanged();
	void OnItemChanged();
	void OnGenerateAlteration(const struct FFortUIAlteration& AlterationInfo);
};

// 0x18 (0x250 - 0x238)
// Class FortniteUI.FortAlterationWidget_NUI
class UFortAlterationWidget_NUI : public UCommonUserWidget
{
public:
	struct FFortUIAlteration                     AlterationInfo;                                    // 0x238(0x18)(BlueprintVisible, BlueprintReadOnly, NoDestructor, ExposeOnSpawn, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFortAlterationWidget_NUI* GetDefaultObj();

	bool IsAlterationUnlocked();
	bool IsAlterationHighlighted();
	int32 GetRequiredLevel();
	class UFortAlterationItemDefinition* GetAlterationDefintion();
};

// 0x8 (0x240 - 0x238)
// Class FortniteUI.FortAnnouncementWidget
class UFortAnnouncementWidget : public UCommonUserWidget
{
public:
	class AFortClientAnnouncement*               BoundAnnouncement;                                 // 0x238(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortAnnouncementWidget* GetDefaultObj();

	void UpdateWidgetData(class AFortClientAnnouncement* Announcement);
	void BindUpdateEvents(class AFortClientAnnouncement* Announcement);
	void AnnouncementStopped(class AFortClientAnnouncement* Announcement);
};

// 0x0 (0x3E0 - 0x3E0)
// Class FortniteUI.FortArmoryScreen
class UFortArmoryScreen : public UCommonActivatablePanel
{
public:

	static class UClass* StaticClass();
	static class UFortArmoryScreen* GetDefaultObj();

};

// 0x20 (0x48 - 0x28)
// Class FortniteUI.FortAsyncAction_SetUIState
class UFortAsyncAction_SetUIState : public UBlueprintAsyncActionBase
{
public:
	UMulticastDelegateProperty_                  OnStateEntered;                                    // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UObject*                               WorldContextObject;                                // 0x38(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1F0C[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortAsyncAction_SetUIState* GetDefaultObj();

	class UFortAsyncAction_SetUIState* SetUIState(class UObject* InWorldContextObject, enum class EFortUIState DesiredState);
};

// 0x198 (0x1C0 - 0x28)
// Class FortniteUI.FortAsyncAction_ShowAdvancedLatentConfirmation_NUI
class UFortAsyncAction_ShowAdvancedLatentConfirmation_NUI : public UBlueprintAsyncActionBase
{
public:
	UMulticastDelegateProperty_                  DialogResult;                                      // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UObject*                               WorldContextObject;                                // 0x38(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FFortDialogDescription_NUI            Description;                                       // 0x40(0x180)(ContainsInstancedReference, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortAsyncAction_ShowAdvancedLatentConfirmation_NUI* GetDefaultObj();

	class UFortAsyncAction_ShowAdvancedLatentConfirmation_NUI* ShowAdvancedLatentActionConfirmation(class UObject* InWorldContextObject, const struct FSlateBrush& Icon, class FText Title, class FText MESSAGE, TArray<struct FConfirmationDialogAction>& ConfirmButtonInputActions, class FName& DeclineButtonInputAction, class UWidget* AdditionalContent, class UWidget* LeftAdditionalContent);
};

// 0x1A8 (0x1D0 - 0x28)
// Class FortniteUI.FortAsyncAction_ShowConfirmation
class UFortAsyncAction_ShowConfirmation : public UBlueprintAsyncActionBase
{
public:
	UMulticastDelegateProperty_                  OnConfirmed;                                       // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnDeclined;                                        // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnTimedOut;                                        // 0x48(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UObject*                               WorldContextObject;                                // 0x58(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FFortDialogDescription                Description;                                       // 0x60(0x170)(ContainsInstancedReference, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortAsyncAction_ShowConfirmation* GetDefaultObj();

	class UFortAsyncAction_ShowConfirmation* ShowConfirmationDialog(class UObject* InWorldContextObject, class FText Title, class FText MESSAGE, class FText ConfirmButtonText, class FText DeclineButtonText, class UFortUserWidget* InAdditionalContent, float InDisplayTime);
};

// 0x198 (0x1C0 - 0x28)
// Class FortniteUI.FortAsyncAction_ShowConfirmation_NUI
class UFortAsyncAction_ShowConfirmation_NUI : public UBlueprintAsyncActionBase
{
public:
	UMulticastDelegateProperty_                  DialogResult;                                      // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UObject*                               WorldContextObject;                                // 0x38(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FFortDialogDescription_NUI            Description;                                       // 0x40(0x180)(ContainsInstancedReference, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortAsyncAction_ShowConfirmation_NUI* GetDefaultObj();

	class UFortAsyncAction_ShowConfirmation_NUI* ShowSimpleConfirmationDialog_NUI(class UObject* InWorldContextObject, const struct FSlateBrush& Icon, class FText Title, class FText MESSAGE, bool bShowConfirm, bool bShowDecline, class UWidget* AdditionalContent, class UWidget* LeftAdditionalContent);
	class UFortAsyncAction_ShowConfirmation_NUI* ShowSimpleConfirmationDialog_CustomInput(class UObject* InWorldContextObject, const struct FSlateBrush& Icon, class FText Title, class FText MESSAGE, class FName ConfirmAction, class FName DeclineAction, class UWidget* AdditionalContent, class UWidget* LeftAdditionalContent);
	class UFortAsyncAction_ShowConfirmation_NUI* ShowConfirmationDialog_NUI(class UObject* InWorldContextObject, const struct FSlateBrush& Icon, class FText Title, class FText MESSAGE, TArray<struct FConfirmationDialogAction>& ConfirmButtonInputActions, class FName& DeclineButtonInputAction, class UWidget* AdditionalContent, class UWidget* LeftAdditionalContent);
};

// 0x328 (0x350 - 0x28)
// Class FortniteUI.FortAsyncAction_ShowPartyDialog
class UFortAsyncAction_ShowPartyDialog : public UBlueprintAsyncActionBase
{
public:
	class UObject*                               WorldContextObject;                                // 0x28(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FFortDialogDescription_NUI            Description;                                       // 0x30(0x180)(ContainsInstancedReference, NativeAccessSpecifierPrivate)
	struct FFortTeamMemberInfo                   TeamMemberInfo;                                    // 0x1B0(0x190)(NativeAccessSpecifierPrivate)
	class ULocalPlayer*                          LocalPlayer;                                       // 0x340(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1F0F[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortAsyncAction_ShowPartyDialog* GetDefaultObj();

	class UFortAsyncAction_ShowPartyDialog* ShowPartyMemberManageDialog(class UObject* InWorldContextObject, struct FFortTeamMemberInfo& TeamMemberInfo, class ULocalPlayer* LocalPlayer, class UUserWidget* LeftAdditionalContent);
	class UFortAsyncAction_ShowPartyDialog* ShowPartyLeaderManageDialog(class UObject* InWorldContextObject, struct FFortTeamMemberInfo& TeamMemberInfo, class ULocalPlayer* LocalPlayer, class UUserWidget* LeftAdditionalContent);
};

// 0xA0 (0x480 - 0x3E0)
// Class FortniteUI.FortAthenaMatchmakingWidget
class UFortAthenaMatchmakingWidget : public UCommonActivatablePanel
{
public:
	TSubclassOf<class UFortMissionGenerator>     MissionGen;                                        // 0x3E0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UFortMissionGenerator>     DuoMissionGen;                                     // 0x3E8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UFortMissionGenerator>     SquadMissionGen;                                   // 0x3F0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortAthenaPlaylist               CurrentPlaylist;                                   // 0x3F8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCurrentSquadFill;                                 // 0x3F9(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F10[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               SpinnerAndTextContainer;                           // 0x400(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonWidgetSwitcher*                 ButtonSwitcher;                                    // 0x408(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButton*                         PlayButton;                                        // 0x410(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButton*                         CancelButton;                                      // 0x418(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                      MatchmakingHeaderText;                             // 0x420(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                      MatchmakingMessageText;                            // 0x428(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonRotator*                        PlaylistRotator;                                   // 0x430(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonRotator*                        TeamFillRotator;                                   // 0x438(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UHorizontalBox*                        TeamFillRow;                                       // 0x440(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1F11[0x38];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortAthenaMatchmakingWidget* GetDefaultObj();

	void SetPlayButtonState(bool bCanMatchmake);
	void SetCancelButtonState(bool bIsMatchmaking);
	void OnPlaylistRotatorChanged(int32 PlaylistIndex);
	void OnPlayButtonPressed();
	void OnChangeTeamFillChanged(bool bFill);
	void OnCancelButtonPressed();
};

// 0x0 (0x238 - 0x238)
// Class FortniteUI.FortAthenaNewsWidget
class UFortAthenaNewsWidget : public UCommonUserWidget
{
public:

	static class UClass* StaticClass();
	static class UFortAthenaNewsWidget* GetDefaultObj();

	bool GetText(class FText* Title, class FText* PlatformBody, class FText* RegionBody, class FText* Body);
};

// 0x10 (0x240 - 0x230)
// Class FortniteUI.FortUserWidget
class UFortUserWidget : public UUserWidget
{
public:
	uint8                                        Pad_1F13[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bConsumePointerInput;                              // 0x238(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1F14[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortUserWidget* GetDefaultObj();

	void AddStoreCheatMenu();
	void AddGrantCheatMenu(const class FString& TemplateId, const class FString& InstanceId);
};

// 0x0 (0x28 - 0x28)
// Class FortniteUI.FortNodeCanvasEntityInterface
class IFortNodeCanvasEntityInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IFortNodeCanvasEntityInterface* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class FortniteUI.FortNodeCanvasInterface
class IFortNodeCanvasInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IFortNodeCanvasInterface* GetDefaultObj();

};

// 0x40 (0x280 - 0x240)
// Class FortniteUI.FortBaseCanvasEntity
class UFortBaseCanvasEntity : public UFortUserWidget
{
public:
	uint8                                        Pad_1F15[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  NodeID;                                            // 0x248(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bConsideredInSizeCalculation;                      // 0x250(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F16[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MovementMultiplier;                                // 0x254(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDataTableRowHandle                   NodeStyleData;                                     // 0x258(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F17[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             BasePos;                                           // 0x270(0x8)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         HasHadBasePosSet;                                  // 0x278(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F18[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortBaseCanvasEntity* GetDefaultObj();

	void Outro(enum class EFortAnimSpeed Speed);
	void Intro(enum class EFortAnimSpeed Speed);
};

// 0x28 (0x2A8 - 0x280)
// Class FortniteUI.FortBaseCanvasNode
class UFortBaseCanvasNode : public UFortBaseCanvasEntity
{
public:
	class UMediaSource*                          PreviewMediaSource;                                // 0x280(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShouldHideConnectorsToDependents;                 // 0x288(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F23[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnNodeStateChangedEvent;                           // 0x290(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F24[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortBaseCanvasNode* GetDefaultObj();

	bool SelectNode();
	void SelectedChanged(bool bEnabled);
	void Purchase();
	void OnNodeStateChanged__DelegateSignature(class UFortBaseCanvasNode* Node);
	bool IsPurchaseable(TArray<enum class EFortHomebaseNodePurchaseRestrictionReason>* OutRestrictionReasons);
	bool IsOwned();
	bool IsLocked();
	void HandleNodeStateChangedInternal();
	void HandleNodeStateChanged();
	class FText GetPurchaseRestrictionReasonText(enum class EFortHomebaseNodePurchaseRestrictionReason Reason);
	float GetPurchasePercent();
	class UMediaSource* GetPreviewMediaSource();
	bool GetNodeStyleDataCopy(struct FFortNodeStyleData* Style);
	class FName GetNodeID();
	bool GetNodeDataCopy(struct FHomebaseNode* Node);
	TArray<struct FFortItemInstanceQuantityPair> GetCosts();
	bool DrillDownToNodePage();
	bool DoesDrillDownToCurrentNodePage();
};

// 0x100 (0x240 - 0x140)
// Class FortniteUI.FortNodeCanvas
class UFortNodeCanvas : public UCanvasPanel
{
public:
	uint8                                        Pad_1F26[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  NodePageName;                                      // 0x148(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDataTableRowHandle                   NodeTypeData;                                      // 0x150(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                             OriginForParallax;                                 // 0x160(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F27[0xD8];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortNodeCanvas* GetDefaultObj();

	void PanToNode(class FName NodeID, enum class EFortAnimSpeed PanSpeed);
};

// 0x40 (0x170 - 0x130)
// Class FortniteUI.FortBangWrapper
class UFortBangWrapper : public UContentWidget
{
public:
	uint8                                        Pad_1F28[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EFortBangSize                     Size;                                              // 0x138(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F29[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             Offset;                                            // 0x13C(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortBangType                     BangType;                                          // 0x144(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F2A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  TutorialNameID;                                    // 0x148(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortTutorialGlowType             TutorialGlowType;                                  // 0x150(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F2B[0x1F];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortBangWrapper* GetDefaultObj();

	void SetBangVisibility(bool InVisible);
};

// 0x338 (0x360 - 0x28)
// Class FortniteUI.FortGlobalUIContext
class UFortGlobalUIContext : public UBlueprintContextBase
{
public:
	uint8                                        Pad_1F59[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  SubGameChanged;                                    // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F5A[0x70];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnKeybindsChanged;                                 // 0xB0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnInputActionHoldStarted;                          // 0xC0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnInputActionHoldStopped;                          // 0xD0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnTeamPowerChanged;                                // 0xE0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  DragAndDropStartedDelegate;                        // 0xF0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  DragAndDropEndedDelegate;                          // 0x100(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnScoreReportChanged;                              // 0x110(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnGraphNodeDrillDown;                              // 0x120(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnGraphNodeSelected;                               // 0x130(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnQueryFortBackendVersionComplete;                 // 0x140(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnLoadingScreenVisibilityChanged;                  // 0x150(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnLocalPlayerControllerConnectionChanged;          // 0x160(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F5B[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FName, class UFortUIMessageManager*> MessageManagersByName;                             // 0x188(0x50)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	TMap<enum class EFortUIFeature, struct FFortUIFeatureStruct> Features;                                          // 0x1D8(0x50)(ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1F5C[0xF0];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UAthenaMatchReadyDesktopPopup*         AthenaMatchReadyNotificationWidget;                // 0x318(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1F5D[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bIsUIVisible;                                      // 0x330(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bShowRateWidget;                                   // 0x331(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1F5E[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  FeedbackTitle;                                     // 0x338(0x18)(Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1F5F[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortGlobalUIContext* GetDefaultObj();

	void UnregisterToReceiveNotifications(enum class EFortNotificationQueueType NotificationQueueType);
	void UnregisterScriptedAction(TSubclassOf<class AFortScriptedAction> ScriptedAction);
	void UnbindToFeatureState(enum class EFortUIFeature Feature, UDelegateProperty_ Delegate);
	void TriggerUIFeedbackEvent(class FName EventName);
	void TriggerNewQuestStickies();
	void TriggerCompletedQuestStickies();
	bool ShowWebURL(const class FString& URL, enum class EFortUrlType URLType);
	void ShowConsoleAccountPicker(int32 ControllerIndex, UDelegateProperty_& CompletionDelegate);
	void ShowBang(enum class EFortBangType Type);
	void ShowAthenaMatchReadyExternalNotificationWindow();
	bool ShouldShowRateWidget();
	bool ShouldCloseMenuOnEscape();
	void SetSubGame(enum class ESubGame SubGame);
	void SetRatingWidgetFeedbackTitle(class FText& Title);
	void SetInputMode(enum class EFortInputMode InMode);
	void SetCurrentInputPresetName(const class FString& InputPresetName);
	void SetBangFromCount(enum class EFortBangType Type, int32 Count);
	void SendUINavigationAnalytic(const class FString& Destination, bool bUserInitiated);
	void SendLeaveZoneAnalytic();
	void SendExperienceRatingAnalytic(const class FString& RatingType, const class FString& FeedbackSentBy, class FText& RatingQuestion, int32& StarCount, const class FString& GameSessionID, const class FString& Comment);
	void ReturnToSubGameSelect();
	void RemoveNotification(enum class EFortNotificationQueueType NotificationQueueType, struct FFortDialogDescription& NotificationDescription);
	void RegisterToReceiveNotifications(enum class EFortNotificationQueueType NotificationQueueType, UDelegateProperty_ InOnNotificationAvailable);
	void RegisterScriptedActions(const TArray<TSubclassOf<class AFortScriptedAction>>& ScriptedActions);
	void RegisterScriptedAction(TSubclassOf<class AFortScriptedAction> ScriptedAction);
	void QuitGame();
	void QueryGameBackendVersion();
	void ProcessNotificationResult(enum class EFortDialogResult InResult, struct FFortDialogDescription& NotificationDescription);
	void ProcessConfirmationResult(enum class EFortDialogResult InResult, class FName InResultName, struct FFortDialogDescription_NUI& ConfirmationDescription, bool bWaitingForLatentAction, struct FFortDialogExternalLatentActionHandle* WaitingDialogHandle);
	void OnQueryFortBackendVersionDelegate__DelegateSignature(const struct FFortBackendVersion& FortBackendVersion);
	void OnLocalPlayerControllerConnectionChangedDelegate__DelegateSignature(bool bConnected);
	void OnLoadingScreenVisibilityChangedDelegate__DelegateSignature(bool IsVisible);
	void Logout();
	bool IsUsingGamepad();
	bool IsUIVisible();
	bool IsSquadQueueEnabled();
	bool IsPendingLogout();
	bool IsMobileApp();
	bool IsInZone();
	bool IsInOutpostZone();
	bool IsHUDVisible();
	bool IsGamepadAttached();
	bool IsDuoQueueEnabled();
	bool IsDesktopPlatform();
	bool IsBluGloEnabled();
	bool IsAllContentInstalled();
	void InputActionHoldStopped(class FName InputActionName, bool bCompletedSuccessfully);
	void InputActionHoldStarted(class FName InputActionName, float HoldDuration);
	void HideBang(enum class EFortBangType Type);
	bool HasCompletedOnboardingObjective(struct FDataTableRowHandle& Objective);
	bool HasAccesstoMultipleSubGames();
	class FString GetWatermark();
	enum class ESubGame GetSubGame();
	class FString GetSessionId();
	class UFortUIScoreReport* GetScoreReport();
	class UFortQuestManager* GetQuestManager();
	class FText GetPlatformDisplayName();
	bool GetNextNotification(enum class EFortNotificationQueueType NotificationQueueType, struct FFortDialogDescription* NotificationDescription);
	class UFortUIMessageManager* GetMessageManager(class FName ManagerName, bool* bCreatedNew);
	class UFortUIRewardReport* GetLastMissionRewardReport();
	void GetLastMissionInfo(struct FFortLastMissionInfo* LastMissionInfo);
	struct FGameSummaryInfo GetLastGameSummaryInfo();
	class FText GetKeyTextForAction(class FName Action, class FText* ButtonActionType, bool bUseAbbreviatedText);
	struct FKey GetKeyForAction(class FName Action);
	int32 GetInputPriority(enum class EInputPriority Priority);
	bool GetInputDetailsForAction(class FName Action, struct FFortInputActionDetails* InputActionDetails);
	class FText GetFeedbackTitle();
	enum class EFortUIFeatureState GetFeatureState(enum class EFortUIFeature Feature);
	int32 GetDisplayXpValue(int32 StartingRealXp, int32 EndingRealXp);
	class FString GetCurrentInputPresetName();
	class FText GetConningXpModifierMessage(int32 TotalSkillPoints, int32 ContentDifficulty);
	float GetConningDifficultyXpModifier(int32 TotalSkillPoints, int32 ContentDifficulty);
	class UFortCollectionBookManager* GetCollectionBookManager();
	class FString GetBackendName();
	class FString GetAthenaCodeOfConductURL();
	void GetAllPlayerInputPresetNamesForSubGame(enum class ESubGame SubGame, TArray<class FString>* InputPresetNames, TArray<class FText>* InputPresetFriendlyNames);
	void GetAllPlayerInputPresetNames(TArray<class FString>* InputPresetNames, TArray<class FText>* InputPresetFriendlyNames);
	void ForceSetFeatureState(enum class EFortUIFeature Feature, enum class EFortUIFeatureState ForcedState);
	void DisplayStateContent(bool bDisplay);
	void CopyToClipboard(const class FString& ClipboardText);
	float ContentInstallationProgress();
	void CloseExternalNotificationWindowIfOpen();
	void ClearSelectionGroup(class FName SelectionGroup);
	void ClearRatingWidgetInfo();
	void ClearLastMissionReports();
	void ClearLastGameSummaryInfo();
	void CheckFlag(const class FString& FlagName, enum class EFlagStatus* OutStatus);
	bool CanPlay(enum class ESubGame SubGame, class FText* DenialReason);
	bool CanMatchmake(enum class ESubGame SubGame, class FText* DenialReason);
	void BindToFeatureStateAndInitialize(enum class EFortUIFeature Feature, UDelegateProperty_ Delegate);
	bool AutoSelectSubGame();
	bool AllowQuit();
	bool AllowLogout();
};

// 0x60 (0x440 - 0x3E0)
// Class FortniteUI.FortAthenaTabsScreenBase
class UFortAthenaTabsScreenBase : public UCommonActivatablePanel
{
public:
	TMap<enum class EFortUIFeature, class FName> FeaturesTabsMap;                                   // 0x3E0(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class UFortTabListWidgetBase*                TopTabList;                                        // 0x430(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1F60[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortAthenaTabsScreenBase* GetDefaultObj();

	void HandleFeatureStateChanged(enum class EFortUIFeature ChangedFeature, enum class EFortUIFeatureState NewState);
	void HandleFeatureNavigateRequest(enum class EFortUIFeature Feature);
};

// 0xF8 (0x330 - 0x238)
// Class FortniteUI.FortAttributeListItem_NUI
class UFortAttributeListItem_NUI : public UCommonUserWidget
{
public:
	uint8                                        Pad_1F61[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bHoverEnabled;                                     // 0x240(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F62[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          StatTag;                                           // 0x248(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F63[0xE0];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortAttributeListItem_NUI* GetDefaultObj();

	void ValueChanged(float Delta);
	void SetPreviewAttribute(struct FFortDisplayAttribute& InPreviewAttribute);
	void SetDisplayAttribute(struct FFortDisplayAttribute& InDisplayAttribute);
	void PreviewStarted();
	void PreviewEnded();
	void GetDisplayPreviewCopy(struct FFortDisplayAttribute* OutPreviewAttribute);
	void GetDisplayAttributeCopy(struct FFortDisplayAttribute* OutDisplayAttribute);
	void GetCurrentAttributeCopy(struct FFortDisplayAttribute* OutDisplayAttribute);
	void DisplayAttributeChanged();
	void ClearPreview();
};

// 0x30 (0x268 - 0x238)
// Class FortniteUI.FortAttributeList_NUI
class UFortAttributeList_NUI : public UCommonUserWidget
{
public:
	TSubclassOf<class UFortAttributeListItem_NUI> AttributeItemClass;                                // 0x238(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHoverEnabledOnElements;                           // 0x240(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F65[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UFortAttributeListItem_NUI*>    ShownAttributeWidgets;                             // 0x248(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1F66[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortAttributeList_NUI* GetDefaultObj();

	void SetPreviewData(TArray<struct FFortDisplayAttribute>& Data);
	void SetData(TArray<struct FFortDisplayAttribute>& Data);
	void OnRemoveShownAttributeListItem(class UFortAttributeListItem_NUI* AttributeListItemWidget, int32 AtIndex);
	void OnClearShownAttributes();
	void OnAddShownAttributeListItem(class UFortAttributeListItem_NUI* AttributeListItemWidget);
	void ClearPreviewData();
};

// 0xE8 (0x318 - 0x230)
// Class FortniteUI.FortAttributeListItem
class UFortAttributeListItem : public UUserWidget
{
public:
	bool                                         bHoverEnabled;                                     // 0x230(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F68[0xE7];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortAttributeListItem* GetDefaultObj();

	void ValueChanged(float Delta);
	void SetPreviewAttribute(struct FFortDisplayAttribute& InPreviewAttribute);
	bool SetDisplayAttribute(struct FFortDisplayAttribute& InDisplayAttribute, struct FFortDisplayAttribute* DeltaAttribute);
	void PreviewStarted();
	void PreviewEnded();
	void GetDisplayPreviewCopy(struct FFortDisplayAttribute* OutPreviewAttribute);
	void GetDisplayAttributeCopy(struct FFortDisplayAttribute* OutDisplayAttribute);
	void GetCurrentAttributeCopy(struct FFortDisplayAttribute* OutDisplayAttribute);
	void DisplayAttributeChanged();
	void ClearPreview();
};

// 0x18 (0x250 - 0x238)
// Class FortniteUI.FortBangWrapper_NUI
class UFortBangWrapper_NUI : public UCommonUserWidget
{
public:
	uint8                                        Pad_1F6B[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EFortBangType                     BangType;                                          // 0x240(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F6C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  TutorialNameID;                                    // 0x248(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFortBangWrapper_NUI* GetDefaultObj();

	void UnregisterTutorialNameID();
	void SetTutorialNameID(class FName InTutorialNameID);
	void SetBangType(enum class EFortBangType NewBangType);
	void SetBangStateBP(bool bEnabled, int32 Count);
	void OnStopCallout();
	void OnStartCallout();
	void OnBangStateChanged(bool bEnabled, int32 Count);
};

// 0x40 (0x420 - 0x3E0)
// Class FortniteUI.FortBannerSelectorBase
class UFortBannerSelectorBase : public UCommonActivatablePanel
{
public:
	class UEditableText*                         BannerName;                                        // 0x3E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        BannerNameMaxLength;                               // 0x3E8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1F6E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBorder*                               ErrorBorder;                                       // 0x3F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                      ErrorText;                                         // 0x3F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1F6F[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortBannerSelectorBase* GetDefaultObj();

	void OnHomebaseNameCommitSucceeded();
	void OnHomebaseNameCommitFailed();
	bool HasIllegalChars(const class FString& NewBannerName);
	void HandleBannerNameChanged(class FText& Text);
	void CompleteHomebaseName();
	void CompleteHomebaseBannerSelection();
};

// 0x8 (0x240 - 0x238)
// Class FortniteUI.FortBorderStyleList
class UFortBorderStyleList : public UCommonUserWidget
{
public:
	class FName                                  BordersPath;                                       // 0x238(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFortBorderStyleList* GetDefaultObj();

	TArray<TSoftClassPtr<class UCommonBorderStyle>> GetBorderStyles();
};

// 0x18 (0x480 - 0x468)
// Class FortniteUI.FortButtonInternalWidget
class UFortButtonInternalWidget : public UButton
{
public:
	bool                                         IsClickable;                                       // 0x468(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F70[0x17];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortButtonInternalWidget* GetDefaultObj();

};

// 0x1BE0 (0x1C08 - 0x28)
// Class FortniteUI.FortButtonStyle
class UFortButtonStyle : public UObject
{
public:
	struct FFortStateStyle                       NormalBase;                                        // 0x28(0x380)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FFortStateStyle                       NormalHovered;                                     // 0x3A8(0x380)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FFortStateStyle                       NormalPressed;                                     // 0x728(0x380)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FFortStateStyle                       SelectedBase;                                      // 0xAA8(0x380)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FFortStateStyle                       SelectedHovered;                                   // 0xE28(0x380)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FFortStateStyle                       SelectedPressed;                                   // 0x11A8(0x380)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FFortStateStyle                       Disabled;                                          // 0x1528(0x380)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FFortMultiSizeMargin                  ButtonPadding;                                     // 0x18A8(0x60)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FFortMultiSizeFont                    Font;                                              // 0x1908(0x270)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FFortMultiSizeMargin                  CustomPadding;                                     // 0x1B78(0x60)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateSound                           PressedSlateSound;                                 // 0x1BD8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateSound                           HoveredSlateSound;                                 // 0x1BF0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFortButtonStyle* GetDefaultObj();

	struct FMargin GetMarginBySizeFromMultiSizeMargin(struct FFortMultiSizeMargin& MultiSizeMargin, enum class EFortBrushSize Size);
	struct FSlateFontInfo GetFontBySizeFromMultiSizeFont(struct FFortMultiSizeFont& MultiSizeFont, enum class EFortBrushSize Size);
	struct FSlateFontInfo GetFontBySize(enum class EFortBrushSize Size);
	struct FMargin GetCustomPaddingBySize(enum class EFortBrushSize Size);
	struct FMargin GetButtonPaddingBySize(enum class EFortBrushSize Size);
	struct FSlateBrush GetBrushBySizeFromMultiSizeBrush(struct FFortMultiSizeBrush& MultiSizeBrush, enum class EFortBrushSize Size);
};

// 0x628 (0x868 - 0x240)
// Class FortniteUI.FortBaseButton
class UFortBaseButton : public UFortUserWidget
{
public:
	uint8                                        Pad_1F77[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  EnabledChanged;                                    // 0x248(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  SelectedChanged;                                   // 0x258(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  ButtonClicked;                                     // 0x268(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	enum class EFortBangSize                     BangSize;                                          // 0x278(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1F78[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             BangOffset;                                        // 0x27C(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EFortBangType                     BangType;                                          // 0x284(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1F79[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  TutorialNameID;                                    // 0x288(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EFortTutorialGlowType             TutorialGlowType;                                  // 0x290(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1F7A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UFortButtonStyle>          Style;                                             // 0x298(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EFortBrushSize                    BrushSize;                                         // 0x2A0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1F7B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateSound                           PressedSlateSoundOverride;                         // 0x2A8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FSlateSound                           HoveredSlateSoundOverride;                         // 0x2C0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	bool                                         bSelectable;                                       // 0x2D8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1F7C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  SelectionGroup;                                    // 0x2E0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bToggleable;                                       // 0x2E8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bClickable;                                        // 0x2E9(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EButtonClickMethod                ClickMethod;                                       // 0x2EA(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1F7D[0x57D];                                   // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortBaseButton* GetDefaultObj();

	void SetStyle(TSubclassOf<class UFortButtonStyle> InStyle);
	void SetSelectionGroup(class FName InSelectionGroup);
	void SetSelected(bool InSelected);
	void SetHovered(bool InHovered);
	void SetClickMethod(enum class EButtonClickMethod InClickMethod);
	void SetClickable(bool InClickable);
	void SetBrushSize(enum class EFortBrushSize InSize);
	void SetBangVisibility(bool bVisible);
	void OnButtonClicked();
	class UFortButtonStyle* GetStyle();
	int32 GetSelectionGroupIndex();
	bool GetSelected();
	struct FFortStateStyle GetCurrentStateStyle();
	struct FSlateFontInfo GetCurrentFont();
	struct FMargin GetCurrentCustomPadding();
	struct FMargin GetCurrentButtonPadding();
	void ForceClick();
};

// 0x48 (0x170 - 0x128)
// Class FortniteUI.FortChatWidget
class UFortChatWidget : public UNativeWidgetHost
{
public:
	bool                                         MinimizeEnabled;                                   // 0x128(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AutoReleaseFocus;                                  // 0x129(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AllowEmotes;                                       // 0x12A(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F7E[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ListFadeTime;                                      // 0x12C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinimizedChatMessageNum;                           // 0x130(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ThrottleChat;                                      // 0x134(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F7F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ThrottleTicketTime;                                // 0x138(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ThrottleTicketCount;                               // 0x13C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnChatEnteredEvent;                                // 0x140(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnUserListChanged;                                 // 0x150(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F80[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortChatWidget* GetDefaultObj();

	void SetControllerActionBrush(const struct FSlateBrush& SlateBrush);
	void FocusChatEntry();
};

// 0x0 (0x28 - 0x28)
// Class FortniteUI.FortCheatMenuFactory
class UFortCheatMenuFactory : public UObject
{
public:

	static class UClass* StaticClass();
	static class UFortCheatMenuFactory* GetDefaultObj();

	void AddStoreCheatMenu(class UCommonUserWidget* Widget);
	void AddGrantCheatMenu(class UCommonUserWidget* Widget, const class FString& TemplateId, const class FString& InstanceId);
};

// 0x18 (0x250 - 0x238)
// Class FortniteUI.FortCollectionBookGenericRewardWidget
class UFortCollectionBookGenericRewardWidget : public UCommonUserWidget
{
public:
	uint8                                        bUpdateVisibilityBasedOnRewardExistence : 1;       // Mask: 0x1, PropSize: 0x10x238(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_209 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1F81[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class ESlateVisibility                  VisibilityWhenNoRewardSpecified;                   // 0x23C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ESlateVisibility                  VisibilityWhenRewardSpecified;                     // 0x23D(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1F82[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortCollectionBookRewardCardWidget*   RewardCardWidget;                                  // 0x240(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ECollectionBookRewardStatus       RewardStatus;                                      // 0x248(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1F83[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortCollectionBookGenericRewardWidget* GetDefaultObj();

	void SetRewardStatus(enum class ECollectionBookRewardStatus Status);
	void SetRewards(struct FFortRewardInfo& Rewards);
	void SetCurrentItemToDisplay(class UFortItem* ItemToDisplay);
	void OnRewardStatusChanged(enum class ECollectionBookRewardStatus NewStatus);
	bool HasRewards();
	enum class ECollectionBookRewardStatus GetRewardStatus();
	void ClearRewards();
};

// 0x0 (0x250 - 0x250)
// Class FortniteUI.FortCollectionBookPageCompletionRewardWidget
class UFortCollectionBookPageCompletionRewardWidget : public UFortCollectionBookGenericRewardWidget
{
public:

	static class UClass* StaticClass();
	static class UFortCollectionBookPageCompletionRewardWidget* GetDefaultObj();

};

// 0x10 (0x260 - 0x250)
// Class FortniteUI.FortCollectionBookProgressionRewardWidget
class UFortCollectionBookProgressionRewardWidget : public UFortCollectionBookGenericRewardWidget
{
public:
	class UCommonNumericTextBlock*               LevelTextWidget;                                   // 0x250(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                      DisplayNameWidget;                                 // 0x258(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortCollectionBookProgressionRewardWidget* GetDefaultObj();

	void SetAssociatedLevel(int32 Level);
};

// 0x28 (0x140 - 0x118)
// Class FortniteUI.FortItemWidget_NUI
class UFortItemWidget_NUI : public UWidget
{
public:
	TWeakObjectPtr<class UFortItem>              ItemToRepresent;                                   // 0x118(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TScriptInterface<class IFortItemViewContextInterface> ItemViewContext;                                   // 0x120(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                        Pad_1F84[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortItemWidget_NUI* GetDefaultObj();

	void SetItemViewContext(TScriptInterface<class IFortItemViewContextInterface> ItemViewContext);
	void SetItemToRepresent(class UFortItem* ItemToRepresent);
};

// 0x0 (0x140 - 0x140)
// Class FortniteUI.FortItemCardBase
class UFortItemCardBase : public UFortItemWidget_NUI
{
public:

	static class UClass* StaticClass();
	static class UFortItemCardBase* GetDefaultObj();

	enum class EFortItemCardSize PortBrushSize(enum class EFortBrushSize& BrushSize);
};

// 0x20 (0x8C0 - 0x8A0)
// Class FortniteUI.FortRewardInfoButton
class UFortRewardInfoButton : public UCommonButton
{
public:
	uint8                                        Pad_1F85[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPanelWidget*                          ItemCardPanel;                                     // 0x8A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EFortItemCardSize                 ItemCardSize;                                      // 0x8B0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bDisplayAsRewardCard;                              // 0x8B1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1F86[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortItem*                             ItemInstance;                                      // 0x8B8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortRewardInfoButton* GetDefaultObj();

	void SetShowDescriptionBP(bool bInShowDescription);
	void SetShowDescription(bool bInShowDescription);
	void SetItemInstanceQuantityPair(struct FFortItemInstanceQuantityPair& ItemQuantityPair);
	void HandleDifferentItemOrQuantitySetBP();
	int32 GetQuantity();
	class UFortItem* GetItemInstance();
};

// 0x88 (0x2C0 - 0x238)
// Class FortniteUI.FortRewardInfoWidget
class UFortRewardInfoWidget : public UCommonUserWidget
{
public:
	class UPanelWidget*                          RewardListWidget;                                  // 0x238(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FMargin                               RewardWidgetPadding;                               // 0x240(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x250(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x251(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bShowDescription;                                  // 0x252(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bAllowItemInteraction;                             // 0x253(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1F87[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UFortRewardInfoButton>     OrWidgetType;                                      // 0x258(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UFortRewardInfoButton>     RewardInfoButtonType;                              // 0x260(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1F88[0x20];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButtonGroup*                    ButtonGroup;                                       // 0x288(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1F89[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortRewardInfoWidget* GetDefaultObj();

	void SetReward(struct FFortRewardInfo& RewardsIn);
	void SetButtonGroup(class UCommonButtonGroup* InButtonGroup);
};

// 0x50 (0x430 - 0x3E0)
// Class FortniteUI.FortCollectionBookRewardModalWidget
class UFortCollectionBookRewardModalWidget : public UCommonActivatablePanel
{
public:
	class UCommonTextBlock*                      TitleWidget;                                       // 0x3E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortRewardInfoWidget*                 RewardWidget;                                      // 0x3E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortMaterialProgressBar*              ProgressBar;                                       // 0x3F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                      ProgressTextWidget;                                // 0x3F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1F8A[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortCollectionBookRewardModalWidget* GetDefaultObj();

};

// 0x50 (0x2A0 - 0x250)
// Class FortniteUI.FortCollectionBookSectionCompletionRewardWidget
class UFortCollectionBookSectionCompletionRewardWidget : public UFortCollectionBookGenericRewardWidget
{
public:
	class UCommonButton*                         RewardDetailsButton;                               // 0x250(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSoftClassPtr<class UFortCollectionBookRewardModalWidget> RewardDetailsModalWidgetClass;                     // 0x258(0x20)(Edit, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FText                                  ModalTitle;                                        // 0x278(0x18)(Edit, Protected, NativeAccessSpecifierProtected)
	class UFortCollectionBookRewardModalWidget*  RewardDetailsModalWidget;                          // 0x290(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortCollectionBookSection*            Section;                                           // 0x298(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortCollectionBookSectionCompletionRewardWidget* GetDefaultObj();

	void OnRewardDetailsButtonClicked(class UCommonButton* ClickedButton);
	void HandleRewardDetailsModalWidgetDeactivated(class UCommonActivatablePanel* DeactivatedPanel);
};

// 0x40 (0x278 - 0x238)
// Class FortniteUI.FortCollectionBookOverviewWidget
class UFortCollectionBookOverviewWidget : public UCommonUserWidget
{
public:
	UMulticastDelegateProperty_                  OnCollectionBookPageSelected;                      // 0x238(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnCollectionBookPageClicked;                       // 0x248(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UCommonTreeView*                       PageTreeViewWidget;                                // 0x258(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UFortCollectionBookCategory*>   CategoryObjectPool;                                // 0x260(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	class UFortCollectionBookPage*               LastSelectedPage;                                  // 0x270(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortCollectionBookOverviewWidget* GetDefaultObj();

	void OnPageItemSelected(class UObject* Item, bool bSelected);
	void OnPageItemClicked(class UObject* Item);
	TArray<class UObject*> OnGetChildrenForPageCategory(class UObject* CategoryObject);
	void OnDeactivated();
	void OnActivated();
};

// 0x68 (0x2A0 - 0x238)
// Class FortniteUI.FortCollectionBookPageDetailsWidget
class UFortCollectionBookPageDetailsWidget : public UCommonUserWidget
{
public:
	class UCommonTextBlock*                      PageCompletionText;                                // 0x238(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortMaterialProgressBar*              ProgressBar;                                       // 0x240(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortCollectionBookPageCompletionRewardWidget* PageRewardWidget;                                  // 0x248(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButton*                         RewardDetailsButton;                               // 0x250(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortCollectionBookPage*               DetailsPage;                                       // 0x258(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSoftClassPtr<class UFortCollectionBookRewardModalWidget> RewardDetailsModalWidgetClass;                     // 0x260(0x20)(Edit, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FText                                  ModalTitle;                                        // 0x280(0x18)(Edit, Protected, NativeAccessSpecifierProtected)
	class UFortCollectionBookRewardModalWidget*  RewardDetailsModalWidget;                          // 0x298(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortCollectionBookPageDetailsWidget* GetDefaultObj();

	void OnSlotItemComplete(class UFortAccountItem* SlottedItem, class FName SlotId);
	void OnRewardDetailsButtonClicked(class UCommonButton* ClickedButton);
	void OnPageProgressionUpdated(int32 TotalFilledSlots, int32 TotalSlots, enum class EFortCollectionBookState State);
	void OnDetailsPageChanged(class UFortCollectionBookPage* InNewDetailsPage);
	void HandleRewardDetailsModalWidgetDeactivated(class UCommonActivatablePanel* DeactivatedPanel);
};

// 0x30 (0x8D0 - 0x8A0)
// Class FortniteUI.FortCollectionBookPageListWidget
class UFortCollectionBookPageListWidget : public UCommonButton
{
public:
	uint8                                        Pad_1F8E[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonTextBlock*                      PageNameWidget;                                    // 0x8A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonNumericTextBlock*               AvailableSlotsWidget;                              // 0x8B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                      PageCompletionWidget;                              // 0x8B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UObject>                AssociatedPageOrCategory;                          // 0x8C0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsExpanded;                                       // 0x8C8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1F8F[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortCollectionBookPageListWidget* GetDefaultObj();

	void SetupAsPage(class UFortCollectionBookPage* Page);
	void SetupAsCategory(class UFortCollectionBookCategory* Category);
	void OnSlotItemComplete(class UFortAccountItem* SlottedItem, class FName SlotId);
	void OnPageDetailsUpdated(int32 NumAvailableSlots, enum class EFortCollectionBookState State);
	void OnExpansionChanged(bool bExpanded);
};

// 0xC0 (0x4A0 - 0x3E0)
// Class FortniteUI.FortCollectionBookPrimaryPanel
class UFortCollectionBookPrimaryPanel : public UCommonActivatablePanel
{
public:
	UMulticastDelegateProperty_                  OnCollectionBookPageSelectedDelegate;              // 0x3E0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnCollectionBookPageClickedDelegate;               // 0x3F0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnCollectionBookSectionClickedDelegate;            // 0x400(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FDataTableRowHandle                   BackActionRowHandle;                               // 0x410(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   SummonInfoPanelActionRowHandle;                    // 0x420(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	class UFortCollectionBookOverviewWidget*     OverviewWidget;                                    // 0x430(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTileView*                       SectionTileViewWidget;                             // 0x438(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ECollectionBookPrimaryNavTarget   CurrentNavTarget;                                  // 0x440(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1F90[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortCollectionBookSection*            LastClickedSection;                                // 0x448(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1F91[0x50];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortCollectionBookPrimaryPanel* GetDefaultObj();

	void OnSummonInfoPanelExecuted(bool* bPassThrough);
	void OnInputMethodChanged(bool bUsingGamepad);
	void OnCollectionBookSectionClicked(class UFortCollectionBookSection* ClickedSection);
	void OnCollectionBookPageSelected(class UFortCollectionBookPage* SelectedPage);
	void OnCollectionBookPageClicked(class UFortCollectionBookPage* ClickedPage);
	void OnBackActionExecuted(bool* bPassThrough);
	void HandleSectionTileClicked(class UObject* Item);
};

// 0x10 (0x248 - 0x238)
// Class FortniteUI.FortCollectionBookProgressionRewardsPreviewWidget
class UFortCollectionBookProgressionRewardsPreviewWidget : public UCommonUserWidget
{
public:
	class UFortCollectionBookProgressionRewardWidget* NextRewardWidget;                                  // 0x238(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortCollectionBookProgressionRewardWidget* NextMajorRewardWidget;                             // 0x240(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortCollectionBookProgressionRewardsPreviewWidget* GetDefaultObj();

};

// 0x58 (0x290 - 0x238)
// Class FortniteUI.FortCollectionBookProgressWidget
class UFortCollectionBookProgressWidget : public UCommonUserWidget
{
public:
	int32                                        CachedXPLevel;                                     // 0x238(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        CachedXPCompletionPct;                             // 0x23C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSoftClassPtr<class UFortCollectionBookProgressionRewardsModalWidget> RewardDetailsModalWidgetClass;                     // 0x240(0x20)(Edit, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortCollectionBookProgressionRewardsPreviewWidget* ProgressionRewardsPreviewWidget;                   // 0x260(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                      XPTextWidget;                                      // 0x268(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonNumericTextBlock*               LevelTextWidget;                                   // 0x270(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButton*                         DetailsButtonWidget;                               // 0x278(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortCollectionBookPageDetailsWidget*  PageDetailsWidget;                                 // 0x280(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortCollectionBookProgressionRewardsModalWidget* DetailsModalWidget;                                // 0x288(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortCollectionBookProgressWidget* GetDefaultObj();

	void OnSlottedItemOperationComplete(class UFortAccountItem* ItemSlotted, class FName SlotId);
	void OnDetailsButtonClicked(class UCommonButton* ClickedButton);
	void OnCollectionBookPreviewXPChange(float PreviewCompletionPct);
	void OnCollectionBookPageSelected(class UFortCollectionBookPage* SelectedPage);
	void OnCollectionBookLevelProgressionChanged(float NewCompletionPct);
	void OnCollectionBookLevelChanged(int32 NewLevel);
	void HandleDetailsModalWidgetDeactivated(class UCommonActivatablePanel* DeactivatedPanel);
};

// 0x18 (0x250 - 0x238)
// Class FortniteUI.FortCollectionBookRecycleSlotResultsWidget
class UFortCollectionBookRecycleSlotResultsWidget : public UCommonUserWidget
{
public:
	class UPanelWidget*                          RecycleResultsWidget;                              // 0x238(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EFortItemCardSize                 ItemCardSize;                                      // 0x240(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1F92[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortAccountItem*                      ItemToRecycle;                                     // 0x248(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortCollectionBookRecycleSlotResultsWidget* GetDefaultObj();

	void SetCurrentItemToRecycle(class UFortAccountItem* InItemToRecycle);
};

// 0x80 (0x2B8 - 0x238)
// Class FortniteUI.FortCollectionBookRewardCardWidget
class UFortCollectionBookRewardCardWidget : public UCommonUserWidget
{
public:
	UMulticastDelegateProperty_                  OnDisplayedItemChangedEvent;                       // 0x238(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UFortMultiSizeItemCard*                ItemCardWidget;                                    // 0x248(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidget*                               MultiItemRewardOverlay;                            // 0x250(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidget*                               ChoiceRewardOverlay;                               // 0x258(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        UpdateCardInterval;                                // 0x260(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EFortItemCardSize                 ItemCardSize;                                      // 0x264(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bDisplayAsRewardCard;                              // 0x265(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1F93[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortRewardInfo                       RepresentedRewards;                                // 0x268(0x30)(Transient, Protected, NativeAccessSpecifierProtected)
	TArray<class UFortItem*>                     DummyItems;                                        // 0x298(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	struct FTimerHandle                          UpdateCardTimer;                                   // 0x2A8(0x8)(Transient, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1F94[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortCollectionBookRewardCardWidget* GetDefaultObj();

	void SetRewards(struct FFortRewardInfo& Rewards);
	void OnDisplayedItemChangedEvent__DelegateSignature(class UFortItem* DisplayedItem);
	bool HasRewards();
	void ClearRewards();
};

// 0x150 (0x530 - 0x3E0)
// Class FortniteUI.FortCollectionBookSectionPanel
class UFortCollectionBookSectionPanel : public UCommonActivatablePanel
{
public:
	UMulticastDelegateProperty_                  OnSectionCloseRequest;                             // 0x3E0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnPreviewXPChangeEvent;                            // 0x3F0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UCommonTextBlock*                      SectionNameTextWidget;                             // 0x400(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortCollectionBookSlotView*           SlotViewWidget;                                    // 0x408(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortCollectionBookPicker*             SlotItemPicker;                                    // 0x410(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidget*                               ContextOverlayWidget;                              // 0x418(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            ContextTextWidget;                                 // 0x420(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortCollectionBookSectionCompletionRewardWidget* SectionRewardWidget;                               // 0x428(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidget*                               ItemAcquisitionSourceContainerWidget;              // 0x430(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                      ItemAcquisitionSourceDescWidget;                   // 0x438(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                      ItemAcquisitionSourceDesc2Widget;                  // 0x440(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   BackActionRowHandle;                               // 0x448(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   CloseActionRowHandle;                              // 0x458(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   SlotItemActionRowHandle;                           // 0x468(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   InspectItemActionRowHandle;                        // 0x478(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   InspectCollectionBookItemActionRowHandle;          // 0x488(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   InspectPreviewItemActionRowHandle;                 // 0x498(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   OpenPickerActionRowHandle;                         // 0x4A8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   LogAllowedItemsActionRowHandle;                    // 0x4B8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	enum class ECollectionBookSectionNavTarget   CurrentNavTarget;                                  // 0x4C8(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1F97[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortCollectionBookSection*            AssociatedSection;                                 // 0x4D0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bHasSummonedInspectPanel;                          // 0x4D8(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1F98[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortDialogExternalLatentActionHandle SlotConfirmationDialogLatentHandle;                // 0x4DC(0x4)(Transient, NoDestructor, Protected, NativeAccessSpecifierProtected)
	UMulticastDelegateProperty_                  OnShowItemDetailEvent;                             // 0x4E0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	UMulticastDelegateProperty_                  OnSlotItemConfirmEvent;                            // 0x4F0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	UMulticastDelegateProperty_                  OnInspectItemEvent;                                // 0x500(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1F99[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortCollectionBookSectionPanel* GetDefaultObj();

	void OnSlottedItemOperationComplete(class UFortAccountItem* SlottedItem, class FName SlotId);
	void OnSlotPickerItemSelected(class UFortItem* SelectedItem);
	void OnSlotPickerItemHovered(class UFortItem* HoveredItem);
	void OnSlotItemConfirmationCompleted(class UFortItem* SelectedItem, class FName SlotId, const struct FFortDialogExternalLatentActionHandle& LatentActionHandle);
	void OnSlotItemComplete(class UFortAccountItem* SlottedItem, class FName SlotId);
	void OnSlotItemActionExecuted(bool* bPassThrough);
	void OnSlotButtonSelected(class UFortCollectionBookSlotButton* SlotButton);
	void OnSlotButtonCommitted(class UFortCollectionBookSlotButton* SlotButton);
	void OnSectionChanged(class UFortCollectionBookSection* Section);
	void OnOpenPickerActionExecuted(bool* bPassThrough);
	void OnLogAllowedItemsActionExecuted(bool* bPassThrough);
	void OnItemInspectAction__DelegateSignature(class UFortItem* SelectedItem, bool EnableItemActions, bool IsPlaceholderItem);
	void OnItemAction__DelegateSignature(class UFortItem* SelectedItem);
	void OnInspectActionExecuted(bool* bPassThrough);
	void OnInputMethodChanged(bool bUsingGamepad);
	void OnBackActionExecuted(bool* bPassThrough);
};

// 0x128 (0x360 - 0x238)
// Class FortniteUI.FortCollectionBookSlotWidget
class UFortCollectionBookSlotWidget : public UCommonUserWidget
{
public:
	uint8                                        Pad_1F9A[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EFortItemCardSize                 ItemCardSize;                                      // 0x248(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsRewardCard;                                     // 0x249(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1F9B[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortMultiSizeItemCard*                ItemCardWidget;                                    // 0x250(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidget*                               UnslottedOverlayWidget;                            // 0x258(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidget*                               ReadyToSlotOverlayWidget;                          // 0x260(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidget*                               UnslottedButReadyOverlayWidget;                    // 0x268(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  SlotRowName;                                       // 0x270(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FText                                  ItemAvailableToSlotText;                           // 0x278(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	class FText                                  NoItemsAvailableToSlotText;                        // 0x290(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	class FText                                  HigherQualityItemsAvailableToSlotAndUpgradeAvailableText; // 0x2A8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	class FText                                  HigherQualityItemsAvailableToSlotAndEvolveAvailableText; // 0x2C0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	class FText                                  HigherQualityItemsAvailableToSlotText;             // 0x2D8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	class FText                                  ItemInSlotFullyUpgradedText;                       // 0x2F0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	class FText                                  ItemInSlotCanBeUpgradedText;                       // 0x308(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	class FText                                  ItemInSlotCanBeEvolvedText;                        // 0x320(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	class UFortItem*                             SlottedItemRepresentation;                         // 0x338(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1F9C[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortCollectionBookSlotWidget* GetDefaultObj();

	void OnSlottedItemOperationComplete(class UFortAccountItem* ItemSlotted, class FName SlotId);
	void OnItemDestroyed();
	void FortCollectionBookSlottedItemUpdatedDelegate__DelegateSignature();
};

// 0x70 (0x910 - 0x8A0)
// Class FortniteUI.FortCollectionBookSectionTileWidget
class UFortCollectionBookSectionTileWidget : public UCommonButton
{
public:
	uint8                                        Pad_1F9E[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftClassPtr<class UFortCollectionBookSlotWidget> SlotWidgetClass;                                   // 0x8A8(0x20)(Edit, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FMargin                               SlotWidgetPadding;                                 // 0x8C8(0x10)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	enum class EHorizontalAlignment              SlotWidgetHorizontalAlignment;                     // 0x8D8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EVerticalAlignment                SlotWidgetVerticalAlignment;                       // 0x8D9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1F9F[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MaxNumSlotsSupported;                              // 0x8DC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UHorizontalBox*                        SlotBoxWidget;                                     // 0x8E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                      SectionNameWidget;                                 // 0x8E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortCollectionBookGenericRewardWidget* SectionRewardWidget;                               // 0x8F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortCollectionBookSection*            AssociatedSection;                                 // 0x8F8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UFortCollectionBookSlotWidget*> SlotWidgets;                                       // 0x900(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortCollectionBookSectionTileWidget* GetDefaultObj();

	void OnSectionSlotUpdate(int32 NumFilledSlots, int32 NumSlots, enum class EFortCollectionBookState SectionState);
	void OnItemSlotted(class UFortAccountItem* ItemSlotted, class FName SlotId);
};

// 0x8 (0x8A8 - 0x8A0)
// Class FortniteUI.FortCollectionBookSlotButton
class UFortCollectionBookSlotButton : public UCommonButton
{
public:
	class UFortCollectionBookSlotWidget*         CollectionBookSlotWidget;                          // 0x8A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortCollectionBookSlotButton* GetDefaultObj();

	void OnSlottedItemUpdated();
};

// 0x0 (0x238 - 0x238)
// Class FortniteUI.FortCollectionBookSlotDetailsWidget
class UFortCollectionBookSlotDetailsWidget : public UCommonUserWidget
{
public:

	static class UClass* StaticClass();
	static class UFortCollectionBookSlotDetailsWidget* GetDefaultObj();

};

// 0x138 (0x370 - 0x238)
// Class FortniteUI.FortCollectionBookSlotView
class UFortCollectionBookSlotView : public UCommonUserWidget
{
public:
	TSoftClassPtr<class UFortCollectionBookSlotButton> CollectionBookButtonClass;                         // 0x238(0x20)(Edit, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UHorizontalBox*                        CollectionBookButtonBox;                           // 0x258(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortCommittableButtonGroup*           CollectionBookSlotButtonGroup;                     // 0x260(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UFortCollectionBookSlotButton*> CollectionBookSlotButtons;                         // 0x268(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	class UFortCollectionBookSection*            AssociatedSection;                                 // 0x278(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1FA3[0xE0];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bCommitSelectedItemsOnClick;                       // 0x360(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1FA4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        PreviousSelectedButtonIdx;                         // 0x364(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        CurrentSelectedButtonIdx;                          // 0x368(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1FA5[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortCollectionBookSlotView* GetDefaultObj();

	void OnSlotButtonCommitted(class UCommonButton* CommittedButton, int32 ButtonIdx);
	void OnSlotButtonClicked(class UCommonButton* ClickedButton, int32 ButtonIdx);
	void OnSelectedSlotButtonChanged(class UCommonButton* SelectedButton, int32 ButtonIdx);
};

// 0x10 (0xA8 - 0x98)
// Class FortniteUI.FortCommittableButtonGroup
class UFortCommittableButtonGroup : public UCommonButtonGroup
{
public:
	UMulticastDelegateProperty_                  OnButtonCommitted;                                 // 0x98(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFortCommittableButtonGroup* GetDefaultObj();

};

// 0x10 (0x248 - 0x238)
// Class FortniteUI.FortDailyRewardsItem
class UFortDailyRewardsItem : public UCommonUserWidget
{
public:
	struct FFortDailyRewardsItemData             ItemData;                                          // 0x238(0x10)(BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, ExposeOnSpawn, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortDailyRewardsItem* GetDefaultObj();

};

// 0x98 (0x2D0 - 0x238)
// Class FortniteUI.FortDailyRewardsSchedule
class UFortDailyRewardsSchedule : public UCommonUserWidget
{
public:
	struct FFortDailyRewardsScheduleData         ScheduleData;                                      // 0x238(0x98)(BlueprintVisible, BlueprintReadOnly, ExposeOnSpawn, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFortDailyRewardsSchedule* GetDefaultObj();

};

// 0x10 (0x3F0 - 0x3E0)
// Class FortniteUI.FortDailyRewards
class UFortDailyRewards : public UCommonActivatablePanel
{
public:
	uint8                                        Pad_1FA7[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortDailyRewards* GetDefaultObj();

	bool TryGetDailyRewardsData(struct FFortDailyRewardsData* OutDailyRewardsData, int32 ItemCardsPerSchedule, int32 MinEpicRewards);
	void SetupDailyRewards();
	void FinishedClaiming();
	void ClaimResultReceived(TArray<struct FFortItemInstanceQuantityPair>& Loot);
};

// 0x60 (0x440 - 0x3E0)
// Class FortniteUI.FortExpeditionBuildSquadWidget
class UFortExpeditionBuildSquadWidget : public UCommonActivatablePanel
{
public:
	TWeakObjectPtr<class UFortExpeditionItem>    Item;                                              // 0x3E0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  CurrentSquadId;                                    // 0x3E8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortSquadSlotsView*                   ExpeditionSquadSlotsView;                          // 0x3F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortSquadSlotDetailsPanel*            ExpeditionSquadSlotDetails;                        // 0x3F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortSquadSlotItemPicker*              ExpeditionSquadSlotPicker;                         // 0x400(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortItemViewContext_ExpeditionSquadSlotsView* ItemViewContext_ExpeditionSlotsView;               // 0x408(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortItemViewContext_ExpeditionSquadSlotItemPicker* ItemViewContext_ExpeditionSlotItemPicker;          // 0x410(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1FAB[0x28];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortExpeditionBuildSquadWidget* GetDefaultObj();

	bool StartExpedition();
	void SetData(class UFortExpeditionItem* InItem);
	void SetCurrentSquadId(class FName SquadId);
	void OnStartExpeditionCompleted();
	void OnRequestClosePicker();
	void OnRefreshBuildSquadWidget();
	bool IsSquadSlotLocked(int32 SlotIndex);
	bool IsExpeditionValidToStart();
	void HandleStartExpeditionCompleted(class UFortExpeditionItem* Expedition, bool bSucceeded);
	void HandleDifferentSquadSlotSelected(int32 SquadSlotIndex);
	void ClearTemporaryExpeditionSquadState(bool bPreviewOnly);
};

// 0x40 (0x278 - 0x238)
// Class FortniteUI.FortExpeditionDetailsWidget
class UFortExpeditionDetailsWidget : public UCommonUserWidget
{
public:
	TWeakObjectPtr<class UFortExpeditionItem>    Item;                                              // 0x238(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortSquadSlotsView*                   ExpeditionSquadSlotsView;                          // 0x240(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  CurrentSquadId;                                    // 0x248(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortItemViewContext_ExpeditionSquadSlotsView* ItemViewContext_ExpeditionSlotsView;               // 0x250(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1FAD[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortExpeditionDetailsWidget* GetDefaultObj();

	void SetData(class UFortExpeditionItem* InItem);
	void SetCurrentSquadId(class FName SquadId);
	void OnAbandonExpeditionCompleted();
	void HandleAbandonExpeditionCompleted(class UFortExpeditionItem* Expedition, bool bSuccess);
	void AbandonExpedition();
};

// 0x10 (0x248 - 0x238)
// Class FortniteUI.FortExpeditionExpiresWidget
class UFortExpeditionExpiresWidget : public UCommonUserWidget
{
public:
	TWeakObjectPtr<class UFortExpeditionItem>    Item;                                              // 0x238(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1FAE[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortExpeditionExpiresWidget* GetDefaultObj();

	void SetData(class UFortExpeditionItem* InItem);
	void OnExpeditionExpirationUpdated();
};

// 0x18 (0x8B8 - 0x8A0)
// Class FortniteUI.FortExpeditionListItemWidget
class UFortExpeditionListItemWidget : public UCommonButton
{
public:
	uint8                                        Pad_1FAF[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TWeakObjectPtr<class UFortExpeditionItem>    Item;                                              // 0x8A8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1FB0[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortExpeditionListItemWidget* GetDefaultObj();

	void OnItemChanged();
};

// 0x38 (0x270 - 0x238)
// Class FortniteUI.FortExpeditionListViewWidget
class UFortExpeditionListViewWidget : public UCommonUserWidget
{
public:
	UMulticastDelegateProperty_                  OnExpeditionSelected;                              // 0x238(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnExpeditionListViewRefreshed;                     // 0x248(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UCommonListView*                       ExpeditionListView;                                // 0x258(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  CurrentTabNameId;                                  // 0x260(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EFortExpeditionListSort           SortType;                                          // 0x268(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1FB2[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortExpeditionListViewWidget* GetDefaultObj();

	void SetExpeditionListSortType(enum class EFortExpeditionListSort InSortType);
	void HandleListItemSelected(class UObject* Item, bool bSelected);
	class FText GetExpeditionListSortName();
};

// 0x80 (0x460 - 0x3E0)
// Class FortniteUI.FortExpeditionMasterWidget
class UFortExpeditionMasterWidget : public UCommonActivatablePanel
{
public:
	uint8                                        Pad_1FB3[0x80];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortExpeditionMasterWidget* GetDefaultObj();

};

// 0x28 (0x260 - 0x238)
// Class FortniteUI.FortExpeditionOverviewWidget
class UFortExpeditionOverviewWidget : public UCommonUserWidget
{
public:
	TSubclassOf<class UCommonButton>             TabButtonType;                                     // 0x238(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FExpeditionTabInfo>            TabListRegistrationInfo;                           // 0x240(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class UFortTabListWidgetBase*                ExpeditionTabList;                                 // 0x250(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortExpeditionListViewWidget*         ExpeditionListView;                                // 0x258(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortExpeditionOverviewWidget* GetDefaultObj();

	void UpdateExpeditionTabs();
	void OnExpeditionTabSelected(class FName& TabNameID);
	void OnExpeditionOverviewRefresh();
	void HandleExpeditionTabSelected(class FName TabNameID);
	void HandleExpeditionTabButtonCreated(class FName TabNameID, class UCommonButton* TabButton);
};

// 0x10 (0x3F0 - 0x3E0)
// Class FortniteUI.FortExpeditionPickVehicleWidget
class UFortExpeditionPickVehicleWidget : public UCommonActivatablePanel
{
public:
	TWeakObjectPtr<class UFortExpeditionItem>    Item;                                              // 0x3E0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1FB4[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortExpeditionPickVehicleWidget* GetDefaultObj();

	void SetData(class UFortExpeditionItem* InItem);
};

// 0x10 (0x248 - 0x238)
// Class FortniteUI.FortExpeditionReturnsWidget
class UFortExpeditionReturnsWidget : public UCommonUserWidget
{
public:
	TWeakObjectPtr<class UFortExpeditionItem>    Item;                                              // 0x238(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1FB5[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortExpeditionReturnsWidget* GetDefaultObj();

	void SetData(class UFortExpeditionItem* InItem);
	void OnExpeditionInProgressUpdated();
};

// 0x28 (0x260 - 0x238)
// Class FortniteUI.FortExpeditionRewardsWidget
class UFortExpeditionRewardsWidget : public UCommonUserWidget
{
public:
	UMulticastDelegateProperty_                  OnAllExpeditionsCollected;                         // 0x238(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UCommonTileView*                       RewardsTileView;                                   // 0x248(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bPendingCollection;                                // 0x250(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1FB9[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortExpeditionRewardsWidget* GetDefaultObj();

	void RefreshRewardsUI(class UFortExpeditionItem* Expedition, bool bExpeditionSucceeded, TArray<struct FFortItemInstanceQuantityPair>& Rewards);
	void ProcessNextReward();
	void HandleCollectionExpeditionCompleted(bool bMcpSuccess, class UFortExpeditionItem* Expedition, bool bExpeditionSuccess, TArray<struct FFortItemInstanceQuantityPair>& Rewards);
};

// 0x40 (0x278 - 0x238)
// Class FortniteUI.FortExpeditionSummaryWidget
class UFortExpeditionSummaryWidget : public UCommonUserWidget
{
public:
	int32                                        AvailableExpeditions;                              // 0x238(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        CompletedExpeditions;                              // 0x23C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        LandVehicles;                                      // 0x240(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        LandVehiclesAvailable;                             // 0x244(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        AirVehicles;                                       // 0x248(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        AirVehiclesAvailable;                              // 0x24C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        SeaVehicles;                                       // 0x250(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        SeaVehiclesAvailable;                              // 0x254(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UFortExpeditionItem*>           InProgressExpeditions;                             // 0x258(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1FBA[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortExpeditionSummaryWidget* GetDefaultObj();

	void OnRefreshSummaryWidget();
};

// 0x0 (0x28 - 0x28)
// Class FortniteUI.FortExpeditionUtilities
class UFortExpeditionUtilities : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UFortExpeditionUtilities* GetDefaultObj();

	int32 TotalUnseenExpeditionsForTab(class UWidget* Widget, class FName& TabNameID);
	bool IsSquadOnExpedition(class UWidget* Widget, class FName& SquadId);
	struct FGameplayTag GetVehicleTagRequiredForExpedition(class UFortExpeditionItem* Expedition);
	bool GetVehicleTagFromSquadId(class FName& SquadId, struct FGameplayTag* OutFoundVehicleTag);
	void GetTotalExpeditionVehiclesAvailable(class UWidget* Widget, class AFortPlayerController* FortPC, int32* OutLandVehicles, int32* OutLandVehiclesAvailable, int32* OutSeaVehicles, int32* OutSeaVehiclesAvailable, int32* OutAirVehicles, int32* OutAirVehiclesAvailable);
	void GetMatchedCriteriaTags(class UFortExpeditionItem* Expedition, TArray<class UFortItem*>& SlottedItems, TArray<struct FGameplayTag>* OutMatchedCriteria);
	bool GetExpeditionSquadsThatMatchRequirements(struct FGameplayTagContainer& RequirementTags, class AFortPlayerController* FortPC, TArray<class FName>* OutExpeditionSquadIds);
	float GetExpeditionSquadPower(class AFortPlayerController* FortPC, class FName& SquadId);
	void GetAllExpeditionSquadIds(TArray<class FName>* OutExpeditionSquadIds);
	float CalculateTotalPower(class AFortPlayerController* FortPC, class UFortExpeditionItem* Expedition, class FName& SquadId, TArray<class UFortItem*>& SlottedItems);
	void CalculateGlobalAndItemRatingModValuesBP(class UFortExpeditionItem* Expedition, TArray<class UFortItem*>& SlottedItems, float* GlobalPowerMod, TArray<float>* SlottedItemMods);
	float CalculateExpeditionPercentageChanceForSuccess(class UFortExpeditionItem* Expedition, float TotalPower);
	bool AreExpeditionsUnlocked(class UObject* WorldContextObject, struct FUniqueNetIdRepl& UniqueId);
	bool AreAnyExpeditionsComplete(class UWidget* Widget);
};

// 0x10 (0x8B0 - 0x8A0)
// Class FortniteUI.FortExpeditionVehicleTileItemWidget
class UFortExpeditionVehicleTileItemWidget : public UCommonButton
{
public:
	uint8                                        Pad_1FC4[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TWeakObjectPtr<class UObject>                SquadId;                                           // 0x8A8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortExpeditionVehicleTileItemWidget* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class FortniteUI.FortSkillTreeCanvasEntityInterface
class IFortSkillTreeCanvasEntityInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IFortSkillTreeCanvasEntityInterface* GetDefaultObj();

	void PlayOutroTransitionBP(enum class EFortAnimSpeed AnimSpeed);
	void PlayIntroTransitionBP(enum class EFortAnimSpeed AnimSpeed);
};

// 0x70 (0x98 - 0x28)
// Class FortniteUI.FortSkillTreeNodeDisplayDataRegistry
class UFortSkillTreeNodeDisplayDataRegistry : public UDataAsset
{
public:
	TMap<class FName, struct FFortSkillTreeNodeDisplayData> SkillTreeNodeStyleIdToDisplayDataMap;              // 0x28(0x50)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FC5[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortSkillTreeNodeDisplayDataRegistry* GetDefaultObj();

};

// 0x28 (0x8C8 - 0x8A0)
// Class FortniteUI.FortSkillTreeCanvasNode
class UFortSkillTreeCanvasNode : public UCommonButton
{
public:
	uint8                                        Pad_1FC9[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  PageId;                                            // 0x8A8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  NodeID;                                            // 0x8B0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShouldHideConnectorsToDependents;                  // 0x8B8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FCA[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortSkillTreeCanvasNode* GetDefaultObj();

	bool TryGetStaticSkillTreeNodeData(struct FHomebaseNode* OutNodeData);
	bool TryGetSkillTreeNodeState(struct FHomebaseNodeState* OutNodeState);
	bool TryGetNodeDisplayData(struct FFortSkillTreeNodeDisplayData* OutDisplayData);
	void HandleSkillTreeNodeStateChanged();
};

// 0x58 (0x290 - 0x238)
// Class FortniteUI.FortKeybindWidget
class UFortKeybindWidget : public UCommonUserWidget
{
public:
	class FName                                  BoundAction;                                       // 0x238(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bForcedHoldKeybind;                                // 0x240(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortKeybindForcedHoldStatus      ForcedHoldKeybindStatus;                           // 0x241(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsHoldKeybind;                                    // 0x242(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bShowKeybindBorder;                                // 0x243(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bShowTimeCountDown;                                // 0x244(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1FCF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  BoundKey;                                          // 0x248(0x18)(BlueprintVisible, BlueprintReadOnly, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                HoldKeybindImage;                                  // 0x260(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                      TextCountdown;                                     // 0x268(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetSwitcher*                       KeyCountdownSwitcher;                              // 0x270(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  PercentageMaterialParameterName;                   // 0x278(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInstanceDynamic*              ProgressPercentageMID;                             // 0x280(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1FD0[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortKeybindWidget* GetDefaultObj();

	void UpdateKeybindWidget();
	void Update();
	void StopHoldProgress(class FName HoldActionName, bool bCompletedSuccessfully);
	void StartHoldProgress(class FName HoldActionName, float HoldDuration);
	void SetShowProgressCountDown(bool bShow);
	void SetForcedHoldKeybindStatus(enum class EFortKeybindForcedHoldStatus InForcedHoldKeybindStatus);
	void SetForcedHoldKeybind(bool InForcedHoldKeybind);
	void SetBoundAction(class FName NewBoundAction);
	bool IsHoldKeybind();
	bool GetBrushForKey(enum class EFortBrushSize BrushSize, struct FSlateBrush* Brush);
};

// 0x0 (0x3E0 - 0x3E0)
// Class FortniteUI.FortItemInspectionScreen
class UFortItemInspectionScreen : public UCommonActivatablePanel
{
public:

	static class UClass* StaticClass();
	static class UFortItemInspectionScreen* GetDefaultObj();

	void OpenItemInspect(class UFortItem* ItemToInspect, enum class EFortItemInspectionMode Mode, bool ShouldAllowUpgrading, bool ShouldAllowEvolution, bool ShouldAllowFavorite, bool IsTemporaryItem);
};

// 0xD0 (0x4B0 - 0x3E0)
// Class FortniteUI.FortSkillTreeViewer
class UFortSkillTreeViewer : public UCommonActivatablePanel
{
public:
	UMulticastDelegateProperty_                  OnNodeSelectionChangedEvent;                       // 0x3E0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FMargin                               PageDisplayAreaMargins;                            // 0x3F0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	class UFortSkillTreePageWidget*              CurrentPageWidget;                                 // 0x400(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UOverlay*                              PageHostOverlay;                                   // 0x408(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   BackOutInputAction;                                // 0x410(0x10)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	TMap<class FName, class UFortSkillTreePageWidget*> PageIdToWidgetCache;                               // 0x420(0x50)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	float                                        ZoomLevel;                                         // 0x470(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1FD9[0x3C];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortSkillTreeViewer* GetDefaultObj();

	bool TryGetSkillTreePageStaticData(struct FHomebaseNodePage* OutData);
	void ShowPage(class FName& SkillTreePageId, enum class EFortAnimSpeed TransitionSpeed);
	void OnNodeSelectionChanged__DelegateSignature();
	void NavigateTo(class FName& SkillTreeNodeId, bool ShouldSelectNode, enum class EFortAnimSpeed TransitionSpeed);
	void HandleViewParametersChangedBP();
	void HandleNodeSelectionChangedBP();
	void HandleDifferentPageShown();
	void HandleBackOutAction(bool* PassThrough);
	void GetViewParameters(struct FVector2D* OutPanOffset, float* OutZoomLevel);
	class FName GetSelectedNodeId();
	int32 GetPageTotalNodes(class FName& SkillTreePageId);
	bool GetPageLocked(class FName& SkillTreePageId);
	int32 GetPageAquiredNodes(class FName& SkillTreePageId);
	void GetCurrenciesNeededForPage(class FName& SkillTreePageId, TArray<class UFortItemDefinition*>* OutCurrencies);
	void DrillDownToSubPage(class FName& DrillDownSkillTreeNodeId, enum class EFortAnimSpeed TransitionSpeed);
	bool CanBackOutOfSubPage();
	void BackOutOfSubPage(enum class EFortAnimSpeed TransitionSpeed);
};

// 0x2520 (0x2548 - 0x28)
// Class FortniteUI.FortUIDataConfiguration
class UFortUIDataConfiguration : public UPrimaryDataAsset
{
public:
	class FString                                DefaultUIDataConfigurationPath;                    // 0x28(0x10)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                MobileUIDataConfigurationPath;                     // 0x38(0x10)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UFortUIStateWidget_NUI>  StateWidgetClasses[0xA];                           // 0x48(0x140)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TSoftClassPtr<class UUserWidget>>     CachedWidgetClasses;                               // 0x188(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TMap<enum class EFortBrushSize, int32>       StandardImageBrushSizes;                           // 0x198(0x50)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFortMultiSizeBrushAsset> PowerRatingIconMultiSizeBrush;                     // 0x1E8(0x20)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          PowerRatingEnchantedPositiveColorOverride;         // 0x208(0x10)(Edit, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          PowerRatingEnchantedNegativeColorOverride;         // 0x218(0x10)(Edit, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFortMultiSizeBrushAsset> FilledTierPipMultiSizeBrush;                       // 0x228(0x20)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFortMultiSizeBrushAsset> UnfilledTierPipMultiSizeBrush;                     // 0x248(0x20)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFortMultiSizeBrushAsset> PreviewingTierPipMultiSizeBrush;                   // 0x268(0x20)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFortMultiSizeBrushAsset> UpgradeArrowMultiSizeBrush;                        // 0x288(0x20)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFortMultiSizeBrushAsset> ComparisonUpArrowMultiSizeBrush;                   // 0x2A8(0x20)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          BetterComparisonResultColor;                       // 0x2C8(0x10)(Edit, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          WorseComparisonResultColor;                        // 0x2D8(0x10)(Edit, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFortMultiSizeBrushAsset> InventoryOverflowIndicatorMultiSizeBrush;          // 0x2E8(0x20)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFortMultiSizeBrushAsset> TrackedSchematicIndicatorMultiSizeBrush;           // 0x308(0x20)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFortMultiSizeBrushAsset> FavoritedItemIndicatorMultiSizeBrush;              // 0x328(0x20)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableSocialFeatures;                             // 0x348(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableChat;                                       // 0x349(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnablePartyFeatures;                              // 0x34A(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FDA[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UFortMultiSizeBrushAsset> UnlockedSquadSlotBorderMultiSizeBrush;             // 0x350(0x20)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFortMultiSizeBrushAsset> LockedSquadSlotBorderMultiSizeBrush;               // 0x370(0x20)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFortMultiSizeBrushAsset> ReadOnlySquadSlotBorderMultiSizeBrush;             // 0x390(0x20)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFortMultiSizeBrushAsset> DefenderIconMultiSizeBrush;                        // 0x3B0(0x20)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFortMultiSizeBrushAsset> AssaultDefenderIconMultiSizeBrush;                 // 0x3D0(0x20)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFortMultiSizeBrushAsset> PistolDefenderIconMultiSizeBrush;                  // 0x3F0(0x20)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFortMultiSizeBrushAsset> MeleeDefenderIconMultiSizeBrush;                   // 0x410(0x20)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFortMultiSizeBrushAsset> SniperDefenderIconMultiSizeBrush;                  // 0x430(0x20)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFortMultiSizeBrushAsset> ShotgunDefenderIconMultiSizeBrush;                 // 0x450(0x20)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFortMultiSizeBrushAsset> LeadSurvivorIconMultiSizeBrush;                    // 0x470(0x20)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFortMultiSizeBrushAsset> SurvivorIconMultiSizeBrush;                        // 0x490(0x20)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UFortKeybindWidget>      KeybindWidgetClass;                                // 0x4B0(0x20)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UUserWidget>             HiddenCursorWidget;                                // 0x4D0(0x20)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UUserWidget>             VirtualCursorWidget;                               // 0x4F0(0x20)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortReturnToFrontendBehavior     ReturnToFrontendBehavior;                          // 0x510(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FDB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SkillTreeMinimumZoomLevel;                         // 0x514(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SkillTreeMaximumZoomLevel;                         // 0x518(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SkillTreeZoomLevelIncrement;                       // 0x51C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SkillTreeZoomLevelIncrementController;             // 0x520(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SkillTreeZoomLevelIncrementMobile;                 // 0x524(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortSkillTreeCanvasStyle             SkillTreeCanvasStyle;                              // 0x528(0x34)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FDC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftClassPtr<class UFortSkillTreeCanvasNode> DefaultSkillTreeNodeWidgetType;                    // 0x560(0x20)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<enum class EFortHomebaseNodeDisplayType, TSoftClassPtr<class UFortSkillTreeCanvasNode>> SkillTreeNodeWidgetTypeMap;                        // 0x580(0x50)(Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TMap<enum class EFortBrushSize, TSubclassOf<class UCommonTextStyle>> ItemCardPowerRatingTextStylesByBrushSize;          // 0x5D0(0x50)(Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TMap<enum class EFortBrushSize, TSubclassOf<class UCommonTextStyle>> ItemCardStackCountTextStylesByBrushSize;           // 0x620(0x50)(Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UMaterialInterface>     ItemCardLevelMeterMaterial;                        // 0x670(0x20)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UMaterialInterface>     ItemCardDurabilityMeterMaterial;                   // 0x690(0x20)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateBrush                           ItemCardBackgroundPlateBrush;                      // 0x6B0(0x90)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FSlateBrush                           ItemCardRarityGradientBrush;                       // 0x740(0x90)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FSlateBrush                           ItemCardDefenderPortraitBackgroundBrush;           // 0x7D0(0x90)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FSlateBrush                           ItemCardHeroPortraitBackgroundBrush;               // 0x860(0x90)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FSlateBrush                           ItemCardLeadSurvivorPortraitBackgroundBrush;       // 0x8F0(0x90)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FSlateBrush                           ItemCardSchematicBackgroundBrush;                  // 0x980(0x90)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFortMultiSizeBrushAsset> ItemCardRewardTraitsBackgroundMultiSizeBrush;      // 0xA10(0x20)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFortMultiSizeBrushAsset> ItemCardSchematicTraitsBackgroundMultiSizeBrush;   // 0xA30(0x20)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UFortItemManagementScreen> FrontendItemManagementScreenType;                  // 0xA50(0x20)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UFortItemInspectionScreen> FrontendItemInspectionScreenType;                  // 0xA70(0x20)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UFortSkillTreeViewer>    SkillTreeViewerScreenType;                         // 0xA90(0x20)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UFortSquadManagementScreenBase> HeroSquadManagementScreenType;                     // 0xAB0(0x20)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UFortSquadManagementScreenBase> SurvivorSquadManagementScreenType;                 // 0xAD0(0x20)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UFortSquadManagementScreenBase> DefenderSquadManagementScreenType;                 // 0xAF0(0x20)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UAthenaMatchReadyDesktopPopup> MatchReadyDesktopPopupWidgetType;                  // 0xB10(0x20)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UFortTabListWidgetBase>  MainTabSet;                                        // 0xB30(0x20)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLimitedToES2Features;                             // 0xB50(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FDD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FWeightedBlendables                   FrontEndFFPostProcessMaterials;                    // 0xB58(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	bool                                         bUseSpecificPinataWeapon;                          // 0xB68(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FDE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<enum class EFortItemCardSize, struct FVector2D> PersonnelAndSchematicCardSizes;                    // 0xB70(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TMap<enum class EFortItemCardSize, struct FVector2D> OtherItemCardSizes;                                // 0xBC0(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TMap<enum class EFortItemCardSize, TSoftObjectPtr<class UMaterialInterface>> PersonnelAndSchematicItemCardMaterial;             // 0xC10(0x50)(Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TMap<enum class EFortItemCardSize, TSoftObjectPtr<class UMaterialInterface>> InstanceItemCardMaterial;                          // 0xC60(0x50)(Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UMaterialInterface>     UniversalItemCardDetailAreaMaterial;               // 0xCB0(0x20)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFortMultiSizeBrushAsset> FavoriteBookmarkMultiSizeBrush;                    // 0xCD0(0x20)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FGameplayTag, TSoftObjectPtr<class UTexture2D>> DefenderSubtypeWeaponTextures;                     // 0xCF0(0x50)(Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UMaterialInterface>     UniversalItemCardDurabilityMeterMaterial;          // 0xD40(0x20)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UMaterialInterface>     UniversalItemCardLevelMeterMaterial;               // 0xD60(0x20)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UMaterialInterface>     UniversalItemCardTraitIconMaterial;                // 0xD80(0x20)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UMaterialInterface>     UniversalItemCardUnearnedTierIconMaterial;         // 0xDA0(0x20)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UMaterialInterface>     UniversalItemCardAvailableTierIconMaterial;        // 0xDC0(0x20)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UMaterialInterface>     UniversalItemCardEarnedTierIconMaterial;           // 0xDE0(0x20)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortItemCard_XL_PersonnelAndSchematics_Configuration ItemCardConfig_XL_PersonnelAndSchematics;          // 0xE00(0x3B0)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FFortItemCard_XL_ItemInstance_Configuration ItemCardConfig_XL_ItemInstance;                    // 0x11B0(0x298)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FFortItemCard_L_PersonnelAndSchematics_Configuration ItemCardConfig_L_PersonnelAndSchematics;           // 0x1448(0x340)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FFortItemCard_L_ItemInstance_Configuration ItemCardConfig_L_ItemInstance;                     // 0x1788(0x2B8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FFortItemCard_M_PersonnelAndSchematics_Configuration ItemCardConfig_M_PersonnelAndSchematics;           // 0x1A40(0x340)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FFortItemCard_M_ItemInstance_Configuration ItemCardConfig_M_ItemInstance;                     // 0x1D80(0x290)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FFortItemCard_S_PersonnelAndSchematics_Configuration ItemCardConfig_S_PersonnelAndSchematics;           // 0x2010(0x340)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FFortItemCard_S_ItemInstance_Configuration ItemCardConfig_S_ItemInstance;                     // 0x2350(0x1C0)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FFortItemCard_XS_PersonnelAndSchematics_Configuration ItemCardConfig_XS_PersonnelAndSchematics;          // 0x2510(0x34)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FFortItemCard_XS_ItemInstance_Configuration ItemCardConfig_XS_ItemInstance;                    // 0x2544(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FDF[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortUIDataConfiguration* GetDefaultObj();

	class UFortMultiSizeBrushAsset* GetDefenderSubtypeIconMultiSizeBrushByTag(const struct FGameplayTag& DefenderSubtypeTag);
};

// 0x220 (0x248 - 0x28)
// Class FortniteUI.FortFrontEndContext
class UFortFrontEndContext : public UBlueprintContextBase
{
public:
	uint8                                        Pad_1FFB[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnFrontEndCameraChanged;                           // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	UMulticastDelegateProperty_                  OnLobbyEmptyPlayerClicked;                         // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnLobbyPlayerGadgetsClicked;                       // 0x50(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnLobbyPlayerPadHovered;                           // 0x60(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnLobbyPlayerPadUnhovered;                         // 0x70(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnLobbyPlayerHovered;                              // 0x80(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnLobbyPlayerUnhovered;                            // 0x90(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnLobbyPlayerSelected;                             // 0xA0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnLobbyPlayerUnselected;                           // 0xB0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnTheaterPinClicked;                               // 0xC0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnSetPreviewedSceneTheater;                        // 0xD0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnTheaterSelected;                                 // 0xE0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnTheaterDataChanged;                              // 0xF0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnTheaterTileClicked;                              // 0x100(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnTheaterTileUnselected;                           // 0x110(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnRecruitHero;                                     // 0x120(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnPlayerLoggedIn;                                  // 0x130(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnPlayerLoggedOut;                                 // 0x140(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FFortFrontEndFeatureStruct            Features[0x9];                                     // 0x150(0xD8)(Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	struct FFortSavedModeLoadout                 CachedModeLoadout;                                 // 0x228(0x20)(Transient, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortFrontEndContext* GetDefaultObj();

	void ViewVaultItem(class UFortItem* ItemToView);
	void UpdateNewAccountItemBangCounts(class UFortInventoryContext* InventoryContext);
	bool TryGetAttributeInfo(struct FGameplayAttribute& GameplayAttribute, struct FFortAttributeInfo* OutAttribute);
	void SkipInitialBenchmark();
	bool ShouldShowLoginMessage();
	bool ShouldRunInitialBenchmark();
	void SetSelectedTheater(const class FString& TheaterId);
	void SetSeenLoginMessage();
	void SetPersonalHeroChoice(class UFortHero* Hero);
	void SetHeroChoice(int32 PartyMemberIndex, class UFortHero* Hero);
	void SetFrontEndCamera(enum class EFrontEndCamera NewState);
	void SendPlayQuestAnalytic(class UFortQuestItem* QuestItem);
	void SendFrontendEnteredEvent();
	bool SelectTileForQuest(class UFortQuestItem* QuestItem, float* OutCriticalMissionDifficultyOverrideMin, float* OutCriticalMissionDifficultyOverrideMax);
	void SelectGadgetForSlot(int32 Slot, class UFortItemDefinition* GadgetDefinition);
	void SelectDefaultTheaterTile();
	void SelectDefaultTheater();
	void RunBenchmarkAndApplyBestSettings();
	void PushContentWidget_Adv(class UWidget* Widget, bool bHideHeader, bool bHideFooter, bool bHideChatWidget);
	void PlayLevelUpEffect();
	void PlayEvolutionEffect();
	bool IsActiveTileMissionValid();
	class UClass* GetUITestingClass();
	bool GetTileMissionDetails(class AFortTheaterMapTile* Tile, struct FFortMissionDetails* MissionDetails);
	enum class EFortTheaterType GetTheaterType(const class FString& TheaterId);
	int32 GetTheaterRegionCount(const class FString& TheaterId);
	class FText GetTheaterName(const class FString& TheaterId);
	bool GetTheaterData(const class FString& TheaterId, struct FFortTheaterMapData* OutTheaterData);
	class FString GetSelectedTheaterId();
	bool GetSelectedTheaterData(struct FFortTheaterMapData* OutTheaterData);
	void GetSelectableGadgets(TArray<class UFortWorldItem*>* SelectableGadgets, TArray<class UFortWorldItem*>* LastSelectedGadgets);
	enum class EFortReturnToFrontendBehavior GetReturnToFrontendBehavior();
	class FText GetRequirementText(struct FFortRequirementsInfo& InRequirements);
	TArray<struct FGameDifficultyInfo> GetRecommendedTeamDifficulties();
	TArray<int32> GetRecommendedDifficultyIndexesInAvailableDifficulties(bool bIncludeMissionAlertTiles);
	void GetOutpostStructureUpgradeCost(int32 TheaterSlot, int32 UpgradeLevel, class UFortOutpostItemDefinition* OutpostStructure, TArray<struct FFortItemQuantityPair>* OutWorldItems, TArray<struct FFortItemQuantityPair>* OutAccountItems);
	int32 GetOutpostStructureMaxLevel(int32 TheaterSlot, class UFortOutpostItemDefinition* OutpostStructure);
	bool GetOutpostCoreLevelByTheaterId(const class FString& TheaterId, int32* OutCoreLevel);
	bool GetOutpostCoreLevelByItemDefinition(class UFortOutpostItemDefinition* OutpostCoreItemDef, int32* OutCoreLevel);
	struct FGameDifficultyInfo GetMaxAvailableDifficulty(bool bIncludeMissionAlertTiles);
	class UFortItemDefinition* GetItemFromItemQuantityPair(struct FFortItemQuantityPair& InPair);
	class AFortPlayerPawn* GetHeroPlayerPawnForCurrentDisplayedItem();
	class AFortPlayerPawn* GetHeroPlayerPawnByIndex(int32 PartyMemberIndex);
	class UFortWorldItemDefinition* GetHarvestingToolForLevel(int32 TheaterSlot, int32 InHarvestingOptimizerLevel);
	enum class EFrontEndCamera GetFrontEndCamera();
	enum class EFortFrontEndFeatureState GetFeatureState(enum class EFortFrontEndFeature Feature);
	int32 GetFabricatorStoredGooAmount(int32 TheaterSlot);
	int32 GetFabricatorIncomingGooAmount(int32 TheaterSlot);
	int32 GetFabricatorDisintegrationSecondsRemaining(int32 TheaterSlot);
	enum class EFrontEndCamera GetDesiredPlayButtonCamera();
	class FName GetDefenderSquadIDByTheaterID(const class FString& TheaterId);
	class FText GetCurrentTheaterName();
	TArray<struct FGameDifficultyInfo> GetAvailableDifficulties(bool bIncludeMissionAlertTiles);
	struct FFortMultiSizeBrush GetAttributeIcon(struct FFortAttributeInfo& InAttribute, const struct FGameplayTagContainer& InRequiredTags);
	class FText GetAttributeDisplayName(struct FFortAttributeInfo& InAttribute, const struct FGameplayTagContainer& InRequiredTags);
	class FText GetAttributeDescription(struct FFortAttributeInfo& InAttribute, const struct FGameplayTagContainer& InRequiredTags);
	bool GetAllTheaterData(TArray<struct FFortTheaterMapData>* OutAllTheaterData);
	bool GetActiveTileMissionDetails(struct FFortMissionDetails* MissionDetails);
	class AFortTheaterMapTile* GetActiveTile();
	void GetAccountLevelUpRewards(TArray<struct FFortItemQuantityPair>* Rewards, int32 AccountLevel);
	void ForceSetFeatureState(enum class EFortFrontEndFeature Feature, enum class EFortFrontEndFeatureState State);
	void ClearSelectedTheater();
	bool CanFindTileForQuest(class UFortQuestItem* QuestItem);
	bool CanCompleteQuestInActiveTileMission(class UFortQuestItem* QuestItem);
	void BindToFeatureStateAndInitialize(enum class EFortFrontEndFeature Feature, UDelegateProperty_ Delegate);
};

// 0x10 (0x250 - 0x240)
// Class FortniteUI.FortGridPickerTile
class UFortGridPickerTile : public UFortUserWidget
{
public:
	class UObject*                               Data;                                              // 0x240(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortGridWidgetBase*                   Owner;                                             // 0x248(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortGridPickerTile* GetDefaultObj();

	void SetData(class UObject* InData);
	void OnMouseLeave();
	void OnMouseEnter();
	void OnClicked();
	void ForwardClicked();
};

// 0x150 (0x280 - 0x130)
// Class FortniteUI.FortGridWidgetBase
class UFortGridWidgetBase : public UContentWidget
{
public:
	TSubclassOf<class UFortGridPickerTile>       ClearWidgetType;                                   // 0x130(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        TileWidth;                                         // 0x138(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        TileHeight;                                        // 0x13C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        TilesAcross;                                       // 0x140(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        TilesDown;                                         // 0x144(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bShrinkToFit;                                      // 0x148(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2005[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        PeekOverflowTilePercentage;                        // 0x14C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FMargin                               TilePadding;                                       // 0x150(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FSlateBrush                           GridBackground;                                    // 0x160(0x90)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	struct FMargin                               GridBackgroundPadding;                             // 0x1F0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	TArray<class UObject*>                       DataProvider;                                      // 0x200(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	UMulticastDelegateProperty_                  OnTileGenerated;                                   // 0x210(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnTileClicked;                                     // 0x220(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnMouseEnterTile;                                  // 0x230(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnMouseLeaveTile;                                  // 0x240(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TSubclassOf<class UFortGridPickerTile>       TileWidgetType;                                    // 0x250(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGridSortKind                     SortKind;                                          // 0x258(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReversed;                                         // 0x259(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2006[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           GetSortKeyFor;                                     // 0x260(0x10)(Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_2007[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortGridWidgetBase* GetDefaultObj();

	void SetTileWidth(float Width);
	void SetTilesDown(int32 Down);
	void SetTilesAcross(int32 Across);
	void SetTilePadding(const struct FMargin& Padding);
	void SetTileHeight(float Height);
	void SetPeekOverflowTilePercentage(float Percent);
	void SetDataProvider(TArray<class UObject*>& Data);
	void SetClearWidgetType(TSubclassOf<class UFortGridPickerTile> InClearWidgetType);
	TArray<class UFortGridPickerTile*> GetTiles();
	class UFortGridPickerTile* GetTileForObject(class UObject* Object);
};

// 0x48 (0x2C8 - 0x280)
// Class FortniteUI.FortGridPickerButton
class UFortGridPickerButton : public UFortGridWidgetBase
{
public:
	enum class EMenuPlacement                    GridPlacement;                                     // 0x280(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2008[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortGridPickerGrid*                   GridWidget;                                        // 0x288(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCloseOnTileClicked;                               // 0x290(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2009[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           GridWidgetDelegate;                                // 0x298(0x10)(ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnGridPickerOpenChanged;                           // 0x2A8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_200A[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortGridPickerButton* GetDefaultObj();

	void SetIsOpen(bool ShouldBeOpen);
	void OnIsGridPickerOpenChanged__DelegateSignature(bool IsOpen);
	void OnButtonClicked();
	class UFortGridPickerGrid* CreateGridWidget__DelegateSignature();
};

// 0x10 (0x290 - 0x280)
// Class FortniteUI.FortGridWidget
class UFortGridWidget : public UFortGridWidgetBase
{
public:
	uint8                                        Pad_200B[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortGridWidget* GetDefaultObj();

};

// 0xB0 (0xD8 - 0x28)
// Class FortniteUI.FortHeroManagementContext
class UFortHeroManagementContext : public UBlueprintContextBase
{
public:
	UMulticastDelegateProperty_                  OnPlayerDataUpdated;                               // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnMcpHeroDeleteResponse;                           // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnMcpHeroCreateResponse;                           // 0x48(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnCurrentHeroChanged;                              // 0x58(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnMcpAbilityChangeRequestResponse;                 // 0x68(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnMcpAbilityChangeRequestSent;                     // 0x78(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnAbilitySelectionRolledBack;                      // 0x88(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnAvailableAbilityPointsChanged;                   // 0x98(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnHeroStatsChanged;                                // 0xA8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UFortHero*                             CurrentHero;                                       // 0xB8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2026[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortHero*                             HeroBeingDeleted;                                  // 0xC8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2027[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortHeroManagementContext* GetDefaultObj();

	void TriggerHerosStickies();
	bool SetHeroName(const class FString& NewName);
	bool SetCurrentHero(const class FString& HeroId);
	bool RequestSetTraitDepthFromID(const class FString& HeroId, int32 TraitIdx, int32 Depth);
	bool RequestSetTraitDepth(int32 TraitIdx, int32 Depth);
	bool RequestCreateHero(class UFortHeroType* HeroType, const class FString& Name, enum class EFortCustomGender Gender);
	bool RedeemPrevAbilityFromID(const class FString& HeroId, int32 TraitIdx);
	bool RedeemPrevAbility(int32 TraitIdx);
	void RedeemAllAbilitiesFromID(const class FString& HeroId);
	bool RedeemAllAbilities();
	bool PurchaseNextAbilityFromID(const class FString& HeroId, int32 TraitIdx);
	bool PurchaseNextAbility(int32 TraitIdx);
	void MarkHeroAsSeen(const class FString& HeroId);
	bool IsSkillTreeUnlocked();
	bool IsShowingStatsScreen();
	bool IsCreateHeroEnabled();
	int32 GetXPRequiredForHeroLevel(int32 HeroLevel);
	int32 GetTraitDepthFromID(const class FString& HeroId, int32 TraitIdx);
	bool GetTraitDepth(int32 TraitIdx, int32* Depth);
	int32 GetNumUnspentAbilityPointsFromID(const class FString& HeroId);
	bool GetNumUnspentAbilityPoints(int32* NumAbilityPoints);
	int32 GetNumHeroTraits();
	int32 GetNextAbilityCostFromID(const class FString& HeroId, int32 TraitIdx);
	int32 GetNextAbilityCost(int32 TraitIdx);
	int32 GetMaxNameLength();
	int32 GetHeroLevelAtXP(int32 Xp);
	struct FHeroUIData GetHeroDataFromID(const class FString& HeroId);
	bool GetHeroData(struct FHeroUIData* HeroData);
	void GetDisplayStats(TArray<struct FFortGameplayEffectModifierDescription>* Stats);
	bool GetCurrentHeroID(class FString* HeroId);
	TArray<class UFortAbilityKit*> GetCoreAbilities();
	bool GetAttributeValuesArrayFromID(const class FString& HeroId, const TArray<struct FGameplayAttribute>& Attributes, TArray<float>* Values, bool bUseProxy);
	bool GetAttributeValuesArray(const TArray<struct FGameplayAttribute>& Attributes, TArray<float>* Values, bool bUseProxy);
	float GetAttributeValueFromID(const class FString& HeroId, struct FGameplayAttribute& Attribute, bool bUseProxy);
	float GetAttributeValue(struct FGameplayAttribute& Attribute, bool bUseProxy);
	TArray<class FString> GetAllHeroIDs();
	class UFortAbilitySystemComponent* GetAbilitySystemComponent();
	int32 GetAbilityCostFromID(const class FString& HeroId, int32 TraitIdx, int32 TraitDepth);
	int32 GetAbilityCost(int32 TraitIdx, int32 TraitDepth);
	void GenerateRandomHeroName(class UDataTable* NameTable, class FString* Name);
	void FocusOnHero(const class FString& HeroId);
	enum class ENameStatus CheckHeroNameValidity(const class FString& Name);
	bool CanRedeemAllAbilities();
	bool CanModifyTraitDepthFromID(const class FString& HeroId, int32 TraitIdx);
	bool CanModifyTraitDepth(int32 TraitIdx);
	bool CanAffordNextAbilityFromID(const class FString& HeroId, int32 TraitIdx);
	bool CanAffordNextAbility(int32 TraitIdx);
	bool CanAffordAbilityFromID(const class FString& HeroId, int32 TraitIdx, int32 TraitDepth);
	bool CanAffordAbility(int32 TraitIdx, int32 TraitDepth);
};

// 0x10 (0x1F0 - 0x1E0)
// Class FortniteUI.FortHeroNotificationHandler
class UFortHeroNotificationHandler : public UFortDialogNotificationHandler
{
public:
	class UFortHero*                             Hero;                                              // 0x1E0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2028[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortHeroNotificationHandler* GetDefaultObj();

	void OnFortItemUpdated(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged);
};

// 0x388 (0x5B8 - 0x230)
// Class FortniteUI.FortHeroSupportPerkWidget
class UFortHeroSupportPerkWidget : public UUserWidget
{
public:
	TWeakObjectPtr<class UFortHero>              HeroToRepresent;                                   // 0x230(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortSupportBonusType             SupportTypeToRepresent;                            // 0x238(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortSupportPerkWidgetState       SupportPerkWidgetState;                            // 0x239(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2029[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortMultiSizeImage*                   PerkImage;                                         // 0x240(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                      NameText;                                          // 0x248(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                      DescriptionText;                                   // 0x250(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_202A[0x360];                                   // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortHeroSupportPerkWidget* GetDefaultObj();

	void SetSupportTypeToRepresent(enum class EFortSupportBonusType InSupportTypeToRepresent);
	void SetState(enum class EFortSupportPerkWidgetState InState);
	void SetHeroToRepresent(class UFortHero* InHeroToRepresent);
	void OnSupportTypeUpdated();
	void OnStateChanged();
	void OnHeroUpdated();
	bool IsPerkUnlocked();
	bool IsPerkInCorrectSlot();
	bool IsPerkHighlighted();
	bool IsPerkEmpty();
	bool IsPerkActive();
};

// 0x0 (0x28 - 0x28)
// Class FortniteUI.FortHomebaseNodeItemUtilities
class UFortHomebaseNodeItemUtilities : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UFortHomebaseNodeItemUtilities* GetDefaultObj();

	bool TryGetHomebaseNodeState(class UWidget* Widget, class FName NodeID, struct FHomebaseNodeState* OutNodeState);
	bool IsSquadSlotUnseen(class AFortPlayerController* FortPC, class FName& SquadId, int32 SquadSlot);
	bool IsHomebaseNodeItemUnseenForTagContainer(class AFortPlayerController* FortPC, struct FGameplayTagContainer& Tags);
	void GetHomebaseNodePageNames(TArray<class FName>* NodePages);
	void GetHomebaseNodeItems(class AFortPlayerController* FortPC, TArray<class UFortHomebaseNodeItem*>* NodeItems);
	class FName GetHomebaseNodeItemNameForTagContainer(class AFortPlayerController* FortPC, struct FGameplayTagContainer& Tags);
	class UFortHomebaseNodeItem* GetHomebaseNodeItemForTagContainer(class AFortPlayerController* FortPC, struct FGameplayTagContainer& Tags);
	class UFortHomebaseNodeItem* GetHomebaseNodeItemForSquadSlot(class AFortPlayerController* FortPC, class FName& SquadId, int32 SquadSlot);
	class UFortHomebaseNodeItem* GetHomebaseNodeItem(class AFortPlayerController* FortPC, class FName& NodeID);
	bool AreAnyHomebaseNodeItemsUnseenForSquadType(class AFortPlayerController* FortPC, enum class EFortHomebaseSquadType SquadType);
	bool AreAnyHomebaseNodeItemsUnseenForSquadId(class AFortPlayerController* FortPC, class FName& SquadId);
};

// 0x68 (0x90 - 0x28)
// Class FortniteUI.FortHomebaseUIContext
class UFortHomebaseUIContext : public UBlueprintContextBase
{
public:
	UMulticastDelegateProperty_                  OnSquadSlotChanged;                                // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnEarlyGameFinished;                               // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnNodePurchased;                                   // 0x48(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UDataTable>             SquadIconDataTableAsset;                           // 0x58(0x20)(Transient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2038[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortHomebaseUIContext* GetDefaultObj();

	void SetShowHeroHeadAccessoriesInClientSettingsRecord(bool bShow);
	void SetShowHeroHeadAccessoriesForLocalPlayer(bool bShow);
	void SetShowHeroBackpackInClientSettingsRecord(bool bShow);
	void SetShowHeroBackpackForLocalPlayer(bool bShow);
	void OnSquadSlotChanged__DelegateSignature(class FName SquadName, int32 SlotIndex);
	void OnNodesPurchased__DelegateSignature(class FName NodeID);
	bool IsInEarlyGame();
	bool IsAnySquadSlotUnlocked(class FName SquadId);
	void GetWorkerSetBonusEffectModifiers(struct FGameplayTag& SetBonusTag, TArray<struct FFortAttributeModifierDisplayData>* OutModifiers);
	struct FFortMultiSizeBrush GetSquadIcon(class FName SquadId);
	bool GetShowHeroHeadAccessoriesForLocalPlayer();
	bool GetShowHeroBackpackForLocalPlayer();
	class FName GetRootSkillTreePageId();
	class FName GetRootSkillTreeNodeId();
	struct FSlateColor GetQuestNodeColour();
	bool GetNodeTagBonusesForDisplay(class FName NodeID, TArray<struct FFortTagUIData>* OutGrantedTagsUIData);
	bool GetNodeDescription(class FName NodeID, class FText* OutDescription);
	bool GetNodeAttributeBonusesForDisplay(class FName NodeID, TArray<struct FFortDisplayAttribute>* OutDisplayAttributes);
	bool GetLocalPlayerHasHeroHeadAccessories();
	bool GetLocalPlayerHasHeroBackpack();
	TArray<class UFortItem*> GetItemsInSquad(class FName SquadId, bool bRemoveEmptySquadSlots);
	class UFortItem* GetItemInSquadSlot(class FName SquadName, int32 SlotIndex);
	class FName GetEarlyGameRootSkillTreePageId();
	class FName GetEarlyGameRootSkillTreeNodeId();
	void GetEarlyGameNodeProgressionState(int32* OutOwnedNodeCount, int32* OutRequiredNodeCountToLeaveEarlyGame);
	class FName GetEarlyGameNodePageId();
};

// 0x8 (0x460 - 0x458)
// Class FortniteUI.FortHomeCMSScreenBase
class UFortHomeCMSScreenBase : public UEpicCMSScreenBase
{
public:
	class UWidgetSwitcher*                       LayoutSwitcher;                                    // 0x458(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortHomeCMSScreenBase* GetDefaultObj();

	void OnTilesLoaded();
	bool AreTilesLoaded();
};

// 0x30 (0x268 - 0x238)
// Class FortniteUI.FortHUDCenterPopupMessageWidget
class UFortHUDCenterPopupMessageWidget : public UCommonUserWidget
{
public:
	TSoftClassPtr<class UUserWidget>             CenterPopupModalWidgetClass;                       // 0x238(0x20)(Edit, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_203A[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonActivatablePanel*               CenterPopupModalWidget;                            // 0x260(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortHUDCenterPopupMessageWidget* GetDefaultObj();

	void UpdateState();
	void OnModalDisplayed(enum class ECenterPopupMessageStateEnum NewState, class UCommonActivatablePanel* ModalPopup);
	enum class ECenterPopupMessageStateEnum GetCenterPopupMessageState();
};

// 0x538 (0x560 - 0x28)
// Class FortniteUI.FortHUDContext
class UFortHUDContext : public UBlueprintContextBase
{
public:
	uint8                                        Pad_2040[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnCursorModeChanging;                              // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnCursorModeChanged;                               // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnMgmtMenuTabChangeRequested;                      // 0x50(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnIndicatorModeChanged;                            // 0x60(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnContextualReticleChanged;                        // 0x70(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnBuildingFocused;                                 // 0x80(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnFocusedBuildingStateChanged;                     // 0x90(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnFocusedBuildingHealthChanged;                    // 0xA0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnFocusedBuildingRepairCostChanged;                // 0xB0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnFocusedBuildingAttachedTrapDurabilityChanged;    // 0xC0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnFocusedBuildingAttachedTrapChanged;              // 0xD0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnDamagedResourceBuilding;                         // 0xE0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnPlayerCanInteract;                               // 0xF0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnInteractUpdated;                                 // 0x100(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnPlayerTargetingChanged;                          // 0x110(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnScoreChanged;                                    // 0x120(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnScoreStatChanged;                                // 0x130(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnZoneCompleted;                                   // 0x140(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnPawnSet;                                         // 0x150(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnDamageReceived;                                  // 0x160(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnUnableToPerformAction;                           // 0x170(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnLocalPlayerMaxHealthChanged;                     // 0x180(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnLocalPlayerHealthChanged;                        // 0x190(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnLocalPlayerDied;                                 // 0x1A0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnLocalPlayerSpawned;                              // 0x1B0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnLocalPlayerRevived;                              // 0x1C0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnLocalPlayerKillsChanged;                         // 0x1D0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnLocalPlayerPlaceChanged;                         // 0x1E0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnLocalPlayerViewTargetChanged;                    // 0x1F0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnLocalPlayerMaxShieldChanged;                     // 0x200(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnLocalPlayerShieldChanged;                        // 0x210(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnLocalPlayerMaxStaminaChanged;                    // 0x220(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnLocalPlayerStaminaChanged;                       // 0x230(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnToggleScoreboard;                                // 0x240(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnEndOfDayRecap;                                   // 0x250(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnWaveCombatStart;                                 // 0x260(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnWaveBasedModifiersApplied;                       // 0x270(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnActiveGameplayModifiersChanged;                  // 0x280(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnHordeTierInitialized;                            // 0x290(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnHordeTierComplete;                               // 0x2A0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnHordeWaveComplete;                               // 0x2B0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnBuildingMaterialCycled;                          // 0x2C0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnWeaponEquippedDelegate;                          // 0x2D0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnAbilityDecisionWindowStackUpdated;               // 0x2E0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnItemCollectorChanged;                            // 0x2F0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnTotalQuantumChanged;                             // 0x300(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnAllFOBCoresAdded;                                // 0x310(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnWorldDaysElapsedChanged;                         // 0x320(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnNumSurvivorsRescuedChanged;                      // 0x330(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnEarnedBadgesChanged;                             // 0x340(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnPotentialBadgesChanged;                          // 0x350(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnMissionManagerCreated;                           // 0x360(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnMissionsUpdated;                                 // 0x370(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnFocusedMissionChanged;                           // 0x380(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnTheaterUniqueIDChanged;                          // 0x390(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnZoneDifficultyInfoRowChanged;                    // 0x3A0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnMissionGeneratorChanged;                         // 0x3B0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnMissionRewardsChanged;                           // 0x3C0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnPointOfInterestAdded;                            // 0x3D0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnPointOfInterestRemoved;                          // 0x3E0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_2041[0x70];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnHUDElementVisibilityChanged;                     // 0x460(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnDebugHUDObjectiveHeightChangedDelegate;          // 0x470(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                         bDebugHudObjectiveHeight;                          // 0x480(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bPendingAttachToHUD;                               // 0x481(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2042[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPlayerState*                      OwningPlayerState;                                 // 0x488(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class ABuildingActor*                        CurFocusedBuilding;                                // 0x490(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class ABuildingTrap*                         CurFocusedTrap;                                    // 0x498(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2043[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABuildingActor*                        PendingFocusBuilding;                              // 0x4A8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2044[0xB0];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortHUDContext* GetDefaultObj();

	void UpdateTrapAttachedToBuilding();
	bool ShouldOnlyShowNextPrevBuildingSlotKeybinds();
	void SetIndicatorsState(enum class EFortIndicatorState NewState);
	void SetIndicatorsAllowed(bool bIndicatorsAllowed);
	void SetHUDElementVisibility(struct FGameplayTagContainer& HUDElementTags, bool bHideElements);
	void SetCursorModeLocked(bool bLocked);
	void RequestMgmtMenuTab(class FName TabName);
	void RemovePointOfInterest(class AActor* PointOfInterest);
	bool IsInCursorMode();
	void HandleLocalPlayerViewTargetChanged();
	void HandleLocalPlayerPlaceChanged();
	void HandleLocalPlayerKillsChanged();
	void HandleLocalPawnSpawned();
	void HandleLocalPawnRevived();
	void HandleLocalPawnDied(struct FFortPlayerDeathReport& DeathReport);
	void HandleFocusedBuildingHealthChanged();
	class AFortPvPBaseCornerstone* GetTeamCornerstone(enum class EFortTeam Team);
	float GetScoreDisplayFactor();
	TArray<struct FFortBadgeCount> GetPotentialBadges();
	class AFortPlayerStateZone* GetPlayerStateZone();
	void GetMissionRewards(TArray<class UFortItem*>* MissionRewards, TArray<class UFortItem*>* MissionAlertRewards);
	TArray<struct FZoneLoadingScreenHeadingConfig> GetMissionOverviewObjectives();
	class AFortMissionManager* GetMissionManager();
	struct FFortKillerVisualInfo GetKillerVisualInfoFromDeathReport(struct FFortPlayerDeathReport& DeathReport);
	enum class EFortIndicatorState GetIndicatorsState();
	class AFortGameStateZone* GetGameStateZone();
	class AFortMission* GetFocusedMission();
	bool GetFocusedBuildingInfo(struct FFortFocusedBuildingInfo* OutBuildingInfo);
	TArray<struct FEarnedBadgeEntry> GetEarnedBadges();
	class UFortHero* GetCurrentHero();
	bool GetCurrentBasicMissionInfo(struct FFortBasicMissionInfo* BasicMissionInfo);
	class AFortBluGloManager* GetBluGloManager();
	void ForwardOnWeaponEquipped(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon);
	void ForwardOnNumSurvivorsRescuedChanged(int32 NumSurvivorsRescued);
	void ForwardOnMissionsUpdated();
	void ForwardOnAbilityDecisionWindowStackUpdated();
	void EnterCursorMode(class FName ActionName, class UUserWidget* CursorModeWidget);
	void EnterCameraMode();
	bool AreIndicatorsEnabled();
	bool AreHUDElementsVisible(struct FGameplayTagContainer& HUDElementTags);
	void AddPointOfInterest(class AActor* PointOfInterest, class FText DisplayText, class UTexture2D* DisplayImage);
};

// 0x0 (0x260 - 0x260)
// Class FortniteUI.AthenaHUDGamePhaseChangingBase
class UAthenaHUDGamePhaseChangingBase : public UFortHUDElementWidget
{
public:

	static class UClass* StaticClass();
	static class UAthenaHUDGamePhaseChangingBase* GetDefaultObj();

	void UpdateMessaging(enum class EAthenaGamePhaseStep Step, class FText& MESSAGE, class FText& TimeText);
	void HandleGamePhaseStepChanged(enum class EAthenaGamePhaseStep Step);
	void GamePhaseStepChanged(enum class EAthenaGamePhaseStep Step);
};

// 0x20 (0x280 - 0x260)
// Class FortniteUI.AthenaHUDPlayerActionAlertBase
class UAthenaHUDPlayerActionAlertBase : public UFortHUDElementWidget
{
public:
	class AFortPlayerPawnAthena*                 LastPlayerPawn;                                    // 0x260(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bReadyForNextAlert;                                // 0x268(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2047[0x17];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAthenaHUDPlayerActionAlertBase* GetDefaultObj();

	void RequestNextAlert();
	void AlertPlayer(enum class EAthenaPlayerActionAlert Alert, class FText& DetailText);
};

// 0x38 (0x298 - 0x260)
// Class FortniteUI.FortActorIndicatorWidget
class UFortActorIndicatorWidget : public UFortHUDElementWidget
{
public:
	uint8                                        Pad_2048[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                IndicatedActor;                                    // 0x268(0x8)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPrimitiveComponent*                   IndicatedActorComponent;                           // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               RelativeLocation;                                  // 0x278(0xC)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MaxDistance;                                       // 0x284(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bClampOnScreen;                                    // 0x288(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bShowClampToScreenArrow;                           // 0x289(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bUseScreenSpacePosition;                           // 0x28A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2049[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             ScreenSpaceRelativeOffset;                         // 0x28C(0x8)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_204A[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortActorIndicatorWidget* GetDefaultObj();

};

// 0x8 (0x268 - 0x260)
// Class FortniteUI.AthenaPlayersLeftBase
class UAthenaPlayersLeftBase : public UFortHUDElementWidget
{
public:
	class UTextBlock*                            PlayersLeftText;                                   // 0x260(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UAthenaPlayersLeftBase* GetDefaultObj();

};

// 0x0 (0x298 - 0x298)
// Class FortniteUI.AthenaTeamMemberIndicatorBase
class UAthenaTeamMemberIndicatorBase : public UFortActorIndicatorWidget
{
public:

	static class UClass* StaticClass();
	static class UAthenaTeamMemberIndicatorBase* GetDefaultObj();

};

// 0x28 (0x288 - 0x260)
// Class FortniteUI.FortCraftingBarWidget
class UFortCraftingBarWidget : public UFortHUDElementWidget
{
public:
	class UCommonTextBlock*                      CraftingText;                                      // 0x260(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UProgressBar*                          CraftingProgressBar;                               // 0x268(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        CompletedRemainVisibleTime;                        // 0x270(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_204B[0x14];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortCraftingBarWidget* GetDefaultObj();

	void SetHideCraftingBar(bool bInHideCraftBar);
	void OnCompletedSetHidden();
	void HandlePlayerStoppedCrafting(bool bSuccess, enum class EFortCraftFailCause CraftFailureCause);
	void HandlePlayerStartedCrafting();
};

// 0x0 (0x260 - 0x260)
// Class FortniteUI.FortHUDEquipProgressBase
class UFortHUDEquipProgressBase : public UFortHUDElementWidget
{
public:

	static class UClass* StaticClass();
	static class UFortHUDEquipProgressBase* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class FortniteUI.FortHUDObjectiveSizeInterface
class IFortHUDObjectiveSizeInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IFortHUDObjectiveSizeInterface* GetDefaultObj();

	float GetHeightEstimate();
};

// 0x90 (0x2C8 - 0x238)
// Class FortniteUI.FortMissionTrackerList
class UFortMissionTrackerList : public UCommonUserWidget
{
public:
	uint8                                        Pad_204C[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UFortMissionTrackerEntry>  MissionEntryClass;                                 // 0x240(0x8)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bConfigureAsHUD;                                   // 0x248(0x1)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_204D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UVerticalBox*                          MissionsListBox;                                   // 0x250(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	UMulticastDelegateProperty_                  OnMissionTrackerListVisibilityChanged;             // 0x258(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	UMulticastDelegateProperty_                  OnSizeEstimateChangedDelegate;                     // 0x268(0x10)(ZeroConstructor, InstancedReference, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_204E[0x50];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortMissionTrackerList* GetDefaultObj();

	void UpdateVisibility();
	void HandleSizeEstimateChanged(class UObject* ChangedElement);
	void HandleMissionsUpdated();
};

// 0x38 (0x270 - 0x238)
// Class FortniteUI.FortQuestTrackerList
class UFortQuestTrackerList : public UCommonUserWidget
{
public:
	uint8                                        Pad_204F[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bConfigureAsHUD;                                   // 0x240(0x1)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2050[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonListView*                       QuestList;                                         // 0x248(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UFortQuestItem*>                HUDCachedQuests;                                   // 0x250(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	UMulticastDelegateProperty_                  OnSizeEstimateChangedDelegate;                     // 0x260(0x10)(ZeroConstructor, InstancedReference, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortQuestTrackerList* GetDefaultObj();

	void HandleSizeEstimateChanged(class UObject* ChangedElement);
	void HandleQuestsUpdated();
	void HandleQuestEntryCreated(class UUserWidget* Widget);
	void HandlePinnedQuestsChanged();
	void HandleHUDFinalObjectiveHidden(class UFortQuestItem* QuestItem);
	TArray<class UFortQuestItem*> GetQuestsToDisplay();
};

// 0x30 (0x290 - 0x260)
// Class FortniteUI.FortMissionTracker
class UFortMissionTracker : public UFortHUDElementWidget
{
public:
	class UFortMissionTrackerList*               MissionTrackerList;                                // 0x260(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortQuestTrackerList*                 MainQuestList;                                     // 0x268(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortQuestTrackerList*                 PinnedQuestsList;                                  // 0x270(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidget*                               AdditionalEntriesIndicator;                        // 0x278(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonNumericTextBlock*               DebugHeightEstimate;                               // 0x280(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        AllowedSize;                                       // 0x288(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bEnforceHeightLimit;                               // 0x28C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bSizeEstimateNeedsRefresh;                         // 0x28D(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2051[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortMissionTracker* GetDefaultObj();

	void RefreshSizeEstimate();
	void HandleSizeEstimateChanged(class UObject* ChangedElement);
	void HandleDebugHUDObjectiveHeightChanged(bool bIsDebugging);
};

// 0x28 (0x288 - 0x260)
// Class FortniteUI.FortReticle
class UFortReticle : public UFortHUDElementWidget
{
public:
	uint8                                        Pad_2052[0x28];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortReticle* GetDefaultObj();

	void OnWeaponEquipped(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon);
	void OnReticleColorChanged();
	void OnPawnSet();
	void OnContextualReticleChanged();
};

// 0x20 (0x258 - 0x238)
// Class FortniteUI.FortHUDTargetUnderReticleWidget
class UFortHUDTargetUnderReticleWidget : public UCommonUserWidget
{
public:
	TScriptInterface<class IFortHUDTargetUnderReticleInterface> Target;                                            // 0x238(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                        Pad_2053[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortHUDTargetUnderReticleWidget* GetDefaultObj();

	void OnTargetHealthChanged();
	void OnTargetChanged();
	void HandleOnHUDTargetUnderReticle(TScriptInterface<class IFortHUDTargetUnderReticleInterface>* NewTarget);
};

// 0x40 (0x68 - 0x28)
// Class FortniteUI.FortHUDVisibilityData
class UFortHUDVisibilityData : public UDataAsset
{
public:
	struct FGameplayTag                          HUDVisibilityGameplayTag;                          // 0x28(0x8)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  DisplayText;                                       // 0x30(0x18)(BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  ToolTipText;                                       // 0x48(0x18)(BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         Visible;                                           // 0x60(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2054[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortHUDVisibilityData* GetDefaultObj();

};

// 0x20 (0x138 - 0x118)
// Class FortniteUI.FortIconWithLabel
class UFortIconWithLabel : public UWidget
{
public:
	bool                                         ShouldShowIcon;                                    // 0x118(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShouldCollapseIconWhenNotShown;                    // 0x119(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortBrushSize                    IconBrushSize;                                     // 0x11A(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShouldShowLabel;                                   // 0x11B(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2055[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UCommonTextStyle>          LabelTextStyle;                                    // 0x120(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2056[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortIconWithLabel* GetDefaultObj();

};

// 0x10 (0x148 - 0x138)
// Class FortniteUI.FortHeroSupportPerkIndicator
class UFortHeroSupportPerkIndicator : public UFortIconWithLabel
{
public:
	TWeakObjectPtr<class UFortItem>              ItemToRepresent;                                   // 0x138(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortSupportBonusType             SupportTypeToRepresent;                            // 0x140(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2057[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortHeroSupportPerkIndicator* GetDefaultObj();

	void SetSupportTypeToRepresent(enum class EFortSupportBonusType SupportTypeToRepresent);
	void SetItemToRepresent(class UFortItem* ItemToRepresent);
};

// 0x10 (0x148 - 0x138)
// Class FortniteUI.FortItemCategoryIndicator
class UFortItemCategoryIndicator : public UFortIconWithLabel
{
public:
	TWeakObjectPtr<class UFortItem>              ItemToRepresent;                                   // 0x138(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortItemCategoryOrdinal          OrdinalOfCategoryToRepresent;                      // 0x140(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2058[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortItemCategoryIndicator* GetDefaultObj();

	void SetOrdinalOfCategoryToRepresent(enum class EFortItemCategoryOrdinal ItemCategoryOrdinal);
	void SetItemToRepresent(class UFortItem* ItemToRepresent);
};

// 0x180 (0x1A8 - 0x28)
// Class FortniteUI.FortInventoryContext
class UFortInventoryContext : public UBlueprintContextBase
{
public:
	UMulticastDelegateProperty_                  OnWorldItemListChanged;                            // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnOutpostItemListChanged;                          // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnItemPickedUp;                                    // 0x48(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnQuickbarContentsChanged;                         // 0x58(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnQuickbarSlotFocusChanged;                        // 0x68(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnQuickbarSecondarySlotFocusChanged;               // 0x78(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnQuickbarForceFullUpdate;                         // 0x88(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnWorldItemsChanged;                               // 0x98(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnPinnedSchematicsChanged;                         // 0xA8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnSchematicsLockedChanged;                         // 0xB8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnSchematicUnlocked;                               // 0xC8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnCraftItemStarted;                                // 0xD8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnVaultItemLimitStateChangedEvent;                 // 0xE8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TMap<class UFortSchematicItemDefinition*, bool> SchematicLockedStates;                             // 0xF8(0x50)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	TMap<class UFortItemDefinition*, struct FItemDefinitionChangedStruct> DefinitionChangedDelegates;                        // 0x148(0x50)(ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_208B[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortInventoryContext* GetDefaultObj();

	bool WillQuickBarAcceptItem(class UFortItem* Item, enum class EFortQuickBars InQuickBar, int32 Slot);
	void UnlockSchematic(class UFortSchematicItemDefinition* SchematicDefinition);
	void UnlockAllSchematics();
	void SortAccountItemArrayForTransmog(TArray<class UFortAccountItem*>& VaultItems, TArray<class UFortAccountItem*>* SortedItems);
	bool SetSchematicPinned(class UFortSchematicItem* Schematic, bool bEnabled);
	bool RemoveItemFromQuickBar(class UFortItem* Item);
	struct FFortItemQuantityPair MakeItemQuantityPair(class UFortItemDefinition* ItemDefinition, int32 ItemQuantity);
	void LockAllSchematics();
	bool IsTrapAvailableForBuilding(class ABuildingSMActor* Actor);
	bool IsSlotHidden(enum class EFortQuickBars InQuickBar, int32 Slot);
	bool IsSchematicPinned(class UFortSchematicItem* Schematic);
	bool IsRecyclable(class UFortItem* Item, class FText* Reason);
	bool HasTrapReadyForBuilding(class ABuildingSMActor* BuildingToAttachTo);
	bool HasGameplayTagContainerExact(const struct FGameplayTagContainer& GameplayTagContainer);
	bool HasGameplayTagContainer(const struct FGameplayTagContainer& GameplayTagContainer);
	bool HasEvolutions(class UFortItem* Item);
	void GetWorldItemListForDeployableBaseThePlayerIsIn(TArray<class UFortWorldItem*>* Items, struct FFortItemListFilter& FilterSettings);
	void GetWorldItemList(TArray<class UFortWorldItem*>* Items, struct FFortItemListFilter& FilterSettings);
	class UFortPersistentResourceItemDefinition* GetVoucherResourceItemDefinition();
	enum class EVaultItemLimitStatus GetVaultItemLimitStatus();
	int32 GetVaultItemLimit();
	TArray<class FText> GetUserFriendlyTags(class UFortItem* Item);
	class FText GetTrapAttachTypeName(class ABuildingSMActor* Actor);
	bool GetTransmogSacrificeDataFromItemDefintion(class UFortItemDefinition* ItemDefinition, struct FTransmogSacrifice* OutTransmogData);
	void GetTransformKeys(enum class EConversionControlKeyRequest RequestType, enum class EInventoryContentSortType SortType, TArray<class UFortAccountItem*>* TransformKeys);
	int32 GetTotalItemQuantityByDefinition(class UFortItemDefinition* ItemDefinition);
	class FText GetTierText(enum class EFortItemTier Tier);
	bool GetSupportBonusPerks(class UFortHero* Hero, TArray<struct FFortUIPerk>* SupportBonusPerks);
	int32 GetStorageNumItems();
	int32 GetStorageCapacity();
	class UFortPersistentResourceItemDefinition* GetSchematicResourceItemDefinition();
	void GetSchematicItemList(TArray<class UFortSchematicItem*>* Items, struct FFortItemListFilter& FilterSettings);
	class UFortResourceItemDefinition* GetResourceItemDefinition(enum class EFortResourceType ResourceType);
	class UTexture2D* GetResourceIcon(enum class EFortResourceType ResourceType);
	int32 GetResourceCount(enum class EFortResourceType ResourceType);
	class FText GetRecyclingWarningText(enum class EItemRecyclingWarning Warning, bool WereAnyItemsAnimate);
	class FText GetRecyclingCatalystDisplayName(class UFortItem* Item);
	class FText GetRecycleRestrictionReasonText(enum class EItemRecyclingRestrictionReason Reason);
	class UFortItem* GetQuickBarSlottedItem(enum class EFortQuickBars InQuickBar, int32 Slot);
	void GetQuickbarFocus(enum class EFortQuickBars* OutQuickBar, int32* OutSlot, int32* OutSecondarySlot, int32* OutPreviousFocusedSlot);
	void GetPinnedSchematicList(TArray<class UFortSchematicItem*>* PinnedItems);
	class UFortPersistentResourceItemDefinition* GetPersonnelResourceItemDefinition();
	int32 GetNumInInventory(class UFortItemDefinition* ItemDefinition, bool bIncludeReserved);
	enum class EFortItemTier GetItemTierRecyclingWarningThreshold();
	enum class EFortRarity GetItemRarityRecyclingWarningThreshold();
	int32 GetItemLevelRecyclingWarningThreshold();
	void GetItemInstancesByDefinition(class UFortItemDefinition* ItemDefinition, TArray<class UFortItem*>* Items);
	void GetHomebaseUnlockedTransmogKeys(TArray<class UFortAccountItem*>* TransmogKeys);
	class UFortPersistentResourceItemDefinition* GetHeroResourceItemDefinition();
	bool GetHeroAbilityPerks(class UFortHero* Hero, TArray<struct FFortUIPerk>* HeroAbilityPerks);
	bool GetGameplayTagByIndex(const struct FGameplayTagContainer& GameplayTagContainer, int32 Index, struct FGameplayTag* Result);
	class FText GetEvolveRestrictionReasonText(enum class EItemEvolutionRestrictionReason Reason);
	class AFortWeapon* GetEquippedWeapon();
	class FText GetDisassembleRestrictionReasonText(enum class EItemDisassembleRestrictionReason Reason);
	void GetDeployableBaseItemCounts(int32* ItemsCount, int32* MaxItemsCount, int32* OverflowItemsCount);
	class UFortResourceItemDefinition* GetCurrentResourceItemDefinition();
	int32 GetCurrentResourceCount();
	class UFortWorldItemDefinition* GetCurrentAmmoItemDefinition();
	int32 GetCountOfVaultLimitedItems();
	int32 GetCountOfHeroItems();
	TArray<struct FRecipe> GetConversionRecipesFromItemDefintion(class UFortItemDefinition* ItemDefinition);
	void GetBackpackItemCounts(int32* ItemsCount, int32* MaxItemsCount, int32* OverflowItemsCount);
	void GetAccountItemsByType(enum class EFortItemType ItemType, TArray<class UFortAccountItem*>* Items);
	void GetAccountItemsByFilterType(const class FString& SearchText, enum class EInventoryContentSortType SortType, enum class EFortInventoryFilter SubType, TArray<class UFortAccountItem*>* OutItemList);
	void EquipItem(class UFortItem* Item);
	void EnumerateRecyclingWarningsForItems(TArray<class UFortItem*>& Items, TArray<enum class EItemRecyclingWarning>* OutWarnings);
	bool DropItemOnQuickBar(class UFortItem* Item, enum class EFortQuickBars TargetQuickbar, int32 TargetSlot);
	void DropItemOnPlayerOrWorld(class UFortWorldItem* ItemBeingDropped, class AFortPlayerState* InDestinationPlayer, class UWidget* OwnerWidget, struct FPointerEvent& PointerEvent, struct FGeometry& InGeometry);
	void DropItem(class UFortWorldItem* ItemBeingDropped, int32 Quantity);
	bool DoesItemMatchFilter(class UFortItem* Item, struct FFortItemListFilter& FilterSettings);
	bool DisassembleItem(class UFortWorldItem* Item);
	bool CraftSchematic(class UFortSchematicItem* SchematicItem, enum class EFortCraftFailCause* FailCause);
	bool CraftAndSlotSchematic(class UFortSchematicItem* SchematicItem, int32 PostCraftSlot, enum class EFortCraftFailCause* FailCause);
	bool CanRecycle(class UFortItem* Item, TArray<enum class EItemRecyclingRestrictionReason>* OutRestrictionReasons);
	bool CanPinSchematic(class UFortSchematicItem* Schematic);
	bool CanEvolve(class UFortItem* Item, TArray<enum class EItemEvolutionRestrictionReason>* OutRestrictionReasons);
	bool CanDisassembleItem(class UFortWorldItem* Item, TArray<enum class EItemDisassembleRestrictionReason>* OutRestrictionReasons);
	bool CanCraftSchematic(class UFortSchematicItem* SchematicItem, enum class EFortCraftFailCause* FailCause);
	bool AreRecipeRequirementsMet(const TArray<struct FFortItemQuantityPair>& RecipeCosts);
	bool AreAnyItemsUnseenForInventoryFilter(enum class EFortFrontendInventoryFilter FilterType);
	bool AreAnyItemsAnimate(TArray<class UFortItem*>& Items);
	bool ActivateItem(class UFortItem* Item);
};

// 0xB8 (0xE0 - 0x28)
// Class FortniteUI.FortItemCardMaterialPooler
class UFortItemCardMaterialPooler : public UObject
{
public:
	uint8                                        Pad_208C[0x68];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<enum class EFortRarity, class UMaterialInstanceDynamic*> RarityToDetailAreaMID;                             // 0x90(0x50)(ZeroConstructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortItemCardMaterialPooler* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class FortniteUI.FortItemCardUtilities
class UFortItemCardUtilities : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UFortItemCardUtilities* GetDefaultObj();

	struct FVector2D GetCardDimensions(enum class EFortItemType ItemType, enum class EFortItemCardSize CardSize, bool IsReward, bool UseNewItemCardSizes);
};

// 0x90 (0x2C8 - 0x238)
// Class FortniteUI.FortItemCooldownWidget
class UFortItemCooldownWidget : public UCommonUserWidget
{
public:
	UMulticastDelegateProperty_                  OnCooldownStarted_Delegate;                        // 0x238(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnCooldownStopped_Delegate;                        // 0x248(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UCommonTextBlock*                      CooldownText;                                      // 0x258(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                CooldownImage;                                     // 0x260(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  CooldownMaterialParameterName;                     // 0x268(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<enum class EFortItemCooldownType>     CooldownTypesSupported;                            // 0x270(0x10)(Edit, BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class UMaterialInstanceDynamic*              CooldownPercentageMID;                             // 0x280(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_208D[0x40];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortItemCooldownWidget* GetDefaultObj();

	void SetItem(class UFortWorldItem* InWorldItem);
	void OnWorldItemDestroyed();
	void OnCooldownStopped(enum class EFortItemCooldownType CooldownType);
	void OnCooldownStarted(enum class EFortItemCooldownType CooldownType);
};

// 0x18 (0x338 - 0x320)
// Class FortniteUI.FortItemCountTextBlock
class UFortItemCountTextBlock : public UCommonNumericTextBlock
{
public:
	class UFortItemDefinition*                   ItemDefinition;                                    // 0x320(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortItemCountStyle               CountStyle;                                        // 0x328(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_208F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ItemCountMaxInterpolateDuration;                   // 0x32C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ItemCountMinInterpolateRate;                       // 0x330(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2090[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortItemCountTextBlock* GetDefaultObj();

	void SetOverrideValue(int32 InOverrideValue);
	void SetItemDefinition(class UFortItemDefinition* InItemDefinition);
	void SetCountStyle(enum class EFortItemCountStyle InCountStyle);
	void InterpolateOverrideToValue(int32 TargetValue, float MaximumInterpolationDuration, float MinimumChangeRate, float OutroOffset);
	void HandleItemCountChanged(class UFortItemDefinition* Definition, int32 Delta);
};

// 0x38 (0x270 - 0x238)
// Class FortniteUI.FortItemDetailElementWidget
class UFortItemDetailElementWidget : public UCommonUserWidget
{
public:
	TWeakObjectPtr<class UFortItem>              ItemToDetail;                                      // 0x238(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UFortItem>              ItemToCompareWith;                                 // 0x240(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bShouldPreviewUpgradingItem;                       // 0x248(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2091[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IFortItemViewContextInterface> ItemViewContext;                                   // 0x250(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                        Pad_2092[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortItemDetailElementWidget* GetDefaultObj();

	void HandleShouldPreviewUpgradingItemChanged();
	void HandlePreDifferentItemToDetailSet();
	void HandlePreDifferentItemToCompareWithSet();
	void HandlePostDifferentItemToDetailSet();
	void HandlePostDifferentItemToCompareWithSet();
};

// 0x58 (0x290 - 0x238)
// Class FortniteUI.FortItemDetailsHostPanel
class UFortItemDetailsHostPanel : public UCommonUserWidget
{
public:
	TWeakObjectPtr<class UFortItem>              ItemToDetail;                                      // 0x238(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UFortItem>              ItemToCompareWith;                                 // 0x240(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bShouldPreviewUpgradingItem;                       // 0x248(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2093[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UScrollBox*                            ScrollBox;                                         // 0x250(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNamedSlot*                            DetailsContainerSlotWidget;                        // 0x258(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TScriptInterface<class IFortItemViewContextInterface> ItemViewContext;                                   // 0x260(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                        Pad_2094[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortItemDetailsHostPanel* GetDefaultObj();

	void ShouldPreviewUpgradingItem(bool Value);
	void SetScrollWidget();
	void SetItemViewContext(TScriptInterface<class IFortItemViewContextInterface>& ItemViewContext);
	void SetItemToDetail(class UFortItem* ItemToDetail);
	void SetItemToCompareWith(class UFortItem* ItemToCompareWith);
	void HandleShouldPreviewUpgradingItemChangedBP();
	void HandleDifferentItemToDetailSet();
	void HandleDifferentItemToCompareSet();
};

// 0x28 (0x298 - 0x270)
// Class FortniteUI.FortSquadSlotItemDetailElementWidget
class UFortSquadSlotItemDetailElementWidget : public UFortItemDetailElementWidget
{
public:
	uint8                                        Pad_2097[0x28];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortSquadSlotItemDetailElementWidget* GetDefaultObj();

	void SetIdOfSquadSlotToManageBP(class FName& SquadId, int32 SquadSlotIndex);
	bool IsSquadSlotLockedBP();
	void HandlePostDifferentSquadSlotSetBP();
	class UFortItem* GetItemInSquadSlotBP(class ULocalPlayer* LocalPlayer);
	void GetIdOfSquadSlotToManageBP(class FName* OutSquadId, int32* OutSquadSlotIndex);
};

// 0x28 (0x2B8 - 0x290)
// Class FortniteUI.FortSquadSlotItemDetailsHostPanel
class UFortSquadSlotItemDetailsHostPanel : public UFortItemDetailsHostPanel
{
public:
	uint8                                        Pad_209A[0x28];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortSquadSlotItemDetailsHostPanel* GetDefaultObj();

	void SetIdOfSquadSlotToManageBP(class FName& SquadId, int32 SquadSlotIndex);
	bool IsSquadSlotLockedBP();
	class UFortItem* GetItemInSquadSlotBP(class ULocalPlayer* LocalPlayer);
	void GetIdOfSquadSlotToManageBP(class FName* OutSquadId, int32* OutSquadSlotIndex);
};

// 0x28 (0x2C0 - 0x298)
// Class FortniteUI.FortSquadSlotSurvivorTraitMatchesDetailWidget
class UFortSquadSlotSurvivorTraitMatchesDetailWidget : public UFortSquadSlotItemDetailElementWidget
{
public:
	bool                                         IsSquadLeaderSlot;                                 // 0x298(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         LeaderMatchesSquadType;                            // 0x299(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_209B[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        SubordinatePersonalityMatchCount;                  // 0x29C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         MatchesLeaderPersonality;                          // 0x2A0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_209C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MatchingSetBonusCount;                             // 0x2A4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        SetBonusSize;                                      // 0x2A8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_209D[0x14];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortSquadSlotSurvivorTraitMatchesDetailWidget* GetDefaultObj();

	void HandleTraitValuesUpdatedBP();
};

// 0x38 (0x418 - 0x3E0)
// Class FortniteUI.FortItemDetailsActivatablePanel
class UFortItemDetailsActivatablePanel : public UCommonActivatablePanel
{
public:
	TWeakObjectPtr<class UFortItem>              ItemToDetail;                                      // 0x3E0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UFortItem>              ItemToCompareWith;                                 // 0x3E8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UFortItemManagementScreen> HostItemManagementScreen;                          // 0x3F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_209E[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortItemDetailsActivatablePanel* GetDefaultObj();

	void HandleDifferentItemToDetailSetBP();
	void HandleDifferentItemToCompareSetBP();
	void HandleConsumeItemProgressChangedBP();
};

// 0x18 (0x430 - 0x418)
// Class FortniteUI.FortItemDetailsModeActivatablePanel
class UFortItemDetailsModeActivatablePanel : public UFortItemDetailsActivatablePanel
{
public:
	class UCommonWidgetSwitcher*                 DetailPanelWidgetSwitcher;                         // 0x418(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_20A0[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortItemDetailsModeActivatablePanel* GetDefaultObj();

	void HandleOnActiveWidgetChanged(class UWidget* ActiveWidget, int32 ActiveWidgetIndex);
};

// 0x18 (0x430 - 0x418)
// Class FortniteUI.FortItemCompareModeActivatablePanel
class UFortItemCompareModeActivatablePanel : public UFortItemDetailsActivatablePanel
{
public:
	class UFortItemManagementItemDetailsPanel*   ComparisonModeLeftItemDetailsPanel;                // 0x418(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortItemManagementItemDetailsPanel*   ComparisonModeRightItemDetailsPanel;               // 0x420(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_20A1[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortItemCompareModeActivatablePanel* GetDefaultObj();

};

// 0x18 (0x430 - 0x418)
// Class FortniteUI.FortItemMulchModeActivatablePanel
class UFortItemMulchModeActivatablePanel : public UFortItemDetailsActivatablePanel
{
public:
	class UFortItemManagementItemDetailsPanel*   MulchModeItemDetailsPanel;                         // 0x418(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortItemManagementMulchDetailsPanel*  MulchDetailsPanel;                                 // 0x420(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_20A2[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortItemMulchModeActivatablePanel* GetDefaultObj();

};

// 0x18 (0x2A8 - 0x290)
// Class FortniteUI.FortItemManagementItemDetailsPanel
class UFortItemManagementItemDetailsPanel : public UFortItemDetailsHostPanel
{
public:
	bool                                         HasItemMarkedForMulching;                          // 0x290(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_20A3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TWeakObjectPtr<class UFortItemManagementScreen> HostItemManagementScreen;                          // 0x294(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_20A4[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortItemManagementItemDetailsPanel* GetDefaultObj();

	void HandleHostSet();
	void HandleHasItemMarkedForMulchingChanged();
};

// 0x18 (0x250 - 0x238)
// Class FortniteUI.FortItemManagementMulchDetailsPanel
class UFortItemManagementMulchDetailsPanel : public UCommonUserWidget
{
public:
	class UFortItemQuantityListBase*             ResourceList;                                      // 0x238(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UFortItemManagementScreen> HostItemManagementScreen;                          // 0x240(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_20A5[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortItemManagementMulchDetailsPanel* GetDefaultObj();

	void HandleSetOfItemsToMulchChangedBP();
	void HandleHostSet();
	TArray<class UFortItem*> GetItemsToMulch();
	TArray<int32> GetItemCountsToMulch();
	void CommitMulch();
};

// 0x30 (0x268 - 0x238)
// Class FortniteUI.FortItemManagementModeDetailsPanel
class UFortItemManagementModeDetailsPanel : public UCommonUserWidget
{
public:
	class UCommonWidgetSwitcher*                 ModeWidgetSwitcher;                                // 0x238(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortItemDetailsActivatablePanel*      DetailsModeItemDetailsPanel;                       // 0x240(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortItemDetailsActivatablePanel*      ComparisonModeItemDetailsPanel;                    // 0x248(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortItemDetailsActivatablePanel*      MulchModeItemDetailsPanel;                         // 0x250(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UFortItemManagementScreen> HostItemManagementScreen;                          // 0x258(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_20A6[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortItemManagementModeDetailsPanel* GetDefaultObj();

	void HandleHostSet();
	void HandleDifferentItemManagementModeSetBP();
	enum class EFortItemManagementMode GetItemManagementMode();
};

// 0x28 (0x260 - 0x238)
// Class FortniteUI.FortItemDetailsPanel
class UFortItemDetailsPanel : public UCommonUserWidget
{
public:
	TWeakObjectPtr<class UFortItem>              ItemToDetail;                                      // 0x238(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UFortItem>              ItemToCompareWith;                                 // 0x240(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_20A8[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortItemDetailsPanel* GetDefaultObj();

	void SetItemToDetail(class UFortItem* ItemToDetail);
	void SetItemToCompareWith(class UFortItem* ItemToCompareWith);
	void HandleItemToDetailChanged(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged);
	void HandleItemToCompareWithChanged(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged);
	void HandleDifferentItemToDetailSet();
	void HandleDifferentItemToCompareSet();
	void HandleCursorModeChanged(bool bCursorModeEnabled, class FName ActionName, class UUserWidget* CustomWidget);
};

// 0x30 (0x2C8 - 0x298)
// Class FortniteUI.FortItemDisplayNameText
class UFortItemDisplayNameText : public UCommonTextBlock
{
public:
	TWeakObjectPtr<class UFortItem>              ItemToRepresent;                                   // 0x298(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_20A9[0x28];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortItemDisplayNameText* GetDefaultObj();

	void SetItemToRepresent(class UFortItem* ItemToRepresent);
};

// 0xF0 (0x208 - 0x118)
// Class FortniteUI.FortItemIcon
class UFortItemIcon : public UWidget
{
public:
	class UFortItemDefinition*                   ItemDefinition;                                    // 0x118(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortBrushSize                    BrushSize;                                         // 0x120(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_20AA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          ColorAndOpacity;                                   // 0x124(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShadow;                                           // 0x134(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_20AB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          ShadowColorAndOpacity;                             // 0x138(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateBrush                           SmallPreviewImageBrush;                            // 0x148(0x90)(NativeAccessSpecifierPrivate)
	uint8                                        Pad_20AC[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortItemIcon* GetDefaultObj();

	void SetShadowColorAndOpacity(const struct FLinearColor& InColorAndOpacity);
	void SetOpacity(float InOpacity);
	void SetItemDefinition(class UFortItemDefinition* InItemDefinition);
	void SetColorAndOpacity(const struct FLinearColor& InColorAndOpacity);
	void SetBrushSize(enum class EFortBrushSize InBrushSize);
};

// 0xC8 (0x300 - 0x238)
// Class FortniteUI.FortItemManagementInventoryPanel
class UFortItemManagementInventoryPanel : public UCommonUserWidget
{
public:
	class FName                                  CurrentFilterName;                                 // 0x238(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EInventoryContentSortType         CurrentSortType;                                   // 0x240(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_20B1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UCommonButton>             FilterTabButtonType;                               // 0x248(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UCommonButtonStyle>        FilterTabButtonStyle;                              // 0x250(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FFortItemManagementInventoryFilterTabLabelInfo> FilterTabLabelInfoArray;                           // 0x258(0x10)(Edit, EditFixedSize, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class UFortTabListWidgetBase*                FilterTabList;                                     // 0x268(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonLoadGuard*                      TileViewLoadGuard;                                 // 0x270(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortItemTileView*                     TileView;                                          // 0x278(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPanelWidget*                          CraftingPanel;                                     // 0x280(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonLoadGuard*                      CraftingTileViewLoadGuard;                         // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortItemTileView*                     CraftingTileView;                                  // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                      MulchRestrictionReasonText;                        // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UFortItemManagementScreen> HostItemManagementScreen;                          // 0x2A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_20B2[0x58];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortItemManagementInventoryPanel* GetDefaultObj();

	void SetSortType(enum class EInventoryContentSortType SortType);
	void SetFilter(class FName FilterName);
	void RefreshCraftingSort();
	void HandleSetOfItemsToMulchChangedBP();
	void HandleQuickBarChangedBP(enum class EFortQuickBars QuickBarType);
	void HandleMulchQuantitySelection(class UFortItem* Item);
	void HandleItemWidgetCreated(class UUserWidget* ItemWidget);
	void HandleInventoryUpdatedEvent();
	void HandleInventoryItemSelected(class UObject* Item, bool bIsSelected);
	void HandleInventoryItemHovered(class UObject* Item);
	void HandleInventoryItemDoubleClicked(class UObject* Item);
	void HandleInventoryItemClicked(class UObject* Item);
	void HandleFilterTabSelected(class FName TabNameID);
	void HandleFilterTabButtonCreated(class FName TabNameID, class UCommonButton* TabButton);
	void HandleDifferentSortTypeSetBP();
	void HandleDifferentItemManagementModeSetBP();
	void HandleDifferentFrontendInventoryFilterSetBP();
	void HandleDifferentFilterSetBP();
	void HandleCursorModeChangedBP(bool bCursorModeEnabled, class FName ActionName, class UUserWidget* CursorModeContentWidget);
	void HandleCursorModeChanged(bool bCursorModeEnabled, class FName ActionName, class UUserWidget* CursorModeContentWidget);
	void HandleCraftItemStarted();
	TArray<class UFortItemDefinition*> GetUpgradeItemDefinitionsForCurrentInventory();
	TArray<enum class EInventoryContentSortType> GetSupportedSortTypesForCurrentInventory();
	class FText GetQualifiedFilterDisplayName();
	void CycleSortType();
	void AdvanceSelection();
	void AddItemStackToMulch(class UFortItem* Item, int32 Count);
};

// 0x58 (0x290 - 0x238)
// Class FortniteUI.FortItemPickerBase
class UFortItemPickerBase : public UCommonUserWidget
{
public:
	UMulticastDelegateProperty_                  OnSelectionChangedEvent;                           // 0x238(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnSelectionCommittedEvent;                         // 0x248(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnItemHoveredEvent;                                // 0x258(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnItemUnhovered;                                   // 0x268(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UFortItemTileView*                     PickerTileView;                                    // 0x278(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TScriptInterface<class IFortItemViewContextInterface> ItemViewContext;                                   // 0x280(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortItemPickerBase* GetDefaultObj();

	bool TryCommitSelectedItem();
	void SetSelectedItem(class UFortItem* ItemToSelect);
	bool SetSelectedIndex(int32 Index);
	void OnItemSelectionEvent__DelegateSignature(class UFortItem* SelectedItem);
	void HandlePickerTileDestroyed(class UUserWidget* Widget);
	void HandlePickerTileCreated(class UUserWidget* Widget);
	void HandlePickerItemSelected(class UObject* ObjectWhoseSelectionChanged, bool bIsSelected);
	void HandlePickerItemHovered(class UObject* ObjectOfHoveredTile);
	void HandlePickerItemDoubleClicked(class UObject* ObjectOfClickedTile);
	void HandlePickerItemClicked(class UObject* ObjectOfClickedTile);
	class UFortItem* GetSelectedItem();
	int32 GetIndexForItem(class UObject* Item);
	void ClearSelection();
	void CenterSelectedItemTileWidget();
	bool CanItemBeComitted(class UFortItem* ItemToCommit);
};

// 0x20 (0x2B0 - 0x290)
// Class FortniteUI.FortCollectionBookPicker
class UFortCollectionBookPicker : public UFortItemPickerBase
{
public:
	UMulticastDelegateProperty_                  OnSlotItemConfirmationCompleteEvent;               // 0x290(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_20B9[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortAccountItem*                      CurrentSlottedItem;                                // 0x2A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortCollectionBookPicker* GetDefaultObj();

	void SlotItemConfirmationComplete(class UFortItem* CommittedItem, const struct FFortDialogExternalLatentActionHandle& LatentActionHandle);
	void OnSlotItemConfirmed__DelegateSignature(class UFortItem* ItemToSlot, class FName SlotId, const struct FFortDialogExternalLatentActionHandle& LatentActionHandle);
	class UFortAccountItem* GetCurrentSlottedItem();
};

// 0x70 (0x300 - 0x290)
// Class FortniteUI.FortOutpostStorageItemPicker
class UFortOutpostStorageItemPicker : public UFortItemPickerBase
{
public:
	TWeakObjectPtr<class UFortItemDetailsPanel>  DetailsPanel;                                      // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_20BA[0x68];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortOutpostStorageItemPicker* GetDefaultObj();

	void UseFilters(const TArray<enum class EFortItemType>& ItemTypes);
	void UseFilter(enum class EFortItemType ItemType);
};

// 0xE0 (0x370 - 0x290)
// Class FortniteUI.FortSquadSlotItemPicker
class UFortSquadSlotItemPicker : public UFortItemPickerBase
{
public:
	uint8                                        Pad_20BD[0xE0];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortSquadSlotItemPicker* GetDefaultObj();

	void SetIdOfSquadSlotToManageBP(class FName& SquadId, int32 SquadSlotIndex);
	void GetIdOfSquadSlotToManageBP(class FName* OutSquadId, int32* OutSquadSlotIndex);
};

// 0x70 (0x300 - 0x290)
// Class FortniteUI.FortTransformKeyPicker
class UFortTransformKeyPicker : public UFortItemPickerBase
{
public:
	uint8                                        Pad_20BE[0x70];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortTransformKeyPicker* GetDefaultObj();

	void RebuildTransformKeys(TArray<class UObject*>& InDataProvider);
};

// 0x10 (0x2A0 - 0x290)
// Class FortniteUI.FortTransformSlotItemPicker
class UFortTransformSlotItemPicker : public UFortItemPickerBase
{
public:
	uint8                                        Pad_20C0[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortTransformSlotItemPicker* GetDefaultObj();

	void RebuildSlottableItems(TArray<enum class EFortInventoryFilter>& ItemFilters, enum class EFortItemType ItemType, TArray<class UFortItem*>& ItemsToIgnore);
};

// 0x70 (0x300 - 0x290)
// Class FortniteUI.FortTrapDefenderItemPicker
class UFortTrapDefenderItemPicker : public UFortItemPickerBase
{
public:
	class UFortItemDetailsHostPanel*             DetailsPanel;                                      // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class ABuildingTrapDefender>  DefenderTrap;                                      // 0x298(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_20C1[0x60];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortTrapDefenderItemPicker* GetDefaultObj();

	void HandleSelectionCommittedBP(class UFortItem* CommittedItem);
};

// 0x28 (0x260 - 0x238)
// Class FortniteUI.FortItemQuantityListEntryBase
class UFortItemQuantityListEntryBase : public UCommonUserWidget
{
public:
	uint8                                        Pad_20C4[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Quantity;                                          // 0x240(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_20C5[0x1C];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortItemQuantityListEntryBase* GetDefaultObj();

	void SetPreviewData(struct FFortItemEntryPreviewData& PreviewData);
	void SetItemInstanceAndQuantity(struct FFortItemInstanceQuantityPair& ItemQuantityPair, bool ShouldTreatAsReset);
	void SetItemDefinitionAndQuantity(struct FFortItemQuantityPair& ItemQuantityPair, bool ShouldTreatAsReset);
	void PreviewStarted();
	void PreviewEnded();
	bool IsBeingPreviewed();
	void HandleDifferentItemOrQuantitySetBP(bool IsBeingReset);
	void GetPreviewData(struct FFortItemEntryPreviewData* OutPreviewData);
	class UFortItem* GetItemInstance();
	class UFortItemDefinition* GetItemDefinition();
	void ClearPreviewData();
};

// 0x78 (0x2B0 - 0x238)
// Class FortniteUI.FortItemQuantityListBase
class UFortItemQuantityListBase : public UCommonUserWidget
{
public:
	TSubclassOf<class UFortItemQuantityListEntryBase> ListEntryWidgetType;                               // 0x238(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TMap<class UObject*, class UFortItemQuantityListEntryBase*> ItemObjectToWidgetMap;                             // 0x240(0x50)(ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_20C8[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortItemQuantityListBase* GetDefaultObj();

	void SetItemToCompareDefinitionsAndQuantities(TArray<struct FFortItemQuantityPair>& ItemToCompareQuantityPairs);
	void SetItemInstancesAndQuantities(TArray<struct FFortItemInstanceQuantityPair>& ItemQuantityPairs, bool ShouldResetWidgets);
	void SetItemDefinitionsAndQuantities(TArray<struct FFortItemQuantityPair>& ItemQuantityPairs, bool ShouldResetWidgets);
	bool IsEmptyList();
	TArray<class UFortItemDefinition*> GetItemDefinitions();
	void AddListEntry(class UFortItemQuantityListEntryBase* ListEntry);
};

// 0x398 (0x5D0 - 0x238)
// Class FortniteUI.FortItemRatingIndicator
class UFortItemRatingIndicator : public UCommonUserWidget
{
public:
	TWeakObjectPtr<class UFortItem>              ItemToRepresent;                                   // 0x238(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UFortItem>              ItemToCompareWith;                                 // 0x240(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortMultiSizeBrush                   RatingTypeIcon;                                    // 0x248(0x360)(BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	int32                                        RatingValue;                                       // 0x5A8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EFortBuffState                    ComparisonResult;                                  // 0x5AC(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         ShouldAppearEnchanted;                             // 0x5AD(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_20C9[0x22];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortItemRatingIndicator* GetDefaultObj();

	void SetItemViewContext(TScriptInterface<class IFortItemViewContextInterface> ItemViewContext);
	void SetItemToRepresent(class UFortItem* ItemToRepresent);
	void SetItemToCompareWith(class UFortItem* ItemToCompareWith);
	void HandleViewModelChanged();
};

// 0x30 (0x8D0 - 0x8A0)
// Class FortniteUI.FortItemTileButton
class UFortItemTileButton : public UCommonButton
{
public:
	uint8                                        Pad_20CA[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortMultiSizeItemCard*                ItemWidget;                                        // 0x8A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UFortItem>              Item;                                              // 0x8B0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EFortItemCardSize                 ItemCardSize;                                      // 0x8B8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         IsRewardCard;                                      // 0x8B9(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_20CB[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IFortItemViewContextInterface> ItemViewContext;                                   // 0x8C0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortItemTileButton* GetDefaultObj();

};

// 0x0 (0x8D0 - 0x8D0)
// Class FortniteUI.AthenaInventoryFortItemTileButtonBase
class UAthenaInventoryFortItemTileButtonBase : public UFortItemTileButton
{
public:

	static class UClass* StaticClass();
	static class UAthenaInventoryFortItemTileButtonBase* GetDefaultObj();

	void HandleEquipSlotChanged(int32 EquipSlot);
};

// 0x38 (0x908 - 0x8D0)
// Class FortniteUI.FortItemManagementItemTileButton
class UFortItemManagementItemTileButton : public UFortItemTileButton
{
public:
	bool                                         HasTheItemToDetail;                                // 0x8D0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         HasTheItemToCompareDetailsWith;                    // 0x8D1(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         HasAnItemMarkedForMulching;                        // 0x8D2(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_20CC[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MulchCount;                                        // 0x8D4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UOverlay*                              NotCraftableOverlay;                               // 0x8D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UFortItemManagementScreen> HostItemManagementScreen;                          // 0x8E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_20CD[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortItemManagementItemTileButton* GetDefaultObj();

	void HandleItemMulchStateChanged();
	void HandleHasItemToDetailChanged();
	void HandleHasItemToCompareDetailsWithChanged();
	void HandleEquipSlotChanged(int32 EquipSlot);
	void HandleDifferentItemManagementModeSetBP();
	enum class EFortItemManagementMode GetItemManagementMode();
};

// 0x0 (0x8D0 - 0x8D0)
// Class FortniteUI.FortItemPickerButton
class UFortItemPickerButton : public UFortItemTileButton
{
public:

	static class UClass* StaticClass();
	static class UFortItemPickerButton* GetDefaultObj();

};

// 0x18 (0x8E8 - 0x8D0)
// Class FortniteUI.FortSquadSlotItemPickerTileButton
class UFortSquadSlotItemPickerTileButton : public UFortItemPickerButton
{
public:
	uint8                                        Pad_20CE[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortSquadSlotItemPickerTileButton* GetDefaultObj();

	void HandleSlottingRestrictionReasonsChanged();
	void HandleItemSlottedToDifferentSquad(struct FHomebaseSquadSlotId& SquadSlotId);
	TArray<enum class EFortSquadSlottingRestrictionReason> GetSlottingRestrictionReasons();
};

// 0x0 (0x8D0 - 0x8D0)
// Class FortniteUI.FortTransformKeyPickerTileButton
class UFortTransformKeyPickerTileButton : public UFortItemPickerButton
{
public:

	static class UClass* StaticClass();
	static class UFortTransformKeyPickerTileButton* GetDefaultObj();

};

// 0x0 (0x8D0 - 0x8D0)
// Class FortniteUI.FortTransformSlotItemPickerTileButton
class UFortTransformSlotItemPickerTileButton : public UFortItemPickerButton
{
public:

	static class UClass* StaticClass();
	static class UFortTransformSlotItemPickerTileButton* GetDefaultObj();

};

// 0x120 (0x450 - 0x330)
// Class FortniteUI.FortItemTileView
class UFortItemTileView : public UCommonTileView
{
public:
	struct FFortItemFilterDefinition             Filter;                                            // 0x330(0x60)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FFortItemSorterDefinition             Sorter;                                            // 0x390(0x50)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         bShouldShowNullItemTile;                           // 0x3E0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAutomaticallyLoadItemDetails;                     // 0x3E1(0x1)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EItemTileViewDisplayType          DisplayType;                                       // 0x3E2(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_20CF[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnInventoryUpdatedEvent;                           // 0x3E8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_20D0[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TWeakObjectPtr<class UFortItem>>      ItemsForTileView;                                  // 0x410(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)
	TScriptInterface<class IFortItemViewContextInterface> ItemViewContext;                                   // 0x420(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_20D1[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortItemTileView* GetDefaultObj();

	void ShowNullItemTile();
	void SetSorter(struct FFortItemSorterDefinition& Sorter);
	void SetItemViewContext(TScriptInterface<class IFortItemViewContextInterface> ItemViewContext);
	void SetFilterAndSorter(struct FFortItemFilterDefinition& Filter, struct FFortItemSorterDefinition& Sorter);
	void SetFilter(struct FFortItemFilterDefinition& Filter);
	void RefreshSort();
	void RefreshFilterAndSort();
	void OnInventoryUpdated__DelegateSignature();
	void HideNullItemTile();
	void HandleItemWidgetCreated(class UUserWidget* Widget);
	void CenterSelectedItemTileWidget();
};

// 0x0 (0x3E0 - 0x3E0)
// Class FortniteUI.FortItemTransform
class UFortItemTransform : public UCommonActivatablePanel
{
public:

	static class UClass* StaticClass();
	static class UFortItemTransform* GetDefaultObj();

	void ProcessPendingSeenTransformKeys();
};

// 0x40 (0x180 - 0x140)
// Class FortniteUI.FortMultiSizeItemCard
class UFortMultiSizeItemCard : public UFortItemWidget_NUI
{
public:
	enum class EFortItemCardSize                 BPItemCardSize;                                    // 0x140(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShouldDisplayItemAsReward;                         // 0x141(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_20D8[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        QuantityOverride;                                  // 0x144(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortItemType                     EmptyItemType;                                     // 0x148(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_20D9[0x37];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortMultiSizeItemCard* GetDefaultObj();

	void SetShouldDisplayItemAsReward(bool Value);
	void SetQuantityOverride(int32 QuantityOverride);
	void SetCardSize(enum class EFortItemCardSize CardSize);
	enum class EFortItemCardSize GetCardSize();
};

// 0x8 (0x240 - 0x238)
// Class FortniteUI.FortJournalQuestDetails
class UFortJournalQuestDetails : public UCommonUserWidget
{
public:
	class UFortQuestItem*                        CurrentQuest;                                      // 0x238(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFortJournalQuestDetails* GetDefaultObj();

	void SetCurrentQuest(class UFortQuestItem* InCurrentQuest);
	void HandleCurrentQuestChangedBP();
	void GetVisibleObjectives(TArray<class UFortQuestObjectiveInfo*>* VisibleObjectives);
	void GetRewards(TArray<struct FFortItemInstanceQuantityPair>* OutRewards, TArray<struct FFortItemInstanceQuantityPair>* OutSelectableRewards);
	void GetFutureObjectives(TArray<class UFortQuestObjectiveInfo*>* FutureObjectives);
	enum class EFortTheaterMapTileType GetActiveMissionTileType();
	bool CanPlayQuest();
	bool CanPartyLeaderPlayQuest();
	bool CanGotoQuest();
};

// 0x10 (0x248 - 0x238)
// Class FortniteUI.FortJournalQuestProgressBar
class UFortJournalQuestProgressBar : public UCommonUserWidget
{
public:
	uint8                                        Pad_20DB[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TWeakObjectPtr<class UFortQuestObjectiveInfo> QuestObjectiveInfo;                                // 0x240(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortJournalQuestProgressBar* GetDefaultObj();

	void HandleNewQuestObjectiveBP();
	void GetProgressDetails(class FText* OutNumerator, class FText* OutDenominator, float* OutFraction);
};

// 0x0 (0x28 - 0x28)
// Class FortniteUI.FortLeaderboardContext
class UFortLeaderboardContext : public UBlueprintContextBase
{
public:

	static class UClass* StaticClass();
	static class UFortLeaderboardContext* GetDefaultObj();

	bool CanShowStats();
	bool CanShowLeaderboards();
};

// 0x10 (0x8B0 - 0x8A0)
// Class FortniteUI.FortLeaderboardEntryWidget
class UFortLeaderboardEntryWidget : public UCommonButton
{
public:
	uint8                                        Pad_20DC[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               LeaderboardEntryObject;                            // 0x8A8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortLeaderboardEntryWidget* GetDefaultObj();

	void OnLeaderboardEntryDataSet();
};

// 0x18 (0x140 - 0x128)
// Class FortniteUI.FortLegacySlateBridgeWidget
class UFortLegacySlateBridgeWidget : public UNativeWidgetHost
{
public:
	enum class EFortLegacySlateWidget            ContainedWidgetType;                               // 0x128(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_20DD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DPIScaleFactor;                                    // 0x12C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	UDelegateProperty_                           OnClose;                                           // 0x130(0x10)(ZeroConstructor, Transient, InstancedReference, NoDestructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortLegacySlateBridgeWidget* GetDefaultObj();

	void UpdateSlateWidget(enum class EFortLegacySlateWidget SlateWidgetType);
	void SetOnCloseHandler(UDelegateProperty_& OnCloseHandler);
};

// 0x78 (0x190 - 0x118)
// Class FortniteUI.FortLevelIndicator
class UFortLevelIndicator : public UWidget
{
public:
	TWeakObjectPtr<class UFortItem>              ItemToRepresent;                                   // 0x118(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UFortItem>              ItemForComparison;                                 // 0x120(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShouldShowLabel;                                   // 0x128(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_20DE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UCommonTextStyle>          TextStyle;                                         // 0x130(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShouldShowMaximumLevel;                            // 0x138(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_20DF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CurrentLevel;                                      // 0x13C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaximumLevel;                                      // 0x140(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsComparingLevels;                                 // 0x144(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortBrushSize                    ComparisonResultIndicatorSize;                     // 0x145(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_20E0[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CurrentLevelForComparison;                         // 0x148(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaximumLevelForComparison;                         // 0x14C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCommonTextBlock*                      LabelTextBlock;                                    // 0x150(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonNumericTextBlock*               CurrentLevelNumericTextBlock;                      // 0x158(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_20E1[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonTextBlock*                      DivisionOperatorTextBlock;                         // 0x170(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonNumericTextBlock*               MaximumLevelNumericTextBlock;                      // 0x178(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_20E2[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortLevelIndicator* GetDefaultObj();

	void SetShouldShowMaximumLevel(bool InShouldShowMaximumLevel);
	void SetItemToRepresent(class UFortItem* ItemToRepresent);
	void SetItemForComparison(class UFortItem* ItemForComparison);
	void HandleItemToRepresentChanged(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged);
	void HandleItemForComparisonChanged(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged);
};

// 0x68 (0x180 - 0x118)
// Class FortniteUI.FortListView
class UFortListView : public UTableViewBase
{
public:
	UMulticastDelegateProperty_                  OnItemClicked;                                     // 0x118(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnItemSelected;                                    // 0x128(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UDelegateProperty_                           OnGenerateRowEvent;                                // 0x138(0x10)(Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	float                                        ItemHeight;                                        // 0x148(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_20E7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UObject*>                       DataProvider;                                      // 0x150(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	enum class ESelectionMode                    SelectionMode;                                     // 0x160(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EConsumeMouseWheel                ConsumeMouseWheel;                                 // 0x161(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_20E8[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UFortListItem>             ListItemClass;                                     // 0x168(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_20E9[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortListView* GetDefaultObj();

	bool SetItemSelected(class UObject* Item);
	bool SetIndexSelected(int32 Index);
	void SetDataProvider(TArray<class UObject*>& NewData);
	void RemoveItemAt(int32 Index);
	class UObject* GetItemAt(int32 Index);
	int32 GetIndexForItem(class UObject* Item);
	void ClearSelection();
	void Clear();
	void AddItem(class UObject* NewItem);
};

// 0x0 (0x238 - 0x238)
// Class FortniteUI.FortLiveStreamGrantWindowExpires
class UFortLiveStreamGrantWindowExpires : public UCommonUserWidget
{
public:

	static class UClass* StaticClass();
	static class UFortLiveStreamGrantWindowExpires* GetDefaultObj();

};

// 0x50 (0x430 - 0x3E0)
// Class FortniteUI.FortLobby
class UFortLobby : public UCommonActivatablePanel
{
public:
	uint8                                        Pad_20EA[0x40];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UOverlay*                              OverlayMain;                                       // 0x420(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_20EB[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortLobby* GetDefaultObj();

	void OnPlayerClicked(int32 PlayerIndex);
	void OnNavigationRight();
	void OnNavigationLeft();
	void OnEndCursorOverPlayer(int32 PlayerIndex);
	void OnBeginCursorOverPlayer(int32 PlayerIndex);
};

// 0x10 (0x3F0 - 0x3E0)
// Class FortniteUI.FortLoginAccountSelect
class UFortLoginAccountSelect : public UCommonActivatablePanel
{
public:
	UMulticastDelegateProperty_                  OnLoginAccountTypeSelected;                        // 0x3E0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFortLoginAccountSelect* GetDefaultObj();

	void ChooseLoginAccountType(enum class EFortLoginAccountType LoginAccountType);
};

// 0x70 (0x450 - 0x3E0)
// Class FortniteUI.FortMainTabsScreenBase
class UFortMainTabsScreenBase : public UCommonActivatablePanel
{
public:
	TMap<enum class EFortUIFeature, class FName> FeaturesTabsMap;                                   // 0x3E0(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class UHorizontalBox*                        TopTabContainer;                                   // 0x430(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortTabListWidgetBase*                TopTabList;                                        // 0x438(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_20EC[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortMainTabsScreenBase* GetDefaultObj();

	void HandleRefreshSkillTreeNodePage();
	void HandleMainTabSelected(class FName TabNameID);
	void HandleMainTabCreated(class FName TabNameID, class UCommonButton* TabButton);
	void HandleFeatureStateChanged(enum class EFortUIFeature ChangedFeature, enum class EFortUIFeatureState NewState);
	void HandleFeatureNavigateRequest(enum class EFortUIFeature Feature);
	void ConstructTabs();
};

// 0x118 (0x140 - 0x28)
// Class FortniteUI.FortMaterialProgressBarStyle
class UFortMaterialProgressBarStyle : public UObject
{
public:
	class FName                                  BackgroundColorParamName;                          // 0x28(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          BackgroundColor;                                   // 0x30(0x10)(Edit, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortMaterialProgressBarSectionStyle  BarSectionStyles[0x4];                             // 0x40(0x100)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFortMaterialProgressBarStyle* GetDefaultObj();

};

// 0x158 (0x390 - 0x238)
// Class FortniteUI.FortMaterialProgressBar
class UFortMaterialProgressBar : public UCommonUserWidget
{
public:
	TSubclassOf<class UFortMaterialProgressBarStyle> Style;                                             // 0x238(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  BackgroundColorParamName;                          // 0x240(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                          BackgroundColor;                                   // 0x248(0x10)(Edit, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EFortMaterialProgressBarSectionOverflowBehavior OverflowBehavior;                                  // 0x258(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_20F0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortMaterialProgressBarSectionInfo   BarSectionInfo[0x4];                               // 0x260(0x120)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	class UCommonBorder*                         ProgressBar;                                       // 0x380(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInstanceDynamic*              ProgressBarMID;                                    // 0x388(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortMaterialProgressBar* GetDefaultObj();

	void SetStyle(TSubclassOf<class UFortMaterialProgressBarStyle> BarStyle);
	void SetProgressBarSectionPercent(enum class EFortMaterialProgressBarSection BarSection, float Percent);
	void SetProgressBarSectionColor(enum class EFortMaterialProgressBarSection BarSection, const struct FLinearColor& Color, enum class EFortMaterialProgressBarSectionColorNumber ColorNumber);
	void SetBackgroundColor(const struct FLinearColor& Color);
};

// 0x28 (0x260 - 0x238)
// Class FortniteUI.FortMicIndicatorWidget
class UFortMicIndicatorWidget : public UCommonUserWidget
{
public:
	uint8                                        Pad_20F1[0x28];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortMicIndicatorWidget* GetDefaultObj();

	void SetPlayerUniqueId(struct FUniqueNetIdRepl& InPlayerUniqueId);
	void OnPlayerTalkingChanged(bool bIsTalking);
	void OnPlayerMuted(bool bIsMuted);
	void OnPlayerMicAvailable(bool bIsTalking);
};

// 0x60 (0x440 - 0x3E0)
// Class FortniteUI.FortMissionSelect
class UFortMissionSelect : public UCommonActivatablePanel
{
public:
	uint8                                        Pad_20F2[0x40];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnNavigation;                                      // 0x420(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UCommonBorder*                         MainBorder;                                        // 0x430(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_20F3[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortMissionSelect* GetDefaultObj();

	bool NavigateMissionTiles(enum class EUINavigation Direction);
};

// 0xA8 (0x2E0 - 0x238)
// Class FortniteUI.FortMissionTrackerEntry
class UFortMissionTrackerEntry : public UCommonUserWidget
{
public:
	uint8                                        Pad_20F4[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnMissionEntryVisibilityChanged;                   // 0x240(0x10)(ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic)
	TSubclassOf<class UFortMissionTrackerSubEntry> SubEntryClass;                                     // 0x250(0x8)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bConfigureAsHUD;                                   // 0x258(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bHiddenByHeightConstraint;                         // 0x259(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_20F5[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonTextBlock*                      MissionNameText;                                   // 0x260(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UVerticalBox*                          ObjectivesListBox;                                 // 0x268(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                UpperSeparator;                                    // 0x270(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AFortMission*                          TrackedMission;                                    // 0x278(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	UMulticastDelegateProperty_                  OnSizeEstimateChangedDelegate;                     // 0x280(0x10)(ZeroConstructor, InstancedReference, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_20F6[0x50];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortMissionTrackerEntry* GetDefaultObj();

	void UpdateVisibility();
	void OnMissionSet();
	void HandleObjectivesChanged();
};

// 0x38 (0x270 - 0x238)
// Class FortniteUI.FortMissionTrackerSubEntry
class UFortMissionTrackerSubEntry : public UCommonUserWidget
{
public:
	uint8                                        Pad_20F7[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnMissionSubEntryVisibilityChanged;                // 0x240(0x10)(ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic)
	bool                                         bConfigureAsHUD;                                   // 0x250(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bHiddenByHeightConstraint;                         // 0x251(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_20F8[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortObjectiveBase*                    TrackedObjective;                                  // 0x258(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	UMulticastDelegateProperty_                  OnSizeEstimateChangedDelegate;                     // 0x260(0x10)(ZeroConstructor, InstancedReference, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortMissionTrackerSubEntry* GetDefaultObj();

	void OnObjectiveSet();
	void OnHiddenByHeightConstraintChanged();
	void NotifyVisibilityChanged();
};

// 0x10 (0x38 - 0x28)
// Class FortniteUI.FortModalContainerData
class UFortModalContainerData : public UDataAsset
{
public:
	TArray<struct FFortModalContainerSizeEntry>  Entries;                                           // 0x28(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFortModalContainerData* GetDefaultObj();

};

// 0x58 (0x170 - 0x118)
// Class FortniteUI.FortModalContainerWidget
class UFortModalContainerWidget : public UWidget
{
public:
	uint8                                        Pad_20F9[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EModalContainerSize               SizeConstraint;                                    // 0x120(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_20FA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFortModalContainerSizeEntry>  DefaultSizeEntries;                                // 0x128(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	class UFortModalContainerData*               OverrideSizeEntries;                               // 0x138(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                               TopContent;                                        // 0x140(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UWidget*                               MiddleContent;                                     // 0x148(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UWidget*                               BottomContent;                                     // 0x150(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UWidget*                               BackgroudContent;                                  // 0x158(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_20FB[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortModalContainerWidget* GetDefaultObj();

};

// 0xA8 (0x948 - 0x8A0)
// Class FortniteUI.FortMtxStoreOfferBase
class UFortMtxStoreOfferBase : public UCommonButton
{
public:
	class UFortMtxOfferData*                     OfferDisplayAsset;                                 // 0x8A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FMtxPackage                           MtxOffer;                                          // 0x8A8(0xA0)(Transient, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortMtxStoreOfferBase* GetDefaultObj();

	struct FSlateBrush GetTileImage();
	enum class EFortMtxStoreOfferType GetStoreOfferType();
	bool GetSalePrice(class FText* SalePrice);
	class FString GetOfferId();
	class FText GetNormalPrice();
	class FText GetName();
	struct FFortMtxGradient GetGradient();
	struct FSlateBrush GetDetailsImage();
	TArray<struct FFortMtxDetailsAttribute> GetDetailsAttributes();
	class FText GetDescription();
	int32 GetBonusQuantity();
	int32 GetBaseQuantity();
	struct FLinearColor GetBackground();
};

// 0x40 (0x420 - 0x3E0)
// Class FortniteUI.FortMtxStoreRootBase
class UFortMtxStoreRootBase : public UCommonActivatablePanel
{
public:
	uint8                                        Pad_20FE[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UFortMtxStoreOfferBase>    MtxOfferWidgetClass;                               // 0x3E8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIncludeCurrency;                                  // 0x3F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_20FF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FMtxPackage>                   MtxOffers;                                         // 0x3F8(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_2100[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortMtxStoreRootBase* GetDefaultObj();

	void OnStartReadingOffers();
	void OnOffersGenerated();
	void OnMtxOfferGenerated(class UFortMtxStoreOfferBase* MtxOffer);
	void NoOffersAvailable();
	void HandleMtxPackagesRead(TArray<struct FMtxPackage>& Offers);
	enum class EFortMtxStoreOfferType GetStoreOfferType(const struct FMtxPackage& Package);
	bool AreOffersLoaded();
};

// 0x388 (0x4A0 - 0x118)
// Class FortniteUI.FortMultiSizeImage
class UFortMultiSizeImage : public UWidget
{
public:
	struct FFortMultiSizeBrush                   MultiSizeBrush;                                    // 0x118(0x360)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	enum class EFortBrushSize                    BrushSize;                                         // 0x478(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2101[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          ColorAndOpacity;                                   // 0x47C(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2102[0x14];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortMultiSizeImage* GetDefaultObj();

	void SetMultiSizeBrush(struct FFortMultiSizeBrush& MultiSizeBrush);
	void SetColorAndOpacity(struct FLinearColor& Color);
	void SetBrushSize(enum class EFortBrushSize BrushSize);
};

// 0x8 (0x4A8 - 0x4A0)
// Class FortniteUI.FortComparisonResultIndicator
class UFortComparisonResultIndicator : public UFortMultiSizeImage
{
public:
	bool                                         bShouldCollapseWhenNotShown;                       // 0x4A0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortBuffState                    ComparisonResult;                                  // 0x4A1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2103[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortComparisonResultIndicator* GetDefaultObj();

	void SetComparisonResult(enum class EFortBuffState ComparisonResult);
};

// 0x8 (0x4A8 - 0x4A0)
// Class FortniteUI.FortSimpleItemConditionIconIndicator
class UFortSimpleItemConditionIconIndicator : public UFortMultiSizeImage
{
public:
	bool                                         bShouldCollapseWhenConditionIsFalse;               // 0x4A0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2104[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortSimpleItemConditionIconIndicator* GetDefaultObj();

	void ShouldCollapseWhenConditionIsFalse(bool Value);
	void SetItemToRepresent(class UFortItem* ItemToRepresent);
	class UFortItem* GetItemToRepresent();
};

// 0x0 (0x4A8 - 0x4A8)
// Class FortniteUI.FortEvolveIndicator
class UFortEvolveIndicator : public UFortSimpleItemConditionIconIndicator
{
public:

	static class UClass* StaticClass();
	static class UFortEvolveIndicator* GetDefaultObj();

};

// 0x0 (0x4A8 - 0x4A8)
// Class FortniteUI.FortFavoriteIndicator
class UFortFavoriteIndicator : public UFortSimpleItemConditionIconIndicator
{
public:

	static class UClass* StaticClass();
	static class UFortFavoriteIndicator* GetDefaultObj();

};

// 0x0 (0x4A8 - 0x4A8)
// Class FortniteUI.FortInventoryOverflowIndicator
class UFortInventoryOverflowIndicator : public UFortSimpleItemConditionIconIndicator
{
public:

	static class UClass* StaticClass();
	static class UFortInventoryOverflowIndicator* GetDefaultObj();

};

// 0x0 (0x4A8 - 0x4A8)
// Class FortniteUI.FortTrackedIndicator
class UFortTrackedIndicator : public UFortSimpleItemConditionIconIndicator
{
public:

	static class UClass* StaticClass();
	static class UFortTrackedIndicator* GetDefaultObj();

};

// 0x0 (0x4A8 - 0x4A8)
// Class FortniteUI.FortUpgradeIndicator
class UFortUpgradeIndicator : public UFortSimpleItemConditionIconIndicator
{
public:

	static class UClass* StaticClass();
	static class UFortUpgradeIndicator* GetDefaultObj();

};

// 0x50 (0x298 - 0x248)
// Class FortniteUI.FortNumericTextBlock
class UFortNumericTextBlock : public UTextBlock
{
public:
	UMulticastDelegateProperty_                  CountFinished;                                     // 0x248(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	int32                                        StartingValue;                                     // 0x258(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DestValue;                                         // 0x25C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseGrouping;                                      // 0x260(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAsCurrency;                                       // 0x261(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2105[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        EaseOutExp;                                        // 0x264(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        UpdateInterval;                                    // 0x268(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ShrinkTime;                                        // 0x26C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2106[0x28];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortNumericTextBlock* GetDefaultObj();

	bool IsInterpolatingNumber();
	void InterpolateSet(int32 InValue, float InUpdateLength, float InReportEndEarly);
	int32 GetCurrentValue();
	void DirectlySet(int32 InValue);
};

// 0x0 (0x3E0 - 0x3E0)
// Class FortniteUI.FortOptionsMenu
class UFortOptionsMenu : public UCommonActivatablePanel
{
public:

	static class UClass* StaticClass();
	static class UFortOptionsMenu* GetDefaultObj();

	void UpdateEula();
	bool ShowVideoOptions();
	bool ShowInputOptions();
	bool ShowGameOptions();
	bool ShowControllerOptions();
	void ResetClientHUDSettings();
	void OnVideoAccept();
	void OnResetToDefaults();
	void OnReset();
	void OnApply();
	bool NeedsVideoChangeConfirmation();
	bool NeedsLanguageChangeConfirmation();
	void HandleSettingsErrorMessageClosed();
	void HandleBenchmarkComplete();
};

// 0x58 (0x80 - 0x28)
// Class FortniteUI.FortOptionsMenuInputData
class UFortOptionsMenuInputData : public UDataAsset
{
public:
	class FText                                  DisplayText;                                       // 0x28(0x18)(BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  PrimaryText;                                       // 0x40(0x18)(BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  SecondaryText;                                     // 0x58(0x18)(BlueprintVisible, NativeAccessSpecifierPublic)
	int32                                        ElementNumber;                                     // 0x70(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2107[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonTextBlock*                      TabText;                                           // 0x78(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFortOptionsMenuInputData* GetDefaultObj();

};

// 0x10 (0x248 - 0x238)
// Class FortniteUI.FortOptionsTab
class UFortOptionsTab : public UCommonUserWidget
{
public:
	UMulticastDelegateProperty_                  OnTabSettingChanged;                               // 0x238(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFortOptionsTab* GetDefaultObj();

	void UpdateOptionsTab();
	bool IsXboxPlatform();
	bool IsPS4Platform();
	bool IsAthena();
	void CenterOnTab();
};

// 0x0 (0x248 - 0x248)
// Class FortniteUI.FortAccountOptions
class UFortAccountOptions : public UFortOptionsTab
{
public:

	static class UClass* StaticClass();
	static class UFortAccountOptions* GetDefaultObj();

};

// 0x0 (0x248 - 0x248)
// Class FortniteUI.FortAudioOptions
class UFortAudioOptions : public UFortOptionsTab
{
public:

	static class UClass* StaticClass();
	static class UFortAudioOptions* GetDefaultObj();

	void SoundFXVolumeChanged(float NewValue);
	bool ShowQuality();
	bool ShowChatVolume();
	void SetVoiceChatPTTEnabled(bool bNewValue);
	void SetVoiceChatEnabled(bool bNewValue);
	void SetSubtitlesEnabled(bool bNewValue);
	void SetQuality(int32 NewQuality);
	void MusicVolumeChanged(float NewValue);
	bool GetVoiceChatPTTEnabled();
	bool GetVoiceChatEnabled();
	bool GetSubtitlesEnabled();
	float GetSoundFXVolumeValue();
	int32 GetQuality();
	float GetMusicVolumeValue();
	float GetDialogVolumeValue();
	float GetChatVolumeValue();
	void DialogVolumeChanged(float NewValue);
	void ChatVolumeChanged(float NewValue);
};

// 0x40 (0x288 - 0x248)
// Class FortniteUI.FortGameOptions
class UFortGameOptions : public UFortOptionsTab
{
public:
	float                                        MinGammaValue;                                     // 0x248(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxGammaValue;                                     // 0x24C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UFortHUDVisibilityData*>        HUDData;                                           // 0x250(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class UCommonListView*                       HUDCommonListView;                                 // 0x260(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_210A[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortGameOptions* GetDefaultObj();

	void UpdatePossibleLanguages();
	void UpdateHUDSettings(const struct FGameplayTag& HUDMapping, bool NewVisibility);
	void UpdateGammaSettings(float GammaValue);
	void TargetingMultiplierValueChanged(float NewValue);
	void TapInteractChanged(bool bInChecked);
	void SprintToggleChanged(bool bInChecked);
	void SprintCancelsReloadChanged(bool bInChecked);
	bool ShouldShowSafeZoneOption();
	void SetControllerPlatform(const class FString& InControllerPlatform);
	void ScopedMultiplierValueChanged(float NewValue);
	void SafeZoneChanged(float NewValue);
	void RegionChanged(int32 NewRegion);
	void OnForceFeedbackChanged(bool bInChecked);
	void OnFocusOnFirstBuildingPieceWhenQuickbarSwappedChanged(bool bInChecked);
	void MouseSensitivityChanged(float NewValue);
	void LookInversionChanged(bool bInChecked);
	void LanguageChanged(int32 NewMode);
	bool Initialize();
	float GetTargetingMultiplierValue();
	bool GetTapInteractState();
	bool GetSprintToggleState();
	bool GetSprintCancelsReloadState();
	float GetScopedMultiplierValue();
	float GetSafeZoneValue();
	TArray<class FText> GetRegionDisplayNames();
	TArray<class FText> GetPossibleLanguages();
	float GetMouseSensitivityValue();
	bool GetLookInversionState();
	class UWidget* GetListWidget(class UObject* Item);
	bool GetHUDSettings(const struct FGameplayTag& HUDMapping);
	float GetGammaSettings();
	struct FVector2D GetGamepadLookSensitivityValue();
	bool GetForceFeedbackState();
	bool GetFocusOnFirstBuildingPieceWhenQuickbarSwappedState();
	bool GetFirstPersonCameraState();
	float GetDefaultGammaSettings();
	int32 GetCurrentRegion();
	int32 GetCurrentLanguage();
	class FString GetControllerPlatform();
	bool GetAutoEquipState();
	void GamepadLookSensitivityYChanged(float NewValue);
	void GamepadLookSensitivityXChanged(float NewValue);
	void FirstPersonCameraChanged(bool bInChecked);
	void ConstructHUDTagList();
	void AutoEquipChanged(bool bInChecked);
};

// 0x38 (0x280 - 0x248)
// Class FortniteUI.FortInputOptions
class UFortInputOptions : public UFortOptionsTab
{
public:
	uint8                                        Pad_210D[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UFortOptionsMenuInputData*>     InputData;                                         // 0x258(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class UCommonListView*                       InputCommonListView;                               // 0x268(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                      TooltipDisplay;                                    // 0x270(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_210E[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortInputOptions* GetDefaultObj();

	void HandleUsingGamepadChanged(bool bUsingGamepad);
	class UWidget* GetListWidget(class UObject* Item);
	class FText GetBindedKeyNameBP(int32 KeyBind, bool IsPrimary);
	void ConstructKeyBindList();
	void ChangeBinding(bool IsPrimarySlot, int32 Input, const struct FKey& NewKey);
};

// 0x60 (0x2A8 - 0x248)
// Class FortniteUI.FortVideoOptions
class UFortVideoOptions : public UFortOptionsTab
{
public:
	uint8                                        Pad_2110[0x60];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortVideoOptions* GetDefaultObj();

	void WindowModeChanged(int32 NewMode);
	void ViewDistanceQualityChanged(int32 ButtonId);
	void UseVsyncChanged(bool IsChecked);
	void TextureQualityChanged(int32 ButtonId);
	void ShowGrassChanged(bool IsChecked);
	void ShowFPSChanged(bool IsChecked);
	void ShadowQualityChanged(int32 ButtonId);
	void ResolutionChanged(int32 NewResolution);
	void PostProcessQualityChanged(int32 ButtonId);
	void OnQualitySelectorChanged(int32 ValueRef);
	void MotionBlurChanged(bool IsChecked);
	bool IsWindowedFullscreen(int32 CurrentMode);
	void InitializeValues();
	int32 GetViewDistanceQuality();
	bool GetUseVsync();
	int32 GetTextureQuality();
	bool GetShowGrass();
	bool GetShowFPS();
	int32 GetShadowQuality();
	int32 GetPostProcessQuality();
	TArray<class FText> GetPossibleWindowModes();
	TArray<class FText> GetPossibleFPS();
	TArray<class FText> GetPossibleDisplayResolutions();
	bool GetMotionBlur();
	int32 GetEffectsQuality();
	int32 GetDiscreteResolutionQuality();
	int32 GetCurrentWindowMode();
	int32 GetCurrentFPS();
	int32 GetCurrentDisplayResolution();
	int32 GetAntiAliasingQuality();
	void FrameRateLimitChanged(int32 FrameRateLimit);
	void EffectsQualityChanged(int32 ButtonId);
	void DiscreteResolutionQualityChanged(int32 ButtonId);
	void AntiAliasingQualityChanged(int32 ButtonId);
};

// 0x18 (0x8B8 - 0x8A0)
// Class FortniteUI.FortPartyTreeItemBase
class UFortPartyTreeItemBase : public UCommonButton
{
public:
	uint8                                        Pad_2111[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortSocialItem*                       SocialItem;                                        // 0x8A8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2112[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortPartyTreeItemBase* GetDefaultObj();

	void OnSocialItemSet();
	void ExpansionChanged(bool bExpanded);
};

// 0x98 (0x2D0 - 0x238)
// Class FortniteUI.FortPerkWidget_NUI
class UFortPerkWidget_NUI : public UCommonUserWidget
{
public:
	uint8                                        Pad_2114[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortUIPerk                           Perk;                                              // 0x240(0x88)(BlueprintVisible, ExposeOnSpawn, NativeAccessSpecifierPublic)
	class UFortTooltipContext*                   TooltipContext;                                    // 0x2C8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortPerkWidget_NUI* GetDefaultObj();

	void SetTooltipContext(class UFortTooltipContext* TooltipContext);
	void OnPerkUpdated();
	bool IsTierPerk();
	bool IsPerkUnlocked();
	bool IsPerkHighlighted();
	bool IsPerkEmpty();
	bool HasAbility();
	class FText GetTooltipTitle();
	TArray<class FText> GetTooltipDescription();
	enum class EFortSupportBonusType GetSupportBonusType();
	int32 GetRequiredLevel();
	enum class EFortItemTier GetPerkTier();
	bool GetIcon(struct FSlateBrush* Brush);
	class FText GetCombinedTooltipDescription();
};

// 0x50 (0x288 - 0x238)
// Class FortniteUI.FortPerkTierWidget_NUI
class UFortPerkTierWidget_NUI : public UCommonUserWidget
{
public:
	uint8                                        Pad_2115[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortUIPerkTier                       FortPerkTier;                                      // 0x240(0x20)(BlueprintVisible, NoDestructor, ExposeOnSpawn, NativeAccessSpecifierPublic)
	class UFortTooltipContext*                   TooltipContext;                                    // 0x260(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2116[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortPerkTierWidget_NUI* GetDefaultObj();

	void ProcessPerks();
	void OnGeneratePerk(const struct FFortUIPerk& Perk, class UFortPerkWidget_NUI* PerkWidget);
};

// 0x78 (0x2B0 - 0x238)
// Class FortniteUI.FortPerksWidget_NUI
class UFortPerksWidget_NUI : public UCommonUserWidget
{
public:
	class UFortHero*                             Hero;                                              // 0x238(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortPerksWidgetState             State;                                             // 0x240(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2118[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortHero*                             EvolutionOption;                                   // 0x248(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UFortPerkTierWidget_NUI>   PerkTierWidgetType;                                // 0x250(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UFortPerkWidget_NUI>       PerkWidgetType;                                    // 0x258(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortTooltipContext*                   TooltipContext;                                    // 0x260(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2119[0x48];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortPerksWidget_NUI* GetDefaultObj();

	void SetState(enum class EFortPerksWidgetState InState, class UFortHero* InEvolutionOption);
	void SetHero(class UFortHero* InHero);
	void ProcessPerkTiers();
	void ProcessPerks();
	void OnStateChanged();
	void OnHeroChanged();
	void OnGeneratePerkTier(const struct FFortUIPerkTier& FortPerkTier, class UFortPerkTierWidget_NUI* PerkTierWidget);
	void OnGeneratePerk(const struct FFortUIPerk& FortPerk, class UFortPerkWidget_NUI* PerkWidget);
};

// 0xF0 (0x118 - 0x28)
// Class FortniteUI.FortPickerContext
class UFortPickerContext : public UBlueprintContextBase
{
public:
	UMulticastDelegateProperty_                  OnShowPicker;                                      // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnPickerConfirm;                                   // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnPickerCancel;                                    // 0x48(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnPickerOptionMoved;                               // 0x58(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnPickerOptionChosen;                              // 0x68(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnPickerRefreshItems;                              // 0x78(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_211F[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class UFortItemDefinition*, float>      TrackedTrapsMap;                                   // 0xA0(0x50)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2120[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortPickerData*                       PickerData;                                        // 0xF8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UFortSchematicItem*>            AccountTrapSchematics;                             // 0x100(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2121[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortPickerContext* GetDefaultObj();

	bool UseLeftThumbstick();
	void SetFortPickerData(class UFortPickerData* Data);
	void RestoreInputAxes();
	void PickerOptionAccepted(int32 Option);
	void PickerCanceled();
	void GetRadialPickerOptionItem(int32 Index, class UFortItem** Item, bool* bOptionEnabled);
	void GetRadialPickerOptionImageAndLabel(int32 Index, class FText* Label, struct FSlateBrush* Brush, bool* bOptionEnabled);
	int32 GetNumPickerOptions();
	class UFortItem* GetListPickerOption(int32 Index);
	bool DoesRadialCloseOnRelease();
};

// 0xB0 (0xD8 - 0x28)
// Class FortniteUI.FortPickerData
class UFortPickerData : public UDataAsset
{
public:
	TArray<struct FBuildingCategoryOptionData>   BuildingCategories;                                // 0x28(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FBuildingOptionData>           WallOptions;                                       // 0x38(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FBuildingOptionData>           FloorOptions;                                      // 0x48(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FBuildingOptionData>           StairOptions;                                      // 0x58(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FBuildingOptionData>           RoofOptions;                                       // 0x68(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FItemCategoryOptionData>       TrapCategories;                                    // 0x78(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FItemCategoryOptionData>       WeaponCategories;                                  // 0x88(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FRadialOptionData>             SocialCategories;                                  // 0x98(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FChatOptionData>               ChatOptions;                                       // 0xA8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FMapNoteOptionData>            MapNoteOptions;                                    // 0xB8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FEmoteOptionData>              EmoteOptions;                                      // 0xC8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFortPickerData* GetDefaultObj();

};

// 0x40 (0x278 - 0x238)
// Class FortniteUI.FortPlayerProfileBannerEditor
class UFortPlayerProfileBannerEditor : public UCommonUserWidget
{
public:
	TArray<class FName>                          IconCategories;                                    // 0x238(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	TArray<class FName>                          ColorCategories;                                   // 0x248(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	class FName                                  ChosenIcon;                                        // 0x258(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  ChosenIconCategory;                                // 0x260(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  ChosenColor;                                       // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  ChosenColorCategory;                               // 0x270(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortPlayerProfileBannerEditor* GetDefaultObj();

	void SetBannerIcon(class FName& Icon);
	void SetBannerColor(class FName& Color);
	void RefreshBannerEditor();
	void HandleEditorDeactivated();
	void HandleEditorActivated();
	void CommitChosenIconAndColor();
};

// 0x10 (0x8B0 - 0x8A0)
// Class FortniteUI.FortPlayerProfileBannerEditorTile
class UFortPlayerProfileBannerEditorTile : public UCommonButton
{
public:
	uint8                                        Pad_2122[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TWeakObjectPtr<class UFortItem>              Item;                                              // 0x8A8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortPlayerProfileBannerEditorTile* GetDefaultObj();

};

// 0x28 (0x260 - 0x238)
// Class FortniteUI.FortPlayerTrackerBase
class UFortPlayerTrackerBase : public UCommonUserWidget
{
public:
	uint8                                        Pad_2125[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUniqueNetIdRepl                      UniqueId;                                          // 0x240(0x18)(BlueprintVisible, BlueprintReadOnly, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        PartyIndex;                                        // 0x258(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         IsLocalPlayer;                                     // 0x25C(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2126[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortPlayerTrackerBase* GetDefaultObj();

	void UpdateBasedOnId();
	void SetUniqueIdInternal(struct FUniqueNetIdRepl& InUniqueId);
	void SetUniqueId(struct FUniqueNetIdRepl& InUniqueId);
	void SetTeamMember(int32 InPlayerIndex);
	void ResetPartyEvents();
	void OnPlayerInfoChanged(const struct FFortTeamMemberInfo& NewInfo);
	bool HasModifiedStats();
	void HandleTeamMemberStateChangedId(const struct FFortTeamMemberInfo& NewInfo);
	void HandleTeamMemberStateChanged(const struct FFortTeamMemberInfo& NewInfo);
	void HandleTeamMemberRemoved(int32 RemovedIndex);
	void HandleTeamMemberAdded(const struct FFortTeamMemberInfo& NewInfo);
	void HandlePartyLeft();
	void HandleOnPlayerIdUpdated(struct FUniqueNetIdRepl& NewInfo);
	void HandleOnLocalPlayerInfoUpdated(struct FFortTeamMemberInfo& NewInfo);
	int32 GetTech();
	int32 GetTeamTech();
	int32 GetTeamResistance();
	int32 GetTeamOffense();
	int32 GetTeamFortitude();
	int32 GetResistance();
	int32 GetOffense();
	int32 GetModifiedTech();
	int32 GetModifiedResistance();
	int32 GetModifiedOffense();
	bool GetModifiedHomebaseRating(int32* Rating, float* ProgressFraction);
	int32 GetModifiedFortitude();
	bool GetHomebaseRating(int32* Rating, float* ProgressFraction);
	int32 GetFortitude();
};

// 0x80 (0x460 - 0x3E0)
// Class FortniteUI.FortPrivacyBase
class UFortPrivacyBase : public UCommonActivatablePanel
{
public:
	UMulticastDelegateProperty_                  OnPrivacyChanged;                                  // 0x3E0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UCommonButton*                         AllowFriendsOfFriendsButton;                       // 0x3F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPanelWidget*                          AllowFriendsOfFriendsContainer;                    // 0x3F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButtonGroup*                    ButtonGroup;                                       // 0x400(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TMap<class UCommonButton*, enum class EPartyType> PrivacyButtonMap;                                  // 0x408(0x50)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_2129[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortPrivacyBase* GetDefaultObj();

	void HandlePrivacyButtonSelected(class UCommonButton* SelectedPrivacyButton, int32 ButtonIndex);
	void HandleAllowFriendsButtonClicked(class UCommonButton* SelectedPrivacyButton);
	void ApplyPrivacySetting();
	void AddPrivacyButton(class UCommonButton* PrivacyButton, enum class EPartyType PartyType);
};

// 0x10 (0x248 - 0x238)
// Class FortniteUI.FortQuestExpiresWidget
class UFortQuestExpiresWidget : public UCommonUserWidget
{
public:
	TWeakObjectPtr<class UFortQuestItem>         Item;                                              // 0x238(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_212A[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortQuestExpiresWidget* GetDefaultObj();

	void SetData(class UFortQuestItem* InItem);
	void OnQuestExpirationUpdated();
};

// 0x10 (0x1F0 - 0x1E0)
// Class FortniteUI.FortQuestNotificationHandler
class UFortQuestNotificationHandler : public UFortDialogNotificationHandler
{
public:
	class UFortQuestItem*                        Quest;                                             // 0x1E0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_212B[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortQuestNotificationHandler* GetDefaultObj();

};

// 0x0 (0x3E0 - 0x3E0)
// Class FortniteUI.FortQuestScreen
class UFortQuestScreen : public UCommonActivatablePanel
{
public:

	static class UClass* StaticClass();
	static class UFortQuestScreen* GetDefaultObj();

	void ProcessPendingSeenQuestItems();
};

// 0x60 (0x298 - 0x238)
// Class FortniteUI.FortQuestTrackerEntry
class UFortQuestTrackerEntry : public UCommonUserWidget
{
public:
	uint8                                        Pad_212C[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonTextBlock*                      QuestNameText;                                     // 0x248(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonListView*                       ObjectivesList;                                    // 0x250(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortQuestItem*                        TrackedQuest;                                      // 0x258(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	UMulticastDelegateProperty_                  OnHUDQuestFinalObjectiveHiddenDelegate;            // 0x260(0x10)(ZeroConstructor, InstancedReference, Protected, NativeAccessSpecifierProtected)
	TArray<class UFortQuestObjectiveInfo*>       HUDCachedObjectiveInfos;                           // 0x270(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	bool                                         bConfigureAsHUD;                                   // 0x280(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_212D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnSizeEstimateChangedDelegate;                     // 0x288(0x10)(ZeroConstructor, InstancedReference, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortQuestTrackerEntry* GetDefaultObj();

	void OnSetup();
	void HandleObjectiveEntryCreated(class UUserWidget* Widget);
	void HandleHUDObjectiveCompletion(class UFortQuestObjectiveInfo* QuestObjective);
};

// 0x40 (0x278 - 0x238)
// Class FortniteUI.FortQuestTrackerSubEntry
class UFortQuestTrackerSubEntry : public UCommonUserWidget
{
public:
	uint8                                        Pad_212E[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortQuestObjectiveInfo*               TrackedObjective;                                  // 0x248(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	UMulticastDelegateProperty_                  OnSizeEstimateChangedDelegate;                     // 0x250(0x10)(ZeroConstructor, InstancedReference, Protected, NativeAccessSpecifierProtected)
	UMulticastDelegateProperty_                  OnHUDQuestObjectiveCompletedDelegate;              // 0x260(0x10)(ZeroConstructor, InstancedReference, Protected, NativeAccessSpecifierProtected)
	bool                                         bConfigureAsHUD;                                   // 0x270(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_212F[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortQuestTrackerSubEntry* GetDefaultObj();

	void OnSetup();
	void OnQuestsUpdated();
	void OnPlayObjectiveCompletedAnimation();
	void NotifyCompletionAnimationFinished();
	void HandleQuestsUpdated();
};

// 0x10 (0x8B0 - 0x8A0)
// Class FortniteUI.FortQuestTreeItemWidget
class UFortQuestTreeItemWidget : public UCommonButton
{
public:
	uint8                                        Pad_2130[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TWeakObjectPtr<class UObject>                QuestOrCategory;                                   // 0x8A8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortQuestTreeItemWidget* GetDefaultObj();

	void SetupAsQuest(class UFortQuestItem* Category);
	void SetupAsCategory(class UFortQuestCategory* Category);
	void OnQuestsUpdated();
	void HandleQuestsUpdated();
	void ExpansionChanged(bool bExpanded);
};

// 0x10 (0x3F0 - 0x3E0)
// Class FortniteUI.FortRejoinWindowBase
class UFortRejoinWindowBase : public UCommonActivatablePanel
{
public:
	class UCommonTextBlock*                      RejoinTime;                                        // 0x3E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2131[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortRejoinWindowBase* GetDefaultObj();

	void StopTimeout();
	void StartTimeout(float TimeoutTime);
	void OnTimeoutTimeReached();
};

// 0x0 (0x238 - 0x238)
// Class FortniteUI.FortResultsSummaryScreenWidget
class UFortResultsSummaryScreenWidget : public UCommonUserWidget
{
public:

	static class UClass* StaticClass();
	static class UFortResultsSummaryScreenWidget* GetDefaultObj();

	void GetTotalScoreSortedScoreIndices(class UFortUIScoreReport* ScoreReport, TArray<int32>* OutSortedScoreIndices);
};

// 0x68 (0x2A0 - 0x238)
// Class FortniteUI.FortResultsTeleportScreenWidget
class UFortResultsTeleportScreenWidget : public UCommonUserWidget
{
public:
	float                                        ExitTime;                                          // 0x238(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2132[0x64];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortResultsTeleportScreenWidget* GetDefaultObj();

	void StartExitTimer();
	void OnExitTimerFinished();
	void OnExitTimeRemainingUpdated(int32 TimeRemainingSeconds);
	void OnExitTimePercentagePassedUpdated(float Percent);
};

// 0xC0 (0x4A0 - 0x3E0)
// Class FortniteUI.FortResultsWidget
class UFortResultsWidget : public UCommonActivatablePanel
{
public:
	uint8                                        Pad_2135[0x70];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        AdditionalGrantedMissionPoints;                    // 0x450(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2136[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UFortItem*>                     RewardedBadges;                                    // 0x458(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<class UFortItem*>                     MissedBadges;                                      // 0x468(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<class UFortItem*>                     RewardedItems;                                     // 0x478(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<class UFortItem*>                     RewardedAccountItems;                              // 0x488(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2137[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortResultsWidget* GetDefaultObj();

	void TriggerSetupTeleportCameraEvent();
	void SendEndOfRoundUpVoteAnalytic(struct FUniqueNetIdRepl& TargetId, const class FString& TargetPlayerName);
	void SendEndOfRoundScreenAnalytic(const class FString& ScreenName, bool Skipped, float TimeSpent);
	void SendEndOfRoundFriendInviteAnalytic(struct FUniqueNetIdRepl& TargetId, const class FString& TargetPlayerName);
	void RequestExitZone();
	void LogXPData();
	bool IsDataFinalized();
	enum class EFortCompletionResult GetZoneCompletionResult();
	int32 GetTotalMissionPointsEarned();
	void GetRewardsByType(enum class EFortRewardItemType Type, TArray<class UFortItem*>* OutRewards);
};

// 0x8 (0x30 - 0x28)
// Class FortniteUI.FortRewardNotificationData
class UFortRewardNotificationData : public UObject
{
public:
	enum class EFrontEndRewardType               RewardType;                                        // 0x28(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2139[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortRewardNotificationData* GetDefaultObj();

	bool GetIconBrush(struct FSlateBrush* IconBrush, enum class EFortBrushSize BrushSize);
};

// 0x70 (0xA0 - 0x30)
// Class FortniteUI.FortRewardCollectionBookData
class UFortRewardCollectionBookData : public UFortRewardNotificationData
{
public:
	struct FFortCollectionBookRewards            CollectionBookRewards;                             // 0x30(0x70)(BlueprintVisible, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFortRewardCollectionBookData* GetDefaultObj();

	bool GetIconBrush(struct FSlateBrush* IconBrush, enum class EFortBrushSize BrushSize);
};

// 0x8 (0x38 - 0x30)
// Class FortniteUI.FortRewardEpicQuestData
class UFortRewardEpicQuestData : public UFortRewardNotificationData
{
public:
	class UFortQuestItem*                        Quest;                                             // 0x30(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFortRewardEpicQuestData* GetDefaultObj();

	bool GetIconBrush(struct FSlateBrush* IconBrush, enum class EFortBrushSize BrushSize);
};

// 0x8 (0x38 - 0x30)
// Class FortniteUI.FortRewardExpeditionData
class UFortRewardExpeditionData : public UFortRewardNotificationData
{
public:
	class UFortExpeditionItem*                   Expedition;                                        // 0x30(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFortRewardExpeditionData* GetDefaultObj();

	bool GetIconBrush(struct FSlateBrush* IconBrush, enum class EFortBrushSize BrushSize);
};

// 0x0 (0x30 - 0x30)
// Class FortniteUI.FortRewardMissionAlertData
class UFortRewardMissionAlertData : public UFortRewardNotificationData
{
public:

	static class UClass* StaticClass();
	static class UFortRewardMissionAlertData* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class FortniteUI.FortRewardMissionData
class UFortRewardMissionData : public UFortRewardNotificationData
{
public:

	static class UClass* StaticClass();
	static class UFortRewardMissionData* GetDefaultObj();

};

// 0x8 (0x38 - 0x30)
// Class FortniteUI.FortRewardQuestData
class UFortRewardQuestData : public UFortRewardNotificationData
{
public:
	class UFortQuestItem*                        Quest;                                             // 0x30(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFortRewardQuestData* GetDefaultObj();

	bool GetIconBrush(struct FSlateBrush* IconBrush, enum class EFortBrushSize BrushSize);
};

// 0x1B0 (0x590 - 0x3E0)
// Class FortniteUI.FortRewardNotificationWidget
class UFortRewardNotificationWidget : public UCommonActivatablePanel
{
public:
	TArray<class UFortRewardNotificationData*>   NotificationDataList;                              // 0x3E0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_213E[0x40];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UOverlay*                              OverlayMain;                                       // 0x430(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_213F[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortSwipeDetector                    SwipeDetector;                                     // 0x440(0x130)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	uint8                                        Pad_2140[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortRewardNotificationWidget* GetDefaultObj();

	void SetPrimaryActionText(class FText Text);
	void SetPrimaryActionHidden();
	void SetPrimaryActionEnabled(bool bEnabled);
	void OnPrimaryActionTextChanged(class FText& Text);
	void OnPrimaryActionHidden();
	void OnPrimaryActionEnabled();
	void OnPrimaryActionDisabled();
	void OnNavigationUp();
	void OnNavigationRight();
	void OnNavigationLeft();
	void OnNavigationDown();
	void IsPrimaryActionHidden(bool* bHidden);
	void IsPrimaryActionEnabled(bool* bEnabled);
	void InspectItem(class UFortItem* ItemToInspect);
	void AddQuestData(class UFortQuestItem* Quest);
	void AddMissionData();
	void AddMissionAlertData();
	void AddExpeditionData(class UFortExpeditionItem* ExpeditionItem);
	void AddEpicQuestData(class UFortQuestItem* Quest);
	void AddCollectionBookData(struct FFortCollectionBookRewards& CollectionBookRewards);
};

// 0x28 (0x260 - 0x238)
// Class FortniteUI.FortRewardNotificationSubWidget
class UFortRewardNotificationSubWidget : public UCommonUserWidget
{
public:
	UMulticastDelegateProperty_                  OnTransitionInComplete;                            // 0x238(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnTransitionOutComplete;                           // 0x248(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	uint8                                        Pad_2142[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortRewardNotificationSubWidget* GetDefaultObj();

	void TransitionOutBegin();
	void TransitionOut();
	void TransitionInBegin();
	void TransitionIn();
	void SetPrimaryActionText(class FText Text);
	void SetPrimaryActionHidden();
	void SetPrimaryActionEnabled(bool bEnabled);
	void SetInputActionHandlerState(class UDataTable* DataTable, class FName RowName, enum class EInputActionState State);
	void RemoveInputActionHandler(const struct FDataTableRowHandle& InputActionRow);
	void RemoveAllInputActionHandlers();
	void OnPrimaryAction();
	void OnNavigationUp();
	void OnNavigationRight();
	void OnNavigationLeft();
	void OnNavigationDown();
	void OnDeactivated();
	void OnActivated();
	void IsPrimaryActionHidden(bool* bHidden);
	void IsPrimaryActionEnabled(bool* bEnabled);
	void InspectItem(class UFortItem* ItemToInspect);
	void Init(class UFortRewardNotificationWidget* MainWidget);
	void AddInputActionHandler(class UDataTable* DataTable, class FName RowName, UDelegateProperty_ CommittedEvent);
};

// 0x0 (0x260 - 0x260)
// Class FortniteUI.FortRewardConversationWidget
class UFortRewardConversationWidget : public UFortRewardNotificationSubWidget
{
public:

	static class UClass* StaticClass();
	static class UFortRewardConversationWidget* GetDefaultObj();

	bool IsValidConversation(class UFortConversation* Conversation);
	void GetDataFromSentence(struct FFortConversationSentence& Sentence, class FText* Text, class UTexture2D** TalkingHeadTexture);
};

// 0x68 (0x2C8 - 0x260)
// Class FortniteUI.FortRewardExpeditionWidget
class UFortRewardExpeditionWidget : public UFortRewardNotificationSubWidget
{
public:
	UMulticastDelegateProperty_                  OnMcpError;                                        // 0x260(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_2145[0x58];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortRewardExpeditionWidget* GetDefaultObj();

	void OnCollectExpeditionCompleted(class UFortExpeditionItem* Expedition, bool bSucceeded, TArray<struct FFortItemInstanceQuantityPair>& Rewards);
	void CollectExpedition(class UFortExpeditionItem* Expedition);
};

// 0x0 (0x260 - 0x260)
// Class FortniteUI.FortRewardNewQuestWidget
class UFortRewardNewQuestWidget : public UFortRewardNotificationSubWidget
{
public:

	static class UClass* StaticClass();
	static class UFortRewardNewQuestWidget* GetDefaultObj();

	bool IsValidConversation(class UFortConversation* Conversation);
	void GetDataFromSentence(struct FFortConversationSentence& Sentence, class FText* Text, class UTexture2D** TalkingHeadTexture);
};

// 0xA28 (0xB40 - 0x118)
// Class FortniteUI.FortRichTextBlock
class UFortRichTextBlock : public UWidget
{
public:
	class FText                                  Text;                                              // 0x118(0x18)(Edit, NativeAccessSpecifierPublic)
	class UDataTable*                            StyleSet;                                          // 0x130(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMargin                               TextMargin;                                        // 0x138(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        WrapTextAt;                                        // 0x148(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AutoWrapText;                                      // 0x14C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETextJustify                      Justification;                                     // 0x14D(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2147[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FButtonStyle                          HyperlinkButtonStyle;                              // 0x150(0x2A8)(Edit, NativeAccessSpecifierPublic)
	struct FScrollBarStyle                       ScrollBarStyle;                                    // 0x3F8(0x518)(Edit, NativeAccessSpecifierPublic)
	TSubclassOf<class UFortKeybindWidget>        KeybindWidgetClass;                                // 0x910(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2148[0x228];                                   // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortRichTextBlock* GetDefaultObj();

	void SetText(class FText InText);
};

// 0x30 (0x410 - 0x3E0)
// Class FortniteUI.FortSignInWidget
class UFortSignInWidget : public UCommonActivatablePanel
{
public:
	class UEditableText*                         Email;                                             // 0x3E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UEditableText*                         Password;                                          // 0x3E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCommonButton*                         SignInButton;                                      // 0x3F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnStartSignIn;                                     // 0x3F8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                         bStartedSignIn;                                    // 0x408(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2149[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortSignInWidget* GetDefaultObj();

	void UpdateSignInButton();
	void StartSignIn();
};

// 0x0 (0x28 - 0x28)
// Class FortniteUI.FortSkillTreeCanvasEditorInterface
class IFortSkillTreeCanvasEditorInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IFortSkillTreeCanvasEditorInterface* GetDefaultObj();

};

// 0x1A0 (0x2D0 - 0x130)
// Class FortniteUI.FortSkillTreeCanvas
class UFortSkillTreeCanvas : public UPanelWidget
{
public:
	uint8                                        Pad_214B[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             OriginForParallaxEffect;                           // 0x138(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_214C[0xE8];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButtonGroup*                    NodeButtonGroup;                                   // 0x228(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_214D[0xA0];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortSkillTreeCanvas* GetDefaultObj();

	void HandleNodeButtonClicked(class UCommonButton* Button);
	void HandleButtonGroupSelectionCleared();
	void HandleButtonGroupSelectionChanged(class UCommonButton* SelectedButton, int32 ButtonIndex);
};

// 0x18 (0x50 - 0x38)
// Class FortniteUI.FortSkillTreeCanvasSlot
class UFortSkillTreeCanvasSlot : public UPanelSlot
{
public:
	struct FVector2D                             BasePosition;                                      // 0x38(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ParallaxPanningFactor;                             // 0x40(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ZOrder;                                            // 0x44(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_214E[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortSkillTreeCanvasSlot* GetDefaultObj();

	void SetZOrder(int32 InZOrder);
	void SetPosition(const struct FVector2D& InPosition);
	int32 GetZOrder();
	struct FVector2D GetPosition();
	struct FVector2D GetBasePosition();
};

// 0x18 (0x8B8 - 0x8A0)
// Class FortniteUI.FortSkillTreePageSelectorButton
class UFortSkillTreePageSelectorButton : public UCommonButton
{
public:
	class FName                                  SkillTreePageId;                                   // 0x8A0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UFortSkillTreeViewer>      SkillTreeViewerType;                               // 0x8A8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2151[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortSkillTreePageSelectorButton* GetDefaultObj();

	bool TryGetStaticSkillTreePageData(struct FHomebaseNodePage* OutStaticData);
	bool TryGetSkillTreeNodeState(class FName NodeID, struct FHomebaseNodeState* OutNodeState);
	bool IsSkillTreePageLocked();
	void HandleRefreshSkillTreeNodePage();
	void HandleDifferentSkillTreePageSet();
	class FText GetButtonNodeCompletionText();
};

// 0x20 (0x400 - 0x3E0)
// Class FortniteUI.FortSkillTreeLandingPage
class UFortSkillTreeLandingPage : public UCommonActivatablePanel
{
public:
	TArray<struct FDataTableRowHandle>           SkillsToLinkTo;                                    // 0x3E0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FDataTableRowHandle>           ResearchToLinkTo;                                  // 0x3F0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFortSkillTreeLandingPage* GetDefaultObj();

	class UFortSkillTreePageSelectorButton* CreateAndAddPageButton(class FName& SkillTreePageId, enum class ESkillTreePageType PageType, bool bNewRow);
	bool ClearEventSkillTrees();
};

// 0x10 (0x248 - 0x238)
// Class FortniteUI.FortSkillTreeNodeDetailsPanel
class UFortSkillTreeNodeDetailsPanel : public UCommonUserWidget
{
public:
	class FName                                  IdOfSkillTreeNodeToRepresent;                      // 0x238(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2157[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortSkillTreeNodeDetailsPanel* GetDefaultObj();

	bool TryGetSkillTreeNodeState(struct FHomebaseNodeState* OutNodeState);
	bool TryGetNodeSquadAttributeData(struct FHomebaseNode& HomebaseNode, class FText* Name, class FText* Description, struct FFortMultiSizeBrush* Brush);
	bool TryGetNodeDisplayDataFromID(class FName HomeBaseNodeID, struct FFortSkillTreeNodeDisplayData* OutDisplayData);
	bool TryGetNodeDisplayData(struct FHomebaseNode& HomebaseNode, struct FFortSkillTreeNodeDisplayData* OutDisplayData);
	void SetSkillTreeNodeToRepresent(class FName& SkillTreeNodeId);
	bool HasSkillTreeNodeToRepresent();
	void HandleSkillTreeNodeStateChanged();
	void HandleDifferentSkillTreeNodeToRepresentSetBP();
};

// 0xF8 (0x330 - 0x238)
// Class FortniteUI.FortSkillTreePageWidget
class UFortSkillTreePageWidget : public UCommonUserWidget
{
public:
	class FName                                  SkillTreePageId;                                   // 0x238(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2159[0xE8];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortSkillTreeCanvas*                  SkillTreeCanvas;                                   // 0x328(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortSkillTreePageWidget* GetDefaultObj();

	bool TryGetStaticSkillTreePageData(struct FHomebaseNodePage* OutStaticData);
	void PlayOutroTransitionBP(enum class EFortAnimSpeed AnimSpeed);
	void PlayIntroTransitionBP(enum class EFortAnimSpeed AnimSpeed);
};

// 0x70 (0x98 - 0x28)
// Class FortniteUI.FortSkillTreePageWidgetRegistry
class UFortSkillTreePageWidgetRegistry : public UDataAsset
{
public:
	TMap<class FName, TSubclassOf<class UUserWidget>> SkillTreePageIdToWidgetTypeMap;                    // 0x28(0x50)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	uint8                                        Pad_215A[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortSkillTreePageWidgetRegistry* GetDefaultObj();

};

// 0x7C8 (0x8E0 - 0x118)
// Class FortniteUI.FortSocialListView
class UFortSocialListView : public UWidget
{
public:
	UDelegateProperty_                           GenerateItemEvent;                                 // 0x118(0x10)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	TSubclassOf<class UFortSocialItemWidget>     SocialItemWidgetType;                              // 0x128(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTableRowStyle                        ListRowStyle;                                      // 0x130(0x718)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TArray<class UFortSocialItem*>               SocialList;                                        // 0x848(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_215B[0x88];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortSocialListView* GetDefaultObj();

	void SetList(TArray<class UFortSocialItem*>& InList);
};

// 0x6DE8 (0x6E10 - 0x28)
// Class FortniteUI.FortSocialStyle
class UFortSocialStyle : public UDataAsset
{
public:
	struct FSocialStyle                          Style;                                             // 0x28(0x6DE0)(Edit, NativeAccessSpecifierPublic)
	class USocialStyleDataAsset*                 OverrideStyle;                                     // 0x6E08(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFortSocialStyle* GetDefaultObj();

};

// 0x20 (0x400 - 0x3E0)
// Class FortniteUI.FortSplashScreenWidget
class UFortSplashScreenWidget : public UCommonActivatablePanel
{
public:
	UMulticastDelegateProperty_                  OnSplashScreenProgressed;                          // 0x3E0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_215C[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortSplashScreenWidget* GetDefaultObj();

	bool ShouldBypassSplashScreen();
	void ResetFromAccountLinkingFlow();
	void OnGameBootableInviteReceived(int32 UserIndex);
	void CloseSplashScreen(int32 UserIndex);
};

// 0x18 (0x250 - 0x238)
// Class FortniteUI.FortSquadIcon
class UFortSquadIcon : public UCommonUserWidget
{
public:
	class FName                                  Name;                                              // 0x238(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortBrushSize                    ImageSize;                                         // 0x240(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_215D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UImage*                                Icon;                                              // 0x248(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFortSquadIcon* GetDefaultObj();

	void SetSquad(class FName& InName);
	void HandleDifferentSquadSetBP();
};

// 0x8 (0x240 - 0x238)
// Class FortniteUI.FortSquadLandingPageDefenderSummary
class UFortSquadLandingPageDefenderSummary : public UCommonUserWidget
{
public:
	uint8                                        Pad_215E[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortSquadLandingPageDefenderSummary* GetDefaultObj();

	void HandleClearDefenderSquadDetailsBP();
	void HandleAddLockedDefenderSquadDetailsBP(const struct FFortLandingPageDefenderSummaryInfo& DefenderSummaryInfo);
	void HandleAddDefenderSquadDetailsBP(const struct FFortLandingPageDefenderSummaryInfo& DefenderSummaryInfo);
};

// 0x10 (0x248 - 0x238)
// Class FortniteUI.FortSquadLandingPageDefenderSquadDetails
class UFortSquadLandingPageDefenderSquadDetails : public UCommonUserWidget
{
public:
	class UCommonTextBlock*                      OutpostName;                                       // 0x238(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCommonNumericTextBlock*               PowerRating;                                       // 0x240(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFortSquadLandingPageDefenderSquadDetails* GetDefaultObj();

	void SetDefenderSquadInfo(struct FFortLandingPageDefenderSummaryInfo& DefenderSummaryInfo);
	void HandleDefenderSquadInfoSetBP(struct FFortLandingPageDefenderSummaryInfo& DefenderSummaryInfo);
	void HandleAddDefenderSquadMemberBP(class FName& SquadId, int32 Index);
};

// 0x8 (0x240 - 0x238)
// Class FortniteUI.FortSquadLandingPageDefenderSquadDetailsLocked
class UFortSquadLandingPageDefenderSquadDetailsLocked : public UCommonUserWidget
{
public:
	class UCommonTextBlock*                      OutpostName;                                       // 0x238(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFortSquadLandingPageDefenderSquadDetailsLocked* GetDefaultObj();

	void SetDefenderSquadInfo(struct FFortLandingPageDefenderSummaryInfo& DefenderSummaryInfo);
};

// 0x88 (0x2C0 - 0x238)
// Class FortniteUI.FortSquadLandingPageSurvivorSummary
class UFortSquadLandingPageSurvivorSummary : public UCommonUserWidget
{
public:
	class UFortSquadStatValueWithIcon*           FortitudeStatValue;                                // 0x238(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortSquadStatValueWithIcon*           OffenseStatValue;                                  // 0x240(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortSquadStatValueWithIcon*           ResistanceStatValue;                               // 0x248(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortSquadStatValueWithIcon*           TechStatValue;                                     // 0x250(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2160[0x68];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortSquadLandingPageSurvivorSummary* GetDefaultObj();

	void HandleClearSetBonusSummaryLineItemsBP();
	void HandleAddSetBonusSummaryLineItemBP(const struct FFortAttributeModifierAccumulation& AttributeModifierAccumulation);
};

// 0x0 (0x8C0 - 0x8C0)
// Class FortniteUI.FortDefenderSquadSelectorButton
class UFortDefenderSquadSelectorButton : public UFortSquadSelectorButton
{
public:

	static class UClass* StaticClass();
	static class UFortDefenderSquadSelectorButton* GetDefaultObj();

	bool TryGetTheaterUniqueId(class FString* OutTheaterUniqueId, bool* OutIsUnlocked);
	bool TryGetPowerLevel(int32* OutPowerLevel);
};

// 0x20 (0x8E0 - 0x8C0)
// Class FortniteUI.FortSurvivorSquadSelectorButton
class UFortSurvivorSquadSelectorButton : public UFortSquadSelectorButton
{
public:
	TArray<struct FGameplayAttribute>            FortStatAttributes;                                // 0x8C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FGameplayAttribute>            FortTeamStatAttributes;                            // 0x8D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFortSurvivorSquadSelectorButton* GetDefaultObj();

	bool TryGetSummaryStats(struct FFortSurvivorSquadSelectorButtonSummaryStats* OutSummaryStats);
	bool TryGetSquadMembers(TArray<class UFortWorker*>* OutSquadMembers);
	bool TryGetPersonalityMatches(struct FFortSurvivorSquadSelectorButtonPersonalityMatches* OutPersonalityMatches);
};

// 0x60 (0x298 - 0x238)
// Class FortniteUI.FortSquadSlotDetailsPanel
class UFortSquadSlotDetailsPanel : public UCommonUserWidget
{
public:
	uint8                                        Pad_2169[0x28];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortSquadSlotItemDetailsHostPanel*    ItemDetailsPanel;                                  // 0x260(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TScriptInterface<class IFortItemViewContextInterface> ItemViewContext;                                   // 0x268(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                        Pad_216A[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortSquadSlotDetailsPanel* GetDefaultObj();

	bool TryGetItemToPreviewInSlot(class UFortItem** OutItemToPreviewInSlot);
	void SetScrollWidget();
	void SetIdOfSquadSlotToManageBP(class FName& SquadId, int32 SquadSlotIndex);
	bool IsSquadSlotLockedBP();
	void HandleSquadSlotStateChangedBP();
	void HandleSquadSlotRestrictionFactorsChangedBP();
	void HandleDifferentSquadSlotSetBP();
	TArray<enum class EFortSquadSlottingRestrictionReason> GetSlottingRestrictionReasons();
	class UFortItem* GetItemInSquadSlotBP(class ULocalPlayer* LocalPlayer);
	void GetIdOfSquadSlotToManageBP(class FName* OutSquadId, int32* OutSquadSlotIndex);
};

// 0x58 (0x8F8 - 0x8A0)
// Class FortniteUI.FortSquadSlotSelectorButton
class UFortSquadSlotSelectorButton : public UCommonButton
{
public:
	uint8                                        Pad_216D[0x28];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortSquadSlotWidget*                  SquadSlotWidget;                                   // 0x8C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TScriptInterface<class IFortItemViewContextInterface> ItemViewContext;                                   // 0x8D0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                        Pad_216E[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortSquadSlotSelectorButton* GetDefaultObj();

	void SquadSlotWidgetUpdated();
	void SetIdOfSquadSlotToManageBP(class FName& SquadId, int32 SquadSlotIndex);
	bool IsSquadSlotLockedBP();
	void HandlePreDifferentSquadSlotSetBP();
	void HandlePostDifferentSquadSlotSetBP();
	bool GetInPreviewMode();
	void GetIdOfSquadSlotToManageBP(class FName* OutSquadId, int32* OutSquadSlotIndex);
};

// 0x88 (0x2C0 - 0x238)
// Class FortniteUI.FortSquadSlotsView
class UFortSquadSlotsView : public UCommonUserWidget
{
public:
	uint8                                        Pad_2174[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnDifferentSquadSlotSelectedEvent;                 // 0x248(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnRequestOpenSquadSlotEvent;                       // 0x258(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	int32                                        IndexOfSelectedSquadSlot;                          // 0x268(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bSlotButtonsRequireSelection;                      // 0x26C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bInPreviewMode;                                    // 0x26D(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2175[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortCommittableButtonGroup*           SquadSlotButtonGroup;                              // 0x270(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2176[0x30];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IFortItemViewContextInterface> ItemViewContext;                                   // 0x2A8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2177[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortSquadSlotsView* GetDefaultObj();

	bool TryGetStaticSquadDataBP(struct FHomebaseSquad* OutSquadData);
	void SetIsSelectionLocked(bool ShouldSelectionBeLocked);
	void SetInPreviewMode(bool bPreview);
	void SetIdOfSquadToManageBP(class FName& SquadId);
	void SelectSlot(int32 SquadSlotIndex);
	void OnRequestOpenSquadSlot__DelegateSignature(int32 SquadSlotIndex);
	void OnDifferentSquadSlotSelected__DelegateSignature(int32 SquadSlotIndex);
	void HandleSelectedButtonChanged(class UCommonButton* SelectedButton, int32 ButtonIndex);
	void HandleHoveredButtonChanged(class UCommonButton* HoveredButton, int32 ButtonIndex);
	void HandleButtonClicked(class UCommonButton* CommittedButton, int32 ButtonIndex);
	int32 GetIndexOfSelectedSquadSlot();
	class FName GetIdOfSquadToManageBP();
	class UFortSquadSlotSelectorButton* CreateAndAddSquadSlotButton(int32 SquadSlotIndex, struct FHomebaseSquadSlot& SquadSlotDefinition, class UWidget** OutSquadSlotButtonHost);
};

// 0x108 (0x220 - 0x118)
// Class FortniteUI.FortSquadSlotWidget
class UFortSquadSlotWidget : public UWidget
{
public:
	uint8                                        Pad_217A[0x28];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EFortItemCardSize                 ItemCardSize;                                      // 0x140(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_217B[0x9F];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortMultiSizeItemCard*                SlottedItemCard;                                   // 0x1E0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_217C[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IFortItemViewContextInterface> ItemViewContext;                                   // 0x1F0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_217D[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortSquadSlotWidget* GetDefaultObj();

	void SetIdOfSquadSlotToManageBP(class FName& SquadId, int32 SquadSlotIndex);
	void SetCardSize(enum class EFortItemCardSize CardSize);
	bool IsSquadSlotLockedBP();
	class UFortItem* GetItemInSquadSlotBP(class ULocalPlayer* LocalPlayer);
	void GetIdOfSquadSlotToManageBP(class FName* OutSquadId, int32* OutSquadSlotIndex);
};

// 0x30 (0x268 - 0x238)
// Class FortniteUI.FortSquadStatDetailsWidget
class UFortSquadStatDetailsWidget : public UCommonUserWidget
{
public:
	uint8                                        Pad_217E[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortSquadStatDetailsWidget* GetDefaultObj();

};

// 0x88 (0x2C8 - 0x240)
// Class FortniteUI.FortPerkWidget
class UFortPerkWidget : public UFortUserWidget
{
public:
	struct FFortUIPerk                           Perk;                                              // 0x240(0x88)(BlueprintVisible, BlueprintReadOnly, ExposeOnSpawn, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFortPerkWidget* GetDefaultObj();

	bool IsTierPerk();
	bool IsPerkUnlocked();
	bool IsPerkHighlighted();
	bool HasAbility();
	class FText GetTooltipTitle();
	TArray<class FText> GetTooltipDescription();
	enum class EFortSupportBonusType GetSupportBonusType();
	int32 GetRequiredLevel();
	enum class EFortItemTier GetPerkTier();
	bool GetIcon(struct FSlateBrush* Brush);
};

// 0x10 (0x278 - 0x268)
// Class FortniteUI.FortHeroSquadBonusPerksWidgetBase
class UFortHeroSquadBonusPerksWidgetBase : public UFortSquadStatDetailsWidget
{
public:
	class UFortPerkWidget_NUI*                   SupportBonusPerkWidget;                            // 0x268(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortPerkWidget_NUI*                   TacticalBonusPerkWidget;                           // 0x270(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortHeroSquadBonusPerksWidgetBase* GetDefaultObj();

};

// 0x3A8 (0x5E0 - 0x238)
// Class FortniteUI.FortSurvivorSquadStatMatchBase
class UFortSurvivorSquadStatMatchBase : public UCommonUserWidget
{
public:
	uint8                                        Pad_2180[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortUISurvivorSquadStatMatch         StatMatch;                                         // 0x240(0x3A0)(BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortSurvivorSquadStatMatchBase* GetDefaultObj();

	void OnStatMatchUpdated(const struct FFortUISurvivorSquadStatMatch& UpdatedMatch);
};

// 0x30 (0x298 - 0x268)
// Class FortniteUI.FortSurvivorSquadStatMatchesBase
class UFortSurvivorSquadStatMatchesBase : public UFortSquadStatDetailsWidget
{
public:
	TSubclassOf<class UFortSurvivorSquadStatMatchBase> StatMatchClass;                                    // 0x268(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSummaryView;                                      // 0x270(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2182[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UFortSurvivorSquadStatMatchBase*> StatMatches;                                       // 0x278(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2183[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortSurvivorSquadStatMatchesBase* GetDefaultObj();

	bool TryGetStaticSquadDataBP(struct FHomebaseSquad* OutSquadData);
	void SetSummaryView(bool bInSummaryView);
	void SetIdOfSquadToManageBP(class FName& SquadId);
	void HandleDifferentSquadSetBP();
	class FName GetIdOfSquadToManageBP();
	void AddStatMatch(class UFortSurvivorSquadStatMatchBase* SetBonus);
};

// 0x38 (0x270 - 0x238)
// Class FortniteUI.FortSquadStatsWidgetBase
class UFortSquadStatsWidgetBase : public UCommonUserWidget
{
public:
	TArray<class UFortAttributeListItem_NUI*>    OverviewStats;                                     // 0x238(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	class UFortAttributeList_NUI*                DetailedStats;                                     // 0x248(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2184[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortSquadStatsWidgetBase* GetDefaultObj();

	void RequestStatsUpdate();
	void RequestShowPreviewStats();
	void HandleSquadSlottingPreviewStateChanged();
	struct FUniqueNetIdRepl GetLocalPlayerId();
};

// 0x58 (0x290 - 0x238)
// Class FortniteUI.FortSquadStatValueWithIcon
class UFortSquadStatValueWithIcon : public UCommonUserWidget
{
public:
	struct FGameplayAttribute                    Attribute;                                         // 0x238(0x20)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayAttribute                    TeamAttribute;                                     // 0x258(0x20)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortBrushSize                    ImageSize;                                         // 0x278(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2185[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonNumericTextBlock*               Value;                                             // 0x280(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UImage*                                Icon;                                              // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFortSquadStatValueWithIcon* GetDefaultObj();

	void HandleDifferentAttributeSetBP();
};

// 0x30 (0x268 - 0x238)
// Class FortniteUI.FortStatIcon
class UFortStatIcon : public UCommonUserWidget
{
public:
	struct FGameplayAttribute                    Attribute;                                         // 0x238(0x20)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortBrushSize                    ImageSize;                                         // 0x258(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2186[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UImage*                                Icon;                                              // 0x260(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFortStatIcon* GetDefaultObj();

	void SetAttribute(struct FGameplayAttribute& InAttribute);
	void HandleDifferentAttributeSetBP();
};

// 0xA8 (0xD0 - 0x28)
// Class FortniteUI.FortStoreContext
class UFortStoreContext : public UBlueprintContextBase
{
public:
	uint8                                        Pad_2190[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnCardPackOffersChanged;                           // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnStoreStateChange;                                // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TArray<struct FCardPackOffer>                Offers;                                            // 0x50(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FDateTime                             NextStoreRefresh;                                  // 0x60(0x8)(BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FCard>                         CardList;                                          // 0x68(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        CardIndex;                                         // 0x78(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2191[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FOpenedCardPack                       OpenedCardPack;                                    // 0x80(0x10)(BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	enum class EFortRarity                       LastCardRarity;                                    // 0x90(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2192[0x2F];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FStringAssetReference>         MissingAssetsAttemptedAsyncLoad;                   // 0xC0(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortStoreContext* GetDefaultObj();

	void RealMoneyPurchaseStart();
	void RealMoneyPurchaseFinished();
	bool OpenWebPayment(const class FString& AttemptedMTXOfferId);
	enum class ECardPackPurchaseError MakePurchase(struct FCardPackOffer& Offer, int32 Quantity);
	bool MakeChoice(int32 ChoiceIdx);
	bool IsWaitingForMcp();
	struct FTimespan GetTimeUntilMarketplaceRefresh();
	struct FTimespan GetTimeUntilDailyLimitReset();
	enum class EFortStoreState GetStoreState();
	struct FLinearColor GetRarityColor(enum class EFortRarity Rarity);
	enum class EFortStoreState GetPreviousState();
	int32 GetNumUnopenedCardPacksRemaining(class UFortCardPackItemDefinition* PackType);
	bool GetCard(int32 CardIdx, struct FCard* ResultOut);
	void GetAccountItems(TArray<class UFortAccountItemDefinition*>& AccountItemDefinitions, TArray<class UFortAccountItem*>* AccountItems);
	void FreshenCache();
	void FireInteractionAnalyticsEvent(const class FString& Interaction, const class FString& Details);
	bool ExitWebPayment();
	bool ExitSummary();
	void ExitRealMoneyStore();
	bool ExitCurrencyStore();
	bool ExitCardPackStore();
	bool ErrorOccurred(const class FString& ErrorAnalytics);
	void EnterRealMoneyStore();
	bool EnterCurrencyStore(const class FString& AttemptedPurchaseCardPackId);
	bool EnterCardPackStore();
	void DismissError();
	bool ChoiceResultComplete();
	bool CardPackOpeningComplete();
	bool CardPackDestroyComplete();
	bool CardFrontRevealComplete();
	bool CardFlipComplete();
	bool CardExitComplete();
	bool CardEntryComplete();
	bool CardBackRevealComplete();
	bool CardAddedToSummaryComplete();
};

// 0x10 (0x3F0 - 0x3E0)
// Class FortniteUI.FortStoreRootBase
class UFortStoreRootBase : public UCommonActivatablePanel
{
public:
	uint8                                        Pad_2193[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortStoreRootBase* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class FortniteUI.StoreCardObject
class UStoreCardObject : public UObject
{
public:
	struct FCard                                 Card;                                              // 0x28(0x18)(BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UStoreCardObject* GetDefaultObj();

};

// 0x20 (0x400 - 0x3E0)
// Class FortniteUI.FortStoreSummary
class UFortStoreSummary : public UCommonActivatablePanel
{
public:
	TArray<class UStoreCardObject*>              StoreCardObjects;                                  // 0x3E0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	class UCommonTileView*                       TileView;                                          // 0x3F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2194[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortStoreSummary* GetDefaultObj();

	void SetCards(TArray<struct FCard>& Cards);
};

// 0x0 (0x3E0 - 0x3E0)
// Class FortniteUI.FortSubGameSelectBase
class UFortSubGameSelectBase : public UCommonActivatablePanel
{
public:

	static class UClass* StaticClass();
	static class UFortSubGameSelectBase* GetDefaultObj();

	bool GetShortDescription(enum class ESubGame SubGame, class FText* ShortDescription);
	bool GetFullDescription(enum class ESubGame SubGame, class FText* FullDescription);
};

// 0x0 (0x238 - 0x238)
// Class FortniteUI.FortSubGameSelectButtonBase
class UFortSubGameSelectButtonBase : public UCommonUserWidget
{
public:

	static class UClass* StaticClass();
	static class UFortSubGameSelectButtonBase* GetDefaultObj();

	void UpdateButtonState(bool bVisible);
};

// 0x20 (0x258 - 0x238)
// Class FortniteUI.FortSurvivorSquadSummaryStatItem
class UFortSurvivorSquadSummaryStatItem : public UCommonUserWidget
{
public:
	enum class EFortBrushSize                    ImageSize;                                         // 0x238(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2199[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UImage*                                Icon;                                              // 0x240(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCommonTextBlock*                      Value;                                             // 0x248(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCommonTextBlock*                      Name;                                              // 0x250(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFortSurvivorSquadSummaryStatItem* GetDefaultObj();

	void SetAttributeModifierAccumulation(struct FFortAttributeModifierAccumulation& Accumulation);
};

// 0x8 (0x208 - 0x200)
// Class FortniteUI.FortSZAwareImage
class UFortSZAwareImage : public UImage
{
public:
	bool                                         AnchorLeft;                                        // 0x200(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AnchorRight;                                       // 0x201(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AnchorTop;                                         // 0x202(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AnchorBottom;                                      // 0x203(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_219A[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortSZAwareImage* GetDefaultObj();

};

// 0x8 (0x240 - 0x238)
// Class FortniteUI.FortTextStyleList
class UFortTextStyleList : public UCommonUserWidget
{
public:
	class FName                                  TextStylesPath;                                    // 0x238(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFortTextStyleList* GetDefaultObj();

	TArray<TSoftClassPtr<class UCommonTextStyle>> GetTextStyles();
};

// 0x50 (0x430 - 0x3E0)
// Class FortniteUI.FortTheaterSelect
class UFortTheaterSelect : public UCommonActivatablePanel
{
public:
	uint8                                        Pad_219D[0x40];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UOverlay*                              OverlayMain;                                       // 0x420(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_219E[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortTheaterSelect* GetDefaultObj();

	void OnNavigationRight();
	void OnNavigationLeft();
	bool GetTheaterRecommendedRatingRange(const class FString& UniqueId, int32* Minimum, int32* Maximum);
	bool GetSurvivalCMSText(class FText* Title, class FText* Body);
};

// 0x20 (0x138 - 0x118)
// Class FortniteUI.FortTierIndicator
class UFortTierIndicator : public UWidget
{
public:
	TWeakObjectPtr<class UFortItem>              ItemToRepresent;                                   // 0x118(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortBrushSize                    BrushSize;                                         // 0x120(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_219F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        InterPipPadding;                                   // 0x124(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21A0[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortTierIndicator* GetDefaultObj();

	void SetPreviewState(int32 TierIncrease);
	void SetItemToRepresent(class UFortItem* ItemToRepresent);
	void SetInterPipPadding(float InterPipPadding);
	void SetBrushSize(enum class EFortBrushSize BrushSize);
	void ClearPreviewState();
};

// 0x0 (0x28 - 0x28)
// Class FortniteUI.FortTooltipUIContext
class UFortTooltipUIContext : public UBlueprintContextBase
{
public:

	static class UClass* StaticClass();
	static class UFortTooltipUIContext* GetDefaultObj();

	TArray<struct FFortDisplayAttribute> GetUpgradeStats(class UObject* Object, class UFortTooltipContext* TooltipContext);
	bool GetUIDataForTag(struct FGameplayTag& Tag, struct FFortTagUIData* OutData);
	TArray<struct FFortDisplayAttribute> GetTooltipStats(class UObject* Object, class UFortTooltipContext* TooltipContext);
	bool GetTooltipStat(class UObject* Object, class UFortTooltipContext* TooltipContext, const struct FGameplayTag& Token, struct FFortDisplayAttribute* OutDisplayAttribute);
	TArray<struct FGameplayAttribute> GetTooltipAttributes(class UObject* Object);
	bool GetDisplayNameAndMultiBrushForTag(struct FGameplayTag& Tag, class FText* OutDisplayName, struct FFortMultiSizeBrush* OutBrush);
	bool GetDescription(class UObject* Object, class UFortTooltipContext* TooltipContext, TArray<class FText>* OutDescription);
	TArray<struct FFortDisplayAttribute> GetComparisonStats(class UObject* Object, class UObject* ComparisonObject, class UFortTooltipContext* TooltipContext);
	bool GetCombinedDescription(class UObject* Object, class UFortTooltipContext* TooltipContext, class FText* OutDescription);
};

// 0xC0 (0xE8 - 0x28)
// Class FortniteUI.FortTutorialContext
class UFortTutorialContext : public UBlueprintContextBase
{
public:
	UMulticastDelegateProperty_                  OnUpdateTutorialAnnouncement;                      // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnNewAnnouncementStartedOnClientDelegate;          // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_21A7[0xA0];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortTutorialContext* GetDefaultObj();

	void UpdateTutorialAnnouncement(const struct FFortClientAnnouncementData_Tutorial& AnnouncementData, bool bShow);
	void UnhideTutorialCallout(class FName WidgetName);
	void UnhideAllTutorialCallouts();
	void SkipTutorial();
	bool ShouldPromptToSkipTutorial();
	void OnNewAnnouncementStartedOnClient(class AFortClientAnnouncement* NewAnnouncement);
	void HideTutorialCallout(class FName WidgetName);
	void GetTutorialCallouts(TArray<class FName>* WidgetNames);
	void GetHiddenTutorialCallouts(TArray<class FName>* WidgetNames);
	void EnableTutorialCallout(class FName WidgetName);
	void DisableTutorialCallout(class FName WidgetName);
	void ContinueTutorial();
	void ClearTutorialCallouts();
};

// 0x58 (0x290 - 0x238)
// Class FortniteUI.FortTwitchLogin
class UFortTwitchLogin : public UCommonUserWidget
{
public:
	uint8                                        Pad_21AD[0x30];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftClassPtr<class UFortTwitchLoginModalWidget> TwitchLoginModalWidgetClass;                       // 0x268(0x20)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortTwitchLoginModalWidget*           ActiveLoginModal;                                  // 0x288(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortTwitchLogin* GetDefaultObj();

	void OnShowLoginError(class FText& ErrorTitle, class FText& ErrorMessage);
	void OnLoginStatusChanged(bool bLoggedIn, const class FString& AccountName);
	void OnLoginFlowModalDismissed(class UFortTwitchLoginModalWidget* Modal);
	void OnLoginFlowModalCreated(class UFortTwitchLoginModalWidget* Modal);
	void OnLinkedTwitchAccountChanged(const class FString& AccountName);
	void Logout();
	void Login();
	bool IsLoggedIn();
	class FString GetLinkedTwitchAccountName();
	class FString GetAccountName();
	void CancelLoginFlow();
};

// 0x0 (0x28 - 0x28)
// Class FortniteUI.FortUIBlueprintFunctionLibrary
class UFortUIBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UFortUIBlueprintFunctionLibrary* GetDefaultObj();

	class FString GetMetaStringOnOffer(struct FCardPackOffer& Offer, const class FString& Key);
	int32 GetMetaIntOnOffer(struct FCardPackOffer& Offer, const class FString& Key, int32 DefaultValue);
	bool GetMetaBoolOnOffer(struct FCardPackOffer& Offer, const class FString& Key, bool bDefaultValue);
	struct FFortMultiSizeBrush GetItemSmallPreviewImageMultiSizeBrush(class UFortItem* Item);
	struct FSlateBrush GetItemSmallPreviewImageBrush(class UFortItem* Item, enum class EFortBrushSize BrushSize);
	struct FFortMultiSizeBrush GetItemDefinitionSmallPreviewImageMultiSizeBrush(class UFortItemDefinition* ItemDefinition);
	struct FSlateBrush GetItemDefinitionSmallPreviewImageBrush(class UFortItemDefinition* ItemDefinition, enum class EFortBrushSize BrushSize);
};

// 0x0 (0x28 - 0x28)
// Class FortniteUI.FortUIDataConfigurationContext
class UFortUIDataConfigurationContext : public UBlueprintContextBase
{
public:

	static class UClass* StaticClass();
	static class UFortUIDataConfigurationContext* GetDefaultObj();

	bool UseSpecificPinataWeapon();
	bool IsLimitedToES2Features();
	bool IsChatEnabled();
	struct FPostProcessSettings GetFrontEndFFSettings();
	bool AreSocialFeaturesEnabled();
	bool ArePartyFeaturesEnabled();
};

// 0x1C8 (0x400 - 0x238)
// Class FortniteUI.FortUIManagerWidget_NUI
class UFortUIManagerWidget_NUI : public UCommonUserWidget
{
public:
	uint8                                        Pad_21B6[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnBeginSpokenDialog;                               // 0x240(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnEndSpokenDialog;                                 // 0x250(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnShouldBlockSubtitlePortraitChanged;              // 0x260(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	enum class EFortUIState                      CurrentState;                                      // 0x270(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EFortUIState                      PendingState;                                      // 0x271(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_21B7[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortUIStateWidget_NUI*                CurrentStateWidget;                                // 0x278(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_21B8[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UFortUIStateTrigger*>           StateTriggers;                                     // 0x290(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_21B9[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UFortUINotificationQueue*>      UINotificationQueues;                              // 0x2A8(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	bool                                         bIsStateContentDisplayed;                          // 0x2B8(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_21BA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortUINavigationManager*              NavigationManager;                                 // 0x2C0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMap<class UClass*, class UUserWidget*>      TypedWidgetCache;                                  // 0x2C8(0x50)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_21BB[0xC8];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bSupressErrors;                                    // 0x3E0(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_21BC[0x17];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        BlockSubtitlePortraitRefcount;                     // 0x3F8(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_21BD[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortUIManagerWidget_NUI* GetDefaultObj();

	void UpdateStateWidgetContent(class UFortUIStateWidget_NUI* StateWidget);
	void UnregisterStateTrigger(class UFortUIStateTrigger* TriggerToRemove);
	void ShowErrorDialog(class UObject* WorldContextObject, class FText OperationDesc, class FText DisplayMessage, const class FString& ErrorCode);
	bool ShouldBlockSubtitlePortrait();
	void SetStateContentDisplayed(bool bDisplay);
	void ReleaseNotification(class UFortUINotification* Notification);
	void RegisterStateTrigger(class UFortUIStateTrigger* StateTrigger);
	void QueueActivatablePanelIntoModalLayer(class UCommonActivatablePanel* Panel);
	void QueueActionPanelIntoModalLayer(class UFortActionHandlerPanel* Panel, enum class EHorizontalAlignment HorizontalAlignment, enum class EVerticalAlignment VerticalAlignment);
	void PushContentWidgetAdvanced(class UWidget* Widget, bool bHideHeader, bool bHideFooter, bool bHideChatWidget);
	void PushContentWidget(class UWidget* Widget);
	void PopContentWidget();
	void PopActivatablePanelInModalLayer(class UCommonActivatablePanel* Panel);
	void OnStateStarted();
	void OnStateEnded();
	void OnShowConfirmation_NUI(struct FFortDialogDescription_NUI& Description);
	void OnShowConfirmation(struct FFortDialogDescription& Description);
	void OnShouldBlockSubtitlePortraitChanged__DelegateSignature(bool bShouldBlockSubtitlePortrait);
	void OnEndSpokenDialog__DelegateSignature();
	void OnEndLatentWaitForConfirmationDialog(struct FFortDialogExternalLatentActionHandle& WaitingDialogHandle);
	void OnBeginSpokenDialog__DelegateSignature(class UTexture2D* Image, class FText Title, class FText Subtitle, enum class EFortAnnouncementDisplayPreference DisplayPreference);
	void KillConfirmationDialog(class UObject* WorldContextObject);
	bool IsStateContentDisplayed();
	void IncrementShouldBlockSubtitlePortrait();
	class UFortUINotificationQueue* GetUINotificationQueue(class UObject* WorldContextObject, enum class EFortNotificationQueueType QueueType);
	class UFortUINavigationManager* GetUINavigationManager(class UObject* WorldContextObject);
	class UFortUIManagerWidget_NUI* GetUIManagerWidget(class UObject* WorldContextObject);
	class UFortUINavigationManager* GetNavigationManager();
	class UFortUIStateWidget_NUI* GetCurrentUIStateWidget();
	class UUserWidget* GetCachedWidget(class UClass* InClass);
	void DisplayStateContent(bool bDisplay);
	void DisplayErrorDialog(struct FFortErrorInfo& Info);
	void DecrementShouldBlockSubtitlePortrait();
	class UFortUIStateTrigger* CreateUIStateTrigger(TSubclassOf<class UFortUIStateTrigger> Class, class UObject* WorldContextObject);
	class UFortUINotification* CreateNotification(TSubclassOf<class UFortUINotification> UINotificationClass);
	void CloseErrorWindow();
	void CloseConfirmationWindow();
	enum class EFortUIState _BPGetCurrentUIState();
};

// 0x48 (0x280 - 0x238)
// Class FortniteUI.FortUIMessageItemWidget
class UFortUIMessageItemWidget : public UCommonUserWidget
{
public:
	UMulticastDelegateProperty_                  OnMessageDisplayed;                                // 0x238(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnMessageRemoved;                                  // 0x248(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class FName                                  MessageID;                                         // 0x258(0x8)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StackSize;                                         // 0x260(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DisplayDuration;                                   // 0x264(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        RemoveDuration;                                    // 0x268(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_21BE[0x14];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortUIMessageItemWidget* GetDefaultObj();

	void OnStackSizeChanged(int32 OldStackSize);
	void OnReturnedToPool();
	void OnBeginRemove();
};

// 0x80 (0xA8 - 0x28)
// Class FortniteUI.FortUIMessageManager
class UFortUIMessageManager : public UObject
{
public:
	UMulticastDelegateProperty_                  OnMessageAvailable;                                // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TArray<class UFortUIMessageItemWidget*>      MessageQueue;                                      // 0x38(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TArray<TWeakObjectPtr<class UFortUIMessageItemWidget>> CurrentlyDisplayedMessages;                        // 0x48(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_21C0[0x50];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortUIMessageManager* GetDefaultObj();

	void HandleMessageRemoved(class UFortUIMessageItemWidget* MessageItem);
	void HandleMessageDisplayed(class UFortUIMessageItemWidget* MessageItem);
	int32 GetNumDisplayedItems();
	class UFortUIMessageItemWidget* GetNextMessageInQueue();
	class UFortUIMessageItemWidget* AddMessageItem(TSubclassOf<class UFortUIMessageItemWidget> MessageItemClass, class APlayerController* OwningPlayer, class FName MessageID, int32 StackCount);
};

// 0x30 (0x410 - 0x3E0)
// Class FortniteUI.FortUIMessagesPageBase
class UFortUIMessagesPageBase : public UCommonActivatablePanel
{
public:
	int32                                        MaximumMessagesShown;                              // 0x3E0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21C1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonListView*                       MessagesList;                                      // 0x3E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_21C2[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UFortUINotification*>           MessagesShown;                                     // 0x3F8(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_21C3[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortUIMessagesPageBase* GetDefaultObj();

	void OnNotificationCleared(class UFortUINotification* ClearedMessage);
	void OnMessageAvailable();
	void FillMessagesList();
};

// 0x28 (0x50 - 0x28)
// Class FortniteUI.FortUINotificationQueue
class UFortUINotificationQueue : public UObject
{
public:
	int32                                        MaxNotificationsInQueue;                           // 0x28(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_21C4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UFortUINotification*>           NotificationQueue;                                 // 0x30(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_21C5[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortUINotificationQueue* GetDefaultObj();

	void UnregisterToReceiveNotifications();
	void RemoveNotification(class UFortUINotification* InNotificationDescription);
	void RegisterToReceiveNotifications(UDelegateProperty_& NotificationDelegate);
	class UFortUINotification* GetNextNotification();
};

// 0x10 (0x38 - 0x28)
// Class FortniteUI.FortUIRewardReport
class UFortUIRewardReport : public UObject
{
public:
	class UFortLocalPlayer*                      LocalPlayer;                                       // 0x28(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        RewardDisplayLevel;                                // 0x30(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_21C6[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortUIRewardReport* GetDefaultObj();

	int32 GetRewardDisplayLevel();
};

// 0x8 (0x30 - 0x28)
// Class FortniteUI.FortUIScoreReport
class UFortUIScoreReport : public UObject
{
public:
	class UFortLocalPlayer*                      LocalPlayer;                                       // 0x28(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortUIScoreReport* GetDefaultObj();

	bool IsLocalPlayer(int32 ScoreReportIndex);
	int32 GetXpToCompleteLevel(int32 Level);
	bool GetXpInfo(int32 ScoreReportIndex, struct FFortUIXpInfo* OutXpInfo);
	int32 GetTeamScore(enum class EFortUIScoreType ScoreType);
	void GetScoreReportIndicesByPlayerID(TArray<int32>* SortedScoreReportIndices);
	int32 GetScoreReportIndex(struct FUniqueNetIdRepl& PlayerID);
	int32 GetPlayerScore(int32 ScoreReportIndex, enum class EFortUIScoreType ScoreType);
	class FText GetPlayerName(int32 ScoreReportIndex);
	void GetPlayerIDFromScoreReportIndex(int32 ScoreReportIndex, struct FUniqueNetIdRepl* OutUniqueNetIdRepl);
	int32 GetPlayerCount();
	float GetLevelProgress(int32 Level, int32 DisplayXp);
	int32 GetDifficultBonusScore();
	float GetDifficultBonusMultiplier();
	class AFortPlayerPawn* GetCurrentPlayerPawn(int32 ScoreReportIndex);
	int32 GetBadgeScore(class UFortItem* BadgeItem);
};

// 0x8 (0x30 - 0x28)
// Class FortniteUI.FortUIStateTrigger
class UFortUIStateTrigger : public UObject
{
public:
	enum class EFortUIState                      UIState;                                           // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_21D0[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortUIStateTrigger* GetDefaultObj();

	bool IsLoggedIn();
	bool EvalBP();
};

// 0x0 (0x30 - 0x30)
// Class FortniteUI.FortUIStateTrigger_Athena
class UFortUIStateTrigger_Athena : public UFortUIStateTrigger
{
public:

	static class UClass* StaticClass();
	static class UFortUIStateTrigger_Athena* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class FortniteUI.FortUIStateTrigger_InGame
class UFortUIStateTrigger_InGame : public UFortUIStateTrigger
{
public:

	static class UClass* StaticClass();
	static class UFortUIStateTrigger_InGame* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class FortniteUI.FortUIStateTrigger_Login
class UFortUIStateTrigger_Login : public UFortUIStateTrigger
{
public:

	static class UClass* StaticClass();
	static class UFortUIStateTrigger_Login* GetDefaultObj();

};

// 0x20 (0x400 - 0x3E0)
// Class FortniteUI.FortUIStateWidget_NUI
class UFortUIStateWidget_NUI : public UCommonActivatablePanel
{
public:
	uint8                                        Pad_21D4[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FContentPushState>             StackStates;                                       // 0x3E8(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_21D5[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortUIStateWidget_NUI* GetDefaultObj();

	void PushContentWidgetInternal(class UWidget* Widget, const struct FContentPushState& State);
	void PushContentWidgetAdvanced(class UWidget* Widget, bool bHideHeader, bool bHideFooter, bool bHideChatWidget);
	void PushContentWidget(class UWidget* Widget);
	class UWidget* PopContentWidgetInternal(const struct FContentPushState& State);
	class UWidget* PopContentWidget();
	void OnExitState(enum class EFortUIState NextUIState);
	void OnEnterState(enum class EFortUIState PreviousUIState);
};

// 0x0 (0x400 - 0x400)
// Class FortniteUI.AthenaHUDBase
class UAthenaHUDBase : public UFortUIStateWidget_NUI
{
public:

	static class UClass* StaticClass();
	static class UAthenaHUDBase* GetDefaultObj();

	void TeamMembersChanged();
};

// 0x0 (0x400 - 0x400)
// Class FortniteUI.FortUIStateWidget_Frontend
class UFortUIStateWidget_Frontend : public UFortUIStateWidget_NUI
{
public:

	static class UClass* StaticClass();
	static class UFortUIStateWidget_Frontend* GetDefaultObj();

};

// 0x30 (0x430 - 0x400)
// Class FortniteUI.FortUIStateWidget_Login
class UFortUIStateWidget_Login : public UFortUIStateWidget_NUI
{
public:
	uint8                                        Pad_21D8[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortUIStateWidget_Login* GetDefaultObj();

	void StartUpdateCheck();
	bool StartManualLogin(const class FString& InEmail, const class FString& InPassword);
	bool StartAutoLogin();
	void ShowPostLoginLogoutError();
	void SendEulaResponse(bool bAccepted);
	void OnShowLoginMessage(bool bShow, class FText& Tile, class FText& Body);
	void OnPostLoginLogoutComplete(class FText& Reason);
	void OnPatchingComplete(bool bProceed);
	void OnNeedsPurchaseOrAccountLinking(bool bLinkedAccountNeedsPurchase);
	void OnLogoutComplete();
	void OnLoginSuceeded();
	void OnLoginFailed(class FText& Reason);
	void OnEulaAvailable(class FText& EulaText);
	void OnDisplayErrorComplete();
	bool IsLoggingOut();
	bool IsLoggedIn();
	class FText GetPlatformDisplayName();
	class FText GetEULAText();
	void CheckShowLoginMessage();
	bool CheckNetworkError();
};

// 0x28 (0x268 - 0x240)
// Class FortniteUI.FortActionHandlerPanel
class UFortActionHandlerPanel : public UFortUserWidget
{
public:
	bool                                         bAutoActivate;                                     // 0x240(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortPlayerControllerProcessing   PlayerControllerProcessing;                        // 0x241(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsActive;                                         // 0x242(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_21DA[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           OnPanelActivated;                                  // 0x248(0x10)(ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPrivate)
	UDelegateProperty_                           OnPanelDeactivated;                                // 0x258(0x10)(ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortActionHandlerPanel* GetDefaultObj();

	void SetOnPanelDeactivated(UDelegateProperty_& OnDeactivatedHandler);
	void SetOnPanelActivated(UDelegateProperty_& OnActivatedHandler);
	void RemoveOnPanelDeactivated(class UObject* BoundObject);
	void OnHandleAction(struct FEventReply* Result, bool* bPassThrough);
	void DeactivateActionHandler();
	void ActivateActionHandler();
};

// 0x178 (0x3E0 - 0x268)
// Class FortniteUI.FortConfirmationWindow
class UFortConfirmationWindow : public UFortActionHandlerPanel
{
public:
	uint8                                        Pad_21DB[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortDialogDescription                CurrentDescription;                                // 0x270(0x170)(BlueprintVisible, BlueprintReadOnly, ContainsInstancedReference, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortConfirmationWindow* GetDefaultObj();

	void ShowConfirmation(struct FFortDialogDescription& Description);
	void ProcessResult(enum class EFortDialogResult DialogResult);
	void OnShow();
	void OnKill();
	void KillConfirmation();
};

// 0x10 (0x278 - 0x268)
// Class FortniteUI.FortErrorDialog
class UFortErrorDialog : public UFortActionHandlerPanel
{
public:
	TArray<struct FFortErrorInfo>                ErrorInfo;                                         // 0x268(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortErrorDialog* GetDefaultObj();

	void ResetErrorInfo();
	void OnRebuildDialog(int32 NewIndex);
	void DisplayError(struct FFortErrorInfo& ErrorInfo);
};

// 0x0 (0x268 - 0x268)
// Class FortniteUI.FortQuestRewardChoiceWidget
class UFortQuestRewardChoiceWidget : public UFortActionHandlerPanel
{
public:

	static class UClass* StaticClass();
	static class UFortQuestRewardChoiceWidget* GetDefaultObj();

	void SetQuest(class UFortQuestItem* Quest);
};

// 0x0 (0x268 - 0x268)
// Class FortniteUI.FortUIStateWidget
class UFortUIStateWidget : public UFortActionHandlerPanel
{
public:

	static class UClass* StaticClass();
	static class UFortUIStateWidget* GetDefaultObj();

	void OnExitState(enum class EFortUIState NextUIState);
	void OnEnterState(enum class EFortUIState PreviousUIState);
};

// 0xC8 (0x330 - 0x268)
// Class FortniteUI.FortVaultWidget
class UFortVaultWidget : public UFortActionHandlerPanel
{
public:
	UMulticastDelegateProperty_                  OnRecycleItemsChanged;                             // 0x268(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_21E2[0x58];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UFortItem*>                     RecycleItems;                                      // 0x2D0(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TMap<class UFortItemDefinition*, struct FFortItemQuantityPair> ResourceItemQuantitiesMap;                         // 0x2E0(0x50)(ZeroConstructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortVaultWidget* GetDefaultObj();

	bool ToggleItemRecycling(class UFortItem* Item);
	void SetCachedSortType(enum class EInventoryContentSortType InSortType, enum class EFortInventoryFilter InContentSubType);
	void RemoveItemFromRecycling(class UFortItem* Item);
	void RemoveAllItemsFromRecycling();
	void OnRecycleItemsChanged__DelegateSignature(enum class EVaultItemChangedType ChangeType, TArray<class UFortItem*>& ChangedItems, TArray<struct FFortItemQuantityPair>& Resources, TArray<class UFortItem*>& RecycleItems);
	void MarkVisibleItemsSeen(TArray<class UFortAccountItem*>& InVisibleItems);
	void MarkSeenItemsInVault();
	bool IsSupportedSortType(enum class EInventoryContentSortType InSortType, enum class EFortInventoryFilter InContentSubType);
	bool IsRecyclingItemWithTier(enum class EFortItemTier Tier);
	bool IsRecyclingItemWithRarity(enum class EFortRarity Rarity);
	bool IsRecyclingItemWithLevel(int32 Level);
	bool IsRecyclingItem(class UFortItem* Item);
	bool IsRecycling();
	int32 GetTotalRecycleValue();
	void GetItemList(TArray<class UFortAccountItem*>* OutItemList, const struct FVaultContentDetails& Details);
	enum class EInventoryContentSortType GetCachedSortType(enum class EFortInventoryFilter InContentSubType);
	void CommitRecycle();
	void AddItemToRecycling(class UFortItem* Item);
	void _BPOnContentUpdated();
};

// 0x18 (0x258 - 0x240)
// Class FortniteUI.FortAlterationsWidget
class UFortAlterationsWidget : public UFortUserWidget
{
public:
	TArray<class UFortAlterationItemDefinition*> AlterationList;                                    // 0x240(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ExposeOnSpawn, NativeAccessSpecifierPublic)
	bool                                         bIsUpgrade;                                        // 0x250(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21E3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CurrentItemLevel;                                  // 0x254(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFortAlterationsWidget* GetDefaultObj();

	void ProcessAlterations();
	void OnGenerateAlteration(const struct FFortUIAlteration& AlterationInfo);
};

// 0x18 (0x258 - 0x240)
// Class FortniteUI.FortAlterationWidget
class UFortAlterationWidget : public UFortUserWidget
{
public:
	struct FFortUIAlteration                     AlterationInfo;                                    // 0x240(0x18)(BlueprintVisible, BlueprintReadOnly, NoDestructor, ExposeOnSpawn, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFortAlterationWidget* GetDefaultObj();

	bool IsAlterationUnlocked();
	bool IsAlterationHighlighted();
	int32 GetRequiredLevel();
	class UFortAlterationItemDefinition* GetAlterationDefintion();
};

// 0x18 (0x258 - 0x240)
// Class FortniteUI.FortAttributeList
class UFortAttributeList : public UFortUserWidget
{
public:
	TSubclassOf<class UFortAttributeListItem>    AttributeItemClass;                                // 0x240(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHoverEnabledOnElements;                           // 0x248(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21E4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UVerticalBox*                          AttributeContainer;                                // 0x250(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortAttributeList* GetDefaultObj();

	void SetPreviewData(TArray<struct FFortDisplayAttribute>& Data);
	TArray<struct FFortDisplayAttribute> SetData(TArray<struct FFortDisplayAttribute>& Data);
	void ClearPreviewData();
	void Clear();
};

// 0x38 (0x8A0 - 0x868)
// Class FortniteUI.FortItemWidget
class UFortItemWidget : public UFortBaseButton
{
public:
	UDelegateProperty_                           OnGetItemToCompareDelegate;                        // 0x868(0x10)(ZeroConstructor, InstancedReference, NoDestructor, Protected, NativeAccessSpecifierProtected)
	class FName                                  CooldownMaterialParameterName;                     // 0x878(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInstanceDynamic*              CooldownMaterial;                                  // 0x880(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        LastCooldownTimeInSeconds;                         // 0x888(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        LastCooldownPct;                                   // 0x88C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        LastIsActivatable : 1;                             // Mask: 0x1, PropSize: 0x10x890(0x1)(NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_20A : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_21EB[0xB];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        QuantityOverride;                                  // 0x89C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortItemWidget* GetDefaultObj();

	void SetOnGetItemToCompareDelegate(UDelegateProperty_ InDelegate);
	void SetItem(class UFortItem* InItem, int32 QuantityOverride);
	void SetCooldownMaterial(class UMaterialInstanceDynamic* NewCooldownMaterial);
	void OnGetItemToCompare__DelegateSignature(class UFortItem** ItemToCompare);
	void OnFortItemUpdated(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged);
	void OnFortItemDestroyed();
	bool IsSlotted();
	bool IsSchematic();
	bool IsItemValid();
	bool IsInventoryOverflowItem();
	bool IsEquipped();
	bool HasTertiaryCategory();
	bool HasSecondaryCategory();
	bool HasLevel();
	bool HasDurability();
	float GetType();
	int32 GetStackCount();
	enum class EFortRarity GetRarity();
	int32 GetLevel();
	class UFortItem* GetItemToCompare();
	class UFortItem* GetItem();
	class UTexture* GetIconTexture(enum class EFortBrushSize InBrushSize);
	float GetDurability();
	class FText GetDisplayName();
	class FText GetDescription();
	void BPOnItemSet(class UFortItem* NewItem);
	void BPOnItemChanged();
	void BPOnCooldownSecondsChanged(int32 NewCooldownSeconds);
	void BPOnActivatableChanged(bool bNewActivatable);
};

// 0x8 (0x248 - 0x240)
// Class FortniteUI.FortBluGloCounter
class UFortBluGloCounter : public UFortUserWidget
{
public:
	uint8                                        Pad_21EC[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortBluGloCounter* GetDefaultObj();

	void OnBluGloQuantityChanged(int32 Quantity);
};

// 0x10 (0x250 - 0x240)
// Class FortniteUI.FortCapturePointWidget
class UFortCapturePointWidget : public UFortUserWidget
{
public:
	uint8                                        Pad_21F0[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortCapturePointWidget* GetDefaultObj();

	void OnCapturePointDataChanged(bool bActivated, bool bLocked, float CapturePercentage, enum class ECaptureState CaptureState, enum class EFortTeam ControllingTeam);
};

// 0x18 (0x258 - 0x240)
// Class FortniteUI.FortChatContainer
class UFortChatContainer : public UFortUserWidget
{
public:
	bool                                         MinimizeEnabled;                                   // 0x240(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AutoReleaseFocus;                                  // 0x241(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AllowEmotes;                                       // 0x242(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21F1[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ListFadeTime;                                      // 0x244(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinimizedChatMessageNum;                           // 0x248(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21F2[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortChatContainer* GetDefaultObj();

	void SetNativeWidgetHost(class UNativeWidgetHost* InNativeWidgetHost);
	void AttachChatWindowToNativeWidget();
};

// 0x0 (0x240 - 0x240)
// Class FortniteUI.FortGridPickerGrid
class UFortGridPickerGrid : public UFortUserWidget
{
public:

	static class UClass* StaticClass();
	static class UFortGridPickerGrid* GetDefaultObj();

};

// 0x10 (0x250 - 0x240)
// Class FortniteUI.FortItemCollectorWidget
class UFortItemCollectorWidget : public UFortUserWidget
{
public:
	class ABuildingItemCollectorActor*           ItemCollector;                                     // 0x240(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_21F3[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortItemCollectorWidget* GetDefaultObj();

	void OnItemCollectorValuesChanged(TArray<int32>& DepositAmounts, TArray<int32>& DepositGoals);
	void OnItemCollectorStateChanged(enum class EFortItemCollectorState ItemCollectorState);
	void OnItemCollectorChanged(class ABuildingItemCollectorActor* OutItemCollector);
};

// 0x30 (0x270 - 0x240)
// Class FortniteUI.FortItemGroupSlotPicker
class UFortItemGroupSlotPicker : public UFortUserWidget
{
public:
	UMulticastDelegateProperty_                  OnItemPickerSelectionCommittedEvent;               // 0x240(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UFortItemGroupSlotWidget> HostItemGroupSlotWidget;                           // 0x250(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UContentWidget*                        SlottedItemDetailsContainer;                       // 0x258(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UWidget>                SlottedItemDetailsWidget;                          // 0x260(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortItem*                             UpgradedItemForPreview;                            // 0x268(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortItemGroupSlotPicker* GetDefaultObj();

	void SignalSelectionCommitted(class UFortItem* SelectedItem);
	void SetSelection(class UFortItem* SelectedItem);
	void OnItemPickerSelectionChanged__DelegateSignature(class UFortItem* SelectedItem);
	void HandleItemSetInternal(class UFortItemGroupSlotWidget* ItemGroupSlotWidget);
	void HandleItemSet();
	class FName GetSquadId();
	int32 GetSlotIndexInGroup();
	class FText GetItemSlottingRestrictionReasonText(enum class ESquadSlotItemRestrictionReason Reason);
	class UFortItem* GetCurrentlySlottedItem();
	TArray<class UFortItem*> GetCompatibleCandidateItems();
	void GetCandidateItemSlottingRestrictions(class UFortItem* CandidateItem, TArray<enum class ESquadSlotItemRestrictionReason>* OutRestrictions);
	float GetCandidateFitnessValueForSlot(class UFortItem* Candidate);
	void EndUpgradePreview();
	void DetectCandidateSynergiesAndMatches(class UFortItem* Candidate, bool* OutHasSquadManagerSynergy, bool* OutHasPersonalitySynergy, bool* OutHasSetBonusMatch);
	class UWidget* CreateSlottedItemDetailsWidget(class UFortItem* Item);
	void BeginUpgradePreview();
};

// 0xD8 (0x318 - 0x240)
// Class FortniteUI.FortItemGroupSlotWidget
class UFortItemGroupSlotWidget : public UFortUserWidget
{
public:
	int32                                        SlotIndexInGroup;                                  // 0x240(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsLocked;                                          // 0x244(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2201[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<struct FGameplayAttribute, float>       AttributeBonusValues;                              // 0x248(0x50)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         HasSetBonusMatch;                                  // 0x298(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2202[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TWeakObjectPtr<class UFortItem>              SlottedItem;                                       // 0x29C(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2203[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EFortItemType>             ItemTypeFilters;                                   // 0x2A8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 ItemTagFilter;                                     // 0x2B8(0x20)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnItemSlotLockedStateChangedEvent;                 // 0x2D8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnItemSetEvent;                                    // 0x2E8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnAttributeBonusValueChangedEvent;                 // 0x2F8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UFortItemGroupWidget>   HostItemGroupWidget;                               // 0x308(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UFortItemGroupSlotPicker>  ItemPickerWidgetType;                              // 0x310(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortItemGroupSlotWidget* GetDefaultObj();

	bool TryGetSquadSlot(struct FHomebaseSquadSlot* OutSquadSlot);
	bool TryGetSquad(struct FHomebaseSquad* OutSquad);
	void SetSlottingPreviewItem(class UFortItem* Item);
	void SetItem(class UFortItem* ItemToSlot);
	void OnItemSlotLockedStateChanged__DelegateSignature(class UFortItemGroupSlotWidget* ItemSlotWidget);
	void OnItemSet__DelegateSignature(class UFortItemGroupSlotWidget* ItemSlotWidget);
	void OnAttributeBonusValueChanged__DelegateSignature(class UFortItemGroupSlotWidget* ItemSlotWidget);
	bool IsManagerSlot();
	bool IsItemCompatible(class UFortItem* Item);
	void InitializeSlot(class UFortItemGroupWidget* HostItemGroupWidget, int32 SlotIndexInGroup);
	void HandleTraitStateChanged(bool SetBonusMatchStateChanged);
	void HandlePreviewStateChanged(bool IsSquadSlotAffectedByPreview, bool IsBeingReplacedOrRelocated, bool WouldHavePersonalitySynergy, bool WouldHaveSetBonusMatch, TMap<struct FGameplayAttribute, float>& PreviewAttributeBonusValues);
	void HandleLockedStateChanged();
	void HandleItemSet();
	void HandleItemPickerSelectionCommittedInternal(class UFortItem* SelectedItem);
	void HandleItemPickerSelectionCommitted();
	void HandleAttributeBonusValueChanged();
	class FName GetSquadId();
	class UFortItemGroupSlotPicker* CreatePickerWidget();
	void CancelSlottingPreview();
};

// 0x28 (0x268 - 0x240)
// Class FortniteUI.FortItemGroupWidget
class UFortItemGroupWidget : public UFortUserWidget
{
public:
	class FName                                  SquadId;                                           // 0x240(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UFortItemGroupSlotWidget>  ItemSlotWidgetType;                                // 0x248(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPanelWidget*                          ItemSlotsContainer;                                // 0x250(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UFortItemGroupSlotWidget*>      SlotWidgets;                                       // 0x258(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortItemGroupWidget* GetDefaultObj();

	bool TryGetSquad(struct FHomebaseSquad* OutSquad);
	void SetSquad(class FName SquadId);
	void HandleItemSlotAdded(int32 SlotIndex, class UFortItemGroupSlotWidget* ItemSlotWidget);
	void HandleEffectsChanged();
	void HandleDifferentSquadSet();
	void GetTotalAttributeBonuses(TArray<struct FFortAttributeModifierDisplayData>* OutModifiers);
	class FName GetSquadId();
	void GetActiveSetBonusTags(TArray<struct FGameplayTag>* OutActiveSetBonusTags);
};

// 0x0 (0x240 - 0x240)
// Class FortniteUI.FortListItem
class UFortListItem : public UFortUserWidget
{
public:

	static class UClass* StaticClass();
	static class UFortListItem* GetDefaultObj();

	void ToggleExpansion();
	void SetSelected(bool bSelected);
	void SetIndexInList(int32 InIndexInList);
	void SetData(class UObject* InData);
	void Private_OnExpanderArrowShiftClicked();
	bool IsItemExpanded();
	enum class ESelectionMode GetSelectionMode();
	int32 GetIndentLevel();
	int32 DoesItemHaveChildren();
};

// 0x18 (0x258 - 0x240)
// Class FortniteUI.FortMovieWidget
class UFortMovieWidget : public UFortUserWidget
{
public:
	UMulticastDelegateProperty_                  OnMediaOpened;                                     // 0x240(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UMediaPlayer*                          MediaPlayer;                                       // 0x250(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortMovieWidget* GetDefaultObj();

	void SetMediaSource(class UMediaSource* InMediaSource, class UMediaSoundWave* InMediaSoundWave);
	void RequestStopMovie();
	void RequestPlayMovie(bool bShouldRewind);
	void MediaDimensionsUpdated(float NewWidth, float NewHeight);
	bool HasPlayerForSource(class UMediaSource* InMediaSource);
	class UMediaTexture* GetMediaTexture();
	class UMediaPlayer* GetMediaPlayer();
};

// 0x8 (0x248 - 0x240)
// Class FortniteUI.FortNodeCanvasHost
class UFortNodeCanvasHost : public UFortUserWidget
{
public:
	class UFortNodeCanvas*                       Canvas;                                            // 0x240(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFortNodeCanvasHost* GetDefaultObj();

};

// 0x138 (0x378 - 0x240)
// Class FortniteUI.FortNodeGraphHost
class UFortNodeGraphHost : public UFortUserWidget
{
public:
	struct FFortCanvasProperties                 CanvasProperties;                                  // 0x240(0x70)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnPageShownDelegate;                               // 0x2B0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UFortNodeCanvasHost*                   CurrentNodeCanvasHost;                             // 0x2C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UOverlay*                              CanvasOverlay;                                     // 0x2C8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMap<class FName, TSubclassOf<class UUserWidget>> NodePageIdToWidgetTypeMap;                         // 0x2D0(0x50)(Edit, ZeroConstructor, DisableEditOnInstance, EditConst, UObjectWrapper, NativeAccessSpecifierPrivate)
	TMap<class FName, class UFortNodeCanvasHost*> NodePageIdToInstanceCache;                         // 0x320(0x50)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_220B[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortNodeGraphHost* GetDefaultObj();

	void ShowPage(class FName NodePageId, class FName SourceNodeId, class FName DestinationNodeId, bool bSelectNode, bool bOnlyPanIfNew);
	void SetBackgroundMaterial(class UMaterialInstanceDynamic* InBackgroundMaterial);
	void OnPageShown__DelegateSignature(class UFortNodeCanvasHost* Page);
	bool IsEarlyGame();
	TSubclassOf<class UUserWidget> GetWidgetTypeForNodePage(class FName NodePageId);
	void GetTokensNeededForNodePage(class UFortNodeCanvasHost* Page, TArray<class UFortItemDefinition*>* OutTokens);
	bool GetPathToNode(class FName NodePageId, class FName NodeID, TArray<class FName>* Pages, TArray<class FName>* Nodes);
	class FText GetNodePageName(class FName NodePageId);
	class FName GetInitialNodePageName();
	class FName GetInitialNodeName();
};

// 0x10 (0x250 - 0x240)
// Class FortniteUI.FortNodePrerequisitesWidget
class UFortNodePrerequisitesWidget : public UFortUserWidget
{
public:
	struct FDataTableRowHandle                   NodeStyleData;                                     // 0x240(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFortNodePrerequisitesWidget* GetDefaultObj();

	void ProcessNodePrequisites(class FName NodeID);
	void GenerateNodePrerequisiteConnector(enum class EFortNodePrerequisiteConnector Connector);
	void GenerateNodePrerequisite(const struct FFortUINodePrerequisite& NodePrerequisite);
};

// 0x18 (0x258 - 0x240)
// Class FortniteUI.FortPerksWidget
class UFortPerksWidget : public UFortUserWidget
{
public:
	class UFortHero*                             Hero;                                              // 0x240(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsUpgrade;                                        // 0x248(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsEvolution;                                      // 0x249(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_220C[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortHero*                             EvolutionOption;                                   // 0x250(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFortPerksWidget* GetDefaultObj();

	void ProcessPerkTiers();
	void OnGeneratePerkTier(const struct FFortUIPerkTier& FortPerkTier);
};

// 0x20 (0x260 - 0x240)
// Class FortniteUI.FortPerkTierWidget
class UFortPerkTierWidget : public UFortUserWidget
{
public:
	struct FFortUIPerkTier                       FortPerkTier;                                      // 0x240(0x20)(BlueprintVisible, BlueprintReadOnly, NoDestructor, ExposeOnSpawn, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFortPerkTierWidget* GetDefaultObj();

	void ProcessPerks();
	void OnGeneratePerk(const struct FFortUIPerk& Perk);
};

// 0x20 (0x260 - 0x240)
// Class FortniteUI.FortPvPMinimapWidget
class UFortPvPMinimapWidget : public UFortUserWidget
{
public:
	uint8                                        Pad_220D[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortPvPMinimapWidget* GetDefaultObj();

};

// 0x0 (0x240 - 0x240)
// Class FortniteUI.FortSocialItemWidget
class UFortSocialItemWidget : public UFortUserWidget
{
public:

	static class UClass* StaticClass();
	static class UFortSocialItemWidget* GetDefaultObj();

	void SetSocialItem(class UFortSocialItem* InSocialItem);
};

// 0x28 (0x268 - 0x240)
// Class FortniteUI.FortSquadPanelWidget
class UFortSquadPanelWidget : public UFortUserWidget
{
public:
	enum class EFortHomebaseSquadType            SquadTypeFilter;                                   // 0x240(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_220E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UFortItemGroupWidget>      SquadWidgetType;                                   // 0x248(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPanelWidget*                          SquadWidgetsContainer;                             // 0x250(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UFortItemGroupWidget*>          SquadWidgets;                                      // 0x258(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortSquadPanelWidget* GetDefaultObj();

};

// 0x0 (0x240 - 0x240)
// Class FortniteUI.FortStorefront
class UFortStorefront : public UFortUserWidget
{
public:

	static class UClass* StaticClass();
	static class UFortStorefront* GetDefaultObj();

};

// 0x250 (0x490 - 0x240)
// Class FortniteUI.FortUIManagerWidget
class UFortUIManagerWidget : public UFortUserWidget
{
public:
	uint8                                        Pad_2214[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnBeginSpokenDialog;                               // 0x248(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnEndSpokenDialog;                                 // 0x258(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UFortUIStateWidget>      StateWidgets[0xA];                                 // 0x268(0x140)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EFortUIState                      CurrentState;                                      // 0x3A8(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EFortUIState                      PendingState;                                      // 0x3A9(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2215[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortUIStateWidget*                    CurrentStateWidget;                                // 0x3B0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<TSubclassOf<class UFortUIStateWidget>> LoadedStateWidgetClasses;                          // 0x3B8(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<class UFortUIStateTrigger*>           StateTriggers;                                     // 0x3C8(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	TArray<class UFortActionHandlerPanel*>       ActionHandlerPanels;                               // 0x3D8(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2216[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortNotificationQueue*                UINotificationQueues[0x3];                         // 0x3F0(0x18)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bIsStateContentDisplayed;                          // 0x408(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2217[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortUINavigationManager*              NavigationManager;                                 // 0x410(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2218[0x78];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortUIManagerWidget* GetDefaultObj();

	void UpdateStateWidgetContent(class UFortUIStateWidget* StateWidget);
	void UnregisterStateTrigger(class UFortUIStateTrigger* TriggerToRemove);
	void ShowErrorDialog(class UObject* WorldContextObject, class FText OperationDesc, class FText DisplayMessage, const class FString& ErrorCode);
	void SetStateContentDisplayed(bool bDisplay);
	void ReleaseNotification(class UFortUINotification* Notification);
	void RegisterStateTrigger(class UFortUIStateTrigger* StateTrigger);
	void QueueActivatablePanelIntoModalLayer(class UCommonActivatablePanel* Panel);
	void QueueActionPanelIntoModalLayer(class UFortActionHandlerPanel* Panel, enum class EHorizontalAlignment HorizontalAlignment, enum class EVerticalAlignment VerticalAlignment);
	void OnStateStarted();
	void OnShowConfirmation_NUI(struct FFortDialogDescription_NUI& Description);
	void OnShowConfirmation(struct FFortDialogDescription& Description);
	void OnEndSpokenDialog__DelegateSignature();
	void OnBeginSpokenDialog__DelegateSignature(class UTexture2D* Image, class FText Title, class FText Subtitle, enum class EFortAnnouncementDisplayPreference DisplayPreference);
	void KillConfirmationDialog(class UObject* WorldContextObject);
	bool IsStateContentDisplayed();
	class UFortUIManagerWidget* GetUIManagerWidget(class UObject* WorldContextObject);
	class UFortUINavigationManager* GetNavigationManager();
	class UFortUIStateWidget* GetCurrentUIStateWidget();
	void DisplayStateContent(bool bDisplay);
	void DisplayErrorDialog(struct FFortErrorInfo& Info);
	class UFortUIStateTrigger* CreateUIStateTrigger(TSubclassOf<class UFortUIStateTrigger> Class, class UObject* WorldContextObject);
	class UFortUINotification* CreateNotification(TSubclassOf<class UFortUINotification> UINotificationClass);
	enum class EFortUIState _BPGetCurrentUIState();
};

// 0x0 (0x240 - 0x240)
// Class FortniteUI.FortUserChoiceWidget
class UFortUserChoiceWidget : public UFortUserWidget
{
public:

	static class UClass* StaticClass();
	static class UFortUserChoiceWidget* GetDefaultObj();

	void SetChoices(struct FChoiceData& ChoiceItems);
};

// 0x18 (0x250 - 0x238)
// Class FortniteUI.FortWorkerSetBonusIcon
class UFortWorkerSetBonusIcon : public UCommonUserWidget
{
public:
	struct FGameplayTag                          GameplayTag;                                       // 0x238(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortBrushSize                    ImageSize;                                         // 0x240(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_221A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UImage*                                Icon;                                              // 0x248(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFortWorkerSetBonusIcon* GetDefaultObj();

	void SetGameplayTag(struct FGameplayTag& InGameplayTag);
	void HandleDifferentGameplayTagSetBP();
};

// 0x0 (0x8A0 - 0x8A0)
// Class FortniteUI.FriendCodeEntryBase
class UFriendCodeEntryBase : public UCommonButton
{
public:

	static class UClass* StaticClass();
	static class UFriendCodeEntryBase* GetDefaultObj();

};

// 0x0 (0x3E0 - 0x3E0)
// Class FortniteUI.FriendCodeListBase
class UFriendCodeListBase : public UCommonActivatablePanel
{
public:

	static class UClass* StaticClass();
	static class UFriendCodeListBase* GetDefaultObj();

};

// 0x20 (0x48 - 0x28)
// Class FortniteUI.UINavigationManager
class UUINavigationManager : public UObject
{
public:
	UMulticastDelegateProperty_                  OnNavigationEvent;                                 // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TArray<struct FUINavigationEntry>            NavigationStack;                                   // 0x38(0x10)(ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UUINavigationManager* GetDefaultObj();

	void PushNavigation(class FText DisplayName, class UObject* ObjectData, class FName IdData, int32 IntData, UDelegateProperty_& OnNavigateTo, UDelegateProperty_& OnNavigateFrom);
	void PopNavigation();
	void NavigationToIndex(int32 Index);
	int32 GetStackSize();
	class FText GetDisplayName(int32 Index);
	void ClearStack();
};

// 0x100 (0x148 - 0x48)
// Class FortniteUI.FortUINavigationManager
class UFortUINavigationManager : public UUINavigationManager
{
public:
	UMulticastDelegateProperty_                  OnMainTabNavigateRequest;                          // 0x48(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnFeatureNavigateOp;                               // 0x58(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnNodePageNavigateRequest;                         // 0x68(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnSquadSlotNavigateRequest;                        // 0x78(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnVaultTabNavigateRequest;                         // 0x88(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnVaultItemNavigateRequest;                        // 0x98(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnItemEvolutionNavigateRequest;                    // 0xA8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnQuestItemNavigateRequest;                        // 0xB8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnPopContentStackOp;                               // 0xC8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnSquadNavigationOp;                               // 0xD8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  FortExpeditionsOp;                                 // 0xE8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  FortCollectionBookOp;                              // 0xF8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnQuestItemOp;                                     // 0x108(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_2231[0x20];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFortUINavigationRequest>      NavigationRequests;                                // 0x138(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortUINavigationManager* GetDefaultObj();

	bool TryGetPendingNavigationOp(struct FFortUINavigationOperation* NavigationOp);
	void SetScrollWidget(class UWidget* Widget);
	void PushSquadManagementScreen(class FName SquadId, int32 SquadSlotIndex);
	void PushSkillTreePage(class FName SkillTreePageId);
	void PushSkillTreeNode(class FName SkillTreeNodeId);
	void PushItemManagementScreen(enum class EFortFrontendInventoryFilter ItemManagementFilter);
	void PushItemInspectionScreen(class UFortItem* ItemToInspect, enum class EFortItemInspectionMode Mode, bool bReadOnly, bool bAllowFavoriting, bool bIsTemporaryItem);
	void NavigateToSquadSlot(class FName SquadId, int32 SquadSlotIndex);
	void NavigateToQuestObjective(class UFortQuestItem* QuestItem);
	void NavigateToNodePageByGameplayTagContainer(const struct FGameplayTagContainer& GameplayTagContainer);
	void NavigateToNodePage(class FName PageId, class FName NodeID);
	void NavigateToItemManagementScreen(enum class EFortFrontendInventoryFilter Filter);
	void NavigateToItem(class UFortItem* Item);
	void NavigateToFeature(enum class EFortUIFeature Feature);
	void NavigateToExpeditions();
	void NavigateToCollectionBook();
	bool HasPendingNavigationOp(enum class EFortUINavigationOp NavigationOp);
	void CompletePendingNavigationOp(enum class EFortUINavigationOp NavigationOp);
	void CenterWidget(class UWidget* Widget);
	bool CanNavigateToQuestObjective(class UFortQuestItem* QuestItem);
	void AttemptPlayQuest(class UFortQuestItem* Quest);
	bool AttemptMatchmakeForQuest(class UFortQuestItem* Quest, bool* OutContentNotDownloaded);
};

}


