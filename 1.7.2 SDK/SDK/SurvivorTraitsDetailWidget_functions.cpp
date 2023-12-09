#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass SurvivorTraitsDetailWidget.SurvivorTraitsDetailWidget_C
// (None)

class UClass* USurvivorTraitsDetailWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SurvivorTraitsDetailWidget_C");

	return Clss;
}


// SurvivorTraitsDetailWidget_C SurvivorTraitsDetailWidget.Default__SurvivorTraitsDetailWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USurvivorTraitsDetailWidget_C* USurvivorTraitsDetailWidget_C::GetDefaultObj()
{
	static class USurvivorTraitsDetailWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USurvivorTraitsDetailWidget_C*>(USurvivorTraitsDetailWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SurvivorTraitsDetailWidget.SurvivorTraitsDetailWidget_C.HandlePostDifferentItemToDetailSet
// (Event, Protected, BlueprintEvent)
// Parameters:

void USurvivorTraitsDetailWidget_C::HandlePostDifferentItemToDetailSet()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SurvivorTraitsDetailWidget_C", "HandlePostDifferentItemToDetailSet");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SurvivorTraitsDetailWidget.SurvivorTraitsDetailWidget_C.ExecuteUbergraph_SurvivorTraitsDetailWidget
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable5                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_TryGetCategory_OutCategoryDisplayName                   (None)
// bool                               CallFunc_TryGetCategory_OutHasIcon                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortMultiSizeBrush         CallFunc_TryGetCategory_OutCategoryIconBrush                     (None)
// bool                               CallFunc_TryGetCategory_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_TryGetCategory_OutCategoryDisplayName2                  (None)
// bool                               CallFunc_TryGetCategory_OutHasIcon2                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortMultiSizeBrush         CallFunc_TryGetCategory_OutCategoryIconBrush2                    (None)
// bool                               CallFunc_TryGetCategory_ReturnValue2                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable2                                              (None)
// bool                               Temp_bool_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortHero*                   K2Node_DynamicCast_AsFort_Hero                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select3_Default                                           (None)
// class UFortWorker*                 K2Node_DynamicCast_AsFort_Worker                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsTemporaryItem_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable6                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select4_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void USurvivorTraitsDetailWidget_C::ExecuteUbergraph_SurvivorTraitsDetailWidget(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, bool Temp_bool_Variable2, enum class ESlateVisibility Temp_byte_Variable3, enum class ESlateVisibility Temp_byte_Variable4, enum class ESlateVisibility Temp_byte_Variable5, class FText CallFunc_TryGetCategory_OutCategoryDisplayName, bool CallFunc_TryGetCategory_OutHasIcon, const struct FFortMultiSizeBrush& CallFunc_TryGetCategory_OutCategoryIconBrush, bool CallFunc_TryGetCategory_ReturnValue, class FText CallFunc_TryGetCategory_OutCategoryDisplayName2, bool CallFunc_TryGetCategory_OutHasIcon2, const struct FFortMultiSizeBrush& CallFunc_TryGetCategory_OutCategoryIconBrush2, bool CallFunc_TryGetCategory_ReturnValue2, bool CallFunc_Not_PreBool_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select2_Default, class FText Temp_text_Variable, class FText Temp_text_Variable2, bool Temp_bool_Variable3, class UFortHero* K2Node_DynamicCast_AsFort_Hero, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Not_PreBool_ReturnValue2, class FText K2Node_Select3_Default, class UFortWorker* K2Node_DynamicCast_AsFort_Worker, bool K2Node_DynamicCast_bSuccess2, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsTemporaryItem_ReturnValue, enum class ESlateVisibility Temp_byte_Variable6, bool Temp_bool_Variable4, enum class ESlateVisibility K2Node_Select4_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SurvivorTraitsDetailWidget_C", "ExecuteUbergraph_SurvivorTraitsDetailWidget");

	Params::USurvivorTraitsDetailWidget_C_ExecuteUbergraph_SurvivorTraitsDetailWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.Temp_byte_Variable4 = Temp_byte_Variable4;
	Parms.Temp_byte_Variable5 = Temp_byte_Variable5;
	Parms.CallFunc_TryGetCategory_OutCategoryDisplayName = CallFunc_TryGetCategory_OutCategoryDisplayName;
	Parms.CallFunc_TryGetCategory_OutHasIcon = CallFunc_TryGetCategory_OutHasIcon;
	Parms.CallFunc_TryGetCategory_OutCategoryIconBrush = CallFunc_TryGetCategory_OutCategoryIconBrush;
	Parms.CallFunc_TryGetCategory_ReturnValue = CallFunc_TryGetCategory_ReturnValue;
	Parms.CallFunc_TryGetCategory_OutCategoryDisplayName2 = CallFunc_TryGetCategory_OutCategoryDisplayName2;
	Parms.CallFunc_TryGetCategory_OutHasIcon2 = CallFunc_TryGetCategory_OutHasIcon2;
	Parms.CallFunc_TryGetCategory_OutCategoryIconBrush2 = CallFunc_TryGetCategory_OutCategoryIconBrush2;
	Parms.CallFunc_TryGetCategory_ReturnValue2 = CallFunc_TryGetCategory_ReturnValue2;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable2 = Temp_text_Variable2;
	Parms.Temp_bool_Variable3 = Temp_bool_Variable3;
	Parms.K2Node_DynamicCast_AsFort_Hero = K2Node_DynamicCast_AsFort_Hero;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Not_PreBool_ReturnValue2 = CallFunc_Not_PreBool_ReturnValue2;
	Parms.K2Node_Select3_Default = K2Node_Select3_Default;
	Parms.K2Node_DynamicCast_AsFort_Worker = K2Node_DynamicCast_AsFort_Worker;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_IsTemporaryItem_ReturnValue = CallFunc_IsTemporaryItem_ReturnValue;
	Parms.Temp_byte_Variable6 = Temp_byte_Variable6;
	Parms.Temp_bool_Variable4 = Temp_bool_Variable4;
	Parms.K2Node_Select4_Default = K2Node_Select4_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}


