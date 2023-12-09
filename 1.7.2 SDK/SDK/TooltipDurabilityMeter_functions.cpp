#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass TooltipDurabilityMeter.TooltipDurabilityMeter_C
// (None)

class UClass* UTooltipDurabilityMeter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TooltipDurabilityMeter_C");

	return Clss;
}


// TooltipDurabilityMeter_C TooltipDurabilityMeter.Default__TooltipDurabilityMeter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTooltipDurabilityMeter_C* UTooltipDurabilityMeter_C::GetDefaultObj()
{
	static class UTooltipDurabilityMeter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTooltipDurabilityMeter_C*>(UTooltipDurabilityMeter_C::StaticClass()->DefaultObject);

	return Default;
}


// Function TooltipDurabilityMeter.TooltipDurabilityMeter_C.Draw
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Normalized                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortDisplayAttribute       Display_Attribute                                                (Parm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UTooltipDurabilityMeter_C::Draw(float Normalized, const struct FFortDisplayAttribute& Display_Attribute, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, bool CallFunc_Less_FloatFloat_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TooltipDurabilityMeter_C", "Draw");

	Params::UTooltipDurabilityMeter_C_Draw_Params Parms{};

	Parms.Normalized = Normalized;
	Parms.Display_Attribute = Display_Attribute;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TooltipDurabilityMeter.TooltipDurabilityMeter_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UTooltipDurabilityMeter_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TooltipDurabilityMeter_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TooltipDurabilityMeter.TooltipDurabilityMeter_C.ExecuteUbergraph_TooltipDurabilityMeter
// (None)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTooltipDurabilityMeter_C::ExecuteUbergraph_TooltipDurabilityMeter(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TooltipDurabilityMeter_C", "ExecuteUbergraph_TooltipDurabilityMeter");

	Params::UTooltipDurabilityMeter_C_ExecuteUbergraph_TooltipDurabilityMeter_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


