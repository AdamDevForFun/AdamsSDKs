#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AthenaViewTargetHitPointInfo.AthenaViewTargetHitPointInfo_C
// (None)

class UClass* UAthenaViewTargetHitPointInfo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaViewTargetHitPointInfo_C");

	return Clss;
}


// AthenaViewTargetHitPointInfo_C AthenaViewTargetHitPointInfo.Default__AthenaViewTargetHitPointInfo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthenaViewTargetHitPointInfo_C* UAthenaViewTargetHitPointInfo_C::GetDefaultObj()
{
	static class UAthenaViewTargetHitPointInfo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaViewTargetHitPointInfo_C*>(UAthenaViewTargetHitPointInfo_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AthenaViewTargetHitPointInfo.AthenaViewTargetHitPointInfo_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaViewTargetHitPointInfo_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaViewTargetHitPointInfo_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaViewTargetHitPointInfo.AthenaViewTargetHitPointInfo_C.ExecuteUbergraph_AthenaViewTargetHitPointInfo
// (None)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaViewTargetHitPointInfo_C::ExecuteUbergraph_AthenaViewTargetHitPointInfo(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaViewTargetHitPointInfo_C", "ExecuteUbergraph_AthenaViewTargetHitPointInfo");

	Params::UAthenaViewTargetHitPointInfo_C_ExecuteUbergraph_AthenaViewTargetHitPointInfo_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


