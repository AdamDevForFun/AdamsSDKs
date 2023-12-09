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

// 0x50 (0x50 - 0x0)
// Function Creative_Powerup_Grind.Creative_Powerup_Grind_C.SetupEffectData
struct ACreative_Powerup_Grind_C_SetupEffectData_Params
{
public:
	struct FGameplayEffectSpecHandle             EffectHandle;                                      // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FGameplayEffectSpecHandle             OutEffectHandle;                                   // 0x10(0x10)(Parm, OutParm)
	struct FGameplayEffectSpecHandle             LocalEffectHandleRef;                              // 0x20(0x10)(Edit, BlueprintVisible)
	struct FGameplayEffectSpecHandle             CallFunc_SetupEffectData_OutEffectHandle;          // 0x30(0x10)(None)
	struct FGameplayEffectSpecHandle             CallFunc_AddAssetTag_ReturnValue;                  // 0x40(0x10)(None)
};

}
}


