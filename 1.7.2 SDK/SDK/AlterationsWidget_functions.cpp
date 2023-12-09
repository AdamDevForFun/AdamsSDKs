#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AlterationsWidget.AlterationsWidget_C
// (None)

class UClass* UAlterationsWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AlterationsWidget_C");

	return Clss;
}


// AlterationsWidget_C AlterationsWidget.Default__AlterationsWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAlterationsWidget_C* UAlterationsWidget_C::GetDefaultObj()
{
	static class UAlterationsWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAlterationsWidget_C*>(UAlterationsWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AlterationsWidget.AlterationsWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAlterationsWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AlterationsWidget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AlterationsWidget.AlterationsWidget_C.OnGenerateAlteration
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FFortUIAlteration           AlterationInfo                                                   (Parm, NoDestructor)

void UAlterationsWidget_C::OnGenerateAlteration(const struct FFortUIAlteration& AlterationInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AlterationsWidget_C", "OnGenerateAlteration");

	Params::UAlterationsWidget_C_OnGenerateAlteration_Params Parms{};

	Parms.AlterationInfo = AlterationInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AlterationsWidget.AlterationsWidget_C.OnItemChanged
// (Event, Public, BlueprintEvent)
// Parameters:

void UAlterationsWidget_C::OnItemChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AlterationsWidget_C", "OnItemChanged");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AlterationsWidget.AlterationsWidget_C.OnItemToCompareWithChanged
// (Event, Public, BlueprintEvent)
// Parameters:

void UAlterationsWidget_C::OnItemToCompareWithChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AlterationsWidget_C", "OnItemToCompareWithChanged");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AlterationsWidget.AlterationsWidget_C.OnStateChanged
// (Event, Public, BlueprintEvent)
// Parameters:

void UAlterationsWidget_C::OnStateChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AlterationsWidget_C", "OnStateChanged");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AlterationsWidget.AlterationsWidget_C.ExecuteUbergraph_AlterationsWidget
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAlterationWidget_C*         CallFunc_Create_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAlterationUnlocked_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortUIAlteration           K2Node_Event_AlterationInfo                                      (NoDestructor)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPerkDivider_C*              CallFunc_Create_ReturnValue2                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPerkDivider_C*              CallFunc_Create_ReturnValue3                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue3                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue4                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortItemType           CallFunc_GetType_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAlterationsWidget_C::ExecuteUbergraph_AlterationsWidget(int32 EntryPoint, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UAlterationWidget_C* CallFunc_Create_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, bool CallFunc_IsAlterationUnlocked_ReturnValue, const struct FFortUIAlteration& K2Node_Event_AlterationInfo, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue2, class UPerkDivider_C* CallFunc_Create_ReturnValue2, class UPerkDivider_C* CallFunc_Create_ReturnValue3, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue3, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue4, enum class EFortItemType CallFunc_GetType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AlterationsWidget_C", "ExecuteUbergraph_AlterationsWidget");

	Params::UAlterationsWidget_C_ExecuteUbergraph_AlterationsWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;
	Parms.CallFunc_IsAlterationUnlocked_ReturnValue = CallFunc_IsAlterationUnlocked_ReturnValue;
	Parms.K2Node_Event_AlterationInfo = K2Node_Event_AlterationInfo;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue2 = CallFunc_AddChildToVerticalBox_ReturnValue2;
	Parms.CallFunc_Create_ReturnValue2 = CallFunc_Create_ReturnValue2;
	Parms.CallFunc_Create_ReturnValue3 = CallFunc_Create_ReturnValue3;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue3 = CallFunc_AddChildToVerticalBox_ReturnValue3;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue4 = CallFunc_AddChildToVerticalBox_ReturnValue4;
	Parms.CallFunc_GetType_ReturnValue = CallFunc_GetType_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


