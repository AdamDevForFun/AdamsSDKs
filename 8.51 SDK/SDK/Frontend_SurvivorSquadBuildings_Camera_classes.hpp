#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x7A0 - 0x790)
// BlueprintGeneratedClass Frontend_SurvivorSquadBuildings_Camera.Frontend_SurvivorSquadBuildings_Camera_C
class AFrontend_SurvivorSquadBuildings_Camera_C : public AFortCameraBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x790(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UArrowComponent*                       Arrow;                                             // 0x798(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AFrontend_SurvivorSquadBuildings_Camera_C* GetDefaultObj();

	void OnDeactivated();
	void OnActivated();
	void ExecuteUbergraph_Frontend_SurvivorSquadBuildings_Camera(int32 EntryPoint, class AFortTimeOfDayManager* CallFunc_GetTimeOfDayManagerFromContext_ReturnValue, TArray<class ATVPostProcessBP_C*>& CallFunc_GetAllActorsOfClass_OutActors, class ATVPostProcessBP_C* CallFunc_Array_Get_Item);
};

}


