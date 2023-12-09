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

// 0x190 (0x190 - 0x0)
// Function RewardsWidget.RewardsWidget_C.OnHandleAction
struct URewardsWidget_C_OnHandleAction_Params
{
public:
	struct FEventReply                           Result;                                            // 0x0(0xB8)(Parm, OutParm)
	bool                                         bPassThrough;                                      // 0xB8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2E95[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0xC0(0xB8)(None)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x178(0x10)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x188(0x8)(NoDestructor)
};

// 0x238 (0x238 - 0x0)
// Function RewardsWidget.RewardsWidget_C.On_ClosedChest_MouseButtonDown_1
struct URewardsWidget_C_On_ClosedChest_MouseButtonDown_1_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x34)(Parm, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2E96[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x78)(ConstParm, Parm, OutParm, ReferenceParm)
	struct FEventReply                           ReturnValue;                                       // 0xB0(0xB8)(Parm, OutParm, ReturnParm)
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0x168(0xB8)(None)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x220(0x10)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x230(0x8)(NoDestructor)
};

// 0x25 (0x25 - 0x0)
// Function RewardsWidget.RewardsWidget_C.GetClosedChestImage
struct URewardsWidget_C_GetClosedChestImage_Params
{
public:
	class UTexture2D*                            ChestImage;                                        // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            ClosedChestImage;                                  // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue;                   // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortUIRewardReport*                   CallFunc_GetLastMissionRewardReport_ReturnValue;   // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetRewardDisplayLevel_ReturnValue;        // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function RewardsWidget.RewardsWidget_C.TerminateQuestConverstation
struct URewardsWidget_C_TerminateQuestConverstation_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x58 (0x58 - 0x0)
// Function RewardsWidget.RewardsWidget_C.SetupQuestRewardsChoice
struct URewardsWidget_C_SetupQuestRewardsChoice_Params
{
public:
	class UFortQuestItem*                        Quest;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  HeaderText;                                        // 0x8(0x18)(Edit)
	class UFortQuestItemDefinition*              CallFunc_GetQuestDefinitionBP_ReturnValue;         // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FFortMcpQuestRewardInfo>       CallFunc_GetSelectableRewards_BP_ReturnValue;      // 0x28(0x10)(ZeroConstructor, ReferenceParm)
	int32                                        CallFunc_Array_LastIndex_ReturnValue;              // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FFortItemInstanceQuantityPair> CallFunc_GetPreviewSelectableRewards_ReturnValue;  // 0x40(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2E97[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xAB (0xAB - 0x0)
// Function RewardsWidget.RewardsWidget_C.CreateRewardChoice
struct URewardsWidget_C_CreateRewardChoice_Params
{
public:
	TArray<struct FFortItemInstanceQuantityPair> Rewards;                                           // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm)
	int32                                        RewardIndex;                                       // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsRewardSelection;                                 // 0x14(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2E98[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable;                                // 0x18(0x18)(None)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2E99[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class URewardsChoiceButtonWidget_C*          CallFunc_Create_ReturnValue;                       // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2E9A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UItemOrWidget_C*                       CallFunc_Create_ReturnValue2;                      // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue;                     // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Temp_text_Variable2;                               // 0x60(0x18)(None)
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue2;                    // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable2;                               // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2E9B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x84(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x89(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2E9C[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default;                             // 0x90(0x18)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable2;                               // 0xA9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select2_Default;                            // 0xAA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x24 (0x24 - 0x0)
// Function RewardsWidget.RewardsWidget_C.SelectRewards
struct URewardsWidget_C_SelectRewards_Params
{
public:
	int32                                        RewardIndex;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2E9D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class URewardsChoiceButtonWidget_C*          CallFunc_Array_Get_Item;                           // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2E9E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x70 (0x70 - 0x0)
// Function RewardsWidget.RewardsWidget_C.PlayQuestConversation
struct URewardsWidget_C_PlayQuestConversation_Params
{
public:
	class UFortConversation*                     Conversation;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortClientAnnouncementData_Conversation K2Node_MakeStruct_FortClientAnnouncementData_Conversation; // 0x8(0x10)(NoDestructor)
	TArray<class AFortPlayerController*>         CallFunc_GetLocalFortPlayerControllers_ReturnValue; // 0x18(0x10)(ZeroConstructor, ReferenceParm)
	uint8                                        Pad_2E9F[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_MakeTransform_ReturnValue;                // 0x30(0x30)(IsPlainOldData, NoDestructor)
	class AActor*                                CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AAnnounce_Gen_Quest_Conversation_C*    CallFunc_FinishSpawningActor_ReturnValue;          // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x25 (0x25 - 0x0)
// Function RewardsWidget.RewardsWidget_C.GetChestImage
struct URewardsWidget_C_GetChestImage_Params
{
public:
	class UTexture2D*                            MissionIcon;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            Header_Image;                                      // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue;                   // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortUIRewardReport*                   CallFunc_GetLastMissionRewardReport_ReturnValue;   // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetRewardDisplayLevel_ReturnValue;        // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x68 (0x68 - 0x0)
// Function RewardsWidget.RewardsWidget_C.SelectText
struct URewardsWidget_C_SelectText_Params
{
public:
	class FText                                  InText;                                            // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm)
	class FText                                  Default;                                           // 0x18(0x18)(Parm)
	class FText                                  ReturnValue;                                       // 0x30(0x18)(Parm, OutParm, ReturnParm)
	bool                                         Temp_bool_Variable;                                // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_TextIsEmpty_ReturnValue;                  // 0x49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2EA0[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default;                             // 0x50(0x18)(None)
};

// 0x58 (0x58 - 0x0)
// Function RewardsWidget.RewardsWidget_C.PopulateFromMissionWithRewards
struct URewardsWidget_C_PopulateFromMissionWithRewards_Params
{
public:
	struct FFortLastMissionInfo                  LastMissionInfo;                                   // 0x0(0x48)(Parm)
	TArray<struct FFortItemInstanceQuantityPair> MissionRewards;                                    // 0x48(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// 0x78 (0x78 - 0x0)
// Function RewardsWidget.RewardsWidget_C.PopulateMissionUI
struct URewardsWidget_C_PopulateMissionUI_Params
{
public:
	struct FFortLastMissionInfo                  Mission;                                           // 0x0(0x48)(Parm)
	class FText                                  CallFunc_SelectText_ReturnValue;                   // 0x48(0x18)(None)
	class FText                                  CallFunc_SelectText_ReturnValue2;                  // 0x60(0x18)(None)
};

// 0x160 (0x160 - 0x0)
// Function RewardsWidget.RewardsWidget_C.SetupUI
struct URewardsWidget_C_SetupUI_Params
{
public:
	enum class ERewardType                       RewardType;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2EA1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            HeaderImage;                                       // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  HeaderText;                                        // 0x10(0x18)(Edit)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum2_CmpSuccess;                     // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2EA2[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            CallFunc_GetClosedChestImage_ChestImage;           // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush;                      // 0x38(0x90)(None)
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush2;                     // 0xC8(0x90)(None)
	class UTexture2D*                            CallFunc_GetChestImage_MissionIcon;                // 0x158(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function RewardsWidget.RewardsWidget_C.PopulateFromQuestWithRewards
struct URewardsWidget_C_PopulateFromQuestWithRewards_Params
{
public:
	class UFortQuestItem*                        Quest;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FFortItemInstanceQuantityPair> Rewards;                                           // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// 0x108 (0x108 - 0x0)
// Function RewardsWidget.RewardsWidget_C.PopulateQuestUI
struct URewardsWidget_C_PopulateQuestUI_Params
{
public:
	class UFortQuestItem*                        Quest;                                             // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         RewardSelect;                                      // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2EA3[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortQuestItemDefinition*              CallFunc_GetQuestDefinitionBP_ReturnValue;         // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortQuestItemDefinition*              CallFunc_GetQuestDefinitionBP_ReturnValue2;        // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortConversation*                     CallFunc_GetSelectRewardsConversation_ReturnValue; // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetCompletionText_ReturnValue;            // 0x28(0x18)(None)
	bool                                         CallFunc_TextIsEmpty_ReturnValue;                  // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2EA4[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetDisplayName_ReturnValue;               // 0x48(0x18)(None)
	class UFortConversation*                     CallFunc_GetClaimConversation_ReturnValue;         // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue2;                     // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue3;                     // 0x69(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable2;                               // 0x6A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x6B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortBrushSize                    Temp_byte_Variable3;                               // 0x6C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x6D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortBrushSize                    Temp_byte_Variable4;                               // 0x6E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable2;                               // 0x6F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortBrushSize                    K2Node_Select2_Default;                            // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2EA5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           CallFunc_GetItemSmallPreviewImageBrush_ReturnValue; // 0x78(0x90)(None)
};

// 0x18 (0x18 - 0x0)
// Function RewardsWidget.RewardsWidget_C.PopulateFromQuest
struct URewardsWidget_C_PopulateFromQuest_Params
{
public:
	class UFortQuestItem*                        Quest;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FFortItemInstanceQuantityPair> CallFunc_GetPreviewRewards_ReturnValue;            // 0x8(0x10)(ZeroConstructor, ReferenceParm)
};

// 0x8 (0x8 - 0x0)
// Function RewardsWidget.RewardsWidget_C.BndEvt__ButtonIconText_K2Node_ComponentBoundEvent_377_FortBaseButtonClicked__DelegateSignature
struct URewardsWidget_C_BndEvt__ButtonIconText_K2Node_ComponentBoundEvent_377_FortBaseButtonClicked__DelegateSignature_Params
{
public:
	class UFortBaseButton*                       Button;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function RewardsWidget.RewardsWidget_C.BndEvt__ButtonIconText_C_0_K2Node_ComponentBoundEvent_70_FortBaseButtonClicked__DelegateSignature
struct URewardsWidget_C_BndEvt__ButtonIconText_C_0_K2Node_ComponentBoundEvent_70_FortBaseButtonClicked__DelegateSignature_Params
{
public:
	class UFortBaseButton*                       Button;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function RewardsWidget.RewardsWidget_C.SetQuest
struct URewardsWidget_C_SetQuest_Params
{
public:
	class UFortQuestItem*                        Quest;                                             // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function RewardsWidget.RewardsWidget_C.HandleClientEvent_ConversationFinished
struct URewardsWidget_C_HandleClientEvent_ConversationFinished_Params
{
public:
	class UObject*                               EventSource;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               EventFocus;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortClientEvent                      ClientEvent;                                       // 0x10(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function RewardsWidget.RewardsWidget_C.BndEvt__OpenChestButton_K2Node_ComponentBoundEvent_234_FortBaseButtonClicked__DelegateSignature
struct URewardsWidget_C_BndEvt__OpenChestButton_K2Node_ComponentBoundEvent_234_FortBaseButtonClicked__DelegateSignature_Params
{
public:
	class UFortBaseButton*                       Button;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x108 (0x108 - 0x0)
// Function RewardsWidget.RewardsWidget_C.ExecuteUbergraph_RewardsWidget
struct URewardsWidget_C_ExecuteUbergraph_RewardsWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2EA6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortQuestManager*                     CallFunc_GetQuestManager_ReturnValue;              // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortBaseButton*                       K2Node_ComponentBoundEvent_Button2;                // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortQuestItem*                        K2Node_Event_Quest;                                // 0x20(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               K2Node_HandleClientEvent_EventSource;              // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               K2Node_HandleClientEvent_EventFocus;               // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortClientEvent                      K2Node_HandleClientEvent_ClientEvent;              // 0x38(0x20)(ConstParm, NoDestructor)
	class UFortBaseButton*                       K2Node_ComponentBoundEvent_Button;                 // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            CallFunc_GetChestImage_MissionIcon;                // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush;                      // 0x68(0x90)(None)
	class UAudioComponent*                       CallFunc_SpawnSound2D_ReturnValue;                 // 0xF8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortBaseButton*                       K2Node_ComponentBoundEvent_Button3;                // 0x100(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


