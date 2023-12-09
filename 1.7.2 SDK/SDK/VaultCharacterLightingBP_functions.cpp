#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass VaultCharacterLightingBP.VaultCharacterLightingBP_C
// (Actor)

class UClass* AVaultCharacterLightingBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VaultCharacterLightingBP_C");

	return Clss;
}


// VaultCharacterLightingBP_C VaultCharacterLightingBP.Default__VaultCharacterLightingBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AVaultCharacterLightingBP_C* AVaultCharacterLightingBP_C::GetDefaultObj()
{
	static class AVaultCharacterLightingBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AVaultCharacterLightingBP_C*>(AVaultCharacterLightingBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function VaultCharacterLightingBP.VaultCharacterLightingBP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AVaultCharacterLightingBP_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaultCharacterLightingBP_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function VaultCharacterLightingBP.VaultCharacterLightingBP_C.LightControl
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewParam                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AVaultCharacterLightingBP_C::LightControl(bool NewParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaultCharacterLightingBP_C", "LightControl");

	Params::AVaultCharacterLightingBP_C_LightControl_Params Parms{};

	Parms.NewParam = NewParam;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VaultCharacterLightingBP.VaultCharacterLightingBP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AVaultCharacterLightingBP_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaultCharacterLightingBP_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function VaultCharacterLightingBP.VaultCharacterLightingBP_C.ExecuteUbergraph_VaultCharacterLightingBP
// (None)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_NewParam                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetShadowQuality_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void AVaultCharacterLightingBP_C::ExecuteUbergraph_VaultCharacterLightingBP(int32 EntryPoint, bool K2Node_CustomEvent_NewParam, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetShadowQuality_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaultCharacterLightingBP_C", "ExecuteUbergraph_VaultCharacterLightingBP");

	Params::AVaultCharacterLightingBP_C_ExecuteUbergraph_VaultCharacterLightingBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_NewParam = K2Node_CustomEvent_NewParam;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetShadowQuality_ReturnValue = CallFunc_GetShadowQuality_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


