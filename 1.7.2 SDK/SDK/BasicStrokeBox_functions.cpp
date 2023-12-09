#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BasicStrokeBox.BasicStrokeBox_C
// (None)

class UClass* UBasicStrokeBox_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BasicStrokeBox_C");

	return Clss;
}


// BasicStrokeBox_C BasicStrokeBox.Default__BasicStrokeBox_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBasicStrokeBox_C* UBasicStrokeBox_C::GetDefaultObj()
{
	static class UBasicStrokeBox_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBasicStrokeBox_C*>(UBasicStrokeBox_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BasicStrokeBox.BasicStrokeBox_C.Customize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Shape_Style                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Fill_Color                                                       (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Stroke_Color                                                     (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBasicStrokeBox_C::Customize(int32 Shape_Style, const struct FLinearColor& Fill_Color, const struct FLinearColor& Stroke_Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BasicStrokeBox_C", "Customize");

	Params::UBasicStrokeBox_C_Customize_Params Parms{};

	Parms.Shape_Style = Shape_Style;
	Parms.Fill_Color = Fill_Color;
	Parms.Stroke_Color = Stroke_Color;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BasicStrokeBox.BasicStrokeBox_C.Redraw
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBasicStrokeBox_C::Redraw(float CallFunc_Conv_IntToFloat_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BasicStrokeBox_C", "Redraw");

	Params::UBasicStrokeBox_C_Redraw_Params Parms{};

	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BasicStrokeBox.BasicStrokeBox_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBasicStrokeBox_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BasicStrokeBox_C", "PreConstruct");

	Params::UBasicStrokeBox_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BasicStrokeBox.BasicStrokeBox_C.ExecuteUbergraph_BasicStrokeBox
// (None)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBasicStrokeBox_C::ExecuteUbergraph_BasicStrokeBox(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BasicStrokeBox_C", "ExecuteUbergraph_BasicStrokeBox");

	Params::UBasicStrokeBox_C_ExecuteUbergraph_BasicStrokeBox_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


