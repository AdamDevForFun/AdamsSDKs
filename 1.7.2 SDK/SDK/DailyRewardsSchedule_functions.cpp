#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass DailyRewardsSchedule.DailyRewardsSchedule_C
// (None)

class UClass* UDailyRewardsSchedule_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DailyRewardsSchedule_C");

	return Clss;
}


// DailyRewardsSchedule_C DailyRewardsSchedule.Default__DailyRewardsSchedule_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDailyRewardsSchedule_C* UDailyRewardsSchedule_C::GetDefaultObj()
{
	static class UDailyRewardsSchedule_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDailyRewardsSchedule_C*>(UDailyRewardsSchedule_C::StaticClass()->DefaultObject);

	return Default;
}


// Function DailyRewardsSchedule.DailyRewardsSchedule_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UDailyRewardsSchedule_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DailyRewardsSchedule_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DailyRewardsSchedule.DailyRewardsSchedule_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UDailyRewardsSchedule_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DailyRewardsSchedule_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DailyRewardsSchedule.DailyRewardsSchedule_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UDailyRewardsSchedule_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DailyRewardsSchedule_C", "PreConstruct");

	Params::UDailyRewardsSchedule_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DailyRewardsSchedule.DailyRewardsSchedule_C.ExecuteUbergraph_DailyRewardsSchedule
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData2                            (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class UDailyRewardsEpic_C*         CallFunc_Create_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHorizontalBoxSlot*          CallFunc_AddChildToHorizontalBox_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDailyRewardsItem_C*         CallFunc_Create_ReturnValue2                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDailyRewardsItem_C*         CallFunc_Create_ReturnValue3                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHorizontalBoxSlot*          CallFunc_AddChildToHorizontalBox_ReturnValue2                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UHorizontalBoxSlot*          CallFunc_AddChildToHorizontalBox_ReturnValue3                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateChildSize             K2Node_MakeStruct_SlateChildSize                                 (NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortDailyRewardsItemData   CallFunc_Array_Get_Item                                          (NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortDailyRewardsItemData   CallFunc_Array_Get_Item2                                         (NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UDailyRewardsSchedule_C::ExecuteUbergraph_DailyRewardsSchedule(int32 EntryPoint, int32 CallFunc_Array_Length_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool CallFunc_Greater_IntInt_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class FText CallFunc_Format_ReturnValue, class UDailyRewardsEpic_C* CallFunc_Create_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue2, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue3, class UDailyRewardsItem_C* CallFunc_Create_ReturnValue2, class UDailyRewardsItem_C* CallFunc_Create_ReturnValue3, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue2, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue3, int32 CallFunc_Add_IntInt_ReturnValue, const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize, int32 CallFunc_Array_Length_ReturnValue2, int32 CallFunc_Add_IntInt_ReturnValue2, const struct FMargin& K2Node_MakeStruct_Margin, bool K2Node_Event_IsDesignTime, int32 Temp_int_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue2, const struct FFortDailyRewardsItemData& CallFunc_Array_Get_Item, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue3, const struct FFortDailyRewardsItemData& CallFunc_Array_Get_Item2, bool CallFunc_BooleanOR_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue3, int32 CallFunc_Subtract_IntInt_ReturnValue2, bool CallFunc_LessEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DailyRewardsSchedule_C", "ExecuteUbergraph_DailyRewardsSchedule");

	Params::UDailyRewardsSchedule_C_ExecuteUbergraph_DailyRewardsSchedule_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData2 = K2Node_MakeStruct_FormatArgumentData2;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChildToHorizontalBox_ReturnValue = CallFunc_AddChildToHorizontalBox_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue2 = CallFunc_GetOwningPlayer_ReturnValue2;
	Parms.CallFunc_GetOwningPlayer_ReturnValue3 = CallFunc_GetOwningPlayer_ReturnValue3;
	Parms.CallFunc_Create_ReturnValue2 = CallFunc_Create_ReturnValue2;
	Parms.CallFunc_Create_ReturnValue3 = CallFunc_Create_ReturnValue3;
	Parms.CallFunc_AddChildToHorizontalBox_ReturnValue2 = CallFunc_AddChildToHorizontalBox_ReturnValue2;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_AddChildToHorizontalBox_ReturnValue3 = CallFunc_AddChildToHorizontalBox_ReturnValue3;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_SlateChildSize = K2Node_MakeStruct_SlateChildSize;
	Parms.CallFunc_Array_Length_ReturnValue2 = CallFunc_Array_Length_ReturnValue2;
	Parms.CallFunc_Add_IntInt_ReturnValue2 = CallFunc_Add_IntInt_ReturnValue2;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue2 = CallFunc_Less_IntInt_ReturnValue2;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue3 = CallFunc_Less_IntInt_ReturnValue3;
	Parms.CallFunc_Array_Get_Item2 = CallFunc_Array_Get_Item2;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue3 = CallFunc_Add_IntInt_ReturnValue3;
	Parms.CallFunc_Subtract_IntInt_ReturnValue2 = CallFunc_Subtract_IntInt_ReturnValue2;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


