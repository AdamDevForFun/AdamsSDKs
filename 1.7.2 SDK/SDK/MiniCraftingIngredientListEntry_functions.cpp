#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass MiniCraftingIngredientListEntry.MiniCraftingIngredientListEntry_C
// (None)

class UClass* UMiniCraftingIngredientListEntry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MiniCraftingIngredientListEntry_C");

	return Clss;
}


// MiniCraftingIngredientListEntry_C MiniCraftingIngredientListEntry.Default__MiniCraftingIngredientListEntry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMiniCraftingIngredientListEntry_C* UMiniCraftingIngredientListEntry_C::GetDefaultObj()
{
	static class UMiniCraftingIngredientListEntry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMiniCraftingIngredientListEntry_C*>(UMiniCraftingIngredientListEntry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MiniCraftingIngredientListEntry.MiniCraftingIngredientListEntry_C.RefreshBeingPreviewed
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortItemEntryPreviewData   CallFunc_GetPreviewData_OutPreviewData                           (NoDestructor)
// bool                               CallFunc_IsBeingPreviewed_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMiniCraftingIngredientListEntry_C::RefreshBeingPreviewed(const struct FFortItemEntryPreviewData& CallFunc_GetPreviewData_OutPreviewData, bool CallFunc_IsBeingPreviewed_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MiniCraftingIngredientListEntry_C", "RefreshBeingPreviewed");

	Params::UMiniCraftingIngredientListEntry_C_RefreshBeingPreviewed_Params Parms{};

	Parms.CallFunc_GetPreviewData_OutPreviewData = CallFunc_GetPreviewData_OutPreviewData;
	Parms.CallFunc_IsBeingPreviewed_ReturnValue = CallFunc_IsBeingPreviewed_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MiniCraftingIngredientListEntry.MiniCraftingIngredientListEntry_C.Refresh
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItemDefinition*         CallFunc_GetItemDefinition_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMiniCraftingIngredientListEntry_C::Refresh(class UFortItemDefinition* CallFunc_GetItemDefinition_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MiniCraftingIngredientListEntry_C", "Refresh");

	Params::UMiniCraftingIngredientListEntry_C_Refresh_Params Parms{};

	Parms.CallFunc_GetItemDefinition_ReturnValue = CallFunc_GetItemDefinition_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MiniCraftingIngredientListEntry.MiniCraftingIngredientListEntry_C.HandleDifferentItemOrQuantitySetBP
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               IsBeingReset                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMiniCraftingIngredientListEntry_C::HandleDifferentItemOrQuantitySetBP(bool IsBeingReset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MiniCraftingIngredientListEntry_C", "HandleDifferentItemOrQuantitySetBP");

	Params::UMiniCraftingIngredientListEntry_C_HandleDifferentItemOrQuantitySetBP_Params Parms{};

	Parms.IsBeingReset = IsBeingReset;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MiniCraftingIngredientListEntry.MiniCraftingIngredientListEntry_C.PreviewStarted
// (Event, Protected, BlueprintEvent)
// Parameters:

void UMiniCraftingIngredientListEntry_C::PreviewStarted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MiniCraftingIngredientListEntry_C", "PreviewStarted");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MiniCraftingIngredientListEntry.MiniCraftingIngredientListEntry_C.PreviewEnded
// (Event, Protected, BlueprintEvent)
// Parameters:

void UMiniCraftingIngredientListEntry_C::PreviewEnded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MiniCraftingIngredientListEntry_C", "PreviewEnded");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MiniCraftingIngredientListEntry.MiniCraftingIngredientListEntry_C.ExecuteUbergraph_MiniCraftingIngredientListEntry
// (None)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsBeingReset                                        (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMiniCraftingIngredientListEntry_C::ExecuteUbergraph_MiniCraftingIngredientListEntry(int32 EntryPoint, bool K2Node_Event_IsBeingReset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MiniCraftingIngredientListEntry_C", "ExecuteUbergraph_MiniCraftingIngredientListEntry");

	Params::UMiniCraftingIngredientListEntry_C_ExecuteUbergraph_MiniCraftingIngredientListEntry_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsBeingReset = K2Node_Event_IsBeingReset;

	UObject::ProcessEvent(Func, &Parms);

}

}


