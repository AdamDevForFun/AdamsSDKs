#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass SettingsListEntry_Scalar_Narrow.SettingsListEntry_Scalar_Narrow_C
// (None)

class UClass* USettingsListEntry_Scalar_Narrow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SettingsListEntry_Scalar_Narrow_C");

	return Clss;
}


// SettingsListEntry_Scalar_Narrow_C SettingsListEntry_Scalar_Narrow.Default__SettingsListEntry_Scalar_Narrow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USettingsListEntry_Scalar_Narrow_C* USettingsListEntry_Scalar_Narrow_C::GetDefaultObj()
{
	static class USettingsListEntry_Scalar_Narrow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USettingsListEntry_Scalar_Narrow_C*>(USettingsListEntry_Scalar_Narrow_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SettingsListEntry_Scalar_Narrow.SettingsListEntry_Scalar_Narrow_C.GetPrimaryGamepadFocusWidget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* USettingsListEntry_Scalar_Narrow_C::GetPrimaryGamepadFocusWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SettingsListEntry_Scalar_Narrow_C", "GetPrimaryGamepadFocusWidget");

	Params::USettingsListEntry_Scalar_Narrow_C_GetPrimaryGamepadFocusWidget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function SettingsListEntry_Scalar_Narrow.SettingsListEntry_Scalar_Narrow_C.OnValueChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USettingsListEntry_Scalar_Narrow_C::OnValueChanged(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SettingsListEntry_Scalar_Narrow_C", "OnValueChanged");

	Params::USettingsListEntry_Scalar_Narrow_C_OnValueChanged_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SettingsListEntry_Scalar_Narrow.SettingsListEntry_Scalar_Narrow_C.OnDefaultValueChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              DefaultValue                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USettingsListEntry_Scalar_Narrow_C::OnDefaultValueChanged(float DefaultValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SettingsListEntry_Scalar_Narrow_C", "OnDefaultValueChanged");

	Params::USettingsListEntry_Scalar_Narrow_C_OnDefaultValueChanged_Params Parms{};

	Parms.DefaultValue = DefaultValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SettingsListEntry_Scalar_Narrow.SettingsListEntry_Scalar_Narrow_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void USettingsListEntry_Scalar_Narrow_C::OnMouseEnter(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SettingsListEntry_Scalar_Narrow_C", "OnMouseEnter");

	Params::USettingsListEntry_Scalar_Narrow_C_OnMouseEnter_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SettingsListEntry_Scalar_Narrow.SettingsListEntry_Scalar_Narrow_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void USettingsListEntry_Scalar_Narrow_C::OnMouseLeave(struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SettingsListEntry_Scalar_Narrow_C", "OnMouseLeave");

	Params::USettingsListEntry_Scalar_Narrow_C_OnMouseLeave_Params Parms{};

	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SettingsListEntry_Scalar_Narrow.SettingsListEntry_Scalar_Narrow_C.ExecuteUbergraph_SettingsListEntry_Scalar_Narrow
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUsingTouch_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_Value                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DefaultValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// struct FPointerEvent               K2Node_Event_MouseEvent_1                                        (ConstParm)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPointerEvent               K2Node_Event_MouseEvent                                          (ConstParm)

void USettingsListEntry_Scalar_Narrow_C::ExecuteUbergraph_SettingsListEntry_Scalar_Narrow(int32 EntryPoint, bool CallFunc_IsUsingTouch_ReturnValue, float K2Node_Event_Value, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, float K2Node_Event_DefaultValue, const struct FGeometry& K2Node_Event_MyGeometry, const struct FPointerEvent& K2Node_Event_MouseEvent_1, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, const struct FPointerEvent& K2Node_Event_MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SettingsListEntry_Scalar_Narrow_C", "ExecuteUbergraph_SettingsListEntry_Scalar_Narrow");

	Params::USettingsListEntry_Scalar_Narrow_C_ExecuteUbergraph_SettingsListEntry_Scalar_Narrow_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsUsingTouch_ReturnValue = CallFunc_IsUsingTouch_ReturnValue;
	Parms.K2Node_Event_Value = K2Node_Event_Value;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.K2Node_Event_DefaultValue = K2Node_Event_DefaultValue;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_MouseEvent_1 = K2Node_Event_MouseEvent_1;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.K2Node_Event_MouseEvent = K2Node_Event_MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}

}


