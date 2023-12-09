#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass VinderTech_Umbrella_AnimBP.VinderTech_Umbrella_AnimBP_C
// (None)

class UClass* UVinderTech_Umbrella_AnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VinderTech_Umbrella_AnimBP_C");

	return Clss;
}


// VinderTech_Umbrella_AnimBP_C VinderTech_Umbrella_AnimBP.Default__VinderTech_Umbrella_AnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVinderTech_Umbrella_AnimBP_C* UVinderTech_Umbrella_AnimBP_C::GetDefaultObj()
{
	static class UVinderTech_Umbrella_AnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UVinderTech_Umbrella_AnimBP_C*>(UVinderTech_Umbrella_AnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function VinderTech_Umbrella_AnimBP.VinderTech_Umbrella_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_VinderTech_Umbrella_AnimBP_AnimGraphNode_TransitionResult_3753F99B490EFDA0C68FF0B8819E664F
// (BlueprintEvent)
// Parameters:

void UVinderTech_Umbrella_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_VinderTech_Umbrella_AnimBP_AnimGraphNode_TransitionResult_3753F99B490EFDA0C68FF0B8819E664F()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VinderTech_Umbrella_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_VinderTech_Umbrella_AnimBP_AnimGraphNode_TransitionResult_3753F99B490EFDA0C68FF0B8819E664F");



	UObject::ProcessEvent(Func, nullptr);

}


// Function VinderTech_Umbrella_AnimBP.VinderTech_Umbrella_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_VinderTech_Umbrella_AnimBP_AnimGraphNode_TransitionResult_F81EA3C344FA6DFC7A5EA1B792B511A5
// (BlueprintEvent)
// Parameters:

void UVinderTech_Umbrella_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_VinderTech_Umbrella_AnimBP_AnimGraphNode_TransitionResult_F81EA3C344FA6DFC7A5EA1B792B511A5()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VinderTech_Umbrella_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_VinderTech_Umbrella_AnimBP_AnimGraphNode_TransitionResult_F81EA3C344FA6DFC7A5EA1B792B511A5");



	UObject::ProcessEvent(Func, nullptr);

}


// Function VinderTech_Umbrella_AnimBP.VinderTech_Umbrella_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_VinderTech_Umbrella_AnimBP_AnimGraphNode_TransitionResult_1A7F7CBD4C68973F2BBDFCBF93433107
// (BlueprintEvent)
// Parameters:

void UVinderTech_Umbrella_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_VinderTech_Umbrella_AnimBP_AnimGraphNode_TransitionResult_1A7F7CBD4C68973F2BBDFCBF93433107()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VinderTech_Umbrella_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_VinderTech_Umbrella_AnimBP_AnimGraphNode_TransitionResult_1A7F7CBD4C68973F2BBDFCBF93433107");



	UObject::ProcessEvent(Func, nullptr);

}


// Function VinderTech_Umbrella_AnimBP.VinderTech_Umbrella_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_VinderTech_Umbrella_AnimBP_AnimGraphNode_TransitionResult_9592CEBA49F2B067A15FFFBB6AB5105E
// (BlueprintEvent)
// Parameters:

void UVinderTech_Umbrella_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_VinderTech_Umbrella_AnimBP_AnimGraphNode_TransitionResult_9592CEBA49F2B067A15FFFBB6AB5105E()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VinderTech_Umbrella_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_VinderTech_Umbrella_AnimBP_AnimGraphNode_TransitionResult_9592CEBA49F2B067A15FFFBB6AB5105E");



	UObject::ProcessEvent(Func, nullptr);

}


// Function VinderTech_Umbrella_AnimBP.VinderTech_Umbrella_AnimBP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVinderTech_Umbrella_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VinderTech_Umbrella_AnimBP_C", "BlueprintUpdateAnimation");

	Params::UVinderTech_Umbrella_AnimBP_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VinderTech_Umbrella_AnimBP.VinderTech_Umbrella_AnimBP_C.ExecuteUbergraph_VinderTech_Umbrella_AnimBP
// (None)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_TryGetPawnOwner_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerPawnAthena*       K2Node_DynamicCast_AsFort_Player_Pawn_Athena                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsParachuteOpen_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetRelevantAnimTimeRemaining_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UVinderTech_Umbrella_AnimBP_C::ExecuteUbergraph_VinderTech_Umbrella_AnimBP(int32 EntryPoint, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, class AFortPlayerPawnAthena* K2Node_DynamicCast_AsFort_Player_Pawn_Athena, bool K2Node_DynamicCast_bSuccess2, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsParachuteOpen_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue2, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue, float K2Node_Event_DeltaTimeX, bool CallFunc_EqualEqual_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VinderTech_Umbrella_AnimBP_C", "ExecuteUbergraph_VinderTech_Umbrella_AnimBP");

	Params::UVinderTech_Umbrella_AnimBP_C_ExecuteUbergraph_VinderTech_Umbrella_AnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_TryGetPawnOwner_ReturnValue = CallFunc_TryGetPawnOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn = K2Node_DynamicCast_AsFort_Player_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn_Athena = K2Node_DynamicCast_AsFort_Player_Pawn_Athena;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsParachuteOpen_ReturnValue = CallFunc_IsParachuteOpen_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue2 = CallFunc_Not_PreBool_ReturnValue2;
	Parms.CallFunc_GetRelevantAnimTimeRemaining_ReturnValue = CallFunc_GetRelevantAnimTimeRemaining_ReturnValue;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue = CallFunc_EqualEqual_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


