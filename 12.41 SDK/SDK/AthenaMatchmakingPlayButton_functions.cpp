#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AthenaMatchmakingPlayButton.AthenaMatchmakingPlayButton_C
// (None)

class UClass* UAthenaMatchmakingPlayButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaMatchmakingPlayButton_C");

	return Clss;
}


// AthenaMatchmakingPlayButton_C AthenaMatchmakingPlayButton.Default__AthenaMatchmakingPlayButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthenaMatchmakingPlayButton_C* UAthenaMatchmakingPlayButton_C::GetDefaultObj()
{
	static class UAthenaMatchmakingPlayButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaMatchmakingPlayButton_C*>(UAthenaMatchmakingPlayButton_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AthenaMatchmakingPlayButton.AthenaMatchmakingPlayButton_C.SetButtonText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        InText                                                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UAthenaMatchmakingPlayButton_C::SetButtonText(class FText InText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaMatchmakingPlayButton_C", "SetButtonText");

	Params::UAthenaMatchmakingPlayButton_C_SetButtonText_Params Parms{};

	Parms.InText = InText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingPlayButton.AthenaMatchmakingPlayButton_C.ExecuteUbergraph_AthenaMatchmakingPlayButton
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaMatchmakingPlayButton_C::ExecuteUbergraph_AthenaMatchmakingPlayButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaMatchmakingPlayButton_C", "ExecuteUbergraph_AthenaMatchmakingPlayButton");

	Params::UAthenaMatchmakingPlayButton_C_ExecuteUbergraph_AthenaMatchmakingPlayButton_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


