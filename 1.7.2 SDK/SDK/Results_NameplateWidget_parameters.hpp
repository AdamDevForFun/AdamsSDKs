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

// 0x1 (0x1 - 0x0)
// Function Results_NameplateWidget.Results_NameplateWidget_C.Outro
struct UResults_NameplateWidget_C_Outro_Params
{
public:
	bool                                         CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x80 (0x80 - 0x0)
// Function Results_NameplateWidget.Results_NameplateWidget_C.Initialize
struct UResults_NameplateWidget_C_Initialize_Params
{
public:
	enum class EFortCompletionResult             Result;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortCompletionResult             Temp_byte_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_38DE[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable;                                // 0x8(0x18)(None)
	class FText                                  Temp_text_Variable2;                               // 0x20(0x18)(None)
	class FText                                  Temp_text_Variable3;                               // 0x38(0x18)(None)
	class FText                                  Temp_text_Variable4;                               // 0x50(0x18)(None)
	class FText                                  K2Node_Select_Default;                             // 0x68(0x18)(None)
};

// 0x10 (0x10 - 0x0)
// Function Results_NameplateWidget.Results_NameplateWidget_C.ExecuteUbergraph_Results_NameplateWidget
struct UResults_NameplateWidget_C_ExecuteUbergraph_Results_NameplateWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_38DF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetEndTime_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Subtract_FloatFloat_ReturnValue;          // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


