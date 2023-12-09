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

// 0x508 (0x508 - 0x0)
// Function Tooltip-CoreStat.Tooltip-CoreStat_C.Update
struct UTooltipMinusCoreStat_C_Update_Params
{
public:
	struct FHeroCoreStat                         Data;                                              // 0x0(0x3B0)(Parm, HasGetValueTypeHash)
	float                                        Value;                                             // 0x3B0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2C84[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           CallFunc_GetBrushBySizeFromMultiSizeBrush_ReturnValue; // 0x3B8(0x90)(ConstParm)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x448(0x40)(HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_FloatToText_ReturnValue;             // 0x488(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData2;             // 0x4A0(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x4E0(0x10)(ZeroConstructor, ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x4F0(0x18)(None)
};

// 0x4 (0x4 - 0x0)
// Function Tooltip-CoreStat.Tooltip-CoreStat_C.ExecuteUbergraph_Tooltip-CoreStat
struct UTooltipMinusCoreStat_C_ExecuteUbergraph_TooltipMinusCoreStat_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


