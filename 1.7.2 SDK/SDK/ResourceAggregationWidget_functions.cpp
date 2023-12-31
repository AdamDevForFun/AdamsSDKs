#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ResourceAggregationWidget.ResourceAggregationWidget_C
// (None)

class UClass* UResourceAggregationWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ResourceAggregationWidget_C");

	return Clss;
}


// ResourceAggregationWidget_C ResourceAggregationWidget.Default__ResourceAggregationWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UResourceAggregationWidget_C* UResourceAggregationWidget_C::GetDefaultObj()
{
	static class UResourceAggregationWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UResourceAggregationWidget_C*>(UResourceAggregationWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ResourceAggregationWidget.ResourceAggregationWidget_C.ForceHideWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UResourceAggregationWidget_C::ForceHideWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ResourceAggregationWidget_C", "ForceHideWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ResourceAggregationWidget.ResourceAggregationWidget_C.HideWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UResourceAggregationWidget_C::HideWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ResourceAggregationWidget_C", "HideWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ResourceAggregationWidget.ResourceAggregationWidget_C.TriggerAggregateAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UResourceAggregationWidget_C::TriggerAggregateAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ResourceAggregationWidget_C", "TriggerAggregateAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ResourceAggregationWidget.ResourceAggregationWidget_C.UpdateAggregateResourceCollected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   InPotentialResource                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumInStack_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResourceAggregationWidget_C::UpdateAggregateResourceCollected(class UFortItem* InPotentialResource, int32 CallFunc_GetNumInStack_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ResourceAggregationWidget_C", "UpdateAggregateResourceCollected");

	Params::UResourceAggregationWidget_C_UpdateAggregateResourceCollected_Params Parms{};

	Parms.InPotentialResource = InPotentialResource;
	Parms.CallFunc_GetNumInStack_ReturnValue = CallFunc_GetNumInStack_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ResourceAggregationWidget.ResourceAggregationWidget_C.ResetSourceOfResource
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABuildingSMActor*            InResourceObject                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   InPotentialResource                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumInStack_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 CallFunc_GetItemSmallPreviewImageBrush_ReturnValue               (None)

void UResourceAggregationWidget_C::ResetSourceOfResource(class ABuildingSMActor* InResourceObject, class UFortItem* InPotentialResource, int32 CallFunc_GetNumInStack_ReturnValue, const struct FSlateBrush& CallFunc_GetItemSmallPreviewImageBrush_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ResourceAggregationWidget_C", "ResetSourceOfResource");

	Params::UResourceAggregationWidget_C_ResetSourceOfResource_Params Parms{};

	Parms.InResourceObject = InResourceObject;
	Parms.InPotentialResource = InPotentialResource;
	Parms.CallFunc_GetNumInStack_ReturnValue = CallFunc_GetNumInStack_ReturnValue;
	Parms.CallFunc_GetItemSmallPreviewImageBrush_ReturnValue = CallFunc_GetItemSmallPreviewImageBrush_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ResourceAggregationWidget.ResourceAggregationWidget_C.HandleDamagedResourceObject
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABuildingSMActor*            DamagedResourceObject                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   PotentialResource                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Destroyed                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               WeakpointDamage                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               LocalDestroyed                                                   (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               LocalWeakpointDamage                                             (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortItem*                   LocalPotentialResource                                           (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABuildingSMActor*            LocalDamagedResourceObject                                       (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UResourceAggregationWidget_C::HandleDamagedResourceObject(class ABuildingSMActor* DamagedResourceObject, class UFortItem* PotentialResource, bool Destroyed, bool WeakpointDamage, bool LocalDestroyed, bool LocalWeakpointDamage, class UFortItem* LocalPotentialResource, class ABuildingSMActor* LocalDamagedResourceObject, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ResourceAggregationWidget_C", "HandleDamagedResourceObject");

	Params::UResourceAggregationWidget_C_HandleDamagedResourceObject_Params Parms{};

	Parms.DamagedResourceObject = DamagedResourceObject;
	Parms.PotentialResource = PotentialResource;
	Parms.Destroyed = Destroyed;
	Parms.WeakpointDamage = WeakpointDamage;
	Parms.LocalDestroyed = LocalDestroyed;
	Parms.LocalWeakpointDamage = LocalWeakpointDamage;
	Parms.LocalPotentialResource = LocalPotentialResource;
	Parms.LocalDamagedResourceObject = LocalDamagedResourceObject;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ResourceAggregationWidget.ResourceAggregationWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UResourceAggregationWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ResourceAggregationWidget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ResourceAggregationWidget.ResourceAggregationWidget_C.ExecuteUbergraph_ResourceAggregationWidget
// (None)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)

void UResourceAggregationWidget_C::ExecuteUbergraph_ResourceAggregationWidget(int32 EntryPoint, class UFortHUDContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ResourceAggregationWidget_C", "ExecuteUbergraph_ResourceAggregationWidget");

	Params::UResourceAggregationWidget_C_ExecuteUbergraph_ResourceAggregationWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;

	UObject::ProcessEvent(Func, &Parms);

}

}


