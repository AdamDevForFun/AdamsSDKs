#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass MenuScreen_Commando.MenuScreen_Commando_C
// (None)

class UClass* UMenuScreen_Commando_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MenuScreen_Commando_C");

	return Clss;
}


// MenuScreen_Commando_C MenuScreen_Commando.Default__MenuScreen_Commando_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMenuScreen_Commando_C* UMenuScreen_Commando_C::GetDefaultObj()
{
	static class UMenuScreen_Commando_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMenuScreen_Commando_C*>(UMenuScreen_Commando_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MenuScreen_Commando.MenuScreen_Commando_C.EvaluateGraphExposedInputs_ExecuteUbergraph_MenuScreen_Commando_AnimGraphNode_BlendListByEnum_A3E599E943E9B22B3BC78EA28C49C57B
// (BlueprintEvent)
// Parameters:

void UMenuScreen_Commando_C::EvaluateGraphExposedInputs_ExecuteUbergraph_MenuScreen_Commando_AnimGraphNode_BlendListByEnum_A3E599E943E9B22B3BC78EA28C49C57B()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuScreen_Commando_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_MenuScreen_Commando_AnimGraphNode_BlendListByEnum_A3E599E943E9B22B3BC78EA28C49C57B");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuScreen_Commando.MenuScreen_Commando_C.AnimNotify_playFacialAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuScreen_Commando_C::AnimNotify_playFacialAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuScreen_Commando_C", "AnimNotify_playFacialAnim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuScreen_Commando.MenuScreen_Commando_C.UserFocus
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuScreen_Commando_C::UserFocus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuScreen_Commando_C", "UserFocus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuScreen_Commando.MenuScreen_Commando_C.AnimNotify_LeftB
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuScreen_Commando_C::AnimNotify_LeftB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuScreen_Commando_C", "AnimNotify_LeftB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuScreen_Commando.MenuScreen_Commando_C.ExecuteUbergraph_MenuScreen_Commando
// (None)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuScreen_Commando_C::ExecuteUbergraph_MenuScreen_Commando(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuScreen_Commando_C", "ExecuteUbergraph_MenuScreen_Commando");

	Params::UMenuScreen_Commando_C_ExecuteUbergraph_MenuScreen_Commando_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuScreen_Commando.MenuScreen_Commando_C.MenuScreenDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuScreen_Commando_C::MenuScreenDispatcher__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuScreen_Commando_C", "MenuScreenDispatcher__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


