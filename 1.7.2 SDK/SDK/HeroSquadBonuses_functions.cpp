#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass HeroSquadBonuses.HeroSquadBonuses_C
// (None)

class UClass* UHeroSquadBonuses_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HeroSquadBonuses_C");

	return Clss;
}


// HeroSquadBonuses_C HeroSquadBonuses.Default__HeroSquadBonuses_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHeroSquadBonuses_C* UHeroSquadBonuses_C::GetDefaultObj()
{
	static class UHeroSquadBonuses_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHeroSquadBonuses_C*>(UHeroSquadBonuses_C::StaticClass()->DefaultObject);

	return Default;
}


// Function HeroSquadBonuses.HeroSquadBonuses_C.OnSquadSlotSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SquadSlotIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UHeroSquadBonus_C*           K2Node_DynamicCast_AsHero_Squad_Bonus                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue2                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UHeroSquadBonus_C*           K2Node_DynamicCast_AsHero_Squad_Bonus2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UHeroSquadBonuses_C::OnSquadSlotSelected(int32 SquadSlotIndex, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UHeroSquadBonus_C* K2Node_DynamicCast_AsHero_Squad_Bonus, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_IntInt_ReturnValue2, class UHeroSquadBonus_C* K2Node_DynamicCast_AsHero_Squad_Bonus2, bool K2Node_DynamicCast_bSuccess2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeroSquadBonuses_C", "OnSquadSlotSelected");

	Params::UHeroSquadBonuses_C_OnSquadSlotSelected_Params Parms{};

	Parms.SquadSlotIndex = SquadSlotIndex;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsHero_Squad_Bonus = K2Node_DynamicCast_AsHero_Squad_Bonus;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue2 = CallFunc_EqualEqual_IntInt_ReturnValue2;
	Parms.K2Node_DynamicCast_AsHero_Squad_Bonus2 = K2Node_DynamicCast_AsHero_Squad_Bonus2;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;

	UObject::ProcessEvent(Func, &Parms);

}

}


