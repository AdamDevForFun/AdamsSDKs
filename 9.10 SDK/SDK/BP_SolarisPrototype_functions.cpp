#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SolarisPrototype.BP_SolarisPrototype_C
// (Actor)

class UClass* ABP_SolarisPrototype_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SolarisPrototype_C");

	return Clss;
}


// BP_SolarisPrototype_C BP_SolarisPrototype.Default__BP_SolarisPrototype_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SolarisPrototype_C* ABP_SolarisPrototype_C::GetDefaultObj()
{
	static class ABP_SolarisPrototype_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SolarisPrototype_C*>(ABP_SolarisPrototype_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_SolarisPrototype.BP_SolarisPrototype_C.CheckEndConditions
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSolarisResponse            ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor)
// struct FSolarisResponse            K2Node_MakeStruct_SolarisResponse                                (NoDestructor)

struct FSolarisResponse ABP_SolarisPrototype_C::CheckEndConditions(const struct FSolarisResponse& K2Node_MakeStruct_SolarisResponse)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SolarisPrototype_C", "CheckEndConditions");

	Params::ABP_SolarisPrototype_C_CheckEndConditions_Params Parms{};

	Parms.K2Node_MakeStruct_SolarisResponse = K2Node_MakeStruct_SolarisResponse;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


