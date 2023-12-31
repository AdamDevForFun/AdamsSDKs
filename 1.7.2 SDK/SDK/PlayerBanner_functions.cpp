#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass PlayerBanner.PlayerBanner_C
// (None)

class UClass* UPlayerBanner_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayerBanner_C");

	return Clss;
}


// PlayerBanner_C PlayerBanner.Default__PlayerBanner_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPlayerBanner_C* UPlayerBanner_C::GetDefaultObj()
{
	static class UPlayerBanner_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayerBanner_C*>(UPlayerBanner_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PlayerBanner.PlayerBanner_C.ClearBannerState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPlayerBanner_C::ClearBannerState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerBanner_C", "ClearBannerState");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayerBanner.PlayerBanner_C.OnBannerIconLoaded
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     LoadedObject                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetBannerMID_BannerMID                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture*                    K2Node_DynamicCast_AsTexture                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerBanner_C::OnBannerIconLoaded(class UObject* LoadedObject, class UMaterialInstanceDynamic* CallFunc_GetBannerMID_BannerMID, class UTexture* K2Node_DynamicCast_AsTexture, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerBanner_C", "OnBannerIconLoaded");

	Params::UPlayerBanner_C_OnBannerIconLoaded_Params Parms{};

	Parms.LoadedObject = LoadedObject;
	Parms.CallFunc_GetBannerMID_BannerMID = CallFunc_GetBannerMID_BannerMID;
	Parms.K2Node_DynamicCast_AsTexture = K2Node_DynamicCast_AsTexture;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerBanner.PlayerBanner_C.GetBannerMID
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UMaterialInstanceDynamic*    BannerMID                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerBanner_C::GetBannerMID(class UMaterialInstanceDynamic** BannerMID, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerBanner_C", "GetBannerMID");

	Params::UPlayerBanner_C_GetBannerMID_Params Parms{};

	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (BannerMID != nullptr)
		*BannerMID = Parms.BannerMID;

}


// Function PlayerBanner.PlayerBanner_C.SetBannerOwner
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl            OwnerId                                                          (Parm, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_UniqueNetIdRepl_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUITeamInfo*             CallFunc_GetLocalPlayerTeam_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortHomeBaseInfo           CallFunc_GetHomeBaseInfoForPlayer_Result                         (None)
// bool                               CallFunc_SetBannerImage_Success                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerBanner_C::SetBannerOwner(const struct FUniqueNetIdRepl& OwnerId, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortPartyContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsValid_UniqueNetIdRepl_ReturnValue, class UFortUITeamInfo* CallFunc_GetLocalPlayerTeam_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class UFortMcpContext* CallFunc_GetContext_ReturnValue2, const struct FFortHomeBaseInfo& CallFunc_GetHomeBaseInfoForPlayer_Result, bool CallFunc_SetBannerImage_Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerBanner_C", "SetBannerOwner");

	Params::UPlayerBanner_C_SetBannerOwner_Params Parms{};

	Parms.OwnerId = OwnerId;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsValid_UniqueNetIdRepl_ReturnValue = CallFunc_IsValid_UniqueNetIdRepl_ReturnValue;
	Parms.CallFunc_GetLocalPlayerTeam_ReturnValue = CallFunc_GetLocalPlayerTeam_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_GetHomeBaseInfoForPlayer_Result = CallFunc_GetHomeBaseInfoForPlayer_Result;
	Parms.CallFunc_SetBannerImage_Success = CallFunc_SetBannerImage_Success;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerBanner.PlayerBanner_C.SetBannerColorId
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        InBannerColorId                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetBannerMID_BannerMID                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHomebaseBannerColor        CallFunc_GetBannerColorFromRowName_ReturnValue                   (NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_GetBannerMID_BannerMID2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetSecondaryColor_ReturnValue                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetPrimaryColor_ReturnValue                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue2                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerBanner_C::SetBannerColorId(class FName InBannerColorId, class UMaterialInstanceDynamic* CallFunc_GetBannerMID_BannerMID, bool CallFunc_NotEqual_NameName_ReturnValue, const struct FHomebaseBannerColor& CallFunc_GetBannerColorFromRowName_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetBannerMID_BannerMID2, const struct FLinearColor& CallFunc_GetSecondaryColor_ReturnValue, const struct FLinearColor& CallFunc_GetPrimaryColor_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerBanner_C", "SetBannerColorId");

	Params::UPlayerBanner_C_SetBannerColorId_Params Parms{};

	Parms.InBannerColorId = InBannerColorId;
	Parms.CallFunc_GetBannerMID_BannerMID = CallFunc_GetBannerMID_BannerMID;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_GetBannerColorFromRowName_ReturnValue = CallFunc_GetBannerColorFromRowName_ReturnValue;
	Parms.CallFunc_GetBannerMID_BannerMID2 = CallFunc_GetBannerMID_BannerMID2;
	Parms.CallFunc_GetSecondaryColor_ReturnValue = CallFunc_GetSecondaryColor_ReturnValue;
	Parms.CallFunc_GetPrimaryColor_ReturnValue = CallFunc_GetPrimaryColor_ReturnValue;
	Parms.CallFunc_NotEqual_NameName_ReturnValue2 = CallFunc_NotEqual_NameName_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerBanner.PlayerBanner_C.SetBannerIconId
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        InBannerIconId                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_Option_B___If_false__use_Option_A_Variable             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSoftObjectPtr<class UTexture2D>   CallFunc_GetBannerSmallIconAssetFromRowName_ReturnValue          (HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   CallFunc_GetBannerLargeIconAssetFromRowName_ReturnValue          (HasGetValueTypeHash)
// TSoftObjectPtr<class UObject>      K2Node_Select_Default                                            (HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetBannerMID_BannerMID                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue2                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerBanner_C::SetBannerIconId(class FName InBannerIconId, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Option_B___If_false__use_Option_A_Variable, bool CallFunc_NotEqual_NameName_ReturnValue, bool Temp_bool_Variable, TSoftObjectPtr<class UTexture2D> CallFunc_GetBannerSmallIconAssetFromRowName_ReturnValue, TSoftObjectPtr<class UTexture2D> CallFunc_GetBannerLargeIconAssetFromRowName_ReturnValue, TSoftObjectPtr<class UObject> K2Node_Select_Default, class UMaterialInstanceDynamic* CallFunc_GetBannerMID_BannerMID, bool CallFunc_NotEqual_NameName_ReturnValue2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerBanner_C", "SetBannerIconId");

	Params::UPlayerBanner_C_SetBannerIconId_Params Parms{};

	Parms.InBannerIconId = InBannerIconId;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_bool_Option_B___If_false__use_Option_A_Variable = Temp_bool_Option_B___If_false__use_Option_A_Variable;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetBannerSmallIconAssetFromRowName_ReturnValue = CallFunc_GetBannerSmallIconAssetFromRowName_ReturnValue;
	Parms.CallFunc_GetBannerLargeIconAssetFromRowName_ReturnValue = CallFunc_GetBannerLargeIconAssetFromRowName_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetBannerMID_BannerMID = CallFunc_GetBannerMID_BannerMID;
	Parms.CallFunc_NotEqual_NameName_ReturnValue2 = CallFunc_NotEqual_NameName_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerBanner.PlayerBanner_C.SetBannerImage
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortHomeBaseInfo           Image_info                                                       (Parm)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerBanner_C::SetBannerImage(const struct FFortHomeBaseInfo& Image_info, bool* Success, class FName CallFunc_Conv_StringToName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerBanner_C", "SetBannerImage");

	Params::UPlayerBanner_C_SetBannerImage_Params Parms{};

	Parms.Image_info = Image_info;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue2 = CallFunc_Conv_StringToName_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function PlayerBanner.PlayerBanner_C.OnTeamMemberStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo         TeamMemberInfo                                                   (Parm)

void UPlayerBanner_C::OnTeamMemberStateChanged(const struct FFortTeamMemberInfo& TeamMemberInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerBanner_C", "OnTeamMemberStateChanged");

	Params::UPlayerBanner_C_OnTeamMemberStateChanged_Params Parms{};

	Parms.TeamMemberInfo = TeamMemberInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerBanner.PlayerBanner_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerBanner_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerBanner_C", "PreConstruct");

	Params::UPlayerBanner_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerBanner.PlayerBanner_C.ExecuteUbergraph_PlayerBanner
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_UniqueNetIdRepl_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortTeamMemberInfo         K2Node_CustomEvent_TeamMemberInfo                                (None)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetBannerImage_Success                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_UniqueNetIdReplUniqueNetIdRepl_ReturnValue   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerBanner_C::ExecuteUbergraph_PlayerBanner(int32 EntryPoint, bool CallFunc_IsValid_UniqueNetIdRepl_ReturnValue, const struct FFortTeamMemberInfo& K2Node_CustomEvent_TeamMemberInfo, bool K2Node_Event_IsDesignTime, bool CallFunc_SetBannerImage_Success, bool CallFunc_EqualEqual_UniqueNetIdReplUniqueNetIdRepl_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerBanner_C", "ExecuteUbergraph_PlayerBanner");

	Params::UPlayerBanner_C_ExecuteUbergraph_PlayerBanner_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_UniqueNetIdRepl_ReturnValue = CallFunc_IsValid_UniqueNetIdRepl_ReturnValue;
	Parms.K2Node_CustomEvent_TeamMemberInfo = K2Node_CustomEvent_TeamMemberInfo;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_SetBannerImage_Success = CallFunc_SetBannerImage_Success;
	Parms.CallFunc_EqualEqual_UniqueNetIdReplUniqueNetIdRepl_ReturnValue = CallFunc_EqualEqual_UniqueNetIdReplUniqueNetIdRepl_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


