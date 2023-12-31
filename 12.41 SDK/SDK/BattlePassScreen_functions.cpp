#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BattlePassScreen.BattlePassScreen_C
// (None)

class UClass* UBattlePassScreen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattlePassScreen_C");

	return Clss;
}


// BattlePassScreen_C BattlePassScreen.Default__BattlePassScreen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattlePassScreen_C* UBattlePassScreen_C::GetDefaultObj()
{
	static class UBattlePassScreen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattlePassScreen_C*>(UBattlePassScreen_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BattlePassScreen.BattlePassScreen_C.RevealRightSideActions
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattlePassScreen_C::RevealRightSideActions(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassScreen_C", "RevealRightSideActions");

	Params::UBattlePassScreen_C_RevealRightSideActions_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassScreen.BattlePassScreen_C.HideRightSideActions
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattlePassScreen_C::HideRightSideActions(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassScreen_C", "HideRightSideActions");

	Params::UBattlePassScreen_C_HideRightSideActions_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassScreen.BattlePassScreen_C.HandleShowVariantCycleLabel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bShowCycleLabel                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattlePassScreen_C::HandleShowVariantCycleLabel(bool bShowCycleLabel, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassScreen_C", "HandleShowVariantCycleLabel");

	Params::UBattlePassScreen_C_HandleShowVariantCycleLabel_Params Parms{};

	Parms.bShowCycleLabel = bShowCycleLabel;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassScreen.BattlePassScreen_C.HandleOffscreenIndicatorAnimations
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              LeftFriendCount                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              RightFriendCount                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_MakeLiteralBool_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_MakeLiteralBool_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattlePassScreen_C::HandleOffscreenIndicatorAnimations(int32 LeftFriendCount, int32 RightFriendCount, bool CallFunc_MakeLiteralBool_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, bool CallFunc_MakeLiteralBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassScreen_C", "HandleOffscreenIndicatorAnimations");

	Params::UBattlePassScreen_C_HandleOffscreenIndicatorAnimations_Params Parms{};

	Parms.LeftFriendCount = LeftFriendCount;
	Parms.RightFriendCount = RightFriendCount;
	Parms.CallFunc_MakeLiteralBool_ReturnValue = CallFunc_MakeLiteralBool_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.CallFunc_MakeLiteralBool_ReturnValue_1 = CallFunc_MakeLiteralBool_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue_1 = CallFunc_PlayAnimationReverse_ReturnValue_1;
	Parms.CallFunc_PlayAnimationForward_ReturnValue_1 = CallFunc_PlayAnimationForward_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassScreen.BattlePassScreen_C.HandleRewardTimelineAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bAnimateRewardTimeline                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EUMGSequencePlayMode    Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUMGSequencePlayMode    Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUMGSequencePlayMode    K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattlePassScreen_C::HandleRewardTimelineAnimation(bool bAnimateRewardTimeline, float Temp_float_Variable, float Temp_float_Variable_1, bool Temp_bool_Variable, enum class EUMGSequencePlayMode Temp_byte_Variable, enum class EUMGSequencePlayMode Temp_byte_Variable_1, enum class EUMGSequencePlayMode K2Node_Select_Default, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, bool Temp_bool_Variable_1, float K2Node_Select_Default_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassScreen_C", "HandleRewardTimelineAnimation");

	Params::UBattlePassScreen_C_HandleRewardTimelineAnimation_Params Parms{};

	Parms.bAnimateRewardTimeline = bAnimateRewardTimeline;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassScreen.BattlePassScreen_C.HandleWatchVideoRequest
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PlayFromDisc                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortRuntimeOptions*         CallFunc_GetRuntimeOptions_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_UseElectraForWatchBattlePassMovie_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVideoConfig_Mono           K2Node_MakeStruct_VideoConfig_Mono                               (None)
// class UActivatableMovieWidget_Monolithic_Native_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadStreamingVideo_bNoAutoPlay                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattlePassScreen_C::HandleWatchVideoRequest(bool PlayFromDisc, bool CallFunc_Not_PreBool_ReturnValue, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue, bool CallFunc_UseElectraForWatchBattlePassMovie_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, const struct FVideoConfig_Mono& K2Node_MakeStruct_VideoConfig_Mono, class UActivatableMovieWidget_Monolithic_Native_C* CallFunc_Create_ReturnValue, bool CallFunc_LoadStreamingVideo_bNoAutoPlay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassScreen_C", "HandleWatchVideoRequest");

	Params::UBattlePassScreen_C_HandleWatchVideoRequest_Params Parms{};

	Parms.PlayFromDisc = PlayFromDisc;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetRuntimeOptions_ReturnValue = CallFunc_GetRuntimeOptions_ReturnValue;
	Parms.CallFunc_UseElectraForWatchBattlePassMovie_ReturnValue = CallFunc_UseElectraForWatchBattlePassMovie_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_MakeStruct_VideoConfig_Mono = K2Node_MakeStruct_VideoConfig_Mono;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_LoadStreamingVideo_bNoAutoPlay = CallFunc_LoadStreamingVideo_bNoAutoPlay;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassScreen.BattlePassScreen_C.HandleViewReward
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bInNoReward                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              InNumRewardsToPurchase                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USimpleFeatured_YellowButton_C*K2Node_DynamicCast_AsSimple_Featured_Yellow_Button               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UBattlePassScreen_C::HandleViewReward(bool bInNoReward, int32 InNumRewardsToPurchase, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class USimpleFeatured_YellowButton_C* K2Node_DynamicCast_AsSimple_Featured_Yellow_Button, bool K2Node_DynamicCast_bSuccess, enum class ESlateVisibility K2Node_Select_Default, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassScreen_C", "HandleViewReward");

	Params::UBattlePassScreen_C_HandleViewReward_Params Parms{};

	Parms.bInNoReward = bInNoReward;
	Parms.InNumRewardsToPurchase = InNumRewardsToPurchase;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_DynamicCast_AsSimple_Featured_Yellow_Button = K2Node_DynamicCast_AsSimple_Featured_Yellow_Button;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassScreen.BattlePassScreen_C.HandleOnViewReward
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FFortRarityItemData         Rarity                                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               bNoReward                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              NumRewardsToPurchase                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItemDefinition*         RewardItem                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattlePassScreen_C::HandleOnViewReward(const struct FFortRarityItemData& Rarity, bool bNoReward, int32 NumRewardsToPurchase, class UFortItemDefinition* RewardItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassScreen_C", "HandleOnViewReward");

	Params::UBattlePassScreen_C_HandleOnViewReward_Params Parms{};

	Parms.Rarity = Rarity;
	Parms.bNoReward = bNoReward;
	Parms.NumRewardsToPurchase = NumRewardsToPurchase;
	Parms.RewardItem = RewardItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassScreen.BattlePassScreen_C.OnSetupPurchaseSeasonLevel
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// TMap<int32, class UFortSeasonPassLevelInfo*>SeasonLevelInfos                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UAthenaSeasonItemDefinition* CurrentSeasonData                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortSeasonPassLevelInfo*    CurrentLevel                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MaxLevelToPurchase                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              LevelToBePurchased                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattlePassScreen_C::OnSetupPurchaseSeasonLevel(TMap<int32, class UFortSeasonPassLevelInfo*>& SeasonLevelInfos, class UAthenaSeasonItemDefinition* CurrentSeasonData, class UFortSeasonPassLevelInfo* CurrentLevel, int32 MaxLevelToPurchase, int32 LevelToBePurchased)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassScreen_C", "OnSetupPurchaseSeasonLevel");

	Params::UBattlePassScreen_C_OnSetupPurchaseSeasonLevel_Params Parms{};

	Parms.SeasonLevelInfos = SeasonLevelInfos;
	Parms.CurrentSeasonData = CurrentSeasonData;
	Parms.CurrentLevel = CurrentLevel;
	Parms.MaxLevelToPurchase = MaxLevelToPurchase;
	Parms.LevelToBePurchased = LevelToBePurchased;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassScreen.BattlePassScreen_C.HandleOnUpdatedVisibleFriendCount
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              LeftFriendCount                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              RightFriendCount                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattlePassScreen_C::HandleOnUpdatedVisibleFriendCount(int32 LeftFriendCount, int32 RightFriendCount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassScreen_C", "HandleOnUpdatedVisibleFriendCount");

	Params::UBattlePassScreen_C_HandleOnUpdatedVisibleFriendCount_Params Parms{};

	Parms.LeftFriendCount = LeftFriendCount;
	Parms.RightFriendCount = RightFriendCount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassScreen.BattlePassScreen_C.OnHandleReplayCinematic
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBattlePassScreen_C::OnHandleReplayCinematic()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassScreen_C", "OnHandleReplayCinematic");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattlePassScreen.BattlePassScreen_C.OnHandleAboutBattlePass
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBattlePassScreen_C::OnHandleAboutBattlePass()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassScreen_C", "OnHandleAboutBattlePass");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattlePassScreen.BattlePassScreen_C.OnHandleWatchVideo
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBattlePassScreen_C::OnHandleWatchVideo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassScreen_C", "OnHandleWatchVideo");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattlePassScreen.BattlePassScreen_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBattlePassScreen_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassScreen_C", "BP_OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattlePassScreen.BattlePassScreen_C.OnHandleViewAllRewards
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBattlePassScreen_C::OnHandleViewAllRewards()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassScreen_C", "OnHandleViewAllRewards");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattlePassScreen.BattlePassScreen_C.OnRequestViewReward
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBattlePassScreen_C::OnRequestViewReward()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassScreen_C", "OnRequestViewReward");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattlePassScreen.BattlePassScreen_C.OnRequestViewRewardComplete
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBattlePassScreen_C::OnRequestViewRewardComplete()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassScreen_C", "OnRequestViewRewardComplete");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattlePassScreen.BattlePassScreen_C.OnVariantUpdate
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              CurrentIndex                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              TotalNumVariants                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattlePassScreen_C::OnVariantUpdate(int32 CurrentIndex, int32 TotalNumVariants)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassScreen_C", "OnVariantUpdate");

	Params::UBattlePassScreen_C_OnVariantUpdate_Params Parms{};

	Parms.CurrentIndex = CurrentIndex;
	Parms.TotalNumVariants = TotalNumVariants;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassScreen.BattlePassScreen_C.OnBattlePassViewChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EBattlePassView         NewView                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattlePassScreen_C::OnBattlePassViewChanged(enum class EBattlePassView NewView)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassScreen_C", "OnBattlePassViewChanged");

	Params::UBattlePassScreen_C_OnBattlePassViewChanged_Params Parms{};

	Parms.NewView = NewView;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassScreen.BattlePassScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UBattlePassScreen_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassScreen_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattlePassScreen.BattlePassScreen_C.HandleOnInputMethodChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ECommonInputType        bNewInputType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattlePassScreen_C::HandleOnInputMethodChanged(enum class ECommonInputType bNewInputType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassScreen_C", "HandleOnInputMethodChanged");

	Params::UBattlePassScreen_C_HandleOnInputMethodChanged_Params Parms{};

	Parms.bNewInputType = bNewInputType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassScreen.BattlePassScreen_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UBattlePassScreen_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassScreen_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattlePassScreen.BattlePassScreen_C.OnSetDifferentBPText
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBattlePassScreen_C::OnSetDifferentBPText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassScreen_C", "OnSetDifferentBPText");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattlePassScreen.BattlePassScreen_C.ExecuteUbergraph_BattlePassScreen
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonInputSubsystem*       CallFunc_GetLocalPlayerSubsystem_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        CallFunc_GetCurrentInputType_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortRarityItemData         K2Node_Event_Rarity                                              (None)
// bool                               K2Node_Event_bNoReward                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Event_NumRewardsToPurchase                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItemDefinition*         K2Node_Event_RewardItem                                          (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<int32, class UFortSeasonPassLevelInfo*>K2Node_Event_SeasonLevelInfos                                    (ConstParm, ZeroConstructor)
// class UAthenaSeasonItemDefinition* K2Node_Event_CurrentSeasonData                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortSeasonPassLevelInfo*    K2Node_Event_CurrentLevel                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_MaxLevelToPurchase                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_LevelToBePurchased                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_LeftFriendCount                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_RightFriendCount                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaSeasonLevelConfirmationScreen_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaSeasonAboutWidget_C*  CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBattlePassViewRewardsScreen_C*CallFunc_Create_ReturnValue_2                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_CurrentIndex                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_TotalNumVariants                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class UCommonInputSubsystem*       CallFunc_GetLocalPlayerSubsystem_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBattlePassView         K2Node_Event_NewView                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortRuntimeOptions*         CallFunc_GetRuntimeOptions_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AVaultWorld_C*>       CallFunc_GetAllActorsOfClass_OutActors                           (ZeroConstructor, ReferenceParm)
// TArray<class AFrontendCamera_VaultRotator_C*>CallFunc_GetAllActorsOfClass_OutActors_1                         (ZeroConstructor, ReferenceParm)
// class AVaultWorld_C*               CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFrontendCamera_VaultRotator_C*CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActorHasTag_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ActorHasTag_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ShouldPlayBPVideo_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetBattlePassPurchaseLevelOfferId_ReturnValue           (ZeroConstructor, HasGetValueTypeHash)
// enum class ECommonInputType        K2Node_CustomEvent_bNewInputType                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UOverlaySlot*                CallFunc_SlotAsOverlaySlot_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USimpleFeatured_YellowButton_C*K2Node_DynamicCast_AsSimple_Featured_Yellow_Button               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattlePassScreen_C::ExecuteUbergraph_BattlePassScreen(int32 EntryPoint, class FText CallFunc_MakeLiteralText_ReturnValue, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable_1, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, int32 Temp_int_Array_Index_Variable, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable_1, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_Not_PreBool_ReturnValue_1, const struct FFortRarityItemData& K2Node_Event_Rarity, bool K2Node_Event_bNoReward, int32 K2Node_Event_NumRewardsToPurchase, class UFortItemDefinition* K2Node_Event_RewardItem, TMap<int32, class UFortSeasonPassLevelInfo*> K2Node_Event_SeasonLevelInfos, class UAthenaSeasonItemDefinition* K2Node_Event_CurrentSeasonData, class UFortSeasonPassLevelInfo* K2Node_Event_CurrentLevel, int32 K2Node_Event_MaxLevelToPurchase, int32 K2Node_Event_LevelToBePurchased, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, int32 K2Node_Event_LeftFriendCount, int32 K2Node_Event_RightFriendCount, class UAthenaSeasonLevelConfirmationScreen_C* CallFunc_Create_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, class UAthenaSeasonAboutWidget_C* CallFunc_Create_ReturnValue_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_2, class UBattlePassViewRewardsScreen_C* CallFunc_Create_ReturnValue_2, int32 K2Node_Event_CurrentIndex, int32 K2Node_Event_TotalNumVariants, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue_1, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class EBattlePassView K2Node_Event_NewView, bool K2Node_SwitchEnum_CmpSuccess, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue, TArray<class AVaultWorld_C*>& CallFunc_GetAllActorsOfClass_OutActors, TArray<class AFrontendCamera_VaultRotator_C*>& CallFunc_GetAllActorsOfClass_OutActors_1, class AVaultWorld_C* CallFunc_Array_Get_Item, class AFrontendCamera_VaultRotator_C* CallFunc_Array_Get_Item_1, bool CallFunc_ActorHasTag_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, bool Temp_bool_Variable_1, bool CallFunc_ShouldPlayBPVideo_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, const class FString& CallFunc_GetBattlePassPurchaseLevelOfferId_ReturnValue, enum class ECommonInputType K2Node_CustomEvent_bNewInputType, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, float K2Node_Select_Default_1, const struct FMargin& K2Node_MakeStruct_Margin, class USimpleFeatured_YellowButton_C* K2Node_DynamicCast_AsSimple_Featured_Yellow_Button, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassScreen_C", "ExecuteUbergraph_BattlePassScreen");

	Params::UBattlePassScreen_C_ExecuteUbergraph_BattlePassScreen_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue = CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetCurrentInputType_ReturnValue = CallFunc_GetCurrentInputType_ReturnValue;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_bool_True_if_break_was_hit_Variable_1 = Temp_bool_True_if_break_was_hit_Variable_1;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.K2Node_Event_Rarity = K2Node_Event_Rarity;
	Parms.K2Node_Event_bNoReward = K2Node_Event_bNoReward;
	Parms.K2Node_Event_NumRewardsToPurchase = K2Node_Event_NumRewardsToPurchase;
	Parms.K2Node_Event_RewardItem = K2Node_Event_RewardItem;
	Parms.K2Node_Event_SeasonLevelInfos = K2Node_Event_SeasonLevelInfos;
	Parms.K2Node_Event_CurrentSeasonData = K2Node_Event_CurrentSeasonData;
	Parms.K2Node_Event_CurrentLevel = K2Node_Event_CurrentLevel;
	Parms.K2Node_Event_MaxLevelToPurchase = K2Node_Event_MaxLevelToPurchase;
	Parms.K2Node_Event_LevelToBePurchased = K2Node_Event_LevelToBePurchased;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_Event_LeftFriendCount = K2Node_Event_LeftFriendCount;
	Parms.K2Node_Event_RightFriendCount = K2Node_Event_RightFriendCount;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue_1 = CallFunc_GetOwningPlayer_ReturnValue_1;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.CallFunc_GetOwningPlayer_ReturnValue_2 = CallFunc_GetOwningPlayer_ReturnValue_2;
	Parms.CallFunc_Create_ReturnValue_2 = CallFunc_Create_ReturnValue_2;
	Parms.K2Node_Event_CurrentIndex = K2Node_Event_CurrentIndex;
	Parms.K2Node_Event_TotalNumVariants = K2Node_Event_TotalNumVariants;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue_1 = CallFunc_GetLocalPlayerSubsystem_ReturnValue_1;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Event_NewView = K2Node_Event_NewView;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetRuntimeOptions_ReturnValue = CallFunc_GetRuntimeOptions_ReturnValue;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_1 = CallFunc_GetAllActorsOfClass_OutActors_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_ActorHasTag_ReturnValue = CallFunc_ActorHasTag_ReturnValue;
	Parms.CallFunc_ActorHasTag_ReturnValue_1 = CallFunc_ActorHasTag_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_ShouldPlayBPVideo_ReturnValue = CallFunc_ShouldPlayBPVideo_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetBattlePassPurchaseLevelOfferId_ReturnValue = CallFunc_GetBattlePassPurchaseLevelOfferId_ReturnValue;
	Parms.K2Node_CustomEvent_bNewInputType = K2Node_CustomEvent_bNewInputType;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_SlotAsOverlaySlot_ReturnValue = CallFunc_SlotAsOverlaySlot_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.K2Node_DynamicCast_AsSimple_Featured_Yellow_Button = K2Node_DynamicCast_AsSimple_Featured_Yellow_Button;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


