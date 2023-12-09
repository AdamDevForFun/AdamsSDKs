#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AthenaLocalPlayerHitPointInfo.AthenaLocalPlayerHitPointInfo_C
// (None)

class UClass* UAthenaLocalPlayerHitPointInfo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaLocalPlayerHitPointInfo_C");

	return Clss;
}


// AthenaLocalPlayerHitPointInfo_C AthenaLocalPlayerHitPointInfo.Default__AthenaLocalPlayerHitPointInfo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthenaLocalPlayerHitPointInfo_C* UAthenaLocalPlayerHitPointInfo_C::GetDefaultObj()
{
	static class UAthenaLocalPlayerHitPointInfo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaLocalPlayerHitPointInfo_C*>(UAthenaLocalPlayerHitPointInfo_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AthenaLocalPlayerHitPointInfo.AthenaLocalPlayerHitPointInfo_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaLocalPlayerHitPointInfo_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaLocalPlayerHitPointInfo_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaLocalPlayerHitPointInfo.AthenaLocalPlayerHitPointInfo_C.ExecuteUbergraph_AthenaLocalPlayerHitPointInfo
// (None)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaLocalPlayerHitPointInfo_C::ExecuteUbergraph_AthenaLocalPlayerHitPointInfo(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaLocalPlayerHitPointInfo_C", "ExecuteUbergraph_AthenaLocalPlayerHitPointInfo");

	Params::UAthenaLocalPlayerHitPointInfo_C_ExecuteUbergraph_AthenaLocalPlayerHitPointInfo_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


