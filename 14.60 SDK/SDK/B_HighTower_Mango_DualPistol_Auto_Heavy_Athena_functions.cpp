#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_HighTower_Mango_DualPistol_Auto_Heavy_Athena.B_HighTower_Mango_DualPistol_Auto_Heavy_Athena_C
// (Actor)

class UClass* AB_HighTower_Mango_DualPistol_Auto_Heavy_Athena_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_HighTower_Mango_DualPistol_Auto_Heavy_Athena_C");

	return Clss;
}


// B_HighTower_Mango_DualPistol_Auto_Heavy_Athena_C B_HighTower_Mango_DualPistol_Auto_Heavy_Athena.Default__B_HighTower_Mango_DualPistol_Auto_Heavy_Athena_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AB_HighTower_Mango_DualPistol_Auto_Heavy_Athena_C* AB_HighTower_Mango_DualPistol_Auto_Heavy_Athena_C::GetDefaultObj()
{
	static class AB_HighTower_Mango_DualPistol_Auto_Heavy_Athena_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AB_HighTower_Mango_DualPistol_Auto_Heavy_Athena_C*>(AB_HighTower_Mango_DualPistol_Auto_Heavy_Athena_C::StaticClass()->DefaultObject);

	return Default;
}


// Function B_HighTower_Mango_DualPistol_Auto_Heavy_Athena.B_HighTower_Mango_DualPistol_Auto_Heavy_Athena_C.DeactivateShellsFX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_HighTower_Mango_DualPistol_Auto_Heavy_Athena_C::DeactivateShellsFX(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_HighTower_Mango_DualPistol_Auto_Heavy_Athena_C", "DeactivateShellsFX");

	Params::AB_HighTower_Mango_DualPistol_Auto_Heavy_Athena_C_DeactivateShellsFX_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


