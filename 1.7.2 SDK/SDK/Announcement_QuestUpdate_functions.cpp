#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Announcement_QuestUpdate.Announcement_QuestUpdate_C
// (None)

class UClass* UAnnouncement_QuestUpdate_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Announcement_QuestUpdate_C");

	return Clss;
}


// Announcement_QuestUpdate_C Announcement_QuestUpdate.Default__Announcement_QuestUpdate_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAnnouncement_QuestUpdate_C* UAnnouncement_QuestUpdate_C::GetDefaultObj()
{
	static class UAnnouncement_QuestUpdate_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnnouncement_QuestUpdate_C*>(UAnnouncement_QuestUpdate_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Announcement_QuestUpdate.Announcement_QuestUpdate_C.UpdateWidgetData
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// class AFortClientAnnouncement*     Announcement                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAnnouncement_QuestUpdate_C::UpdateWidgetData(class AFortClientAnnouncement* Announcement)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Announcement_QuestUpdate_C", "UpdateWidgetData");

	Params::UAnnouncement_QuestUpdate_C_UpdateWidgetData_Params Parms{};

	Parms.Announcement = Announcement;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Announcement_QuestUpdate.Announcement_QuestUpdate_C.AllUpdatesFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UQuestUpdateEntry_C*         UpdateWidget                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAnnouncement_QuestUpdate_C::AllUpdatesFinished(class UQuestUpdateEntry_C* UpdateWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Announcement_QuestUpdate_C", "AllUpdatesFinished");

	Params::UAnnouncement_QuestUpdate_C_AllUpdatesFinished_Params Parms{};

	Parms.UpdateWidget = UpdateWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Announcement_QuestUpdate.Announcement_QuestUpdate_C.ExecuteUbergraph_Announcement_QuestUpdate
// (None)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQuestUpdateEntry_C*         K2Node_CustomEvent_UpdateWidget                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class AFortClientAnnouncement*     K2Node_Event_Announcement                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAnnounce_QuestUpdate_C*     K2Node_DynamicCast_AsAnnounce_Quest_Update                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_OnReceiveQuestUpdate_Success                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAnnouncement_QuestUpdate_C::ExecuteUbergraph_Announcement_QuestUpdate(int32 EntryPoint, class UQuestUpdateEntry_C* K2Node_CustomEvent_UpdateWidget, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AFortClientAnnouncement* K2Node_Event_Announcement, class AAnnounce_QuestUpdate_C* K2Node_DynamicCast_AsAnnounce_Quest_Update, bool K2Node_DynamicCast_bSuccess, bool CallFunc_OnReceiveQuestUpdate_Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Announcement_QuestUpdate_C", "ExecuteUbergraph_Announcement_QuestUpdate");

	Params::UAnnouncement_QuestUpdate_C_ExecuteUbergraph_Announcement_QuestUpdate_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_UpdateWidget = K2Node_CustomEvent_UpdateWidget;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_Announcement = K2Node_Event_Announcement;
	Parms.K2Node_DynamicCast_AsAnnounce_Quest_Update = K2Node_DynamicCast_AsAnnounce_Quest_Update;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_OnReceiveQuestUpdate_Success = CallFunc_OnReceiveQuestUpdate_Success;

	UObject::ProcessEvent(Func, &Parms);

}

}


