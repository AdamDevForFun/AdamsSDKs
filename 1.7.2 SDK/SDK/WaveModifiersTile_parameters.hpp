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

// 0xD0 (0xD0 - 0x0)
// Function WaveModifiersTile.WaveModifiersTile_C.SetModifierItem
struct UWaveModifiersTile_C_SetModifierItem_Params
{
public:
	class UFortItem*                             ModifierItem;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2407[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           CallFunc_GetItemSmallPreviewImageBrush_ReturnValue; // 0x10(0x90)(None)
	class FText                                  CallFunc_GetDescription_ReturnValue;               // 0xA0(0x18)(None)
	class FText                                  CallFunc_GetDisplayName_ReturnValue;               // 0xB8(0x18)(None)
};

// 0x8 (0x8 - 0x0)
// Function WaveModifiersTile.WaveModifiersTile_C.SetData
struct UWaveModifiersTile_C_SetData_Params
{
public:
	class UObject*                               InData;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xE0 (0xE0 - 0x0)
// Function WaveModifiersTile.WaveModifiersTile_C.ExecuteUbergraph_WaveModifiersTile
struct UWaveModifiersTile_C_ExecuteUbergraph_WaveModifiersTile_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2408[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               K2Node_CustomEvent_InData;                         // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItem*                             K2Node_DynamicCast_AsFort_Item;                    // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2409[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           CallFunc_GetItemSmallPreviewImageBrush_ReturnValue; // 0x20(0x90)(None)
	class FText                                  CallFunc_GetDescription_ReturnValue;               // 0xB0(0x18)(None)
	class FText                                  CallFunc_GetDisplayName_ReturnValue;               // 0xC8(0x18)(None)
};

}
}


