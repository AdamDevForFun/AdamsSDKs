#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BP_FortExpeditionExpiresWidget.BP_FortExpeditionExpiresWidget_C
// (None)

class UClass* UBP_FortExpeditionExpiresWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_FortExpeditionExpiresWidget_C");

	return Clss;
}


// BP_FortExpeditionExpiresWidget_C BP_FortExpeditionExpiresWidget.Default__BP_FortExpeditionExpiresWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_FortExpeditionExpiresWidget_C* UBP_FortExpeditionExpiresWidget_C::GetDefaultObj()
{
	static class UBP_FortExpeditionExpiresWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_FortExpeditionExpiresWidget_C*>(UBP_FortExpeditionExpiresWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_FortExpeditionExpiresWidget.BP_FortExpeditionExpiresWidget_C.Get Utc Now Offset
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FTimespan                   ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       K2Node_DynamicCast_AsFort_Player_Controller                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimespan                   CallFunc_GetPlayerControllerUtcNowMcpOffset_ReturnValue          (NoDestructor, HasGetValueTypeHash)

struct FTimespan UBP_FortExpeditionExpiresWidget_C::Get_Utc_Now_Offset(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, const struct FTimespan& CallFunc_GetPlayerControllerUtcNowMcpOffset_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FortExpeditionExpiresWidget_C", "Get Utc Now Offset");

	Params::UBP_FortExpeditionExpiresWidget_C_Get_Utc_Now_Offset_Params Parms{};

	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller = K2Node_DynamicCast_AsFort_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetPlayerControllerUtcNowMcpOffset_ReturnValue = CallFunc_GetPlayerControllerUtcNowMcpOffset_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_FortExpeditionExpiresWidget.BP_FortExpeditionExpiresWidget_C.Refresh Expiration Timer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortExpeditionItem*         Item                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimespan                   CallFunc_Get_Utc_Now_Offset_ReturnValue                          (NoDestructor, HasGetValueTypeHash)
// struct FTimespan                   CallFunc_GetRemainingExpeditionExpirationDuration_ReturnValue    (NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetTimespanAsText_ReturnValue                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UBP_FortExpeditionExpiresWidget_C::Refresh_Expiration_Timer(class UFortExpeditionItem* Item, const struct FTimespan& CallFunc_Get_Utc_Now_Offset_ReturnValue, const struct FTimespan& CallFunc_GetRemainingExpeditionExpirationDuration_ReturnValue, class FText CallFunc_GetTimespanAsText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FortExpeditionExpiresWidget_C", "Refresh Expiration Timer");

	Params::UBP_FortExpeditionExpiresWidget_C_Refresh_Expiration_Timer_Params Parms{};

	Parms.Item = Item;
	Parms.CallFunc_Get_Utc_Now_Offset_ReturnValue = CallFunc_Get_Utc_Now_Offset_ReturnValue;
	Parms.CallFunc_GetRemainingExpeditionExpirationDuration_ReturnValue = CallFunc_GetRemainingExpeditionExpirationDuration_ReturnValue;
	Parms.CallFunc_GetTimespanAsText_ReturnValue = CallFunc_GetTimespanAsText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionExpiresWidget.BP_FortExpeditionExpiresWidget_C.SetData
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortExpeditionItem*         InItem                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FortExpeditionExpiresWidget_C::SetData(class UFortExpeditionItem* InItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FortExpeditionExpiresWidget_C", "SetData");

	Params::UBP_FortExpeditionExpiresWidget_C_SetData_Params Parms{};

	Parms.InItem = InItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionExpiresWidget.BP_FortExpeditionExpiresWidget_C.OnExpeditionExpirationUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBP_FortExpeditionExpiresWidget_C::OnExpeditionExpirationUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FortExpeditionExpiresWidget_C", "OnExpeditionExpirationUpdated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_FortExpeditionExpiresWidget.BP_FortExpeditionExpiresWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_FortExpeditionExpiresWidget_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FortExpeditionExpiresWidget_C", "PreConstruct");

	Params::UBP_FortExpeditionExpiresWidget_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionExpiresWidget.BP_FortExpeditionExpiresWidget_C.ExecuteUbergraph_BP_FortExpeditionExpiresWidget
// (None)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortExpeditionItem*         K2Node_Event_InItem                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_FortExpeditionExpiresWidget_C::ExecuteUbergraph_BP_FortExpeditionExpiresWidget(int32 EntryPoint, class UFortExpeditionItem* K2Node_Event_InItem, bool CallFunc_IsValid_ReturnValue, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FortExpeditionExpiresWidget_C", "ExecuteUbergraph_BP_FortExpeditionExpiresWidget");

	Params::UBP_FortExpeditionExpiresWidget_C_ExecuteUbergraph_BP_FortExpeditionExpiresWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_InItem = K2Node_Event_InItem;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


