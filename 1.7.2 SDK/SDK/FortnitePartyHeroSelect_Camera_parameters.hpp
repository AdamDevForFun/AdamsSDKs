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

// 0x11 (0x11 - 0x0)
// Function FortnitePartyHeroSelect_Camera.FortnitePartyHeroSelect_Camera_C.HandleMousePress
struct AFortnitePartyHeroSelect_Camera_C_HandleMousePress_Params
{
public:
	class UFortFrontEndContext*                  CallFunc_GetContext_ReturnValue;                   // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                       CallFunc_GetHeroPlayerPawnByIndex_ReturnValue;     // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function FortnitePartyHeroSelect_Camera.FortnitePartyHeroSelect_Camera_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_7
struct AFortnitePartyHeroSelect_Camera_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_7_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function FortnitePartyHeroSelect_Camera.FortnitePartyHeroSelect_Camera_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_6
struct AFortnitePartyHeroSelect_Camera_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_6_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function FortnitePartyHeroSelect_Camera.FortnitePartyHeroSelect_Camera_C.InpActEvt_RightMouseButton_K2Node_InputKeyEvent_5
struct AFortnitePartyHeroSelect_Camera_C_InpActEvt_RightMouseButton_K2Node_InputKeyEvent_5_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function FortnitePartyHeroSelect_Camera.FortnitePartyHeroSelect_Camera_C.InpActEvt_RightMouseButton_K2Node_InputKeyEvent_4
struct AFortnitePartyHeroSelect_Camera_C_InpActEvt_RightMouseButton_K2Node_InputKeyEvent_4_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(Parm, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function FortnitePartyHeroSelect_Camera.FortnitePartyHeroSelect_Camera_C.ReceiveTick
struct AFortnitePartyHeroSelect_Camera_C_ReceiveTick_Params
{
public:
	float                                        DeltaSeconds;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1A0 (0x1A0 - 0x0)
// Function FortnitePartyHeroSelect_Camera.FortnitePartyHeroSelect_Camera_C.ExecuteUbergraph_FortnitePartyHeroSelect_Camera
struct AFortnitePartyHeroSelect_Camera_C_ExecuteUbergraph_FortnitePartyHeroSelect_Camera_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34D0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                  Temp_struct_Variable;                              // 0x10(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputKeyEvent_Key2;                         // 0x28(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputKeyEvent_Key;                          // 0x40(0x18)(HasGetValueTypeHash)
	struct FKey                                  Temp_struct_Variable2;                             // 0x58(0x18)(HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue2;         // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                  K2Node_InputKeyEvent_Key4;                         // 0x78(0x18)(HasGetValueTypeHash)
	float                                        K2Node_Event_DeltaSeconds;                         // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34D1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue3;         // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetInputMouseDelta_DeltaX;                // 0xA0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetInputMouseDelta_DeltaY;                // 0xA4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue;          // 0xA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xAC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_34D2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              CallFunc_K2_GetActorRotation_ReturnValue;          // 0xB0(0xC)(IsPlainOldData, NoDestructor)
	float                                        CallFunc_BreakRotator_Roll;                        // 0xBC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Pitch;                       // 0xC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Yaw;                         // 0xC4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Subtract_FloatFloat_ReturnValue;          // 0xC8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_MakeRotator_ReturnValue;                  // 0xCC(0xC)(IsPlainOldData, NoDestructor)
	struct FKey                                  K2Node_InputKeyEvent_Key3;                         // 0xD8(0x18)(HasGetValueTypeHash)
	bool                                         CallFunc_K2_SetActorRotation_ReturnValue;          // 0xF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_34D3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ATVPostProcessBP_C*>            CallFunc_GetAllActorsOfClass_OutActors;            // 0xF8(0x10)(ZeroConstructor, ReferenceParm)
	class ATVPostProcessBP_C*                    CallFunc_Array_Get_Item;                           // 0x108(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            CallFunc_K2_SetRelativeRotation_SweepHitResult;    // 0x110(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class AFortTimeOfDayManager*                 CallFunc_GetTimeOfDayManagerFromContext_ReturnValue; // 0x198(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


