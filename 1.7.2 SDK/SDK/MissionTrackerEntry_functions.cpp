#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass MissionTrackerEntry.MissionTrackerEntry_C
// (None)

class UClass* UMissionTrackerEntry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionTrackerEntry_C");

	return Clss;
}


// MissionTrackerEntry_C MissionTrackerEntry.Default__MissionTrackerEntry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionTrackerEntry_C* UMissionTrackerEntry_C::GetDefaultObj()
{
	static class UMissionTrackerEntry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionTrackerEntry_C*>(UMissionTrackerEntry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MissionTrackerEntry.MissionTrackerEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UMissionTrackerEntry_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionTrackerEntry_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MissionTrackerEntry.MissionTrackerEntry_C.OnMissionSet
// (Event, Protected, BlueprintEvent)
// Parameters:

void UMissionTrackerEntry_C::OnMissionSet()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionTrackerEntry_C", "OnMissionSet");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MissionTrackerEntry.MissionTrackerEntry_C.ExecuteUbergraph_MissionTrackerEntry
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_MakeStruct_LinearColor                                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMissionTrackerEntry_C::ExecuteUbergraph_MissionTrackerEntry(int32 EntryPoint, const struct FLinearColor& K2Node_MakeStruct_LinearColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionTrackerEntry_C", "ExecuteUbergraph_MissionTrackerEntry");

	Params::UMissionTrackerEntry_C_ExecuteUbergraph_MissionTrackerEntry_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionTrackerEntry.MissionTrackerEntry_C.WidgetVisibilityChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMissionTrackerEntry_C::WidgetVisibilityChanged__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionTrackerEntry_C", "WidgetVisibilityChanged__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


