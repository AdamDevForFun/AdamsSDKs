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

// 0x19 (0x19 - 0x0)
// Function AthenaInventoryPanel.AthenaInventoryPanel_C.HandleDropItemConfirmationCallback
struct UAthenaInventoryPanel_C_HandleDropItemConfirmationCallback_Params
{
public:
	int32                                        ChosenQuantity;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3A27[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortItem*                             Item;                                              // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortWorldItem*                        K2Node_DynamicCast_AsFort_World_Item;              // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function AthenaInventoryPanel.AthenaInventoryPanel_C.DestroyQuantitySelectorWidget
struct UAthenaInventoryPanel_C_DestroyQuantitySelectorWidget_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x48 (0x48 - 0x0)
// Function AthenaInventoryPanel.AthenaInventoryPanel_C.CreateQuantitySelectorWidget
struct UAthenaInventoryPanel_C_CreateQuantitySelectorWidget_Params
{
public:
	class UFortWorldItem*                        Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  ConfirmationText;                                  // 0x8(0x18)(Parm)
	int32                                        CallFunc_GetNumInStack_ReturnValue;                // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3A28[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortUIManagerWidget_NUI*              CallFunc_GetUIManagerWidget_ReturnValue;           // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Divide_IntInt_ReturnValue;                // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3A29[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UQuantitySelector_C*                   CallFunc_Create_ReturnValue;                       // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function AthenaInventoryPanel.AthenaInventoryPanel_C.RefocusOnInventory
struct UAthenaInventoryPanel_C_RefocusOnInventory_Params
{
public:
	class UObject*                               CallFunc_GetSelectedItem_ReturnValue;              // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortUINavigationManager*              CallFunc_GetUINavigationManager_ReturnValue;       // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function AthenaInventoryPanel.AthenaInventoryPanel_C.DropItem
struct UAthenaInventoryPanel_C_DropItem_Params
{
public:
	class UFortWorldItem*                        Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Quantity;                                          // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetNumInStack_ReturnValue;                // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A2A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortInventoryContext*                 CallFunc_GetContext_ReturnValue;                   // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x39 (0x39 - 0x0)
// Function AthenaInventoryPanel.AthenaInventoryPanel_C.HandleDrop
struct UAthenaInventoryPanel_C_HandleDrop_Params
{
public:
	bool                                         PassThrough;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A2B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor)
	class UAthenaHUDContext*                     CallFunc_GetContext_ReturnValue;                   // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItem*                             CallFunc_GetSelectedInventoryItem_ReturnValue;     // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortWorldItem*                        K2Node_DynamicCast_AsFort_World_Item;              // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A2C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetNumInStack_ReturnValue;                // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x31 (0x31 - 0x0)
// Function AthenaInventoryPanel.AthenaInventoryPanel_C.RegisterDrop
struct UAthenaInventoryPanel_C_RegisterDrop_Params
{
public:
	class UAthenaHUDContext*                     CallFunc_GetContext_ReturnValue;                   // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor)
	class UFortItem*                             CallFunc_GetSelectedInventoryItem_ReturnValue;     // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   K2Node_MakeStruct_DataTableRowHandle;              // 0x20(0x10)(NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x31 (0x31 - 0x0)
// Function AthenaInventoryPanel.AthenaInventoryPanel_C.PerformEquip
struct UAthenaInventoryPanel_C_PerformEquip_Params
{
public:
	class UFortItem*                             Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HandleClose_PassThrough;                  // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsSlotted_ReturnValue;                    // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortItemType                     CallFunc_GetType_ReturnValue;                      // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue;            // 0xB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A2D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortInventoryContext*                 CallFunc_GetContext_ReturnValue;                   // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue2;                  // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsUsingGamepad_ReturnValue;               // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A2E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortInventoryContext*                 CallFunc_GetContext_ReturnValue3;                  // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_RemoveItemFromQuickBar_ReturnValue;       // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function AthenaInventoryPanel.AthenaInventoryPanel_C.RegisterLeaveInventory
struct UAthenaInventoryPanel_C_RegisterLeaveInventory_Params
{
public:
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0x10)(ZeroConstructor, NoDestructor)
	struct FDataTableRowHandle                   K2Node_MakeStruct_DataTableRowHandle;              // 0x10(0x10)(NoDestructor)
};

// 0x21 (0x21 - 0x0)
// Function AthenaInventoryPanel.AthenaInventoryPanel_C.HandleEquip
struct UAthenaInventoryPanel_C_HandleEquip_Params
{
public:
	bool                                         PassThrough;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A2F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortItem*                             Item;                                              // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               CallFunc_GetSelectedItem_ReturnValue;              // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItem*                             K2Node_DynamicCast_AsFort_Item;                    // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xC0 (0xC0 - 0x0)
// Function AthenaInventoryPanel.AthenaInventoryPanel_C.RegisterEquip
struct UAthenaInventoryPanel_C_RegisterEquip_Params
{
public:
	enum class EInputActionState                 Temp_byte_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A30[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAthenaHUDContext*                     CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItem*                             CallFunc_GetSelectedInventoryItem_ReturnValue;     // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EInputActionState                 Temp_byte_Variable2;                               // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A31[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x20(0x10)(ZeroConstructor, NoDestructor)
	struct FDataTableRowHandle                   K2Node_MakeStruct_DataTableRowHandle;              // 0x30(0x10)(NoDestructor)
	class UAthenaHUDContext*                     CallFunc_GetContext_ReturnValue2;                  // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItem*                             CallFunc_GetSelectedInventoryItem_ReturnValue2;    // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAthenaHUDContext*                     CallFunc_GetContext_ReturnValue3;                  // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_DoesMatchSearchString_ReturnValue;        // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A32[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortItem*                             CallFunc_GetSelectedInventoryItem_ReturnValue3;    // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsSlotted_ReturnValue;                    // 0x69(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A33[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPlayerController*                 CallFunc_GetOwningController_ReturnValue;          // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsEquipable_ReturnValue;                  // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A34[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAthenaHUDContext*                     CallFunc_GetContext_ReturnValue4;                  // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A35[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortItem*                             CallFunc_GetSelectedInventoryItem_ReturnValue4;    // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortItemType                     CallFunc_GetType_ReturnValue;                      // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EInputActionState                 K2Node_Select_Default;                             // 0x99(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x9A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A36[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate2;             // 0xA0(0x10)(ZeroConstructor, NoDestructor)
	struct FDataTableRowHandle                   K2Node_MakeStruct_DataTableRowHandle2;             // 0xB0(0x10)(NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function AthenaInventoryPanel.AthenaInventoryPanel_C.RegisterBack
struct UAthenaInventoryPanel_C_RegisterBack_Params
{
public:
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0x10)(ZeroConstructor, NoDestructor)
	struct FDataTableRowHandle                   K2Node_MakeStruct_DataTableRowHandle;              // 0x10(0x10)(NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function AthenaInventoryPanel.AthenaInventoryPanel_C.HandleClose
struct UAthenaInventoryPanel_C_HandleClose_Params
{
public:
	bool                                         PassThrough;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A37[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortHUDContext*                       CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3F (0x3F - 0x0)
// Function AthenaInventoryPanel.AthenaInventoryPanel_C.GetSelectedEquipSlot
struct UAthenaInventoryPanel_C_GetSelectedEquipSlot_Params
{
public:
	int32                                        Slot;                                              // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A38[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A39[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue2;                  // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3A3A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UAthenaInventoryEquipSlot_C*>   K2Node_MakeArray_Array;                            // 0x20(0x10)(ZeroConstructor, ReferenceParm)
	class UAthenaInventoryEquipSlot_C*           CallFunc_Array_Get_Item;                           // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsSelected_Selected;                      // 0x3C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x3D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x3E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x38 (0x38 - 0x0)
// Function AthenaInventoryPanel.AthenaInventoryPanel_C.ProcessSlotAction
struct UAthenaInventoryPanel_C_ProcessSlotAction_Params
{
public:
	int32                                        SelectedSlot;                                      // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3A3B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortInventoryContext*                 CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A3C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAthenaHUDContext*                     CallFunc_GetContext_ReturnValue2;                  // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItem*                             CallFunc_GetSelectedInventoryItem_ReturnValue;     // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetSelectedEquipSlot_Slot;                // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_DropItemOnQuickBar_ReturnValue;           // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A3D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortUINavigationManager*              CallFunc_GetUINavigationManager_ReturnValue;       // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function AthenaInventoryPanel.AthenaInventoryPanel_C.HandleQuickBarChangedBP
struct UAthenaInventoryPanel_C_HandleQuickBarChangedBP_Params
{
public:
	enum class EFortQuickBars                    QuickBarType;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function AthenaInventoryPanel.AthenaInventoryPanel_C.RequestEquip
struct UAthenaInventoryPanel_C_RequestEquip_Params
{
public:
	class UFortItem*                             Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function AthenaInventoryPanel.AthenaInventoryPanel_C.OnInventoryItemSelected
struct UAthenaInventoryPanel_C_OnInventoryItemSelected_Params
{
public:
	class UFortItem*                             Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function AthenaInventoryPanel.AthenaInventoryPanel_C.BndEvt__EquipSlot1_K2Node_ComponentBoundEvent_1_OnEquipRequested__DelegateSignature
struct UAthenaInventoryPanel_C_BndEvt__EquipSlot1_K2Node_ComponentBoundEvent_1_OnEquipRequested__DelegateSignature_Params
{
public:
	int32                                        SlotIndex;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function AthenaInventoryPanel.AthenaInventoryPanel_C.BndEvt__EquipSlot2_K2Node_ComponentBoundEvent_3_OnEquipRequested__DelegateSignature
struct UAthenaInventoryPanel_C_BndEvt__EquipSlot2_K2Node_ComponentBoundEvent_3_OnEquipRequested__DelegateSignature_Params
{
public:
	int32                                        SlotIndex;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function AthenaInventoryPanel.AthenaInventoryPanel_C.BndEvt__EquipSlot3_K2Node_ComponentBoundEvent_6_OnEquipRequested__DelegateSignature
struct UAthenaInventoryPanel_C_BndEvt__EquipSlot3_K2Node_ComponentBoundEvent_6_OnEquipRequested__DelegateSignature_Params
{
public:
	int32                                        SlotIndex;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function AthenaInventoryPanel.AthenaInventoryPanel_C.BndEvt__EquipSlot4_K2Node_ComponentBoundEvent_10_OnEquipRequested__DelegateSignature
struct UAthenaInventoryPanel_C_BndEvt__EquipSlot4_K2Node_ComponentBoundEvent_10_OnEquipRequested__DelegateSignature_Params
{
public:
	int32                                        SlotIndex;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function AthenaInventoryPanel.AthenaInventoryPanel_C.BndEvt__EquipSlot5_K2Node_ComponentBoundEvent_15_OnEquipRequested__DelegateSignature
struct UAthenaInventoryPanel_C_BndEvt__EquipSlot5_K2Node_ComponentBoundEvent_15_OnEquipRequested__DelegateSignature_Params
{
public:
	int32                                        SlotIndex;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x50 (0x50 - 0x0)
// Function AthenaInventoryPanel.AthenaInventoryPanel_C.ExecuteUbergraph_AthenaInventoryPanel
struct UAthenaInventoryPanel_C_ExecuteUbergraph_AthenaInventoryPanel_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortQuickBars                    K2Node_Event_QuickBarType;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A3E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAthenaHUDContext*                     CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A3F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortItem*                             CallFunc_GetSelectedInventoryItem_ReturnValue;     // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItem*                             K2Node_Event_Item2;                                // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItem*                             K2Node_Event_Item;                                 // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A40[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_ComponentBoundEvent_SlotIndex5;             // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_SlotIndex4;             // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_SlotIndex3;             // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_SlotIndex2;             // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_SlotIndex;              // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAthenaHUDContext*                     CallFunc_GetContext_ReturnValue2;                  // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


