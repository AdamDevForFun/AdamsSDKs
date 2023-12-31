#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass StoreCamera_Blueprint.StoreCamera_Blueprint_C
// (Actor)

class UClass* AStoreCamera_Blueprint_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StoreCamera_Blueprint_C");

	return Clss;
}


// StoreCamera_Blueprint_C StoreCamera_Blueprint.Default__StoreCamera_Blueprint_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AStoreCamera_Blueprint_C* AStoreCamera_Blueprint_C::GetDefaultObj()
{
	static class AStoreCamera_Blueprint_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AStoreCamera_Blueprint_C*>(AStoreCamera_Blueprint_C::StaticClass()->DefaultObject);

	return Default;
}


// Function StoreCamera_Blueprint.StoreCamera_Blueprint_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                    CallFunc_K2_GetComponentRotation_ReturnValue                     (IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_K2_GetComponentRotation_ReturnValue2                    (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue2                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStoreCamera_Blueprint_C::UserConstructionScript(const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue2, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreCamera_Blueprint_C", "UserConstructionScript");

	Params::AStoreCamera_Blueprint_C_UserConstructionScript_Params Parms{};

	Parms.CallFunc_K2_GetComponentRotation_ReturnValue = CallFunc_K2_GetComponentRotation_ReturnValue;
	Parms.CallFunc_K2_GetComponentRotation_ReturnValue2 = CallFunc_K2_GetComponentRotation_ReturnValue2;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue2 = CallFunc_K2_GetComponentLocation_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCamera_Blueprint.StoreCamera_Blueprint_C.Timeline_0__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AStoreCamera_Blueprint_C::Timeline_0__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreCamera_Blueprint_C", "Timeline_0__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StoreCamera_Blueprint.StoreCamera_Blueprint_C.Timeline_0__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AStoreCamera_Blueprint_C::Timeline_0__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreCamera_Blueprint_C", "Timeline_0__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StoreCamera_Blueprint.StoreCamera_Blueprint_C.ChoicePack__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AStoreCamera_Blueprint_C::ChoicePack__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreCamera_Blueprint_C", "ChoicePack__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StoreCamera_Blueprint.StoreCamera_Blueprint_C.ChoicePack__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AStoreCamera_Blueprint_C::ChoicePack__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreCamera_Blueprint_C", "ChoicePack__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StoreCamera_Blueprint.StoreCamera_Blueprint_C.OnActivated
// (Event, Public, BlueprintEvent)
// Parameters:

void AStoreCamera_Blueprint_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreCamera_Blueprint_C", "OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StoreCamera_Blueprint.StoreCamera_Blueprint_C.OnDeactivated
// (Event, Public, BlueprintEvent)
// Parameters:

void AStoreCamera_Blueprint_C::OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreCamera_Blueprint_C", "OnDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StoreCamera_Blueprint.StoreCamera_Blueprint_C.OpeningCameraTransition
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStoreCamera_Blueprint_C::OpeningCameraTransition()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreCamera_Blueprint_C", "OpeningCameraTransition");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StoreCamera_Blueprint.StoreCamera_Blueprint_C.ResetCamera
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStoreCamera_Blueprint_C::ResetCamera()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreCamera_Blueprint_C", "ResetCamera");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StoreCamera_Blueprint.StoreCamera_Blueprint_C.DarkenBGVisibility
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enable                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AStoreCamera_Blueprint_C::DarkenBGVisibility(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreCamera_Blueprint_C", "DarkenBGVisibility");

	Params::AStoreCamera_Blueprint_C_DarkenBGVisibility_Params Parms{};

	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCamera_Blueprint.StoreCamera_Blueprint_C.ChoicePackFOV-Out
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStoreCamera_Blueprint_C::ChoicePackFOVMinusOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreCamera_Blueprint_C", "ChoicePackFOV-Out");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StoreCamera_Blueprint.StoreCamera_Blueprint_C.ChoicePackFOV-In
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStoreCamera_Blueprint_C::ChoicePackFOVMinusIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreCamera_Blueprint_C", "ChoicePackFOV-In");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StoreCamera_Blueprint.StoreCamera_Blueprint_C.ExecuteUbergraph_StoreCamera_Blueprint
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_VLerp_ReturnValue                                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_RLerp_ReturnValue                                       (IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetActorLocationAndRotation_SweepHitResult           (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorLocationAndRotation_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Enable                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AStorePinataMaster_BP_C*>CallFunc_GetAllActorsOfClass_OutActors                           (ZeroConstructor, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AStoreCardReveal_BP_C*>CallFunc_GetAllActorsOfClass_OutActors2                          (ZeroConstructor, ReferenceParm)
// class AStoreCardReveal_BP_C*       CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ATVPostProcessBP_C*>  CallFunc_GetAllActorsOfClass_OutActors3                          (ZeroConstructor, ReferenceParm)
// int32                              Temp_int_Array_Index_Variable3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ATVPostProcessBP_C*          CallFunc_Array_Get_Item2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AStorePinataMaster_BP_C*     CallFunc_Array_Get_Item3                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortTimeOfDayManager*       CallFunc_GetTimeOfDayManagerFromContext_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStoreCamera_Blueprint_C::ExecuteUbergraph_StoreCamera_Blueprint(int32 EntryPoint, float CallFunc_Lerp_ReturnValue, int32 Temp_int_Loop_Counter_Variable, float CallFunc_Lerp_ReturnValue2, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FVector& CallFunc_VLerp_ReturnValue, const struct FRotator& CallFunc_RLerp_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocationAndRotation_SweepHitResult, bool CallFunc_K2_SetActorLocationAndRotation_ReturnValue, int32 Temp_int_Array_Index_Variable2, bool K2Node_CustomEvent_Enable, TArray<class AStorePinataMaster_BP_C*>& CallFunc_GetAllActorsOfClass_OutActors, int32 CallFunc_Array_Length_ReturnValue, TArray<class AStoreCardReveal_BP_C*>& CallFunc_GetAllActorsOfClass_OutActors2, class AStoreCardReveal_BP_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue2, int32 Temp_int_Loop_Counter_Variable2, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue2, int32 Temp_int_Loop_Counter_Variable3, bool CallFunc_Less_IntInt_ReturnValue2, int32 CallFunc_Add_IntInt_ReturnValue3, TArray<class ATVPostProcessBP_C*>& CallFunc_GetAllActorsOfClass_OutActors3, int32 Temp_int_Array_Index_Variable3, class ATVPostProcessBP_C* CallFunc_Array_Get_Item2, class AStorePinataMaster_BP_C* CallFunc_Array_Get_Item3, int32 CallFunc_Array_Length_ReturnValue3, bool CallFunc_Less_IntInt_ReturnValue3, class AFortTimeOfDayManager* CallFunc_GetTimeOfDayManagerFromContext_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreCamera_Blueprint_C", "ExecuteUbergraph_StoreCamera_Blueprint");

	Params::AStoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Lerp_ReturnValue2 = CallFunc_Lerp_ReturnValue2;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_VLerp_ReturnValue = CallFunc_VLerp_ReturnValue;
	Parms.CallFunc_RLerp_ReturnValue = CallFunc_RLerp_ReturnValue;
	Parms.CallFunc_K2_SetActorLocationAndRotation_SweepHitResult = CallFunc_K2_SetActorLocationAndRotation_SweepHitResult;
	Parms.CallFunc_K2_SetActorLocationAndRotation_ReturnValue = CallFunc_K2_SetActorLocationAndRotation_ReturnValue;
	Parms.Temp_int_Array_Index_Variable2 = Temp_int_Array_Index_Variable2;
	Parms.K2Node_CustomEvent_Enable = K2Node_CustomEvent_Enable;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetAllActorsOfClass_OutActors2 = CallFunc_GetAllActorsOfClass_OutActors2;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue2 = CallFunc_Array_Length_ReturnValue2;
	Parms.Temp_int_Loop_Counter_Variable2 = Temp_int_Loop_Counter_Variable2;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue2 = CallFunc_Add_IntInt_ReturnValue2;
	Parms.Temp_int_Loop_Counter_Variable3 = Temp_int_Loop_Counter_Variable3;
	Parms.CallFunc_Less_IntInt_ReturnValue2 = CallFunc_Less_IntInt_ReturnValue2;
	Parms.CallFunc_Add_IntInt_ReturnValue3 = CallFunc_Add_IntInt_ReturnValue3;
	Parms.CallFunc_GetAllActorsOfClass_OutActors3 = CallFunc_GetAllActorsOfClass_OutActors3;
	Parms.Temp_int_Array_Index_Variable3 = Temp_int_Array_Index_Variable3;
	Parms.CallFunc_Array_Get_Item2 = CallFunc_Array_Get_Item2;
	Parms.CallFunc_Array_Get_Item3 = CallFunc_Array_Get_Item3;
	Parms.CallFunc_Array_Length_ReturnValue3 = CallFunc_Array_Length_ReturnValue3;
	Parms.CallFunc_Less_IntInt_ReturnValue3 = CallFunc_Less_IntInt_ReturnValue3;
	Parms.CallFunc_GetTimeOfDayManagerFromContext_ReturnValue = CallFunc_GetTimeOfDayManagerFromContext_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


