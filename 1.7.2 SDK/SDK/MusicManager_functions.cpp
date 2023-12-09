#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MusicManager.MusicManager_C
// (Actor)

class UClass* AMusicManager_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MusicManager_C");

	return Clss;
}


// MusicManager_C MusicManager.Default__MusicManager_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AMusicManager_C* AMusicManager_C::GetDefaultObj()
{
	static class AMusicManager_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AMusicManager_C*>(AMusicManager_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MusicManager.MusicManager_C.ResetMusicBools
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void AMusicManager_C::ResetMusicBools()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MusicManager_C", "ResetMusicBools");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MusicManager.MusicManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerControllerFrontEnd*K2Node_DynamicCast_AsFort_Player_Controller_Front_End            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerControllerFrontEnd*K2Node_DynamicCast_AsFort_Player_Controller_Front_End2           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AMusicManager_C::UserConstructionScript(class AFortPlayerControllerFrontEnd* K2Node_DynamicCast_AsFort_Player_Controller_Front_End, bool K2Node_DynamicCast_bSuccess, class AFortPlayerControllerFrontEnd* K2Node_DynamicCast_AsFort_Player_Controller_Front_End2, bool K2Node_DynamicCast_bSuccess2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MusicManager_C", "UserConstructionScript");

	Params::AMusicManager_C_UserConstructionScript_Params Parms{};

	Parms.K2Node_DynamicCast_AsFort_Player_Controller_Front_End = K2Node_DynamicCast_AsFort_Player_Controller_Front_End;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller_Front_End2 = K2Node_DynamicCast_AsFort_Player_Controller_Front_End2;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MusicManager.MusicManager_C.OnDayPhaseChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EFortDayPhase           CurrentDayPhase                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortDayPhase           PreviousDayPhase                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bAtCreation                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AMusicManager_C::OnDayPhaseChanged(enum class EFortDayPhase CurrentDayPhase, enum class EFortDayPhase PreviousDayPhase, bool bAtCreation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MusicManager_C", "OnDayPhaseChanged");

	Params::AMusicManager_C_OnDayPhaseChanged_Params Parms{};

	Parms.CurrentDayPhase = CurrentDayPhase;
	Parms.PreviousDayPhase = PreviousDayPhase;
	Parms.bAtCreation = bAtCreation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MusicManager.MusicManager_C.OnUpdateMusic
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AMusicManager_C::OnUpdateMusic()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MusicManager_C", "OnUpdateMusic");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MusicManager.MusicManager_C.PlayAmbientMusic
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AMusicManager_C::PlayAmbientMusic()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MusicManager_C", "PlayAmbientMusic");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MusicManager.MusicManager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AMusicManager_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MusicManager_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MusicManager.MusicManager_C.StartMusic
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AMusicManager_C::StartMusic()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MusicManager_C", "StartMusic");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MusicManager.MusicManager_C.StopMusic
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AMusicManager_C::StopMusic()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MusicManager_C", "StopMusic");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MusicManager.MusicManager_C.ExecuteUbergraph_MusicManager
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_MakeLiteralInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue3                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_MakeLiteralInt_ReturnValue2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue2                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EMusicFadeStyles        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue6                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue4                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue4                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_MakeLiteralInt_ReturnValue3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue7                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue3                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue3                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue5                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue5                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue8                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue9                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue6                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue6                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue10                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue7                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue11                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue7                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue12                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue8                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue8                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USoundBase*                  Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue2                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue3                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue4                              (ZeroConstructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue5                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue6                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue7                              (ZeroConstructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue8                              (ZeroConstructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue9                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue10                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue11                             (ZeroConstructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable3                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue12                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable5                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue13                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue14                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue15                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable6                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue16                             (ZeroConstructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable4                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortDayPhase           K2Node_Event_CurrentDayPhase                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortDayPhase           K2Node_Event_PreviousDayPhase                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bAtCreation                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue3                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue4                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue5                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue6                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue4                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetTimeOfDaySpeed_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortDayPhase           Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  K2Node_Select3_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  K2Node_Select4_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetEventHeatPercent_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetEventHeatPercent_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetEventHeatPercent_ReturnValue3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetEventHeatPercent_ReturnValue4                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortDayPhase           Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor)
// class USoundBase*                  K2Node_Select5_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable5                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_MakeLiteralInt_ReturnValue4                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsNearActiveEncounters_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue4                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select6_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue4                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USoundBase*                  K2Node_Select7_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetEventHeatPercent_ReturnValue5                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  K2Node_Select8_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetEventHeatPercent_ReturnValue6                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable7                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USoundBase*                  K2Node_Select9_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue9                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable8                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetEventHeatPercent_ReturnValue7                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMusicFadeStyles        K2Node_Select10_Default                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue10                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetEventHeatPercent_ReturnValue8                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetEventHeatPercent_ReturnValue9                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue4                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue5                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue3                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_FloatFloat_ReturnValue4                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue11                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue12                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable9                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable10                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select11_Default                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMusicFadeStyles        K2Node_Select12_Default                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable6                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable11                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable12                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USoundBase*                  K2Node_Select13_Default                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select14_Default                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable13                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USoundBase*                  Temp_object_Variable7                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMusicFadeStyles        K2Node_Select15_Default                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable14                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USoundBase*                  K2Node_Select16_Default                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMusicManager_C::ExecuteUbergraph_MusicManager(int32 EntryPoint, float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue2, bool CallFunc_Greater_FloatFloat_ReturnValue, bool Temp_bool_Variable, int32 CallFunc_MakeLiteralInt_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue3, float CallFunc_Subtract_FloatFloat_ReturnValue2, bool CallFunc_Greater_FloatFloat_ReturnValue2, float CallFunc_GetGameTimeInSeconds_ReturnValue4, float CallFunc_Subtract_FloatFloat_ReturnValue3, float CallFunc_GetGameTimeInSeconds_ReturnValue5, bool CallFunc_Greater_FloatFloat_ReturnValue3, int32 CallFunc_MakeLiteralInt_ReturnValue2, bool CallFunc_NotEqual_IntInt_ReturnValue2, bool CallFunc_Greater_IntInt_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue2, enum class EMusicFadeStyles K2Node_Select_Default, float CallFunc_GetGameTimeInSeconds_ReturnValue6, float CallFunc_Subtract_FloatFloat_ReturnValue4, bool Temp_bool_Variable2, bool CallFunc_Greater_FloatFloat_ReturnValue4, float K2Node_Select2_Default, int32 CallFunc_MakeLiteralInt_ReturnValue3, float CallFunc_GetGameTimeInSeconds_ReturnValue7, bool CallFunc_NotEqual_IntInt_ReturnValue3, bool CallFunc_Greater_IntInt_ReturnValue3, bool CallFunc_BooleanAND_ReturnValue3, float CallFunc_Subtract_FloatFloat_ReturnValue5, bool CallFunc_Greater_FloatFloat_ReturnValue5, float CallFunc_GetGameTimeInSeconds_ReturnValue8, float CallFunc_GetGameTimeInSeconds_ReturnValue9, float CallFunc_Subtract_FloatFloat_ReturnValue6, bool CallFunc_Greater_FloatFloat_ReturnValue6, float CallFunc_GetGameTimeInSeconds_ReturnValue10, float CallFunc_Subtract_FloatFloat_ReturnValue7, float CallFunc_GetGameTimeInSeconds_ReturnValue11, bool CallFunc_Greater_FloatFloat_ReturnValue7, float CallFunc_GetGameTimeInSeconds_ReturnValue12, float CallFunc_Subtract_FloatFloat_ReturnValue8, bool CallFunc_Greater_FloatFloat_ReturnValue8, class USoundBase* Temp_object_Variable, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue2, const class FString& CallFunc_Concat_StrStr_ReturnValue3, const class FString& CallFunc_Concat_StrStr_ReturnValue4, bool Temp_bool_Variable3, const class FString& CallFunc_Concat_StrStr_ReturnValue5, const class FString& CallFunc_Concat_StrStr_ReturnValue6, const class FString& CallFunc_Concat_StrStr_ReturnValue7, class USoundBase* Temp_object_Variable2, const class FString& CallFunc_Concat_StrStr_ReturnValue8, bool Temp_bool_Variable4, const class FString& CallFunc_Concat_StrStr_ReturnValue9, const class FString& CallFunc_Concat_StrStr_ReturnValue10, const class FString& CallFunc_Concat_StrStr_ReturnValue11, class USoundBase* Temp_object_Variable3, const class FString& CallFunc_Concat_StrStr_ReturnValue12, bool Temp_bool_Variable5, const class FString& CallFunc_Concat_StrStr_ReturnValue13, const class FString& CallFunc_Concat_StrStr_ReturnValue14, const class FString& CallFunc_Concat_StrStr_ReturnValue15, bool Temp_bool_Variable6, const class FString& CallFunc_Concat_StrStr_ReturnValue16, class USoundBase* Temp_object_Variable4, enum class EFortDayPhase K2Node_Event_CurrentDayPhase, enum class EFortDayPhase K2Node_Event_PreviousDayPhase, bool K2Node_Event_bAtCreation, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue2, bool CallFunc_EqualEqual_NameName_ReturnValue3, bool CallFunc_EqualEqual_NameName_ReturnValue4, bool CallFunc_EqualEqual_NameName_ReturnValue5, bool CallFunc_EqualEqual_NameName_ReturnValue6, bool CallFunc_NotEqual_IntInt_ReturnValue4, float CallFunc_GetTimeOfDaySpeed_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, enum class EFortDayPhase Temp_byte_Variable, class USoundBase* K2Node_Select3_Default, class USoundBase* K2Node_Select4_Default, float CallFunc_GetEventHeatPercent_ReturnValue, float CallFunc_GetEventHeatPercent_ReturnValue2, float CallFunc_GetEventHeatPercent_ReturnValue3, float CallFunc_GetEventHeatPercent_ReturnValue4, enum class EFortDayPhase Temp_byte_Variable2, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, class USoundBase* K2Node_Select5_Default, class USoundBase* Temp_object_Variable5, int32 CallFunc_MakeLiteralInt_ReturnValue4, bool CallFunc_IsNearActiveEncounters_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue4, bool CallFunc_Not_PreBool_ReturnValue2, float K2Node_Select6_Default, bool CallFunc_BooleanAND_ReturnValue4, class USoundBase* K2Node_Select7_Default, float CallFunc_GetEventHeatPercent_ReturnValue5, class USoundBase* K2Node_Select8_Default, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_GetEventHeatPercent_ReturnValue6, bool Temp_bool_Variable7, float CallFunc_Add_FloatFloat_ReturnValue2, bool CallFunc_Less_FloatFloat_ReturnValue, class USoundBase* K2Node_Select9_Default, bool CallFunc_Greater_FloatFloat_ReturnValue9, bool Temp_bool_Variable8, float CallFunc_GetEventHeatPercent_ReturnValue7, enum class EMusicFadeStyles K2Node_Select10_Default, float CallFunc_Add_FloatFloat_ReturnValue3, bool CallFunc_Less_FloatFloat_ReturnValue2, bool CallFunc_Greater_FloatFloat_ReturnValue10, float CallFunc_GetEventHeatPercent_ReturnValue8, float CallFunc_GetEventHeatPercent_ReturnValue9, float CallFunc_Add_FloatFloat_ReturnValue4, float CallFunc_Add_FloatFloat_ReturnValue5, bool CallFunc_Less_FloatFloat_ReturnValue3, bool CallFunc_Less_FloatFloat_ReturnValue4, bool CallFunc_Greater_FloatFloat_ReturnValue11, bool CallFunc_Greater_FloatFloat_ReturnValue12, bool Temp_bool_Variable9, bool Temp_bool_Variable10, float K2Node_Select11_Default, enum class EMusicFadeStyles K2Node_Select12_Default, class USoundBase* Temp_object_Variable6, bool Temp_bool_Variable11, bool Temp_bool_Variable12, class USoundBase* K2Node_Select13_Default, float K2Node_Select14_Default, bool Temp_bool_Variable13, class USoundBase* Temp_object_Variable7, enum class EMusicFadeStyles K2Node_Select15_Default, bool Temp_bool_Variable14, class USoundBase* K2Node_Select16_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MusicManager_C", "ExecuteUbergraph_MusicManager");

	Params::AMusicManager_C_ExecuteUbergraph_MusicManager_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue2 = CallFunc_GetGameTimeInSeconds_ReturnValue2;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_MakeLiteralInt_ReturnValue = CallFunc_MakeLiteralInt_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue3 = CallFunc_GetGameTimeInSeconds_ReturnValue3;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue2 = CallFunc_Subtract_FloatFloat_ReturnValue2;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue2 = CallFunc_Greater_FloatFloat_ReturnValue2;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue4 = CallFunc_GetGameTimeInSeconds_ReturnValue4;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue3 = CallFunc_Subtract_FloatFloat_ReturnValue3;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue5 = CallFunc_GetGameTimeInSeconds_ReturnValue5;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue3 = CallFunc_Greater_FloatFloat_ReturnValue3;
	Parms.CallFunc_MakeLiteralInt_ReturnValue2 = CallFunc_MakeLiteralInt_ReturnValue2;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue2 = CallFunc_NotEqual_IntInt_ReturnValue2;
	Parms.CallFunc_Greater_IntInt_ReturnValue2 = CallFunc_Greater_IntInt_ReturnValue2;
	Parms.CallFunc_BooleanAND_ReturnValue2 = CallFunc_BooleanAND_ReturnValue2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue6 = CallFunc_GetGameTimeInSeconds_ReturnValue6;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue4 = CallFunc_Subtract_FloatFloat_ReturnValue4;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue4 = CallFunc_Greater_FloatFloat_ReturnValue4;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.CallFunc_MakeLiteralInt_ReturnValue3 = CallFunc_MakeLiteralInt_ReturnValue3;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue7 = CallFunc_GetGameTimeInSeconds_ReturnValue7;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue3 = CallFunc_NotEqual_IntInt_ReturnValue3;
	Parms.CallFunc_Greater_IntInt_ReturnValue3 = CallFunc_Greater_IntInt_ReturnValue3;
	Parms.CallFunc_BooleanAND_ReturnValue3 = CallFunc_BooleanAND_ReturnValue3;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue5 = CallFunc_Subtract_FloatFloat_ReturnValue5;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue5 = CallFunc_Greater_FloatFloat_ReturnValue5;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue8 = CallFunc_GetGameTimeInSeconds_ReturnValue8;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue9 = CallFunc_GetGameTimeInSeconds_ReturnValue9;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue6 = CallFunc_Subtract_FloatFloat_ReturnValue6;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue6 = CallFunc_Greater_FloatFloat_ReturnValue6;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue10 = CallFunc_GetGameTimeInSeconds_ReturnValue10;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue7 = CallFunc_Subtract_FloatFloat_ReturnValue7;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue11 = CallFunc_GetGameTimeInSeconds_ReturnValue11;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue7 = CallFunc_Greater_FloatFloat_ReturnValue7;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue12 = CallFunc_GetGameTimeInSeconds_ReturnValue12;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue8 = CallFunc_Subtract_FloatFloat_ReturnValue8;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue8 = CallFunc_Greater_FloatFloat_ReturnValue8;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue2 = CallFunc_Concat_StrStr_ReturnValue2;
	Parms.CallFunc_Concat_StrStr_ReturnValue3 = CallFunc_Concat_StrStr_ReturnValue3;
	Parms.CallFunc_Concat_StrStr_ReturnValue4 = CallFunc_Concat_StrStr_ReturnValue4;
	Parms.Temp_bool_Variable3 = Temp_bool_Variable3;
	Parms.CallFunc_Concat_StrStr_ReturnValue5 = CallFunc_Concat_StrStr_ReturnValue5;
	Parms.CallFunc_Concat_StrStr_ReturnValue6 = CallFunc_Concat_StrStr_ReturnValue6;
	Parms.CallFunc_Concat_StrStr_ReturnValue7 = CallFunc_Concat_StrStr_ReturnValue7;
	Parms.Temp_object_Variable2 = Temp_object_Variable2;
	Parms.CallFunc_Concat_StrStr_ReturnValue8 = CallFunc_Concat_StrStr_ReturnValue8;
	Parms.Temp_bool_Variable4 = Temp_bool_Variable4;
	Parms.CallFunc_Concat_StrStr_ReturnValue9 = CallFunc_Concat_StrStr_ReturnValue9;
	Parms.CallFunc_Concat_StrStr_ReturnValue10 = CallFunc_Concat_StrStr_ReturnValue10;
	Parms.CallFunc_Concat_StrStr_ReturnValue11 = CallFunc_Concat_StrStr_ReturnValue11;
	Parms.Temp_object_Variable3 = Temp_object_Variable3;
	Parms.CallFunc_Concat_StrStr_ReturnValue12 = CallFunc_Concat_StrStr_ReturnValue12;
	Parms.Temp_bool_Variable5 = Temp_bool_Variable5;
	Parms.CallFunc_Concat_StrStr_ReturnValue13 = CallFunc_Concat_StrStr_ReturnValue13;
	Parms.CallFunc_Concat_StrStr_ReturnValue14 = CallFunc_Concat_StrStr_ReturnValue14;
	Parms.CallFunc_Concat_StrStr_ReturnValue15 = CallFunc_Concat_StrStr_ReturnValue15;
	Parms.Temp_bool_Variable6 = Temp_bool_Variable6;
	Parms.CallFunc_Concat_StrStr_ReturnValue16 = CallFunc_Concat_StrStr_ReturnValue16;
	Parms.Temp_object_Variable4 = Temp_object_Variable4;
	Parms.K2Node_Event_CurrentDayPhase = K2Node_Event_CurrentDayPhase;
	Parms.K2Node_Event_PreviousDayPhase = K2Node_Event_PreviousDayPhase;
	Parms.K2Node_Event_bAtCreation = K2Node_Event_bAtCreation;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue2 = CallFunc_EqualEqual_NameName_ReturnValue2;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue3 = CallFunc_EqualEqual_NameName_ReturnValue3;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue4 = CallFunc_EqualEqual_NameName_ReturnValue4;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue5 = CallFunc_EqualEqual_NameName_ReturnValue5;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue6 = CallFunc_EqualEqual_NameName_ReturnValue6;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue4 = CallFunc_NotEqual_IntInt_ReturnValue4;
	Parms.CallFunc_GetTimeOfDaySpeed_ReturnValue = CallFunc_GetTimeOfDaySpeed_ReturnValue;
	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue = CallFunc_EqualEqual_FloatFloat_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select3_Default = K2Node_Select3_Default;
	Parms.K2Node_Select4_Default = K2Node_Select4_Default;
	Parms.CallFunc_GetEventHeatPercent_ReturnValue = CallFunc_GetEventHeatPercent_ReturnValue;
	Parms.CallFunc_GetEventHeatPercent_ReturnValue2 = CallFunc_GetEventHeatPercent_ReturnValue2;
	Parms.CallFunc_GetEventHeatPercent_ReturnValue3 = CallFunc_GetEventHeatPercent_ReturnValue3;
	Parms.CallFunc_GetEventHeatPercent_ReturnValue4 = CallFunc_GetEventHeatPercent_ReturnValue4;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.K2Node_Select5_Default = K2Node_Select5_Default;
	Parms.Temp_object_Variable5 = Temp_object_Variable5;
	Parms.CallFunc_MakeLiteralInt_ReturnValue4 = CallFunc_MakeLiteralInt_ReturnValue4;
	Parms.CallFunc_IsNearActiveEncounters_ReturnValue = CallFunc_IsNearActiveEncounters_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue4 = CallFunc_Greater_IntInt_ReturnValue4;
	Parms.CallFunc_Not_PreBool_ReturnValue2 = CallFunc_Not_PreBool_ReturnValue2;
	Parms.K2Node_Select6_Default = K2Node_Select6_Default;
	Parms.CallFunc_BooleanAND_ReturnValue4 = CallFunc_BooleanAND_ReturnValue4;
	Parms.K2Node_Select7_Default = K2Node_Select7_Default;
	Parms.CallFunc_GetEventHeatPercent_ReturnValue5 = CallFunc_GetEventHeatPercent_ReturnValue5;
	Parms.K2Node_Select8_Default = K2Node_Select8_Default;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_GetEventHeatPercent_ReturnValue6 = CallFunc_GetEventHeatPercent_ReturnValue6;
	Parms.Temp_bool_Variable7 = Temp_bool_Variable7;
	Parms.CallFunc_Add_FloatFloat_ReturnValue2 = CallFunc_Add_FloatFloat_ReturnValue2;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.K2Node_Select9_Default = K2Node_Select9_Default;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue9 = CallFunc_Greater_FloatFloat_ReturnValue9;
	Parms.Temp_bool_Variable8 = Temp_bool_Variable8;
	Parms.CallFunc_GetEventHeatPercent_ReturnValue7 = CallFunc_GetEventHeatPercent_ReturnValue7;
	Parms.K2Node_Select10_Default = K2Node_Select10_Default;
	Parms.CallFunc_Add_FloatFloat_ReturnValue3 = CallFunc_Add_FloatFloat_ReturnValue3;
	Parms.CallFunc_Less_FloatFloat_ReturnValue2 = CallFunc_Less_FloatFloat_ReturnValue2;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue10 = CallFunc_Greater_FloatFloat_ReturnValue10;
	Parms.CallFunc_GetEventHeatPercent_ReturnValue8 = CallFunc_GetEventHeatPercent_ReturnValue8;
	Parms.CallFunc_GetEventHeatPercent_ReturnValue9 = CallFunc_GetEventHeatPercent_ReturnValue9;
	Parms.CallFunc_Add_FloatFloat_ReturnValue4 = CallFunc_Add_FloatFloat_ReturnValue4;
	Parms.CallFunc_Add_FloatFloat_ReturnValue5 = CallFunc_Add_FloatFloat_ReturnValue5;
	Parms.CallFunc_Less_FloatFloat_ReturnValue3 = CallFunc_Less_FloatFloat_ReturnValue3;
	Parms.CallFunc_Less_FloatFloat_ReturnValue4 = CallFunc_Less_FloatFloat_ReturnValue4;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue11 = CallFunc_Greater_FloatFloat_ReturnValue11;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue12 = CallFunc_Greater_FloatFloat_ReturnValue12;
	Parms.Temp_bool_Variable9 = Temp_bool_Variable9;
	Parms.Temp_bool_Variable10 = Temp_bool_Variable10;
	Parms.K2Node_Select11_Default = K2Node_Select11_Default;
	Parms.K2Node_Select12_Default = K2Node_Select12_Default;
	Parms.Temp_object_Variable6 = Temp_object_Variable6;
	Parms.Temp_bool_Variable11 = Temp_bool_Variable11;
	Parms.Temp_bool_Variable12 = Temp_bool_Variable12;
	Parms.K2Node_Select13_Default = K2Node_Select13_Default;
	Parms.K2Node_Select14_Default = K2Node_Select14_Default;
	Parms.Temp_bool_Variable13 = Temp_bool_Variable13;
	Parms.Temp_object_Variable7 = Temp_object_Variable7;
	Parms.K2Node_Select15_Default = K2Node_Select15_Default;
	Parms.Temp_bool_Variable14 = Temp_bool_Variable14;
	Parms.K2Node_Select16_Default = K2Node_Select16_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}


