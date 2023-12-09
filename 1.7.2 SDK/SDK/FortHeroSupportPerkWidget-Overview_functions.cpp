#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass FortHeroSupportPerkWidget-Overview.FortHeroSupportPerkWidget-Overview_C
// (None)

class UClass* UFortHeroSupportPerkWidgetMinusOverview_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortHeroSupportPerkWidget-Overview_C");

	return Clss;
}


// FortHeroSupportPerkWidget-Overview_C FortHeroSupportPerkWidget-Overview.Default__FortHeroSupportPerkWidget-Overview_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFortHeroSupportPerkWidgetMinusOverview_C* UFortHeroSupportPerkWidgetMinusOverview_C::GetDefaultObj()
{
	static class UFortHeroSupportPerkWidgetMinusOverview_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortHeroSupportPerkWidgetMinusOverview_C*>(UFortHeroSupportPerkWidgetMinusOverview_C::StaticClass()->DefaultObject);

	return Default;
}


// Function FortHeroSupportPerkWidget-Overview.FortHeroSupportPerkWidget-Overview_C.OnHeroUpdated
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortHeroSupportPerkWidgetMinusOverview_C::OnHeroUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortHeroSupportPerkWidget-Overview_C", "OnHeroUpdated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FortHeroSupportPerkWidget-Overview.FortHeroSupportPerkWidget-Overview_C.OnSupportTypeUpdated
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortHeroSupportPerkWidgetMinusOverview_C::OnSupportTypeUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortHeroSupportPerkWidget-Overview_C", "OnSupportTypeUpdated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FortHeroSupportPerkWidget-Overview.FortHeroSupportPerkWidget-Overview_C.ExecuteUbergraph_FortHeroSupportPerkWidget-Overview
// (None)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPerkEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFortHeroSupportPerkWidgetMinusOverview_C::ExecuteUbergraph_FortHeroSupportPerkWidgetMinusOverview(int32 EntryPoint, bool CallFunc_IsPerkEmpty_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortHeroSupportPerkWidget-Overview_C", "ExecuteUbergraph_FortHeroSupportPerkWidget-Overview");

	Params::UFortHeroSupportPerkWidgetMinusOverview_C_ExecuteUbergraph_FortHeroSupportPerkWidgetMinusOverview_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsPerkEmpty_ReturnValue = CallFunc_IsPerkEmpty_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


