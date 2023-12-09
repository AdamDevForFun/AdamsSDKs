#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass TooltipStatWrapper.TooltipStatWrapper_C
// (None)

class UClass* UTooltipStatWrapper_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TooltipStatWrapper_C");

	return Clss;
}


// TooltipStatWrapper_C TooltipStatWrapper.Default__TooltipStatWrapper_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTooltipStatWrapper_C* UTooltipStatWrapper_C::GetDefaultObj()
{
	static class UTooltipStatWrapper_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTooltipStatWrapper_C*>(UTooltipStatWrapper_C::StaticClass()->DefaultObject);

	return Default;
}


// Function TooltipStatWrapper.TooltipStatWrapper_C.ShowUpgradeArrow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        InVisibility                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTooltipStatWrapper_C::ShowUpgradeArrow(enum class ESlateVisibility InVisibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TooltipStatWrapper_C", "ShowUpgradeArrow");

	Params::UTooltipStatWrapper_C_ShowUpgradeArrow_Params Parms{};

	Parms.InVisibility = InVisibility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TooltipStatWrapper.TooltipStatWrapper_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UTooltipStatWrapper_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TooltipStatWrapper_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TooltipStatWrapper.TooltipStatWrapper_C.ExecuteUbergraph_TooltipStatWrapper
// (None)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UTooltipStatWrapper_C::ExecuteUbergraph_TooltipStatWrapper(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TooltipStatWrapper_C", "ExecuteUbergraph_TooltipStatWrapper");

	Params::UTooltipStatWrapper_C_ExecuteUbergraph_TooltipStatWrapper_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}


