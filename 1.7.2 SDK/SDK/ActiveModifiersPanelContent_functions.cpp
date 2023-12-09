#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ActiveModifiersPanelContent.ActiveModifiersPanelContent_C
// (None)

class UClass* UActiveModifiersPanelContent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ActiveModifiersPanelContent_C");

	return Clss;
}


// ActiveModifiersPanelContent_C ActiveModifiersPanelContent.Default__ActiveModifiersPanelContent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UActiveModifiersPanelContent_C* UActiveModifiersPanelContent_C::GetDefaultObj()
{
	static class UActiveModifiersPanelContent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UActiveModifiersPanelContent_C*>(UActiveModifiersPanelContent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ActiveModifiersPanelContent.ActiveModifiersPanelContent_C.Init
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFortGameplayModifierItemDefinition*>InModifiers                                                      (Parm, OutParm, ZeroConstructor, ReferenceParm)

void UActiveModifiersPanelContent_C::Init(TArray<class UFortGameplayModifierItemDefinition*>& InModifiers)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActiveModifiersPanelContent_C", "Init");

	Params::UActiveModifiersPanelContent_C_Init_Params Parms{};

	Parms.InModifiers = InModifiers;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActiveModifiersPanelContent.ActiveModifiersPanelContent_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UActiveModifiersPanelContent_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActiveModifiersPanelContent_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActiveModifiersPanelContent.ActiveModifiersPanelContent_C.ExecuteUbergraph_ActiveModifiersPanelContent
// (None)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UActiveModifiersPanelContent_C::ExecuteUbergraph_ActiveModifiersPanelContent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActiveModifiersPanelContent_C", "ExecuteUbergraph_ActiveModifiersPanelContent");

	Params::UActiveModifiersPanelContent_C_ExecuteUbergraph_ActiveModifiersPanelContent_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


