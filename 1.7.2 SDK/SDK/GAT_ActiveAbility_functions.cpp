#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GAT_ActiveAbility.GAT_ActiveAbility_C
// (None)

class UClass* UGAT_ActiveAbility_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GAT_ActiveAbility_C");

	return Clss;
}


// GAT_ActiveAbility_C GAT_ActiveAbility.Default__GAT_ActiveAbility_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGAT_ActiveAbility_C* UGAT_ActiveAbility_C::GetDefaultObj()
{
	static class UGAT_ActiveAbility_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGAT_ActiveAbility_C*>(UGAT_ActiveAbility_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GAT_ActiveAbility.GAT_ActiveAbility_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGAT_ActiveAbility_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GAT_ActiveAbility_C", "K2_ActivateAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GAT_ActiveAbility.GAT_ActiveAbility_C.ExecuteUbergraph_GAT_ActiveAbility
// (None)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGAT_ActiveAbility_C::ExecuteUbergraph_GAT_ActiveAbility(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GAT_ActiveAbility_C", "ExecuteUbergraph_GAT_ActiveAbility");

	Params::UGAT_ActiveAbility_C_ExecuteUbergraph_GAT_ActiveAbility_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


