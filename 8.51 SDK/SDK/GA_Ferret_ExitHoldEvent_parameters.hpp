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

// 0xB0 (0xB0 - 0x0)
// Function GA_Ferret_ExitHoldEvent.GA_Ferret_ExitHoldEvent_C.EventReceived_7AE1D485464AEC7EB429C3877D33AF69
struct UGA_Ferret_ExitHoldEvent_C_EventReceived_7AE1D485464AEC7EB429C3877D33AF69_Params
{
public:
	struct FGameplayEventData                    Payload;                                           // 0x0(0xB0)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0xB0 (0xB0 - 0x0)
// Function GA_Ferret_ExitHoldEvent.GA_Ferret_ExitHoldEvent_C.EventReceived_209BF560404B83EBEAA8DD8090C443AC
struct UGA_Ferret_ExitHoldEvent_C_EventReceived_209BF560404B83EBEAA8DD8090C443AC_Params
{
public:
	struct FGameplayEventData                    Payload;                                           // 0x0(0xB0)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x1 (0x1 - 0x0)
// Function GA_Ferret_ExitHoldEvent.GA_Ferret_ExitHoldEvent_C.K2_OnEndAbility
struct UGA_Ferret_ExitHoldEvent_C_K2_OnEndAbility_Params
{
public:
	bool                                         bWasCancelled;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x501 (0x501 - 0x0)
// Function GA_Ferret_ExitHoldEvent.GA_Ferret_ExitHoldEvent_C.ExecuteUbergraph_GA_Ferret_ExitHoldEvent
struct UGA_Ferret_ExitHoldEvent_C_ExecuteUbergraph_GA_Ferret_ExitHoldEvent_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3B53[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayCueParameters                CallFunc_MakeGameplayCueParameters_ReturnValue;    // 0x8(0xB8)(ContainsInstancedReference)
	struct FGameplayEventData                    Temp_struct_Variable;                              // 0xC0(0xB0)(None)
	class UAbilityTask_WaitGameplayEvent*        CallFunc_WaitGameplayEvent_ReturnValue;            // 0x170(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                CallFunc_MakeGameplayCueParameters_ReturnValue_1;  // 0x178(0xB8)(ContainsInstancedReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x230(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3B54[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x234(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_3B55[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayEventData                    K2Node_CustomEvent_Payload;                        // 0x248(0xB0)(None)
	struct FGameplayEventData                    Temp_struct_Variable_1;                            // 0x2F8(0xB0)(None)
	class UAbilityTask_WaitGameplayEvent*        CallFunc_WaitGameplayEvent_ReturnValue_1;          // 0x3A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x3B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3B56[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayAbilityActorInfo             CallFunc_GetActorInfo_ReturnValue;                 // 0x3B8(0x40)(ContainsInstancedReference)
	class AFortPlayerPawn*                       K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x3F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x400(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_K2_CommitAbility_ReturnValue;             // 0x401(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3B57[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayAbilityTargetDataHandle      CallFunc_AbilityTargetDataFromActor_ReturnValue;   // 0x408(0x28)(None)
	TArray<struct FActiveGameplayEffectHandle>   CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue; // 0x430(0x10)(ZeroConstructor, ReferenceParm)
	struct FGameplayEventData                    K2Node_CustomEvent_Payload_1;                      // 0x440(0xB0)(None)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x4F0(0x10)(ZeroConstructor, NoDestructor)
	bool                                         K2Node_Event_bWasCancelled;                        // 0x500(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


