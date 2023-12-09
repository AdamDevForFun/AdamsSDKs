#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_SupplyDrop.GA_SupplyDrop_C
// (None)

class UClass* UGA_SupplyDrop_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_SupplyDrop_C");

	return Clss;
}


// GA_SupplyDrop_C GA_SupplyDrop.Default__GA_SupplyDrop_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_SupplyDrop_C* UGA_SupplyDrop_C::GetDefaultObj()
{
	static class UGA_SupplyDrop_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_SupplyDrop_C*>(UGA_SupplyDrop_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_SupplyDrop.GA_SupplyDrop_C.SetTierFiveData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Condition                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_SupplyDrop_C::SetTierFiveData(bool Condition, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue2, int32 CallFunc_Add_IntInt_ReturnValue3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_SupplyDrop_C", "SetTierFiveData");

	Params::UGA_SupplyDrop_C_SetTierFiveData_Params Parms{};

	Parms.Condition = Condition;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue2 = CallFunc_Add_IntInt_ReturnValue2;
	Parms.CallFunc_Add_IntInt_ReturnValue3 = CallFunc_Add_IntInt_ReturnValue3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_SupplyDrop.GA_SupplyDrop_C.SetTierFourData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Condition                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_SupplyDrop_C::SetTierFourData(bool Condition, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_SupplyDrop_C", "SetTierFourData");

	Params::UGA_SupplyDrop_C_SetTierFourData_Params Parms{};

	Parms.Condition = Condition;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue2 = CallFunc_Add_IntInt_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_SupplyDrop.GA_SupplyDrop_C.SetTierThreeData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Condition                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_SupplyDrop_C::SetTierThreeData(bool Condition, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_SupplyDrop_C", "SetTierThreeData");

	Params::UGA_SupplyDrop_C_SetTierThreeData_Params Parms{};

	Parms.Condition = Condition;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue2 = CallFunc_Add_IntInt_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_SupplyDrop.GA_SupplyDrop_C.SetTierTwoData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Conditions                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_SupplyDrop_C::SetTierTwoData(bool Conditions, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_SupplyDrop_C", "SetTierTwoData");

	Params::UGA_SupplyDrop_C_SetTierTwoData_Params Parms{};

	Parms.Conditions = Conditions;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue2 = CallFunc_Add_IntInt_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_SupplyDrop.GA_SupplyDrop_C.SetTierOneData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Condition                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_SupplyDrop_C::SetTierOneData(bool Condition, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_SupplyDrop_C", "SetTierOneData");

	Params::UGA_SupplyDrop_C_SetTierOneData_Params Parms{};

	Parms.Condition = Condition;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue2 = CallFunc_Add_IntInt_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_SupplyDrop.GA_SupplyDrop_C.Setup_Ability
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAbilitySystemComponent*     AbilitySystemComponentRef                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameplayTagAssetInterface>CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAllMatchingGameplayTags_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameplayTagAssetInterface>CallFunc_HasAllMatchingGameplayTags_TagContainerInterface2_CastInput(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAllMatchingGameplayTags_ReturnValue2                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameplayTagAssetInterface>CallFunc_HasAllMatchingGameplayTags_TagContainerInterface3_CastInput(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAllMatchingGameplayTags_ReturnValue3                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameplayTagAssetInterface>CallFunc_HasAllMatchingGameplayTags_TagContainerInterface4_CastInput(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAllMatchingGameplayTags_ReturnValue4                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameplayTagAssetInterface>CallFunc_HasAllMatchingGameplayTags_TagContainerInterface5_CastInput(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAllMatchingGameplayTags_ReturnValue5                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSupplyDropUnlocks          K2Node_MakeStruct_SupplyDropUnlocks                              (HasGetValueTypeHash)

void UGA_SupplyDrop_C::Setup_Ability(class UAbilitySystemComponent* AbilitySystemComponentRef, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAllMatchingGameplayTags_TagContainerInterface2_CastInput, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue2, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAllMatchingGameplayTags_TagContainerInterface3_CastInput, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue3, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAllMatchingGameplayTags_TagContainerInterface4_CastInput, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue4, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAllMatchingGameplayTags_TagContainerInterface5_CastInput, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue5, const struct FSupplyDropUnlocks& K2Node_MakeStruct_SupplyDropUnlocks)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_SupplyDrop_C", "Setup_Ability");

	Params::UGA_SupplyDrop_C_Setup_Ability_Params Parms{};

	Parms.AbilitySystemComponentRef = AbilitySystemComponentRef;
	Parms.CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput = CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput;
	Parms.CallFunc_HasAllMatchingGameplayTags_ReturnValue = CallFunc_HasAllMatchingGameplayTags_ReturnValue;
	Parms.CallFunc_HasAllMatchingGameplayTags_TagContainerInterface2_CastInput = CallFunc_HasAllMatchingGameplayTags_TagContainerInterface2_CastInput;
	Parms.CallFunc_HasAllMatchingGameplayTags_ReturnValue2 = CallFunc_HasAllMatchingGameplayTags_ReturnValue2;
	Parms.CallFunc_HasAllMatchingGameplayTags_TagContainerInterface3_CastInput = CallFunc_HasAllMatchingGameplayTags_TagContainerInterface3_CastInput;
	Parms.CallFunc_HasAllMatchingGameplayTags_ReturnValue3 = CallFunc_HasAllMatchingGameplayTags_ReturnValue3;
	Parms.CallFunc_HasAllMatchingGameplayTags_TagContainerInterface4_CastInput = CallFunc_HasAllMatchingGameplayTags_TagContainerInterface4_CastInput;
	Parms.CallFunc_HasAllMatchingGameplayTags_ReturnValue4 = CallFunc_HasAllMatchingGameplayTags_ReturnValue4;
	Parms.CallFunc_HasAllMatchingGameplayTags_TagContainerInterface5_CastInput = CallFunc_HasAllMatchingGameplayTags_TagContainerInterface5_CastInput;
	Parms.CallFunc_HasAllMatchingGameplayTags_ReturnValue5 = CallFunc_HasAllMatchingGameplayTags_ReturnValue5;
	Parms.K2Node_MakeStruct_SupplyDropUnlocks = K2Node_MakeStruct_SupplyDropUnlocks;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_SupplyDrop.GA_SupplyDrop_C.GetAttributeValue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAbilitySystemComponent* K2Node_DynamicCast_AsFort_Ability_System_Component               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FAttributeInfo              CallFunc_FindAttributeInformation_ReturnValue                    (NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetAttributeMagnitude_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FFloor_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_SupplyDrop_C::GetAttributeValue(class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, class UFortAbilitySystemComponent* K2Node_DynamicCast_AsFort_Ability_System_Component, bool K2Node_DynamicCast_bSuccess, const struct FAttributeInfo& CallFunc_FindAttributeInformation_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetAttributeMagnitude_ReturnValue, int32 CallFunc_FFloor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_SupplyDrop_C", "GetAttributeValue");

	Params::UGA_SupplyDrop_C_GetAttributeValue_Params Parms{};

	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue = CallFunc_GetAbilitySystemComponent_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Ability_System_Component = K2Node_DynamicCast_AsFort_Ability_System_Component;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_FindAttributeInformation_ReturnValue = CallFunc_FindAttributeInformation_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetAttributeMagnitude_ReturnValue = CallFunc_GetAttributeMagnitude_ReturnValue;
	Parms.CallFunc_FFloor_ReturnValue = CallFunc_FFloor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_SupplyDrop.GA_SupplyDrop_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_SupplyDrop_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_SupplyDrop_C", "K2_ActivateAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_SupplyDrop.GA_SupplyDrop_C.ExecuteUbergraph_GA_SupplyDrop
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetAvatarActorFromActorInfo_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPawn*                   K2Node_DynamicCast_AsFort_Pawn                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_CommitAbility_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortAbilityDecoTool*        K2Node_DynamicCast_AsFort_Ability_Deco_Tool                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FAbilityToolSpawnParameters CallFunc_GetSpawnParameters_OutSpawnParamters                    (NoDestructor)
// class ABuildingActor*              CallFunc_AbilitySpawnDeco_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AB_SupplyDropPlacement_C*    K2Node_DynamicCast_AsB_Supply_Drop_Placement                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess3                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_SupplyDrop_C::ExecuteUbergraph_GA_SupplyDrop(int32 EntryPoint, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_K2_CommitAbility_ReturnValue, class AFortAbilityDecoTool* K2Node_DynamicCast_AsFort_Ability_Deco_Tool, bool K2Node_DynamicCast_bSuccess2, const struct FAbilityToolSpawnParameters& CallFunc_GetSpawnParameters_OutSpawnParamters, class ABuildingActor* CallFunc_AbilitySpawnDeco_ReturnValue, class AB_SupplyDropPlacement_C* K2Node_DynamicCast_AsB_Supply_Drop_Placement, bool K2Node_DynamicCast_bSuccess3, bool CallFunc_HasAuthority_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_SupplyDrop_C", "ExecuteUbergraph_GA_SupplyDrop");

	Params::UGA_SupplyDrop_C_ExecuteUbergraph_GA_SupplyDrop_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetAvatarActorFromActorInfo_ReturnValue = CallFunc_GetAvatarActorFromActorInfo_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Pawn = K2Node_DynamicCast_AsFort_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_K2_CommitAbility_ReturnValue = CallFunc_K2_CommitAbility_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Ability_Deco_Tool = K2Node_DynamicCast_AsFort_Ability_Deco_Tool;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.CallFunc_GetSpawnParameters_OutSpawnParamters = CallFunc_GetSpawnParameters_OutSpawnParamters;
	Parms.CallFunc_AbilitySpawnDeco_ReturnValue = CallFunc_AbilitySpawnDeco_ReturnValue;
	Parms.K2Node_DynamicCast_AsB_Supply_Drop_Placement = K2Node_DynamicCast_AsB_Supply_Drop_Placement;
	Parms.K2Node_DynamicCast_bSuccess3 = K2Node_DynamicCast_bSuccess3;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue = CallFunc_GetAbilitySystemComponent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


