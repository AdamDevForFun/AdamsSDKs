#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass BP_SniperRifle_FCSA.BP_SniperRifle_FCSA_C
// (None)

class UClass* UBP_SniperRifle_FCSA_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SniperRifle_FCSA_C");

	return Clss;
}


// BP_SniperRifle_FCSA_C BP_SniperRifle_FCSA.Default__BP_SniperRifle_FCSA_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_SniperRifle_FCSA_C* UBP_SniperRifle_FCSA_C::GetDefaultObj()
{
	static class UBP_SniperRifle_FCSA_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_SniperRifle_FCSA_C*>(UBP_SniperRifle_FCSA_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_SniperRifle_FCSA.BP_SniperRifle_FCSA_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UBP_SniperRifle_FCSA_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SniperRifle_FCSA_C", "AnimGraph");

	Params::UBP_SniperRifle_FCSA_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function BP_SniperRifle_FCSA.BP_SniperRifle_FCSA_C.ExecuteUbergraph_BP_SniperRifle_FCSA
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SniperRifle_FCSA_C::ExecuteUbergraph_BP_SniperRifle_FCSA(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SniperRifle_FCSA_C", "ExecuteUbergraph_BP_SniperRifle_FCSA");

	Params::UBP_SniperRifle_FCSA_C_ExecuteUbergraph_BP_SniperRifle_FCSA_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


