#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TT_Commando_Survivalist.TT_Commando_Survivalist_C
// (None)

class UClass* UTT_Commando_Survivalist_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TT_Commando_Survivalist_C");

	return Clss;
}


// TT_Commando_Survivalist_C TT_Commando_Survivalist.Default__TT_Commando_Survivalist_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTT_Commando_Survivalist_C* UTT_Commando_Survivalist_C::GetDefaultObj()
{
	static class UTT_Commando_Survivalist_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTT_Commando_Survivalist_C*>(UTT_Commando_Survivalist_C::StaticClass()->DefaultObject);

	return Default;
}


// Function TT_Commando_Survivalist.TT_Commando_Survivalist_C.ConvertSurvivalistHealthIntoModifiedHealth
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              InStaticHealth                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameplayAbility*            InAbility                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTT_Commando_Survivalist_C::ConvertSurvivalistHealthIntoModifiedHealth(float InStaticHealth, class UGameplayAbility* InAbility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TT_Commando_Survivalist_C", "ConvertSurvivalistHealthIntoModifiedHealth");

	Params::UTT_Commando_Survivalist_C_ConvertSurvivalistHealthIntoModifiedHealth_Params Parms{};

	Parms.InStaticHealth = InStaticHealth;
	Parms.InAbility = InAbility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TT_Commando_Survivalist.TT_Commando_Survivalist_C.GetTextForTokenFromAbilityInstanceInternal
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UGameplayAbility*            AbilityInstance                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Tag                                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// class UFortTooltipContext*         Context                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Token                                                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// class FText                        OutText                                                          (Parm, OutParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// float                              ConvertedHealth                                                  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGA_Commando_Survivalist_C*  K2Node_DynamicCast_AsGA_Commando_Survivalist                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortBaseWeaponStats        CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue                            (None)

bool UTT_Commando_Survivalist_C::GetTextForTokenFromAbilityInstanceInternal(class UGameplayAbility* AbilityInstance, struct FGameplayTag& Tag, class UFortTooltipContext* Context, struct FGameplayTag& Token, class FText* OutText, float ConvertedHealth, bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess, class UGA_Commando_Survivalist_C* K2Node_DynamicCast_AsGA_Commando_Survivalist, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FFortBaseWeaponStats& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class FText CallFunc_Conv_FloatToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TT_Commando_Survivalist_C", "GetTextForTokenFromAbilityInstanceInternal");

	Params::UTT_Commando_Survivalist_C_GetTextForTokenFromAbilityInstanceInternal_Params Parms{};

	Parms.AbilityInstance = AbilityInstance;
	Parms.Tag = Tag;
	Parms.Context = Context;
	Parms.Token = Token;
	Parms.ConvertedHealth = ConvertedHealth;
	Parms.GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess = GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess;
	Parms.K2Node_DynamicCast_AsGA_Commando_Survivalist = K2Node_DynamicCast_AsGA_Commando_Survivalist;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Conv_FloatToText_ReturnValue = CallFunc_Conv_FloatToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OutText != nullptr)
		*OutText = Parms.OutText;

	return Parms.ReturnValue;

}


// Function TT_Commando_Survivalist.TT_Commando_Survivalist_C.InitializeAbilityInstanceInternal
// (Event, Protected, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UGameplayAbility*            AbilityInstance                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortTooltipContext*         Context                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGA_Commando_Survivalist_C*  K2Node_DynamicCast_AsGA_Commando_Survivalist                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UTT_Commando_Survivalist_C::InitializeAbilityInstanceInternal(class UGameplayAbility* AbilityInstance, class UFortTooltipContext* Context, class UGA_Commando_Survivalist_C* K2Node_DynamicCast_AsGA_Commando_Survivalist, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TT_Commando_Survivalist_C", "InitializeAbilityInstanceInternal");

	Params::UTT_Commando_Survivalist_C_InitializeAbilityInstanceInternal_Params Parms{};

	Parms.AbilityInstance = AbilityInstance;
	Parms.Context = Context;
	Parms.K2Node_DynamicCast_AsGA_Commando_Survivalist = K2Node_DynamicCast_AsGA_Commando_Survivalist;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


