#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass QuestTrackerEntry.QuestTrackerEntry_C
// (None)

class UClass* UQuestTrackerEntry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QuestTrackerEntry_C");

	return Clss;
}


// QuestTrackerEntry_C QuestTrackerEntry.Default__QuestTrackerEntry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UQuestTrackerEntry_C* UQuestTrackerEntry_C::GetDefaultObj()
{
	static class UQuestTrackerEntry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UQuestTrackerEntry_C*>(UQuestTrackerEntry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function QuestTrackerEntry.QuestTrackerEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UQuestTrackerEntry_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestTrackerEntry_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QuestTrackerEntry.QuestTrackerEntry_C.OnSetup
// (Event, Protected, BlueprintEvent)
// Parameters:

void UQuestTrackerEntry_C::OnSetup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestTrackerEntry_C", "OnSetup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QuestTrackerEntry.QuestTrackerEntry_C.ExecuteUbergraph_QuestTrackerEntry
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_MakeStruct_LinearColor                                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestTrackerEntry_C::ExecuteUbergraph_QuestTrackerEntry(int32 EntryPoint, const struct FLinearColor& K2Node_MakeStruct_LinearColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestTrackerEntry_C", "ExecuteUbergraph_QuestTrackerEntry");

	Params::UQuestTrackerEntry_C_ExecuteUbergraph_QuestTrackerEntry_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;

	UObject::ProcessEvent(Func, &Parms);

}

}


