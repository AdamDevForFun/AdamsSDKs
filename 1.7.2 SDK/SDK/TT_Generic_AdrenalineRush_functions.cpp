#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TT_Generic_AdrenalineRush.TT_Generic_AdrenalineRush_C
// (None)

class UClass* UTT_Generic_AdrenalineRush_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TT_Generic_AdrenalineRush_C");

	return Clss;
}


// TT_Generic_AdrenalineRush_C TT_Generic_AdrenalineRush.Default__TT_Generic_AdrenalineRush_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTT_Generic_AdrenalineRush_C* UTT_Generic_AdrenalineRush_C::GetDefaultObj()
{
	static class UTT_Generic_AdrenalineRush_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTT_Generic_AdrenalineRush_C*>(UTT_Generic_AdrenalineRush_C::StaticClass()->DefaultObject);

	return Default;
}


// Function TT_Generic_AdrenalineRush.TT_Generic_AdrenalineRush_C.GetApplicationTag
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UGameplayAbility*            AbilityInstance                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                OutTag                                                           (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class UGA_Generic_AdrenalineRush_C*K2Node_DynamicCast_AsGA_Generic_Adrenaline_Rush                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UTT_Generic_AdrenalineRush_C::GetApplicationTag(class UGameplayAbility* AbilityInstance, struct FGameplayTag* OutTag, class UGA_Generic_AdrenalineRush_C* K2Node_DynamicCast_AsGA_Generic_Adrenaline_Rush, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TT_Generic_AdrenalineRush_C", "GetApplicationTag");

	Params::UTT_Generic_AdrenalineRush_C_GetApplicationTag_Params Parms{};

	Parms.AbilityInstance = AbilityInstance;
	Parms.K2Node_DynamicCast_AsGA_Generic_Adrenaline_Rush = K2Node_DynamicCast_AsGA_Generic_Adrenaline_Rush;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (OutTag != nullptr)
		*OutTag = std::move(Parms.OutTag);

	return Parms.ReturnValue;

}


// Function TT_Generic_AdrenalineRush.TT_Generic_AdrenalineRush_C.GetTextForTokenFromAbilityInstanceInternal
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UGameplayAbility*            AbilityInstance                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Tag                                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// class UFortTooltipContext*         Context                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Token                                                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// class FText                        OutText                                                          (Parm, OutParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class UGA_Generic_AdrenalineRush_C*AdrenalineRush                                                   (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGA_Generic_AdrenalineRush_C*K2Node_DynamicCast_AsGA_Generic_Adrenaline_Rush                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               (None)
// int32                              CallFunc_Round_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue                            (None)
// class FText                        Temp_text_Variable2                                              (None)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Round_ReturnValue2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default                                            (None)
// class FText                        CallFunc_Conv_IntToText_ReturnValue2                             (None)
// class FText                        Temp_text_Variable3                                              (None)
// class FText                        Temp_text_Variable4                                              (None)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select2_Default                                           (None)

bool UTT_Generic_AdrenalineRush_C::GetTextForTokenFromAbilityInstanceInternal(class UGameplayAbility* AbilityInstance, struct FGameplayTag& Tag, class UFortTooltipContext* Context, struct FGameplayTag& Token, class FText* OutText, class UGA_Generic_AdrenalineRush_C* AdrenalineRush, bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess, class UGA_Generic_AdrenalineRush_C* K2Node_DynamicCast_AsGA_Generic_Adrenaline_Rush, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class FText Temp_text_Variable, int32 CallFunc_Round_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_Conv_FloatToText_ReturnValue, class FText Temp_text_Variable2, bool Temp_bool_Variable, int32 CallFunc_Round_ReturnValue2, class FText K2Node_Select_Default, class FText CallFunc_Conv_IntToText_ReturnValue2, class FText Temp_text_Variable3, class FText Temp_text_Variable4, bool Temp_bool_Variable2, class FText K2Node_Select2_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TT_Generic_AdrenalineRush_C", "GetTextForTokenFromAbilityInstanceInternal");

	Params::UTT_Generic_AdrenalineRush_C_GetTextForTokenFromAbilityInstanceInternal_Params Parms{};

	Parms.AbilityInstance = AbilityInstance;
	Parms.Tag = Tag;
	Parms.Context = Context;
	Parms.Token = Token;
	Parms.AdrenalineRush = AdrenalineRush;
	Parms.GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess = GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess;
	Parms.K2Node_DynamicCast_AsGA_Generic_Adrenaline_Rush = K2Node_DynamicCast_AsGA_Generic_Adrenaline_Rush;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.CallFunc_Round_ReturnValue = CallFunc_Round_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_Conv_FloatToText_ReturnValue = CallFunc_Conv_FloatToText_ReturnValue;
	Parms.Temp_text_Variable2 = Temp_text_Variable2;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Round_ReturnValue2 = CallFunc_Round_ReturnValue2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Conv_IntToText_ReturnValue2 = CallFunc_Conv_IntToText_ReturnValue2;
	Parms.Temp_text_Variable3 = Temp_text_Variable3;
	Parms.Temp_text_Variable4 = Temp_text_Variable4;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (OutText != nullptr)
		*OutText = Parms.OutText;

	return Parms.ReturnValue;

}


// Function TT_Generic_AdrenalineRush.TT_Generic_AdrenalineRush_C.InitializeAbilityInstanceInternal
// (Event, Protected, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UGameplayAbility*            AbilityInstance                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortTooltipContext*         Context                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGA_Generic_AdrenalineRush_C*K2Node_DynamicCast_AsGA_Generic_Adrenaline_Rush                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UTT_Generic_AdrenalineRush_C::InitializeAbilityInstanceInternal(class UGameplayAbility* AbilityInstance, class UFortTooltipContext* Context, class UGA_Generic_AdrenalineRush_C* K2Node_DynamicCast_AsGA_Generic_Adrenaline_Rush, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TT_Generic_AdrenalineRush_C", "InitializeAbilityInstanceInternal");

	Params::UTT_Generic_AdrenalineRush_C_InitializeAbilityInstanceInternal_Params Parms{};

	Parms.AbilityInstance = AbilityInstance;
	Parms.Context = Context;
	Parms.K2Node_DynamicCast_AsGA_Generic_Adrenaline_Rush = K2Node_DynamicCast_AsGA_Generic_Adrenaline_Rush;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


