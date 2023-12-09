#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass PowerRatingBlockItemDetails.PowerRatingBlockItemDetails_C
// (None)

class UClass* UPowerRatingBlockItemDetails_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PowerRatingBlockItemDetails_C");

	return Clss;
}


// PowerRatingBlockItemDetails_C PowerRatingBlockItemDetails.Default__PowerRatingBlockItemDetails_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPowerRatingBlockItemDetails_C* UPowerRatingBlockItemDetails_C::GetDefaultObj()
{
	static class UPowerRatingBlockItemDetails_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPowerRatingBlockItemDetails_C*>(UPowerRatingBlockItemDetails_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PowerRatingBlockItemDetails.PowerRatingBlockItemDetails_C.ClearComparison
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPowerRatingBlockItemDetails_C::ClearComparison()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PowerRatingBlockItemDetails_C", "ClearComparison");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PowerRatingBlockItemDetails.PowerRatingBlockItemDetails_C.UpdateComparison
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortBuffState          Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortBuffState          Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortBuffState          Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortBuffState          Temp_byte_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetTargetValue_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortBuffState          K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortBuffState          K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortBuffState          K2Node_Select3_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPowerRatingBlockItemDetails_C::UpdateComparison(enum class EFortBuffState Temp_byte_Variable, enum class EFortBuffState Temp_byte_Variable2, bool Temp_bool_Variable, enum class EFortBuffState Temp_byte_Variable3, bool Temp_bool_Variable2, enum class EFortBuffState Temp_byte_Variable4, bool Temp_bool_Variable3, float CallFunc_GetTargetValue_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, enum class EFortBuffState K2Node_Select_Default, enum class EFortBuffState K2Node_Select2_Default, enum class EFortBuffState K2Node_Select3_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PowerRatingBlockItemDetails_C", "UpdateComparison");

	Params::UPowerRatingBlockItemDetails_C_UpdateComparison_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.Temp_byte_Variable4 = Temp_byte_Variable4;
	Parms.Temp_bool_Variable3 = Temp_bool_Variable3;
	Parms.CallFunc_GetTargetValue_ReturnValue = CallFunc_GetTargetValue_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.K2Node_Select3_Default = K2Node_Select3_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PowerRatingBlockItemDetails.PowerRatingBlockItemDetails_C.SetPowerRatingValueForComparison
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPowerRatingBlockItemDetails_C::SetPowerRatingValueForComparison(int32 Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PowerRatingBlockItemDetails_C", "SetPowerRatingValueForComparison");

	Params::UPowerRatingBlockItemDetails_C_SetPowerRatingValueForComparison_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PowerRatingBlockItemDetails.PowerRatingBlockItemDetails_C.SetPowerRatingFromItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   Item                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              InterpolationDuration                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetRating_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPowerRatingBlockItemDetails_C::SetPowerRatingFromItem(class UFortItem* Item, float InterpolationDuration, int32 CallFunc_GetRating_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PowerRatingBlockItemDetails_C", "SetPowerRatingFromItem");

	Params::UPowerRatingBlockItemDetails_C_SetPowerRatingFromItem_Params Parms{};

	Parms.Item = Item;
	Parms.InterpolationDuration = InterpolationDuration;
	Parms.CallFunc_GetRating_ReturnValue = CallFunc_GetRating_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PowerRatingBlockItemDetails.PowerRatingBlockItemDetails_C.SetPowerRatingValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              PowerRating                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              InterpolationDuration                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPowerRatingBlockItemDetails_C::SetPowerRatingValue(int32 PowerRating, float InterpolationDuration, bool CallFunc_NotEqual_FloatFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PowerRatingBlockItemDetails_C", "SetPowerRatingValue");

	Params::UPowerRatingBlockItemDetails_C_SetPowerRatingValue_Params Parms{};

	Parms.PowerRating = PowerRating;
	Parms.InterpolationDuration = InterpolationDuration;
	Parms.CallFunc_NotEqual_FloatFloat_ReturnValue = CallFunc_NotEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


