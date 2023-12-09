#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_Prj_AdrenalineRush.B_Prj_AdrenalineRush_C
// (Actor)

class UClass* AB_Prj_AdrenalineRush_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_Prj_AdrenalineRush_C");

	return Clss;
}


// B_Prj_AdrenalineRush_C B_Prj_AdrenalineRush.Default__B_Prj_AdrenalineRush_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AB_Prj_AdrenalineRush_C* AB_Prj_AdrenalineRush_C::GetDefaultObj()
{
	static class AB_Prj_AdrenalineRush_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AB_Prj_AdrenalineRush_C*>(AB_Prj_AdrenalineRush_C::StaticClass()->DefaultObject);

	return Default;
}


// Function B_Prj_AdrenalineRush.B_Prj_AdrenalineRush_C.DestroyPP
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_Prj_AdrenalineRush_C::DestroyPP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Prj_AdrenalineRush_C", "DestroyPP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_Prj_AdrenalineRush.B_Prj_AdrenalineRush_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_Prj_AdrenalineRush_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Prj_AdrenalineRush_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_Prj_AdrenalineRush.B_Prj_AdrenalineRush_C.PP Shockwave__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AB_Prj_AdrenalineRush_C::PP_Shockwave__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Prj_AdrenalineRush_C", "PP Shockwave__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_Prj_AdrenalineRush.B_Prj_AdrenalineRush_C.PP Shockwave__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AB_Prj_AdrenalineRush_C::PP_Shockwave__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Prj_AdrenalineRush_C", "PP Shockwave__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_Prj_AdrenalineRush.B_Prj_AdrenalineRush_C.PassInfo
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Radius                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             Owner                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               AOE_Heal                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Upgrade_InstaHeal                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               HOT                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              HOT_Duration                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Resurrect                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Prj_AdrenalineRush_C::PassInfo(float Radius, class AFortPlayerPawn* Owner, bool AOE_Heal, bool Upgrade_InstaHeal, bool HOT, float HOT_Duration, bool Resurrect)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Prj_AdrenalineRush_C", "PassInfo");

	Params::AB_Prj_AdrenalineRush_C_PassInfo_Params Parms{};

	Parms.Radius = Radius;
	Parms.Owner = Owner;
	Parms.AOE_Heal = AOE_Heal;
	Parms.Upgrade_InstaHeal = Upgrade_InstaHeal;
	Parms.HOT = HOT;
	Parms.HOT_Duration = HOT_Duration;
	Parms.Resurrect = Resurrect;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Prj_AdrenalineRush.B_Prj_AdrenalineRush_C.ExecuteUbergraph_B_Prj_AdrenalineRush
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Radius                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             K2Node_CustomEvent_Owner                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_AOE_Heal                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_Upgrade_InstaHeal                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_HOT                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_CustomEvent_HOT_Duration                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Resurrect                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_AttachTo_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Prj_AdrenalineRush_C::ExecuteUbergraph_B_Prj_AdrenalineRush(int32 EntryPoint, float K2Node_CustomEvent_Radius, class AFortPlayerPawn* K2Node_CustomEvent_Owner, bool K2Node_CustomEvent_AOE_Heal, bool K2Node_CustomEvent_Upgrade_InstaHeal, bool K2Node_CustomEvent_HOT, float K2Node_CustomEvent_HOT_Duration, bool K2Node_CustomEvent_Resurrect, bool CallFunc_IsLocallyControlled_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_K2_AttachTo_ReturnValue, float CallFunc_FClamp_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue2, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Prj_AdrenalineRush_C", "ExecuteUbergraph_B_Prj_AdrenalineRush");

	Params::AB_Prj_AdrenalineRush_C_ExecuteUbergraph_B_Prj_AdrenalineRush_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Radius = K2Node_CustomEvent_Radius;
	Parms.K2Node_CustomEvent_Owner = K2Node_CustomEvent_Owner;
	Parms.K2Node_CustomEvent_AOE_Heal = K2Node_CustomEvent_AOE_Heal;
	Parms.K2Node_CustomEvent_Upgrade_InstaHeal = K2Node_CustomEvent_Upgrade_InstaHeal;
	Parms.K2Node_CustomEvent_HOT = K2Node_CustomEvent_HOT;
	Parms.K2Node_CustomEvent_HOT_Duration = K2Node_CustomEvent_HOT_Duration;
	Parms.K2Node_CustomEvent_Resurrect = K2Node_CustomEvent_Resurrect;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_K2_AttachTo_ReturnValue = CallFunc_K2_AttachTo_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue = CallFunc_SpawnSoundAttached_ReturnValue;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue2 = CallFunc_SpawnSoundAttached_ReturnValue2;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue3 = CallFunc_SpawnSoundAttached_ReturnValue3;

	UObject::ProcessEvent(Func, &Parms);

}

}


