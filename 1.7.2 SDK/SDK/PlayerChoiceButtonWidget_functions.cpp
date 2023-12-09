#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass PlayerChoiceButtonWidget.PlayerChoiceButtonWidget_C
// (None)

class UClass* UPlayerChoiceButtonWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayerChoiceButtonWidget_C");

	return Clss;
}


// PlayerChoiceButtonWidget_C PlayerChoiceButtonWidget.Default__PlayerChoiceButtonWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPlayerChoiceButtonWidget_C* UPlayerChoiceButtonWidget_C::GetDefaultObj()
{
	static class UPlayerChoiceButtonWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayerChoiceButtonWidget_C*>(UPlayerChoiceButtonWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PlayerChoiceButtonWidget.PlayerChoiceButtonWidget_C.ConfigureChoice
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FChoiceDataEntry            Choice                                                           (Parm)
// int32                              ChoiceID                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerChoiceWidget_C*       Owner                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerChoiceButtonWidget_C::ConfigureChoice(const struct FChoiceDataEntry& Choice, int32 ChoiceID, class UPlayerChoiceWidget_C* Owner)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerChoiceButtonWidget_C", "ConfigureChoice");

	Params::UPlayerChoiceButtonWidget_C_ConfigureChoice_Params Parms{};

	Parms.Choice = Choice;
	Parms.ChoiceID = ChoiceID;
	Parms.Owner = Owner;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerChoiceButtonWidget.PlayerChoiceButtonWidget_C.BndEvt__Button_K2Node_ComponentBoundEvent_98_FortBaseButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UFortBaseButton*             Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerChoiceButtonWidget_C::BndEvt__Button_K2Node_ComponentBoundEvent_98_FortBaseButtonClicked__DelegateSignature(class UFortBaseButton* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerChoiceButtonWidget_C", "BndEvt__Button_K2Node_ComponentBoundEvent_98_FortBaseButtonClicked__DelegateSignature");

	Params::UPlayerChoiceButtonWidget_C_BndEvt__Button_K2Node_ComponentBoundEvent_98_FortBaseButtonClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerChoiceButtonWidget.PlayerChoiceButtonWidget_C.ExecuteUbergraph_PlayerChoiceButtonWidget
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FChoiceDataEntry            K2Node_CustomEvent_Choice                                        (None)
// int32                              K2Node_CustomEvent_ChoiceID                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerChoiceWidget_C*       K2Node_CustomEvent_Owner                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortBaseButton*             K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerChoiceButtonWidget_C::ExecuteUbergraph_PlayerChoiceButtonWidget(int32 EntryPoint, const struct FChoiceDataEntry& K2Node_CustomEvent_Choice, int32 K2Node_CustomEvent_ChoiceID, class UPlayerChoiceWidget_C* K2Node_CustomEvent_Owner, class UFortBaseButton* K2Node_ComponentBoundEvent_Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerChoiceButtonWidget_C", "ExecuteUbergraph_PlayerChoiceButtonWidget");

	Params::UPlayerChoiceButtonWidget_C_ExecuteUbergraph_PlayerChoiceButtonWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Choice = K2Node_CustomEvent_Choice;
	Parms.K2Node_CustomEvent_ChoiceID = K2Node_CustomEvent_ChoiceID;
	Parms.K2Node_CustomEvent_Owner = K2Node_CustomEvent_Owner;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;

	UObject::ProcessEvent(Func, &Parms);

}

}


