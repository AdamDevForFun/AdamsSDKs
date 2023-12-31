#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass MissionObjectiveProgress.MissionObjectiveProgress_C
// (None)

class UClass* UMissionObjectiveProgress_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionObjectiveProgress_C");

	return Clss;
}


// MissionObjectiveProgress_C MissionObjectiveProgress.Default__MissionObjectiveProgress_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionObjectiveProgress_C* UMissionObjectiveProgress_C::GetDefaultObj()
{
	static class UMissionObjectiveProgress_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionObjectiveProgress_C*>(UMissionObjectiveProgress_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MissionObjectiveProgress.MissionObjectiveProgress_C.GetHeightEstimate
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Height                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              HeightEstimate                                                   (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetText_ReturnValue                                     (None)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMissionObjectiveProgress_C::GetHeightEstimate(float* Height, float HeightEstimate, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue2, class FText CallFunc_GetText_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionObjectiveProgress_C", "GetHeightEstimate");

	Params::UMissionObjectiveProgress_C_GetHeightEstimate_Params Parms{};

	Parms.HeightEstimate = HeightEstimate;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue2 = CallFunc_Add_FloatFloat_ReturnValue2;
	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Height != nullptr)
		*Height = Parms.Height;

}


// Function MissionObjectiveProgress.MissionObjectiveProgress_C.Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortObjectiveBase*          Objective                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              BarIndex                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_BlueprintGetProgressBarColor_ReturnValue                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BlueprintGetProgressBarPercentage_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_BlueprintGetProgressBarText_ReturnValue                 (None)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMissionObjectiveProgress_C::Update(class AFortObjectiveBase* Objective, int32 BarIndex, const struct FLinearColor& CallFunc_BlueprintGetProgressBarColor_ReturnValue, float CallFunc_BlueprintGetProgressBarPercentage_ReturnValue, class FText CallFunc_BlueprintGetProgressBarText_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, bool CallFunc_TextIsEmpty_ReturnValue, enum class ESlateVisibility Temp_byte_Variable2, bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionObjectiveProgress_C", "Update");

	Params::UMissionObjectiveProgress_C_Update_Params Parms{};

	Parms.Objective = Objective;
	Parms.BarIndex = BarIndex;
	Parms.CallFunc_BlueprintGetProgressBarColor_ReturnValue = CallFunc_BlueprintGetProgressBarColor_ReturnValue;
	Parms.CallFunc_BlueprintGetProgressBarPercentage_ReturnValue = CallFunc_BlueprintGetProgressBarPercentage_ReturnValue;
	Parms.CallFunc_BlueprintGetProgressBarText_ReturnValue = CallFunc_BlueprintGetProgressBarText_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionObjectiveProgress.MissionObjectiveProgress_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UMissionObjectiveProgress_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionObjectiveProgress_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MissionObjectiveProgress.MissionObjectiveProgress_C.ExecuteUbergraph_MissionObjectiveProgress
// (None)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMissionObjectiveProgress_C::ExecuteUbergraph_MissionObjectiveProgress(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionObjectiveProgress_C", "ExecuteUbergraph_MissionObjectiveProgress");

	Params::UMissionObjectiveProgress_C_ExecuteUbergraph_MissionObjectiveProgress_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


