#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass LegacyAlterationGroup_Widget.LegacyAlterationGroup_Widget_C
// (None)

class UClass* ULegacyAlterationGroup_Widget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LegacyAlterationGroup_Widget_C");

	return Clss;
}


// LegacyAlterationGroup_Widget_C LegacyAlterationGroup_Widget.Default__LegacyAlterationGroup_Widget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULegacyAlterationGroup_Widget_C* ULegacyAlterationGroup_Widget_C::GetDefaultObj()
{
	static class ULegacyAlterationGroup_Widget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULegacyAlterationGroup_Widget_C*>(ULegacyAlterationGroup_Widget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LegacyAlterationGroup_Widget.LegacyAlterationGroup_Widget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void ULegacyAlterationGroup_Widget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LegacyAlterationGroup_Widget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LegacyAlterationGroup_Widget.LegacyAlterationGroup_Widget_C.OnGenerateAlteration
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FFortUIAlteration           AlterationInfo                                                   (Parm, NoDestructor)

void ULegacyAlterationGroup_Widget_C::OnGenerateAlteration(const struct FFortUIAlteration& AlterationInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LegacyAlterationGroup_Widget_C", "OnGenerateAlteration");

	Params::ULegacyAlterationGroup_Widget_C_OnGenerateAlteration_Params Parms{};

	Parms.AlterationInfo = AlterationInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LegacyAlterationGroup_Widget.LegacyAlterationGroup_Widget_C.ExecuteUbergraph_LegacyAlterationGroup_Widget
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortUIAlteration           K2Node_Event_AlterationInfo                                      (NoDestructor)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULegacyAlteration_Widget_C*  CallFunc_Create_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULegacyAlterationGroup_Widget_C::ExecuteUbergraph_LegacyAlterationGroup_Widget(int32 EntryPoint, const struct FFortUIAlteration& K2Node_Event_AlterationInfo, const struct FMargin& K2Node_MakeStruct_Margin, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class ULegacyAlteration_Widget_C* CallFunc_Create_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LegacyAlterationGroup_Widget_C", "ExecuteUbergraph_LegacyAlterationGroup_Widget");

	Params::ULegacyAlterationGroup_Widget_C_ExecuteUbergraph_LegacyAlterationGroup_Widget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_AlterationInfo = K2Node_Event_AlterationInfo;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


