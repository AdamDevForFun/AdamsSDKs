#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x8 - 0x0)
// Function FortniteUI.AthenaHUDContext.SetSelectedInventoryItem
struct UAthenaHUDContext_SetSelectedInventoryItem_Params
{
public:
	class UFortItem*                             Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC8 (0xC8 - 0x0)
// Function FortniteUI.AthenaHUDContext.HandleUIGameplayCue
struct UAthenaHUDContext_HandleUIGameplayCue_Params
{
public:
	class FName                                  CueName;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGameplayCueEvent                 EventType;                                         // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EBD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayCueParameters                Parameters;                                        // 0x10(0xB8)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.AthenaHUDContext.HandleLocalPlayerDBNOStateChanged
struct UAthenaHUDContext_HandleLocalPlayerDBNOStateChanged_Params
{
public:
	bool                                         bIsDBNO;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.AthenaHUDContext.GetSelectedInventoryItem
struct UAthenaHUDContext_GetSelectedInventoryItem_Params
{
public:
	class UFortItem*                             ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function FortniteUI.FortHUDElementWidget.HandleOnHUDElementVisibilityChanged
struct UFortHUDElementWidget_HandleOnHUDElementVisibilityChanged_Params
{
public:
	struct FGameplayTagContainer                 HiddenHUDElementTags;                              // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0xA8 (0xA8 - 0x0)
// Function FortniteUI.FortTabButtonInterface.SetTabLabelInfo
struct IFortTabButtonInterface_SetTabLabelInfo_Params
{
public:
	struct FFortTabButtonLabelInfo               TabLabelInfo;                                      // 0x0(0xA8)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortTabListWidgetBase.SetPreviousTabInputActionData
struct UFortTabListWidgetBase_SetPreviousTabInputActionData_Params
{
public:
	struct FDataTableRowHandle                   PreviousData;                                      // 0x0(0x10)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortTabListWidgetBase.SetNextTabInputActionData
struct UFortTabListWidgetBase_SetNextTabInputActionData_Params
{
public:
	struct FDataTableRowHandle                   NextData;                                          // 0x0(0x10)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0xC8 (0xC8 - 0x0)
// Function FortniteUI.FortTabListWidgetBase.RegisterFortTab
struct UFortTabListWidgetBase_RegisterFortTab_Params
{
public:
	class FName                                  TabNameID;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UCommonButton>             TabButtonType;                                     // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortTabButtonLabelInfo               LabelInfo;                                         // 0x10(0xA8)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UWidget*                               ContentWidget;                                     // 0xB8(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xC0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EC7[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortTabListWidgetBase.IsLastTabActive
struct UFortTabListWidgetBase_IsLastTabActive_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortTabListWidgetBase.IsFirstTabActive
struct UFortTabListWidgetBase_IsFirstTabActive_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xE0 (0xE0 - 0x0)
// Function FortniteUI.FortTabListWidgetBase.GetPreregisteredTabInfo
struct UFortTabListWidgetBase_GetPreregisteredTabInfo_Params
{
public:
	class FName                                  TabNameID;                                         // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortTabListRegistrationInfo          OutTabInfo;                                        // 0x8(0xD0)(Parm, OutParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xD8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EC8[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.AthenaInventoryPanelBase.SetSortType
struct UAthenaInventoryPanelBase_SetSortType_Params
{
public:
	enum class EInventoryContentSortType         SortType;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.AthenaInventoryPanelBase.RequestEquip
struct UAthenaInventoryPanelBase_RequestEquip_Params
{
public:
	class UFortItem*                             Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.AthenaInventoryPanelBase.OnInventoryItemSelected
struct UAthenaInventoryPanelBase_OnInventoryItemSelected_Params
{
public:
	class UFortItem*                             Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.AthenaInventoryPanelBase.HandleResourceItemDoubleClicked
struct UAthenaInventoryPanelBase_HandleResourceItemDoubleClicked_Params
{
public:
	class UObject*                               Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.AthenaInventoryPanelBase.HandleQuickBarChangedBP
struct UAthenaInventoryPanelBase_HandleQuickBarChangedBP_Params
{
public:
	enum class EFortQuickBars                    QuickBarType;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.AthenaInventoryPanelBase.HandleItemWidgetCreated
struct UAthenaInventoryPanelBase_HandleItemWidgetCreated_Params
{
public:
	class UUserWidget*                           ItemWidget;                                        // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.AthenaInventoryPanelBase.HandleInventoryItemSelected
struct UAthenaInventoryPanelBase_HandleInventoryItemSelected_Params
{
public:
	class UObject*                               Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsSelected;                                       // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EC9[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.AthenaInventoryPanelBase.HandleInventoryItemHovered
struct UAthenaInventoryPanelBase_HandleInventoryItemHovered_Params
{
public:
	class UObject*                               Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.AthenaInventoryPanelBase.HandleInventoryItemDoubleClicked
struct UAthenaInventoryPanelBase_HandleInventoryItemDoubleClicked_Params
{
public:
	class UObject*                               Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.AthenaInventoryPanelBase.HandleInventoryItemClicked
struct UAthenaInventoryPanelBase_HandleInventoryItemClicked_Params
{
public:
	class UObject*                               Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function FortniteUI.AthenaInventoryPanelBase.HandleCursorModeChangedBP
struct UAthenaInventoryPanelBase_HandleCursorModeChangedBP_Params
{
public:
	bool                                         bCursorModeEnabled;                                // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1ECA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  ActionName;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UUserWidget*                           CursorModeContentWidget;                           // 0x10(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function FortniteUI.AthenaInventoryPanelBase.HandleCursorModeChanged
struct UAthenaInventoryPanelBase_HandleCursorModeChanged_Params
{
public:
	bool                                         bCursorModeEnabled;                                // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1ECB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  ActionName;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UUserWidget*                           CursorModeContentWidget;                           // 0x10(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.AthenaInventoryPanelBase.GetSupportedSortTypesForCurrentInventory
struct UAthenaInventoryPanelBase_GetSupportedSortTypesForCurrentInventory_Params
{
public:
	TArray<enum class EInventoryContentSortType> ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function FortniteUI.AthenaLeaderboardScreenBase.OnUpdateTabButtonText
struct UAthenaLeaderboardScreenBase_OnUpdateTabButtonText_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAthenaPlaylistLeaderboardData        PlaylistTabData;                                   // 0x8(0x48)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function FortniteUI.AthenaLeaderboardScreenBase.OnUpdateListHeader
struct UAthenaLeaderboardScreenBase_OnUpdateListHeader_Params
{
public:
	struct FAthenaPlaylistLeaderboardData        PlaylistTabData;                                   // 0x0(0x48)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function FortniteUI.AthenaLeaderboardScreenBase.OnUpdateLeaderboardListUI
struct UAthenaLeaderboardScreenBase_OnUpdateLeaderboardListUI_Params
{
public:
	bool                                         bWasSuccessful;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1ECE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortLeaderboardRowProxyInstance*      LocalUserRow;                                      // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  ErrorStr;                                          // 0x10(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.AthenaLeaderboardScreenBase.OnMatchTypeChanged
struct UAthenaLeaderboardScreenBase_OnMatchTypeChanged_Params
{
public:
	int32                                        MatchTypeIndex;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.AthenaLeaderboardScreenBase.OnFriendsFilterChanged
struct UAthenaLeaderboardScreenBase_OnFriendsFilterChanged_Params
{
public:
	int32                                        FriendsFilterIndex;                                // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.AthenaLeaderboardScreenBase.OnActiveLeaderboardTabChanged
struct UAthenaLeaderboardScreenBase_OnActiveLeaderboardTabChanged_Params
{
public:
	int32                                        ActiveWidgetIndex;                                 // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.AthenaLeaderboardScreenBase.CanShowFriendsOnlyLeaderboard
struct UAthenaLeaderboardScreenBase_CanShowFriendsOnlyLeaderboard_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.AthenaLobbyBase.OnPlayerClicked
struct UAthenaLobbyBase_OnPlayerClicked_Params
{
public:
	int32                                        PlayerIndex;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.AthenaLobbyBase.OnEndCursorOverPlayer
struct UAthenaLobbyBase_OnEndCursorOverPlayer_Params
{
public:
	int32                                        PlayerIndex;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.AthenaLobbyBase.OnBeginCursorOverPlayer
struct UAthenaLobbyBase_OnBeginCursorOverPlayer_Params
{
public:
	int32                                        PlayerIndex;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.AthenaMatchReadyDesktopPopup.UserDismissedDialog
struct UAthenaMatchReadyDesktopPopup_UserDismissedDialog_Params
{
public:
	bool                                         bBringToFront;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.AthenaStatsScreenBase.OnTabSelected
struct UAthenaStatsScreenBase_OnTabSelected_Params
{
public:
	class FName                                  TabName;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.AthenaStatsScreenBase.OnQueryFinished
struct UAthenaStatsScreenBase_OnQueryFinished_Params
{
public:
	bool                                         bWasSuccessful;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.AthenaStatsScreenBase.GetWinsTag
struct UAthenaStatsScreenBase_GetWinsTag_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.AthenaStatsScreenBase.GetThirdTierPlaceTag
struct UAthenaStatsScreenBase_GetThirdTierPlaceTag_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function FortniteUI.AthenaStatsScreenBase.GetStatValue
struct UAthenaStatsScreenBase_GetStatValue_Params
{
public:
	class FString                                BaseGameplayTag;                                   // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1ED3[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function FortniteUI.AthenaStatsScreenBase.GetStatGameplayTag
struct UAthenaStatsScreenBase_GetStatGameplayTag_Params
{
public:
	class FString                                BaseStatName;                                      // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.AthenaStatsScreenBase.GetSecondTierPlaceTag
struct UAthenaStatsScreenBase_GetSecondTierPlaceTag_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function FortniteUI.AthenaStatsScreenBase.GetLastUpdateTime
struct UAthenaStatsScreenBase_GetLastUpdateTime_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function FortniteUI.AthenaStatsScreenBase.FormatStatValueAsElapsedTime
struct UAthenaStatsScreenBase_FormatStatValueAsElapsedTime_Params
{
public:
	struct FTimespan                             ValueAsTimespan;                                   // 0x0(0x8)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  ReturnValue;                                       // 0x8(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortAbilitySystemContext.RemoveDelegatesFromWidget
struct UFortAbilitySystemContext_RemoveDelegatesFromWidget_Params
{
public:
	class UWidget*                               Widget;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function FortniteUI.FortAbilitySystemContext.RegisterForAttributeChanged
struct UFortAbilitySystemContext_RegisterForAttributeChanged_Params
{
public:
	class UWidget*                               Widget;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAbilitySystemComponent*               ASC;                                               // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayAttribute                    Attribute;                                         // 0x10(0x20)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UDelegateProperty_                           Callback;                                          // 0x30(0x10)(Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortAccountStatsContext.CanShowAccountStats
struct UFortAccountStatsContext_CanShowAccountStats_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortAccountLinkingWindow.IsPurchaseFree
struct UFortAccountLinkingWindow_IsPurchaseFree_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortAsyncAction_CheckHasRedeemForAccess.CheckHasRedeemForAccess
struct UFortAsyncAction_CheckHasRedeemForAccess_CheckHasRedeemForAccess_Params
{
public:
	class UObject*                               InWorldContextObject;                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortAsyncAction_CheckHasRedeemForAccess* ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortAsyncAction_ShowPlatformStoreForPurchase.ShowPlatformStoreForPurchase
struct UFortAsyncAction_ShowPlatformStoreForPurchase_ShowPlatformStoreForPurchase_Params
{
public:
	class UObject*                               InWorldContextObject;                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortAsyncAction_ShowPlatformStoreForPurchase* ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortAsyncAction_ShowPlatformRedeemCode.ShowPlatformRedeemCode
struct UFortAsyncAction_ShowPlatformRedeemCode_ShowPlatformRedeemCode_Params
{
public:
	class UObject*                               InWorldContextObject;                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortAsyncAction_ShowPlatformRedeemCode* ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortAsyncAction_WebCreateEpicAccountAndLink.WebCreateEpicAccountAndLink
struct UFortAsyncAction_WebCreateEpicAccountAndLink_WebCreateEpicAccountAndLink_Params
{
public:
	class UObject*                               InWorldContextObject;                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortAsyncAction_WebCreateEpicAccountAndLink* ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortAsyncAction_CreateHeadlessAccount.CreateHeadlessAccount
struct UFortAsyncAction_CreateHeadlessAccount_CreateHeadlessAccount_Params
{
public:
	class UObject*                               InWorldContextObject;                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortAsyncAction_CreateHeadlessAccount* ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortCollectionBookProgressionRewardDetailInspectWidget.SetAssociatedLevel
struct UFortCollectionBookProgressionRewardDetailInspectWidget_SetAssociatedLevel_Params
{
public:
	int32                                        Level;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortCollectionBookProgressionRewardsModalWidget.OnSelectedButtonChanged
struct UFortCollectionBookProgressionRewardsModalWidget_OnSelectedButtonChanged_Params
{
public:
	class UCommonButton*                         SelectedButton;                                    // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ButtonIndex;                                       // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EE9[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortCollectionBookProgressionRewardsModalWidget.OnLevelProgressionSet
struct UFortCollectionBookProgressionRewardsModalWidget_OnLevelProgressionSet_Params
{
public:
	int32                                        CurrentLevel;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NextLvlPct;                                        // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortCollectionBookProgressionRewardsModalWidget.OnInputMethodChanged
struct UFortCollectionBookProgressionRewardsModalWidget_OnInputMethodChanged_Params
{
public:
	bool                                         bUsingGamepad;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortCollectionBookProgressionRewardsModalWidget.InspectItemBP
struct UFortCollectionBookProgressionRewardsModalWidget_InspectItemBP_Params
{
public:
	class UFortItem*                             Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortCollectionBookWidget.OnPreviewXPChangeRequest
struct UFortCollectionBookWidget_OnPreviewXPChangeRequest_Params
{
public:
	int32                                        XPChange;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortCollectionBookWidget.OnCollectionBookSectionClicked
struct UFortCollectionBookWidget_OnCollectionBookSectionClicked_Params
{
public:
	class UFortCollectionBookSection*            ClickedSection;                                    // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortCollectionBookWidget.OnCollectionBookPageSelected
struct UFortCollectionBookWidget_OnCollectionBookPageSelected_Params
{
public:
	class UFortCollectionBookPage*               SelectedPage;                                      // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortCollectionBookWidget.OnCollectionBookPageClicked
struct UFortCollectionBookWidget_OnCollectionBookPageClicked_Params
{
public:
	class UFortCollectionBookPage*               ClickedPage;                                       // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortErrorWindow.PutErrorEntries
struct UFortErrorWindow_PutErrorEntries_Params
{
public:
	TArray<class UCommonUserWidget*>             ErrorEntries;                                      // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortErrorWindow.GetErrorEntry
struct UFortErrorWindow_GetErrorEntry_Params
{
public:
	class UCommonUserWidget*                     ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortErrorWindow.DismissErrors
struct UFortErrorWindow_DismissErrors_Params
{
public:
	TArray<struct FFortErrorInfo>                ErrorInfos;                                        // 0x0(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortGameFeedbackBase.OnSelectionButtonChanged
struct UFortGameFeedbackBase_OnSelectionButtonChanged_Params
{
public:
	class UCommonButton*                         SelectedButton;                                    // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ButtonIndex;                                       // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EED[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortGameFeedbackBase.AddButtonWithFeedbackType
struct UFortGameFeedbackBase_AddButtonWithFeedbackType_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortUIGameFeedbackType           GameFeedbackType;                                  // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EEE[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortInfoWindow.GetListWidget
struct UFortInfoWindow_GetListWidget_Params
{
public:
	class UObject*                               Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                               ReturnValue;                                       // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortMtxOfferDetailsBase.UpdateMtxOffer
struct UFortMtxOfferDetailsBase_UpdateMtxOffer_Params
{
public:
	class UFortMtxStoreOfferBase*                MtxOfferWidget;                                    // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// Function FortniteUI.FortMtxOfferDetailsBase.GetTileImage
struct UFortMtxOfferDetailsBase_GetTileImage_Params
{
public:
	struct FSlateBrush                           ReturnValue;                                       // 0x0(0x90)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortMtxOfferDetailsBase.GetStoreOfferType
struct UFortMtxOfferDetailsBase_GetStoreOfferType_Params
{
public:
	enum class EFortMtxStoreOfferType            ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function FortniteUI.FortMtxOfferDetailsBase.GetSalePrice
struct UFortMtxOfferDetailsBase_GetSalePrice_Params
{
public:
	class FText                                  SalePrice;                                         // 0x0(0x18)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EF0[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortMtxOfferDetailsBase.GetOfferId
struct UFortMtxOfferDetailsBase_GetOfferId_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function FortniteUI.FortMtxOfferDetailsBase.GetNormalPrice
struct UFortMtxOfferDetailsBase_GetNormalPrice_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function FortniteUI.FortMtxOfferDetailsBase.GetName
struct UFortMtxOfferDetailsBase_GetName_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function FortniteUI.FortMtxOfferDetailsBase.GetGradient
struct UFortMtxOfferDetailsBase_GetGradient_Params
{
public:
	struct FFortMtxGradient                      ReturnValue;                                       // 0x0(0x20)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// Function FortniteUI.FortMtxOfferDetailsBase.GetDetailsImage
struct UFortMtxOfferDetailsBase_GetDetailsImage_Params
{
public:
	struct FSlateBrush                           ReturnValue;                                       // 0x0(0x90)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortMtxOfferDetailsBase.GetDetailsAttributes
struct UFortMtxOfferDetailsBase_GetDetailsAttributes_Params
{
public:
	TArray<struct FFortMtxDetailsAttribute>      ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function FortniteUI.FortMtxOfferDetailsBase.GetDescription
struct UFortMtxOfferDetailsBase_GetDescription_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortMtxOfferDetailsBase.GetBonusQuantity
struct UFortMtxOfferDetailsBase_GetBonusQuantity_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortMtxOfferDetailsBase.GetBaseQuantity
struct UFortMtxOfferDetailsBase_GetBaseQuantity_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortMtxOfferDetailsBase.GetBackground
struct UFortMtxOfferDetailsBase_GetBackground_Params
{
public:
	struct FLinearColor                          ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function FortniteUI.FortFrontendInventoryFilterFunctionLibrary.ToText
struct UFortFrontendInventoryFilterFunctionLibrary_ToText_Params
{
public:
	enum class EFortFrontendInventoryFilter      FrontendInventoryFilter;                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EF2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ReturnValue;                                       // 0x8(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortItemManagementScreen.SetFrontendInventoryFilter
struct UFortItemManagementScreen_SetFrontendInventoryFilter_Params
{
public:
	enum class EFortFrontendInventoryFilter      FrontendInventoryFilter;                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortItemManagementScreen.SetConsumeItemRequestInProgress
struct UFortItemManagementScreen_SetConsumeItemRequestInProgress_Params
{
public:
	bool                                         InProgress;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortItemManagementScreen.InspectItem
struct UFortItemManagementScreen_InspectItem_Params
{
public:
	class UFortItem*                             Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortItemManagementScreen.HasItemBeenSeen
struct UFortItemManagementScreen_HasItemBeenSeen_Params
{
public:
	class UFortAccountItem*                      AccountItem;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EF3[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x3 (0x3 - 0x0)
// Function FortniteUI.FortItemManagementScreen.HandleItemToDetailChanged
struct UFortItemManagementScreen_HandleItemToDetailChanged_Params
{
public:
	bool                                         bItemChanged;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAmmoChanged;                                      // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIngredientsChanged;                               // 0x2(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x3 (0x3 - 0x0)
// Function FortniteUI.FortItemManagementScreen.HandleItemToCompareWithChanged
struct UFortItemManagementScreen_HandleItemToCompareWithChanged_Params
{
public:
	bool                                         bItemChanged;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAmmoChanged;                                      // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIngredientsChanged;                               // 0x2(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortItemManagementScreen.HandleInspectItemBP
struct UFortItemManagementScreen_HandleInspectItemBP_Params
{
public:
	class UFortItem*                             Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortItemManagementScreen.HandleEquipItemBP
struct UFortItemManagementScreen_HandleEquipItemBP_Params
{
public:
	class UFortItem*                             Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortItemManagementScreen.HandleCraftItemBP
struct UFortItemManagementScreen_HandleCraftItemBP_Params
{
public:
	class UFortSchematicItem*                    SchematicItem;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortItemManagementScreen.HandleConsumeItemBP
struct UFortItemManagementScreen_HandleConsumeItemBP_Params
{
public:
	class UFortConsumableAccountItem*            ConsumableItem;                                    // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortItemManagementScreen.GetNumItemsToMulch
struct UFortItemManagementScreen_GetNumItemsToMulch_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortItemManagementScreen.GetItemToDetail
struct UFortItemManagementScreen_GetItemToDetail_Params
{
public:
	class UFortItem*                             ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortItemManagementScreen.GetItemToCompareDetailsWith
struct UFortItemManagementScreen_GetItemToCompareDetailsWith_Params
{
public:
	class UFortItem*                             ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortItemManagementScreen.GetItemsToMulchBP
struct UFortItemManagementScreen_GetItemsToMulchBP_Params
{
public:
	TArray<class UFortItem*>                     ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortItemManagementScreen.EquipItem
struct UFortItemManagementScreen_EquipItem_Params
{
public:
	class UFortItem*                             Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortItemManagementScreen.EnterMulchMode
struct UFortItemManagementScreen_EnterMulchMode_Params
{
public:
	class UFortItem*                             ItemToMulch;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortItemManagementScreen.EnterDetailsMode
struct UFortItemManagementScreen_EnterDetailsMode_Params
{
public:
	class UFortItem*                             ItemToDetail;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortItemManagementScreen.EnterComparisonMode
struct UFortItemManagementScreen_EnterComparisonMode_Params
{
public:
	class UFortItem*                             ItemToCompareDetailsWith;                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortItemManagementScreen.CraftItem
struct UFortItemManagementScreen_CraftItem_Params
{
public:
	class UFortSchematicItem*                    SchematicItem;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortItemManagementScreen.ConsumeItem
struct UFortItemManagementScreen_ConsumeItem_Params
{
public:
	class UFortConsumableAccountItem*            ConsumableItem;                                    // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function FortniteUI.FortItemManagementScreen.CanItemBeMulched
struct UFortItemManagementScreen_CanItemBeMulched_Params
{
public:
	class UFortItem*                             Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  OutRestrictionReason;                              // 0x8(0x18)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EF4[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x90 (0x90 - 0x0)
// Function FortniteUI.FortSquadManagementScreenBase.TryGetStaticSquadDataBP
struct UFortSquadManagementScreenBase_TryGetStaticSquadDataBP_Params
{
public:
	struct FHomebaseSquad                        OutSquadData;                                      // 0x0(0x88)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x88(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EFD[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortSquadManagementScreenBase.SetIdOfSquadToManageBP
struct UFortSquadManagementScreenBase_SetIdOfSquadToManageBP_Params
{
public:
	class FName                                  SquadId;                                           // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortSquadManagementScreenBase.NavigateToSquadSlot
struct UFortSquadManagementScreenBase_NavigateToSquadSlot_Params
{
public:
	int32                                        SquadSlotIndex;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortSquadManagementScreenBase.HandlePickerSelectionCommitted
struct UFortSquadManagementScreenBase_HandlePickerSelectionCommitted_Params
{
public:
	class UFortItem*                             CommittedItem;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortSquadManagementScreenBase.HandlePickerSelectionChanged
struct UFortSquadManagementScreenBase_HandlePickerSelectionChanged_Params
{
public:
	class UFortItem*                             SelectedItem;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortSquadManagementScreenBase.HandleOpenSquadSlot
struct UFortSquadManagementScreenBase_HandleOpenSquadSlot_Params
{
public:
	int32                                        SquadSlotIndex;                                    // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortSquadManagementScreenBase.HandleDifferentSquadSlotSelected
struct UFortSquadManagementScreenBase_HandleDifferentSquadSlotSelected_Params
{
public:
	int32                                        SquadSlotIndex;                                    // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortSquadManagementScreenBase.GetIdOfSquadToManageBP
struct UFortSquadManagementScreenBase_GetIdOfSquadToManageBP_Params
{
public:
	class FName                                  ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// Function FortniteUI.FortSquadSelectorButton.TryGetStaticSquadDataBP
struct UFortSquadSelectorButton_TryGetStaticSquadDataBP_Params
{
public:
	struct FHomebaseSquad                        OutSquadData;                                      // 0x0(0x88)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x88(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F00[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortSquadSelectorButton.SetIdOfSquadToManageBP
struct UFortSquadSelectorButton_SetIdOfSquadToManageBP_Params
{
public:
	class FName                                  SquadId;                                           // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortSquadSelectorButton.GetIdOfSquadToManageBP
struct UFortSquadSelectorButton_GetIdOfSquadToManageBP_Params
{
public:
	class FName                                  ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortSquadTypeLandingPageBase.HandleManageInputAction
struct UFortSquadTypeLandingPageBase_HandleManageInputAction_Params
{
public:
	bool                                         bPassThrough;                                      // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortSquadTypeLandingPageBase.HandleBackInputAction
struct UFortSquadTypeLandingPageBase_HandleBackInputAction_Params
{
public:
	bool                                         bPassThrough;                                      // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortSquadTypeLandingPageBase.CreateAndAddSquadButton
struct UFortSquadTypeLandingPageBase_CreateAndAddSquadButton_Params
{
public:
	class FName                                  SquadId;                                           // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortSquadSelectorButton*              ReturnValue;                                       // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function FortniteUI.FortActorCanvas.OnHUDElementVisibilityChanged
struct UFortActorCanvas_OnHUDElementVisibilityChanged_Params
{
public:
	struct FGameplayTagContainer                 HiddenHUDElementTags;                              // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortActorCanvas.AddActorIndicator
struct UFortActorCanvas_AddActorIndicator_Params
{
public:
	class UFortActorIndicatorWidget*             Indicator;                                         // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortActorCanvasSlot*                  ReturnValue;                                       // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortActorCanvasSlot.SetVerticalAlignment
struct UFortActorCanvasSlot_SetVerticalAlignment_Params
{
public:
	enum class EVerticalAlignment                InVerticalAlignment;                               // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortActorCanvasSlot.SetHorizontalAlignment
struct UFortActorCanvasSlot_SetHorizontalAlignment_Params
{
public:
	enum class EHorizontalAlignment              InHorizontalAlignment;                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortActorCanvasSlot.SetCanAutoRemove
struct UFortActorCanvasSlot_SetCanAutoRemove_Params
{
public:
	bool                                         bAllowAutoRemove;                                  // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortAlterationsWidget_NUI.SetState
struct UFortAlterationsWidget_NUI_SetState_Params
{
public:
	enum class EFortAlterationWidgetState        InState;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortAlterationsWidget_NUI.SetItemToCompareWith
struct UFortAlterationsWidget_NUI_SetItemToCompareWith_Params
{
public:
	class UFortItem*                             InItem;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortAlterationsWidget_NUI.SetItem
struct UFortAlterationsWidget_NUI_SetItem_Params
{
public:
	class UFortItem*                             InItem;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function FortniteUI.FortAlterationsWidget_NUI.OnGenerateAlteration
struct UFortAlterationsWidget_NUI_OnGenerateAlteration_Params
{
public:
	struct FFortUIAlteration                     AlterationInfo;                                    // 0x0(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortAlterationWidget_NUI.IsAlterationUnlocked
struct UFortAlterationWidget_NUI_IsAlterationUnlocked_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortAlterationWidget_NUI.IsAlterationHighlighted
struct UFortAlterationWidget_NUI_IsAlterationHighlighted_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortAlterationWidget_NUI.GetRequiredLevel
struct UFortAlterationWidget_NUI_GetRequiredLevel_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortAlterationWidget_NUI.GetAlterationDefintion
struct UFortAlterationWidget_NUI_GetAlterationDefintion_Params
{
public:
	class UFortAlterationItemDefinition*         ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortAnnouncementWidget.UpdateWidgetData
struct UFortAnnouncementWidget_UpdateWidgetData_Params
{
public:
	class AFortClientAnnouncement*               Announcement;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortAnnouncementWidget.BindUpdateEvents
struct UFortAnnouncementWidget_BindUpdateEvents_Params
{
public:
	class AFortClientAnnouncement*               Announcement;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortAnnouncementWidget.AnnouncementStopped
struct UFortAnnouncementWidget_AnnouncementStopped_Params
{
public:
	class AFortClientAnnouncement*               Announcement;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function FortniteUI.FortAsyncAction_SetUIState.SetUIState
struct UFortAsyncAction_SetUIState_SetUIState_Params
{
public:
	class UObject*                               InWorldContextObject;                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortUIState                      DesiredState;                                      // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F0B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortAsyncAction_SetUIState*           ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xF8 (0xF8 - 0x0)
// Function FortniteUI.FortAsyncAction_ShowAdvancedLatentConfirmation_NUI.ShowAdvancedLatentActionConfirmation
struct UFortAsyncAction_ShowAdvancedLatentConfirmation_NUI_ShowAdvancedLatentActionConfirmation_Params
{
public:
	class UObject*                               InWorldContextObject;                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Icon;                                              // 0x8(0x90)(Parm, NativeAccessSpecifierPublic)
	class FText                                  Title;                                             // 0x98(0x18)(Parm, NativeAccessSpecifierPublic)
	class FText                                  MESSAGE;                                           // 0xB0(0x18)(Parm, NativeAccessSpecifierPublic)
	TArray<struct FConfirmationDialogAction>     ConfirmButtonInputActions;                         // 0xC8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	class FName                                  DeclineButtonInputAction;                          // 0xD8(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                               AdditionalContent;                                 // 0xE0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                               LeftAdditionalContent;                             // 0xE8(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortAsyncAction_ShowAdvancedLatentConfirmation_NUI* ReturnValue;                                       // 0xF0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// Function FortniteUI.FortAsyncAction_ShowConfirmation.ShowConfirmationDialog
struct UFortAsyncAction_ShowConfirmation_ShowConfirmationDialog_Params
{
public:
	class UObject*                               InWorldContextObject;                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  Title;                                             // 0x8(0x18)(Parm, NativeAccessSpecifierPublic)
	class FText                                  MESSAGE;                                           // 0x20(0x18)(Parm, NativeAccessSpecifierPublic)
	class FText                                  ConfirmButtonText;                                 // 0x38(0x18)(Parm, NativeAccessSpecifierPublic)
	class FText                                  DeclineButtonText;                                 // 0x50(0x18)(Parm, NativeAccessSpecifierPublic)
	class UFortUserWidget*                       InAdditionalContent;                               // 0x68(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InDisplayTime;                                     // 0x70(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F0D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortAsyncAction_ShowConfirmation*     ReturnValue;                                       // 0x78(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xE8 (0xE8 - 0x0)
// Function FortniteUI.FortAsyncAction_ShowConfirmation_NUI.ShowSimpleConfirmationDialog_NUI
struct UFortAsyncAction_ShowConfirmation_NUI_ShowSimpleConfirmationDialog_NUI_Params
{
public:
	class UObject*                               InWorldContextObject;                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Icon;                                              // 0x8(0x90)(Parm, NativeAccessSpecifierPublic)
	class FText                                  Title;                                             // 0x98(0x18)(Parm, NativeAccessSpecifierPublic)
	class FText                                  MESSAGE;                                           // 0xB0(0x18)(Parm, NativeAccessSpecifierPublic)
	bool                                         bShowConfirm;                                      // 0xC8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowDecline;                                      // 0xC9(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F0E[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               AdditionalContent;                                 // 0xD0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                               LeftAdditionalContent;                             // 0xD8(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortAsyncAction_ShowConfirmation_NUI* ReturnValue;                                       // 0xE0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xF0 (0xF0 - 0x0)
// Function FortniteUI.FortAsyncAction_ShowConfirmation_NUI.ShowSimpleConfirmationDialog_CustomInput
struct UFortAsyncAction_ShowConfirmation_NUI_ShowSimpleConfirmationDialog_CustomInput_Params
{
public:
	class UObject*                               InWorldContextObject;                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Icon;                                              // 0x8(0x90)(Parm, NativeAccessSpecifierPublic)
	class FText                                  Title;                                             // 0x98(0x18)(Parm, NativeAccessSpecifierPublic)
	class FText                                  MESSAGE;                                           // 0xB0(0x18)(Parm, NativeAccessSpecifierPublic)
	class FName                                  ConfirmAction;                                     // 0xC8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  DeclineAction;                                     // 0xD0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                               AdditionalContent;                                 // 0xD8(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                               LeftAdditionalContent;                             // 0xE0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortAsyncAction_ShowConfirmation_NUI* ReturnValue;                                       // 0xE8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xF8 (0xF8 - 0x0)
// Function FortniteUI.FortAsyncAction_ShowConfirmation_NUI.ShowConfirmationDialog_NUI
struct UFortAsyncAction_ShowConfirmation_NUI_ShowConfirmationDialog_NUI_Params
{
public:
	class UObject*                               InWorldContextObject;                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Icon;                                              // 0x8(0x90)(Parm, NativeAccessSpecifierPublic)
	class FText                                  Title;                                             // 0x98(0x18)(Parm, NativeAccessSpecifierPublic)
	class FText                                  MESSAGE;                                           // 0xB0(0x18)(Parm, NativeAccessSpecifierPublic)
	TArray<struct FConfirmationDialogAction>     ConfirmButtonInputActions;                         // 0xC8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	class FName                                  DeclineButtonInputAction;                          // 0xD8(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                               AdditionalContent;                                 // 0xE0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                               LeftAdditionalContent;                             // 0xE8(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortAsyncAction_ShowConfirmation_NUI* ReturnValue;                                       // 0xF0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1B0 (0x1B0 - 0x0)
// Function FortniteUI.FortAsyncAction_ShowPartyDialog.ShowPartyMemberManageDialog
struct UFortAsyncAction_ShowPartyDialog_ShowPartyMemberManageDialog_Params
{
public:
	class UObject*                               InWorldContextObject;                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortTeamMemberInfo                   TeamMemberInfo;                                    // 0x8(0x190)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class ULocalPlayer*                          LocalPlayer;                                       // 0x198(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UUserWidget*                           LeftAdditionalContent;                             // 0x1A0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortAsyncAction_ShowPartyDialog*      ReturnValue;                                       // 0x1A8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1B0 (0x1B0 - 0x0)
// Function FortniteUI.FortAsyncAction_ShowPartyDialog.ShowPartyLeaderManageDialog
struct UFortAsyncAction_ShowPartyDialog_ShowPartyLeaderManageDialog_Params
{
public:
	class UObject*                               InWorldContextObject;                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortTeamMemberInfo                   TeamMemberInfo;                                    // 0x8(0x190)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class ULocalPlayer*                          LocalPlayer;                                       // 0x198(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UUserWidget*                           LeftAdditionalContent;                             // 0x1A0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortAsyncAction_ShowPartyDialog*      ReturnValue;                                       // 0x1A8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortAthenaMatchmakingWidget.SetPlayButtonState
struct UFortAthenaMatchmakingWidget_SetPlayButtonState_Params
{
public:
	bool                                         bCanMatchmake;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortAthenaMatchmakingWidget.SetCancelButtonState
struct UFortAthenaMatchmakingWidget_SetCancelButtonState_Params
{
public:
	bool                                         bIsMatchmaking;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortAthenaMatchmakingWidget.OnPlaylistRotatorChanged
struct UFortAthenaMatchmakingWidget_OnPlaylistRotatorChanged_Params
{
public:
	int32                                        PlaylistIndex;                                     // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortAthenaMatchmakingWidget.OnChangeTeamFillChanged
struct UFortAthenaMatchmakingWidget_OnChangeTeamFillChanged_Params
{
public:
	bool                                         bFill;                                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// Function FortniteUI.FortAthenaNewsWidget.GetText
struct UFortAthenaNewsWidget_GetText_Params
{
public:
	class FText                                  Title;                                             // 0x0(0x18)(Parm, OutParm, NativeAccessSpecifierPublic)
	class FText                                  PlatformBody;                                      // 0x18(0x18)(Parm, OutParm, NativeAccessSpecifierPublic)
	class FText                                  RegionBody;                                        // 0x30(0x18)(Parm, OutParm, NativeAccessSpecifierPublic)
	class FText                                  Body;                                              // 0x48(0x18)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x60(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F12[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function FortniteUI.FortUserWidget.AddGrantCheatMenu
struct UFortUserWidget_AddGrantCheatMenu_Params
{
public:
	class FString                                TemplateId;                                        // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                InstanceId;                                        // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortBaseCanvasEntity.Outro
struct UFortBaseCanvasEntity_Outro_Params
{
public:
	enum class EFortAnimSpeed                    Speed;                                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortBaseCanvasEntity.Intro
struct UFortBaseCanvasEntity_Intro_Params
{
public:
	enum class EFortAnimSpeed                    Speed;                                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortBaseCanvasNode.SelectNode
struct UFortBaseCanvasNode_SelectNode_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortBaseCanvasNode.SelectedChanged
struct UFortBaseCanvasNode_SelectedChanged_Params
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// DelegateFunction FortniteUI.FortBaseCanvasNode.OnNodeStateChanged__DelegateSignature
struct UFortBaseCanvasNode_OnNodeStateChanged__DelegateSignature_Params
{
public:
	class UFortBaseCanvasNode*                   Node;                                              // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function FortniteUI.FortBaseCanvasNode.IsPurchaseable
struct UFortBaseCanvasNode_IsPurchaseable_Params
{
public:
	TArray<enum class EFortHomebaseNodePurchaseRestrictionReason> OutRestrictionReasons;                             // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F1F[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortBaseCanvasNode.IsOwned
struct UFortBaseCanvasNode_IsOwned_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortBaseCanvasNode.IsLocked
struct UFortBaseCanvasNode_IsLocked_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function FortniteUI.FortBaseCanvasNode.GetPurchaseRestrictionReasonText
struct UFortBaseCanvasNode_GetPurchaseRestrictionReasonText_Params
{
public:
	enum class EFortHomebaseNodePurchaseRestrictionReason Reason;                                            // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F20[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ReturnValue;                                       // 0x8(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortBaseCanvasNode.GetPurchasePercent
struct UFortBaseCanvasNode_GetPurchasePercent_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortBaseCanvasNode.GetPreviewMediaSource
struct UFortBaseCanvasNode_GetPreviewMediaSource_Params
{
public:
	class UMediaSource*                          ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x6D8 (0x6D8 - 0x0)
// Function FortniteUI.FortBaseCanvasNode.GetNodeStyleDataCopy
struct UFortBaseCanvasNode_GetNodeStyleDataCopy_Params
{
public:
	struct FFortNodeStyleData                    Style;                                             // 0x0(0x6D0)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x6D0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F21[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortBaseCanvasNode.GetNodeID
struct UFortBaseCanvasNode_GetNodeID_Params
{
public:
	class FName                                  ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC8 (0xC8 - 0x0)
// Function FortniteUI.FortBaseCanvasNode.GetNodeDataCopy
struct UFortBaseCanvasNode_GetNodeDataCopy_Params
{
public:
	struct FHomebaseNode                         Node;                                              // 0x0(0xC0)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xC0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F22[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortBaseCanvasNode.GetCosts
struct UFortBaseCanvasNode_GetCosts_Params
{
public:
	TArray<struct FFortItemInstanceQuantityPair> ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortBaseCanvasNode.DrillDownToNodePage
struct UFortBaseCanvasNode_DrillDownToNodePage_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortBaseCanvasNode.DoesDrillDownToCurrentNodePage
struct UFortBaseCanvasNode_DoesDrillDownToCurrentNodePage_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortNodeCanvas.PanToNode
struct UFortNodeCanvas_PanToNode_Params
{
public:
	class FName                                  NodeID;                                            // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortAnimSpeed                    PanSpeed;                                          // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F25[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortBangWrapper.SetBangVisibility
struct UFortBangWrapper_SetBangVisibility_Params
{
public:
	bool                                         InVisible;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortGlobalUIContext.UnregisterToReceiveNotifications
struct UFortGlobalUIContext_UnregisterToReceiveNotifications_Params
{
public:
	enum class EFortNotificationQueueType        NotificationQueueType;                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortGlobalUIContext.UnregisterScriptedAction
struct UFortGlobalUIContext_UnregisterScriptedAction_Params
{
public:
	TSubclassOf<class AFortScriptedAction>       ScriptedAction;                                    // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function FortniteUI.FortGlobalUIContext.UnbindToFeatureState
struct UFortGlobalUIContext_UnbindToFeatureState_Params
{
public:
	enum class EFortUIFeature                    Feature;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F2C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           Delegate;                                          // 0x8(0x10)(Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortGlobalUIContext.TriggerUIFeedbackEvent
struct UFortGlobalUIContext_TriggerUIFeedbackEvent_Params
{
public:
	class FName                                  EventName;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function FortniteUI.FortGlobalUIContext.ShowWebURL
struct UFortGlobalUIContext_ShowWebURL_Params
{
public:
	class FString                                URL;                                               // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortUrlType                      URLType;                                           // 0x10(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x11(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F2D[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function FortniteUI.FortGlobalUIContext.ShowConsoleAccountPicker
struct UFortGlobalUIContext_ShowConsoleAccountPicker_Params
{
public:
	int32                                        ControllerIndex;                                   // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F2F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           CompletionDelegate;                                // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortGlobalUIContext.ShowBang
struct UFortGlobalUIContext_ShowBang_Params
{
public:
	enum class EFortBangType                     Type;                                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortGlobalUIContext.ShouldShowRateWidget
struct UFortGlobalUIContext_ShouldShowRateWidget_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortGlobalUIContext.ShouldCloseMenuOnEscape
struct UFortGlobalUIContext_ShouldCloseMenuOnEscape_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortGlobalUIContext.SetSubGame
struct UFortGlobalUIContext_SetSubGame_Params
{
public:
	enum class ESubGame                          SubGame;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function FortniteUI.FortGlobalUIContext.SetRatingWidgetFeedbackTitle
struct UFortGlobalUIContext_SetRatingWidgetFeedbackTitle_Params
{
public:
	class FText                                  Title;                                             // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortGlobalUIContext.SetInputMode
struct UFortGlobalUIContext_SetInputMode_Params
{
public:
	enum class EFortInputMode                    InMode;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortGlobalUIContext.SetCurrentInputPresetName
struct UFortGlobalUIContext_SetCurrentInputPresetName_Params
{
public:
	class FString                                InputPresetName;                                   // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortGlobalUIContext.SetBangFromCount
struct UFortGlobalUIContext_SetBangFromCount_Params
{
public:
	enum class EFortBangType                     Type;                                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F36[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Count;                                             // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function FortniteUI.FortGlobalUIContext.SendUINavigationAnalytic
struct UFortGlobalUIContext_SendUINavigationAnalytic_Params
{
public:
	class FString                                Destination;                                       // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUserInitiated;                                    // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F37[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x60 - 0x0)
// Function FortniteUI.FortGlobalUIContext.SendExperienceRatingAnalytic
struct UFortGlobalUIContext_SendExperienceRatingAnalytic_Params
{
public:
	class FString                                RatingType;                                        // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FeedbackSentBy;                                    // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  RatingQuestion;                                    // 0x20(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                        StarCount;                                         // 0x38(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F3B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                GameSessionID;                                     // 0x40(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Comment;                                           // 0x50(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x180 (0x180 - 0x0)
// Function FortniteUI.FortGlobalUIContext.RemoveNotification
struct UFortGlobalUIContext_RemoveNotification_Params
{
public:
	enum class EFortNotificationQueueType        NotificationQueueType;                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F3C[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortDialogDescription                NotificationDescription;                           // 0x10(0x170)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function FortniteUI.FortGlobalUIContext.RegisterToReceiveNotifications
struct UFortGlobalUIContext_RegisterToReceiveNotifications_Params
{
public:
	enum class EFortNotificationQueueType        NotificationQueueType;                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F3D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           InOnNotificationAvailable;                         // 0x8(0x10)(Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortGlobalUIContext.RegisterScriptedActions
struct UFortGlobalUIContext_RegisterScriptedActions_Params
{
public:
	TArray<TSubclassOf<class AFortScriptedAction>> ScriptedActions;                                   // 0x0(0x10)(Parm, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortGlobalUIContext.RegisterScriptedAction
struct UFortGlobalUIContext_RegisterScriptedAction_Params
{
public:
	TSubclassOf<class AFortScriptedAction>       ScriptedAction;                                    // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x180 (0x180 - 0x0)
// Function FortniteUI.FortGlobalUIContext.ProcessNotificationResult
struct UFortGlobalUIContext_ProcessNotificationResult_Params
{
public:
	enum class EFortDialogResult                 InResult;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F3E[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortDialogDescription                NotificationDescription;                           // 0x10(0x170)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x1A0 (0x1A0 - 0x0)
// Function FortniteUI.FortGlobalUIContext.ProcessConfirmationResult
struct UFortGlobalUIContext_ProcessConfirmationResult_Params
{
public:
	enum class EFortDialogResult                 InResult;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F43[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  InResultName;                                      // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortDialogDescription_NUI            ConfirmationDescription;                           // 0x10(0x180)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bWaitingForLatentAction;                           // 0x190(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F45[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortDialogExternalLatentActionHandle WaitingDialogHandle;                               // 0x194(0x4)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F46[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x98 (0x98 - 0x0)
// DelegateFunction FortniteUI.FortGlobalUIContext.OnQueryFortBackendVersionDelegate__DelegateSignature
struct UFortGlobalUIContext_OnQueryFortBackendVersionDelegate__DelegateSignature_Params
{
public:
	struct FFortBackendVersion                   FortBackendVersion;                                // 0x0(0x98)(Parm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// DelegateFunction FortniteUI.FortGlobalUIContext.OnLocalPlayerControllerConnectionChangedDelegate__DelegateSignature
struct UFortGlobalUIContext_OnLocalPlayerControllerConnectionChangedDelegate__DelegateSignature_Params
{
public:
	bool                                         bConnected;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// DelegateFunction FortniteUI.FortGlobalUIContext.OnLoadingScreenVisibilityChangedDelegate__DelegateSignature
struct UFortGlobalUIContext_OnLoadingScreenVisibilityChangedDelegate__DelegateSignature_Params
{
public:
	bool                                         IsVisible;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortGlobalUIContext.IsUsingGamepad
struct UFortGlobalUIContext_IsUsingGamepad_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortGlobalUIContext.IsUIVisible
struct UFortGlobalUIContext_IsUIVisible_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortGlobalUIContext.IsSquadQueueEnabled
struct UFortGlobalUIContext_IsSquadQueueEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortGlobalUIContext.IsPendingLogout
struct UFortGlobalUIContext_IsPendingLogout_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortGlobalUIContext.IsMobileApp
struct UFortGlobalUIContext_IsMobileApp_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortGlobalUIContext.IsInZone
struct UFortGlobalUIContext_IsInZone_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortGlobalUIContext.IsInOutpostZone
struct UFortGlobalUIContext_IsInOutpostZone_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortGlobalUIContext.IsHUDVisible
struct UFortGlobalUIContext_IsHUDVisible_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortGlobalUIContext.IsGamepadAttached
struct UFortGlobalUIContext_IsGamepadAttached_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortGlobalUIContext.IsDuoQueueEnabled
struct UFortGlobalUIContext_IsDuoQueueEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortGlobalUIContext.IsDesktopPlatform
struct UFortGlobalUIContext_IsDesktopPlatform_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortGlobalUIContext.IsBluGloEnabled
struct UFortGlobalUIContext_IsBluGloEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortGlobalUIContext.IsAllContentInstalled
struct UFortGlobalUIContext_IsAllContentInstalled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortGlobalUIContext.InputActionHoldStopped
struct UFortGlobalUIContext_InputActionHoldStopped_Params
{
public:
	class FName                                  InputActionName;                                   // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCompletedSuccessfully;                            // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F47[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortGlobalUIContext.InputActionHoldStarted
struct UFortGlobalUIContext_InputActionHoldStarted_Params
{
public:
	class FName                                  InputActionName;                                   // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HoldDuration;                                      // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F48[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortGlobalUIContext.HideBang
struct UFortGlobalUIContext_HideBang_Params
{
public:
	enum class EFortBangType                     Type;                                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function FortniteUI.FortGlobalUIContext.HasCompletedOnboardingObjective
struct UFortGlobalUIContext_HasCompletedOnboardingObjective_Params
{
public:
	struct FDataTableRowHandle                   Objective;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F49[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortGlobalUIContext.HasAccesstoMultipleSubGames
struct UFortGlobalUIContext_HasAccesstoMultipleSubGames_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortGlobalUIContext.GetWatermark
struct UFortGlobalUIContext_GetWatermark_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortGlobalUIContext.GetSubGame
struct UFortGlobalUIContext_GetSubGame_Params
{
public:
	enum class ESubGame                          ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortGlobalUIContext.GetSessionId
struct UFortGlobalUIContext_GetSessionId_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortGlobalUIContext.GetScoreReport
struct UFortGlobalUIContext_GetScoreReport_Params
{
public:
	class UFortUIScoreReport*                    ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortGlobalUIContext.GetQuestManager
struct UFortGlobalUIContext_GetQuestManager_Params
{
public:
	class UFortQuestManager*                     ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function FortniteUI.FortGlobalUIContext.GetPlatformDisplayName
struct UFortGlobalUIContext_GetPlatformDisplayName_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x190 (0x190 - 0x0)
// Function FortniteUI.FortGlobalUIContext.GetNextNotification
struct UFortGlobalUIContext_GetNextNotification_Params
{
public:
	enum class EFortNotificationQueueType        NotificationQueueType;                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F4A[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortDialogDescription                NotificationDescription;                           // 0x10(0x170)(Parm, OutParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x180(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F4B[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function FortniteUI.FortGlobalUIContext.GetMessageManager
struct UFortGlobalUIContext_GetMessageManager_Params
{
public:
	class FName                                  ManagerName;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCreatedNew;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F4C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortUIMessageManager*                 ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortGlobalUIContext.GetLastMissionRewardReport
struct UFortGlobalUIContext_GetLastMissionRewardReport_Params
{
public:
	class UFortUIRewardReport*                   ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function FortniteUI.FortGlobalUIContext.GetLastMissionInfo
struct UFortGlobalUIContext_GetLastMissionInfo_Params
{
public:
	struct FFortLastMissionInfo                  LastMissionInfo;                                   // 0x0(0x48)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function FortniteUI.FortGlobalUIContext.GetLastGameSummaryInfo
struct UFortGlobalUIContext_GetLastGameSummaryInfo_Params
{
public:
	struct FGameSummaryInfo                      ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function FortniteUI.FortGlobalUIContext.GetKeyTextForAction
struct UFortGlobalUIContext_GetKeyTextForAction_Params
{
public:
	class FName                                  Action;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  ButtonActionType;                                  // 0x8(0x18)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         bUseAbbreviatedText;                               // 0x20(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F4D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ReturnValue;                                       // 0x28(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function FortniteUI.FortGlobalUIContext.GetKeyForAction
struct UFortGlobalUIContext_GetKeyForAction_Params
{
public:
	class FName                                  Action;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                  ReturnValue;                                       // 0x8(0x18)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortGlobalUIContext.GetInputPriority
struct UFortGlobalUIContext_GetInputPriority_Params
{
public:
	enum class EInputPriority                    Priority;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F4E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function FortniteUI.FortGlobalUIContext.GetInputDetailsForAction
struct UFortGlobalUIContext_GetInputDetailsForAction_Params
{
public:
	class FName                                  Action;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortInputActionDetails               InputActionDetails;                                // 0x8(0x20)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x28(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F4F[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function FortniteUI.FortGlobalUIContext.GetFeedbackTitle
struct UFortGlobalUIContext_GetFeedbackTitle_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function FortniteUI.FortGlobalUIContext.GetFeatureState
struct UFortGlobalUIContext_GetFeatureState_Params
{
public:
	enum class EFortUIFeature                    Feature;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortUIFeatureState               ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function FortniteUI.FortGlobalUIContext.GetDisplayXpValue
struct UFortGlobalUIContext_GetDisplayXpValue_Params
{
public:
	int32                                        StartingRealXp;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        EndingRealXp;                                      // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortGlobalUIContext.GetCurrentInputPresetName
struct UFortGlobalUIContext_GetCurrentInputPresetName_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function FortniteUI.FortGlobalUIContext.GetConningXpModifierMessage
struct UFortGlobalUIContext_GetConningXpModifierMessage_Params
{
public:
	int32                                        TotalSkillPoints;                                  // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ContentDifficulty;                                 // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  ReturnValue;                                       // 0x8(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function FortniteUI.FortGlobalUIContext.GetConningDifficultyXpModifier
struct UFortGlobalUIContext_GetConningDifficultyXpModifier_Params
{
public:
	int32                                        TotalSkillPoints;                                  // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ContentDifficulty;                                 // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortGlobalUIContext.GetCollectionBookManager
struct UFortGlobalUIContext_GetCollectionBookManager_Params
{
public:
	class UFortCollectionBookManager*            ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortGlobalUIContext.GetBackendName
struct UFortGlobalUIContext_GetBackendName_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortGlobalUIContext.GetAthenaCodeOfConductURL
struct UFortGlobalUIContext_GetAthenaCodeOfConductURL_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function FortniteUI.FortGlobalUIContext.GetAllPlayerInputPresetNamesForSubGame
struct UFortGlobalUIContext_GetAllPlayerInputPresetNamesForSubGame_Params
{
public:
	enum class ESubGame                          SubGame;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F50[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        InputPresetNames;                                  // 0x8(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FText>                          InputPresetFriendlyNames;                          // 0x18(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function FortniteUI.FortGlobalUIContext.GetAllPlayerInputPresetNames
struct UFortGlobalUIContext_GetAllPlayerInputPresetNames_Params
{
public:
	TArray<class FString>                        InputPresetNames;                                  // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FText>                          InputPresetFriendlyNames;                          // 0x10(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function FortniteUI.FortGlobalUIContext.ForceSetFeatureState
struct UFortGlobalUIContext_ForceSetFeatureState_Params
{
public:
	enum class EFortUIFeature                    Feature;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortUIFeatureState               ForcedState;                                       // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortGlobalUIContext.DisplayStateContent
struct UFortGlobalUIContext_DisplayStateContent_Params
{
public:
	bool                                         bDisplay;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortGlobalUIContext.CopyToClipboard
struct UFortGlobalUIContext_CopyToClipboard_Params
{
public:
	class FString                                ClipboardText;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortGlobalUIContext.ContentInstallationProgress
struct UFortGlobalUIContext_ContentInstallationProgress_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortGlobalUIContext.ClearSelectionGroup
struct UFortGlobalUIContext_ClearSelectionGroup_Params
{
public:
	class FName                                  SelectionGroup;                                    // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function FortniteUI.FortGlobalUIContext.CheckFlag
struct UFortGlobalUIContext_CheckFlag_Params
{
public:
	class FString                                FlagName;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFlagStatus                       OutStatus;                                         // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F53[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function FortniteUI.FortGlobalUIContext.CanPlay
struct UFortGlobalUIContext_CanPlay_Params
{
public:
	enum class ESubGame                          SubGame;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F54[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  DenialReason;                                      // 0x8(0x18)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F55[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function FortniteUI.FortGlobalUIContext.CanMatchmake
struct UFortGlobalUIContext_CanMatchmake_Params
{
public:
	enum class ESubGame                          SubGame;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F56[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  DenialReason;                                      // 0x8(0x18)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F57[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function FortniteUI.FortGlobalUIContext.BindToFeatureStateAndInitialize
struct UFortGlobalUIContext_BindToFeatureStateAndInitialize_Params
{
public:
	enum class EFortUIFeature                    Feature;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F58[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           Delegate;                                          // 0x8(0x10)(Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortGlobalUIContext.AutoSelectSubGame
struct UFortGlobalUIContext_AutoSelectSubGame_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortGlobalUIContext.AllowQuit
struct UFortGlobalUIContext_AllowQuit_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortGlobalUIContext.AllowLogout
struct UFortGlobalUIContext_AllowLogout_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function FortniteUI.FortAthenaTabsScreenBase.HandleFeatureStateChanged
struct UFortAthenaTabsScreenBase_HandleFeatureStateChanged_Params
{
public:
	enum class EFortUIFeature                    ChangedFeature;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortUIFeatureState               NewState;                                          // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortAthenaTabsScreenBase.HandleFeatureNavigateRequest
struct UFortAthenaTabsScreenBase_HandleFeatureNavigateRequest_Params
{
public:
	enum class EFortUIFeature                    Feature;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortAttributeListItem_NUI.ValueChanged
struct UFortAttributeListItem_NUI_ValueChanged_Params
{
public:
	float                                        Delta;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// Function FortniteUI.FortAttributeListItem_NUI.SetPreviewAttribute
struct UFortAttributeListItem_NUI_SetPreviewAttribute_Params
{
public:
	struct FFortDisplayAttribute                 InPreviewAttribute;                                // 0x0(0x70)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// Function FortniteUI.FortAttributeListItem_NUI.SetDisplayAttribute
struct UFortAttributeListItem_NUI_SetDisplayAttribute_Params
{
public:
	struct FFortDisplayAttribute                 InDisplayAttribute;                                // 0x0(0x70)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// Function FortniteUI.FortAttributeListItem_NUI.GetDisplayPreviewCopy
struct UFortAttributeListItem_NUI_GetDisplayPreviewCopy_Params
{
public:
	struct FFortDisplayAttribute                 OutPreviewAttribute;                               // 0x0(0x70)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// Function FortniteUI.FortAttributeListItem_NUI.GetDisplayAttributeCopy
struct UFortAttributeListItem_NUI_GetDisplayAttributeCopy_Params
{
public:
	struct FFortDisplayAttribute                 OutDisplayAttribute;                               // 0x0(0x70)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// Function FortniteUI.FortAttributeListItem_NUI.GetCurrentAttributeCopy
struct UFortAttributeListItem_NUI_GetCurrentAttributeCopy_Params
{
public:
	struct FFortDisplayAttribute                 OutDisplayAttribute;                               // 0x0(0x70)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortAttributeList_NUI.SetPreviewData
struct UFortAttributeList_NUI_SetPreviewData_Params
{
public:
	TArray<struct FFortDisplayAttribute>         Data;                                              // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortAttributeList_NUI.SetData
struct UFortAttributeList_NUI_SetData_Params
{
public:
	TArray<struct FFortDisplayAttribute>         Data;                                              // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortAttributeList_NUI.OnRemoveShownAttributeListItem
struct UFortAttributeList_NUI_OnRemoveShownAttributeListItem_Params
{
public:
	class UFortAttributeListItem_NUI*            AttributeListItemWidget;                           // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AtIndex;                                           // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F64[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortAttributeList_NUI.OnAddShownAttributeListItem
struct UFortAttributeList_NUI_OnAddShownAttributeListItem_Params
{
public:
	class UFortAttributeListItem_NUI*            AttributeListItemWidget;                           // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortAttributeListItem.ValueChanged
struct UFortAttributeListItem_ValueChanged_Params
{
public:
	float                                        Delta;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// Function FortniteUI.FortAttributeListItem.SetPreviewAttribute
struct UFortAttributeListItem_SetPreviewAttribute_Params
{
public:
	struct FFortDisplayAttribute                 InPreviewAttribute;                                // 0x0(0x70)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0xE8 (0xE8 - 0x0)
// Function FortniteUI.FortAttributeListItem.SetDisplayAttribute
struct UFortAttributeListItem_SetDisplayAttribute_Params
{
public:
	struct FFortDisplayAttribute                 InDisplayAttribute;                                // 0x0(0x70)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FFortDisplayAttribute                 DeltaAttribute;                                    // 0x70(0x70)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xE0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F67[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0x70 - 0x0)
// Function FortniteUI.FortAttributeListItem.GetDisplayPreviewCopy
struct UFortAttributeListItem_GetDisplayPreviewCopy_Params
{
public:
	struct FFortDisplayAttribute                 OutPreviewAttribute;                               // 0x0(0x70)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// Function FortniteUI.FortAttributeListItem.GetDisplayAttributeCopy
struct UFortAttributeListItem_GetDisplayAttributeCopy_Params
{
public:
	struct FFortDisplayAttribute                 OutDisplayAttribute;                               // 0x0(0x70)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// Function FortniteUI.FortAttributeListItem.GetCurrentAttributeCopy
struct UFortAttributeListItem_GetCurrentAttributeCopy_Params
{
public:
	struct FFortDisplayAttribute                 OutDisplayAttribute;                               // 0x0(0x70)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortBangWrapper_NUI.SetTutorialNameID
struct UFortBangWrapper_NUI_SetTutorialNameID_Params
{
public:
	class FName                                  InTutorialNameID;                                  // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortBangWrapper_NUI.SetBangType
struct UFortBangWrapper_NUI_SetBangType_Params
{
public:
	enum class EFortBangType                     NewBangType;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortBangWrapper_NUI.SetBangStateBP
struct UFortBangWrapper_NUI_SetBangStateBP_Params
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F69[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Count;                                             // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortBangWrapper_NUI.OnBangStateChanged
struct UFortBangWrapper_NUI_OnBangStateChanged_Params
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F6A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Count;                                             // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function FortniteUI.FortBannerSelectorBase.HasIllegalChars
struct UFortBannerSelectorBase_HasIllegalChars_Params
{
public:
	class FString                                NewBannerName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F6D[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function FortniteUI.FortBannerSelectorBase.HandleBannerNameChanged
struct UFortBannerSelectorBase_HandleBannerNameChanged_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortBorderStyleList.GetBorderStyles
struct UFortBorderStyleList_GetBorderStyles_Params
{
public:
	TArray<TSoftClassPtr<class UCommonBorderStyle>> ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x74 (0x74 - 0x0)
// Function FortniteUI.FortButtonStyle.GetMarginBySizeFromMultiSizeMargin
struct UFortButtonStyle_GetMarginBySizeFromMultiSizeMargin_Params
{
public:
	struct FFortMultiSizeMargin                  MultiSizeMargin;                                   // 0x0(0x60)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	enum class EFortBrushSize                    Size;                                              // 0x60(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F71[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMargin                               ReturnValue;                                       // 0x64(0x10)(ConstParm, Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x2E0 (0x2E0 - 0x0)
// Function FortniteUI.FortButtonStyle.GetFontBySizeFromMultiSizeFont
struct UFortButtonStyle_GetFontBySizeFromMultiSizeFont_Params
{
public:
	struct FFortMultiSizeFont                    MultiSizeFont;                                     // 0x0(0x270)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	enum class EFortBrushSize                    Size;                                              // 0x270(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F72[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateFontInfo                        ReturnValue;                                       // 0x278(0x68)(ConstParm, Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// Function FortniteUI.FortButtonStyle.GetFontBySize
struct UFortButtonStyle_GetFontBySize_Params
{
public:
	enum class EFortBrushSize                    Size;                                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F73[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateFontInfo                        ReturnValue;                                       // 0x8(0x68)(ConstParm, Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// Function FortniteUI.FortButtonStyle.GetCustomPaddingBySize
struct UFortButtonStyle_GetCustomPaddingBySize_Params
{
public:
	enum class EFortBrushSize                    Size;                                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F74[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMargin                               ReturnValue;                                       // 0x4(0x10)(ConstParm, Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// Function FortniteUI.FortButtonStyle.GetButtonPaddingBySize
struct UFortButtonStyle_GetButtonPaddingBySize_Params
{
public:
	enum class EFortBrushSize                    Size;                                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F75[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMargin                               ReturnValue;                                       // 0x4(0x10)(ConstParm, Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x3F8 (0x3F8 - 0x0)
// Function FortniteUI.FortButtonStyle.GetBrushBySizeFromMultiSizeBrush
struct UFortButtonStyle_GetBrushBySizeFromMultiSizeBrush_Params
{
public:
	struct FFortMultiSizeBrush                   MultiSizeBrush;                                    // 0x0(0x360)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	enum class EFortBrushSize                    Size;                                              // 0x360(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F76[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           ReturnValue;                                       // 0x368(0x90)(ConstParm, Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortBaseButton.SetStyle
struct UFortBaseButton_SetStyle_Params
{
public:
	TSubclassOf<class UFortButtonStyle>          InStyle;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortBaseButton.SetSelectionGroup
struct UFortBaseButton_SetSelectionGroup_Params
{
public:
	class FName                                  InSelectionGroup;                                  // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortBaseButton.SetSelected
struct UFortBaseButton_SetSelected_Params
{
public:
	bool                                         InSelected;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortBaseButton.SetHovered
struct UFortBaseButton_SetHovered_Params
{
public:
	bool                                         InHovered;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortBaseButton.SetClickMethod
struct UFortBaseButton_SetClickMethod_Params
{
public:
	enum class EButtonClickMethod                InClickMethod;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortBaseButton.SetClickable
struct UFortBaseButton_SetClickable_Params
{
public:
	bool                                         InClickable;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortBaseButton.SetBrushSize
struct UFortBaseButton_SetBrushSize_Params
{
public:
	enum class EFortBrushSize                    InSize;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortBaseButton.SetBangVisibility
struct UFortBaseButton_SetBangVisibility_Params
{
public:
	bool                                         bVisible;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortBaseButton.GetStyle
struct UFortBaseButton_GetStyle_Params
{
public:
	class UFortButtonStyle*                      ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortBaseButton.GetSelectionGroupIndex
struct UFortBaseButton_GetSelectionGroupIndex_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortBaseButton.GetSelected
struct UFortBaseButton_GetSelected_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x380 (0x380 - 0x0)
// Function FortniteUI.FortBaseButton.GetCurrentStateStyle
struct UFortBaseButton_GetCurrentStateStyle_Params
{
public:
	struct FFortStateStyle                       ReturnValue;                                       // 0x0(0x380)(ConstParm, Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// Function FortniteUI.FortBaseButton.GetCurrentFont
struct UFortBaseButton_GetCurrentFont_Params
{
public:
	struct FSlateFontInfo                        ReturnValue;                                       // 0x0(0x68)(ConstParm, Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortBaseButton.GetCurrentCustomPadding
struct UFortBaseButton_GetCurrentCustomPadding_Params
{
public:
	struct FMargin                               ReturnValue;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortBaseButton.GetCurrentButtonPadding
struct UFortBaseButton_GetCurrentButtonPadding_Params
{
public:
	struct FMargin                               ReturnValue;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// Function FortniteUI.FortChatWidget.SetControllerActionBrush
struct UFortChatWidget_SetControllerActionBrush_Params
{
public:
	struct FSlateBrush                           SlateBrush;                                        // 0x0(0x90)(Parm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortCheatMenuFactory.AddStoreCheatMenu
struct UFortCheatMenuFactory_AddStoreCheatMenu_Params
{
public:
	class UCommonUserWidget*                     Widget;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function FortniteUI.FortCheatMenuFactory.AddGrantCheatMenu
struct UFortCheatMenuFactory_AddGrantCheatMenu_Params
{
public:
	class UCommonUserWidget*                     Widget;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                TemplateId;                                        // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                InstanceId;                                        // 0x18(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortCollectionBookGenericRewardWidget.SetRewardStatus
struct UFortCollectionBookGenericRewardWidget_SetRewardStatus_Params
{
public:
	enum class ECollectionBookRewardStatus       Status;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function FortniteUI.FortCollectionBookGenericRewardWidget.SetRewards
struct UFortCollectionBookGenericRewardWidget_SetRewards_Params
{
public:
	struct FFortRewardInfo                       Rewards;                                           // 0x0(0x30)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortCollectionBookGenericRewardWidget.SetCurrentItemToDisplay
struct UFortCollectionBookGenericRewardWidget_SetCurrentItemToDisplay_Params
{
public:
	class UFortItem*                             ItemToDisplay;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortCollectionBookGenericRewardWidget.OnRewardStatusChanged
struct UFortCollectionBookGenericRewardWidget_OnRewardStatusChanged_Params
{
public:
	enum class ECollectionBookRewardStatus       NewStatus;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortCollectionBookGenericRewardWidget.HasRewards
struct UFortCollectionBookGenericRewardWidget_HasRewards_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortCollectionBookGenericRewardWidget.GetRewardStatus
struct UFortCollectionBookGenericRewardWidget_GetRewardStatus_Params
{
public:
	enum class ECollectionBookRewardStatus       ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortCollectionBookProgressionRewardWidget.SetAssociatedLevel
struct UFortCollectionBookProgressionRewardWidget_SetAssociatedLevel_Params
{
public:
	int32                                        Level;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortItemWidget_NUI.SetItemViewContext
struct UFortItemWidget_NUI_SetItemViewContext_Params
{
public:
	TScriptInterface<class IFortItemViewContextInterface> ItemViewContext;                                   // 0x0(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortItemWidget_NUI.SetItemToRepresent
struct UFortItemWidget_NUI_SetItemToRepresent_Params
{
public:
	class UFortItem*                             ItemToRepresent;                                   // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function FortniteUI.FortItemCardBase.PortBrushSize
struct UFortItemCardBase_PortBrushSize_Params
{
public:
	enum class EFortBrushSize                    BrushSize;                                         // 0x0(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortItemCardSize                 ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortRewardInfoButton.SetShowDescriptionBP
struct UFortRewardInfoButton_SetShowDescriptionBP_Params
{
public:
	bool                                         bInShowDescription;                                // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortRewardInfoButton.SetShowDescription
struct UFortRewardInfoButton_SetShowDescription_Params
{
public:
	bool                                         bInShowDescription;                                // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortRewardInfoButton.SetItemInstanceQuantityPair
struct UFortRewardInfoButton_SetItemInstanceQuantityPair_Params
{
public:
	struct FFortItemInstanceQuantityPair         ItemQuantityPair;                                  // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortRewardInfoButton.GetQuantity
struct UFortRewardInfoButton_GetQuantity_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortRewardInfoButton.GetItemInstance
struct UFortRewardInfoButton_GetItemInstance_Params
{
public:
	class UFortItem*                             ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function FortniteUI.FortRewardInfoWidget.SetReward
struct UFortRewardInfoWidget_SetReward_Params
{
public:
	struct FFortRewardInfo                       RewardsIn;                                         // 0x0(0x30)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortRewardInfoWidget.SetButtonGroup
struct UFortRewardInfoWidget_SetButtonGroup_Params
{
public:
	class UCommonButtonGroup*                    InButtonGroup;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortCollectionBookSectionCompletionRewardWidget.OnRewardDetailsButtonClicked
struct UFortCollectionBookSectionCompletionRewardWidget_OnRewardDetailsButtonClicked_Params
{
public:
	class UCommonButton*                         ClickedButton;                                     // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortCollectionBookSectionCompletionRewardWidget.HandleRewardDetailsModalWidgetDeactivated
struct UFortCollectionBookSectionCompletionRewardWidget_HandleRewardDetailsModalWidgetDeactivated_Params
{
public:
	class UCommonActivatablePanel*               DeactivatedPanel;                                  // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortCollectionBookOverviewWidget.OnPageItemSelected
struct UFortCollectionBookOverviewWidget_OnPageItemSelected_Params
{
public:
	class UObject*                               Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSelected;                                         // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F8B[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortCollectionBookOverviewWidget.OnPageItemClicked
struct UFortCollectionBookOverviewWidget_OnPageItemClicked_Params
{
public:
	class UObject*                               Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function FortniteUI.FortCollectionBookOverviewWidget.OnGetChildrenForPageCategory
struct UFortCollectionBookOverviewWidget_OnGetChildrenForPageCategory_Params
{
public:
	class UObject*                               CategoryObject;                                    // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UObject*>                       ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortCollectionBookPageDetailsWidget.OnSlotItemComplete
struct UFortCollectionBookPageDetailsWidget_OnSlotItemComplete_Params
{
public:
	class UFortAccountItem*                      SlottedItem;                                       // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SlotId;                                            // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortCollectionBookPageDetailsWidget.OnRewardDetailsButtonClicked
struct UFortCollectionBookPageDetailsWidget_OnRewardDetailsButtonClicked_Params
{
public:
	class UCommonButton*                         ClickedButton;                                     // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function FortniteUI.FortCollectionBookPageDetailsWidget.OnPageProgressionUpdated
struct UFortCollectionBookPageDetailsWidget_OnPageProgressionUpdated_Params
{
public:
	int32                                        TotalFilledSlots;                                  // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TotalSlots;                                        // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortCollectionBookState          State;                                             // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F8C[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortCollectionBookPageDetailsWidget.OnDetailsPageChanged
struct UFortCollectionBookPageDetailsWidget_OnDetailsPageChanged_Params
{
public:
	class UFortCollectionBookPage*               InNewDetailsPage;                                  // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortCollectionBookPageDetailsWidget.HandleRewardDetailsModalWidgetDeactivated
struct UFortCollectionBookPageDetailsWidget_HandleRewardDetailsModalWidgetDeactivated_Params
{
public:
	class UCommonActivatablePanel*               DeactivatedPanel;                                  // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortCollectionBookPageListWidget.SetupAsPage
struct UFortCollectionBookPageListWidget_SetupAsPage_Params
{
public:
	class UFortCollectionBookPage*               Page;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortCollectionBookPageListWidget.SetupAsCategory
struct UFortCollectionBookPageListWidget_SetupAsCategory_Params
{
public:
	class UFortCollectionBookCategory*           Category;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortCollectionBookPageListWidget.OnSlotItemComplete
struct UFortCollectionBookPageListWidget_OnSlotItemComplete_Params
{
public:
	class UFortAccountItem*                      SlottedItem;                                       // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SlotId;                                            // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortCollectionBookPageListWidget.OnPageDetailsUpdated
struct UFortCollectionBookPageListWidget_OnPageDetailsUpdated_Params
{
public:
	int32                                        NumAvailableSlots;                                 // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortCollectionBookState          State;                                             // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F8D[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortCollectionBookPageListWidget.OnExpansionChanged
struct UFortCollectionBookPageListWidget_OnExpansionChanged_Params
{
public:
	bool                                         bExpanded;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortCollectionBookPrimaryPanel.OnSummonInfoPanelExecuted
struct UFortCollectionBookPrimaryPanel_OnSummonInfoPanelExecuted_Params
{
public:
	bool                                         bPassThrough;                                      // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortCollectionBookPrimaryPanel.OnInputMethodChanged
struct UFortCollectionBookPrimaryPanel_OnInputMethodChanged_Params
{
public:
	bool                                         bUsingGamepad;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortCollectionBookPrimaryPanel.OnCollectionBookSectionClicked
struct UFortCollectionBookPrimaryPanel_OnCollectionBookSectionClicked_Params
{
public:
	class UFortCollectionBookSection*            ClickedSection;                                    // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortCollectionBookPrimaryPanel.OnCollectionBookPageSelected
struct UFortCollectionBookPrimaryPanel_OnCollectionBookPageSelected_Params
{
public:
	class UFortCollectionBookPage*               SelectedPage;                                      // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortCollectionBookPrimaryPanel.OnCollectionBookPageClicked
struct UFortCollectionBookPrimaryPanel_OnCollectionBookPageClicked_Params
{
public:
	class UFortCollectionBookPage*               ClickedPage;                                       // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortCollectionBookPrimaryPanel.OnBackActionExecuted
struct UFortCollectionBookPrimaryPanel_OnBackActionExecuted_Params
{
public:
	bool                                         bPassThrough;                                      // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortCollectionBookPrimaryPanel.HandleSectionTileClicked
struct UFortCollectionBookPrimaryPanel_HandleSectionTileClicked_Params
{
public:
	class UObject*                               Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortCollectionBookProgressWidget.OnSlottedItemOperationComplete
struct UFortCollectionBookProgressWidget_OnSlottedItemOperationComplete_Params
{
public:
	class UFortAccountItem*                      ItemSlotted;                                       // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SlotId;                                            // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortCollectionBookProgressWidget.OnDetailsButtonClicked
struct UFortCollectionBookProgressWidget_OnDetailsButtonClicked_Params
{
public:
	class UCommonButton*                         ClickedButton;                                     // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortCollectionBookProgressWidget.OnCollectionBookPreviewXPChange
struct UFortCollectionBookProgressWidget_OnCollectionBookPreviewXPChange_Params
{
public:
	float                                        PreviewCompletionPct;                              // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortCollectionBookProgressWidget.OnCollectionBookPageSelected
struct UFortCollectionBookProgressWidget_OnCollectionBookPageSelected_Params
{
public:
	class UFortCollectionBookPage*               SelectedPage;                                      // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortCollectionBookProgressWidget.OnCollectionBookLevelProgressionChanged
struct UFortCollectionBookProgressWidget_OnCollectionBookLevelProgressionChanged_Params
{
public:
	float                                        NewCompletionPct;                                  // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortCollectionBookProgressWidget.OnCollectionBookLevelChanged
struct UFortCollectionBookProgressWidget_OnCollectionBookLevelChanged_Params
{
public:
	int32                                        NewLevel;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortCollectionBookProgressWidget.HandleDetailsModalWidgetDeactivated
struct UFortCollectionBookProgressWidget_HandleDetailsModalWidgetDeactivated_Params
{
public:
	class UCommonActivatablePanel*               DeactivatedPanel;                                  // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortCollectionBookRecycleSlotResultsWidget.SetCurrentItemToRecycle
struct UFortCollectionBookRecycleSlotResultsWidget_SetCurrentItemToRecycle_Params
{
public:
	class UFortAccountItem*                      InItemToRecycle;                                   // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function FortniteUI.FortCollectionBookRewardCardWidget.SetRewards
struct UFortCollectionBookRewardCardWidget_SetRewards_Params
{
public:
	struct FFortRewardInfo                       Rewards;                                           // 0x0(0x30)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// DelegateFunction FortniteUI.FortCollectionBookRewardCardWidget.OnDisplayedItemChangedEvent__DelegateSignature
struct UFortCollectionBookRewardCardWidget_OnDisplayedItemChangedEvent__DelegateSignature_Params
{
public:
	class UFortItem*                             DisplayedItem;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortCollectionBookRewardCardWidget.HasRewards
struct UFortCollectionBookRewardCardWidget_HasRewards_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortCollectionBookSectionPanel.OnSlottedItemOperationComplete
struct UFortCollectionBookSectionPanel_OnSlottedItemOperationComplete_Params
{
public:
	class UFortAccountItem*                      SlottedItem;                                       // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SlotId;                                            // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortCollectionBookSectionPanel.OnSlotPickerItemSelected
struct UFortCollectionBookSectionPanel_OnSlotPickerItemSelected_Params
{
public:
	class UFortItem*                             SelectedItem;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortCollectionBookSectionPanel.OnSlotPickerItemHovered
struct UFortCollectionBookSectionPanel_OnSlotPickerItemHovered_Params
{
public:
	class UFortItem*                             HoveredItem;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function FortniteUI.FortCollectionBookSectionPanel.OnSlotItemConfirmationCompleted
struct UFortCollectionBookSectionPanel_OnSlotItemConfirmationCompleted_Params
{
public:
	class UFortItem*                             SelectedItem;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SlotId;                                            // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortDialogExternalLatentActionHandle LatentActionHandle;                                // 0x10(0x4)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F95[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortCollectionBookSectionPanel.OnSlotItemComplete
struct UFortCollectionBookSectionPanel_OnSlotItemComplete_Params
{
public:
	class UFortAccountItem*                      SlottedItem;                                       // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SlotId;                                            // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortCollectionBookSectionPanel.OnSlotItemActionExecuted
struct UFortCollectionBookSectionPanel_OnSlotItemActionExecuted_Params
{
public:
	bool                                         bPassThrough;                                      // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortCollectionBookSectionPanel.OnSlotButtonSelected
struct UFortCollectionBookSectionPanel_OnSlotButtonSelected_Params
{
public:
	class UFortCollectionBookSlotButton*         SlotButton;                                        // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortCollectionBookSectionPanel.OnSlotButtonCommitted
struct UFortCollectionBookSectionPanel_OnSlotButtonCommitted_Params
{
public:
	class UFortCollectionBookSlotButton*         SlotButton;                                        // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortCollectionBookSectionPanel.OnSectionChanged
struct UFortCollectionBookSectionPanel_OnSectionChanged_Params
{
public:
	class UFortCollectionBookSection*            Section;                                           // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortCollectionBookSectionPanel.OnOpenPickerActionExecuted
struct UFortCollectionBookSectionPanel_OnOpenPickerActionExecuted_Params
{
public:
	bool                                         bPassThrough;                                      // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortCollectionBookSectionPanel.OnLogAllowedItemsActionExecuted
struct UFortCollectionBookSectionPanel_OnLogAllowedItemsActionExecuted_Params
{
public:
	bool                                         bPassThrough;                                      // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// DelegateFunction FortniteUI.FortCollectionBookSectionPanel.OnItemInspectAction__DelegateSignature
struct UFortCollectionBookSectionPanel_OnItemInspectAction__DelegateSignature_Params
{
public:
	class UFortItem*                             SelectedItem;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         EnableItemActions;                                 // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsPlaceholderItem;                                 // 0x9(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F96[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// DelegateFunction FortniteUI.FortCollectionBookSectionPanel.OnItemAction__DelegateSignature
struct UFortCollectionBookSectionPanel_OnItemAction__DelegateSignature_Params
{
public:
	class UFortItem*                             SelectedItem;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortCollectionBookSectionPanel.OnInspectActionExecuted
struct UFortCollectionBookSectionPanel_OnInspectActionExecuted_Params
{
public:
	bool                                         bPassThrough;                                      // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortCollectionBookSectionPanel.OnInputMethodChanged
struct UFortCollectionBookSectionPanel_OnInputMethodChanged_Params
{
public:
	bool                                         bUsingGamepad;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortCollectionBookSectionPanel.OnBackActionExecuted
struct UFortCollectionBookSectionPanel_OnBackActionExecuted_Params
{
public:
	bool                                         bPassThrough;                                      // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortCollectionBookSlotWidget.OnSlottedItemOperationComplete
struct UFortCollectionBookSlotWidget_OnSlottedItemOperationComplete_Params
{
public:
	class UFortAccountItem*                      ItemSlotted;                                       // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SlotId;                                            // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function FortniteUI.FortCollectionBookSectionTileWidget.OnSectionSlotUpdate
struct UFortCollectionBookSectionTileWidget_OnSectionSlotUpdate_Params
{
public:
	int32                                        NumFilledSlots;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumSlots;                                          // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortCollectionBookState          SectionState;                                      // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F9D[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortCollectionBookSectionTileWidget.OnItemSlotted
struct UFortCollectionBookSectionTileWidget_OnItemSlotted_Params
{
public:
	class UFortAccountItem*                      ItemSlotted;                                       // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SlotId;                                            // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortCollectionBookSlotView.OnSlotButtonCommitted
struct UFortCollectionBookSlotView_OnSlotButtonCommitted_Params
{
public:
	class UCommonButton*                         CommittedButton;                                   // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ButtonIdx;                                         // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FA0[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortCollectionBookSlotView.OnSlotButtonClicked
struct UFortCollectionBookSlotView_OnSlotButtonClicked_Params
{
public:
	class UCommonButton*                         ClickedButton;                                     // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ButtonIdx;                                         // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FA1[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortCollectionBookSlotView.OnSelectedSlotButtonChanged
struct UFortCollectionBookSlotView_OnSelectedSlotButtonChanged_Params
{
public:
	class UCommonButton*                         SelectedButton;                                    // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ButtonIdx;                                         // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FA2[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function FortniteUI.FortDailyRewards.TryGetDailyRewardsData
struct UFortDailyRewards_TryGetDailyRewardsData_Params
{
public:
	struct FFortDailyRewardsData                 OutDailyRewardsData;                               // 0x0(0x18)(Parm, OutParm, NativeAccessSpecifierPublic)
	int32                                        ItemCardsPerSchedule;                              // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinEpicRewards;                                    // 0x1C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FA6[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortDailyRewards.ClaimResultReceived
struct UFortDailyRewards_ClaimResultReceived_Params
{
public:
	TArray<struct FFortItemInstanceQuantityPair> Loot;                                              // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortExpeditionBuildSquadWidget.StartExpedition
struct UFortExpeditionBuildSquadWidget_StartExpedition_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortExpeditionBuildSquadWidget.SetData
struct UFortExpeditionBuildSquadWidget_SetData_Params
{
public:
	class UFortExpeditionItem*                   InItem;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortExpeditionBuildSquadWidget.SetCurrentSquadId
struct UFortExpeditionBuildSquadWidget_SetCurrentSquadId_Params
{
public:
	class FName                                  SquadId;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortExpeditionBuildSquadWidget.IsSquadSlotLocked
struct UFortExpeditionBuildSquadWidget_IsSquadSlotLocked_Params
{
public:
	int32                                        SlotIndex;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FA9[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortExpeditionBuildSquadWidget.IsExpeditionValidToStart
struct UFortExpeditionBuildSquadWidget_IsExpeditionValidToStart_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortExpeditionBuildSquadWidget.HandleStartExpeditionCompleted
struct UFortExpeditionBuildSquadWidget_HandleStartExpeditionCompleted_Params
{
public:
	class UFortExpeditionItem*                   Expedition;                                        // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSucceeded;                                        // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FAA[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortExpeditionBuildSquadWidget.HandleDifferentSquadSlotSelected
struct UFortExpeditionBuildSquadWidget_HandleDifferentSquadSlotSelected_Params
{
public:
	int32                                        SquadSlotIndex;                                    // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortExpeditionBuildSquadWidget.ClearTemporaryExpeditionSquadState
struct UFortExpeditionBuildSquadWidget_ClearTemporaryExpeditionSquadState_Params
{
public:
	bool                                         bPreviewOnly;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortExpeditionDetailsWidget.SetData
struct UFortExpeditionDetailsWidget_SetData_Params
{
public:
	class UFortExpeditionItem*                   InItem;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortExpeditionDetailsWidget.SetCurrentSquadId
struct UFortExpeditionDetailsWidget_SetCurrentSquadId_Params
{
public:
	class FName                                  SquadId;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortExpeditionDetailsWidget.HandleAbandonExpeditionCompleted
struct UFortExpeditionDetailsWidget_HandleAbandonExpeditionCompleted_Params
{
public:
	class UFortExpeditionItem*                   Expedition;                                        // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSuccess;                                          // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FAC[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortExpeditionExpiresWidget.SetData
struct UFortExpeditionExpiresWidget_SetData_Params
{
public:
	class UFortExpeditionItem*                   InItem;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortExpeditionListViewWidget.SetExpeditionListSortType
struct UFortExpeditionListViewWidget_SetExpeditionListSortType_Params
{
public:
	enum class EFortExpeditionListSort           InSortType;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortExpeditionListViewWidget.HandleListItemSelected
struct UFortExpeditionListViewWidget_HandleListItemSelected_Params
{
public:
	class UObject*                               Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSelected;                                         // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FB1[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function FortniteUI.FortExpeditionListViewWidget.GetExpeditionListSortName
struct UFortExpeditionListViewWidget_GetExpeditionListSortName_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortExpeditionOverviewWidget.OnExpeditionTabSelected
struct UFortExpeditionOverviewWidget_OnExpeditionTabSelected_Params
{
public:
	class FName                                  TabNameID;                                         // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortExpeditionOverviewWidget.HandleExpeditionTabSelected
struct UFortExpeditionOverviewWidget_HandleExpeditionTabSelected_Params
{
public:
	class FName                                  TabNameID;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortExpeditionOverviewWidget.HandleExpeditionTabButtonCreated
struct UFortExpeditionOverviewWidget_HandleExpeditionTabButtonCreated_Params
{
public:
	class FName                                  TabNameID;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCommonButton*                         TabButton;                                         // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortExpeditionPickVehicleWidget.SetData
struct UFortExpeditionPickVehicleWidget_SetData_Params
{
public:
	class UFortExpeditionItem*                   InItem;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortExpeditionReturnsWidget.SetData
struct UFortExpeditionReturnsWidget_SetData_Params
{
public:
	class UFortExpeditionItem*                   InItem;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function FortniteUI.FortExpeditionRewardsWidget.RefreshRewardsUI
struct UFortExpeditionRewardsWidget_RefreshRewardsUI_Params
{
public:
	class UFortExpeditionItem*                   Expedition;                                        // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bExpeditionSucceeded;                              // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FB6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFortItemInstanceQuantityPair> Rewards;                                           // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function FortniteUI.FortExpeditionRewardsWidget.HandleCollectionExpeditionCompleted
struct UFortExpeditionRewardsWidget_HandleCollectionExpeditionCompleted_Params
{
public:
	bool                                         bMcpSuccess;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FB7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortExpeditionItem*                   Expedition;                                        // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bExpeditionSuccess;                                // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FB8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFortItemInstanceQuantityPair> Rewards;                                           // 0x18(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function FortniteUI.FortExpeditionUtilities.TotalUnseenExpeditionsForTab
struct UFortExpeditionUtilities_TotalUnseenExpeditionsForTab_Params
{
public:
	class UWidget*                               Widget;                                            // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  TabNameID;                                         // 0x8(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FBB[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function FortniteUI.FortExpeditionUtilities.IsSquadOnExpedition
struct UFortExpeditionUtilities_IsSquadOnExpedition_Params
{
public:
	class UWidget*                               Widget;                                            // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SquadId;                                           // 0x8(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FBC[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortExpeditionUtilities.GetVehicleTagRequiredForExpedition
struct UFortExpeditionUtilities_GetVehicleTagRequiredForExpedition_Params
{
public:
	class UFortExpeditionItem*                   Expedition;                                        // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function FortniteUI.FortExpeditionUtilities.GetVehicleTagFromSquadId
struct UFortExpeditionUtilities_GetVehicleTagFromSquadId_Params
{
public:
	class FName                                  SquadId;                                           // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          OutFoundVehicleTag;                                // 0x8(0x8)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FBD[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function FortniteUI.FortExpeditionUtilities.GetTotalExpeditionVehiclesAvailable
struct UFortExpeditionUtilities_GetTotalExpeditionVehiclesAvailable_Params
{
public:
	class UWidget*                               Widget;                                            // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AFortPlayerController*                 FortPC;                                            // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OutLandVehicles;                                   // 0x10(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OutLandVehiclesAvailable;                          // 0x14(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OutSeaVehicles;                                    // 0x18(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OutSeaVehiclesAvailable;                           // 0x1C(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OutAirVehicles;                                    // 0x20(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OutAirVehiclesAvailable;                           // 0x24(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function FortniteUI.FortExpeditionUtilities.GetMatchedCriteriaTags
struct UFortExpeditionUtilities_GetMatchedCriteriaTags_Params
{
public:
	class UFortExpeditionItem*                   Expedition;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UFortItem*>                     SlottedItems;                                      // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FGameplayTag>                  OutMatchedCriteria;                                // 0x18(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function FortniteUI.FortExpeditionUtilities.GetExpeditionSquadsThatMatchRequirements
struct UFortExpeditionUtilities_GetExpeditionSquadsThatMatchRequirements_Params
{
public:
	struct FGameplayTagContainer                 RequirementTags;                                   // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class AFortPlayerController*                 FortPC;                                            // 0x20(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          OutExpeditionSquadIds;                             // 0x28(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x38(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FBE[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function FortniteUI.FortExpeditionUtilities.GetExpeditionSquadPower
struct UFortExpeditionUtilities_GetExpeditionSquadPower_Params
{
public:
	class AFortPlayerController*                 FortPC;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SquadId;                                           // 0x8(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FBF[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortExpeditionUtilities.GetAllExpeditionSquadIds
struct UFortExpeditionUtilities_GetAllExpeditionSquadIds_Params
{
public:
	TArray<class FName>                          OutExpeditionSquadIds;                             // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function FortniteUI.FortExpeditionUtilities.CalculateTotalPower
struct UFortExpeditionUtilities_CalculateTotalPower_Params
{
public:
	class AFortPlayerController*                 FortPC;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortExpeditionItem*                   Expedition;                                        // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SquadId;                                           // 0x10(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UFortItem*>                     SlottedItems;                                      // 0x18(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x28(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FC0[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function FortniteUI.FortExpeditionUtilities.CalculateGlobalAndItemRatingModValuesBP
struct UFortExpeditionUtilities_CalculateGlobalAndItemRatingModValuesBP_Params
{
public:
	class UFortExpeditionItem*                   Expedition;                                        // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UFortItem*>                     SlottedItems;                                      // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	float                                        GlobalPowerMod;                                    // 0x18(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FC1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                SlottedItemMods;                                   // 0x20(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortExpeditionUtilities.CalculateExpeditionPercentageChanceForSuccess
struct UFortExpeditionUtilities_CalculateExpeditionPercentageChanceForSuccess_Params
{
public:
	class UFortExpeditionItem*                   Expedition;                                        // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TotalPower;                                        // 0x8(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0xC(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function FortniteUI.FortExpeditionUtilities.AreExpeditionsUnlocked
struct UFortExpeditionUtilities_AreExpeditionsUnlocked_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      UniqueId;                                          // 0x8(0x18)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FC2[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortExpeditionUtilities.AreAnyExpeditionsComplete
struct UFortExpeditionUtilities_AreAnyExpeditionsComplete_Params
{
public:
	class UWidget*                               Widget;                                            // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FC3[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortSkillTreeCanvasEntityInterface.PlayOutroTransitionBP
struct IFortSkillTreeCanvasEntityInterface_PlayOutroTransitionBP_Params
{
public:
	enum class EFortAnimSpeed                    AnimSpeed;                                         // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortSkillTreeCanvasEntityInterface.PlayIntroTransitionBP
struct IFortSkillTreeCanvasEntityInterface_PlayIntroTransitionBP_Params
{
public:
	enum class EFortAnimSpeed                    AnimSpeed;                                         // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC8 (0xC8 - 0x0)
// Function FortniteUI.FortSkillTreeCanvasNode.TryGetStaticSkillTreeNodeData
struct UFortSkillTreeCanvasNode_TryGetStaticSkillTreeNodeData_Params
{
public:
	struct FHomebaseNode                         OutNodeData;                                       // 0x0(0xC0)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xC0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FC6[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// Function FortniteUI.FortSkillTreeCanvasNode.TryGetSkillTreeNodeState
struct UFortSkillTreeCanvasNode_TryGetSkillTreeNodeState_Params
{
public:
	struct FHomebaseNodeState                    OutNodeState;                                      // 0x0(0x8)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FC7[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x370 (0x370 - 0x0)
// Function FortniteUI.FortSkillTreeCanvasNode.TryGetNodeDisplayData
struct UFortSkillTreeCanvasNode_TryGetNodeDisplayData_Params
{
public:
	struct FFortSkillTreeNodeDisplayData         OutDisplayData;                                    // 0x0(0x368)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x368(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FC8[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortKeybindWidget.StopHoldProgress
struct UFortKeybindWidget_StopHoldProgress_Params
{
public:
	class FName                                  HoldActionName;                                    // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCompletedSuccessfully;                            // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FCB[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortKeybindWidget.StartHoldProgress
struct UFortKeybindWidget_StartHoldProgress_Params
{
public:
	class FName                                  HoldActionName;                                    // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HoldDuration;                                      // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FCC[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortKeybindWidget.SetShowProgressCountDown
struct UFortKeybindWidget_SetShowProgressCountDown_Params
{
public:
	bool                                         bShow;                                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortKeybindWidget.SetForcedHoldKeybindStatus
struct UFortKeybindWidget_SetForcedHoldKeybindStatus_Params
{
public:
	enum class EFortKeybindForcedHoldStatus      InForcedHoldKeybindStatus;                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortKeybindWidget.SetForcedHoldKeybind
struct UFortKeybindWidget_SetForcedHoldKeybind_Params
{
public:
	bool                                         InForcedHoldKeybind;                               // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortKeybindWidget.SetBoundAction
struct UFortKeybindWidget_SetBoundAction_Params
{
public:
	class FName                                  NewBoundAction;                                    // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortKeybindWidget.IsHoldKeybind
struct UFortKeybindWidget_IsHoldKeybind_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// Function FortniteUI.FortKeybindWidget.GetBrushForKey
struct UFortKeybindWidget_GetBrushForKey_Params
{
public:
	enum class EFortBrushSize                    BrushSize;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FCD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           Brush;                                             // 0x8(0x90)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x98(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FCE[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortItemInspectionScreen.OpenItemInspect
struct UFortItemInspectionScreen_OpenItemInspect_Params
{
public:
	class UFortItem*                             ItemToInspect;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortItemInspectionMode           Mode;                                              // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShouldAllowUpgrading;                              // 0x9(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShouldAllowEvolution;                              // 0xA(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShouldAllowFavorite;                               // 0xB(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsTemporaryItem;                                   // 0xC(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FD1[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x68 (0x68 - 0x0)
// Function FortniteUI.FortSkillTreeViewer.TryGetSkillTreePageStaticData
struct UFortSkillTreeViewer_TryGetSkillTreePageStaticData_Params
{
public:
	struct FHomebaseNodePage                     OutData;                                           // 0x0(0x60)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x60(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FD2[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortSkillTreeViewer.ShowPage
struct UFortSkillTreeViewer_ShowPage_Params
{
public:
	class FName                                  SkillTreePageId;                                   // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortAnimSpeed                    TransitionSpeed;                                   // 0x8(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FD3[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortSkillTreeViewer.NavigateTo
struct UFortSkillTreeViewer_NavigateTo_Params
{
public:
	class FName                                  SkillTreeNodeId;                                   // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShouldSelectNode;                                  // 0x8(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortAnimSpeed                    TransitionSpeed;                                   // 0x9(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FD4[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortSkillTreeViewer.HandleBackOutAction
struct UFortSkillTreeViewer_HandleBackOutAction_Params
{
public:
	bool                                         PassThrough;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function FortniteUI.FortSkillTreeViewer.GetViewParameters
struct UFortSkillTreeViewer_GetViewParameters_Params
{
public:
	struct FVector2D                             OutPanOffset;                                      // 0x0(0x8)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OutZoomLevel;                                      // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortSkillTreeViewer.GetSelectedNodeId
struct UFortSkillTreeViewer_GetSelectedNodeId_Params
{
public:
	class FName                                  ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortSkillTreeViewer.GetPageTotalNodes
struct UFortSkillTreeViewer_GetPageTotalNodes_Params
{
public:
	class FName                                  SkillTreePageId;                                   // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FD5[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortSkillTreeViewer.GetPageLocked
struct UFortSkillTreeViewer_GetPageLocked_Params
{
public:
	class FName                                  SkillTreePageId;                                   // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FD6[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortSkillTreeViewer.GetPageAquiredNodes
struct UFortSkillTreeViewer_GetPageAquiredNodes_Params
{
public:
	class FName                                  SkillTreePageId;                                   // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FD7[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function FortniteUI.FortSkillTreeViewer.GetCurrenciesNeededForPage
struct UFortSkillTreeViewer_GetCurrenciesNeededForPage_Params
{
public:
	class FName                                  SkillTreePageId;                                   // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UFortItemDefinition*>           OutCurrencies;                                     // 0x8(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortSkillTreeViewer.DrillDownToSubPage
struct UFortSkillTreeViewer_DrillDownToSubPage_Params
{
public:
	class FName                                  DrillDownSkillTreeNodeId;                          // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortAnimSpeed                    TransitionSpeed;                                   // 0x8(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FD8[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortSkillTreeViewer.CanBackOutOfSubPage
struct UFortSkillTreeViewer_CanBackOutOfSubPage_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortSkillTreeViewer.BackOutOfSubPage
struct UFortSkillTreeViewer_BackOutOfSubPage_Params
{
public:
	enum class EFortAnimSpeed                    TransitionSpeed;                                   // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortUIDataConfiguration.GetDefenderSubtypeIconMultiSizeBrushByTag
struct UFortUIDataConfiguration_GetDefenderSubtypeIconMultiSizeBrushByTag_Params
{
public:
	struct FGameplayTag                          DefenderSubtypeTag;                                // 0x0(0x8)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortMultiSizeBrushAsset*              ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortFrontEndContext.ViewVaultItem
struct UFortFrontEndContext_ViewVaultItem_Params
{
public:
	class UFortItem*                             ItemToView;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortFrontEndContext.UpdateNewAccountItemBangCounts
struct UFortFrontEndContext_UpdateNewAccountItemBangCounts_Params
{
public:
	class UFortInventoryContext*                 InventoryContext;                                  // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// Function FortniteUI.FortFrontEndContext.TryGetAttributeInfo
struct UFortFrontEndContext_TryGetAttributeInfo_Params
{
public:
	struct FGameplayAttribute                    GameplayAttribute;                                 // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortAttributeInfo                    OutAttribute;                                      // 0x20(0x78)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x98(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FE0[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortFrontEndContext.ShouldShowLoginMessage
struct UFortFrontEndContext_ShouldShowLoginMessage_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortFrontEndContext.ShouldRunInitialBenchmark
struct UFortFrontEndContext_ShouldRunInitialBenchmark_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortFrontEndContext.SetSelectedTheater
struct UFortFrontEndContext_SetSelectedTheater_Params
{
public:
	class FString                                TheaterId;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortFrontEndContext.SetPersonalHeroChoice
struct UFortFrontEndContext_SetPersonalHeroChoice_Params
{
public:
	class UFortHero*                             Hero;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortFrontEndContext.SetHeroChoice
struct UFortFrontEndContext_SetHeroChoice_Params
{
public:
	int32                                        PartyMemberIndex;                                  // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FE1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortHero*                             Hero;                                              // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortFrontEndContext.SetFrontEndCamera
struct UFortFrontEndContext_SetFrontEndCamera_Params
{
public:
	enum class EFrontEndCamera                   NewState;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortFrontEndContext.SendPlayQuestAnalytic
struct UFortFrontEndContext_SendPlayQuestAnalytic_Params
{
public:
	class UFortQuestItem*                        QuestItem;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function FortniteUI.FortFrontEndContext.SelectTileForQuest
struct UFortFrontEndContext_SelectTileForQuest_Params
{
public:
	class UFortQuestItem*                        QuestItem;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OutCriticalMissionDifficultyOverrideMin;           // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OutCriticalMissionDifficultyOverrideMax;           // 0xC(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FE2[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortFrontEndContext.SelectGadgetForSlot
struct UFortFrontEndContext_SelectGadgetForSlot_Params
{
public:
	int32                                        Slot;                                              // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FE3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortItemDefinition*                   GadgetDefinition;                                  // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortFrontEndContext.PushContentWidget_Adv
struct UFortFrontEndContext_PushContentWidget_Adv_Params
{
public:
	class UWidget*                               Widget;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHideHeader;                                       // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHideFooter;                                       // 0x9(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHideChatWidget;                                   // 0xA(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FE4[0x5];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortFrontEndContext.IsActiveTileMissionValid
struct UFortFrontEndContext_IsActiveTileMissionValid_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortFrontEndContext.GetUITestingClass
struct UFortFrontEndContext_GetUITestingClass_Params
{
public:
	class UClass*                                ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x170 (0x170 - 0x0)
// Function FortniteUI.FortFrontEndContext.GetTileMissionDetails
struct UFortFrontEndContext_GetTileMissionDetails_Params
{
public:
	class AFortTheaterMapTile*                   Tile;                                              // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortMissionDetails                   MissionDetails;                                    // 0x8(0x160)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x168(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FE5[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function FortniteUI.FortFrontEndContext.GetTheaterType
struct UFortFrontEndContext_GetTheaterType_Params
{
public:
	class FString                                TheaterId;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortTheaterType                  ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FE6[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function FortniteUI.FortFrontEndContext.GetTheaterRegionCount
struct UFortFrontEndContext_GetTheaterRegionCount_Params
{
public:
	class FString                                TheaterId;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FE7[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function FortniteUI.FortFrontEndContext.GetTheaterName
struct UFortFrontEndContext_GetTheaterName_Params
{
public:
	class FString                                TheaterId;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  ReturnValue;                                       // 0x10(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x558 (0x558 - 0x0)
// Function FortniteUI.FortFrontEndContext.GetTheaterData
struct UFortFrontEndContext_GetTheaterData_Params
{
public:
	class FString                                TheaterId;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortTheaterMapData                   OutTheaterData;                                    // 0x10(0x540)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x550(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FE8[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortFrontEndContext.GetSelectedTheaterId
struct UFortFrontEndContext_GetSelectedTheaterId_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x548 (0x548 - 0x0)
// Function FortniteUI.FortFrontEndContext.GetSelectedTheaterData
struct UFortFrontEndContext_GetSelectedTheaterData_Params
{
public:
	struct FFortTheaterMapData                   OutTheaterData;                                    // 0x0(0x540)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x540(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FE9[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function FortniteUI.FortFrontEndContext.GetSelectableGadgets
struct UFortFrontEndContext_GetSelectableGadgets_Params
{
public:
	TArray<class UFortWorldItem*>                SelectableGadgets;                                 // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UFortWorldItem*>                LastSelectedGadgets;                               // 0x10(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortFrontEndContext.GetReturnToFrontendBehavior
struct UFortFrontEndContext_GetReturnToFrontendBehavior_Params
{
public:
	enum class EFortReturnToFrontendBehavior     ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function FortniteUI.FortFrontEndContext.GetRequirementText
struct UFortFrontEndContext_GetRequirementText_Params
{
public:
	struct FFortRequirementsInfo                 InRequirements;                                    // 0x0(0x40)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	class FText                                  ReturnValue;                                       // 0x40(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortFrontEndContext.GetRecommendedTeamDifficulties
struct UFortFrontEndContext_GetRecommendedTeamDifficulties_Params
{
public:
	TArray<struct FGameDifficultyInfo>           ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function FortniteUI.FortFrontEndContext.GetRecommendedDifficultyIndexesInAvailableDifficulties
struct UFortFrontEndContext_GetRecommendedDifficultyIndexesInAvailableDifficulties_Params
{
public:
	bool                                         bIncludeMissionAlertTiles;                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FEA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function FortniteUI.FortFrontEndContext.GetOutpostStructureUpgradeCost
struct UFortFrontEndContext_GetOutpostStructureUpgradeCost_Params
{
public:
	int32                                        TheaterSlot;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        UpgradeLevel;                                      // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortOutpostItemDefinition*            OutpostStructure;                                  // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FFortItemQuantityPair>         OutWorldItems;                                     // 0x10(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FFortItemQuantityPair>         OutAccountItems;                                   // 0x20(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function FortniteUI.FortFrontEndContext.GetOutpostStructureMaxLevel
struct UFortFrontEndContext_GetOutpostStructureMaxLevel_Params
{
public:
	int32                                        TheaterSlot;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FEB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortOutpostItemDefinition*            OutpostStructure;                                  // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FEC[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function FortniteUI.FortFrontEndContext.GetOutpostCoreLevelByTheaterId
struct UFortFrontEndContext_GetOutpostCoreLevelByTheaterId_Params
{
public:
	class FString                                TheaterId;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OutCoreLevel;                                      // 0x10(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x14(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FED[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortFrontEndContext.GetOutpostCoreLevelByItemDefinition
struct UFortFrontEndContext_GetOutpostCoreLevelByItemDefinition_Params
{
public:
	class UFortOutpostItemDefinition*            OutpostCoreItemDef;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OutCoreLevel;                                      // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xC(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FEE[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x88 (0x88 - 0x0)
// Function FortniteUI.FortFrontEndContext.GetMaxAvailableDifficulty
struct UFortFrontEndContext_GetMaxAvailableDifficulty_Params
{
public:
	bool                                         bIncludeMissionAlertTiles;                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FEF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameDifficultyInfo                   ReturnValue;                                       // 0x8(0x80)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function FortniteUI.FortFrontEndContext.GetItemFromItemQuantityPair
struct UFortFrontEndContext_GetItemFromItemQuantityPair_Params
{
public:
	struct FFortItemQuantityPair                 InPair;                                            // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UFortItemDefinition*                   ReturnValue;                                       // 0x28(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortFrontEndContext.GetHeroPlayerPawnForCurrentDisplayedItem
struct UFortFrontEndContext_GetHeroPlayerPawnForCurrentDisplayedItem_Params
{
public:
	class AFortPlayerPawn*                       ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortFrontEndContext.GetHeroPlayerPawnByIndex
struct UFortFrontEndContext_GetHeroPlayerPawnByIndex_Params
{
public:
	int32                                        PartyMemberIndex;                                  // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FF3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPlayerPawn*                       ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortFrontEndContext.GetHarvestingToolForLevel
struct UFortFrontEndContext_GetHarvestingToolForLevel_Params
{
public:
	int32                                        TheaterSlot;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InHarvestingOptimizerLevel;                        // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortWorldItemDefinition*              ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortFrontEndContext.GetFrontEndCamera
struct UFortFrontEndContext_GetFrontEndCamera_Params
{
public:
	enum class EFrontEndCamera                   ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function FortniteUI.FortFrontEndContext.GetFeatureState
struct UFortFrontEndContext_GetFeatureState_Params
{
public:
	enum class EFortFrontEndFeature              Feature;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortFrontEndFeatureState         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortFrontEndContext.GetFabricatorStoredGooAmount
struct UFortFrontEndContext_GetFabricatorStoredGooAmount_Params
{
public:
	int32                                        TheaterSlot;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortFrontEndContext.GetFabricatorIncomingGooAmount
struct UFortFrontEndContext_GetFabricatorIncomingGooAmount_Params
{
public:
	int32                                        TheaterSlot;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortFrontEndContext.GetFabricatorDisintegrationSecondsRemaining
struct UFortFrontEndContext_GetFabricatorDisintegrationSecondsRemaining_Params
{
public:
	int32                                        TheaterSlot;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortFrontEndContext.GetDesiredPlayButtonCamera
struct UFortFrontEndContext_GetDesiredPlayButtonCamera_Params
{
public:
	enum class EFrontEndCamera                   ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function FortniteUI.FortFrontEndContext.GetDefenderSquadIDByTheaterID
struct UFortFrontEndContext_GetDefenderSquadIDByTheaterID_Params
{
public:
	class FString                                TheaterId;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function FortniteUI.FortFrontEndContext.GetCurrentTheaterName
struct UFortFrontEndContext_GetCurrentTheaterName_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function FortniteUI.FortFrontEndContext.GetAvailableDifficulties
struct UFortFrontEndContext_GetAvailableDifficulties_Params
{
public:
	bool                                         bIncludeMissionAlertTiles;                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FF4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FGameDifficultyInfo>           ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x3F8 (0x3F8 - 0x0)
// Function FortniteUI.FortFrontEndContext.GetAttributeIcon
struct UFortFrontEndContext_GetAttributeIcon_Params
{
public:
	struct FFortAttributeInfo                    InAttribute;                                       // 0x0(0x78)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 InRequiredTags;                                    // 0x78(0x20)(Parm, NativeAccessSpecifierPublic)
	struct FFortMultiSizeBrush                   ReturnValue;                                       // 0x98(0x360)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// Function FortniteUI.FortFrontEndContext.GetAttributeDisplayName
struct UFortFrontEndContext_GetAttributeDisplayName_Params
{
public:
	struct FFortAttributeInfo                    InAttribute;                                       // 0x0(0x78)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 InRequiredTags;                                    // 0x78(0x20)(Parm, NativeAccessSpecifierPublic)
	class FText                                  ReturnValue;                                       // 0x98(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// Function FortniteUI.FortFrontEndContext.GetAttributeDescription
struct UFortFrontEndContext_GetAttributeDescription_Params
{
public:
	struct FFortAttributeInfo                    InAttribute;                                       // 0x0(0x78)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 InRequiredTags;                                    // 0x78(0x20)(Parm, NativeAccessSpecifierPublic)
	class FText                                  ReturnValue;                                       // 0x98(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function FortniteUI.FortFrontEndContext.GetAllTheaterData
struct UFortFrontEndContext_GetAllTheaterData_Params
{
public:
	TArray<struct FFortTheaterMapData>           OutAllTheaterData;                                 // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FF5[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x168 (0x168 - 0x0)
// Function FortniteUI.FortFrontEndContext.GetActiveTileMissionDetails
struct UFortFrontEndContext_GetActiveTileMissionDetails_Params
{
public:
	struct FFortMissionDetails                   MissionDetails;                                    // 0x0(0x160)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x160(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FF6[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortFrontEndContext.GetActiveTile
struct UFortFrontEndContext_GetActiveTile_Params
{
public:
	class AFortTheaterMapTile*                   ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function FortniteUI.FortFrontEndContext.GetAccountLevelUpRewards
struct UFortFrontEndContext_GetAccountLevelUpRewards_Params
{
public:
	TArray<struct FFortItemQuantityPair>         Rewards;                                           // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        AccountLevel;                                      // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FF7[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x2 (0x2 - 0x0)
// Function FortniteUI.FortFrontEndContext.ForceSetFeatureState
struct UFortFrontEndContext_ForceSetFeatureState_Params
{
public:
	enum class EFortFrontEndFeature              Feature;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortFrontEndFeatureState         State;                                             // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortFrontEndContext.CanFindTileForQuest
struct UFortFrontEndContext_CanFindTileForQuest_Params
{
public:
	class UFortQuestItem*                        QuestItem;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FF8[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortFrontEndContext.CanCompleteQuestInActiveTileMission
struct UFortFrontEndContext_CanCompleteQuestInActiveTileMission_Params
{
public:
	class UFortQuestItem*                        QuestItem;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FF9[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function FortniteUI.FortFrontEndContext.BindToFeatureStateAndInitialize
struct UFortFrontEndContext_BindToFeatureStateAndInitialize_Params
{
public:
	enum class EFortFrontEndFeature              Feature;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FFA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           Delegate;                                          // 0x8(0x10)(Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortGridPickerTile.SetData
struct UFortGridPickerTile_SetData_Params
{
public:
	class UObject*                               InData;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortGridWidgetBase.SetTileWidth
struct UFortGridWidgetBase_SetTileWidth_Params
{
public:
	float                                        Width;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortGridWidgetBase.SetTilesDown
struct UFortGridWidgetBase_SetTilesDown_Params
{
public:
	int32                                        Down;                                              // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortGridWidgetBase.SetTilesAcross
struct UFortGridWidgetBase_SetTilesAcross_Params
{
public:
	int32                                        Across;                                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortGridWidgetBase.SetTilePadding
struct UFortGridWidgetBase_SetTilePadding_Params
{
public:
	struct FMargin                               Padding;                                           // 0x0(0x10)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortGridWidgetBase.SetTileHeight
struct UFortGridWidgetBase_SetTileHeight_Params
{
public:
	float                                        Height;                                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortGridWidgetBase.SetPeekOverflowTilePercentage
struct UFortGridWidgetBase_SetPeekOverflowTilePercentage_Params
{
public:
	float                                        Percent;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortGridWidgetBase.SetDataProvider
struct UFortGridWidgetBase_SetDataProvider_Params
{
public:
	TArray<class UObject*>                       Data;                                              // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortGridWidgetBase.SetClearWidgetType
struct UFortGridWidgetBase_SetClearWidgetType_Params
{
public:
	TSubclassOf<class UFortGridPickerTile>       InClearWidgetType;                                 // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortGridWidgetBase.GetTiles
struct UFortGridWidgetBase_GetTiles_Params
{
public:
	TArray<class UFortGridPickerTile*>           ReturnValue;                                       // 0x0(0x10)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortGridWidgetBase.GetTileForObject
struct UFortGridWidgetBase_GetTileForObject_Params
{
public:
	class UObject*                               Object;                                            // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortGridPickerTile*                   ReturnValue;                                       // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortGridPickerButton.SetIsOpen
struct UFortGridPickerButton_SetIsOpen_Params
{
public:
	bool                                         ShouldBeOpen;                                      // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// DelegateFunction FortniteUI.FortGridPickerButton.OnIsGridPickerOpenChanged__DelegateSignature
struct UFortGridPickerButton_OnIsGridPickerOpenChanged__DelegateSignature_Params
{
public:
	bool                                         IsOpen;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// DelegateFunction FortniteUI.FortGridPickerButton.CreateGridWidget__DelegateSignature
struct UFortGridPickerButton_CreateGridWidget__DelegateSignature_Params
{
public:
	class UFortGridPickerGrid*                   ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function FortniteUI.FortHeroManagementContext.SetHeroName
struct UFortHeroManagementContext_SetHeroName_Params
{
public:
	class FString                                NewName;                                           // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_200C[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function FortniteUI.FortHeroManagementContext.SetCurrentHero
struct UFortHeroManagementContext_SetCurrentHero_Params
{
public:
	class FString                                HeroId;                                            // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_200D[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function FortniteUI.FortHeroManagementContext.RequestSetTraitDepthFromID
struct UFortHeroManagementContext_RequestSetTraitDepthFromID_Params
{
public:
	class FString                                HeroId;                                            // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TraitIdx;                                          // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Depth;                                             // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_200E[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// Function FortniteUI.FortHeroManagementContext.RequestSetTraitDepth
struct UFortHeroManagementContext_RequestSetTraitDepth_Params
{
public:
	int32                                        TraitIdx;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Depth;                                             // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_200F[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function FortniteUI.FortHeroManagementContext.RequestCreateHero
struct UFortHeroManagementContext_RequestCreateHero_Params
{
public:
	class UFortHeroType*                         HeroType;                                          // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Name;                                              // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortCustomGender                 Gender;                                            // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x19(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2010[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function FortniteUI.FortHeroManagementContext.RedeemPrevAbilityFromID
struct UFortHeroManagementContext_RedeemPrevAbilityFromID_Params
{
public:
	class FString                                HeroId;                                            // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TraitIdx;                                          // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x14(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2011[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortHeroManagementContext.RedeemPrevAbility
struct UFortHeroManagementContext_RedeemPrevAbility_Params
{
public:
	int32                                        TraitIdx;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2012[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortHeroManagementContext.RedeemAllAbilitiesFromID
struct UFortHeroManagementContext_RedeemAllAbilitiesFromID_Params
{
public:
	class FString                                HeroId;                                            // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortHeroManagementContext.RedeemAllAbilities
struct UFortHeroManagementContext_RedeemAllAbilities_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function FortniteUI.FortHeroManagementContext.PurchaseNextAbilityFromID
struct UFortHeroManagementContext_PurchaseNextAbilityFromID_Params
{
public:
	class FString                                HeroId;                                            // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TraitIdx;                                          // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x14(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2013[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortHeroManagementContext.PurchaseNextAbility
struct UFortHeroManagementContext_PurchaseNextAbility_Params
{
public:
	int32                                        TraitIdx;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2014[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortHeroManagementContext.MarkHeroAsSeen
struct UFortHeroManagementContext_MarkHeroAsSeen_Params
{
public:
	class FString                                HeroId;                                            // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortHeroManagementContext.IsSkillTreeUnlocked
struct UFortHeroManagementContext_IsSkillTreeUnlocked_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortHeroManagementContext.IsShowingStatsScreen
struct UFortHeroManagementContext_IsShowingStatsScreen_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortHeroManagementContext.IsCreateHeroEnabled
struct UFortHeroManagementContext_IsCreateHeroEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortHeroManagementContext.GetXPRequiredForHeroLevel
struct UFortHeroManagementContext_GetXPRequiredForHeroLevel_Params
{
public:
	int32                                        HeroLevel;                                         // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function FortniteUI.FortHeroManagementContext.GetTraitDepthFromID
struct UFortHeroManagementContext_GetTraitDepthFromID_Params
{
public:
	class FString                                HeroId;                                            // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TraitIdx;                                          // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x14(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function FortniteUI.FortHeroManagementContext.GetTraitDepth
struct UFortHeroManagementContext_GetTraitDepth_Params
{
public:
	int32                                        TraitIdx;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Depth;                                             // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2015[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function FortniteUI.FortHeroManagementContext.GetNumUnspentAbilityPointsFromID
struct UFortHeroManagementContext_GetNumUnspentAbilityPointsFromID_Params
{
public:
	class FString                                HeroId;                                            // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2016[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortHeroManagementContext.GetNumUnspentAbilityPoints
struct UFortHeroManagementContext_GetNumUnspentAbilityPoints_Params
{
public:
	int32                                        NumAbilityPoints;                                  // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2017[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortHeroManagementContext.GetNumHeroTraits
struct UFortHeroManagementContext_GetNumHeroTraits_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function FortniteUI.FortHeroManagementContext.GetNextAbilityCostFromID
struct UFortHeroManagementContext_GetNextAbilityCostFromID_Params
{
public:
	class FString                                HeroId;                                            // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TraitIdx;                                          // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x14(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortHeroManagementContext.GetNextAbilityCost
struct UFortHeroManagementContext_GetNextAbilityCost_Params
{
public:
	int32                                        TraitIdx;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortHeroManagementContext.GetMaxNameLength
struct UFortHeroManagementContext_GetMaxNameLength_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortHeroManagementContext.GetHeroLevelAtXP
struct UFortHeroManagementContext_GetHeroLevelAtXP_Params
{
public:
	int32                                        Xp;                                                // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function FortniteUI.FortHeroManagementContext.GetHeroDataFromID
struct UFortHeroManagementContext_GetHeroDataFromID_Params
{
public:
	class FString                                HeroId;                                            // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHeroUIData                           ReturnValue;                                       // 0x10(0x20)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function FortniteUI.FortHeroManagementContext.GetHeroData
struct UFortHeroManagementContext_GetHeroData_Params
{
public:
	struct FHeroUIData                           HeroData;                                          // 0x0(0x20)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2018[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortHeroManagementContext.GetDisplayStats
struct UFortHeroManagementContext_GetDisplayStats_Params
{
public:
	TArray<struct FFortGameplayEffectModifierDescription> Stats;                                             // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function FortniteUI.FortHeroManagementContext.GetCurrentHeroID
struct UFortHeroManagementContext_GetCurrentHeroID_Params
{
public:
	class FString                                HeroId;                                            // 0x0(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2019[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortHeroManagementContext.GetCoreAbilities
struct UFortHeroManagementContext_GetCoreAbilities_Params
{
public:
	TArray<class UFortAbilityKit*>               ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function FortniteUI.FortHeroManagementContext.GetAttributeValuesArrayFromID
struct UFortHeroManagementContext_GetAttributeValuesArrayFromID_Params
{
public:
	class FString                                HeroId;                                            // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FGameplayAttribute>            Attributes;                                        // 0x10(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                Values;                                            // 0x20(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bUseProxy;                                         // 0x30(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x31(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_201A[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function FortniteUI.FortHeroManagementContext.GetAttributeValuesArray
struct UFortHeroManagementContext_GetAttributeValuesArray_Params
{
public:
	TArray<struct FGameplayAttribute>            Attributes;                                        // 0x0(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                Values;                                            // 0x10(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bUseProxy;                                         // 0x20(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x21(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_201B[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// Function FortniteUI.FortHeroManagementContext.GetAttributeValueFromID
struct UFortHeroManagementContext_GetAttributeValueFromID_Params
{
public:
	class FString                                HeroId;                                            // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayAttribute                    Attribute;                                         // 0x10(0x20)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseProxy;                                         // 0x30(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_201C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ReturnValue;                                       // 0x34(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function FortniteUI.FortHeroManagementContext.GetAttributeValue
struct UFortHeroManagementContext_GetAttributeValue_Params
{
public:
	struct FGameplayAttribute                    Attribute;                                         // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseProxy;                                         // 0x20(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_201D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ReturnValue;                                       // 0x24(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortHeroManagementContext.GetAllHeroIDs
struct UFortHeroManagementContext_GetAllHeroIDs_Params
{
public:
	TArray<class FString>                        ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortHeroManagementContext.GetAbilitySystemComponent
struct UFortHeroManagementContext_GetAbilitySystemComponent_Params
{
public:
	class UFortAbilitySystemComponent*           ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function FortniteUI.FortHeroManagementContext.GetAbilityCostFromID
struct UFortHeroManagementContext_GetAbilityCostFromID_Params
{
public:
	class FString                                HeroId;                                            // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TraitIdx;                                          // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TraitDepth;                                        // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x18(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_201E[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// Function FortniteUI.FortHeroManagementContext.GetAbilityCost
struct UFortHeroManagementContext_GetAbilityCost_Params
{
public:
	int32                                        TraitIdx;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TraitDepth;                                        // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function FortniteUI.FortHeroManagementContext.GenerateRandomHeroName
struct UFortHeroManagementContext_GenerateRandomHeroName_Params
{
public:
	class UDataTable*                            NameTable;                                         // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Name;                                              // 0x8(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortHeroManagementContext.FocusOnHero
struct UFortHeroManagementContext_FocusOnHero_Params
{
public:
	class FString                                HeroId;                                            // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function FortniteUI.FortHeroManagementContext.CheckHeroNameValidity
struct UFortHeroManagementContext_CheckHeroNameValidity_Params
{
public:
	class FString                                Name;                                              // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENameStatus                       ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_201F[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortHeroManagementContext.CanRedeemAllAbilities
struct UFortHeroManagementContext_CanRedeemAllAbilities_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function FortniteUI.FortHeroManagementContext.CanModifyTraitDepthFromID
struct UFortHeroManagementContext_CanModifyTraitDepthFromID_Params
{
public:
	class FString                                HeroId;                                            // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TraitIdx;                                          // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x14(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2020[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortHeroManagementContext.CanModifyTraitDepth
struct UFortHeroManagementContext_CanModifyTraitDepth_Params
{
public:
	int32                                        TraitIdx;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2021[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function FortniteUI.FortHeroManagementContext.CanAffordNextAbilityFromID
struct UFortHeroManagementContext_CanAffordNextAbilityFromID_Params
{
public:
	class FString                                HeroId;                                            // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TraitIdx;                                          // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x14(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2022[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortHeroManagementContext.CanAffordNextAbility
struct UFortHeroManagementContext_CanAffordNextAbility_Params
{
public:
	int32                                        TraitIdx;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2023[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function FortniteUI.FortHeroManagementContext.CanAffordAbilityFromID
struct UFortHeroManagementContext_CanAffordAbilityFromID_Params
{
public:
	class FString                                HeroId;                                            // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TraitIdx;                                          // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TraitDepth;                                        // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2024[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// Function FortniteUI.FortHeroManagementContext.CanAffordAbility
struct UFortHeroManagementContext_CanAffordAbility_Params
{
public:
	int32                                        TraitIdx;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TraitDepth;                                        // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2025[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x3 (0x3 - 0x0)
// Function FortniteUI.FortHeroNotificationHandler.OnFortItemUpdated
struct UFortHeroNotificationHandler_OnFortItemUpdated_Params
{
public:
	bool                                         bItemChanged;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAmmoChanged;                                      // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIngredientsChanged;                               // 0x2(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortHeroSupportPerkWidget.SetSupportTypeToRepresent
struct UFortHeroSupportPerkWidget_SetSupportTypeToRepresent_Params
{
public:
	enum class EFortSupportBonusType             InSupportTypeToRepresent;                          // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortHeroSupportPerkWidget.SetState
struct UFortHeroSupportPerkWidget_SetState_Params
{
public:
	enum class EFortSupportPerkWidgetState       InState;                                           // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortHeroSupportPerkWidget.SetHeroToRepresent
struct UFortHeroSupportPerkWidget_SetHeroToRepresent_Params
{
public:
	class UFortHero*                             InHeroToRepresent;                                 // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortHeroSupportPerkWidget.IsPerkUnlocked
struct UFortHeroSupportPerkWidget_IsPerkUnlocked_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortHeroSupportPerkWidget.IsPerkInCorrectSlot
struct UFortHeroSupportPerkWidget_IsPerkInCorrectSlot_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortHeroSupportPerkWidget.IsPerkHighlighted
struct UFortHeroSupportPerkWidget_IsPerkHighlighted_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortHeroSupportPerkWidget.IsPerkEmpty
struct UFortHeroSupportPerkWidget_IsPerkEmpty_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortHeroSupportPerkWidget.IsPerkActive
struct UFortHeroSupportPerkWidget_IsPerkActive_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function FortniteUI.FortHomebaseNodeItemUtilities.TryGetHomebaseNodeState
struct UFortHomebaseNodeItemUtilities_TryGetHomebaseNodeState_Params
{
public:
	class UWidget*                               Widget;                                            // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  NodeID;                                            // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHomebaseNodeState                    OutNodeState;                                      // 0x10(0x8)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_202B[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function FortniteUI.FortHomebaseNodeItemUtilities.IsSquadSlotUnseen
struct UFortHomebaseNodeItemUtilities_IsSquadSlotUnseen_Params
{
public:
	class AFortPlayerController*                 FortPC;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SquadId;                                           // 0x8(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SquadSlot;                                         // 0x10(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x14(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_202C[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function FortniteUI.FortHomebaseNodeItemUtilities.IsHomebaseNodeItemUnseenForTagContainer
struct UFortHomebaseNodeItemUtilities_IsHomebaseNodeItemUnseenForTagContainer_Params
{
public:
	class AFortPlayerController*                 FortPC;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 Tags;                                              // 0x8(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x28(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_202D[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortHomebaseNodeItemUtilities.GetHomebaseNodePageNames
struct UFortHomebaseNodeItemUtilities_GetHomebaseNodePageNames_Params
{
public:
	TArray<class FName>                          NodePages;                                         // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function FortniteUI.FortHomebaseNodeItemUtilities.GetHomebaseNodeItems
struct UFortHomebaseNodeItemUtilities_GetHomebaseNodeItems_Params
{
public:
	class AFortPlayerController*                 FortPC;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UFortHomebaseNodeItem*>         NodeItems;                                         // 0x8(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function FortniteUI.FortHomebaseNodeItemUtilities.GetHomebaseNodeItemNameForTagContainer
struct UFortHomebaseNodeItemUtilities_GetHomebaseNodeItemNameForTagContainer_Params
{
public:
	class AFortPlayerController*                 FortPC;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 Tags;                                              // 0x8(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FName                                  ReturnValue;                                       // 0x28(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function FortniteUI.FortHomebaseNodeItemUtilities.GetHomebaseNodeItemForTagContainer
struct UFortHomebaseNodeItemUtilities_GetHomebaseNodeItemForTagContainer_Params
{
public:
	class AFortPlayerController*                 FortPC;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 Tags;                                              // 0x8(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UFortHomebaseNodeItem*                 ReturnValue;                                       // 0x28(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function FortniteUI.FortHomebaseNodeItemUtilities.GetHomebaseNodeItemForSquadSlot
struct UFortHomebaseNodeItemUtilities_GetHomebaseNodeItemForSquadSlot_Params
{
public:
	class AFortPlayerController*                 FortPC;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SquadId;                                           // 0x8(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SquadSlot;                                         // 0x10(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_202E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortHomebaseNodeItem*                 ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function FortniteUI.FortHomebaseNodeItemUtilities.GetHomebaseNodeItem
struct UFortHomebaseNodeItemUtilities_GetHomebaseNodeItem_Params
{
public:
	class AFortPlayerController*                 FortPC;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  NodeID;                                            // 0x8(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortHomebaseNodeItem*                 ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortHomebaseNodeItemUtilities.AreAnyHomebaseNodeItemsUnseenForSquadType
struct UFortHomebaseNodeItemUtilities_AreAnyHomebaseNodeItemsUnseenForSquadType_Params
{
public:
	class AFortPlayerController*                 FortPC;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortHomebaseSquadType            SquadType;                                         // 0x8(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x9(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_202F[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function FortniteUI.FortHomebaseNodeItemUtilities.AreAnyHomebaseNodeItemsUnseenForSquadId
struct UFortHomebaseNodeItemUtilities_AreAnyHomebaseNodeItemsUnseenForSquadId_Params
{
public:
	class AFortPlayerController*                 FortPC;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SquadId;                                           // 0x8(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2030[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortHomebaseUIContext.SetShowHeroHeadAccessoriesInClientSettingsRecord
struct UFortHomebaseUIContext_SetShowHeroHeadAccessoriesInClientSettingsRecord_Params
{
public:
	bool                                         bShow;                                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortHomebaseUIContext.SetShowHeroHeadAccessoriesForLocalPlayer
struct UFortHomebaseUIContext_SetShowHeroHeadAccessoriesForLocalPlayer_Params
{
public:
	bool                                         bShow;                                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortHomebaseUIContext.SetShowHeroBackpackInClientSettingsRecord
struct UFortHomebaseUIContext_SetShowHeroBackpackInClientSettingsRecord_Params
{
public:
	bool                                         bShow;                                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortHomebaseUIContext.SetShowHeroBackpackForLocalPlayer
struct UFortHomebaseUIContext_SetShowHeroBackpackForLocalPlayer_Params
{
public:
	bool                                         bShow;                                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// DelegateFunction FortniteUI.FortHomebaseUIContext.OnSquadSlotChanged__DelegateSignature
struct UFortHomebaseUIContext_OnSquadSlotChanged__DelegateSignature_Params
{
public:
	class FName                                  SquadName;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SlotIndex;                                         // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2031[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// DelegateFunction FortniteUI.FortHomebaseUIContext.OnNodesPurchased__DelegateSignature
struct UFortHomebaseUIContext_OnNodesPurchased__DelegateSignature_Params
{
public:
	class FName                                  NodeID;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortHomebaseUIContext.IsInEarlyGame
struct UFortHomebaseUIContext_IsInEarlyGame_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortHomebaseUIContext.IsAnySquadSlotUnlocked
struct UFortHomebaseUIContext_IsAnySquadSlotUnlocked_Params
{
public:
	class FName                                  SquadId;                                           // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2032[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function FortniteUI.FortHomebaseUIContext.GetWorkerSetBonusEffectModifiers
struct UFortHomebaseUIContext_GetWorkerSetBonusEffectModifiers_Params
{
public:
	struct FGameplayTag                          SetBonusTag;                                       // 0x0(0x8)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FFortAttributeModifierDisplayData> OutModifiers;                                      // 0x8(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x368 (0x368 - 0x0)
// Function FortniteUI.FortHomebaseUIContext.GetSquadIcon
struct UFortHomebaseUIContext_GetSquadIcon_Params
{
public:
	class FName                                  SquadId;                                           // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortMultiSizeBrush                   ReturnValue;                                       // 0x8(0x360)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortHomebaseUIContext.GetShowHeroHeadAccessoriesForLocalPlayer
struct UFortHomebaseUIContext_GetShowHeroHeadAccessoriesForLocalPlayer_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortHomebaseUIContext.GetShowHeroBackpackForLocalPlayer
struct UFortHomebaseUIContext_GetShowHeroBackpackForLocalPlayer_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortHomebaseUIContext.GetRootSkillTreePageId
struct UFortHomebaseUIContext_GetRootSkillTreePageId_Params
{
public:
	class FName                                  ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortHomebaseUIContext.GetRootSkillTreeNodeId
struct UFortHomebaseUIContext_GetRootSkillTreeNodeId_Params
{
public:
	class FName                                  ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function FortniteUI.FortHomebaseUIContext.GetQuestNodeColour
struct UFortHomebaseUIContext_GetQuestNodeColour_Params
{
public:
	struct FSlateColor                           ReturnValue;                                       // 0x0(0x28)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function FortniteUI.FortHomebaseUIContext.GetNodeTagBonusesForDisplay
struct UFortHomebaseUIContext_GetNodeTagBonusesForDisplay_Params
{
public:
	class FName                                  NodeID;                                            // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FFortTagUIData>                OutGrantedTagsUIData;                              // 0x8(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2033[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function FortniteUI.FortHomebaseUIContext.GetNodeDescription
struct UFortHomebaseUIContext_GetNodeDescription_Params
{
public:
	class FName                                  NodeID;                                            // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  OutDescription;                                    // 0x8(0x18)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2034[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function FortniteUI.FortHomebaseUIContext.GetNodeAttributeBonusesForDisplay
struct UFortHomebaseUIContext_GetNodeAttributeBonusesForDisplay_Params
{
public:
	class FName                                  NodeID;                                            // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FFortDisplayAttribute>         OutDisplayAttributes;                              // 0x8(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2035[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortHomebaseUIContext.GetLocalPlayerHasHeroHeadAccessories
struct UFortHomebaseUIContext_GetLocalPlayerHasHeroHeadAccessories_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortHomebaseUIContext.GetLocalPlayerHasHeroBackpack
struct UFortHomebaseUIContext_GetLocalPlayerHasHeroBackpack_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function FortniteUI.FortHomebaseUIContext.GetItemsInSquad
struct UFortHomebaseUIContext_GetItemsInSquad_Params
{
public:
	class FName                                  SquadId;                                           // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRemoveEmptySquadSlots;                            // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2036[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UFortItem*>                     ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function FortniteUI.FortHomebaseUIContext.GetItemInSquadSlot
struct UFortHomebaseUIContext_GetItemInSquadSlot_Params
{
public:
	class FName                                  SquadName;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SlotIndex;                                         // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2037[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortItem*                             ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortHomebaseUIContext.GetEarlyGameRootSkillTreePageId
struct UFortHomebaseUIContext_GetEarlyGameRootSkillTreePageId_Params
{
public:
	class FName                                  ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortHomebaseUIContext.GetEarlyGameRootSkillTreeNodeId
struct UFortHomebaseUIContext_GetEarlyGameRootSkillTreeNodeId_Params
{
public:
	class FName                                  ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortHomebaseUIContext.GetEarlyGameNodeProgressionState
struct UFortHomebaseUIContext_GetEarlyGameNodeProgressionState_Params
{
public:
	int32                                        OutOwnedNodeCount;                                 // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OutRequiredNodeCountToLeaveEarlyGame;              // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortHomebaseUIContext.GetEarlyGameNodePageId
struct UFortHomebaseUIContext_GetEarlyGameNodePageId_Params
{
public:
	class FName                                  ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortHomeCMSScreenBase.AreTilesLoaded
struct UFortHomeCMSScreenBase_AreTilesLoaded_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortHUDCenterPopupMessageWidget.OnModalDisplayed
struct UFortHUDCenterPopupMessageWidget_OnModalDisplayed_Params
{
public:
	enum class ECenterPopupMessageStateEnum      NewState;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2039[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonActivatablePanel*               ModalPopup;                                        // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortHUDCenterPopupMessageWidget.GetCenterPopupMessageState
struct UFortHUDCenterPopupMessageWidget_GetCenterPopupMessageState_Params
{
public:
	enum class ECenterPopupMessageStateEnum      ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortHUDContext.ShouldOnlyShowNextPrevBuildingSlotKeybinds
struct UFortHUDContext_ShouldOnlyShowNextPrevBuildingSlotKeybinds_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortHUDContext.SetIndicatorsState
struct UFortHUDContext_SetIndicatorsState_Params
{
public:
	enum class EFortIndicatorState               NewState;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortHUDContext.SetIndicatorsAllowed
struct UFortHUDContext_SetIndicatorsAllowed_Params
{
public:
	bool                                         bIndicatorsAllowed;                                // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function FortniteUI.FortHUDContext.SetHUDElementVisibility
struct UFortHUDContext_SetHUDElementVisibility_Params
{
public:
	struct FGameplayTagContainer                 HUDElementTags;                                    // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         bHideElements;                                     // 0x20(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_203B[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortHUDContext.SetCursorModeLocked
struct UFortHUDContext_SetCursorModeLocked_Params
{
public:
	bool                                         bLocked;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortHUDContext.RequestMgmtMenuTab
struct UFortHUDContext_RequestMgmtMenuTab_Params
{
public:
	class FName                                  TabName;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortHUDContext.RemovePointOfInterest
struct UFortHUDContext_RemovePointOfInterest_Params
{
public:
	class AActor*                                PointOfInterest;                                   // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortHUDContext.IsInCursorMode
struct UFortHUDContext_IsInCursorMode_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function FortniteUI.FortHUDContext.HandleLocalPawnDied
struct UFortHUDContext_HandleLocalPawnDied_Params
{
public:
	struct FFortPlayerDeathReport                DeathReport;                                       // 0x0(0x50)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortHUDContext.GetTeamCornerstone
struct UFortHUDContext_GetTeamCornerstone_Params
{
public:
	enum class EFortTeam                         Team;                                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_203C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPvPBaseCornerstone*               ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortHUDContext.GetScoreDisplayFactor
struct UFortHUDContext_GetScoreDisplayFactor_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortHUDContext.GetPotentialBadges
struct UFortHUDContext_GetPotentialBadges_Params
{
public:
	TArray<struct FFortBadgeCount>               ReturnValue;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortHUDContext.GetPlayerStateZone
struct UFortHUDContext_GetPlayerStateZone_Params
{
public:
	class AFortPlayerStateZone*                  ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function FortniteUI.FortHUDContext.GetMissionRewards
struct UFortHUDContext_GetMissionRewards_Params
{
public:
	TArray<class UFortItem*>                     MissionRewards;                                    // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UFortItem*>                     MissionAlertRewards;                               // 0x10(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortHUDContext.GetMissionOverviewObjectives
struct UFortHUDContext_GetMissionOverviewObjectives_Params
{
public:
	TArray<struct FZoneLoadingScreenHeadingConfig> ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortHUDContext.GetMissionManager
struct UFortHUDContext_GetMissionManager_Params
{
public:
	class AFortMissionManager*                   ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xF8 (0xF8 - 0x0)
// Function FortniteUI.FortHUDContext.GetKillerVisualInfoFromDeathReport
struct UFortHUDContext_GetKillerVisualInfoFromDeathReport_Params
{
public:
	struct FFortPlayerDeathReport                DeathReport;                                       // 0x0(0x50)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FFortKillerVisualInfo                 ReturnValue;                                       // 0x50(0xA8)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortHUDContext.GetIndicatorsState
struct UFortHUDContext_GetIndicatorsState_Params
{
public:
	enum class EFortIndicatorState               ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortHUDContext.GetGameStateZone
struct UFortHUDContext_GetGameStateZone_Params
{
public:
	class AFortGameStateZone*                    ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortHUDContext.GetFocusedMission
struct UFortHUDContext_GetFocusedMission_Params
{
public:
	class AFortMission*                          ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function FortniteUI.FortHUDContext.GetFocusedBuildingInfo
struct UFortHUDContext_GetFocusedBuildingInfo_Params
{
public:
	struct FFortFocusedBuildingInfo              OutBuildingInfo;                                   // 0x0(0x50)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x50(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_203D[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortHUDContext.GetEarnedBadges
struct UFortHUDContext_GetEarnedBadges_Params
{
public:
	TArray<struct FEarnedBadgeEntry>             ReturnValue;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortHUDContext.GetCurrentHero
struct UFortHUDContext_GetCurrentHero_Params
{
public:
	class UFortHero*                             ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x3C0 (0x3C0 - 0x0)
// Function FortniteUI.FortHUDContext.GetCurrentBasicMissionInfo
struct UFortHUDContext_GetCurrentBasicMissionInfo_Params
{
public:
	struct FFortBasicMissionInfo                 BasicMissionInfo;                                  // 0x0(0x3B8)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x3B8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_203E[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortHUDContext.GetBluGloManager
struct UFortHUDContext_GetBluGloManager_Params
{
public:
	class AFortBluGloManager*                    ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortHUDContext.ForwardOnWeaponEquipped
struct UFortHUDContext_ForwardOnWeaponEquipped_Params
{
public:
	class AFortWeapon*                           NewWeapon;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AFortWeapon*                           PrevWeapon;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortHUDContext.ForwardOnNumSurvivorsRescuedChanged
struct UFortHUDContext_ForwardOnNumSurvivorsRescuedChanged_Params
{
public:
	int32                                        NumSurvivorsRescued;                               // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortHUDContext.EnterCursorMode
struct UFortHUDContext_EnterCursorMode_Params
{
public:
	class FName                                  ActionName;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UUserWidget*                           CursorModeWidget;                                  // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortHUDContext.AreIndicatorsEnabled
struct UFortHUDContext_AreIndicatorsEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function FortniteUI.FortHUDContext.AreHUDElementsVisible
struct UFortHUDContext_AreHUDElementsVisible_Params
{
public:
	struct FGameplayTagContainer                 HUDElementTags;                                    // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_203F[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function FortniteUI.FortHUDContext.AddPointOfInterest
struct UFortHUDContext_AddPointOfInterest_Params
{
public:
	class AActor*                                PointOfInterest;                                   // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  DisplayText;                                       // 0x8(0x18)(Parm, NativeAccessSpecifierPublic)
	class UTexture2D*                            DisplayImage;                                      // 0x20(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function FortniteUI.AthenaHUDGamePhaseChangingBase.UpdateMessaging
struct UAthenaHUDGamePhaseChangingBase_UpdateMessaging_Params
{
public:
	enum class EAthenaGamePhaseStep              Step;                                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2045[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  MESSAGE;                                           // 0x8(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FText                                  TimeText;                                          // 0x20(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.AthenaHUDGamePhaseChangingBase.HandleGamePhaseStepChanged
struct UAthenaHUDGamePhaseChangingBase_HandleGamePhaseStepChanged_Params
{
public:
	enum class EAthenaGamePhaseStep              Step;                                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.AthenaHUDGamePhaseChangingBase.GamePhaseStepChanged
struct UAthenaHUDGamePhaseChangingBase_GamePhaseStepChanged_Params
{
public:
	enum class EAthenaGamePhaseStep              Step;                                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function FortniteUI.AthenaHUDPlayerActionAlertBase.AlertPlayer
struct UAthenaHUDPlayerActionAlertBase_AlertPlayer_Params
{
public:
	enum class EAthenaPlayerActionAlert          Alert;                                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2046[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  DetailText;                                        // 0x8(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortCraftingBarWidget.SetHideCraftingBar
struct UFortCraftingBarWidget_SetHideCraftingBar_Params
{
public:
	bool                                         bInHideCraftBar;                                   // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function FortniteUI.FortCraftingBarWidget.HandlePlayerStoppedCrafting
struct UFortCraftingBarWidget_HandlePlayerStoppedCrafting_Params
{
public:
	bool                                         bSuccess;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortCraftFailCause               CraftFailureCause;                                 // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortHUDObjectiveSizeInterface.GetHeightEstimate
struct IFortHUDObjectiveSizeInterface_GetHeightEstimate_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortMissionTrackerList.HandleSizeEstimateChanged
struct UFortMissionTrackerList_HandleSizeEstimateChanged_Params
{
public:
	class UObject*                               ChangedElement;                                    // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortQuestTrackerList.HandleSizeEstimateChanged
struct UFortQuestTrackerList_HandleSizeEstimateChanged_Params
{
public:
	class UObject*                               ChangedElement;                                    // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortQuestTrackerList.HandleQuestEntryCreated
struct UFortQuestTrackerList_HandleQuestEntryCreated_Params
{
public:
	class UUserWidget*                           Widget;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortQuestTrackerList.HandleHUDFinalObjectiveHidden
struct UFortQuestTrackerList_HandleHUDFinalObjectiveHidden_Params
{
public:
	class UFortQuestItem*                        QuestItem;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortQuestTrackerList.GetQuestsToDisplay
struct UFortQuestTrackerList_GetQuestsToDisplay_Params
{
public:
	TArray<class UFortQuestItem*>                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortMissionTracker.HandleSizeEstimateChanged
struct UFortMissionTracker_HandleSizeEstimateChanged_Params
{
public:
	class UObject*                               ChangedElement;                                    // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortMissionTracker.HandleDebugHUDObjectiveHeightChanged
struct UFortMissionTracker_HandleDebugHUDObjectiveHeightChanged_Params
{
public:
	bool                                         bIsDebugging;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortReticle.OnWeaponEquipped
struct UFortReticle_OnWeaponEquipped_Params
{
public:
	class AFortWeapon*                           NewWeapon;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AFortWeapon*                           PrevWeapon;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortHUDTargetUnderReticleWidget.HandleOnHUDTargetUnderReticle
struct UFortHUDTargetUnderReticleWidget_HandleOnHUDTargetUnderReticle_Params
{
public:
	TScriptInterface<class IFortHUDTargetUnderReticleInterface> NewTarget;                                         // 0x0(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortHeroSupportPerkIndicator.SetSupportTypeToRepresent
struct UFortHeroSupportPerkIndicator_SetSupportTypeToRepresent_Params
{
public:
	enum class EFortSupportBonusType             SupportTypeToRepresent;                            // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortHeroSupportPerkIndicator.SetItemToRepresent
struct UFortHeroSupportPerkIndicator_SetItemToRepresent_Params
{
public:
	class UFortItem*                             ItemToRepresent;                                   // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortItemCategoryIndicator.SetOrdinalOfCategoryToRepresent
struct UFortItemCategoryIndicator_SetOrdinalOfCategoryToRepresent_Params
{
public:
	enum class EFortItemCategoryOrdinal          ItemCategoryOrdinal;                               // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortItemCategoryIndicator.SetItemToRepresent
struct UFortItemCategoryIndicator_SetItemToRepresent_Params
{
public:
	class UFortItem*                             ItemToRepresent;                                   // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function FortniteUI.FortInventoryContext.WillQuickBarAcceptItem
struct UFortInventoryContext_WillQuickBarAcceptItem_Params
{
public:
	class UFortItem*                             Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortQuickBars                    InQuickBar;                                        // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2059[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Slot;                                              // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_205A[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortInventoryContext.UnlockSchematic
struct UFortInventoryContext_UnlockSchematic_Params
{
public:
	class UFortSchematicItemDefinition*          SchematicDefinition;                               // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function FortniteUI.FortInventoryContext.SortAccountItemArrayForTransmog
struct UFortInventoryContext_SortAccountItemArrayForTransmog_Params
{
public:
	TArray<class UFortAccountItem*>              VaultItems;                                        // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<class UFortAccountItem*>              SortedItems;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortInventoryContext.SetSchematicPinned
struct UFortInventoryContext_SetSchematicPinned_Params
{
public:
	class UFortSchematicItem*                    Schematic;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x9(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_205B[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortInventoryContext.RemoveItemFromQuickBar
struct UFortInventoryContext_RemoveItemFromQuickBar_Params
{
public:
	class UFortItem*                             Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_205C[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// Function FortniteUI.FortInventoryContext.MakeItemQuantityPair
struct UFortInventoryContext_MakeItemQuantityPair_Params
{
public:
	class UFortItemDefinition*                   ItemDefinition;                                    // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ItemQuantity;                                      // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_205D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortItemQuantityPair                 ReturnValue;                                       // 0x10(0x28)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortInventoryContext.IsTrapAvailableForBuilding
struct UFortInventoryContext_IsTrapAvailableForBuilding_Params
{
public:
	class ABuildingSMActor*                      Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_205E[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// Function FortniteUI.FortInventoryContext.IsSlotHidden
struct UFortInventoryContext_IsSlotHidden_Params
{
public:
	enum class EFortQuickBars                    InQuickBar;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_205F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Slot;                                              // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2060[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortInventoryContext.IsSchematicPinned
struct UFortInventoryContext_IsSchematicPinned_Params
{
public:
	class UFortSchematicItem*                    Schematic;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2061[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function FortniteUI.FortInventoryContext.IsRecyclable
struct UFortInventoryContext_IsRecyclable_Params
{
public:
	class UFortItem*                             Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  Reason;                                            // 0x8(0x18)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2062[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortInventoryContext.HasTrapReadyForBuilding
struct UFortInventoryContext_HasTrapReadyForBuilding_Params
{
public:
	class ABuildingSMActor*                      BuildingToAttachTo;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2063[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function FortniteUI.FortInventoryContext.HasGameplayTagContainerExact
struct UFortInventoryContext_HasGameplayTagContainerExact_Params
{
public:
	struct FGameplayTagContainer                 GameplayTagContainer;                              // 0x0(0x20)(Parm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2064[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function FortniteUI.FortInventoryContext.HasGameplayTagContainer
struct UFortInventoryContext_HasGameplayTagContainer_Params
{
public:
	struct FGameplayTagContainer                 GameplayTagContainer;                              // 0x0(0x20)(Parm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2065[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortInventoryContext.HasEvolutions
struct UFortInventoryContext_HasEvolutions_Params
{
public:
	class UFortItem*                             Item;                                              // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2066[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function FortniteUI.FortInventoryContext.GetWorldItemListForDeployableBaseThePlayerIsIn
struct UFortInventoryContext_GetWorldItemListForDeployableBaseThePlayerIsIn_Params
{
public:
	TArray<class UFortWorldItem*>                Items;                                             // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FFortItemListFilter                   FilterSettings;                                    // 0x10(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function FortniteUI.FortInventoryContext.GetWorldItemList
struct UFortInventoryContext_GetWorldItemList_Params
{
public:
	TArray<class UFortWorldItem*>                Items;                                             // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FFortItemListFilter                   FilterSettings;                                    // 0x10(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortInventoryContext.GetVoucherResourceItemDefinition
struct UFortInventoryContext_GetVoucherResourceItemDefinition_Params
{
public:
	class UFortPersistentResourceItemDefinition* ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortInventoryContext.GetVaultItemLimitStatus
struct UFortInventoryContext_GetVaultItemLimitStatus_Params
{
public:
	enum class EVaultItemLimitStatus             ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortInventoryContext.GetVaultItemLimit
struct UFortInventoryContext_GetVaultItemLimit_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function FortniteUI.FortInventoryContext.GetUserFriendlyTags
struct UFortInventoryContext_GetUserFriendlyTags_Params
{
public:
	class UFortItem*                             Item;                                              // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FText>                          ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function FortniteUI.FortInventoryContext.GetTrapAttachTypeName
struct UFortInventoryContext_GetTrapAttachTypeName_Params
{
public:
	class ABuildingSMActor*                      Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  ReturnValue;                                       // 0x8(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function FortniteUI.FortInventoryContext.GetTransmogSacrificeDataFromItemDefintion
struct UFortInventoryContext_GetTransmogSacrificeDataFromItemDefintion_Params
{
public:
	class UFortItemDefinition*                   ItemDefinition;                                    // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransmogSacrifice                    OutTransmogData;                                   // 0x8(0x10)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2067[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function FortniteUI.FortInventoryContext.GetTransformKeys
struct UFortInventoryContext_GetTransformKeys_Params
{
public:
	enum class EConversionControlKeyRequest      RequestType;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EInventoryContentSortType         SortType;                                          // 0x1(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2068[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UFortAccountItem*>              TransformKeys;                                     // 0x8(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortInventoryContext.GetTotalItemQuantityByDefinition
struct UFortInventoryContext_GetTotalItemQuantityByDefinition_Params
{
public:
	class UFortItemDefinition*                   ItemDefinition;                                    // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2069[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function FortniteUI.FortInventoryContext.GetTierText
struct UFortInventoryContext_GetTierText_Params
{
public:
	enum class EFortItemTier                     Tier;                                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_206A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ReturnValue;                                       // 0x8(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function FortniteUI.FortInventoryContext.GetSupportBonusPerks
struct UFortInventoryContext_GetSupportBonusPerks_Params
{
public:
	class UFortHero*                             Hero;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FFortUIPerk>                   SupportBonusPerks;                                 // 0x8(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_206B[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortInventoryContext.GetStorageNumItems
struct UFortInventoryContext_GetStorageNumItems_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortInventoryContext.GetStorageCapacity
struct UFortInventoryContext_GetStorageCapacity_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortInventoryContext.GetSchematicResourceItemDefinition
struct UFortInventoryContext_GetSchematicResourceItemDefinition_Params
{
public:
	class UFortPersistentResourceItemDefinition* ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function FortniteUI.FortInventoryContext.GetSchematicItemList
struct UFortInventoryContext_GetSchematicItemList_Params
{
public:
	TArray<class UFortSchematicItem*>            Items;                                             // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FFortItemListFilter                   FilterSettings;                                    // 0x10(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortInventoryContext.GetResourceItemDefinition
struct UFortInventoryContext_GetResourceItemDefinition_Params
{
public:
	enum class EFortResourceType                 ResourceType;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_206C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortResourceItemDefinition*           ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortInventoryContext.GetResourceIcon
struct UFortInventoryContext_GetResourceIcon_Params
{
public:
	enum class EFortResourceType                 ResourceType;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_206D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortInventoryContext.GetResourceCount
struct UFortInventoryContext_GetResourceCount_Params
{
public:
	enum class EFortResourceType                 ResourceType;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_206E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function FortniteUI.FortInventoryContext.GetRecyclingWarningText
struct UFortInventoryContext_GetRecyclingWarningText_Params
{
public:
	enum class EItemRecyclingWarning             Warning;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         WereAnyItemsAnimate;                               // 0x1(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_206F[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ReturnValue;                                       // 0x8(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function FortniteUI.FortInventoryContext.GetRecyclingCatalystDisplayName
struct UFortInventoryContext_GetRecyclingCatalystDisplayName_Params
{
public:
	class UFortItem*                             Item;                                              // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  ReturnValue;                                       // 0x8(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function FortniteUI.FortInventoryContext.GetRecycleRestrictionReasonText
struct UFortInventoryContext_GetRecycleRestrictionReasonText_Params
{
public:
	enum class EItemRecyclingRestrictionReason   Reason;                                            // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2070[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ReturnValue;                                       // 0x8(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortInventoryContext.GetQuickBarSlottedItem
struct UFortInventoryContext_GetQuickBarSlottedItem_Params
{
public:
	enum class EFortQuickBars                    InQuickBar;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2071[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Slot;                                              // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortItem*                             ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortInventoryContext.GetQuickbarFocus
struct UFortInventoryContext_GetQuickbarFocus_Params
{
public:
	enum class EFortQuickBars                    OutQuickBar;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2072[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        OutSlot;                                           // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OutSecondarySlot;                                  // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OutPreviousFocusedSlot;                            // 0xC(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortInventoryContext.GetPinnedSchematicList
struct UFortInventoryContext_GetPinnedSchematicList_Params
{
public:
	TArray<class UFortSchematicItem*>            PinnedItems;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortInventoryContext.GetPersonnelResourceItemDefinition
struct UFortInventoryContext_GetPersonnelResourceItemDefinition_Params
{
public:
	class UFortPersistentResourceItemDefinition* ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortInventoryContext.GetNumInInventory
struct UFortInventoryContext_GetNumInInventory_Params
{
public:
	class UFortItemDefinition*                   ItemDefinition;                                    // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIncludeReserved;                                  // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2073[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ReturnValue;                                       // 0xC(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortInventoryContext.GetItemTierRecyclingWarningThreshold
struct UFortInventoryContext_GetItemTierRecyclingWarningThreshold_Params
{
public:
	enum class EFortItemTier                     ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortInventoryContext.GetItemRarityRecyclingWarningThreshold
struct UFortInventoryContext_GetItemRarityRecyclingWarningThreshold_Params
{
public:
	enum class EFortRarity                       ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortInventoryContext.GetItemLevelRecyclingWarningThreshold
struct UFortInventoryContext_GetItemLevelRecyclingWarningThreshold_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function FortniteUI.FortInventoryContext.GetItemInstancesByDefinition
struct UFortInventoryContext_GetItemInstancesByDefinition_Params
{
public:
	class UFortItemDefinition*                   ItemDefinition;                                    // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UFortItem*>                     Items;                                             // 0x8(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortInventoryContext.GetHomebaseUnlockedTransmogKeys
struct UFortInventoryContext_GetHomebaseUnlockedTransmogKeys_Params
{
public:
	TArray<class UFortAccountItem*>              TransmogKeys;                                      // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortInventoryContext.GetHeroResourceItemDefinition
struct UFortInventoryContext_GetHeroResourceItemDefinition_Params
{
public:
	class UFortPersistentResourceItemDefinition* ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function FortniteUI.FortInventoryContext.GetHeroAbilityPerks
struct UFortInventoryContext_GetHeroAbilityPerks_Params
{
public:
	class UFortHero*                             Hero;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FFortUIPerk>                   HeroAbilityPerks;                                  // 0x8(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2074[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// Function FortniteUI.FortInventoryContext.GetGameplayTagByIndex
struct UFortInventoryContext_GetGameplayTagByIndex_Params
{
public:
	struct FGameplayTagContainer                 GameplayTagContainer;                              // 0x0(0x20)(Parm, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2075[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          Result;                                            // 0x28(0x8)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x30(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2076[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function FortniteUI.FortInventoryContext.GetEvolveRestrictionReasonText
struct UFortInventoryContext_GetEvolveRestrictionReasonText_Params
{
public:
	enum class EItemEvolutionRestrictionReason   Reason;                                            // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2077[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ReturnValue;                                       // 0x8(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortInventoryContext.GetEquippedWeapon
struct UFortInventoryContext_GetEquippedWeapon_Params
{
public:
	class AFortWeapon*                           ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function FortniteUI.FortInventoryContext.GetDisassembleRestrictionReasonText
struct UFortInventoryContext_GetDisassembleRestrictionReasonText_Params
{
public:
	enum class EItemDisassembleRestrictionReason Reason;                                            // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2078[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ReturnValue;                                       // 0x8(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function FortniteUI.FortInventoryContext.GetDeployableBaseItemCounts
struct UFortInventoryContext_GetDeployableBaseItemCounts_Params
{
public:
	int32                                        ItemsCount;                                        // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxItemsCount;                                     // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OverflowItemsCount;                                // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortInventoryContext.GetCurrentResourceItemDefinition
struct UFortInventoryContext_GetCurrentResourceItemDefinition_Params
{
public:
	class UFortResourceItemDefinition*           ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortInventoryContext.GetCurrentResourceCount
struct UFortInventoryContext_GetCurrentResourceCount_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortInventoryContext.GetCurrentAmmoItemDefinition
struct UFortInventoryContext_GetCurrentAmmoItemDefinition_Params
{
public:
	class UFortWorldItemDefinition*              ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortInventoryContext.GetCountOfVaultLimitedItems
struct UFortInventoryContext_GetCountOfVaultLimitedItems_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortInventoryContext.GetCountOfHeroItems
struct UFortInventoryContext_GetCountOfHeroItems_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function FortniteUI.FortInventoryContext.GetConversionRecipesFromItemDefintion
struct UFortInventoryContext_GetConversionRecipesFromItemDefintion_Params
{
public:
	class UFortItemDefinition*                   ItemDefinition;                                    // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FRecipe>                       ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function FortniteUI.FortInventoryContext.GetBackpackItemCounts
struct UFortInventoryContext_GetBackpackItemCounts_Params
{
public:
	int32                                        ItemsCount;                                        // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxItemsCount;                                     // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OverflowItemsCount;                                // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function FortniteUI.FortInventoryContext.GetAccountItemsByType
struct UFortInventoryContext_GetAccountItemsByType_Params
{
public:
	enum class EFortItemType                     ItemType;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2079[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UFortAccountItem*>              Items;                                             // 0x8(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function FortniteUI.FortInventoryContext.GetAccountItemsByFilterType
struct UFortInventoryContext_GetAccountItemsByFilterType_Params
{
public:
	class FString                                SearchText;                                        // 0x0(0x10)(ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EInventoryContentSortType         SortType;                                          // 0x10(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortInventoryFilter              SubType;                                           // 0x11(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_207A[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UFortAccountItem*>              OutItemList;                                       // 0x18(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortInventoryContext.EquipItem
struct UFortInventoryContext_EquipItem_Params
{
public:
	class UFortItem*                             Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function FortniteUI.FortInventoryContext.EnumerateRecyclingWarningsForItems
struct UFortInventoryContext_EnumerateRecyclingWarningsForItems_Params
{
public:
	TArray<class UFortItem*>                     Items;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<enum class EItemRecyclingWarning>     OutWarnings;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function FortniteUI.FortInventoryContext.DropItemOnQuickBar
struct UFortInventoryContext_DropItemOnQuickBar_Params
{
public:
	class UFortItem*                             Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortQuickBars                    TargetQuickbar;                                    // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_207B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        TargetSlot;                                        // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_207C[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC8 (0xC8 - 0x0)
// Function FortniteUI.FortInventoryContext.DropItemOnPlayerOrWorld
struct UFortInventoryContext_DropItemOnPlayerOrWorld_Params
{
public:
	class UFortWorldItem*                        ItemBeingDropped;                                  // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AFortPlayerState*                      InDestinationPlayer;                               // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                               OwnerWidget;                                       // 0x10(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPointerEvent                         PointerEvent;                                      // 0x18(0x78)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FGeometry                             InGeometry;                                        // 0x90(0x34)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_207D[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortInventoryContext.DropItem
struct UFortInventoryContext_DropItem_Params
{
public:
	class UFortWorldItem*                        ItemBeingDropped;                                  // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Quantity;                                          // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_207E[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function FortniteUI.FortInventoryContext.DoesItemMatchFilter
struct UFortInventoryContext_DoesItemMatchFilter_Params
{
public:
	class UFortItem*                             Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortItemListFilter                   FilterSettings;                                    // 0x8(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_207F[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortInventoryContext.DisassembleItem
struct UFortInventoryContext_DisassembleItem_Params
{
public:
	class UFortWorldItem*                        Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2080[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortInventoryContext.CraftSchematic
struct UFortInventoryContext_CraftSchematic_Params
{
public:
	class UFortSchematicItem*                    SchematicItem;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortCraftFailCause               FailCause;                                         // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x9(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2081[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortInventoryContext.CraftAndSlotSchematic
struct UFortInventoryContext_CraftAndSlotSchematic_Params
{
public:
	class UFortSchematicItem*                    SchematicItem;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PostCraftSlot;                                     // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortCraftFailCause               FailCause;                                         // 0xC(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xD(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2082[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function FortniteUI.FortInventoryContext.CanRecycle
struct UFortInventoryContext_CanRecycle_Params
{
public:
	class UFortItem*                             Item;                                              // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<enum class EItemRecyclingRestrictionReason> OutRestrictionReasons;                             // 0x8(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2083[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortInventoryContext.CanPinSchematic
struct UFortInventoryContext_CanPinSchematic_Params
{
public:
	class UFortSchematicItem*                    Schematic;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2084[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function FortniteUI.FortInventoryContext.CanEvolve
struct UFortInventoryContext_CanEvolve_Params
{
public:
	class UFortItem*                             Item;                                              // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<enum class EItemEvolutionRestrictionReason> OutRestrictionReasons;                             // 0x8(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2085[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function FortniteUI.FortInventoryContext.CanDisassembleItem
struct UFortInventoryContext_CanDisassembleItem_Params
{
public:
	class UFortWorldItem*                        Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<enum class EItemDisassembleRestrictionReason> OutRestrictionReasons;                             // 0x8(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2086[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortInventoryContext.CanCraftSchematic
struct UFortInventoryContext_CanCraftSchematic_Params
{
public:
	class UFortSchematicItem*                    SchematicItem;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortCraftFailCause               FailCause;                                         // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x9(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2087[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function FortniteUI.FortInventoryContext.AreRecipeRequirementsMet
struct UFortInventoryContext_AreRecipeRequirementsMet_Params
{
public:
	TArray<struct FFortItemQuantityPair>         RecipeCosts;                                       // 0x0(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2088[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x2 (0x2 - 0x0)
// Function FortniteUI.FortInventoryContext.AreAnyItemsUnseenForInventoryFilter
struct UFortInventoryContext_AreAnyItemsUnseenForInventoryFilter_Params
{
public:
	enum class EFortFrontendInventoryFilter      FilterType;                                        // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function FortniteUI.FortInventoryContext.AreAnyItemsAnimate
struct UFortInventoryContext_AreAnyItemsAnimate_Params
{
public:
	TArray<class UFortItem*>                     Items;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2089[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortInventoryContext.ActivateItem
struct UFortInventoryContext_ActivateItem_Params
{
public:
	class UFortItem*                             Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_208A[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// Function FortniteUI.FortItemCardUtilities.GetCardDimensions
struct UFortItemCardUtilities_GetCardDimensions_Params
{
public:
	enum class EFortItemType                     ItemType;                                          // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortItemCardSize                 CardSize;                                          // 0x1(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsReward;                                          // 0x2(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         UseNewItemCardSizes;                               // 0x3(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             ReturnValue;                                       // 0x4(0x8)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortItemCooldownWidget.SetItem
struct UFortItemCooldownWidget_SetItem_Params
{
public:
	class UFortWorldItem*                        InWorldItem;                                       // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortItemCooldownWidget.OnCooldownStopped
struct UFortItemCooldownWidget_OnCooldownStopped_Params
{
public:
	enum class EFortItemCooldownType             CooldownType;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortItemCooldownWidget.OnCooldownStarted
struct UFortItemCooldownWidget_OnCooldownStarted_Params
{
public:
	enum class EFortItemCooldownType             CooldownType;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortItemCountTextBlock.SetOverrideValue
struct UFortItemCountTextBlock_SetOverrideValue_Params
{
public:
	int32                                        InOverrideValue;                                   // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortItemCountTextBlock.SetItemDefinition
struct UFortItemCountTextBlock_SetItemDefinition_Params
{
public:
	class UFortItemDefinition*                   InItemDefinition;                                  // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortItemCountTextBlock.SetCountStyle
struct UFortItemCountTextBlock_SetCountStyle_Params
{
public:
	enum class EFortItemCountStyle               InCountStyle;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortItemCountTextBlock.InterpolateOverrideToValue
struct UFortItemCountTextBlock_InterpolateOverrideToValue_Params
{
public:
	int32                                        TargetValue;                                       // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaximumInterpolationDuration;                      // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinimumChangeRate;                                 // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OutroOffset;                                       // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortItemCountTextBlock.HandleItemCountChanged
struct UFortItemCountTextBlock_HandleItemCountChanged_Params
{
public:
	class UFortItemDefinition*                   Definition;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Delta;                                             // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_208E[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortItemDetailsHostPanel.ShouldPreviewUpgradingItem
struct UFortItemDetailsHostPanel_ShouldPreviewUpgradingItem_Params
{
public:
	bool                                         Value;                                             // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortItemDetailsHostPanel.SetItemViewContext
struct UFortItemDetailsHostPanel_SetItemViewContext_Params
{
public:
	TScriptInterface<class IFortItemViewContextInterface> ItemViewContext;                                   // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortItemDetailsHostPanel.SetItemToDetail
struct UFortItemDetailsHostPanel_SetItemToDetail_Params
{
public:
	class UFortItem*                             ItemToDetail;                                      // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortItemDetailsHostPanel.SetItemToCompareWith
struct UFortItemDetailsHostPanel_SetItemToCompareWith_Params
{
public:
	class UFortItem*                             ItemToCompareWith;                                 // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortSquadSlotItemDetailElementWidget.SetIdOfSquadSlotToManageBP
struct UFortSquadSlotItemDetailElementWidget_SetIdOfSquadSlotToManageBP_Params
{
public:
	class FName                                  SquadId;                                           // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SquadSlotIndex;                                    // 0x8(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2095[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortSquadSlotItemDetailElementWidget.IsSquadSlotLockedBP
struct UFortSquadSlotItemDetailElementWidget_IsSquadSlotLockedBP_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortSquadSlotItemDetailElementWidget.GetItemInSquadSlotBP
struct UFortSquadSlotItemDetailElementWidget_GetItemInSquadSlotBP_Params
{
public:
	class ULocalPlayer*                          LocalPlayer;                                       // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortItem*                             ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortSquadSlotItemDetailElementWidget.GetIdOfSquadSlotToManageBP
struct UFortSquadSlotItemDetailElementWidget_GetIdOfSquadSlotToManageBP_Params
{
public:
	class FName                                  OutSquadId;                                        // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OutSquadSlotIndex;                                 // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2096[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortSquadSlotItemDetailsHostPanel.SetIdOfSquadSlotToManageBP
struct UFortSquadSlotItemDetailsHostPanel_SetIdOfSquadSlotToManageBP_Params
{
public:
	class FName                                  SquadId;                                           // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SquadSlotIndex;                                    // 0x8(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2098[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortSquadSlotItemDetailsHostPanel.IsSquadSlotLockedBP
struct UFortSquadSlotItemDetailsHostPanel_IsSquadSlotLockedBP_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortSquadSlotItemDetailsHostPanel.GetItemInSquadSlotBP
struct UFortSquadSlotItemDetailsHostPanel_GetItemInSquadSlotBP_Params
{
public:
	class ULocalPlayer*                          LocalPlayer;                                       // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortItem*                             ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortSquadSlotItemDetailsHostPanel.GetIdOfSquadSlotToManageBP
struct UFortSquadSlotItemDetailsHostPanel_GetIdOfSquadSlotToManageBP_Params
{
public:
	class FName                                  OutSquadId;                                        // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OutSquadSlotIndex;                                 // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2099[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortItemDetailsModeActivatablePanel.HandleOnActiveWidgetChanged
struct UFortItemDetailsModeActivatablePanel_HandleOnActiveWidgetChanged_Params
{
public:
	class UWidget*                               ActiveWidget;                                      // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ActiveWidgetIndex;                                 // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_209F[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortItemManagementMulchDetailsPanel.GetItemsToMulch
struct UFortItemManagementMulchDetailsPanel_GetItemsToMulch_Params
{
public:
	TArray<class UFortItem*>                     ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortItemManagementMulchDetailsPanel.GetItemCountsToMulch
struct UFortItemManagementMulchDetailsPanel_GetItemCountsToMulch_Params
{
public:
	TArray<int32>                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortItemManagementModeDetailsPanel.GetItemManagementMode
struct UFortItemManagementModeDetailsPanel_GetItemManagementMode_Params
{
public:
	enum class EFortItemManagementMode           ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortItemDetailsPanel.SetItemToDetail
struct UFortItemDetailsPanel_SetItemToDetail_Params
{
public:
	class UFortItem*                             ItemToDetail;                                      // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortItemDetailsPanel.SetItemToCompareWith
struct UFortItemDetailsPanel_SetItemToCompareWith_Params
{
public:
	class UFortItem*                             ItemToCompareWith;                                 // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x3 (0x3 - 0x0)
// Function FortniteUI.FortItemDetailsPanel.HandleItemToDetailChanged
struct UFortItemDetailsPanel_HandleItemToDetailChanged_Params
{
public:
	bool                                         bItemChanged;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAmmoChanged;                                      // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIngredientsChanged;                               // 0x2(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x3 (0x3 - 0x0)
// Function FortniteUI.FortItemDetailsPanel.HandleItemToCompareWithChanged
struct UFortItemDetailsPanel_HandleItemToCompareWithChanged_Params
{
public:
	bool                                         bItemChanged;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAmmoChanged;                                      // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIngredientsChanged;                               // 0x2(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function FortniteUI.FortItemDetailsPanel.HandleCursorModeChanged
struct UFortItemDetailsPanel_HandleCursorModeChanged_Params
{
public:
	bool                                         bCursorModeEnabled;                                // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_20A7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  ActionName;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UUserWidget*                           CustomWidget;                                      // 0x10(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortItemDisplayNameText.SetItemToRepresent
struct UFortItemDisplayNameText_SetItemToRepresent_Params
{
public:
	class UFortItem*                             ItemToRepresent;                                   // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortItemIcon.SetShadowColorAndOpacity
struct UFortItemIcon_SetShadowColorAndOpacity_Params
{
public:
	struct FLinearColor                          InColorAndOpacity;                                 // 0x0(0x10)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortItemIcon.SetOpacity
struct UFortItemIcon_SetOpacity_Params
{
public:
	float                                        InOpacity;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortItemIcon.SetItemDefinition
struct UFortItemIcon_SetItemDefinition_Params
{
public:
	class UFortItemDefinition*                   InItemDefinition;                                  // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortItemIcon.SetColorAndOpacity
struct UFortItemIcon_SetColorAndOpacity_Params
{
public:
	struct FLinearColor                          InColorAndOpacity;                                 // 0x0(0x10)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortItemIcon.SetBrushSize
struct UFortItemIcon_SetBrushSize_Params
{
public:
	enum class EFortBrushSize                    InBrushSize;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortItemManagementInventoryPanel.SetSortType
struct UFortItemManagementInventoryPanel_SetSortType_Params
{
public:
	enum class EInventoryContentSortType         SortType;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortItemManagementInventoryPanel.SetFilter
struct UFortItemManagementInventoryPanel_SetFilter_Params
{
public:
	class FName                                  FilterName;                                        // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortItemManagementInventoryPanel.HandleQuickBarChangedBP
struct UFortItemManagementInventoryPanel_HandleQuickBarChangedBP_Params
{
public:
	enum class EFortQuickBars                    QuickBarType;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortItemManagementInventoryPanel.HandleMulchQuantitySelection
struct UFortItemManagementInventoryPanel_HandleMulchQuantitySelection_Params
{
public:
	class UFortItem*                             Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortItemManagementInventoryPanel.HandleItemWidgetCreated
struct UFortItemManagementInventoryPanel_HandleItemWidgetCreated_Params
{
public:
	class UUserWidget*                           ItemWidget;                                        // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortItemManagementInventoryPanel.HandleInventoryItemSelected
struct UFortItemManagementInventoryPanel_HandleInventoryItemSelected_Params
{
public:
	class UObject*                               Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsSelected;                                       // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_20AD[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortItemManagementInventoryPanel.HandleInventoryItemHovered
struct UFortItemManagementInventoryPanel_HandleInventoryItemHovered_Params
{
public:
	class UObject*                               Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortItemManagementInventoryPanel.HandleInventoryItemDoubleClicked
struct UFortItemManagementInventoryPanel_HandleInventoryItemDoubleClicked_Params
{
public:
	class UObject*                               Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortItemManagementInventoryPanel.HandleInventoryItemClicked
struct UFortItemManagementInventoryPanel_HandleInventoryItemClicked_Params
{
public:
	class UObject*                               Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortItemManagementInventoryPanel.HandleFilterTabSelected
struct UFortItemManagementInventoryPanel_HandleFilterTabSelected_Params
{
public:
	class FName                                  TabNameID;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortItemManagementInventoryPanel.HandleFilterTabButtonCreated
struct UFortItemManagementInventoryPanel_HandleFilterTabButtonCreated_Params
{
public:
	class FName                                  TabNameID;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCommonButton*                         TabButton;                                         // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function FortniteUI.FortItemManagementInventoryPanel.HandleCursorModeChangedBP
struct UFortItemManagementInventoryPanel_HandleCursorModeChangedBP_Params
{
public:
	bool                                         bCursorModeEnabled;                                // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_20AE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  ActionName;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UUserWidget*                           CursorModeContentWidget;                           // 0x10(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function FortniteUI.FortItemManagementInventoryPanel.HandleCursorModeChanged
struct UFortItemManagementInventoryPanel_HandleCursorModeChanged_Params
{
public:
	bool                                         bCursorModeEnabled;                                // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_20AF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  ActionName;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UUserWidget*                           CursorModeContentWidget;                           // 0x10(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortItemManagementInventoryPanel.GetUpgradeItemDefinitionsForCurrentInventory
struct UFortItemManagementInventoryPanel_GetUpgradeItemDefinitionsForCurrentInventory_Params
{
public:
	TArray<class UFortItemDefinition*>           ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortItemManagementInventoryPanel.GetSupportedSortTypesForCurrentInventory
struct UFortItemManagementInventoryPanel_GetSupportedSortTypesForCurrentInventory_Params
{
public:
	TArray<enum class EInventoryContentSortType> ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function FortniteUI.FortItemManagementInventoryPanel.GetQualifiedFilterDisplayName
struct UFortItemManagementInventoryPanel_GetQualifiedFilterDisplayName_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortItemManagementInventoryPanel.AddItemStackToMulch
struct UFortItemManagementInventoryPanel_AddItemStackToMulch_Params
{
public:
	class UFortItem*                             Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Count;                                             // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_20B0[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortItemPickerBase.TryCommitSelectedItem
struct UFortItemPickerBase_TryCommitSelectedItem_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortItemPickerBase.SetSelectedItem
struct UFortItemPickerBase_SetSelectedItem_Params
{
public:
	class UFortItem*                             ItemToSelect;                                      // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortItemPickerBase.SetSelectedIndex
struct UFortItemPickerBase_SetSelectedIndex_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_20B3[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// DelegateFunction FortniteUI.FortItemPickerBase.OnItemSelectionEvent__DelegateSignature
struct UFortItemPickerBase_OnItemSelectionEvent__DelegateSignature_Params
{
public:
	class UFortItem*                             SelectedItem;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortItemPickerBase.HandlePickerTileDestroyed
struct UFortItemPickerBase_HandlePickerTileDestroyed_Params
{
public:
	class UUserWidget*                           Widget;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortItemPickerBase.HandlePickerTileCreated
struct UFortItemPickerBase_HandlePickerTileCreated_Params
{
public:
	class UUserWidget*                           Widget;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortItemPickerBase.HandlePickerItemSelected
struct UFortItemPickerBase_HandlePickerItemSelected_Params
{
public:
	class UObject*                               ObjectWhoseSelectionChanged;                       // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsSelected;                                       // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_20B4[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortItemPickerBase.HandlePickerItemHovered
struct UFortItemPickerBase_HandlePickerItemHovered_Params
{
public:
	class UObject*                               ObjectOfHoveredTile;                               // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortItemPickerBase.HandlePickerItemDoubleClicked
struct UFortItemPickerBase_HandlePickerItemDoubleClicked_Params
{
public:
	class UObject*                               ObjectOfClickedTile;                               // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortItemPickerBase.HandlePickerItemClicked
struct UFortItemPickerBase_HandlePickerItemClicked_Params
{
public:
	class UObject*                               ObjectOfClickedTile;                               // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortItemPickerBase.GetSelectedItem
struct UFortItemPickerBase_GetSelectedItem_Params
{
public:
	class UFortItem*                             ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortItemPickerBase.GetIndexForItem
struct UFortItemPickerBase_GetIndexForItem_Params
{
public:
	class UObject*                               Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_20B5[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortItemPickerBase.CanItemBeComitted
struct UFortItemPickerBase_CanItemBeComitted_Params
{
public:
	class UFortItem*                             ItemToCommit;                                      // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_20B6[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortCollectionBookPicker.SlotItemConfirmationComplete
struct UFortCollectionBookPicker_SlotItemConfirmationComplete_Params
{
public:
	class UFortItem*                             CommittedItem;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortDialogExternalLatentActionHandle LatentActionHandle;                                // 0x8(0x4)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_20B7[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// DelegateFunction FortniteUI.FortCollectionBookPicker.OnSlotItemConfirmed__DelegateSignature
struct UFortCollectionBookPicker_OnSlotItemConfirmed__DelegateSignature_Params
{
public:
	class UFortItem*                             ItemToSlot;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SlotId;                                            // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortDialogExternalLatentActionHandle LatentActionHandle;                                // 0x10(0x4)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_20B8[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortCollectionBookPicker.GetCurrentSlottedItem
struct UFortCollectionBookPicker_GetCurrentSlottedItem_Params
{
public:
	class UFortAccountItem*                      ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortOutpostStorageItemPicker.UseFilters
struct UFortOutpostStorageItemPicker_UseFilters_Params
{
public:
	TArray<enum class EFortItemType>             ItemTypes;                                         // 0x0(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortOutpostStorageItemPicker.UseFilter
struct UFortOutpostStorageItemPicker_UseFilter_Params
{
public:
	enum class EFortItemType                     ItemType;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortSquadSlotItemPicker.SetIdOfSquadSlotToManageBP
struct UFortSquadSlotItemPicker_SetIdOfSquadSlotToManageBP_Params
{
public:
	class FName                                  SquadId;                                           // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SquadSlotIndex;                                    // 0x8(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_20BB[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortSquadSlotItemPicker.GetIdOfSquadSlotToManageBP
struct UFortSquadSlotItemPicker_GetIdOfSquadSlotToManageBP_Params
{
public:
	class FName                                  OutSquadId;                                        // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OutSquadSlotIndex;                                 // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_20BC[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortTransformKeyPicker.RebuildTransformKeys
struct UFortTransformKeyPicker_RebuildTransformKeys_Params
{
public:
	TArray<class UObject*>                       InDataProvider;                                    // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function FortniteUI.FortTransformSlotItemPicker.RebuildSlottableItems
struct UFortTransformSlotItemPicker_RebuildSlottableItems_Params
{
public:
	TArray<enum class EFortInventoryFilter>      ItemFilters;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	enum class EFortItemType                     ItemType;                                          // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_20BF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UFortItem*>                     ItemsToIgnore;                                     // 0x18(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortTrapDefenderItemPicker.HandleSelectionCommittedBP
struct UFortTrapDefenderItemPicker_HandleSelectionCommittedBP_Params
{
public:
	class UFortItem*                             CommittedItem;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortItemQuantityListEntryBase.SetPreviewData
struct UFortItemQuantityListEntryBase_SetPreviewData_Params
{
public:
	struct FFortItemEntryPreviewData             PreviewData;                                       // 0x0(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function FortniteUI.FortItemQuantityListEntryBase.SetItemInstanceAndQuantity
struct UFortItemQuantityListEntryBase_SetItemInstanceAndQuantity_Params
{
public:
	struct FFortItemInstanceQuantityPair         ItemQuantityPair;                                  // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ShouldTreatAsReset;                                // 0x10(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_20C2[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function FortniteUI.FortItemQuantityListEntryBase.SetItemDefinitionAndQuantity
struct UFortItemQuantityListEntryBase_SetItemDefinitionAndQuantity_Params
{
public:
	struct FFortItemQuantityPair                 ItemQuantityPair;                                  // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ShouldTreatAsReset;                                // 0x28(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_20C3[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortItemQuantityListEntryBase.IsBeingPreviewed
struct UFortItemQuantityListEntryBase_IsBeingPreviewed_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortItemQuantityListEntryBase.HandleDifferentItemOrQuantitySetBP
struct UFortItemQuantityListEntryBase_HandleDifferentItemOrQuantitySetBP_Params
{
public:
	bool                                         IsBeingReset;                                      // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortItemQuantityListEntryBase.GetPreviewData
struct UFortItemQuantityListEntryBase_GetPreviewData_Params
{
public:
	struct FFortItemEntryPreviewData             OutPreviewData;                                    // 0x0(0x4)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortItemQuantityListEntryBase.GetItemInstance
struct UFortItemQuantityListEntryBase_GetItemInstance_Params
{
public:
	class UFortItem*                             ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortItemQuantityListEntryBase.GetItemDefinition
struct UFortItemQuantityListEntryBase_GetItemDefinition_Params
{
public:
	class UFortItemDefinition*                   ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortItemQuantityListBase.SetItemToCompareDefinitionsAndQuantities
struct UFortItemQuantityListBase_SetItemToCompareDefinitionsAndQuantities_Params
{
public:
	TArray<struct FFortItemQuantityPair>         ItemToCompareQuantityPairs;                        // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function FortniteUI.FortItemQuantityListBase.SetItemInstancesAndQuantities
struct UFortItemQuantityListBase_SetItemInstancesAndQuantities_Params
{
public:
	TArray<struct FFortItemInstanceQuantityPair> ItemQuantityPairs;                                 // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ShouldResetWidgets;                                // 0x10(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_20C6[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function FortniteUI.FortItemQuantityListBase.SetItemDefinitionsAndQuantities
struct UFortItemQuantityListBase_SetItemDefinitionsAndQuantities_Params
{
public:
	TArray<struct FFortItemQuantityPair>         ItemQuantityPairs;                                 // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ShouldResetWidgets;                                // 0x10(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_20C7[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortItemQuantityListBase.IsEmptyList
struct UFortItemQuantityListBase_IsEmptyList_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortItemQuantityListBase.GetItemDefinitions
struct UFortItemQuantityListBase_GetItemDefinitions_Params
{
public:
	TArray<class UFortItemDefinition*>           ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortItemQuantityListBase.AddListEntry
struct UFortItemQuantityListBase_AddListEntry_Params
{
public:
	class UFortItemQuantityListEntryBase*        ListEntry;                                         // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortItemRatingIndicator.SetItemViewContext
struct UFortItemRatingIndicator_SetItemViewContext_Params
{
public:
	TScriptInterface<class IFortItemViewContextInterface> ItemViewContext;                                   // 0x0(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortItemRatingIndicator.SetItemToRepresent
struct UFortItemRatingIndicator_SetItemToRepresent_Params
{
public:
	class UFortItem*                             ItemToRepresent;                                   // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortItemRatingIndicator.SetItemToCompareWith
struct UFortItemRatingIndicator_SetItemToCompareWith_Params
{
public:
	class UFortItem*                             ItemToCompareWith;                                 // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.AthenaInventoryFortItemTileButtonBase.HandleEquipSlotChanged
struct UAthenaInventoryFortItemTileButtonBase_HandleEquipSlotChanged_Params
{
public:
	int32                                        EquipSlot;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortItemManagementItemTileButton.HandleEquipSlotChanged
struct UFortItemManagementItemTileButton_HandleEquipSlotChanged_Params
{
public:
	int32                                        EquipSlot;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortItemManagementItemTileButton.GetItemManagementMode
struct UFortItemManagementItemTileButton_GetItemManagementMode_Params
{
public:
	enum class EFortItemManagementMode           ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortSquadSlotItemPickerTileButton.HandleItemSlottedToDifferentSquad
struct UFortSquadSlotItemPickerTileButton_HandleItemSlottedToDifferentSquad_Params
{
public:
	struct FHomebaseSquadSlotId                  SquadSlotId;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortSquadSlotItemPickerTileButton.GetSlottingRestrictionReasons
struct UFortSquadSlotItemPickerTileButton_GetSlottingRestrictionReasons_Params
{
public:
	TArray<enum class EFortSquadSlottingRestrictionReason> ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function FortniteUI.FortItemTileView.SetSorter
struct UFortItemTileView_SetSorter_Params
{
public:
	struct FFortItemSorterDefinition             Sorter;                                            // 0x0(0x50)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortItemTileView.SetItemViewContext
struct UFortItemTileView_SetItemViewContext_Params
{
public:
	TScriptInterface<class IFortItemViewContextInterface> ItemViewContext;                                   // 0x0(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// Function FortniteUI.FortItemTileView.SetFilterAndSorter
struct UFortItemTileView_SetFilterAndSorter_Params
{
public:
	struct FFortItemFilterDefinition             Filter;                                            // 0x0(0x60)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FFortItemSorterDefinition             Sorter;                                            // 0x60(0x50)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function FortniteUI.FortItemTileView.SetFilter
struct UFortItemTileView_SetFilter_Params
{
public:
	struct FFortItemFilterDefinition             Filter;                                            // 0x0(0x60)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortItemTileView.HandleItemWidgetCreated
struct UFortItemTileView_HandleItemWidgetCreated_Params
{
public:
	class UUserWidget*                           Widget;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortMultiSizeItemCard.SetShouldDisplayItemAsReward
struct UFortMultiSizeItemCard_SetShouldDisplayItemAsReward_Params
{
public:
	bool                                         Value;                                             // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortMultiSizeItemCard.SetQuantityOverride
struct UFortMultiSizeItemCard_SetQuantityOverride_Params
{
public:
	int32                                        QuantityOverride;                                  // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortMultiSizeItemCard.SetCardSize
struct UFortMultiSizeItemCard_SetCardSize_Params
{
public:
	enum class EFortItemCardSize                 CardSize;                                          // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortMultiSizeItemCard.GetCardSize
struct UFortMultiSizeItemCard_GetCardSize_Params
{
public:
	enum class EFortItemCardSize                 ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortJournalQuestDetails.SetCurrentQuest
struct UFortJournalQuestDetails_SetCurrentQuest_Params
{
public:
	class UFortQuestItem*                        InCurrentQuest;                                    // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortJournalQuestDetails.GetVisibleObjectives
struct UFortJournalQuestDetails_GetVisibleObjectives_Params
{
public:
	TArray<class UFortQuestObjectiveInfo*>       VisibleObjectives;                                 // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function FortniteUI.FortJournalQuestDetails.GetRewards
struct UFortJournalQuestDetails_GetRewards_Params
{
public:
	TArray<struct FFortItemInstanceQuantityPair> OutRewards;                                        // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FFortItemInstanceQuantityPair> OutSelectableRewards;                              // 0x10(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortJournalQuestDetails.GetFutureObjectives
struct UFortJournalQuestDetails_GetFutureObjectives_Params
{
public:
	TArray<class UFortQuestObjectiveInfo*>       FutureObjectives;                                  // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortJournalQuestDetails.GetActiveMissionTileType
struct UFortJournalQuestDetails_GetActiveMissionTileType_Params
{
public:
	enum class EFortTheaterMapTileType           ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortJournalQuestDetails.CanPlayQuest
struct UFortJournalQuestDetails_CanPlayQuest_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortJournalQuestDetails.CanPartyLeaderPlayQuest
struct UFortJournalQuestDetails_CanPartyLeaderPlayQuest_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortJournalQuestDetails.CanGotoQuest
struct UFortJournalQuestDetails_CanGotoQuest_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function FortniteUI.FortJournalQuestProgressBar.GetProgressDetails
struct UFortJournalQuestProgressBar_GetProgressDetails_Params
{
public:
	class FText                                  OutNumerator;                                      // 0x0(0x18)(Parm, OutParm, NativeAccessSpecifierPublic)
	class FText                                  OutDenominator;                                    // 0x18(0x18)(Parm, OutParm, NativeAccessSpecifierPublic)
	float                                        OutFraction;                                       // 0x30(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_20DA[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortLeaderboardContext.CanShowStats
struct UFortLeaderboardContext_CanShowStats_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortLeaderboardContext.CanShowLeaderboards
struct UFortLeaderboardContext_CanShowLeaderboards_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortLegacySlateBridgeWidget.UpdateSlateWidget
struct UFortLegacySlateBridgeWidget_UpdateSlateWidget_Params
{
public:
	enum class EFortLegacySlateWidget            SlateWidgetType;                                   // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortLegacySlateBridgeWidget.SetOnCloseHandler
struct UFortLegacySlateBridgeWidget_SetOnCloseHandler_Params
{
public:
	UDelegateProperty_                           OnCloseHandler;                                    // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortLevelIndicator.SetShouldShowMaximumLevel
struct UFortLevelIndicator_SetShouldShowMaximumLevel_Params
{
public:
	bool                                         InShouldShowMaximumLevel;                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortLevelIndicator.SetItemToRepresent
struct UFortLevelIndicator_SetItemToRepresent_Params
{
public:
	class UFortItem*                             ItemToRepresent;                                   // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortLevelIndicator.SetItemForComparison
struct UFortLevelIndicator_SetItemForComparison_Params
{
public:
	class UFortItem*                             ItemForComparison;                                 // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x3 (0x3 - 0x0)
// Function FortniteUI.FortLevelIndicator.HandleItemToRepresentChanged
struct UFortLevelIndicator_HandleItemToRepresentChanged_Params
{
public:
	bool                                         bItemChanged;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAmmoChanged;                                      // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIngredientsChanged;                               // 0x2(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x3 (0x3 - 0x0)
// Function FortniteUI.FortLevelIndicator.HandleItemForComparisonChanged
struct UFortLevelIndicator_HandleItemForComparisonChanged_Params
{
public:
	bool                                         bItemChanged;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAmmoChanged;                                      // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIngredientsChanged;                               // 0x2(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortListView.SetItemSelected
struct UFortListView_SetItemSelected_Params
{
public:
	class UObject*                               Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_20E3[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortListView.SetIndexSelected
struct UFortListView_SetIndexSelected_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_20E4[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortListView.SetDataProvider
struct UFortListView_SetDataProvider_Params
{
public:
	TArray<class UObject*>                       NewData;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortListView.RemoveItemAt
struct UFortListView_RemoveItemAt_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortListView.GetItemAt
struct UFortListView_GetItemAt_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_20E5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortListView.GetIndexForItem
struct UFortListView_GetIndexForItem_Params
{
public:
	class UObject*                               Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_20E6[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortListView.AddItem
struct UFortListView_AddItem_Params
{
public:
	class UObject*                               NewItem;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortLobby.OnPlayerClicked
struct UFortLobby_OnPlayerClicked_Params
{
public:
	int32                                        PlayerIndex;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortLobby.OnEndCursorOverPlayer
struct UFortLobby_OnEndCursorOverPlayer_Params
{
public:
	int32                                        PlayerIndex;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortLobby.OnBeginCursorOverPlayer
struct UFortLobby_OnBeginCursorOverPlayer_Params
{
public:
	int32                                        PlayerIndex;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortLoginAccountSelect.ChooseLoginAccountType
struct UFortLoginAccountSelect_ChooseLoginAccountType_Params
{
public:
	enum class EFortLoginAccountType             LoginAccountType;                                  // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortMainTabsScreenBase.HandleMainTabSelected
struct UFortMainTabsScreenBase_HandleMainTabSelected_Params
{
public:
	class FName                                  TabNameID;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortMainTabsScreenBase.HandleMainTabCreated
struct UFortMainTabsScreenBase_HandleMainTabCreated_Params
{
public:
	class FName                                  TabNameID;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCommonButton*                         TabButton;                                         // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function FortniteUI.FortMainTabsScreenBase.HandleFeatureStateChanged
struct UFortMainTabsScreenBase_HandleFeatureStateChanged_Params
{
public:
	enum class EFortUIFeature                    ChangedFeature;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortUIFeatureState               NewState;                                          // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortMainTabsScreenBase.HandleFeatureNavigateRequest
struct UFortMainTabsScreenBase_HandleFeatureNavigateRequest_Params
{
public:
	enum class EFortUIFeature                    Feature;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortMaterialProgressBar.SetStyle
struct UFortMaterialProgressBar_SetStyle_Params
{
public:
	TSubclassOf<class UFortMaterialProgressBarStyle> BarStyle;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortMaterialProgressBar.SetProgressBarSectionPercent
struct UFortMaterialProgressBar_SetProgressBarSectionPercent_Params
{
public:
	enum class EFortMaterialProgressBarSection   BarSection;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_20ED[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Percent;                                           // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function FortniteUI.FortMaterialProgressBar.SetProgressBarSectionColor
struct UFortMaterialProgressBar_SetProgressBarSectionColor_Params
{
public:
	enum class EFortMaterialProgressBarSection   BarSection;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_20EE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          Color;                                             // 0x4(0x10)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortMaterialProgressBarSectionColorNumber ColorNumber;                                       // 0x14(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_20EF[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortMaterialProgressBar.SetBackgroundColor
struct UFortMaterialProgressBar_SetBackgroundColor_Params
{
public:
	struct FLinearColor                          Color;                                             // 0x0(0x10)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function FortniteUI.FortMicIndicatorWidget.SetPlayerUniqueId
struct UFortMicIndicatorWidget_SetPlayerUniqueId_Params
{
public:
	struct FUniqueNetIdRepl                      InPlayerUniqueId;                                  // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortMicIndicatorWidget.OnPlayerTalkingChanged
struct UFortMicIndicatorWidget_OnPlayerTalkingChanged_Params
{
public:
	bool                                         bIsTalking;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortMicIndicatorWidget.OnPlayerMuted
struct UFortMicIndicatorWidget_OnPlayerMuted_Params
{
public:
	bool                                         bIsMuted;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortMicIndicatorWidget.OnPlayerMicAvailable
struct UFortMicIndicatorWidget_OnPlayerMicAvailable_Params
{
public:
	bool                                         bIsTalking;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function FortniteUI.FortMissionSelect.NavigateMissionTiles
struct UFortMissionSelect_NavigateMissionTiles_Params
{
public:
	enum class EUINavigation                     Direction;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// Function FortniteUI.FortMtxStoreOfferBase.GetTileImage
struct UFortMtxStoreOfferBase_GetTileImage_Params
{
public:
	struct FSlateBrush                           ReturnValue;                                       // 0x0(0x90)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortMtxStoreOfferBase.GetStoreOfferType
struct UFortMtxStoreOfferBase_GetStoreOfferType_Params
{
public:
	enum class EFortMtxStoreOfferType            ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function FortniteUI.FortMtxStoreOfferBase.GetSalePrice
struct UFortMtxStoreOfferBase_GetSalePrice_Params
{
public:
	class FText                                  SalePrice;                                         // 0x0(0x18)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_20FC[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortMtxStoreOfferBase.GetOfferId
struct UFortMtxStoreOfferBase_GetOfferId_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function FortniteUI.FortMtxStoreOfferBase.GetNormalPrice
struct UFortMtxStoreOfferBase_GetNormalPrice_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function FortniteUI.FortMtxStoreOfferBase.GetName
struct UFortMtxStoreOfferBase_GetName_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function FortniteUI.FortMtxStoreOfferBase.GetGradient
struct UFortMtxStoreOfferBase_GetGradient_Params
{
public:
	struct FFortMtxGradient                      ReturnValue;                                       // 0x0(0x20)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// Function FortniteUI.FortMtxStoreOfferBase.GetDetailsImage
struct UFortMtxStoreOfferBase_GetDetailsImage_Params
{
public:
	struct FSlateBrush                           ReturnValue;                                       // 0x0(0x90)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortMtxStoreOfferBase.GetDetailsAttributes
struct UFortMtxStoreOfferBase_GetDetailsAttributes_Params
{
public:
	TArray<struct FFortMtxDetailsAttribute>      ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function FortniteUI.FortMtxStoreOfferBase.GetDescription
struct UFortMtxStoreOfferBase_GetDescription_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortMtxStoreOfferBase.GetBonusQuantity
struct UFortMtxStoreOfferBase_GetBonusQuantity_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortMtxStoreOfferBase.GetBaseQuantity
struct UFortMtxStoreOfferBase_GetBaseQuantity_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortMtxStoreOfferBase.GetBackground
struct UFortMtxStoreOfferBase_GetBackground_Params
{
public:
	struct FLinearColor                          ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortMtxStoreRootBase.OnMtxOfferGenerated
struct UFortMtxStoreRootBase_OnMtxOfferGenerated_Params
{
public:
	class UFortMtxStoreOfferBase*                MtxOffer;                                          // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortMtxStoreRootBase.HandleMtxPackagesRead
struct UFortMtxStoreRootBase_HandleMtxPackagesRead_Params
{
public:
	TArray<struct FMtxPackage>                   Offers;                                            // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0xA8 (0xA8 - 0x0)
// Function FortniteUI.FortMtxStoreRootBase.GetStoreOfferType
struct UFortMtxStoreRootBase_GetStoreOfferType_Params
{
public:
	struct FMtxPackage                           Package;                                           // 0x0(0xA0)(Parm, NativeAccessSpecifierPublic)
	enum class EFortMtxStoreOfferType            ReturnValue;                                       // 0xA0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_20FD[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortMtxStoreRootBase.AreOffersLoaded
struct UFortMtxStoreRootBase_AreOffersLoaded_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x360 (0x360 - 0x0)
// Function FortniteUI.FortMultiSizeImage.SetMultiSizeBrush
struct UFortMultiSizeImage_SetMultiSizeBrush_Params
{
public:
	struct FFortMultiSizeBrush                   MultiSizeBrush;                                    // 0x0(0x360)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortMultiSizeImage.SetColorAndOpacity
struct UFortMultiSizeImage_SetColorAndOpacity_Params
{
public:
	struct FLinearColor                          Color;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortMultiSizeImage.SetBrushSize
struct UFortMultiSizeImage_SetBrushSize_Params
{
public:
	enum class EFortBrushSize                    BrushSize;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortComparisonResultIndicator.SetComparisonResult
struct UFortComparisonResultIndicator_SetComparisonResult_Params
{
public:
	enum class EFortBuffState                    ComparisonResult;                                  // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortSimpleItemConditionIconIndicator.ShouldCollapseWhenConditionIsFalse
struct UFortSimpleItemConditionIconIndicator_ShouldCollapseWhenConditionIsFalse_Params
{
public:
	bool                                         Value;                                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortSimpleItemConditionIconIndicator.SetItemToRepresent
struct UFortSimpleItemConditionIconIndicator_SetItemToRepresent_Params
{
public:
	class UFortItem*                             ItemToRepresent;                                   // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortSimpleItemConditionIconIndicator.GetItemToRepresent
struct UFortSimpleItemConditionIconIndicator_GetItemToRepresent_Params
{
public:
	class UFortItem*                             ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortNumericTextBlock.IsInterpolatingNumber
struct UFortNumericTextBlock_IsInterpolatingNumber_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function FortniteUI.FortNumericTextBlock.InterpolateSet
struct UFortNumericTextBlock_InterpolateSet_Params
{
public:
	int32                                        InValue;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InUpdateLength;                                    // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InReportEndEarly;                                  // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortNumericTextBlock.GetCurrentValue
struct UFortNumericTextBlock_GetCurrentValue_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortNumericTextBlock.DirectlySet
struct UFortNumericTextBlock_DirectlySet_Params
{
public:
	int32                                        InValue;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortOptionsMenu.ShowVideoOptions
struct UFortOptionsMenu_ShowVideoOptions_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortOptionsMenu.ShowInputOptions
struct UFortOptionsMenu_ShowInputOptions_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortOptionsMenu.ShowGameOptions
struct UFortOptionsMenu_ShowGameOptions_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortOptionsMenu.ShowControllerOptions
struct UFortOptionsMenu_ShowControllerOptions_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortOptionsMenu.NeedsVideoChangeConfirmation
struct UFortOptionsMenu_NeedsVideoChangeConfirmation_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortOptionsMenu.NeedsLanguageChangeConfirmation
struct UFortOptionsMenu_NeedsLanguageChangeConfirmation_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortOptionsTab.IsXboxPlatform
struct UFortOptionsTab_IsXboxPlatform_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortOptionsTab.IsPS4Platform
struct UFortOptionsTab_IsPS4Platform_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortOptionsTab.IsAthena
struct UFortOptionsTab_IsAthena_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortAudioOptions.SoundFXVolumeChanged
struct UFortAudioOptions_SoundFXVolumeChanged_Params
{
public:
	float                                        NewValue;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortAudioOptions.ShowQuality
struct UFortAudioOptions_ShowQuality_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortAudioOptions.ShowChatVolume
struct UFortAudioOptions_ShowChatVolume_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortAudioOptions.SetVoiceChatPTTEnabled
struct UFortAudioOptions_SetVoiceChatPTTEnabled_Params
{
public:
	bool                                         bNewValue;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortAudioOptions.SetVoiceChatEnabled
struct UFortAudioOptions_SetVoiceChatEnabled_Params
{
public:
	bool                                         bNewValue;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortAudioOptions.SetSubtitlesEnabled
struct UFortAudioOptions_SetSubtitlesEnabled_Params
{
public:
	bool                                         bNewValue;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortAudioOptions.SetQuality
struct UFortAudioOptions_SetQuality_Params
{
public:
	int32                                        NewQuality;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortAudioOptions.MusicVolumeChanged
struct UFortAudioOptions_MusicVolumeChanged_Params
{
public:
	float                                        NewValue;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortAudioOptions.GetVoiceChatPTTEnabled
struct UFortAudioOptions_GetVoiceChatPTTEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortAudioOptions.GetVoiceChatEnabled
struct UFortAudioOptions_GetVoiceChatEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortAudioOptions.GetSubtitlesEnabled
struct UFortAudioOptions_GetSubtitlesEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortAudioOptions.GetSoundFXVolumeValue
struct UFortAudioOptions_GetSoundFXVolumeValue_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortAudioOptions.GetQuality
struct UFortAudioOptions_GetQuality_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortAudioOptions.GetMusicVolumeValue
struct UFortAudioOptions_GetMusicVolumeValue_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortAudioOptions.GetDialogVolumeValue
struct UFortAudioOptions_GetDialogVolumeValue_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortAudioOptions.GetChatVolumeValue
struct UFortAudioOptions_GetChatVolumeValue_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortAudioOptions.DialogVolumeChanged
struct UFortAudioOptions_DialogVolumeChanged_Params
{
public:
	float                                        NewValue;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortAudioOptions.ChatVolumeChanged
struct UFortAudioOptions_ChatVolumeChanged_Params
{
public:
	float                                        NewValue;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortGameOptions.UpdateHUDSettings
struct UFortGameOptions_UpdateHUDSettings_Params
{
public:
	struct FGameplayTag                          HUDMapping;                                        // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         NewVisibility;                                     // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2108[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortGameOptions.UpdateGammaSettings
struct UFortGameOptions_UpdateGammaSettings_Params
{
public:
	float                                        GammaValue;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortGameOptions.TargetingMultiplierValueChanged
struct UFortGameOptions_TargetingMultiplierValueChanged_Params
{
public:
	float                                        NewValue;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortGameOptions.TapInteractChanged
struct UFortGameOptions_TapInteractChanged_Params
{
public:
	bool                                         bInChecked;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortGameOptions.SprintToggleChanged
struct UFortGameOptions_SprintToggleChanged_Params
{
public:
	bool                                         bInChecked;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortGameOptions.SprintCancelsReloadChanged
struct UFortGameOptions_SprintCancelsReloadChanged_Params
{
public:
	bool                                         bInChecked;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortGameOptions.ShouldShowSafeZoneOption
struct UFortGameOptions_ShouldShowSafeZoneOption_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortGameOptions.SetControllerPlatform
struct UFortGameOptions_SetControllerPlatform_Params
{
public:
	class FString                                InControllerPlatform;                              // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortGameOptions.ScopedMultiplierValueChanged
struct UFortGameOptions_ScopedMultiplierValueChanged_Params
{
public:
	float                                        NewValue;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortGameOptions.SafeZoneChanged
struct UFortGameOptions_SafeZoneChanged_Params
{
public:
	float                                        NewValue;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortGameOptions.RegionChanged
struct UFortGameOptions_RegionChanged_Params
{
public:
	int32                                        NewRegion;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortGameOptions.OnForceFeedbackChanged
struct UFortGameOptions_OnForceFeedbackChanged_Params
{
public:
	bool                                         bInChecked;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortGameOptions.OnFocusOnFirstBuildingPieceWhenQuickbarSwappedChanged
struct UFortGameOptions_OnFocusOnFirstBuildingPieceWhenQuickbarSwappedChanged_Params
{
public:
	bool                                         bInChecked;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortGameOptions.MouseSensitivityChanged
struct UFortGameOptions_MouseSensitivityChanged_Params
{
public:
	float                                        NewValue;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortGameOptions.LookInversionChanged
struct UFortGameOptions_LookInversionChanged_Params
{
public:
	bool                                         bInChecked;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortGameOptions.LanguageChanged
struct UFortGameOptions_LanguageChanged_Params
{
public:
	int32                                        NewMode;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortGameOptions.Initialize
struct UFortGameOptions_Initialize_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortGameOptions.GetTargetingMultiplierValue
struct UFortGameOptions_GetTargetingMultiplierValue_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortGameOptions.GetTapInteractState
struct UFortGameOptions_GetTapInteractState_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortGameOptions.GetSprintToggleState
struct UFortGameOptions_GetSprintToggleState_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortGameOptions.GetSprintCancelsReloadState
struct UFortGameOptions_GetSprintCancelsReloadState_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortGameOptions.GetScopedMultiplierValue
struct UFortGameOptions_GetScopedMultiplierValue_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortGameOptions.GetSafeZoneValue
struct UFortGameOptions_GetSafeZoneValue_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortGameOptions.GetRegionDisplayNames
struct UFortGameOptions_GetRegionDisplayNames_Params
{
public:
	TArray<class FText>                          ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortGameOptions.GetPossibleLanguages
struct UFortGameOptions_GetPossibleLanguages_Params
{
public:
	TArray<class FText>                          ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortGameOptions.GetMouseSensitivityValue
struct UFortGameOptions_GetMouseSensitivityValue_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortGameOptions.GetLookInversionState
struct UFortGameOptions_GetLookInversionState_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortGameOptions.GetListWidget
struct UFortGameOptions_GetListWidget_Params
{
public:
	class UObject*                               Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                               ReturnValue;                                       // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortGameOptions.GetHUDSettings
struct UFortGameOptions_GetHUDSettings_Params
{
public:
	struct FGameplayTag                          HUDMapping;                                        // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2109[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortGameOptions.GetGammaSettings
struct UFortGameOptions_GetGammaSettings_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortGameOptions.GetGamepadLookSensitivityValue
struct UFortGameOptions_GetGamepadLookSensitivityValue_Params
{
public:
	struct FVector2D                             ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortGameOptions.GetForceFeedbackState
struct UFortGameOptions_GetForceFeedbackState_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortGameOptions.GetFocusOnFirstBuildingPieceWhenQuickbarSwappedState
struct UFortGameOptions_GetFocusOnFirstBuildingPieceWhenQuickbarSwappedState_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortGameOptions.GetFirstPersonCameraState
struct UFortGameOptions_GetFirstPersonCameraState_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortGameOptions.GetDefaultGammaSettings
struct UFortGameOptions_GetDefaultGammaSettings_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortGameOptions.GetCurrentRegion
struct UFortGameOptions_GetCurrentRegion_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortGameOptions.GetCurrentLanguage
struct UFortGameOptions_GetCurrentLanguage_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortGameOptions.GetControllerPlatform
struct UFortGameOptions_GetControllerPlatform_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortGameOptions.GetAutoEquipState
struct UFortGameOptions_GetAutoEquipState_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortGameOptions.GamepadLookSensitivityYChanged
struct UFortGameOptions_GamepadLookSensitivityYChanged_Params
{
public:
	float                                        NewValue;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortGameOptions.GamepadLookSensitivityXChanged
struct UFortGameOptions_GamepadLookSensitivityXChanged_Params
{
public:
	float                                        NewValue;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortGameOptions.FirstPersonCameraChanged
struct UFortGameOptions_FirstPersonCameraChanged_Params
{
public:
	bool                                         bInChecked;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortGameOptions.AutoEquipChanged
struct UFortGameOptions_AutoEquipChanged_Params
{
public:
	bool                                         bInChecked;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortInputOptions.HandleUsingGamepadChanged
struct UFortInputOptions_HandleUsingGamepadChanged_Params
{
public:
	bool                                         bUsingGamepad;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortInputOptions.GetListWidget
struct UFortInputOptions_GetListWidget_Params
{
public:
	class UObject*                               Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                               ReturnValue;                                       // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function FortniteUI.FortInputOptions.GetBindedKeyNameBP
struct UFortInputOptions_GetBindedKeyNameBP_Params
{
public:
	int32                                        KeyBind;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsPrimary;                                         // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_210B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ReturnValue;                                       // 0x8(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function FortniteUI.FortInputOptions.ChangeBinding
struct UFortInputOptions_ChangeBinding_Params
{
public:
	bool                                         IsPrimarySlot;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_210C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Input;                                             // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                  NewKey;                                            // 0x8(0x18)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortVideoOptions.WindowModeChanged
struct UFortVideoOptions_WindowModeChanged_Params
{
public:
	int32                                        NewMode;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortVideoOptions.ViewDistanceQualityChanged
struct UFortVideoOptions_ViewDistanceQualityChanged_Params
{
public:
	int32                                        ButtonId;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortVideoOptions.UseVsyncChanged
struct UFortVideoOptions_UseVsyncChanged_Params
{
public:
	bool                                         IsChecked;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortVideoOptions.TextureQualityChanged
struct UFortVideoOptions_TextureQualityChanged_Params
{
public:
	int32                                        ButtonId;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortVideoOptions.ShowGrassChanged
struct UFortVideoOptions_ShowGrassChanged_Params
{
public:
	bool                                         IsChecked;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortVideoOptions.ShowFPSChanged
struct UFortVideoOptions_ShowFPSChanged_Params
{
public:
	bool                                         IsChecked;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortVideoOptions.ShadowQualityChanged
struct UFortVideoOptions_ShadowQualityChanged_Params
{
public:
	int32                                        ButtonId;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortVideoOptions.ResolutionChanged
struct UFortVideoOptions_ResolutionChanged_Params
{
public:
	int32                                        NewResolution;                                     // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortVideoOptions.PostProcessQualityChanged
struct UFortVideoOptions_PostProcessQualityChanged_Params
{
public:
	int32                                        ButtonId;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortVideoOptions.OnQualitySelectorChanged
struct UFortVideoOptions_OnQualitySelectorChanged_Params
{
public:
	int32                                        ValueRef;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortVideoOptions.MotionBlurChanged
struct UFortVideoOptions_MotionBlurChanged_Params
{
public:
	bool                                         IsChecked;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortVideoOptions.IsWindowedFullscreen
struct UFortVideoOptions_IsWindowedFullscreen_Params
{
public:
	int32                                        CurrentMode;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_210F[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortVideoOptions.GetViewDistanceQuality
struct UFortVideoOptions_GetViewDistanceQuality_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortVideoOptions.GetUseVsync
struct UFortVideoOptions_GetUseVsync_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortVideoOptions.GetTextureQuality
struct UFortVideoOptions_GetTextureQuality_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortVideoOptions.GetShowGrass
struct UFortVideoOptions_GetShowGrass_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortVideoOptions.GetShowFPS
struct UFortVideoOptions_GetShowFPS_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortVideoOptions.GetShadowQuality
struct UFortVideoOptions_GetShadowQuality_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortVideoOptions.GetPostProcessQuality
struct UFortVideoOptions_GetPostProcessQuality_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortVideoOptions.GetPossibleWindowModes
struct UFortVideoOptions_GetPossibleWindowModes_Params
{
public:
	TArray<class FText>                          ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortVideoOptions.GetPossibleFPS
struct UFortVideoOptions_GetPossibleFPS_Params
{
public:
	TArray<class FText>                          ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortVideoOptions.GetPossibleDisplayResolutions
struct UFortVideoOptions_GetPossibleDisplayResolutions_Params
{
public:
	TArray<class FText>                          ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortVideoOptions.GetMotionBlur
struct UFortVideoOptions_GetMotionBlur_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortVideoOptions.GetEffectsQuality
struct UFortVideoOptions_GetEffectsQuality_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortVideoOptions.GetDiscreteResolutionQuality
struct UFortVideoOptions_GetDiscreteResolutionQuality_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortVideoOptions.GetCurrentWindowMode
struct UFortVideoOptions_GetCurrentWindowMode_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortVideoOptions.GetCurrentFPS
struct UFortVideoOptions_GetCurrentFPS_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortVideoOptions.GetCurrentDisplayResolution
struct UFortVideoOptions_GetCurrentDisplayResolution_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortVideoOptions.GetAntiAliasingQuality
struct UFortVideoOptions_GetAntiAliasingQuality_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortVideoOptions.FrameRateLimitChanged
struct UFortVideoOptions_FrameRateLimitChanged_Params
{
public:
	int32                                        FrameRateLimit;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortVideoOptions.EffectsQualityChanged
struct UFortVideoOptions_EffectsQualityChanged_Params
{
public:
	int32                                        ButtonId;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortVideoOptions.DiscreteResolutionQualityChanged
struct UFortVideoOptions_DiscreteResolutionQualityChanged_Params
{
public:
	int32                                        ButtonId;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortVideoOptions.AntiAliasingQualityChanged
struct UFortVideoOptions_AntiAliasingQualityChanged_Params
{
public:
	int32                                        ButtonId;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortPartyTreeItemBase.ExpansionChanged
struct UFortPartyTreeItemBase_ExpansionChanged_Params
{
public:
	bool                                         bExpanded;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortPerkWidget_NUI.SetTooltipContext
struct UFortPerkWidget_NUI_SetTooltipContext_Params
{
public:
	class UFortTooltipContext*                   TooltipContext;                                    // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortPerkWidget_NUI.IsTierPerk
struct UFortPerkWidget_NUI_IsTierPerk_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortPerkWidget_NUI.IsPerkUnlocked
struct UFortPerkWidget_NUI_IsPerkUnlocked_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortPerkWidget_NUI.IsPerkHighlighted
struct UFortPerkWidget_NUI_IsPerkHighlighted_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortPerkWidget_NUI.IsPerkEmpty
struct UFortPerkWidget_NUI_IsPerkEmpty_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortPerkWidget_NUI.HasAbility
struct UFortPerkWidget_NUI_HasAbility_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function FortniteUI.FortPerkWidget_NUI.GetTooltipTitle
struct UFortPerkWidget_NUI_GetTooltipTitle_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortPerkWidget_NUI.GetTooltipDescription
struct UFortPerkWidget_NUI_GetTooltipDescription_Params
{
public:
	TArray<class FText>                          ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortPerkWidget_NUI.GetSupportBonusType
struct UFortPerkWidget_NUI_GetSupportBonusType_Params
{
public:
	enum class EFortSupportBonusType             ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortPerkWidget_NUI.GetRequiredLevel
struct UFortPerkWidget_NUI_GetRequiredLevel_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortPerkWidget_NUI.GetPerkTier
struct UFortPerkWidget_NUI_GetPerkTier_Params
{
public:
	enum class EFortItemTier                     ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x98 (0x98 - 0x0)
// Function FortniteUI.FortPerkWidget_NUI.GetIcon
struct UFortPerkWidget_NUI_GetIcon_Params
{
public:
	struct FSlateBrush                           Brush;                                             // 0x0(0x90)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x90(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2113[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function FortniteUI.FortPerkWidget_NUI.GetCombinedTooltipDescription
struct UFortPerkWidget_NUI_GetCombinedTooltipDescription_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// Function FortniteUI.FortPerkTierWidget_NUI.OnGeneratePerk
struct UFortPerkTierWidget_NUI_OnGeneratePerk_Params
{
public:
	struct FFortUIPerk                           Perk;                                              // 0x0(0x88)(Parm, NativeAccessSpecifierPublic)
	class UFortPerkWidget_NUI*                   PerkWidget;                                        // 0x88(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortPerksWidget_NUI.SetState
struct UFortPerksWidget_NUI_SetState_Params
{
public:
	enum class EFortPerksWidgetState             InState;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2117[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortHero*                             InEvolutionOption;                                 // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortPerksWidget_NUI.SetHero
struct UFortPerksWidget_NUI_SetHero_Params
{
public:
	class UFortHero*                             InHero;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function FortniteUI.FortPerksWidget_NUI.OnGeneratePerkTier
struct UFortPerksWidget_NUI_OnGeneratePerkTier_Params
{
public:
	struct FFortUIPerkTier                       FortPerkTier;                                      // 0x0(0x20)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	class UFortPerkTierWidget_NUI*               PerkTierWidget;                                    // 0x20(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// Function FortniteUI.FortPerksWidget_NUI.OnGeneratePerk
struct UFortPerksWidget_NUI_OnGeneratePerk_Params
{
public:
	struct FFortUIPerk                           FortPerk;                                          // 0x0(0x88)(Parm, NativeAccessSpecifierPublic)
	class UFortPerkWidget_NUI*                   PerkWidget;                                        // 0x88(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortPickerContext.UseLeftThumbstick
struct UFortPickerContext_UseLeftThumbstick_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortPickerContext.SetFortPickerData
struct UFortPickerContext_SetFortPickerData_Params
{
public:
	class UFortPickerData*                       Data;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortPickerContext.PickerOptionAccepted
struct UFortPickerContext_PickerOptionAccepted_Params
{
public:
	int32                                        Option;                                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function FortniteUI.FortPickerContext.GetRadialPickerOptionItem
struct UFortPickerContext_GetRadialPickerOptionItem_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_211A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortItem*                             Item;                                              // 0x8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOptionEnabled;                                    // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_211B[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xB8 (0xB8 - 0x0)
// Function FortniteUI.FortPickerContext.GetRadialPickerOptionImageAndLabel
struct UFortPickerContext_GetRadialPickerOptionImageAndLabel_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_211C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Label;                                             // 0x8(0x18)(Parm, OutParm, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Brush;                                             // 0x20(0x90)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         bOptionEnabled;                                    // 0xB0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_211D[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortPickerContext.GetNumPickerOptions
struct UFortPickerContext_GetNumPickerOptions_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortPickerContext.GetListPickerOption
struct UFortPickerContext_GetListPickerOption_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_211E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortItem*                             ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortPickerContext.DoesRadialCloseOnRelease
struct UFortPickerContext_DoesRadialCloseOnRelease_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortPlayerProfileBannerEditor.SetBannerIcon
struct UFortPlayerProfileBannerEditor_SetBannerIcon_Params
{
public:
	class FName                                  Icon;                                              // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortPlayerProfileBannerEditor.SetBannerColor
struct UFortPlayerProfileBannerEditor_SetBannerColor_Params
{
public:
	class FName                                  Color;                                             // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function FortniteUI.FortPlayerTrackerBase.SetUniqueIdInternal
struct UFortPlayerTrackerBase_SetUniqueIdInternal_Params
{
public:
	struct FUniqueNetIdRepl                      InUniqueId;                                        // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function FortniteUI.FortPlayerTrackerBase.SetUniqueId
struct UFortPlayerTrackerBase_SetUniqueId_Params
{
public:
	struct FUniqueNetIdRepl                      InUniqueId;                                        // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortPlayerTrackerBase.SetTeamMember
struct UFortPlayerTrackerBase_SetTeamMember_Params
{
public:
	int32                                        InPlayerIndex;                                     // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x190 (0x190 - 0x0)
// Function FortniteUI.FortPlayerTrackerBase.OnPlayerInfoChanged
struct UFortPlayerTrackerBase_OnPlayerInfoChanged_Params
{
public:
	struct FFortTeamMemberInfo                   NewInfo;                                           // 0x0(0x190)(Parm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortPlayerTrackerBase.HasModifiedStats
struct UFortPlayerTrackerBase_HasModifiedStats_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x190 (0x190 - 0x0)
// Function FortniteUI.FortPlayerTrackerBase.HandleTeamMemberStateChangedId
struct UFortPlayerTrackerBase_HandleTeamMemberStateChangedId_Params
{
public:
	struct FFortTeamMemberInfo                   NewInfo;                                           // 0x0(0x190)(Parm, NativeAccessSpecifierPublic)
};

// 0x190 (0x190 - 0x0)
// Function FortniteUI.FortPlayerTrackerBase.HandleTeamMemberStateChanged
struct UFortPlayerTrackerBase_HandleTeamMemberStateChanged_Params
{
public:
	struct FFortTeamMemberInfo                   NewInfo;                                           // 0x0(0x190)(Parm, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortPlayerTrackerBase.HandleTeamMemberRemoved
struct UFortPlayerTrackerBase_HandleTeamMemberRemoved_Params
{
public:
	int32                                        RemovedIndex;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x190 (0x190 - 0x0)
// Function FortniteUI.FortPlayerTrackerBase.HandleTeamMemberAdded
struct UFortPlayerTrackerBase_HandleTeamMemberAdded_Params
{
public:
	struct FFortTeamMemberInfo                   NewInfo;                                           // 0x0(0x190)(Parm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function FortniteUI.FortPlayerTrackerBase.HandleOnPlayerIdUpdated
struct UFortPlayerTrackerBase_HandleOnPlayerIdUpdated_Params
{
public:
	struct FUniqueNetIdRepl                      NewInfo;                                           // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x190 (0x190 - 0x0)
// Function FortniteUI.FortPlayerTrackerBase.HandleOnLocalPlayerInfoUpdated
struct UFortPlayerTrackerBase_HandleOnLocalPlayerInfoUpdated_Params
{
public:
	struct FFortTeamMemberInfo                   NewInfo;                                           // 0x0(0x190)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortPlayerTrackerBase.GetTech
struct UFortPlayerTrackerBase_GetTech_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortPlayerTrackerBase.GetTeamTech
struct UFortPlayerTrackerBase_GetTeamTech_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortPlayerTrackerBase.GetTeamResistance
struct UFortPlayerTrackerBase_GetTeamResistance_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortPlayerTrackerBase.GetTeamOffense
struct UFortPlayerTrackerBase_GetTeamOffense_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortPlayerTrackerBase.GetTeamFortitude
struct UFortPlayerTrackerBase_GetTeamFortitude_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortPlayerTrackerBase.GetResistance
struct UFortPlayerTrackerBase_GetResistance_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortPlayerTrackerBase.GetOffense
struct UFortPlayerTrackerBase_GetOffense_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortPlayerTrackerBase.GetModifiedTech
struct UFortPlayerTrackerBase_GetModifiedTech_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortPlayerTrackerBase.GetModifiedResistance
struct UFortPlayerTrackerBase_GetModifiedResistance_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortPlayerTrackerBase.GetModifiedOffense
struct UFortPlayerTrackerBase_GetModifiedOffense_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function FortniteUI.FortPlayerTrackerBase.GetModifiedHomebaseRating
struct UFortPlayerTrackerBase_GetModifiedHomebaseRating_Params
{
public:
	int32                                        Rating;                                            // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ProgressFraction;                                  // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2123[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortPlayerTrackerBase.GetModifiedFortitude
struct UFortPlayerTrackerBase_GetModifiedFortitude_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function FortniteUI.FortPlayerTrackerBase.GetHomebaseRating
struct UFortPlayerTrackerBase_GetHomebaseRating_Params
{
public:
	int32                                        Rating;                                            // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ProgressFraction;                                  // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2124[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortPlayerTrackerBase.GetFortitude
struct UFortPlayerTrackerBase_GetFortitude_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortPrivacyBase.HandlePrivacyButtonSelected
struct UFortPrivacyBase_HandlePrivacyButtonSelected_Params
{
public:
	class UCommonButton*                         SelectedPrivacyButton;                             // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ButtonIndex;                                       // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2127[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortPrivacyBase.HandleAllowFriendsButtonClicked
struct UFortPrivacyBase_HandleAllowFriendsButtonClicked_Params
{
public:
	class UCommonButton*                         SelectedPrivacyButton;                             // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortPrivacyBase.AddPrivacyButton
struct UFortPrivacyBase_AddPrivacyButton_Params
{
public:
	class UCommonButton*                         PrivacyButton;                                     // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPartyType                        PartyType;                                         // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2128[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortQuestExpiresWidget.SetData
struct UFortQuestExpiresWidget_SetData_Params
{
public:
	class UFortQuestItem*                        InItem;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortQuestTrackerEntry.HandleObjectiveEntryCreated
struct UFortQuestTrackerEntry_HandleObjectiveEntryCreated_Params
{
public:
	class UUserWidget*                           Widget;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortQuestTrackerEntry.HandleHUDObjectiveCompletion
struct UFortQuestTrackerEntry_HandleHUDObjectiveCompletion_Params
{
public:
	class UFortQuestObjectiveInfo*               QuestObjective;                                    // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortQuestTreeItemWidget.SetupAsQuest
struct UFortQuestTreeItemWidget_SetupAsQuest_Params
{
public:
	class UFortQuestItem*                        Category;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortQuestTreeItemWidget.SetupAsCategory
struct UFortQuestTreeItemWidget_SetupAsCategory_Params
{
public:
	class UFortQuestCategory*                    Category;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortQuestTreeItemWidget.ExpansionChanged
struct UFortQuestTreeItemWidget_ExpansionChanged_Params
{
public:
	bool                                         bExpanded;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortRejoinWindowBase.StartTimeout
struct UFortRejoinWindowBase_StartTimeout_Params
{
public:
	float                                        TimeoutTime;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function FortniteUI.FortResultsSummaryScreenWidget.GetTotalScoreSortedScoreIndices
struct UFortResultsSummaryScreenWidget_GetTotalScoreSortedScoreIndices_Params
{
public:
	class UFortUIScoreReport*                    ScoreReport;                                       // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int32>                                OutSortedScoreIndices;                             // 0x8(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortResultsTeleportScreenWidget.OnExitTimeRemainingUpdated
struct UFortResultsTeleportScreenWidget_OnExitTimeRemainingUpdated_Params
{
public:
	int32                                        TimeRemainingSeconds;                              // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortResultsTeleportScreenWidget.OnExitTimePercentagePassedUpdated
struct UFortResultsTeleportScreenWidget_OnExitTimePercentagePassedUpdated_Params
{
public:
	float                                        Percent;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function FortniteUI.FortResultsWidget.SendEndOfRoundUpVoteAnalytic
struct UFortResultsWidget_SendEndOfRoundUpVoteAnalytic_Params
{
public:
	struct FUniqueNetIdRepl                      TargetId;                                          // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                TargetPlayerName;                                  // 0x18(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function FortniteUI.FortResultsWidget.SendEndOfRoundScreenAnalytic
struct UFortResultsWidget_SendEndOfRoundScreenAnalytic_Params
{
public:
	class FString                                ScreenName;                                        // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Skipped;                                           // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2133[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TimeSpent;                                         // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function FortniteUI.FortResultsWidget.SendEndOfRoundFriendInviteAnalytic
struct UFortResultsWidget_SendEndOfRoundFriendInviteAnalytic_Params
{
public:
	struct FUniqueNetIdRepl                      TargetId;                                          // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                TargetPlayerName;                                  // 0x18(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortResultsWidget.IsDataFinalized
struct UFortResultsWidget_IsDataFinalized_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortResultsWidget.GetZoneCompletionResult
struct UFortResultsWidget_GetZoneCompletionResult_Params
{
public:
	enum class EFortCompletionResult             ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortResultsWidget.GetTotalMissionPointsEarned
struct UFortResultsWidget_GetTotalMissionPointsEarned_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function FortniteUI.FortResultsWidget.GetRewardsByType
struct UFortResultsWidget_GetRewardsByType_Params
{
public:
	enum class EFortRewardItemType               Type;                                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2134[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UFortItem*>                     OutRewards;                                        // 0x8(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x98 (0x98 - 0x0)
// Function FortniteUI.FortRewardNotificationData.GetIconBrush
struct UFortRewardNotificationData_GetIconBrush_Params
{
public:
	struct FSlateBrush                           IconBrush;                                         // 0x0(0x90)(Parm, OutParm, NativeAccessSpecifierPublic)
	enum class EFortBrushSize                    BrushSize;                                         // 0x90(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x91(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2138[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x98 (0x98 - 0x0)
// Function FortniteUI.FortRewardCollectionBookData.GetIconBrush
struct UFortRewardCollectionBookData_GetIconBrush_Params
{
public:
	struct FSlateBrush                           IconBrush;                                         // 0x0(0x90)(Parm, OutParm, NativeAccessSpecifierPublic)
	enum class EFortBrushSize                    BrushSize;                                         // 0x90(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x91(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_213A[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x98 (0x98 - 0x0)
// Function FortniteUI.FortRewardEpicQuestData.GetIconBrush
struct UFortRewardEpicQuestData_GetIconBrush_Params
{
public:
	struct FSlateBrush                           IconBrush;                                         // 0x0(0x90)(Parm, OutParm, NativeAccessSpecifierPublic)
	enum class EFortBrushSize                    BrushSize;                                         // 0x90(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x91(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_213B[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x98 (0x98 - 0x0)
// Function FortniteUI.FortRewardExpeditionData.GetIconBrush
struct UFortRewardExpeditionData_GetIconBrush_Params
{
public:
	struct FSlateBrush                           IconBrush;                                         // 0x0(0x90)(Parm, OutParm, NativeAccessSpecifierPublic)
	enum class EFortBrushSize                    BrushSize;                                         // 0x90(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x91(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_213C[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x98 (0x98 - 0x0)
// Function FortniteUI.FortRewardQuestData.GetIconBrush
struct UFortRewardQuestData_GetIconBrush_Params
{
public:
	struct FSlateBrush                           IconBrush;                                         // 0x0(0x90)(Parm, OutParm, NativeAccessSpecifierPublic)
	enum class EFortBrushSize                    BrushSize;                                         // 0x90(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x91(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_213D[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function FortniteUI.FortRewardNotificationWidget.SetPrimaryActionText
struct UFortRewardNotificationWidget_SetPrimaryActionText_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(Parm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortRewardNotificationWidget.SetPrimaryActionEnabled
struct UFortRewardNotificationWidget_SetPrimaryActionEnabled_Params
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function FortniteUI.FortRewardNotificationWidget.OnPrimaryActionTextChanged
struct UFortRewardNotificationWidget_OnPrimaryActionTextChanged_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortRewardNotificationWidget.IsPrimaryActionHidden
struct UFortRewardNotificationWidget_IsPrimaryActionHidden_Params
{
public:
	bool                                         bHidden;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortRewardNotificationWidget.IsPrimaryActionEnabled
struct UFortRewardNotificationWidget_IsPrimaryActionEnabled_Params
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortRewardNotificationWidget.InspectItem
struct UFortRewardNotificationWidget_InspectItem_Params
{
public:
	class UFortItem*                             ItemToInspect;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortRewardNotificationWidget.AddQuestData
struct UFortRewardNotificationWidget_AddQuestData_Params
{
public:
	class UFortQuestItem*                        Quest;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortRewardNotificationWidget.AddExpeditionData
struct UFortRewardNotificationWidget_AddExpeditionData_Params
{
public:
	class UFortExpeditionItem*                   ExpeditionItem;                                    // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortRewardNotificationWidget.AddEpicQuestData
struct UFortRewardNotificationWidget_AddEpicQuestData_Params
{
public:
	class UFortQuestItem*                        Quest;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// Function FortniteUI.FortRewardNotificationWidget.AddCollectionBookData
struct UFortRewardNotificationWidget_AddCollectionBookData_Params
{
public:
	struct FFortCollectionBookRewards            CollectionBookRewards;                             // 0x0(0x70)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function FortniteUI.FortRewardNotificationSubWidget.SetPrimaryActionText
struct UFortRewardNotificationSubWidget_SetPrimaryActionText_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(Parm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortRewardNotificationSubWidget.SetPrimaryActionEnabled
struct UFortRewardNotificationSubWidget_SetPrimaryActionEnabled_Params
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function FortniteUI.FortRewardNotificationSubWidget.SetInputActionHandlerState
struct UFortRewardNotificationSubWidget_SetInputActionHandlerState_Params
{
public:
	class UDataTable*                            DataTable;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  RowName;                                           // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EInputActionState                 State;                                             // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2141[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortRewardNotificationSubWidget.RemoveInputActionHandler
struct UFortRewardNotificationSubWidget_RemoveInputActionHandler_Params
{
public:
	struct FDataTableRowHandle                   InputActionRow;                                    // 0x0(0x10)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortRewardNotificationSubWidget.IsPrimaryActionHidden
struct UFortRewardNotificationSubWidget_IsPrimaryActionHidden_Params
{
public:
	bool                                         bHidden;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortRewardNotificationSubWidget.IsPrimaryActionEnabled
struct UFortRewardNotificationSubWidget_IsPrimaryActionEnabled_Params
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortRewardNotificationSubWidget.InspectItem
struct UFortRewardNotificationSubWidget_InspectItem_Params
{
public:
	class UFortItem*                             ItemToInspect;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortRewardNotificationSubWidget.Init
struct UFortRewardNotificationSubWidget_Init_Params
{
public:
	class UFortRewardNotificationWidget*         MainWidget;                                        // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function FortniteUI.FortRewardNotificationSubWidget.AddInputActionHandler
struct UFortRewardNotificationSubWidget_AddInputActionHandler_Params
{
public:
	class UDataTable*                            DataTable;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  RowName;                                           // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UDelegateProperty_                           CommittedEvent;                                    // 0x10(0x10)(Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortRewardConversationWidget.IsValidConversation
struct UFortRewardConversationWidget_IsValidConversation_Params
{
public:
	class UFortConversation*                     Conversation;                                      // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2143[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xD0 (0xD0 - 0x0)
// Function FortniteUI.FortRewardConversationWidget.GetDataFromSentence
struct UFortRewardConversationWidget_GetDataFromSentence_Params
{
public:
	struct FFortConversationSentence             Sentence;                                          // 0x0(0xB0)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FText                                  Text;                                              // 0xB0(0x18)(Parm, OutParm, NativeAccessSpecifierPublic)
	class UTexture2D*                            TalkingHeadTexture;                                // 0xC8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function FortniteUI.FortRewardExpeditionWidget.OnCollectExpeditionCompleted
struct UFortRewardExpeditionWidget_OnCollectExpeditionCompleted_Params
{
public:
	class UFortExpeditionItem*                   Expedition;                                        // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSucceeded;                                        // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2144[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFortItemInstanceQuantityPair> Rewards;                                           // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortRewardExpeditionWidget.CollectExpedition
struct UFortRewardExpeditionWidget_CollectExpedition_Params
{
public:
	class UFortExpeditionItem*                   Expedition;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortRewardNewQuestWidget.IsValidConversation
struct UFortRewardNewQuestWidget_IsValidConversation_Params
{
public:
	class UFortConversation*                     Conversation;                                      // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2146[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xD0 (0xD0 - 0x0)
// Function FortniteUI.FortRewardNewQuestWidget.GetDataFromSentence
struct UFortRewardNewQuestWidget_GetDataFromSentence_Params
{
public:
	struct FFortConversationSentence             Sentence;                                          // 0x0(0xB0)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FText                                  Text;                                              // 0xB0(0x18)(Parm, OutParm, NativeAccessSpecifierPublic)
	class UTexture2D*                            TalkingHeadTexture;                                // 0xC8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function FortniteUI.FortRichTextBlock.SetText
struct UFortRichTextBlock_SetText_Params
{
public:
	class FText                                  InText;                                            // 0x0(0x18)(Parm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortSkillTreeCanvas.HandleNodeButtonClicked
struct UFortSkillTreeCanvas_HandleNodeButtonClicked_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortSkillTreeCanvas.HandleButtonGroupSelectionChanged
struct UFortSkillTreeCanvas_HandleButtonGroupSelectionChanged_Params
{
public:
	class UCommonButton*                         SelectedButton;                                    // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ButtonIndex;                                       // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_214A[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortSkillTreeCanvasSlot.SetZOrder
struct UFortSkillTreeCanvasSlot_SetZOrder_Params
{
public:
	int32                                        InZOrder;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortSkillTreeCanvasSlot.SetPosition
struct UFortSkillTreeCanvasSlot_SetPosition_Params
{
public:
	struct FVector2D                             InPosition;                                        // 0x0(0x8)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortSkillTreeCanvasSlot.GetZOrder
struct UFortSkillTreeCanvasSlot_GetZOrder_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortSkillTreeCanvasSlot.GetPosition
struct UFortSkillTreeCanvasSlot_GetPosition_Params
{
public:
	struct FVector2D                             ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortSkillTreeCanvasSlot.GetBasePosition
struct UFortSkillTreeCanvasSlot_GetBasePosition_Params
{
public:
	struct FVector2D                             ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// Function FortniteUI.FortSkillTreePageSelectorButton.TryGetStaticSkillTreePageData
struct UFortSkillTreePageSelectorButton_TryGetStaticSkillTreePageData_Params
{
public:
	struct FHomebaseNodePage                     OutStaticData;                                     // 0x0(0x60)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x60(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_214F[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function FortniteUI.FortSkillTreePageSelectorButton.TryGetSkillTreeNodeState
struct UFortSkillTreePageSelectorButton_TryGetSkillTreeNodeState_Params
{
public:
	class FName                                  NodeID;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHomebaseNodeState                    OutNodeState;                                      // 0x8(0x8)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2150[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortSkillTreePageSelectorButton.IsSkillTreePageLocked
struct UFortSkillTreePageSelectorButton_IsSkillTreePageLocked_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function FortniteUI.FortSkillTreePageSelectorButton.GetButtonNodeCompletionText
struct UFortSkillTreePageSelectorButton_GetButtonNodeCompletionText_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function FortniteUI.FortSkillTreeLandingPage.CreateAndAddPageButton
struct UFortSkillTreeLandingPage_CreateAndAddPageButton_Params
{
public:
	class FName                                  SkillTreePageId;                                   // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESkillTreePageType                PageType;                                          // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNewRow;                                           // 0x9(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2152[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortSkillTreePageSelectorButton*      ReturnValue;                                       // 0x10(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortSkillTreeLandingPage.ClearEventSkillTrees
struct UFortSkillTreeLandingPage_ClearEventSkillTrees_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function FortniteUI.FortSkillTreeNodeDetailsPanel.TryGetSkillTreeNodeState
struct UFortSkillTreeNodeDetailsPanel_TryGetSkillTreeNodeState_Params
{
public:
	struct FHomebaseNodeState                    OutNodeState;                                      // 0x0(0x8)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2153[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x458 (0x458 - 0x0)
// Function FortniteUI.FortSkillTreeNodeDetailsPanel.TryGetNodeSquadAttributeData
struct UFortSkillTreeNodeDetailsPanel_TryGetNodeSquadAttributeData_Params
{
public:
	struct FHomebaseNode                         HomebaseNode;                                      // 0x0(0xC0)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FText                                  Name;                                              // 0xC0(0x18)(Parm, OutParm, NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0xD8(0x18)(Parm, OutParm, NativeAccessSpecifierPublic)
	struct FFortMultiSizeBrush                   Brush;                                             // 0xF0(0x360)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x450(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2154[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x378 (0x378 - 0x0)
// Function FortniteUI.FortSkillTreeNodeDetailsPanel.TryGetNodeDisplayDataFromID
struct UFortSkillTreeNodeDetailsPanel_TryGetNodeDisplayDataFromID_Params
{
public:
	class FName                                  HomeBaseNodeID;                                    // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortSkillTreeNodeDisplayData         OutDisplayData;                                    // 0x8(0x368)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x370(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2155[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x430 (0x430 - 0x0)
// Function FortniteUI.FortSkillTreeNodeDetailsPanel.TryGetNodeDisplayData
struct UFortSkillTreeNodeDetailsPanel_TryGetNodeDisplayData_Params
{
public:
	struct FHomebaseNode                         HomebaseNode;                                      // 0x0(0xC0)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FFortSkillTreeNodeDisplayData         OutDisplayData;                                    // 0xC0(0x368)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x428(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2156[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortSkillTreeNodeDetailsPanel.SetSkillTreeNodeToRepresent
struct UFortSkillTreeNodeDetailsPanel_SetSkillTreeNodeToRepresent_Params
{
public:
	class FName                                  SkillTreeNodeId;                                   // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortSkillTreeNodeDetailsPanel.HasSkillTreeNodeToRepresent
struct UFortSkillTreeNodeDetailsPanel_HasSkillTreeNodeToRepresent_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// Function FortniteUI.FortSkillTreePageWidget.TryGetStaticSkillTreePageData
struct UFortSkillTreePageWidget_TryGetStaticSkillTreePageData_Params
{
public:
	struct FHomebaseNodePage                     OutStaticData;                                     // 0x0(0x60)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x60(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2158[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortSkillTreePageWidget.PlayOutroTransitionBP
struct UFortSkillTreePageWidget_PlayOutroTransitionBP_Params
{
public:
	enum class EFortAnimSpeed                    AnimSpeed;                                         // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortSkillTreePageWidget.PlayIntroTransitionBP
struct UFortSkillTreePageWidget_PlayIntroTransitionBP_Params
{
public:
	enum class EFortAnimSpeed                    AnimSpeed;                                         // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortSocialListView.SetList
struct UFortSocialListView_SetList_Params
{
public:
	TArray<class UFortSocialItem*>               InList;                                            // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortSplashScreenWidget.ShouldBypassSplashScreen
struct UFortSplashScreenWidget_ShouldBypassSplashScreen_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortSplashScreenWidget.OnGameBootableInviteReceived
struct UFortSplashScreenWidget_OnGameBootableInviteReceived_Params
{
public:
	int32                                        UserIndex;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortSplashScreenWidget.CloseSplashScreen
struct UFortSplashScreenWidget_CloseSplashScreen_Params
{
public:
	int32                                        UserIndex;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortSquadIcon.SetSquad
struct UFortSquadIcon_SetSquad_Params
{
public:
	class FName                                  InName;                                            // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function FortniteUI.FortSquadLandingPageDefenderSummary.HandleAddLockedDefenderSquadDetailsBP
struct UFortSquadLandingPageDefenderSummary_HandleAddLockedDefenderSquadDetailsBP_Params
{
public:
	struct FFortLandingPageDefenderSummaryInfo   DefenderSummaryInfo;                               // 0x0(0x30)(Parm, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function FortniteUI.FortSquadLandingPageDefenderSummary.HandleAddDefenderSquadDetailsBP
struct UFortSquadLandingPageDefenderSummary_HandleAddDefenderSquadDetailsBP_Params
{
public:
	struct FFortLandingPageDefenderSummaryInfo   DefenderSummaryInfo;                               // 0x0(0x30)(Parm, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function FortniteUI.FortSquadLandingPageDefenderSquadDetails.SetDefenderSquadInfo
struct UFortSquadLandingPageDefenderSquadDetails_SetDefenderSquadInfo_Params
{
public:
	struct FFortLandingPageDefenderSummaryInfo   DefenderSummaryInfo;                               // 0x0(0x30)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function FortniteUI.FortSquadLandingPageDefenderSquadDetails.HandleDefenderSquadInfoSetBP
struct UFortSquadLandingPageDefenderSquadDetails_HandleDefenderSquadInfoSetBP_Params
{
public:
	struct FFortLandingPageDefenderSummaryInfo   DefenderSummaryInfo;                               // 0x0(0x30)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortSquadLandingPageDefenderSquadDetails.HandleAddDefenderSquadMemberBP
struct UFortSquadLandingPageDefenderSquadDetails_HandleAddDefenderSquadMemberBP_Params
{
public:
	class FName                                  SquadId;                                           // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_215F[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function FortniteUI.FortSquadLandingPageDefenderSquadDetailsLocked.SetDefenderSquadInfo
struct UFortSquadLandingPageDefenderSquadDetailsLocked_SetDefenderSquadInfo_Params
{
public:
	struct FFortLandingPageDefenderSummaryInfo   DefenderSummaryInfo;                               // 0x0(0x30)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function FortniteUI.FortSquadLandingPageSurvivorSummary.HandleAddSetBonusSummaryLineItemBP
struct UFortSquadLandingPageSurvivorSummary_HandleAddSetBonusSummaryLineItemBP_Params
{
public:
	struct FFortAttributeModifierAccumulation    AttributeModifierAccumulation;                     // 0x0(0x30)(Parm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function FortniteUI.FortDefenderSquadSelectorButton.TryGetTheaterUniqueId
struct UFortDefenderSquadSelectorButton_TryGetTheaterUniqueId_Params
{
public:
	class FString                                OutTheaterUniqueId;                                // 0x0(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         OutIsUnlocked;                                     // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x11(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2161[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortDefenderSquadSelectorButton.TryGetPowerLevel
struct UFortDefenderSquadSelectorButton_TryGetPowerLevel_Params
{
public:
	int32                                        OutPowerLevel;                                     // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2162[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x78 (0x78 - 0x0)
// Function FortniteUI.FortSurvivorSquadSelectorButton.TryGetSummaryStats
struct UFortSurvivorSquadSelectorButton_TryGetSummaryStats_Params
{
public:
	struct FFortSurvivorSquadSelectorButtonSummaryStats OutSummaryStats;                                   // 0x0(0x70)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x70(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2163[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function FortniteUI.FortSurvivorSquadSelectorButton.TryGetSquadMembers
struct UFortSurvivorSquadSelectorButton_TryGetSquadMembers_Params
{
public:
	TArray<class UFortWorker*>                   OutSquadMembers;                                   // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2164[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x378 (0x378 - 0x0)
// Function FortniteUI.FortSurvivorSquadSelectorButton.TryGetPersonalityMatches
struct UFortSurvivorSquadSelectorButton_TryGetPersonalityMatches_Params
{
public:
	struct FFortSurvivorSquadSelectorButtonPersonalityMatches OutPersonalityMatches;                             // 0x0(0x370)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x370(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2165[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortSquadSlotDetailsPanel.TryGetItemToPreviewInSlot
struct UFortSquadSlotDetailsPanel_TryGetItemToPreviewInSlot_Params
{
public:
	class UFortItem*                             OutItemToPreviewInSlot;                            // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2166[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortSquadSlotDetailsPanel.SetIdOfSquadSlotToManageBP
struct UFortSquadSlotDetailsPanel_SetIdOfSquadSlotToManageBP_Params
{
public:
	class FName                                  SquadId;                                           // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SquadSlotIndex;                                    // 0x8(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2167[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortSquadSlotDetailsPanel.IsSquadSlotLockedBP
struct UFortSquadSlotDetailsPanel_IsSquadSlotLockedBP_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortSquadSlotDetailsPanel.GetSlottingRestrictionReasons
struct UFortSquadSlotDetailsPanel_GetSlottingRestrictionReasons_Params
{
public:
	TArray<enum class EFortSquadSlottingRestrictionReason> ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortSquadSlotDetailsPanel.GetItemInSquadSlotBP
struct UFortSquadSlotDetailsPanel_GetItemInSquadSlotBP_Params
{
public:
	class ULocalPlayer*                          LocalPlayer;                                       // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortItem*                             ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortSquadSlotDetailsPanel.GetIdOfSquadSlotToManageBP
struct UFortSquadSlotDetailsPanel_GetIdOfSquadSlotToManageBP_Params
{
public:
	class FName                                  OutSquadId;                                        // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OutSquadSlotIndex;                                 // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2168[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortSquadSlotSelectorButton.SetIdOfSquadSlotToManageBP
struct UFortSquadSlotSelectorButton_SetIdOfSquadSlotToManageBP_Params
{
public:
	class FName                                  SquadId;                                           // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SquadSlotIndex;                                    // 0x8(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_216B[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortSquadSlotSelectorButton.IsSquadSlotLockedBP
struct UFortSquadSlotSelectorButton_IsSquadSlotLockedBP_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortSquadSlotSelectorButton.GetInPreviewMode
struct UFortSquadSlotSelectorButton_GetInPreviewMode_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortSquadSlotSelectorButton.GetIdOfSquadSlotToManageBP
struct UFortSquadSlotSelectorButton_GetIdOfSquadSlotToManageBP_Params
{
public:
	class FName                                  OutSquadId;                                        // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OutSquadSlotIndex;                                 // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_216C[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x90 (0x90 - 0x0)
// Function FortniteUI.FortSquadSlotsView.TryGetStaticSquadDataBP
struct UFortSquadSlotsView_TryGetStaticSquadDataBP_Params
{
public:
	struct FHomebaseSquad                        OutSquadData;                                      // 0x0(0x88)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x88(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_216F[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortSquadSlotsView.SetIsSelectionLocked
struct UFortSquadSlotsView_SetIsSelectionLocked_Params
{
public:
	bool                                         ShouldSelectionBeLocked;                           // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortSquadSlotsView.SetInPreviewMode
struct UFortSquadSlotsView_SetInPreviewMode_Params
{
public:
	bool                                         bPreview;                                          // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortSquadSlotsView.SetIdOfSquadToManageBP
struct UFortSquadSlotsView_SetIdOfSquadToManageBP_Params
{
public:
	class FName                                  SquadId;                                           // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortSquadSlotsView.SelectSlot
struct UFortSquadSlotsView_SelectSlot_Params
{
public:
	int32                                        SquadSlotIndex;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// DelegateFunction FortniteUI.FortSquadSlotsView.OnRequestOpenSquadSlot__DelegateSignature
struct UFortSquadSlotsView_OnRequestOpenSquadSlot__DelegateSignature_Params
{
public:
	int32                                        SquadSlotIndex;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// DelegateFunction FortniteUI.FortSquadSlotsView.OnDifferentSquadSlotSelected__DelegateSignature
struct UFortSquadSlotsView_OnDifferentSquadSlotSelected__DelegateSignature_Params
{
public:
	int32                                        SquadSlotIndex;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortSquadSlotsView.HandleSelectedButtonChanged
struct UFortSquadSlotsView_HandleSelectedButtonChanged_Params
{
public:
	class UCommonButton*                         SelectedButton;                                    // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ButtonIndex;                                       // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2170[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortSquadSlotsView.HandleHoveredButtonChanged
struct UFortSquadSlotsView_HandleHoveredButtonChanged_Params
{
public:
	class UCommonButton*                         HoveredButton;                                     // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ButtonIndex;                                       // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2171[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortSquadSlotsView.HandleButtonClicked
struct UFortSquadSlotsView_HandleButtonClicked_Params
{
public:
	class UCommonButton*                         CommittedButton;                                   // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ButtonIndex;                                       // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2172[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortSquadSlotsView.GetIndexOfSelectedSquadSlot
struct UFortSquadSlotsView_GetIndexOfSelectedSquadSlot_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortSquadSlotsView.GetIdOfSquadToManageBP
struct UFortSquadSlotsView_GetIdOfSquadToManageBP_Params
{
public:
	class FName                                  ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// Function FortniteUI.FortSquadSlotsView.CreateAndAddSquadSlotButton
struct UFortSquadSlotsView_CreateAndAddSquadSlotButton_Params
{
public:
	int32                                        SquadSlotIndex;                                    // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2173[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHomebaseSquadSlot                    SquadSlotDefinition;                               // 0x8(0x60)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UWidget*                               OutSquadSlotButtonHost;                            // 0x68(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortSquadSlotSelectorButton*          ReturnValue;                                       // 0x70(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortSquadSlotWidget.SetIdOfSquadSlotToManageBP
struct UFortSquadSlotWidget_SetIdOfSquadSlotToManageBP_Params
{
public:
	class FName                                  SquadId;                                           // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SquadSlotIndex;                                    // 0x8(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2178[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortSquadSlotWidget.SetCardSize
struct UFortSquadSlotWidget_SetCardSize_Params
{
public:
	enum class EFortItemCardSize                 CardSize;                                          // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortSquadSlotWidget.IsSquadSlotLockedBP
struct UFortSquadSlotWidget_IsSquadSlotLockedBP_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortSquadSlotWidget.GetItemInSquadSlotBP
struct UFortSquadSlotWidget_GetItemInSquadSlotBP_Params
{
public:
	class ULocalPlayer*                          LocalPlayer;                                       // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortItem*                             ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortSquadSlotWidget.GetIdOfSquadSlotToManageBP
struct UFortSquadSlotWidget_GetIdOfSquadSlotToManageBP_Params
{
public:
	class FName                                  OutSquadId;                                        // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OutSquadSlotIndex;                                 // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2179[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortPerkWidget.IsTierPerk
struct UFortPerkWidget_IsTierPerk_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortPerkWidget.IsPerkUnlocked
struct UFortPerkWidget_IsPerkUnlocked_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortPerkWidget.IsPerkHighlighted
struct UFortPerkWidget_IsPerkHighlighted_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortPerkWidget.HasAbility
struct UFortPerkWidget_HasAbility_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function FortniteUI.FortPerkWidget.GetTooltipTitle
struct UFortPerkWidget_GetTooltipTitle_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortPerkWidget.GetTooltipDescription
struct UFortPerkWidget_GetTooltipDescription_Params
{
public:
	TArray<class FText>                          ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortPerkWidget.GetSupportBonusType
struct UFortPerkWidget_GetSupportBonusType_Params
{
public:
	enum class EFortSupportBonusType             ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortPerkWidget.GetRequiredLevel
struct UFortPerkWidget_GetRequiredLevel_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortPerkWidget.GetPerkTier
struct UFortPerkWidget_GetPerkTier_Params
{
public:
	enum class EFortItemTier                     ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x98 (0x98 - 0x0)
// Function FortniteUI.FortPerkWidget.GetIcon
struct UFortPerkWidget_GetIcon_Params
{
public:
	struct FSlateBrush                           Brush;                                             // 0x0(0x90)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x90(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_217F[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x3A0 (0x3A0 - 0x0)
// Function FortniteUI.FortSurvivorSquadStatMatchBase.OnStatMatchUpdated
struct UFortSurvivorSquadStatMatchBase_OnStatMatchUpdated_Params
{
public:
	struct FFortUISurvivorSquadStatMatch         UpdatedMatch;                                      // 0x0(0x3A0)(Parm, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// Function FortniteUI.FortSurvivorSquadStatMatchesBase.TryGetStaticSquadDataBP
struct UFortSurvivorSquadStatMatchesBase_TryGetStaticSquadDataBP_Params
{
public:
	struct FHomebaseSquad                        OutSquadData;                                      // 0x0(0x88)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x88(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2181[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortSurvivorSquadStatMatchesBase.SetSummaryView
struct UFortSurvivorSquadStatMatchesBase_SetSummaryView_Params
{
public:
	bool                                         bInSummaryView;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortSurvivorSquadStatMatchesBase.SetIdOfSquadToManageBP
struct UFortSurvivorSquadStatMatchesBase_SetIdOfSquadToManageBP_Params
{
public:
	class FName                                  SquadId;                                           // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortSurvivorSquadStatMatchesBase.GetIdOfSquadToManageBP
struct UFortSurvivorSquadStatMatchesBase_GetIdOfSquadToManageBP_Params
{
public:
	class FName                                  ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortSurvivorSquadStatMatchesBase.AddStatMatch
struct UFortSurvivorSquadStatMatchesBase_AddStatMatch_Params
{
public:
	class UFortSurvivorSquadStatMatchBase*       SetBonus;                                          // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function FortniteUI.FortSquadStatsWidgetBase.GetLocalPlayerId
struct UFortSquadStatsWidgetBase_GetLocalPlayerId_Params
{
public:
	struct FUniqueNetIdRepl                      ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function FortniteUI.FortStatIcon.SetAttribute
struct UFortStatIcon_SetAttribute_Params
{
public:
	struct FGameplayAttribute                    InAttribute;                                       // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function FortniteUI.FortStoreContext.OpenWebPayment
struct UFortStoreContext_OpenWebPayment_Params
{
public:
	class FString                                AttemptedMTXOfferId;                               // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2187[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x98 (0x98 - 0x0)
// Function FortniteUI.FortStoreContext.MakePurchase
struct UFortStoreContext_MakePurchase_Params
{
public:
	struct FCardPackOffer                        Offer;                                             // 0x0(0x90)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                        Quantity;                                          // 0x90(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECardPackPurchaseError            ReturnValue;                                       // 0x94(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2188[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortStoreContext.MakeChoice
struct UFortStoreContext_MakeChoice_Params
{
public:
	int32                                        ChoiceIdx;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2189[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortStoreContext.IsWaitingForMcp
struct UFortStoreContext_IsWaitingForMcp_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortStoreContext.GetTimeUntilMarketplaceRefresh
struct UFortStoreContext_GetTimeUntilMarketplaceRefresh_Params
{
public:
	struct FTimespan                             ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortStoreContext.GetTimeUntilDailyLimitReset
struct UFortStoreContext_GetTimeUntilDailyLimitReset_Params
{
public:
	struct FTimespan                             ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortStoreContext.GetStoreState
struct UFortStoreContext_GetStoreState_Params
{
public:
	enum class EFortStoreState                   ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// Function FortniteUI.FortStoreContext.GetRarityColor
struct UFortStoreContext_GetRarityColor_Params
{
public:
	enum class EFortRarity                       Rarity;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_218A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          ReturnValue;                                       // 0x4(0x10)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortStoreContext.GetPreviousState
struct UFortStoreContext_GetPreviousState_Params
{
public:
	enum class EFortStoreState                   ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortStoreContext.GetNumUnopenedCardPacksRemaining
struct UFortStoreContext_GetNumUnopenedCardPacksRemaining_Params
{
public:
	class UFortCardPackItemDefinition*           PackType;                                          // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_218B[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function FortniteUI.FortStoreContext.GetCard
struct UFortStoreContext_GetCard_Params
{
public:
	int32                                        CardIdx;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_218C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCard                                 ResultOut;                                         // 0x8(0x18)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_218D[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function FortniteUI.FortStoreContext.GetAccountItems
struct UFortStoreContext_GetAccountItems_Params
{
public:
	TArray<class UFortAccountItemDefinition*>    AccountItemDefinitions;                            // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<class UFortAccountItem*>              AccountItems;                                      // 0x10(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function FortniteUI.FortStoreContext.FireInteractionAnalyticsEvent
struct UFortStoreContext_FireInteractionAnalyticsEvent_Params
{
public:
	class FString                                Interaction;                                       // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Details;                                           // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortStoreContext.ExitWebPayment
struct UFortStoreContext_ExitWebPayment_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortStoreContext.ExitSummary
struct UFortStoreContext_ExitSummary_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortStoreContext.ExitCurrencyStore
struct UFortStoreContext_ExitCurrencyStore_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortStoreContext.ExitCardPackStore
struct UFortStoreContext_ExitCardPackStore_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function FortniteUI.FortStoreContext.ErrorOccurred
struct UFortStoreContext_ErrorOccurred_Params
{
public:
	class FString                                ErrorAnalytics;                                    // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_218E[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function FortniteUI.FortStoreContext.EnterCurrencyStore
struct UFortStoreContext_EnterCurrencyStore_Params
{
public:
	class FString                                AttemptedPurchaseCardPackId;                       // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_218F[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortStoreContext.EnterCardPackStore
struct UFortStoreContext_EnterCardPackStore_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortStoreContext.ChoiceResultComplete
struct UFortStoreContext_ChoiceResultComplete_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortStoreContext.CardPackOpeningComplete
struct UFortStoreContext_CardPackOpeningComplete_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortStoreContext.CardPackDestroyComplete
struct UFortStoreContext_CardPackDestroyComplete_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortStoreContext.CardFrontRevealComplete
struct UFortStoreContext_CardFrontRevealComplete_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortStoreContext.CardFlipComplete
struct UFortStoreContext_CardFlipComplete_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortStoreContext.CardExitComplete
struct UFortStoreContext_CardExitComplete_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortStoreContext.CardEntryComplete
struct UFortStoreContext_CardEntryComplete_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortStoreContext.CardBackRevealComplete
struct UFortStoreContext_CardBackRevealComplete_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortStoreContext.CardAddedToSummaryComplete
struct UFortStoreContext_CardAddedToSummaryComplete_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortStoreSummary.SetCards
struct UFortStoreSummary_SetCards_Params
{
public:
	TArray<struct FCard>                         Cards;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function FortniteUI.FortSubGameSelectBase.GetShortDescription
struct UFortSubGameSelectBase_GetShortDescription_Params
{
public:
	enum class ESubGame                          SubGame;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2195[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ShortDescription;                                  // 0x8(0x18)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2196[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function FortniteUI.FortSubGameSelectBase.GetFullDescription
struct UFortSubGameSelectBase_GetFullDescription_Params
{
public:
	enum class ESubGame                          SubGame;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2197[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  FullDescription;                                   // 0x8(0x18)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2198[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortSubGameSelectButtonBase.UpdateButtonState
struct UFortSubGameSelectButtonBase_UpdateButtonState_Params
{
public:
	bool                                         bVisible;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function FortniteUI.FortSurvivorSquadSummaryStatItem.SetAttributeModifierAccumulation
struct UFortSurvivorSquadSummaryStatItem_SetAttributeModifierAccumulation_Params
{
public:
	struct FFortAttributeModifierAccumulation    Accumulation;                                      // 0x0(0x30)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortTextStyleList.GetTextStyles
struct UFortTextStyleList_GetTextStyles_Params
{
public:
	TArray<TSoftClassPtr<class UCommonTextStyle>> ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function FortniteUI.FortTheaterSelect.GetTheaterRecommendedRatingRange
struct UFortTheaterSelect_GetTheaterRecommendedRatingRange_Params
{
public:
	class FString                                UniqueId;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Minimum;                                           // 0x10(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Maximum;                                           // 0x14(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_219B[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// Function FortniteUI.FortTheaterSelect.GetSurvivalCMSText
struct UFortTheaterSelect_GetSurvivalCMSText_Params
{
public:
	class FText                                  Title;                                             // 0x0(0x18)(Parm, OutParm, NativeAccessSpecifierPublic)
	class FText                                  Body;                                              // 0x18(0x18)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x30(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_219C[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortTierIndicator.SetPreviewState
struct UFortTierIndicator_SetPreviewState_Params
{
public:
	int32                                        TierIncrease;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortTierIndicator.SetItemToRepresent
struct UFortTierIndicator_SetItemToRepresent_Params
{
public:
	class UFortItem*                             ItemToRepresent;                                   // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortTierIndicator.SetInterPipPadding
struct UFortTierIndicator_SetInterPipPadding_Params
{
public:
	float                                        InterPipPadding;                                   // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortTierIndicator.SetBrushSize
struct UFortTierIndicator_SetBrushSize_Params
{
public:
	enum class EFortBrushSize                    BrushSize;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function FortniteUI.FortTooltipUIContext.GetUpgradeStats
struct UFortTooltipUIContext_GetUpgradeStats_Params
{
public:
	class UObject*                               Object;                                            // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortTooltipContext*                   TooltipContext;                                    // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FFortDisplayAttribute>         ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x3A8 (0x3A8 - 0x0)
// Function FortniteUI.FortTooltipUIContext.GetUIDataForTag
struct UFortTooltipUIContext_GetUIDataForTag_Params
{
public:
	struct FGameplayTag                          Tag;                                               // 0x0(0x8)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortTagUIData                        OutData;                                           // 0x8(0x398)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x3A0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21A1[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function FortniteUI.FortTooltipUIContext.GetTooltipStats
struct UFortTooltipUIContext_GetTooltipStats_Params
{
public:
	class UObject*                               Object;                                            // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortTooltipContext*                   TooltipContext;                                    // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FFortDisplayAttribute>         ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// Function FortniteUI.FortTooltipUIContext.GetTooltipStat
struct UFortTooltipUIContext_GetTooltipStat_Params
{
public:
	class UObject*                               Object;                                            // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortTooltipContext*                   TooltipContext;                                    // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          Token;                                             // 0x10(0x8)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortDisplayAttribute                 OutDisplayAttribute;                               // 0x18(0x70)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x88(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21A2[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function FortniteUI.FortTooltipUIContext.GetTooltipAttributes
struct UFortTooltipUIContext_GetTooltipAttributes_Params
{
public:
	class UObject*                               Object;                                            // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FGameplayAttribute>            ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x388 (0x388 - 0x0)
// Function FortniteUI.FortTooltipUIContext.GetDisplayNameAndMultiBrushForTag
struct UFortTooltipUIContext_GetDisplayNameAndMultiBrushForTag_Params
{
public:
	struct FGameplayTag                          Tag;                                               // 0x0(0x8)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  OutDisplayName;                                    // 0x8(0x18)(Parm, OutParm, NativeAccessSpecifierPublic)
	struct FFortMultiSizeBrush                   OutBrush;                                          // 0x20(0x360)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x380(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21A3[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function FortniteUI.FortTooltipUIContext.GetDescription
struct UFortTooltipUIContext_GetDescription_Params
{
public:
	class UObject*                               Object;                                            // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortTooltipContext*                   TooltipContext;                                    // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FText>                          OutDescription;                                    // 0x10(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21A4[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function FortniteUI.FortTooltipUIContext.GetComparisonStats
struct UFortTooltipUIContext_GetComparisonStats_Params
{
public:
	class UObject*                               Object;                                            // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               ComparisonObject;                                  // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortTooltipContext*                   TooltipContext;                                    // 0x10(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FFortDisplayAttribute>         ReturnValue;                                       // 0x18(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function FortniteUI.FortTooltipUIContext.GetCombinedDescription
struct UFortTooltipUIContext_GetCombinedDescription_Params
{
public:
	class UObject*                               Object;                                            // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortTooltipContext*                   TooltipContext;                                    // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  OutDescription;                                    // 0x10(0x18)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x28(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21A5[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x148 (0x148 - 0x0)
// Function FortniteUI.FortTutorialContext.UpdateTutorialAnnouncement
struct UFortTutorialContext_UpdateTutorialAnnouncement_Params
{
public:
	struct FFortClientAnnouncementData_Tutorial  AnnouncementData;                                  // 0x0(0x140)(Parm, NativeAccessSpecifierPublic)
	bool                                         bShow;                                             // 0x140(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21A6[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortTutorialContext.UnhideTutorialCallout
struct UFortTutorialContext_UnhideTutorialCallout_Params
{
public:
	class FName                                  WidgetName;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortTutorialContext.ShouldPromptToSkipTutorial
struct UFortTutorialContext_ShouldPromptToSkipTutorial_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortTutorialContext.OnNewAnnouncementStartedOnClient
struct UFortTutorialContext_OnNewAnnouncementStartedOnClient_Params
{
public:
	class AFortClientAnnouncement*               NewAnnouncement;                                   // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortTutorialContext.HideTutorialCallout
struct UFortTutorialContext_HideTutorialCallout_Params
{
public:
	class FName                                  WidgetName;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortTutorialContext.GetTutorialCallouts
struct UFortTutorialContext_GetTutorialCallouts_Params
{
public:
	TArray<class FName>                          WidgetNames;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortTutorialContext.GetHiddenTutorialCallouts
struct UFortTutorialContext_GetHiddenTutorialCallouts_Params
{
public:
	TArray<class FName>                          WidgetNames;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortTutorialContext.EnableTutorialCallout
struct UFortTutorialContext_EnableTutorialCallout_Params
{
public:
	class FName                                  WidgetName;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortTutorialContext.DisableTutorialCallout
struct UFortTutorialContext_DisableTutorialCallout_Params
{
public:
	class FName                                  WidgetName;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function FortniteUI.FortTwitchLogin.OnShowLoginError
struct UFortTwitchLogin_OnShowLoginError_Params
{
public:
	class FText                                  ErrorTitle;                                        // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FText                                  ErrorMessage;                                      // 0x18(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function FortniteUI.FortTwitchLogin.OnLoginStatusChanged
struct UFortTwitchLogin_OnLoginStatusChanged_Params
{
public:
	bool                                         bLoggedIn;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21AA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                AccountName;                                       // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortTwitchLogin.OnLoginFlowModalDismissed
struct UFortTwitchLogin_OnLoginFlowModalDismissed_Params
{
public:
	class UFortTwitchLoginModalWidget*           Modal;                                             // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortTwitchLogin.OnLoginFlowModalCreated
struct UFortTwitchLogin_OnLoginFlowModalCreated_Params
{
public:
	class UFortTwitchLoginModalWidget*           Modal;                                             // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortTwitchLogin.OnLinkedTwitchAccountChanged
struct UFortTwitchLogin_OnLinkedTwitchAccountChanged_Params
{
public:
	class FString                                AccountName;                                       // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortTwitchLogin.IsLoggedIn
struct UFortTwitchLogin_IsLoggedIn_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortTwitchLogin.GetLinkedTwitchAccountName
struct UFortTwitchLogin_GetLinkedTwitchAccountName_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortTwitchLogin.GetAccountName
struct UFortTwitchLogin_GetAccountName_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// Function FortniteUI.FortUIBlueprintFunctionLibrary.GetMetaStringOnOffer
struct UFortUIBlueprintFunctionLibrary_GetMetaStringOnOffer_Params
{
public:
	struct FCardPackOffer                        Offer;                                             // 0x0(0x90)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                Key;                                               // 0x90(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0xA0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA8 (0xA8 - 0x0)
// Function FortniteUI.FortUIBlueprintFunctionLibrary.GetMetaIntOnOffer
struct UFortUIBlueprintFunctionLibrary_GetMetaIntOnOffer_Params
{
public:
	struct FCardPackOffer                        Offer;                                             // 0x0(0x90)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                Key;                                               // 0x90(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DefaultValue;                                      // 0xA0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0xA4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA8 (0xA8 - 0x0)
// Function FortniteUI.FortUIBlueprintFunctionLibrary.GetMetaBoolOnOffer
struct UFortUIBlueprintFunctionLibrary_GetMetaBoolOnOffer_Params
{
public:
	struct FCardPackOffer                        Offer;                                             // 0x0(0x90)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                Key;                                               // 0x90(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDefaultValue;                                     // 0xA0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xA1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21AF[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x368 (0x368 - 0x0)
// Function FortniteUI.FortUIBlueprintFunctionLibrary.GetItemSmallPreviewImageMultiSizeBrush
struct UFortUIBlueprintFunctionLibrary_GetItemSmallPreviewImageMultiSizeBrush_Params
{
public:
	class UFortItem*                             Item;                                              // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortMultiSizeBrush                   ReturnValue;                                       // 0x8(0x360)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// Function FortniteUI.FortUIBlueprintFunctionLibrary.GetItemSmallPreviewImageBrush
struct UFortUIBlueprintFunctionLibrary_GetItemSmallPreviewImageBrush_Params
{
public:
	class UFortItem*                             Item;                                              // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortBrushSize                    BrushSize;                                         // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21B0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           ReturnValue;                                       // 0x10(0x90)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x368 (0x368 - 0x0)
// Function FortniteUI.FortUIBlueprintFunctionLibrary.GetItemDefinitionSmallPreviewImageMultiSizeBrush
struct UFortUIBlueprintFunctionLibrary_GetItemDefinitionSmallPreviewImageMultiSizeBrush_Params
{
public:
	class UFortItemDefinition*                   ItemDefinition;                                    // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortMultiSizeBrush                   ReturnValue;                                       // 0x8(0x360)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// Function FortniteUI.FortUIBlueprintFunctionLibrary.GetItemDefinitionSmallPreviewImageBrush
struct UFortUIBlueprintFunctionLibrary_GetItemDefinitionSmallPreviewImageBrush_Params
{
public:
	class UFortItemDefinition*                   ItemDefinition;                                    // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortBrushSize                    BrushSize;                                         // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21B1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           ReturnValue;                                       // 0x10(0x90)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortUIDataConfigurationContext.UseSpecificPinataWeapon
struct UFortUIDataConfigurationContext_UseSpecificPinataWeapon_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortUIDataConfigurationContext.IsLimitedToES2Features
struct UFortUIDataConfigurationContext_IsLimitedToES2Features_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortUIDataConfigurationContext.IsChatEnabled
struct UFortUIDataConfigurationContext_IsChatEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4C0 (0x4C0 - 0x0)
// Function FortniteUI.FortUIDataConfigurationContext.GetFrontEndFFSettings
struct UFortUIDataConfigurationContext_GetFrontEndFFSettings_Params
{
public:
	struct FPostProcessSettings                  ReturnValue;                                       // 0x0(0x4C0)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortUIDataConfigurationContext.AreSocialFeaturesEnabled
struct UFortUIDataConfigurationContext_AreSocialFeaturesEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortUIDataConfigurationContext.ArePartyFeaturesEnabled
struct UFortUIDataConfigurationContext_ArePartyFeaturesEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortUIManagerWidget_NUI.UpdateStateWidgetContent
struct UFortUIManagerWidget_NUI_UpdateStateWidgetContent_Params
{
public:
	class UFortUIStateWidget_NUI*                StateWidget;                                       // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortUIManagerWidget_NUI.UnregisterStateTrigger
struct UFortUIManagerWidget_NUI_UnregisterStateTrigger_Params
{
public:
	class UFortUIStateTrigger*                   TriggerToRemove;                                   // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function FortniteUI.FortUIManagerWidget_NUI.ShowErrorDialog
struct UFortUIManagerWidget_NUI_ShowErrorDialog_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  OperationDesc;                                     // 0x8(0x18)(Parm, NativeAccessSpecifierPublic)
	class FText                                  DisplayMessage;                                    // 0x20(0x18)(Parm, NativeAccessSpecifierPublic)
	class FString                                ErrorCode;                                         // 0x38(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortUIManagerWidget_NUI.ShouldBlockSubtitlePortrait
struct UFortUIManagerWidget_NUI_ShouldBlockSubtitlePortrait_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortUIManagerWidget_NUI.SetStateContentDisplayed
struct UFortUIManagerWidget_NUI_SetStateContentDisplayed_Params
{
public:
	bool                                         bDisplay;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortUIManagerWidget_NUI.ReleaseNotification
struct UFortUIManagerWidget_NUI_ReleaseNotification_Params
{
public:
	class UFortUINotification*                   Notification;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortUIManagerWidget_NUI.RegisterStateTrigger
struct UFortUIManagerWidget_NUI_RegisterStateTrigger_Params
{
public:
	class UFortUIStateTrigger*                   StateTrigger;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortUIManagerWidget_NUI.QueueActivatablePanelIntoModalLayer
struct UFortUIManagerWidget_NUI_QueueActivatablePanelIntoModalLayer_Params
{
public:
	class UCommonActivatablePanel*               Panel;                                             // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortUIManagerWidget_NUI.QueueActionPanelIntoModalLayer
struct UFortUIManagerWidget_NUI_QueueActionPanelIntoModalLayer_Params
{
public:
	class UFortActionHandlerPanel*               Panel;                                             // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x9(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21B2[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortUIManagerWidget_NUI.PushContentWidgetAdvanced
struct UFortUIManagerWidget_NUI_PushContentWidgetAdvanced_Params
{
public:
	class UWidget*                               Widget;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHideHeader;                                       // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHideFooter;                                       // 0x9(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHideChatWidget;                                   // 0xA(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21B3[0x5];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortUIManagerWidget_NUI.PushContentWidget
struct UFortUIManagerWidget_NUI_PushContentWidget_Params
{
public:
	class UWidget*                               Widget;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortUIManagerWidget_NUI.PopActivatablePanelInModalLayer
struct UFortUIManagerWidget_NUI_PopActivatablePanelInModalLayer_Params
{
public:
	class UCommonActivatablePanel*               Panel;                                             // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x180 (0x180 - 0x0)
// Function FortniteUI.FortUIManagerWidget_NUI.OnShowConfirmation_NUI
struct UFortUIManagerWidget_NUI_OnShowConfirmation_NUI_Params
{
public:
	struct FFortDialogDescription_NUI            Description;                                       // 0x0(0x180)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x170 (0x170 - 0x0)
// Function FortniteUI.FortUIManagerWidget_NUI.OnShowConfirmation
struct UFortUIManagerWidget_NUI_OnShowConfirmation_Params
{
public:
	struct FFortDialogDescription                Description;                                       // 0x0(0x170)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// DelegateFunction FortniteUI.FortUIManagerWidget_NUI.OnShouldBlockSubtitlePortraitChanged__DelegateSignature
struct UFortUIManagerWidget_NUI_OnShouldBlockSubtitlePortraitChanged__DelegateSignature_Params
{
public:
	bool                                         bShouldBlockSubtitlePortrait;                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortUIManagerWidget_NUI.OnEndLatentWaitForConfirmationDialog
struct UFortUIManagerWidget_NUI_OnEndLatentWaitForConfirmationDialog_Params
{
public:
	struct FFortDialogExternalLatentActionHandle WaitingDialogHandle;                               // 0x0(0x4)(Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// DelegateFunction FortniteUI.FortUIManagerWidget_NUI.OnBeginSpokenDialog__DelegateSignature
struct UFortUIManagerWidget_NUI_OnBeginSpokenDialog__DelegateSignature_Params
{
public:
	class UTexture2D*                            Image;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  Title;                                             // 0x8(0x18)(Parm, NativeAccessSpecifierPublic)
	class FText                                  Subtitle;                                          // 0x20(0x18)(Parm, NativeAccessSpecifierPublic)
	enum class EFortAnnouncementDisplayPreference DisplayPreference;                                 // 0x38(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21B4[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortUIManagerWidget_NUI.KillConfirmationDialog
struct UFortUIManagerWidget_NUI_KillConfirmationDialog_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortUIManagerWidget_NUI.IsStateContentDisplayed
struct UFortUIManagerWidget_NUI_IsStateContentDisplayed_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function FortniteUI.FortUIManagerWidget_NUI.GetUINotificationQueue
struct UFortUIManagerWidget_NUI_GetUINotificationQueue_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortNotificationQueueType        QueueType;                                         // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21B5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortUINotificationQueue*              ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortUIManagerWidget_NUI.GetUINavigationManager
struct UFortUIManagerWidget_NUI_GetUINavigationManager_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortUINavigationManager*              ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortUIManagerWidget_NUI.GetUIManagerWidget
struct UFortUIManagerWidget_NUI_GetUIManagerWidget_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortUIManagerWidget_NUI*              ReturnValue;                                       // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortUIManagerWidget_NUI.GetNavigationManager
struct UFortUIManagerWidget_NUI_GetNavigationManager_Params
{
public:
	class UFortUINavigationManager*              ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortUIManagerWidget_NUI.GetCurrentUIStateWidget
struct UFortUIManagerWidget_NUI_GetCurrentUIStateWidget_Params
{
public:
	class UFortUIStateWidget_NUI*                ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortUIManagerWidget_NUI.GetCachedWidget
struct UFortUIManagerWidget_NUI_GetCachedWidget_Params
{
public:
	class UClass*                                InClass;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UUserWidget*                           ReturnValue;                                       // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortUIManagerWidget_NUI.DisplayStateContent
struct UFortUIManagerWidget_NUI_DisplayStateContent_Params
{
public:
	bool                                         bDisplay;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// Function FortniteUI.FortUIManagerWidget_NUI.DisplayErrorDialog
struct UFortUIManagerWidget_NUI_DisplayErrorDialog_Params
{
public:
	struct FFortErrorInfo                        Info;                                              // 0x0(0x80)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function FortniteUI.FortUIManagerWidget_NUI.CreateUIStateTrigger
struct UFortUIManagerWidget_NUI_CreateUIStateTrigger_Params
{
public:
	TSubclassOf<class UFortUIStateTrigger>       Class;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               WorldContextObject;                                // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortUIStateTrigger*                   ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortUIManagerWidget_NUI.CreateNotification
struct UFortUIManagerWidget_NUI_CreateNotification_Params
{
public:
	TSubclassOf<class UFortUINotification>       UINotificationClass;                               // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortUINotification*                   ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortUIManagerWidget_NUI._BPGetCurrentUIState
struct UFortUIManagerWidget_NUI__BPGetCurrentUIState_Params
{
public:
	enum class EFortUIState                      ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortUIMessageItemWidget.OnStackSizeChanged
struct UFortUIMessageItemWidget_OnStackSizeChanged_Params
{
public:
	int32                                        OldStackSize;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortUIMessageManager.HandleMessageRemoved
struct UFortUIMessageManager_HandleMessageRemoved_Params
{
public:
	class UFortUIMessageItemWidget*              MessageItem;                                       // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortUIMessageManager.HandleMessageDisplayed
struct UFortUIMessageManager_HandleMessageDisplayed_Params
{
public:
	class UFortUIMessageItemWidget*              MessageItem;                                       // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortUIMessageManager.GetNumDisplayedItems
struct UFortUIMessageManager_GetNumDisplayedItems_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortUIMessageManager.GetNextMessageInQueue
struct UFortUIMessageManager_GetNextMessageInQueue_Params
{
public:
	class UFortUIMessageItemWidget*              ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function FortniteUI.FortUIMessageManager.AddMessageItem
struct UFortUIMessageManager_AddMessageItem_Params
{
public:
	TSubclassOf<class UFortUIMessageItemWidget>  MessageItemClass;                                  // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APlayerController*                     OwningPlayer;                                      // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  MessageID;                                         // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StackCount;                                        // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21BF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortUIMessageItemWidget*              ReturnValue;                                       // 0x20(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortUIMessagesPageBase.OnNotificationCleared
struct UFortUIMessagesPageBase_OnNotificationCleared_Params
{
public:
	class UFortUINotification*                   ClearedMessage;                                    // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortUINotificationQueue.RemoveNotification
struct UFortUINotificationQueue_RemoveNotification_Params
{
public:
	class UFortUINotification*                   InNotificationDescription;                         // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortUINotificationQueue.RegisterToReceiveNotifications
struct UFortUINotificationQueue_RegisterToReceiveNotifications_Params
{
public:
	UDelegateProperty_                           NotificationDelegate;                              // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortUINotificationQueue.GetNextNotification
struct UFortUINotificationQueue_GetNextNotification_Params
{
public:
	class UFortUINotification*                   ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortUIRewardReport.GetRewardDisplayLevel
struct UFortUIRewardReport_GetRewardDisplayLevel_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortUIScoreReport.IsLocalPlayer
struct UFortUIScoreReport_IsLocalPlayer_Params
{
public:
	int32                                        ScoreReportIndex;                                  // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21C7[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortUIScoreReport.GetXpToCompleteLevel
struct UFortUIScoreReport_GetXpToCompleteLevel_Params
{
public:
	int32                                        Level;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x34 (0x34 - 0x0)
// Function FortniteUI.FortUIScoreReport.GetXpInfo
struct UFortUIScoreReport_GetXpInfo_Params
{
public:
	int32                                        ScoreReportIndex;                                  // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortUIXpInfo                         OutXpInfo;                                         // 0x4(0x2C)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x30(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21C8[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortUIScoreReport.GetTeamScore
struct UFortUIScoreReport_GetTeamScore_Params
{
public:
	enum class EFortUIScoreType                  ScoreType;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21C9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortUIScoreReport.GetScoreReportIndicesByPlayerID
struct UFortUIScoreReport_GetScoreReportIndicesByPlayerID_Params
{
public:
	TArray<int32>                                SortedScoreReportIndices;                          // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function FortniteUI.FortUIScoreReport.GetScoreReportIndex
struct UFortUIScoreReport_GetScoreReportIndex_Params
{
public:
	struct FUniqueNetIdRepl                      PlayerID;                                          // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x18(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21CA[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// Function FortniteUI.FortUIScoreReport.GetPlayerScore
struct UFortUIScoreReport_GetPlayerScore_Params
{
public:
	int32                                        ScoreReportIndex;                                  // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortUIScoreType                  ScoreType;                                         // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21CB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function FortniteUI.FortUIScoreReport.GetPlayerName
struct UFortUIScoreReport_GetPlayerName_Params
{
public:
	int32                                        ScoreReportIndex;                                  // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21CC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ReturnValue;                                       // 0x8(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function FortniteUI.FortUIScoreReport.GetPlayerIDFromScoreReportIndex
struct UFortUIScoreReport_GetPlayerIDFromScoreReportIndex_Params
{
public:
	int32                                        ScoreReportIndex;                                  // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21CD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUniqueNetIdRepl                      OutUniqueNetIdRepl;                                // 0x8(0x18)(Parm, OutParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortUIScoreReport.GetPlayerCount
struct UFortUIScoreReport_GetPlayerCount_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function FortniteUI.FortUIScoreReport.GetLevelProgress
struct UFortUIScoreReport_GetLevelProgress_Params
{
public:
	int32                                        Level;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DisplayXp;                                         // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortUIScoreReport.GetDifficultBonusScore
struct UFortUIScoreReport_GetDifficultBonusScore_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortUIScoreReport.GetDifficultBonusMultiplier
struct UFortUIScoreReport_GetDifficultBonusMultiplier_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortUIScoreReport.GetCurrentPlayerPawn
struct UFortUIScoreReport_GetCurrentPlayerPawn_Params
{
public:
	int32                                        ScoreReportIndex;                                  // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21CE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPlayerPawn*                       ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortUIScoreReport.GetBadgeScore
struct UFortUIScoreReport_GetBadgeScore_Params
{
public:
	class UFortItem*                             BadgeItem;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21CF[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortUIStateTrigger.IsLoggedIn
struct UFortUIStateTrigger_IsLoggedIn_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortUIStateTrigger.EvalBP
struct UFortUIStateTrigger_EvalBP_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortUIStateWidget_NUI.PushContentWidgetInternal
struct UFortUIStateWidget_NUI_PushContentWidgetInternal_Params
{
public:
	class UWidget*                               Widget;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FContentPushState                     State;                                             // 0x8(0x3)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_21D1[0x5];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortUIStateWidget_NUI.PushContentWidgetAdvanced
struct UFortUIStateWidget_NUI_PushContentWidgetAdvanced_Params
{
public:
	class UWidget*                               Widget;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHideHeader;                                       // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHideFooter;                                       // 0x9(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHideChatWidget;                                   // 0xA(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21D2[0x5];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortUIStateWidget_NUI.PushContentWidget
struct UFortUIStateWidget_NUI_PushContentWidget_Params
{
public:
	class UWidget*                               Widget;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortUIStateWidget_NUI.PopContentWidgetInternal
struct UFortUIStateWidget_NUI_PopContentWidgetInternal_Params
{
public:
	struct FContentPushState                     State;                                             // 0x0(0x3)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_21D3[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               ReturnValue;                                       // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortUIStateWidget_NUI.PopContentWidget
struct UFortUIStateWidget_NUI_PopContentWidget_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortUIStateWidget_NUI.OnExitState
struct UFortUIStateWidget_NUI_OnExitState_Params
{
public:
	enum class EFortUIState                      NextUIState;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortUIStateWidget_NUI.OnEnterState
struct UFortUIStateWidget_NUI_OnEnterState_Params
{
public:
	enum class EFortUIState                      PreviousUIState;                                   // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function FortniteUI.FortUIStateWidget_Login.StartManualLogin
struct UFortUIStateWidget_Login_StartManualLogin_Params
{
public:
	class FString                                InEmail;                                           // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                InPassword;                                        // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21D6[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortUIStateWidget_Login.StartAutoLogin
struct UFortUIStateWidget_Login_StartAutoLogin_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortUIStateWidget_Login.SendEulaResponse
struct UFortUIStateWidget_Login_SendEulaResponse_Params
{
public:
	bool                                         bAccepted;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function FortniteUI.FortUIStateWidget_Login.OnShowLoginMessage
struct UFortUIStateWidget_Login_OnShowLoginMessage_Params
{
public:
	bool                                         bShow;                                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21D7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Tile;                                              // 0x8(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FText                                  Body;                                              // 0x20(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function FortniteUI.FortUIStateWidget_Login.OnPostLoginLogoutComplete
struct UFortUIStateWidget_Login_OnPostLoginLogoutComplete_Params
{
public:
	class FText                                  Reason;                                            // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortUIStateWidget_Login.OnPatchingComplete
struct UFortUIStateWidget_Login_OnPatchingComplete_Params
{
public:
	bool                                         bProceed;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortUIStateWidget_Login.OnNeedsPurchaseOrAccountLinking
struct UFortUIStateWidget_Login_OnNeedsPurchaseOrAccountLinking_Params
{
public:
	bool                                         bLinkedAccountNeedsPurchase;                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function FortniteUI.FortUIStateWidget_Login.OnLoginFailed
struct UFortUIStateWidget_Login_OnLoginFailed_Params
{
public:
	class FText                                  Reason;                                            // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function FortniteUI.FortUIStateWidget_Login.OnEulaAvailable
struct UFortUIStateWidget_Login_OnEulaAvailable_Params
{
public:
	class FText                                  EulaText;                                          // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortUIStateWidget_Login.IsLoggingOut
struct UFortUIStateWidget_Login_IsLoggingOut_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortUIStateWidget_Login.IsLoggedIn
struct UFortUIStateWidget_Login_IsLoggedIn_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function FortniteUI.FortUIStateWidget_Login.GetPlatformDisplayName
struct UFortUIStateWidget_Login_GetPlatformDisplayName_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function FortniteUI.FortUIStateWidget_Login.GetEULAText
struct UFortUIStateWidget_Login_GetEULAText_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortUIStateWidget_Login.CheckNetworkError
struct UFortUIStateWidget_Login_CheckNetworkError_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortActionHandlerPanel.SetOnPanelDeactivated
struct UFortActionHandlerPanel_SetOnPanelDeactivated_Params
{
public:
	UDelegateProperty_                           OnDeactivatedHandler;                              // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortActionHandlerPanel.SetOnPanelActivated
struct UFortActionHandlerPanel_SetOnPanelActivated_Params
{
public:
	UDelegateProperty_                           OnActivatedHandler;                                // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortActionHandlerPanel.RemoveOnPanelDeactivated
struct UFortActionHandlerPanel_RemoveOnPanelDeactivated_Params
{
public:
	class UObject*                               BoundObject;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC0 (0xC0 - 0x0)
// Function FortniteUI.FortActionHandlerPanel.OnHandleAction
struct UFortActionHandlerPanel_OnHandleAction_Params
{
public:
	struct FEventReply                           Result;                                            // 0x0(0xB8)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         bPassThrough;                                      // 0xB8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21D9[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x170 (0x170 - 0x0)
// Function FortniteUI.FortConfirmationWindow.ShowConfirmation
struct UFortConfirmationWindow_ShowConfirmation_Params
{
public:
	struct FFortDialogDescription                Description;                                       // 0x0(0x170)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortConfirmationWindow.ProcessResult
struct UFortConfirmationWindow_ProcessResult_Params
{
public:
	enum class EFortDialogResult                 DialogResult;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortErrorDialog.OnRebuildDialog
struct UFortErrorDialog_OnRebuildDialog_Params
{
public:
	int32                                        NewIndex;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// Function FortniteUI.FortErrorDialog.DisplayError
struct UFortErrorDialog_DisplayError_Params
{
public:
	struct FFortErrorInfo                        ErrorInfo;                                         // 0x0(0x80)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortQuestRewardChoiceWidget.SetQuest
struct UFortQuestRewardChoiceWidget_SetQuest_Params
{
public:
	class UFortQuestItem*                        Quest;                                             // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortUIStateWidget.OnExitState
struct UFortUIStateWidget_OnExitState_Params
{
public:
	enum class EFortUIState                      NextUIState;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortUIStateWidget.OnEnterState
struct UFortUIStateWidget_OnEnterState_Params
{
public:
	enum class EFortUIState                      PreviousUIState;                                   // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortVaultWidget.ToggleItemRecycling
struct UFortVaultWidget_ToggleItemRecycling_Params
{
public:
	class UFortItem*                             Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21DD[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x2 (0x2 - 0x0)
// Function FortniteUI.FortVaultWidget.SetCachedSortType
struct UFortVaultWidget_SetCachedSortType_Params
{
public:
	enum class EInventoryContentSortType         InSortType;                                        // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortInventoryFilter              InContentSubType;                                  // 0x1(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortVaultWidget.RemoveItemFromRecycling
struct UFortVaultWidget_RemoveItemFromRecycling_Params
{
public:
	class UFortItem*                             Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// DelegateFunction FortniteUI.FortVaultWidget.OnRecycleItemsChanged__DelegateSignature
struct UFortVaultWidget_OnRecycleItemsChanged__DelegateSignature_Params
{
public:
	enum class EVaultItemChangedType             ChangeType;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21DE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UFortItem*>                     ChangedItems;                                      // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FFortItemQuantityPair>         Resources;                                         // 0x18(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<class UFortItem*>                     RecycleItems;                                      // 0x28(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortVaultWidget.MarkVisibleItemsSeen
struct UFortVaultWidget_MarkVisibleItemsSeen_Params
{
public:
	TArray<class UFortAccountItem*>              InVisibleItems;                                    // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x3 (0x3 - 0x0)
// Function FortniteUI.FortVaultWidget.IsSupportedSortType
struct UFortVaultWidget_IsSupportedSortType_Params
{
public:
	enum class EInventoryContentSortType         InSortType;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortInventoryFilter              InContentSubType;                                  // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x2(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function FortniteUI.FortVaultWidget.IsRecyclingItemWithTier
struct UFortVaultWidget_IsRecyclingItemWithTier_Params
{
public:
	enum class EFortItemTier                     Tier;                                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function FortniteUI.FortVaultWidget.IsRecyclingItemWithRarity
struct UFortVaultWidget_IsRecyclingItemWithRarity_Params
{
public:
	enum class EFortRarity                       Rarity;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortVaultWidget.IsRecyclingItemWithLevel
struct UFortVaultWidget_IsRecyclingItemWithLevel_Params
{
public:
	int32                                        Level;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21E0[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortVaultWidget.IsRecyclingItem
struct UFortVaultWidget_IsRecyclingItem_Params
{
public:
	class UFortItem*                             Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21E1[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortVaultWidget.IsRecycling
struct UFortVaultWidget_IsRecycling_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortVaultWidget.GetTotalRecycleValue
struct UFortVaultWidget_GetTotalRecycleValue_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function FortniteUI.FortVaultWidget.GetItemList
struct UFortVaultWidget_GetItemList_Params
{
public:
	TArray<class UFortAccountItem*>              OutItemList;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FVaultContentDetails                  Details;                                           // 0x10(0x18)(Parm, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function FortniteUI.FortVaultWidget.GetCachedSortType
struct UFortVaultWidget_GetCachedSortType_Params
{
public:
	enum class EFortInventoryFilter              InContentSubType;                                  // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EInventoryContentSortType         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortVaultWidget.AddItemToRecycling
struct UFortVaultWidget_AddItemToRecycling_Params
{
public:
	class UFortItem*                             Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function FortniteUI.FortAlterationsWidget.OnGenerateAlteration
struct UFortAlterationsWidget_OnGenerateAlteration_Params
{
public:
	struct FFortUIAlteration                     AlterationInfo;                                    // 0x0(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortAlterationWidget.IsAlterationUnlocked
struct UFortAlterationWidget_IsAlterationUnlocked_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortAlterationWidget.IsAlterationHighlighted
struct UFortAlterationWidget_IsAlterationHighlighted_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortAlterationWidget.GetRequiredLevel
struct UFortAlterationWidget_GetRequiredLevel_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortAlterationWidget.GetAlterationDefintion
struct UFortAlterationWidget_GetAlterationDefintion_Params
{
public:
	class UFortAlterationItemDefinition*         ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortAttributeList.SetPreviewData
struct UFortAttributeList_SetPreviewData_Params
{
public:
	TArray<struct FFortDisplayAttribute>         Data;                                              // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function FortniteUI.FortAttributeList.SetData
struct UFortAttributeList_SetData_Params
{
public:
	TArray<struct FFortDisplayAttribute>         Data;                                              // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FFortDisplayAttribute>         ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortItemWidget.SetOnGetItemToCompareDelegate
struct UFortItemWidget_SetOnGetItemToCompareDelegate_Params
{
public:
	UDelegateProperty_                           InDelegate;                                        // 0x0(0x10)(Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortItemWidget.SetItem
struct UFortItemWidget_SetItem_Params
{
public:
	class UFortItem*                             InItem;                                            // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        QuantityOverride;                                  // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21E5[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortItemWidget.SetCooldownMaterial
struct UFortItemWidget_SetCooldownMaterial_Params
{
public:
	class UMaterialInstanceDynamic*              NewCooldownMaterial;                               // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// DelegateFunction FortniteUI.FortItemWidget.OnGetItemToCompare__DelegateSignature
struct UFortItemWidget_OnGetItemToCompare__DelegateSignature_Params
{
public:
	class UFortItem*                             ItemToCompare;                                     // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x3 (0x3 - 0x0)
// Function FortniteUI.FortItemWidget.OnFortItemUpdated
struct UFortItemWidget_OnFortItemUpdated_Params
{
public:
	bool                                         bItemChanged;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAmmoChanged;                                      // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIngredientsChanged;                               // 0x2(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortItemWidget.IsSlotted
struct UFortItemWidget_IsSlotted_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortItemWidget.IsSchematic
struct UFortItemWidget_IsSchematic_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortItemWidget.IsItemValid
struct UFortItemWidget_IsItemValid_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortItemWidget.IsInventoryOverflowItem
struct UFortItemWidget_IsInventoryOverflowItem_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortItemWidget.IsEquipped
struct UFortItemWidget_IsEquipped_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortItemWidget.HasTertiaryCategory
struct UFortItemWidget_HasTertiaryCategory_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortItemWidget.HasSecondaryCategory
struct UFortItemWidget_HasSecondaryCategory_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortItemWidget.HasLevel
struct UFortItemWidget_HasLevel_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortItemWidget.HasDurability
struct UFortItemWidget_HasDurability_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortItemWidget.GetType
struct UFortItemWidget_GetType_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortItemWidget.GetStackCount
struct UFortItemWidget_GetStackCount_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortItemWidget.GetRarity
struct UFortItemWidget_GetRarity_Params
{
public:
	enum class EFortRarity                       ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortItemWidget.GetLevel
struct UFortItemWidget_GetLevel_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortItemWidget.GetItemToCompare
struct UFortItemWidget_GetItemToCompare_Params
{
public:
	class UFortItem*                             ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortItemWidget.GetItem
struct UFortItemWidget_GetItem_Params
{
public:
	class UFortItem*                             ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortItemWidget.GetIconTexture
struct UFortItemWidget_GetIconTexture_Params
{
public:
	enum class EFortBrushSize                    InBrushSize;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21EA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture*                              ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortItemWidget.GetDurability
struct UFortItemWidget_GetDurability_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function FortniteUI.FortItemWidget.GetDisplayName
struct UFortItemWidget_GetDisplayName_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function FortniteUI.FortItemWidget.GetDescription
struct UFortItemWidget_GetDescription_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortItemWidget.BPOnItemSet
struct UFortItemWidget_BPOnItemSet_Params
{
public:
	class UFortItem*                             NewItem;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortItemWidget.BPOnCooldownSecondsChanged
struct UFortItemWidget_BPOnCooldownSecondsChanged_Params
{
public:
	int32                                        NewCooldownSeconds;                                // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortItemWidget.BPOnActivatableChanged
struct UFortItemWidget_BPOnActivatableChanged_Params
{
public:
	bool                                         bNewActivatable;                                   // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortBluGloCounter.OnBluGloQuantityChanged
struct UFortBluGloCounter_OnBluGloQuantityChanged_Params
{
public:
	int32                                        Quantity;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function FortniteUI.FortCapturePointWidget.OnCapturePointDataChanged
struct UFortCapturePointWidget_OnCapturePointDataChanged_Params
{
public:
	bool                                         bActivated;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLocked;                                           // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21ED[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CapturePercentage;                                 // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECaptureState                     CaptureState;                                      // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortTeam                         ControllingTeam;                                   // 0x9(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21EF[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortChatContainer.SetNativeWidgetHost
struct UFortChatContainer_SetNativeWidgetHost_Params
{
public:
	class UNativeWidgetHost*                     InNativeWidgetHost;                                // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function FortniteUI.FortItemCollectorWidget.OnItemCollectorValuesChanged
struct UFortItemCollectorWidget_OnItemCollectorValuesChanged_Params
{
public:
	TArray<int32>                                DepositAmounts;                                    // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<int32>                                DepositGoals;                                      // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortItemCollectorWidget.OnItemCollectorStateChanged
struct UFortItemCollectorWidget_OnItemCollectorStateChanged_Params
{
public:
	enum class EFortItemCollectorState           ItemCollectorState;                                // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortItemCollectorWidget.OnItemCollectorChanged
struct UFortItemCollectorWidget_OnItemCollectorChanged_Params
{
public:
	class ABuildingItemCollectorActor*           OutItemCollector;                                  // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortItemGroupSlotPicker.SignalSelectionCommitted
struct UFortItemGroupSlotPicker_SignalSelectionCommitted_Params
{
public:
	class UFortItem*                             SelectedItem;                                      // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortItemGroupSlotPicker.SetSelection
struct UFortItemGroupSlotPicker_SetSelection_Params
{
public:
	class UFortItem*                             SelectedItem;                                      // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// DelegateFunction FortniteUI.FortItemGroupSlotPicker.OnItemPickerSelectionChanged__DelegateSignature
struct UFortItemGroupSlotPicker_OnItemPickerSelectionChanged__DelegateSignature_Params
{
public:
	class UFortItem*                             SelectedItem;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortItemGroupSlotPicker.HandleItemSetInternal
struct UFortItemGroupSlotPicker_HandleItemSetInternal_Params
{
public:
	class UFortItemGroupSlotWidget*              ItemGroupSlotWidget;                               // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortItemGroupSlotPicker.GetSquadId
struct UFortItemGroupSlotPicker_GetSquadId_Params
{
public:
	class FName                                  ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortItemGroupSlotPicker.GetSlotIndexInGroup
struct UFortItemGroupSlotPicker_GetSlotIndexInGroup_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function FortniteUI.FortItemGroupSlotPicker.GetItemSlottingRestrictionReasonText
struct UFortItemGroupSlotPicker_GetItemSlottingRestrictionReasonText_Params
{
public:
	enum class ESquadSlotItemRestrictionReason   Reason;                                            // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21F5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ReturnValue;                                       // 0x8(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortItemGroupSlotPicker.GetCurrentlySlottedItem
struct UFortItemGroupSlotPicker_GetCurrentlySlottedItem_Params
{
public:
	class UFortItem*                             ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortItemGroupSlotPicker.GetCompatibleCandidateItems
struct UFortItemGroupSlotPicker_GetCompatibleCandidateItems_Params
{
public:
	TArray<class UFortItem*>                     ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function FortniteUI.FortItemGroupSlotPicker.GetCandidateItemSlottingRestrictions
struct UFortItemGroupSlotPicker_GetCandidateItemSlottingRestrictions_Params
{
public:
	class UFortItem*                             CandidateItem;                                     // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<enum class ESquadSlotItemRestrictionReason> OutRestrictions;                                   // 0x8(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortItemGroupSlotPicker.GetCandidateFitnessValueForSlot
struct UFortItemGroupSlotPicker_GetCandidateFitnessValueForSlot_Params
{
public:
	class UFortItem*                             Candidate;                                         // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21F7[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortItemGroupSlotPicker.DetectCandidateSynergiesAndMatches
struct UFortItemGroupSlotPicker_DetectCandidateSynergiesAndMatches_Params
{
public:
	class UFortItem*                             Candidate;                                         // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         OutHasSquadManagerSynergy;                         // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         OutHasPersonalitySynergy;                          // 0x9(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         OutHasSetBonusMatch;                               // 0xA(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21F8[0x5];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortItemGroupSlotPicker.CreateSlottedItemDetailsWidget
struct UFortItemGroupSlotPicker_CreateSlottedItemDetailsWidget_Params
{
public:
	class UFortItem*                             Item;                                              // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                               ReturnValue;                                       // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// Function FortniteUI.FortItemGroupSlotWidget.TryGetSquadSlot
struct UFortItemGroupSlotWidget_TryGetSquadSlot_Params
{
public:
	struct FHomebaseSquadSlot                    OutSquadSlot;                                      // 0x0(0x60)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x60(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21F9[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x90 (0x90 - 0x0)
// Function FortniteUI.FortItemGroupSlotWidget.TryGetSquad
struct UFortItemGroupSlotWidget_TryGetSquad_Params
{
public:
	struct FHomebaseSquad                        OutSquad;                                          // 0x0(0x88)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x88(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21FB[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortItemGroupSlotWidget.SetSlottingPreviewItem
struct UFortItemGroupSlotWidget_SetSlottingPreviewItem_Params
{
public:
	class UFortItem*                             Item;                                              // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortItemGroupSlotWidget.SetItem
struct UFortItemGroupSlotWidget_SetItem_Params
{
public:
	class UFortItem*                             ItemToSlot;                                        // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// DelegateFunction FortniteUI.FortItemGroupSlotWidget.OnItemSlotLockedStateChanged__DelegateSignature
struct UFortItemGroupSlotWidget_OnItemSlotLockedStateChanged__DelegateSignature_Params
{
public:
	class UFortItemGroupSlotWidget*              ItemSlotWidget;                                    // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// DelegateFunction FortniteUI.FortItemGroupSlotWidget.OnItemSet__DelegateSignature
struct UFortItemGroupSlotWidget_OnItemSet__DelegateSignature_Params
{
public:
	class UFortItemGroupSlotWidget*              ItemSlotWidget;                                    // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// DelegateFunction FortniteUI.FortItemGroupSlotWidget.OnAttributeBonusValueChanged__DelegateSignature
struct UFortItemGroupSlotWidget_OnAttributeBonusValueChanged__DelegateSignature_Params
{
public:
	class UFortItemGroupSlotWidget*              ItemSlotWidget;                                    // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortItemGroupSlotWidget.IsManagerSlot
struct UFortItemGroupSlotWidget_IsManagerSlot_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortItemGroupSlotWidget.IsItemCompatible
struct UFortItemGroupSlotWidget_IsItemCompatible_Params
{
public:
	class UFortItem*                             Item;                                              // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21FD[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortItemGroupSlotWidget.InitializeSlot
struct UFortItemGroupSlotWidget_InitializeSlot_Params
{
public:
	class UFortItemGroupWidget*                  HostItemGroupWidget;                               // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SlotIndexInGroup;                                  // 0x8(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21FF[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortItemGroupSlotWidget.HandleTraitStateChanged
struct UFortItemGroupSlotWidget_HandleTraitStateChanged_Params
{
public:
	bool                                         SetBonusMatchStateChanged;                         // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function FortniteUI.FortItemGroupSlotWidget.HandlePreviewStateChanged
struct UFortItemGroupSlotWidget_HandlePreviewStateChanged_Params
{
public:
	bool                                         IsSquadSlotAffectedByPreview;                      // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsBeingReplacedOrRelocated;                        // 0x1(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         WouldHavePersonalitySynergy;                       // 0x2(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         WouldHaveSetBonusMatch;                            // 0x3(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2200[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<struct FGameplayAttribute, float>       PreviewAttributeBonusValues;                       // 0x8(0x50)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortItemGroupSlotWidget.HandleItemPickerSelectionCommittedInternal
struct UFortItemGroupSlotWidget_HandleItemPickerSelectionCommittedInternal_Params
{
public:
	class UFortItem*                             SelectedItem;                                      // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortItemGroupSlotWidget.GetSquadId
struct UFortItemGroupSlotWidget_GetSquadId_Params
{
public:
	class FName                                  ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortItemGroupSlotWidget.CreatePickerWidget
struct UFortItemGroupSlotWidget_CreatePickerWidget_Params
{
public:
	class UFortItemGroupSlotPicker*              ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// Function FortniteUI.FortItemGroupWidget.TryGetSquad
struct UFortItemGroupWidget_TryGetSquad_Params
{
public:
	struct FHomebaseSquad                        OutSquad;                                          // 0x0(0x88)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x88(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2206[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortItemGroupWidget.SetSquad
struct UFortItemGroupWidget_SetSquad_Params
{
public:
	class FName                                  SquadId;                                           // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortItemGroupWidget.HandleItemSlotAdded
struct UFortItemGroupWidget_HandleItemSlotAdded_Params
{
public:
	int32                                        SlotIndex;                                         // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2207[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortItemGroupSlotWidget*              ItemSlotWidget;                                    // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortItemGroupWidget.GetTotalAttributeBonuses
struct UFortItemGroupWidget_GetTotalAttributeBonuses_Params
{
public:
	TArray<struct FFortAttributeModifierDisplayData> OutModifiers;                                      // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortItemGroupWidget.GetSquadId
struct UFortItemGroupWidget_GetSquadId_Params
{
public:
	class FName                                  ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortItemGroupWidget.GetActiveSetBonusTags
struct UFortItemGroupWidget_GetActiveSetBonusTags_Params
{
public:
	TArray<struct FGameplayTag>                  OutActiveSetBonusTags;                             // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortListItem.SetSelected
struct UFortListItem_SetSelected_Params
{
public:
	bool                                         bSelected;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortListItem.SetIndexInList
struct UFortListItem_SetIndexInList_Params
{
public:
	int32                                        InIndexInList;                                     // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortListItem.SetData
struct UFortListItem_SetData_Params
{
public:
	class UObject*                               InData;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortListItem.IsItemExpanded
struct UFortListItem_IsItemExpanded_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortListItem.GetSelectionMode
struct UFortListItem_GetSelectionMode_Params
{
public:
	enum class ESelectionMode                    ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortListItem.GetIndentLevel
struct UFortListItem_GetIndentLevel_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.FortListItem.DoesItemHaveChildren
struct UFortListItem_DoesItemHaveChildren_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortMovieWidget.SetMediaSource
struct UFortMovieWidget_SetMediaSource_Params
{
public:
	class UMediaSource*                          InMediaSource;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMediaSoundWave*                       InMediaSoundWave;                                  // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortMovieWidget.RequestPlayMovie
struct UFortMovieWidget_RequestPlayMovie_Params
{
public:
	bool                                         bShouldRewind;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortMovieWidget.MediaDimensionsUpdated
struct UFortMovieWidget_MediaDimensionsUpdated_Params
{
public:
	float                                        NewWidth;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NewHeight;                                         // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortMovieWidget.HasPlayerForSource
struct UFortMovieWidget_HasPlayerForSource_Params
{
public:
	class UMediaSource*                          InMediaSource;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2208[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortMovieWidget.GetMediaTexture
struct UFortMovieWidget_GetMediaTexture_Params
{
public:
	class UMediaTexture*                         ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortMovieWidget.GetMediaPlayer
struct UFortMovieWidget_GetMediaPlayer_Params
{
public:
	class UMediaPlayer*                          ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function FortniteUI.FortNodeGraphHost.ShowPage
struct UFortNodeGraphHost_ShowPage_Params
{
public:
	class FName                                  NodePageId;                                        // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SourceNodeId;                                      // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  DestinationNodeId;                                 // 0x10(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSelectNode;                                       // 0x18(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOnlyPanIfNew;                                     // 0x19(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2209[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortNodeGraphHost.SetBackgroundMaterial
struct UFortNodeGraphHost_SetBackgroundMaterial_Params
{
public:
	class UMaterialInstanceDynamic*              InBackgroundMaterial;                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// DelegateFunction FortniteUI.FortNodeGraphHost.OnPageShown__DelegateSignature
struct UFortNodeGraphHost_OnPageShown__DelegateSignature_Params
{
public:
	class UFortNodeCanvasHost*                   Page;                                              // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortNodeGraphHost.IsEarlyGame
struct UFortNodeGraphHost_IsEarlyGame_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortNodeGraphHost.GetWidgetTypeForNodePage
struct UFortNodeGraphHost_GetWidgetTypeForNodePage_Params
{
public:
	class FName                                  NodePageId;                                        // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UUserWidget>               ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function FortniteUI.FortNodeGraphHost.GetTokensNeededForNodePage
struct UFortNodeGraphHost_GetTokensNeededForNodePage_Params
{
public:
	class UFortNodeCanvasHost*                   Page;                                              // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UFortItemDefinition*>           OutTokens;                                         // 0x8(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function FortniteUI.FortNodeGraphHost.GetPathToNode
struct UFortNodeGraphHost_GetPathToNode_Params
{
public:
	class FName                                  NodePageId;                                        // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  NodeID;                                            // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          Pages;                                             // 0x10(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FName>                          Nodes;                                             // 0x20(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x30(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_220A[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function FortniteUI.FortNodeGraphHost.GetNodePageName
struct UFortNodeGraphHost_GetNodePageName_Params
{
public:
	class FName                                  NodePageId;                                        // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  ReturnValue;                                       // 0x8(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortNodeGraphHost.GetInitialNodePageName
struct UFortNodeGraphHost_GetInitialNodePageName_Params
{
public:
	class FName                                  ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortNodeGraphHost.GetInitialNodeName
struct UFortNodeGraphHost_GetInitialNodeName_Params
{
public:
	class FName                                  ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortNodePrerequisitesWidget.ProcessNodePrequisites
struct UFortNodePrerequisitesWidget_ProcessNodePrequisites_Params
{
public:
	class FName                                  NodeID;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortNodePrerequisitesWidget.GenerateNodePrerequisiteConnector
struct UFortNodePrerequisitesWidget_GenerateNodePrerequisiteConnector_Params
{
public:
	enum class EFortNodePrerequisiteConnector    Connector;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x710 (0x710 - 0x0)
// Function FortniteUI.FortNodePrerequisitesWidget.GenerateNodePrerequisite
struct UFortNodePrerequisitesWidget_GenerateNodePrerequisite_Params
{
public:
	struct FFortUINodePrerequisite               NodePrerequisite;                                  // 0x0(0x710)(Parm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function FortniteUI.FortPerksWidget.OnGeneratePerkTier
struct UFortPerksWidget_OnGeneratePerkTier_Params
{
public:
	struct FFortUIPerkTier                       FortPerkTier;                                      // 0x0(0x20)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x88 (0x88 - 0x0)
// Function FortniteUI.FortPerkTierWidget.OnGeneratePerk
struct UFortPerkTierWidget_OnGeneratePerk_Params
{
public:
	struct FFortUIPerk                           Perk;                                              // 0x0(0x88)(Parm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortSocialItemWidget.SetSocialItem
struct UFortSocialItemWidget_SetSocialItem_Params
{
public:
	class UFortSocialItem*                       InSocialItem;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortUIManagerWidget.UpdateStateWidgetContent
struct UFortUIManagerWidget_UpdateStateWidgetContent_Params
{
public:
	class UFortUIStateWidget*                    StateWidget;                                       // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortUIManagerWidget.UnregisterStateTrigger
struct UFortUIManagerWidget_UnregisterStateTrigger_Params
{
public:
	class UFortUIStateTrigger*                   TriggerToRemove;                                   // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function FortniteUI.FortUIManagerWidget.ShowErrorDialog
struct UFortUIManagerWidget_ShowErrorDialog_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  OperationDesc;                                     // 0x8(0x18)(Parm, NativeAccessSpecifierPublic)
	class FText                                  DisplayMessage;                                    // 0x20(0x18)(Parm, NativeAccessSpecifierPublic)
	class FString                                ErrorCode;                                         // 0x38(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortUIManagerWidget.SetStateContentDisplayed
struct UFortUIManagerWidget_SetStateContentDisplayed_Params
{
public:
	bool                                         bDisplay;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortUIManagerWidget.ReleaseNotification
struct UFortUIManagerWidget_ReleaseNotification_Params
{
public:
	class UFortUINotification*                   Notification;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortUIManagerWidget.RegisterStateTrigger
struct UFortUIManagerWidget_RegisterStateTrigger_Params
{
public:
	class UFortUIStateTrigger*                   StateTrigger;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortUIManagerWidget.QueueActivatablePanelIntoModalLayer
struct UFortUIManagerWidget_QueueActivatablePanelIntoModalLayer_Params
{
public:
	class UCommonActivatablePanel*               Panel;                                             // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortUIManagerWidget.QueueActionPanelIntoModalLayer
struct UFortUIManagerWidget_QueueActionPanelIntoModalLayer_Params
{
public:
	class UFortActionHandlerPanel*               Panel;                                             // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x9(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_220F[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x180 (0x180 - 0x0)
// Function FortniteUI.FortUIManagerWidget.OnShowConfirmation_NUI
struct UFortUIManagerWidget_OnShowConfirmation_NUI_Params
{
public:
	struct FFortDialogDescription_NUI            Description;                                       // 0x0(0x180)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x170 (0x170 - 0x0)
// Function FortniteUI.FortUIManagerWidget.OnShowConfirmation
struct UFortUIManagerWidget_OnShowConfirmation_Params
{
public:
	struct FFortDialogDescription                Description;                                       // 0x0(0x170)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// DelegateFunction FortniteUI.FortUIManagerWidget.OnBeginSpokenDialog__DelegateSignature
struct UFortUIManagerWidget_OnBeginSpokenDialog__DelegateSignature_Params
{
public:
	class UTexture2D*                            Image;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  Title;                                             // 0x8(0x18)(Parm, NativeAccessSpecifierPublic)
	class FText                                  Subtitle;                                          // 0x20(0x18)(Parm, NativeAccessSpecifierPublic)
	enum class EFortAnnouncementDisplayPreference DisplayPreference;                                 // 0x38(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2210[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortUIManagerWidget.KillConfirmationDialog
struct UFortUIManagerWidget_KillConfirmationDialog_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortUIManagerWidget.IsStateContentDisplayed
struct UFortUIManagerWidget_IsStateContentDisplayed_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortUIManagerWidget.GetUIManagerWidget
struct UFortUIManagerWidget_GetUIManagerWidget_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortUIManagerWidget*                  ReturnValue;                                       // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortUIManagerWidget.GetNavigationManager
struct UFortUIManagerWidget_GetNavigationManager_Params
{
public:
	class UFortUINavigationManager*              ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortUIManagerWidget.GetCurrentUIStateWidget
struct UFortUIManagerWidget_GetCurrentUIStateWidget_Params
{
public:
	class UFortUIStateWidget*                    ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortUIManagerWidget.DisplayStateContent
struct UFortUIManagerWidget_DisplayStateContent_Params
{
public:
	bool                                         bDisplay;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// Function FortniteUI.FortUIManagerWidget.DisplayErrorDialog
struct UFortUIManagerWidget_DisplayErrorDialog_Params
{
public:
	struct FFortErrorInfo                        Info;                                              // 0x0(0x80)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function FortniteUI.FortUIManagerWidget.CreateUIStateTrigger
struct UFortUIManagerWidget_CreateUIStateTrigger_Params
{
public:
	TSubclassOf<class UFortUIStateTrigger>       Class;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               WorldContextObject;                                // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortUIStateTrigger*                   ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortUIManagerWidget.CreateNotification
struct UFortUIManagerWidget_CreateNotification_Params
{
public:
	TSubclassOf<class UFortUINotification>       UINotificationClass;                               // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortUINotification*                   ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortUIManagerWidget._BPGetCurrentUIState
struct UFortUIManagerWidget__BPGetCurrentUIState_Params
{
public:
	enum class EFortUIState                      ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function FortniteUI.FortUserChoiceWidget.SetChoices
struct UFortUserChoiceWidget_SetChoices_Params
{
public:
	struct FChoiceData                           ChoiceItems;                                       // 0x0(0x30)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortWorkerSetBonusIcon.SetGameplayTag
struct UFortWorkerSetBonusIcon_SetGameplayTag_Params
{
public:
	struct FGameplayTag                          InGameplayTag;                                     // 0x0(0x8)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function FortniteUI.UINavigationManager.PushNavigation
struct UUINavigationManager_PushNavigation_Params
{
public:
	class FText                                  DisplayName;                                       // 0x0(0x18)(Parm, NativeAccessSpecifierPublic)
	class UObject*                               ObjectData;                                        // 0x18(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  IdData;                                            // 0x20(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        IntData;                                           // 0x28(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_221B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           OnNavigateTo;                                      // 0x30(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	UDelegateProperty_                           OnNavigateFrom;                                    // 0x40(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.UINavigationManager.NavigationToIndex
struct UUINavigationManager_NavigationToIndex_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteUI.UINavigationManager.GetStackSize
struct UUINavigationManager_GetStackSize_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function FortniteUI.UINavigationManager.GetDisplayName
struct UUINavigationManager_GetDisplayName_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_221D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ReturnValue;                                       // 0x8(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function FortniteUI.FortUINavigationManager.TryGetPendingNavigationOp
struct UFortUINavigationManager_TryGetPendingNavigationOp_Params
{
public:
	struct FFortUINavigationOperation            NavigationOp;                                      // 0x0(0x38)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x38(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_221E[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortUINavigationManager.SetScrollWidget
struct UFortUINavigationManager_SetScrollWidget_Params
{
public:
	class UWidget*                               Widget;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortUINavigationManager.PushSquadManagementScreen
struct UFortUINavigationManager_PushSquadManagementScreen_Params
{
public:
	class FName                                  SquadId;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SquadSlotIndex;                                    // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_221F[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortUINavigationManager.PushSkillTreePage
struct UFortUINavigationManager_PushSkillTreePage_Params
{
public:
	class FName                                  SkillTreePageId;                                   // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortUINavigationManager.PushSkillTreeNode
struct UFortUINavigationManager_PushSkillTreeNode_Params
{
public:
	class FName                                  SkillTreeNodeId;                                   // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortUINavigationManager.PushItemManagementScreen
struct UFortUINavigationManager_PushItemManagementScreen_Params
{
public:
	enum class EFortFrontendInventoryFilter      ItemManagementFilter;                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortUINavigationManager.PushItemInspectionScreen
struct UFortUINavigationManager_PushItemInspectionScreen_Params
{
public:
	class UFortItem*                             ItemToInspect;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortItemInspectionMode           Mode;                                              // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReadOnly;                                         // 0x9(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowFavoriting;                                  // 0xA(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsTemporaryItem;                                  // 0xB(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2220[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortUINavigationManager.NavigateToSquadSlot
struct UFortUINavigationManager_NavigateToSquadSlot_Params
{
public:
	class FName                                  SquadId;                                           // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SquadSlotIndex;                                    // 0x8(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2221[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortUINavigationManager.NavigateToQuestObjective
struct UFortUINavigationManager_NavigateToQuestObjective_Params
{
public:
	class UFortQuestItem*                        QuestItem;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function FortniteUI.FortUINavigationManager.NavigateToNodePageByGameplayTagContainer
struct UFortUINavigationManager_NavigateToNodePageByGameplayTagContainer_Params
{
public:
	struct FGameplayTagContainer                 GameplayTagContainer;                              // 0x0(0x20)(Parm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortUINavigationManager.NavigateToNodePage
struct UFortUINavigationManager_NavigateToNodePage_Params
{
public:
	class FName                                  PageId;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  NodeID;                                            // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortUINavigationManager.NavigateToItemManagementScreen
struct UFortUINavigationManager_NavigateToItemManagementScreen_Params
{
public:
	enum class EFortFrontendInventoryFilter      Filter;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortUINavigationManager.NavigateToItem
struct UFortUINavigationManager_NavigateToItem_Params
{
public:
	class UFortItem*                             Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortUINavigationManager.NavigateToFeature
struct UFortUINavigationManager_NavigateToFeature_Params
{
public:
	enum class EFortUIFeature                    Feature;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function FortniteUI.FortUINavigationManager.HasPendingNavigationOp
struct UFortUINavigationManager_HasPendingNavigationOp_Params
{
public:
	enum class EFortUINavigationOp               NavigationOp;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteUI.FortUINavigationManager.CompletePendingNavigationOp
struct UFortUINavigationManager_CompletePendingNavigationOp_Params
{
public:
	enum class EFortUINavigationOp               NavigationOp;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortUINavigationManager.CenterWidget
struct UFortUINavigationManager_CenterWidget_Params
{
public:
	class UWidget*                               Widget;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortUINavigationManager.CanNavigateToQuestObjective
struct UFortUINavigationManager_CanNavigateToQuestObjective_Params
{
public:
	class UFortQuestItem*                        QuestItem;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_222F[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function FortniteUI.FortUINavigationManager.AttemptPlayQuest
struct UFortUINavigationManager_AttemptPlayQuest_Params
{
public:
	class UFortQuestItem*                        Quest;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteUI.FortUINavigationManager.AttemptMatchmakeForQuest
struct UFortUINavigationManager_AttemptMatchmakeForQuest_Params
{
public:
	class UFortQuestItem*                        Quest;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         OutContentNotDownloaded;                           // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x9(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2230[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}
}


