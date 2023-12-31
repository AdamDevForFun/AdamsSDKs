#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass EventLeaderboardEntryDetails.EventLeaderboardEntryDetails_C
// (None)

class UClass* UEventLeaderboardEntryDetails_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EventLeaderboardEntryDetails_C");

	return Clss;
}


// EventLeaderboardEntryDetails_C EventLeaderboardEntryDetails.Default__EventLeaderboardEntryDetails_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEventLeaderboardEntryDetails_C* UEventLeaderboardEntryDetails_C::GetDefaultObj()
{
	static class UEventLeaderboardEntryDetails_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEventLeaderboardEntryDetails_C*>(UEventLeaderboardEntryDetails_C::StaticClass()->DefaultObject);

	return Default;
}


// Function EventLeaderboardEntryDetails.EventLeaderboardEntryDetails_C.SetTournamentValues
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      InTournamentId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      InEventWindowId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UEventLeaderboardEntryDetails_C::SetTournamentValues(const class FString& InTournamentId, const class FString& InEventWindowId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EventLeaderboardEntryDetails_C", "SetTournamentValues");

	Params::UEventLeaderboardEntryDetails_C_SetTournamentValues_Params Parms{};

	Parms.InTournamentId = InTournamentId;
	Parms.InEventWindowId = InEventWindowId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventLeaderboardEntryDetails.EventLeaderboardEntryDetails_C.ShowDetails
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortEventLeaderboardEntryData*EntryData                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              TotalScoredPoints                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// class FText                        Temp_text_Variable_2                                             (None)
// class FText                        Temp_text_Variable_3                                             (None)
// class FText                        Temp_text_Variable_4                                             (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetLiveSessionId_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetTotalPointsForCategory_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetTotalPointsForCategory_ReturnValue_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetTotalMatchesPlayed_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetTotalPointsForCategory_ReturnValue_2                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_7                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetTotalPointsForCategory_ReturnValue_3                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetTeamDisplayNameText_ReturnValue                      (None)
// int32                              CallFunc_GetNumTeammates_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        K2Node_Select_Default                                            (None)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_8                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetTotalVictoryRoyales_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAveragePlacement_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetTotalEliminations_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_9                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAverageMatchScore_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetTotalMatchesPlayed_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_5                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetTotalPointsForCategory_ReturnValue_4                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_6                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetTotalPointsForCategory_ReturnValue_5                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue                            (None)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_7                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_3                           (HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ZeroConstructor, ReferenceParm)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue_1                          (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_4                           (HasGetValueTypeHash)
// int32                              CallFunc_FFloor_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_2                                         (ZeroConstructor, ReferenceParm)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_8                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue_2                                    (None)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_FFloor_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_9                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_4                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_4                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetScore_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// enum class ESlateVisibility        K2Node_Select_Default_5                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventLeaderboardEntryDetails_C::ShowDetails(class UFortEventLeaderboardEntryData* EntryData, int32 TotalScoredPoints, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_2, enum class ESlateVisibility Temp_byte_Variable_4, enum class ESlateVisibility Temp_byte_Variable_5, int32 Temp_int_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_GetLiveSessionId_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, int32 CallFunc_GetTotalPointsForCategory_ReturnValue, int32 CallFunc_GetTotalPointsForCategory_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_GetTotalMatchesPlayed_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_2, enum class ESlateVisibility Temp_byte_Variable_6, int32 CallFunc_GetTotalPointsForCategory_ReturnValue_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, enum class ESlateVisibility Temp_byte_Variable_7, int32 CallFunc_GetTotalPointsForCategory_ReturnValue_3, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, bool Temp_bool_Variable_3, class FText CallFunc_GetTeamDisplayNameText_ReturnValue, int32 CallFunc_GetNumTeammates_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText K2Node_Select_Default, class FText CallFunc_Format_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_1, enum class ESlateVisibility Temp_byte_Variable_8, int32 CallFunc_GetTotalVictoryRoyales_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_3, float CallFunc_GetAveragePlacement_ReturnValue, int32 CallFunc_GetTotalEliminations_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_9, float CallFunc_Conv_IntToFloat_ReturnValue_4, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_GetAverageMatchScore_ReturnValue, int32 CallFunc_GetTotalMatchesPlayed_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue_5, bool Temp_bool_Variable_4, int32 CallFunc_GetTotalPointsForCategory_ReturnValue_4, enum class ESlateVisibility K2Node_Select_Default_2, float CallFunc_Conv_IntToFloat_ReturnValue_6, float CallFunc_Divide_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 CallFunc_GetTotalPointsForCategory_ReturnValue_5, class FText CallFunc_Conv_FloatToText_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_7, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, float CallFunc_Divide_FloatFloat_ReturnValue_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, float CallFunc_Multiply_FloatFloat_ReturnValue_1, class FText CallFunc_Format_ReturnValue_1, class FText CallFunc_Conv_FloatToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_4, int32 CallFunc_FFloor_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_2, float CallFunc_Conv_IntToFloat_ReturnValue_8, class FText CallFunc_Format_ReturnValue_2, float CallFunc_Divide_FloatFloat_ReturnValue_3, bool CallFunc_Less_FloatFloat_ReturnValue, int32 CallFunc_FFloor_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue_9, enum class ESlateVisibility K2Node_Select_Default_3, float CallFunc_Divide_FloatFloat_ReturnValue_4, bool CallFunc_LessEqual_FloatFloat_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_4, int32 CallFunc_GetScore_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EventLeaderboardEntryDetails_C", "ShowDetails");

	Params::UEventLeaderboardEntryDetails_C_ShowDetails_Params Parms{};

	Parms.EntryData = EntryData;
	Parms.TotalScoredPoints = TotalScoredPoints;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.Temp_byte_Variable_5 = Temp_byte_Variable_5;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.Temp_text_Variable_3 = Temp_text_Variable_3;
	Parms.Temp_text_Variable_4 = Temp_text_Variable_4;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetLiveSessionId_ReturnValue = CallFunc_GetLiveSessionId_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.CallFunc_GetTotalPointsForCategory_ReturnValue = CallFunc_GetTotalPointsForCategory_ReturnValue;
	Parms.CallFunc_GetTotalPointsForCategory_ReturnValue_1 = CallFunc_GetTotalPointsForCategory_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetTotalMatchesPlayed_ReturnValue = CallFunc_GetTotalMatchesPlayed_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_2 = CallFunc_Conv_IntToFloat_ReturnValue_2;
	Parms.Temp_byte_Variable_6 = Temp_byte_Variable_6;
	Parms.CallFunc_GetTotalPointsForCategory_ReturnValue_2 = CallFunc_GetTotalPointsForCategory_ReturnValue_2;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.Temp_byte_Variable_7 = Temp_byte_Variable_7;
	Parms.CallFunc_GetTotalPointsForCategory_ReturnValue_3 = CallFunc_GetTotalPointsForCategory_ReturnValue_3;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.CallFunc_GetTeamDisplayNameText_ReturnValue = CallFunc_GetTeamDisplayNameText_ReturnValue;
	Parms.CallFunc_GetNumTeammates_ReturnValue = CallFunc_GetNumTeammates_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.Temp_byte_Variable_8 = Temp_byte_Variable_8;
	Parms.CallFunc_GetTotalVictoryRoyales_ReturnValue = CallFunc_GetTotalVictoryRoyales_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_3 = CallFunc_Conv_IntToFloat_ReturnValue_3;
	Parms.CallFunc_GetAveragePlacement_ReturnValue = CallFunc_GetAveragePlacement_ReturnValue;
	Parms.CallFunc_GetTotalEliminations_ReturnValue = CallFunc_GetTotalEliminations_ReturnValue;
	Parms.Temp_byte_Variable_9 = Temp_byte_Variable_9;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_4 = CallFunc_Conv_IntToFloat_ReturnValue_4;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_GetAverageMatchScore_ReturnValue = CallFunc_GetAverageMatchScore_ReturnValue;
	Parms.CallFunc_GetTotalMatchesPlayed_ReturnValue_1 = CallFunc_GetTotalMatchesPlayed_ReturnValue_1;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_5 = CallFunc_Conv_IntToFloat_ReturnValue_5;
	Parms.Temp_bool_Variable_4 = Temp_bool_Variable_4;
	Parms.CallFunc_GetTotalPointsForCategory_ReturnValue_4 = CallFunc_GetTotalPointsForCategory_ReturnValue_4;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_6 = CallFunc_Conv_IntToFloat_ReturnValue_6;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_1 = CallFunc_Divide_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_GetTotalPointsForCategory_ReturnValue_5 = CallFunc_GetTotalPointsForCategory_ReturnValue_5;
	Parms.CallFunc_Conv_FloatToText_ReturnValue = CallFunc_Conv_FloatToText_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_7 = CallFunc_Conv_IntToFloat_ReturnValue_7;
	Parms.K2Node_MakeStruct_FormatArgumentData_3 = K2Node_MakeStruct_FormatArgumentData_3;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_2 = CallFunc_Divide_FloatFloat_ReturnValue_2;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.CallFunc_Conv_FloatToText_ReturnValue_1 = CallFunc_Conv_FloatToText_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_4 = K2Node_MakeStruct_FormatArgumentData_4;
	Parms.CallFunc_FFloor_ReturnValue = CallFunc_FFloor_ReturnValue;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_8 = CallFunc_Conv_IntToFloat_ReturnValue_8;
	Parms.CallFunc_Format_ReturnValue_2 = CallFunc_Format_ReturnValue_2;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_3 = CallFunc_Divide_FloatFloat_ReturnValue_3;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_FFloor_ReturnValue_1 = CallFunc_FFloor_ReturnValue_1;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_9 = CallFunc_Conv_IntToFloat_ReturnValue_9;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_4 = CallFunc_Divide_FloatFloat_ReturnValue_4;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.K2Node_Select_Default_4 = K2Node_Select_Default_4;
	Parms.CallFunc_GetScore_ReturnValue = CallFunc_GetScore_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.K2Node_Select_Default_5 = K2Node_Select_Default_5;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventLeaderboardEntryDetails.EventLeaderboardEntryDetails_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UEventLeaderboardEntryDetails_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EventLeaderboardEntryDetails_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EventLeaderboardEntryDetails.EventLeaderboardEntryDetails_C.EventColorize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTournamentDisplayInfo  TournamentDisplayInfo                                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UEventLeaderboardEntryDetails_C::EventColorize(const struct FFortTournamentDisplayInfo& TournamentDisplayInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EventLeaderboardEntryDetails_C", "EventColorize");

	Params::UEventLeaderboardEntryDetails_C_EventColorize_Params Parms{};

	Parms.TournamentDisplayInfo = TournamentDisplayInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventLeaderboardEntryDetails.EventLeaderboardEntryDetails_C.EventIntro
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UEventLeaderboardEntryDetails_C::EventIntro()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EventLeaderboardEntryDetails_C", "EventIntro");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EventLeaderboardEntryDetails.EventLeaderboardEntryDetails_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventLeaderboardEntryDetails_C::BndEvt__IconTextButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EventLeaderboardEntryDetails_C", "BndEvt__IconTextButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");

	Params::UEventLeaderboardEntryDetails_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventLeaderboardEntryDetails.EventLeaderboardEntryDetails_C.LeaderboardEntryDoubleClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UEventLeaderboardEntryDetails_C::LeaderboardEntryDoubleClicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EventLeaderboardEntryDetails_C", "LeaderboardEntryDoubleClicked");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EventLeaderboardEntryDetails.EventLeaderboardEntryDetails_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventLeaderboardEntryDetails_C::BndEvt__IconTextButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EventLeaderboardEntryDetails_C", "BndEvt__IconTextButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");

	Params::UEventLeaderboardEntryDetails_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventLeaderboardEntryDetails.EventLeaderboardEntryDetails_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventLeaderboardEntryDetails_C::BndEvt__IconTextButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EventLeaderboardEntryDetails_C", "BndEvt__IconTextButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature");

	Params::UEventLeaderboardEntryDetails_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventLeaderboardEntryDetails.EventLeaderboardEntryDetails_C.BndEvt__Button_WatchLive_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventLeaderboardEntryDetails_C::BndEvt__Button_WatchLive_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EventLeaderboardEntryDetails_C", "BndEvt__Button_WatchLive_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature");

	Params::UEventLeaderboardEntryDetails_C_BndEvt__Button_WatchLive_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventLeaderboardEntryDetails.EventLeaderboardEntryDetails_C.BndEvt__Button_MatchHistory_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventLeaderboardEntryDetails_C::BndEvt__Button_MatchHistory_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EventLeaderboardEntryDetails_C", "BndEvt__Button_MatchHistory_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature");

	Params::UEventLeaderboardEntryDetails_C_BndEvt__Button_MatchHistory_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventLeaderboardEntryDetails.EventLeaderboardEntryDetails_C.BndEvt__Button_MatchHistory_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventLeaderboardEntryDetails_C::BndEvt__Button_MatchHistory_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EventLeaderboardEntryDetails_C", "BndEvt__Button_MatchHistory_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature");

	Params::UEventLeaderboardEntryDetails_C_BndEvt__Button_MatchHistory_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventLeaderboardEntryDetails.EventLeaderboardEntryDetails_C.ExecuteUbergraph_EventLeaderboardEntryDetails
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortTournamentDisplayInfo  K2Node_CustomEvent_TournamentDisplayInfo                         (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   (None)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUsingGamepad_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFontOutlineSettings        K2Node_MakeStruct_FontOutlineSettings                            (NoDestructor, HasGetValueTypeHash)
// struct FSlateFontInfo              K2Node_MakeStruct_SlateFontInfo                                  (HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEventLeaderboardDetails_Stat_C*K2Node_DynamicCast_AsEvent_Leaderboard_Details_Stat              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOverlaySlot*                CallFunc_SlotAsOverlaySlot_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationTimeRange_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetEndTime_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector4                    CallFunc_GetSafeZonePadding_SafePadding                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetSafeZonePadding_SafePaddingScale                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector4                    CallFunc_GetSafeZonePadding_SpillOverPadding                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationTimeRange_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button_5                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UEventPlayerStatProfileSelector_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaStatsTab_C*           CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_GetTeammateDisplayNames_DisplayNames                    (ZeroConstructor, ReferenceParm)
// class FString                      CallFunc_GetTeamAccountId_ReturnValue                            (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Array_Get_Item                                          (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// int32                              CallFunc_GetNumTeammates_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortRuntimeOptions*         CallFunc_GetRuntimeOptions_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortRuntimeOptions*         CallFunc_GetRuntimeOptions_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button_4                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button_3                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button_2                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEventTeamMatchHistoryModal_C*CallFunc_Create_ReturnValue_2                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventLeaderboardEntryDetails_C::ExecuteUbergraph_EventLeaderboardEntryDetails(int32 EntryPoint, const struct FFortTournamentDisplayInfo& K2Node_CustomEvent_TournamentDisplayInfo, const struct FSlateColor& K2Node_MakeStruct_SlateColor, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, float CallFunc_Add_FloatFloat_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsUsingGamepad_ReturnValue, const struct FFontOutlineSettings& K2Node_MakeStruct_FontOutlineSettings, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo, class UWidget* CallFunc_GetChildAt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, class UEventLeaderboardDetails_Stat_C* K2Node_DynamicCast_AsEvent_Leaderboard_Details_Stat, bool K2Node_DynamicCast_bSuccess, bool CallFunc_LessEqual_IntInt_ReturnValue, float Temp_float_Variable, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationTimeRange_ReturnValue, float CallFunc_GetEndTime_ReturnValue, const struct FVector4& CallFunc_GetSafeZonePadding_SafePadding, const struct FVector2D& CallFunc_GetSafeZonePadding_SafePaddingScale, const struct FVector4& CallFunc_GetSafeZonePadding_SpillOverPadding, class UUMGSequencePlayer* CallFunc_PlayAnimationTimeRange_ReturnValue_1, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_3, float CallFunc_Subtract_FloatFloat_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_4, class UCommonButton* K2Node_ComponentBoundEvent_Button_5, float CallFunc_Subtract_FloatFloat_ReturnValue_3, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, class UEventPlayerStatProfileSelector_C* CallFunc_Create_ReturnValue, class UAthenaStatsTab_C* CallFunc_Create_ReturnValue_1, TArray<class FString>& CallFunc_GetTeammateDisplayNames_DisplayNames, const class FString& CallFunc_GetTeamAccountId_ReturnValue, const class FString& CallFunc_Array_Get_Item, class FText CallFunc_Conv_StringToText_ReturnValue, int32 CallFunc_GetNumTeammates_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue_1, class UCommonButton* K2Node_ComponentBoundEvent_Button_4, class UCommonButton* K2Node_ComponentBoundEvent_Button_3, bool Temp_bool_Variable, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, float K2Node_Select_Default, float Temp_float_Variable_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button_2, class UCommonButton* K2Node_ComponentBoundEvent_Button_1, class UCommonButton* K2Node_ComponentBoundEvent_Button, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue_1, class UEventTeamMatchHistoryModal_C* CallFunc_Create_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1, float Temp_float_Variable_2, bool Temp_bool_Variable_1, float K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EventLeaderboardEntryDetails_C", "ExecuteUbergraph_EventLeaderboardEntryDetails");

	Params::UEventLeaderboardEntryDetails_C_ExecuteUbergraph_EventLeaderboardEntryDetails_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_TournamentDisplayInfo = K2Node_CustomEvent_TournamentDisplayInfo;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.K2Node_MakeStruct_SlateColor_1 = K2Node_MakeStruct_SlateColor_1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsUsingGamepad_ReturnValue = CallFunc_IsUsingGamepad_ReturnValue;
	Parms.K2Node_MakeStruct_FontOutlineSettings = K2Node_MakeStruct_FontOutlineSettings;
	Parms.K2Node_MakeStruct_SlateFontInfo = K2Node_MakeStruct_SlateFontInfo;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.K2Node_DynamicCast_AsEvent_Leaderboard_Details_Stat = K2Node_DynamicCast_AsEvent_Leaderboard_Details_Stat;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.CallFunc_SlotAsOverlaySlot_ReturnValue = CallFunc_SlotAsOverlaySlot_ReturnValue;
	Parms.CallFunc_PlayAnimationTimeRange_ReturnValue = CallFunc_PlayAnimationTimeRange_ReturnValue;
	Parms.CallFunc_GetEndTime_ReturnValue = CallFunc_GetEndTime_ReturnValue;
	Parms.CallFunc_GetSafeZonePadding_SafePadding = CallFunc_GetSafeZonePadding_SafePadding;
	Parms.CallFunc_GetSafeZonePadding_SafePaddingScale = CallFunc_GetSafeZonePadding_SafePaddingScale;
	Parms.CallFunc_GetSafeZonePadding_SpillOverPadding = CallFunc_GetSafeZonePadding_SpillOverPadding;
	Parms.CallFunc_PlayAnimationTimeRange_ReturnValue_1 = CallFunc_PlayAnimationTimeRange_ReturnValue_1;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_1 = CallFunc_Add_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_2 = CallFunc_Multiply_FloatFloat_ReturnValue_2;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_3 = CallFunc_Multiply_FloatFloat_ReturnValue_3;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue_1 = CallFunc_Subtract_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue_2 = CallFunc_Subtract_FloatFloat_ReturnValue_2;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_4 = CallFunc_Multiply_FloatFloat_ReturnValue_4;
	Parms.K2Node_ComponentBoundEvent_Button_5 = K2Node_ComponentBoundEvent_Button_5;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue_3 = CallFunc_Subtract_FloatFloat_ReturnValue_3;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.CallFunc_GetTeammateDisplayNames_DisplayNames = CallFunc_GetTeammateDisplayNames_DisplayNames;
	Parms.CallFunc_GetTeamAccountId_ReturnValue = CallFunc_GetTeamAccountId_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_GetNumTeammates_ReturnValue = CallFunc_GetNumTeammates_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetRuntimeOptions_ReturnValue = CallFunc_GetRuntimeOptions_ReturnValue;
	Parms.CallFunc_GetRuntimeOptions_ReturnValue_1 = CallFunc_GetRuntimeOptions_ReturnValue_1;
	Parms.K2Node_ComponentBoundEvent_Button_4 = K2Node_ComponentBoundEvent_Button_4;
	Parms.K2Node_ComponentBoundEvent_Button_3 = K2Node_ComponentBoundEvent_Button_3;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button_2 = K2Node_ComponentBoundEvent_Button_2;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_GetOwningPlayer_ReturnValue_1 = CallFunc_GetOwningPlayer_ReturnValue_1;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue_1 = CallFunc_PlayAnimationReverse_ReturnValue_1;
	Parms.CallFunc_Create_ReturnValue_2 = CallFunc_Create_ReturnValue_2;
	Parms.CallFunc_PlayAnimationForward_ReturnValue_1 = CallFunc_PlayAnimationForward_ReturnValue_1;
	Parms.Temp_float_Variable_2 = Temp_float_Variable_2;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventLeaderboardEntryDetails.EventLeaderboardEntryDetails_C.ProfileSelectedFromSelector__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEventLeaderboardEntryDetails_C::ProfileSelectedFromSelector__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EventLeaderboardEntryDetails_C", "ProfileSelectedFromSelector__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


