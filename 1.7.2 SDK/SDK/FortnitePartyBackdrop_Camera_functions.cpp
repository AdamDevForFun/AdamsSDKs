#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FortnitePartyBackdrop_Camera.FortnitePartyBackdrop_Camera_C
// (Actor)

class UClass* AFortnitePartyBackdrop_Camera_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortnitePartyBackdrop_Camera_C");

	return Clss;
}


// FortnitePartyBackdrop_Camera_C FortnitePartyBackdrop_Camera.Default__FortnitePartyBackdrop_Camera_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AFortnitePartyBackdrop_Camera_C* AFortnitePartyBackdrop_Camera_C::GetDefaultObj()
{
	static class AFortnitePartyBackdrop_Camera_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AFortnitePartyBackdrop_Camera_C*>(AFortnitePartyBackdrop_Camera_C::StaticClass()->DefaultObject);

	return Default;
}


// Function FortnitePartyBackdrop_Camera.FortnitePartyBackdrop_Camera_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AFortnitePartyBackdrop_Camera_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortnitePartyBackdrop_Camera_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FortnitePartyBackdrop_Camera.FortnitePartyBackdrop_Camera_C.OnDeactivated
// (Event, Public, BlueprintEvent)
// Parameters:

void AFortnitePartyBackdrop_Camera_C::OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortnitePartyBackdrop_Camera_C", "OnDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FortnitePartyBackdrop_Camera.FortnitePartyBackdrop_Camera_C.OnActivated
// (Event, Public, BlueprintEvent)
// Parameters:

void AFortnitePartyBackdrop_Camera_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortnitePartyBackdrop_Camera_C", "OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FortnitePartyBackdrop_Camera.FortnitePartyBackdrop_Camera_C.ExecuteUbergraph_FortnitePartyBackdrop_Camera
// (None)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortTimeOfDayManager*       CallFunc_GetTimeOfDayManagerFromContext_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ATVPostProcessBP_C*>  CallFunc_GetAllActorsOfClass_OutActors                           (ZeroConstructor, ReferenceParm)
// class ATVPostProcessBP_C*          CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFortnitePartyBackdrop_Camera_C::ExecuteUbergraph_FortnitePartyBackdrop_Camera(int32 EntryPoint, class AFortTimeOfDayManager* CallFunc_GetTimeOfDayManagerFromContext_ReturnValue, TArray<class ATVPostProcessBP_C*>& CallFunc_GetAllActorsOfClass_OutActors, class ATVPostProcessBP_C* CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortnitePartyBackdrop_Camera_C", "ExecuteUbergraph_FortnitePartyBackdrop_Camera");

	Params::AFortnitePartyBackdrop_Camera_C_ExecuteUbergraph_FortnitePartyBackdrop_Camera_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetTimeOfDayManagerFromContext_ReturnValue = CallFunc_GetTimeOfDayManagerFromContext_ReturnValue;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

}

}


