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
// Function TT_SupplyDrop.TT_SupplyDrop_C.InitializeAbilityInstanceInternal
struct UTT_SupplyDrop_C_InitializeAbilityInstanceInternal_Params
{
public:
	class UGameplayAbility*                      AbilityInstance;                                   // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortTooltipContext*                   Context;                                           // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGA_SupplyDrop_C*                      K2Node_DynamicCast_AsGA_Supply_Drop;               // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x430 (0x430 - 0x0)
// Function TT_SupplyDrop.TT_SupplyDrop_C.GetTextForTokenFromAbilityInstanceInternal
struct UTT_SupplyDrop_C_GetTextForTokenFromAbilityInstanceInternal_Params
{
public:
	class UGameplayAbility*                      AbilityInstance;                                   // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          Tag;                                               // 0x8(0x8)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	class UFortTooltipContext*                   Context;                                           // 0x10(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          Token;                                             // 0x18(0x8)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	class FText                                  OutText;                                           // 0x20(0x18)(Parm, OutParm)
	bool                                         ReturnValue;                                       // 0x38(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C87[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGA_SupplyDrop_C*                      SupplyDrop;                                        // 0x40(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess;   // 0x49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C88[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGA_SupplyDrop_C*                      K2Node_DynamicCast_AsGA_Supply_Drop;               // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x59(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C89[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable;                                // 0x60(0x18)(None)
	bool                                         Temp_bool_Variable2;                               // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C8A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable2;                               // 0x80(0x18)(None)
	bool                                         Temp_bool_Variable3;                               // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C8B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable3;                               // 0xA0(0x18)(None)
	class FText                                  Temp_text_Variable4;                               // 0xB8(0x18)(None)
	class FText                                  Temp_text_Variable5;                               // 0xD0(0x18)(None)
	bool                                         Temp_bool_Variable4;                               // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C8C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable6;                               // 0xF0(0x18)(None)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x108(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Greater_IntInt_ReturnValue2;              // 0x109(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Greater_IntInt_ReturnValue3;              // 0x10A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable5;                               // 0x10B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x10C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue2;                   // 0x10D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C8D[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable7;                               // 0x110(0x18)(None)
	class FText                                  K2Node_Select_Default;                             // 0x128(0x18)(None)
	bool                                         CallFunc_Greater_IntInt_ReturnValue4;              // 0x140(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Greater_IntInt_ReturnValue5;              // 0x141(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C8E[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x148(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x160(0x40)(HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue2;              // 0x1A0(0x18)(None)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x1B8(0x10)(ZeroConstructor, ReferenceParm)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData2;             // 0x1C8(0x40)(HasGetValueTypeHash)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x208(0x18)(None)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array2;                           // 0x220(0x10)(ZeroConstructor, ReferenceParm)
	class FText                                  K2Node_Select2_Default;                            // 0x230(0x18)(None)
	class FText                                  CallFunc_Format_ReturnValue2;                      // 0x248(0x18)(None)
	class FText                                  K2Node_Select3_Default;                            // 0x260(0x18)(None)
	bool                                         CallFunc_Greater_IntInt_ReturnValue6;              // 0x278(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Greater_IntInt_ReturnValue7;              // 0x279(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C8F[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_IntToText_ReturnValue3;              // 0x280(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData3;             // 0x298(0x40)(HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue4;              // 0x2D8(0x18)(None)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array3;                           // 0x2F0(0x10)(ZeroConstructor, ReferenceParm)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData4;             // 0x300(0x40)(HasGetValueTypeHash)
	class FText                                  CallFunc_Format_ReturnValue3;                      // 0x340(0x18)(None)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array4;                           // 0x358(0x10)(ZeroConstructor, ReferenceParm)
	class FText                                  K2Node_Select4_Default;                            // 0x368(0x18)(None)
	class FText                                  CallFunc_Format_ReturnValue4;                      // 0x380(0x18)(None)
	class FText                                  K2Node_Select5_Default;                            // 0x398(0x18)(None)
	class FText                                  Temp_text_Variable8;                               // 0x3B0(0x18)(None)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue5;              // 0x3C8(0x18)(None)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue6;              // 0x3E0(0x18)(None)
	bool                                         Temp_bool_Variable6;                               // 0x3F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C90[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select6_Default;                            // 0x400(0x18)(None)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue7;              // 0x418(0x18)(None)
};

}
}


