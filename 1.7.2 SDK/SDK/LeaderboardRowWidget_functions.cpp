#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass LeaderboardRowWidget.LeaderboardRowWidget_C
// (None)

class UClass* ULeaderboardRowWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LeaderboardRowWidget_C");

	return Clss;
}


// LeaderboardRowWidget_C LeaderboardRowWidget.Default__LeaderboardRowWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULeaderboardRowWidget_C* ULeaderboardRowWidget_C::GetDefaultObj()
{
	static class ULeaderboardRowWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULeaderboardRowWidget_C*>(ULeaderboardRowWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LeaderboardRowWidget.LeaderboardRowWidget_C.Refresh
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortLeaderboardRowProxyInstance*RowObject                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FText                        CallFunc_Conv_IntToText_ReturnValue2                             (None)

void ULeaderboardRowWidget_C::Refresh(class UFortLeaderboardRowProxyInstance* RowObject, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LeaderboardRowWidget_C", "Refresh");

	Params::ULeaderboardRowWidget_C_Refresh_Params Parms{};

	Parms.RowObject = RowObject;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue2 = CallFunc_Conv_IntToText_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LeaderboardRowWidget.LeaderboardRowWidget_C.SetDataDirect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortLeaderboardRowProxyInstance*NewData                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULeaderboardRowWidget_C::SetDataDirect(class UFortLeaderboardRowProxyInstance* NewData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LeaderboardRowWidget_C", "SetDataDirect");

	Params::ULeaderboardRowWidget_C_SetDataDirect_Params Parms{};

	Parms.NewData = NewData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LeaderboardRowWidget.LeaderboardRowWidget_C.OnLeaderboardEntryDataSet
// (Event, Public, BlueprintEvent)
// Parameters:

void ULeaderboardRowWidget_C::OnLeaderboardEntryDataSet()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LeaderboardRowWidget_C", "OnLeaderboardEntryDataSet");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LeaderboardRowWidget.LeaderboardRowWidget_C.ExecuteUbergraph_LeaderboardRowWidget
// (None)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortLeaderboardRowProxyInstance*K2Node_DynamicCast_AsFort_Leaderboard_Row_Proxy_Instance         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULeaderboardRowWidget_C::ExecuteUbergraph_LeaderboardRowWidget(int32 EntryPoint, class UFortLeaderboardRowProxyInstance* K2Node_DynamicCast_AsFort_Leaderboard_Row_Proxy_Instance, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LeaderboardRowWidget_C", "ExecuteUbergraph_LeaderboardRowWidget");

	Params::ULeaderboardRowWidget_C_ExecuteUbergraph_LeaderboardRowWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_DynamicCast_AsFort_Leaderboard_Row_Proxy_Instance = K2Node_DynamicCast_AsFort_Leaderboard_Row_Proxy_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


