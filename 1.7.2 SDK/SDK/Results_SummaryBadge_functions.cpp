#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Results_SummaryBadge.Results_SummaryBadge_C
// (None)

class UClass* UResults_SummaryBadge_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Results_SummaryBadge_C");

	return Clss;
}


// Results_SummaryBadge_C Results_SummaryBadge.Default__Results_SummaryBadge_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UResults_SummaryBadge_C* UResults_SummaryBadge_C::GetDefaultObj()
{
	static class UResults_SummaryBadge_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UResults_SummaryBadge_C*>(UResults_SummaryBadge_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Results_SummaryBadge.Results_SummaryBadge_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   BadgeItem                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetDisplayName_ReturnValue                              (None)
// class UFortItemDefinition*         CallFunc_GetItemDefinitionBP_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResults_SummaryBadge_C::Initialize(class UFortItem* BadgeItem, class FText CallFunc_GetDisplayName_ReturnValue, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Results_SummaryBadge_C", "Initialize");

	Params::UResults_SummaryBadge_C_Initialize_Params Parms{};

	Parms.BadgeItem = BadgeItem;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_GetItemDefinitionBP_ReturnValue = CallFunc_GetItemDefinitionBP_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_SummaryBadge.Results_SummaryBadge_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UResults_SummaryBadge_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Results_SummaryBadge_C", "PreConstruct");

	Params::UResults_SummaryBadge_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_SummaryBadge.Results_SummaryBadge_C.Manual Pre Construct
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_SummaryBadge_C::Manual_Pre_Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Results_SummaryBadge_C", "Manual Pre Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Results_SummaryBadge.Results_SummaryBadge_C.ExecuteUbergraph_Results_SummaryBadge
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable                                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable2                                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable3                                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable4                                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable5                                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable6                                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable7                                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_RandomInteger_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_Select_Default                                            (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UResults_SummaryBadge_C::ExecuteUbergraph_Results_SummaryBadge(int32 EntryPoint, int32 Temp_int_Variable, const class FString& Temp_string_Variable, const class FString& Temp_string_Variable2, const class FString& Temp_string_Variable3, const class FString& Temp_string_Variable4, const class FString& Temp_string_Variable5, const class FString& Temp_string_Variable6, const class FString& Temp_string_Variable7, bool K2Node_Event_IsDesignTime, int32 CallFunc_RandomInteger_ReturnValue, const class FString& K2Node_Select_Default, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Results_SummaryBadge_C", "ExecuteUbergraph_Results_SummaryBadge");

	Params::UResults_SummaryBadge_C_ExecuteUbergraph_Results_SummaryBadge_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.Temp_string_Variable2 = Temp_string_Variable2;
	Parms.Temp_string_Variable3 = Temp_string_Variable3;
	Parms.Temp_string_Variable4 = Temp_string_Variable4;
	Parms.Temp_string_Variable5 = Temp_string_Variable5;
	Parms.Temp_string_Variable6 = Temp_string_Variable6;
	Parms.Temp_string_Variable7 = Temp_string_Variable7;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_RandomInteger_ReturnValue = CallFunc_RandomInteger_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


