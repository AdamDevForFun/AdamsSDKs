#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass StatusWidget.StatusWidget_C
// (None)

class UClass* UStatusWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StatusWidget_C");

	return Clss;
}


// StatusWidget_C StatusWidget.Default__StatusWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UStatusWidget_C* UStatusWidget_C::GetDefaultObj()
{
	static class UStatusWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UStatusWidget_C*>(UStatusWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function StatusWidget.StatusWidget_C.UpdateLoginStatusText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetLoginStatusText_ReturnValue                          (None)

class FText UStatusWidget_C::UpdateLoginStatusText(class UFortMcpContext* CallFunc_GetContext_ReturnValue, class FText CallFunc_GetLoginStatusText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StatusWidget_C", "UpdateLoginStatusText");

	Params::UStatusWidget_C_UpdateLoginStatusText_Params Parms{};

	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetLoginStatusText_ReturnValue = CallFunc_GetLoginStatusText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function StatusWidget.StatusWidget_C.SetStatusText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Status                                                           (Parm)

void UStatusWidget_C::SetStatusText(class FText Status)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StatusWidget_C", "SetStatusText");

	Params::UStatusWidget_C_SetStatusText_Params Parms{};

	Parms.Status = Status;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StatusWidget.StatusWidget_C.SetTitleText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        TitleText                                                        (Parm)

void UStatusWidget_C::SetTitleText(class FText TitleText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StatusWidget_C", "SetTitleText");

	Params::UStatusWidget_C_SetTitleText_Params Parms{};

	Parms.TitleText = TitleText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StatusWidget.StatusWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UStatusWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StatusWidget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StatusWidget.StatusWidget_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UStatusWidget_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StatusWidget_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StatusWidget.StatusWidget_C.ExecuteUbergraph_StatusWidget
// (None)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStatusWidget_C::ExecuteUbergraph_StatusWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StatusWidget_C", "ExecuteUbergraph_StatusWidget");

	Params::UStatusWidget_C_ExecuteUbergraph_StatusWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


