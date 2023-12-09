#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x248 - 0x240)
// BlueprintGeneratedClass BP_SolarisPrototype.BP_SolarisPrototype_C
class ABP_SolarisPrototype_C : public ASolarisPrototype
{
public:
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x240(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_SolarisPrototype_C* GetDefaultObj();

	struct FSolarisResponse CheckEndConditions(const struct FSolarisResponse& K2Node_MakeStruct_SolarisResponse);
};

}


