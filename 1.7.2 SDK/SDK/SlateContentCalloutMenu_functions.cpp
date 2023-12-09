#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass SlateContentCalloutMenu.SlateContentCalloutMenu_C
// (None)

class UClass* USlateContentCalloutMenu_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SlateContentCalloutMenu_C");

	return Clss;
}


// SlateContentCalloutMenu_C SlateContentCalloutMenu.Default__SlateContentCalloutMenu_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USlateContentCalloutMenu_C* USlateContentCalloutMenu_C::GetDefaultObj()
{
	static class USlateContentCalloutMenu_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USlateContentCalloutMenu_C*>(USlateContentCalloutMenu_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SlateContentCalloutMenu.SlateContentCalloutMenu_C.Get Size Box
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USizeBox*                    Size_Box                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USlateContentCalloutMenu_C::Get_Size_Box(class USizeBox** Size_Box)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SlateContentCalloutMenu_C", "Get Size Box");

	Params::USlateContentCalloutMenu_C_Get_Size_Box_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Size_Box != nullptr)
		*Size_Box = Parms.Size_Box;

}


// Function SlateContentCalloutMenu.SlateContentCalloutMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void USlateContentCalloutMenu_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SlateContentCalloutMenu_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SlateContentCalloutMenu.SlateContentCalloutMenu_C.ExecuteUbergraph_SlateContentCalloutMenu
// (None)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USlateContentCalloutMenu_C::ExecuteUbergraph_SlateContentCalloutMenu(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SlateContentCalloutMenu_C", "ExecuteUbergraph_SlateContentCalloutMenu");

	Params::USlateContentCalloutMenu_C_ExecuteUbergraph_SlateContentCalloutMenu_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


