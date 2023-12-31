#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass MiniItemCraftingIngredientsDetailWidget.MiniItemCraftingIngredientsDetailWidget_C
// (None)

class UClass* UMiniItemCraftingIngredientsDetailWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MiniItemCraftingIngredientsDetailWidget_C");

	return Clss;
}


// MiniItemCraftingIngredientsDetailWidget_C MiniItemCraftingIngredientsDetailWidget.Default__MiniItemCraftingIngredientsDetailWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMiniItemCraftingIngredientsDetailWidget_C* UMiniItemCraftingIngredientsDetailWidget_C::GetDefaultObj()
{
	static class UMiniItemCraftingIngredientsDetailWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMiniItemCraftingIngredientsDetailWidget_C*>(UMiniItemCraftingIngredientsDetailWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MiniItemCraftingIngredientsDetailWidget.MiniItemCraftingIngredientsDetailWidget_C.GetRecipeItemQuantityPairs
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UFortItem*                   Item                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFortItemQuantityPair>Pairs                                                            (Parm, OutParm, ZeroConstructor)
// TArray<struct FFortItemQuantityPair>Results                                                          (Edit, ZeroConstructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortSchematicItem*          K2Node_DynamicCast_AsFort_Schematic_Item                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FSchematicRequirement>CallFunc_GetSchematicRequirements_Requirements                   (ZeroConstructor, ReferenceParm)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSchematicRequirement       CallFunc_Array_Get_Item                                          (NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortItemQuantityPair       CallFunc_MakeItemQuantityPair_ReturnValue                        (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMiniItemCraftingIngredientsDetailWidget_C::GetRecipeItemQuantityPairs(class UFortItem* Item, TArray<struct FFortItemQuantityPair>* Pairs, const TArray<struct FFortItemQuantityPair>& Results, int32 Temp_int_Array_Index_Variable, class UFortSchematicItem* K2Node_DynamicCast_AsFort_Schematic_Item, bool K2Node_DynamicCast_bSuccess, TArray<struct FSchematicRequirement>& CallFunc_GetSchematicRequirements_Requirements, int32 Temp_int_Loop_Counter_Variable, const struct FSchematicRequirement& CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue, const struct FFortItemQuantityPair& CallFunc_MakeItemQuantityPair_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MiniItemCraftingIngredientsDetailWidget_C", "GetRecipeItemQuantityPairs");

	Params::UMiniItemCraftingIngredientsDetailWidget_C_GetRecipeItemQuantityPairs_Params Parms{};

	Parms.Item = Item;
	Parms.Results = Results;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_DynamicCast_AsFort_Schematic_Item = K2Node_DynamicCast_AsFort_Schematic_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetSchematicRequirements_Requirements = CallFunc_GetSchematicRequirements_Requirements;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_MakeItemQuantityPair_ReturnValue = CallFunc_MakeItemQuantityPair_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Pairs != nullptr)
		*Pairs = std::move(Parms.Pairs);

}


// Function MiniItemCraftingIngredientsDetailWidget.MiniItemCraftingIngredientsDetailWidget_C.HandlePostDifferentItemToDetailSet
// (Event, Protected, BlueprintEvent)
// Parameters:

void UMiniItemCraftingIngredientsDetailWidget_C::HandlePostDifferentItemToDetailSet()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MiniItemCraftingIngredientsDetailWidget_C", "HandlePostDifferentItemToDetailSet");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MiniItemCraftingIngredientsDetailWidget.MiniItemCraftingIngredientsDetailWidget_C.HandlePostDifferentItemToCompareWithSet
// (Event, Protected, BlueprintEvent)
// Parameters:

void UMiniItemCraftingIngredientsDetailWidget_C::HandlePostDifferentItemToCompareWithSet()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MiniItemCraftingIngredientsDetailWidget_C", "HandlePostDifferentItemToCompareWithSet");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MiniItemCraftingIngredientsDetailWidget.MiniItemCraftingIngredientsDetailWidget_C.ExecuteUbergraph_MiniItemCraftingIngredientsDetailWidget
// (None)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFortItemQuantityPair>CallFunc_GetRecipeItemQuantityPairs_Pairs                        (ZeroConstructor, ReferenceParm)
// TArray<struct FFortItemQuantityPair>CallFunc_GetRecipeItemQuantityPairs_Pairs2                       (ZeroConstructor, ReferenceParm)

void UMiniItemCraftingIngredientsDetailWidget_C::ExecuteUbergraph_MiniItemCraftingIngredientsDetailWidget(int32 EntryPoint, TArray<struct FFortItemQuantityPair>& CallFunc_GetRecipeItemQuantityPairs_Pairs, TArray<struct FFortItemQuantityPair>& CallFunc_GetRecipeItemQuantityPairs_Pairs2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MiniItemCraftingIngredientsDetailWidget_C", "ExecuteUbergraph_MiniItemCraftingIngredientsDetailWidget");

	Params::UMiniItemCraftingIngredientsDetailWidget_C_ExecuteUbergraph_MiniItemCraftingIngredientsDetailWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetRecipeItemQuantityPairs_Pairs = CallFunc_GetRecipeItemQuantityPairs_Pairs;
	Parms.CallFunc_GetRecipeItemQuantityPairs_Pairs2 = CallFunc_GetRecipeItemQuantityPairs_Pairs2;

	UObject::ProcessEvent(Func, &Parms);

}

}


