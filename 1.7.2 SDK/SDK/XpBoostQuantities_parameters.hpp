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

// 0x34 (0x34 - 0x0)
// Function XpBoostQuantities.XpBoostQuantities_C.ScaledRestBalance
struct UXpBoostQuantities_C_ScaledRestBalance_Params
{
public:
	int32                                        AmountToLevel;                                     // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Xp_For_Level;                                      // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue;              // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_MakeLiteralFloat_ReturnValue;             // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_37C1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortMcpContext*                       CallFunc_GetContext_ReturnValue;                   // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetRestXpBalance_ReturnValue;             // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue2;             // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Divide_FloatFloat_ReturnValue;            // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_FTrunc_ReturnValue;                       // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x34 (0x34 - 0x0)
// Function XpBoostQuantities.XpBoostQuantities_C.ScaledBoostBalance
struct UXpBoostQuantities_C_ScaledBoostBalance_Params
{
public:
	int32                                        AmountToLevel;                                     // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Xp_For_Level;                                      // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue;              // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_MakeLiteralFloat_ReturnValue;             // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_37C2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortMcpContext*                       CallFunc_GetContext_ReturnValue;                   // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetXpBoostBalance_ReturnValue;            // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue2;             // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Divide_FloatFloat_ReturnValue;            // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_FTrunc_ReturnValue;                       // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x208 (0x208 - 0x0)
// Function XpBoostQuantities.XpBoostQuantities_C.UpdateXPQuantitiesInfo
struct UXpBoostQuantities_C_UpdateXPQuantitiesInfo_Params
{
public:
	int32                                        CurrentXP;                                         // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        XPToLevel;                                         // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue;              // 0x8(0x18)(None)
	class UFortFrontEndContext*                  CallFunc_GetContext_ReturnValue;                   // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortMcpContext*                       CallFunc_GetContext_ReturnValue2;                  // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortPublicAccountInfo                CallFunc_GetCurrentlyViewedAccountInfo_Result;     // 0x30(0x10)(NoDestructor)
	int32                                        CallFunc_ScaledBoostBalance_ReturnValue;           // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_37C3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x48(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x88(0x10)(ZeroConstructor, ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x98(0x18)(None)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37C4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xB4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_ScaledRestBalance_ReturnValue;            // 0xB8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_37C5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFortItemQuantityPair>         CallFunc_GetAccountLevelUpRewards_Rewards;         // 0xC0(0x10)(ZeroConstructor, ReferenceParm)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData2;             // 0xD0(0x40)(HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x110(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_37C6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array2;                           // 0x118(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x128(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37C7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Format_ReturnValue2;                      // 0x130(0x18)(None)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x148(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData3;             // 0x160(0x40)(HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData4;             // 0x1A0(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array3;                           // 0x1E0(0x10)(ZeroConstructor, ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue3;                      // 0x1F0(0x18)(None)
};

// 0x10 (0x10 - 0x0)
// Function XpBoostQuantities.XpBoostQuantities_C.HandleAccountUpdate
struct UXpBoostQuantities_C_HandleAccountUpdate_Params
{
public:
	struct FFortPublicAccountInfo                NewInfo;                                           // 0x0(0x10)(Parm, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function XpBoostQuantities.XpBoostQuantities_C.Xp Boost Changed
struct UXpBoostQuantities_C_Xp_Boost_Changed_Params
{
public:
	int32                                        BoostAmount;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x44 (0x44 - 0x0)
// Function XpBoostQuantities.XpBoostQuantities_C.ExecuteUbergraph_XpBoostQuantities
struct UXpBoostQuantities_C_ExecuteUbergraph_XpBoostQuantities_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_37C8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate2;             // 0x18(0x10)(ZeroConstructor, NoDestructor)
	class UFortMcpContext*                       CallFunc_GetContext_ReturnValue;                   // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortPublicAccountInfo                K2Node_CustomEvent_NewInfo;                        // 0x30(0x10)(NoDestructor)
	int32                                        K2Node_CustomEvent_BoostAmount;                    // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


