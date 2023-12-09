#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass Bunker_Man_1h_Axe_AnimBP.Bunker_Man_1h_Axe_AnimBP_C
// (None)

class UClass* UBunker_Man_1h_Axe_AnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Bunker_Man_1h_Axe_AnimBP_C");

	return Clss;
}


// Bunker_Man_1h_Axe_AnimBP_C Bunker_Man_1h_Axe_AnimBP.Default__Bunker_Man_1h_Axe_AnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBunker_Man_1h_Axe_AnimBP_C* UBunker_Man_1h_Axe_AnimBP_C::GetDefaultObj()
{
	static class UBunker_Man_1h_Axe_AnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBunker_Man_1h_Axe_AnimBP_C*>(UBunker_Man_1h_Axe_AnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Bunker_Man_1h_Axe_AnimBP.Bunker_Man_1h_Axe_AnimBP_C.ExecuteUbergraph_Bunker_Man_1h_Axe_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBunker_Man_1h_Axe_AnimBP_C::ExecuteUbergraph_Bunker_Man_1h_Axe_AnimBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Bunker_Man_1h_Axe_AnimBP_C", "ExecuteUbergraph_Bunker_Man_1h_Axe_AnimBP");

	Params::UBunker_Man_1h_Axe_AnimBP_C_ExecuteUbergraph_Bunker_Man_1h_Axe_AnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


