#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_DefaultPlayer_Death.GA_DefaultPlayer_Death_C
// (None)

class UClass* UGA_DefaultPlayer_Death_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_DefaultPlayer_Death_C");

	return Clss;
}


// GA_DefaultPlayer_Death_C GA_DefaultPlayer_Death.Default__GA_DefaultPlayer_Death_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_DefaultPlayer_Death_C* UGA_DefaultPlayer_Death_C::GetDefaultObj()
{
	static class UGA_DefaultPlayer_Death_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_DefaultPlayer_Death_C*>(UGA_DefaultPlayer_Death_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_DefaultPlayer_Death.GA_DefaultPlayer_Death_C.PickDeathMontageSection
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_DefaultPlayer_Death_C::PickDeathMontageSection()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_DefaultPlayer_Death_C", "PickDeathMontageSection");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_DefaultPlayer_Death.GA_DefaultPlayer_Death_C.ExecuteUbergraph_GA_DefaultPlayer_Death
// (None)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPawn*                   CallFunc_GetActivatingPawn_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerPawn_Generic_C*       K2Node_DynamicCast_AsPlayer_Pawn_Generic                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_DefaultPlayer_Death_C::ExecuteUbergraph_GA_DefaultPlayer_Death(int32 EntryPoint, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue, class APlayerPawn_Generic_C* K2Node_DynamicCast_AsPlayer_Pawn_Generic, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_DefaultPlayer_Death_C", "ExecuteUbergraph_GA_DefaultPlayer_Death");

	Params::UGA_DefaultPlayer_Death_C_ExecuteUbergraph_GA_DefaultPlayer_Death_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetActivatingPawn_ReturnValue = CallFunc_GetActivatingPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsPlayer_Pawn_Generic = K2Node_DynamicCast_AsPlayer_Pawn_Generic;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


