#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PBWA_S1_Solid.PBWA_S1_Solid_C
// (Actor)

class UClass* APBWA_S1_Solid_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PBWA_S1_Solid_C");

	return Clss;
}


// PBWA_S1_Solid_C PBWA_S1_Solid.Default__PBWA_S1_Solid_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APBWA_S1_Solid_C* APBWA_S1_Solid_C::GetDefaultObj()
{
	static class APBWA_S1_Solid_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APBWA_S1_Solid_C*>(APBWA_S1_Solid_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PBWA_S1_Solid.PBWA_S1_Solid_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void APBWA_S1_Solid_C::UserConstructionScript(bool CallFunc_HasAuthority_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PBWA_S1_Solid_C", "UserConstructionScript");

	Params::APBWA_S1_Solid_C_UserConstructionScript_Params Parms{};

	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue = CallFunc_RandomIntegerInRange_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PBWA_S1_Solid.PBWA_S1_Solid_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void APBWA_S1_Solid_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PBWA_S1_Solid_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PBWA_S1_Solid.PBWA_S1_Solid_C.ExecuteUbergraph_PBWA_S1_Solid
// (None)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APBWA_S1_Solid_C::ExecuteUbergraph_PBWA_S1_Solid(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PBWA_S1_Solid_C", "ExecuteUbergraph_PBWA_S1_Solid");

	Params::APBWA_S1_Solid_C_ExecuteUbergraph_PBWA_S1_Solid_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


