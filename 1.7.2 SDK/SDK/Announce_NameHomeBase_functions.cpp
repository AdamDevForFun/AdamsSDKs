#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Announce_NameHomeBase.Announce_NameHomeBase_C
// (Actor)

class UClass* AAnnounce_NameHomeBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Announce_NameHomeBase_C");

	return Clss;
}


// Announce_NameHomeBase_C Announce_NameHomeBase.Default__Announce_NameHomeBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AAnnounce_NameHomeBase_C* AAnnounce_NameHomeBase_C::GetDefaultObj()
{
	static class AAnnounce_NameHomeBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AAnnounce_NameHomeBase_C*>(AAnnounce_NameHomeBase_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Announce_NameHomeBase.Announce_NameHomeBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AAnnounce_NameHomeBase_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Announce_NameHomeBase_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Announce_NameHomeBase.Announce_NameHomeBase_C.InitAnnouncement
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AAnnounce_NameHomeBase_C::InitAnnouncement()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Announce_NameHomeBase_C", "InitAnnouncement");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Announce_NameHomeBase.Announce_NameHomeBase_C.HandleSentenceStart_UI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SentenceIdx                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAnnounce_NameHomeBase_C::HandleSentenceStart_UI(int32 SentenceIdx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Announce_NameHomeBase_C", "HandleSentenceStart_UI");

	Params::AAnnounce_NameHomeBase_C_HandleSentenceStart_UI_Params Parms{};

	Parms.SentenceIdx = SentenceIdx;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Announce_NameHomeBase.Announce_NameHomeBase_C.HandleSentenceStop_UI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SentenceIdx                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAnnounce_NameHomeBase_C::HandleSentenceStop_UI(int32 SentenceIdx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Announce_NameHomeBase_C", "HandleSentenceStop_UI");

	Params::AAnnounce_NameHomeBase_C_HandleSentenceStop_UI_Params Parms{};

	Parms.SentenceIdx = SentenceIdx;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Announce_NameHomeBase.Announce_NameHomeBase_C.ExecuteUbergraph_Announce_NameHomeBase
// (None)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_SentenceIdx2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Event_SentenceIdx                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger2_CmpSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void AAnnounce_NameHomeBase_C::ExecuteUbergraph_Announce_NameHomeBase(int32 EntryPoint, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, int32 K2Node_Event_SentenceIdx2, bool K2Node_SwitchInteger_CmpSuccess, int32 K2Node_Event_SentenceIdx, bool K2Node_SwitchInteger2_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Announce_NameHomeBase_C", "ExecuteUbergraph_Announce_NameHomeBase");

	Params::AAnnounce_NameHomeBase_C_ExecuteUbergraph_Announce_NameHomeBase_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_Event_SentenceIdx2 = K2Node_Event_SentenceIdx2;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.K2Node_Event_SentenceIdx = K2Node_Event_SentenceIdx;
	Parms.K2Node_SwitchInteger2_CmpSuccess = K2Node_SwitchInteger2_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


