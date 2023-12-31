#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass TabAudioOptions.TabAudioOptions_C
// (None)

class UClass* UTabAudioOptions_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TabAudioOptions_C");

	return Clss;
}


// TabAudioOptions_C TabAudioOptions.Default__TabAudioOptions_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTabAudioOptions_C* UTabAudioOptions_C::GetDefaultObj()
{
	static class UTabAudioOptions_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTabAudioOptions_C*>(UTabAudioOptions_C::StaticClass()->DefaultObject);

	return Default;
}


// Function TabAudioOptions.TabAudioOptions_C.InitializeData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPS4Platform_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsXboxPlatform_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// TArray<class FText>                K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_MakeLiteralText_ReturnValue2                            (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue3                            (None)
// TArray<class FText>                K2Node_MakeArray_Array2                                          (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_MakeLiteralText_ReturnValue4                            (None)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ShowChatVolume_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ShowQuality_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_MakeLiteralText_ReturnValue5                            (None)
// TArray<class FText>                K2Node_MakeArray_Array3                                          (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_MakeLiteralText_ReturnValue6                            (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue7                            (None)
// TArray<class FText>                K2Node_MakeArray_Array4                                          (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_MakeLiteralText_ReturnValue8                            (None)

void UTabAudioOptions_C::InitializeData(enum class ESlateVisibility Temp_byte_Variable, bool CallFunc_IsPS4Platform_ReturnValue, bool CallFunc_IsXboxPlatform_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue, TArray<class FText>& K2Node_MakeArray_Array, class FText CallFunc_MakeLiteralText_ReturnValue2, class FText CallFunc_MakeLiteralText_ReturnValue3, TArray<class FText>& K2Node_MakeArray_Array2, class FText CallFunc_MakeLiteralText_ReturnValue4, enum class ESlateVisibility Temp_byte_Variable2, bool CallFunc_ShowChatVolume_ReturnValue, bool CallFunc_ShowQuality_ReturnValue, bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select_Default, class FText CallFunc_MakeLiteralText_ReturnValue5, TArray<class FText>& K2Node_MakeArray_Array3, class FText CallFunc_MakeLiteralText_ReturnValue6, class FText CallFunc_MakeLiteralText_ReturnValue7, TArray<class FText>& K2Node_MakeArray_Array4, class FText CallFunc_MakeLiteralText_ReturnValue8)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TabAudioOptions_C", "InitializeData");

	Params::UTabAudioOptions_C_InitializeData_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_IsPS4Platform_ReturnValue = CallFunc_IsPS4Platform_ReturnValue;
	Parms.CallFunc_IsXboxPlatform_ReturnValue = CallFunc_IsXboxPlatform_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_MakeLiteralText_ReturnValue2 = CallFunc_MakeLiteralText_ReturnValue2;
	Parms.CallFunc_MakeLiteralText_ReturnValue3 = CallFunc_MakeLiteralText_ReturnValue3;
	Parms.K2Node_MakeArray_Array2 = K2Node_MakeArray_Array2;
	Parms.CallFunc_MakeLiteralText_ReturnValue4 = CallFunc_MakeLiteralText_ReturnValue4;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.CallFunc_ShowChatVolume_ReturnValue = CallFunc_ShowChatVolume_ReturnValue;
	Parms.CallFunc_ShowQuality_ReturnValue = CallFunc_ShowQuality_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_MakeLiteralText_ReturnValue5 = CallFunc_MakeLiteralText_ReturnValue5;
	Parms.K2Node_MakeArray_Array3 = K2Node_MakeArray_Array3;
	Parms.CallFunc_MakeLiteralText_ReturnValue6 = CallFunc_MakeLiteralText_ReturnValue6;
	Parms.CallFunc_MakeLiteralText_ReturnValue7 = CallFunc_MakeLiteralText_ReturnValue7;
	Parms.K2Node_MakeArray_Array4 = K2Node_MakeArray_Array4;
	Parms.CallFunc_MakeLiteralText_ReturnValue8 = CallFunc_MakeLiteralText_ReturnValue8;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabAudioOptions.TabAudioOptions_C.Update Data
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable2                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable3                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable4                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetVoiceChatPTTEnabled_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetVoiceChatEnabled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetQuality_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue2                            (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue3                            (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue4                            (None)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetSubtitlesEnabled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetChatVolumeValue_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDialogVolumeValue_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetSoundFXVolumeValue_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMusicVolumeValue_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue5                            (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue6                            (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue7                            (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue8                            (None)

void UTabAudioOptions_C::Update_Data(int32 Temp_int_Variable, int32 Temp_int_Variable2, bool Temp_bool_Variable, int32 Temp_int_Variable3, int32 Temp_int_Variable4, bool CallFunc_GetVoiceChatPTTEnabled_ReturnValue, bool CallFunc_GetVoiceChatEnabled_ReturnValue, int32 CallFunc_GetQuality_ReturnValue, int32 K2Node_Select_Default, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue2, class FText CallFunc_MakeLiteralText_ReturnValue3, class FText CallFunc_MakeLiteralText_ReturnValue4, bool Temp_bool_Variable2, bool CallFunc_GetSubtitlesEnabled_ReturnValue, int32 K2Node_Select2_Default, int32 CallFunc_Conv_BoolToInt_ReturnValue, float CallFunc_GetChatVolumeValue_ReturnValue, float CallFunc_GetDialogVolumeValue_ReturnValue, float CallFunc_GetSoundFXVolumeValue_ReturnValue, float CallFunc_GetMusicVolumeValue_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue5, class FText CallFunc_MakeLiteralText_ReturnValue6, class FText CallFunc_MakeLiteralText_ReturnValue7, class FText CallFunc_MakeLiteralText_ReturnValue8)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TabAudioOptions_C", "Update Data");

	Params::UTabAudioOptions_C_Update_Data_Params Parms{};

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable2 = Temp_int_Variable2;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Variable3 = Temp_int_Variable3;
	Parms.Temp_int_Variable4 = Temp_int_Variable4;
	Parms.CallFunc_GetVoiceChatPTTEnabled_ReturnValue = CallFunc_GetVoiceChatPTTEnabled_ReturnValue;
	Parms.CallFunc_GetVoiceChatEnabled_ReturnValue = CallFunc_GetVoiceChatEnabled_ReturnValue;
	Parms.CallFunc_GetQuality_ReturnValue = CallFunc_GetQuality_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue2 = CallFunc_MakeLiteralText_ReturnValue2;
	Parms.CallFunc_MakeLiteralText_ReturnValue3 = CallFunc_MakeLiteralText_ReturnValue3;
	Parms.CallFunc_MakeLiteralText_ReturnValue4 = CallFunc_MakeLiteralText_ReturnValue4;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.CallFunc_GetSubtitlesEnabled_ReturnValue = CallFunc_GetSubtitlesEnabled_ReturnValue;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue = CallFunc_Conv_BoolToInt_ReturnValue;
	Parms.CallFunc_GetChatVolumeValue_ReturnValue = CallFunc_GetChatVolumeValue_ReturnValue;
	Parms.CallFunc_GetDialogVolumeValue_ReturnValue = CallFunc_GetDialogVolumeValue_ReturnValue;
	Parms.CallFunc_GetSoundFXVolumeValue_ReturnValue = CallFunc_GetSoundFXVolumeValue_ReturnValue;
	Parms.CallFunc_GetMusicVolumeValue_ReturnValue = CallFunc_GetMusicVolumeValue_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue5 = CallFunc_MakeLiteralText_ReturnValue5;
	Parms.CallFunc_MakeLiteralText_ReturnValue6 = CallFunc_MakeLiteralText_ReturnValue6;
	Parms.CallFunc_MakeLiteralText_ReturnValue7 = CallFunc_MakeLiteralText_ReturnValue7;
	Parms.CallFunc_MakeLiteralText_ReturnValue8 = CallFunc_MakeLiteralText_ReturnValue8;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabAudioOptions.TabAudioOptions_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UTabAudioOptions_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TabAudioOptions_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TabAudioOptions.TabAudioOptions_C.UpdateOptionsTab
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTabAudioOptions_C::UpdateOptionsTab()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TabAudioOptions_C", "UpdateOptionsTab");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TabAudioOptions.TabAudioOptions_C.BndEvt__SoundFXVolume_K2Node_ComponentBoundEvent_0_SliderChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              Slider_Value                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabAudioOptions_C::BndEvt__SoundFXVolume_K2Node_ComponentBoundEvent_0_SliderChanged__DelegateSignature(float Slider_Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TabAudioOptions_C", "BndEvt__SoundFXVolume_K2Node_ComponentBoundEvent_0_SliderChanged__DelegateSignature");

	Params::UTabAudioOptions_C_BndEvt__SoundFXVolume_K2Node_ComponentBoundEvent_0_SliderChanged__DelegateSignature_Params Parms{};

	Parms.Slider_Value = Slider_Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabAudioOptions.TabAudioOptions_C.BndEvt__MusicVolume_K2Node_ComponentBoundEvent_2_SliderChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              Slider_Value                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabAudioOptions_C::BndEvt__MusicVolume_K2Node_ComponentBoundEvent_2_SliderChanged__DelegateSignature(float Slider_Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TabAudioOptions_C", "BndEvt__MusicVolume_K2Node_ComponentBoundEvent_2_SliderChanged__DelegateSignature");

	Params::UTabAudioOptions_C_BndEvt__MusicVolume_K2Node_ComponentBoundEvent_2_SliderChanged__DelegateSignature_Params Parms{};

	Parms.Slider_Value = Slider_Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabAudioOptions.TabAudioOptions_C.BndEvt__DialogVolume_K2Node_ComponentBoundEvent_11_SliderChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              Slider_Value                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabAudioOptions_C::BndEvt__DialogVolume_K2Node_ComponentBoundEvent_11_SliderChanged__DelegateSignature(float Slider_Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TabAudioOptions_C", "BndEvt__DialogVolume_K2Node_ComponentBoundEvent_11_SliderChanged__DelegateSignature");

	Params::UTabAudioOptions_C_BndEvt__DialogVolume_K2Node_ComponentBoundEvent_11_SliderChanged__DelegateSignature_Params Parms{};

	Parms.Slider_Value = Slider_Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabAudioOptions.TabAudioOptions_C.BndEvt__ChatVolume_K2Node_ComponentBoundEvent_15_SliderChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              Slider_Value                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabAudioOptions_C::BndEvt__ChatVolume_K2Node_ComponentBoundEvent_15_SliderChanged__DelegateSignature(float Slider_Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TabAudioOptions_C", "BndEvt__ChatVolume_K2Node_ComponentBoundEvent_15_SliderChanged__DelegateSignature");

	Params::UTabAudioOptions_C_BndEvt__ChatVolume_K2Node_ComponentBoundEvent_15_SliderChanged__DelegateSignature_Params Parms{};

	Parms.Slider_Value = Slider_Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabAudioOptions.TabAudioOptions_C.CenterOnTab
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTabAudioOptions_C::CenterOnTab()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TabAudioOptions_C", "CenterOnTab");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TabAudioOptions.TabAudioOptions_C.BndEvt__Subtitles_K2Node_ComponentBoundEvent_45_Selection Changed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Selected_Index                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabAudioOptions_C::BndEvt__Subtitles_K2Node_ComponentBoundEvent_45_Selection_Changed__DelegateSignature(int32 Selected_Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TabAudioOptions_C", "BndEvt__Subtitles_K2Node_ComponentBoundEvent_45_Selection Changed__DelegateSignature");

	Params::UTabAudioOptions_C_BndEvt__Subtitles_K2Node_ComponentBoundEvent_45_Selection_Changed__DelegateSignature_Params Parms{};

	Parms.Selected_Index = Selected_Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabAudioOptions.TabAudioOptions_C.BndEvt__Quality_K2Node_ComponentBoundEvent_43_Selection Changed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Selected_Index                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabAudioOptions_C::BndEvt__Quality_K2Node_ComponentBoundEvent_43_Selection_Changed__DelegateSignature(int32 Selected_Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TabAudioOptions_C", "BndEvt__Quality_K2Node_ComponentBoundEvent_43_Selection Changed__DelegateSignature");

	Params::UTabAudioOptions_C_BndEvt__Quality_K2Node_ComponentBoundEvent_43_Selection_Changed__DelegateSignature_Params Parms{};

	Parms.Selected_Index = Selected_Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabAudioOptions.TabAudioOptions_C.BndEvt__VoiceChatEnable_K2Node_ComponentBoundEvent_18_Selection Changed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Selected_Index                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabAudioOptions_C::BndEvt__VoiceChatEnable_K2Node_ComponentBoundEvent_18_Selection_Changed__DelegateSignature(int32 Selected_Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TabAudioOptions_C", "BndEvt__VoiceChatEnable_K2Node_ComponentBoundEvent_18_Selection Changed__DelegateSignature");

	Params::UTabAudioOptions_C_BndEvt__VoiceChatEnable_K2Node_ComponentBoundEvent_18_Selection_Changed__DelegateSignature_Params Parms{};

	Parms.Selected_Index = Selected_Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabAudioOptions.TabAudioOptions_C.BndEvt__VoiceChatPushToTalk_K2Node_ComponentBoundEvent_36_Selection Changed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Selected_Index                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabAudioOptions_C::BndEvt__VoiceChatPushToTalk_K2Node_ComponentBoundEvent_36_Selection_Changed__DelegateSignature(int32 Selected_Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TabAudioOptions_C", "BndEvt__VoiceChatPushToTalk_K2Node_ComponentBoundEvent_36_Selection Changed__DelegateSignature");

	Params::UTabAudioOptions_C_BndEvt__VoiceChatPushToTalk_K2Node_ComponentBoundEvent_36_Selection_Changed__DelegateSignature_Params Parms{};

	Parms.Selected_Index = Selected_Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabAudioOptions.TabAudioOptions_C.ExecuteUbergraph_TabAudioOptions
// (None)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Selected_Index                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Conv_IntToBool_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_ComponentBoundEvent_Slider_Value4                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_Slider_Value3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_Slider_Value2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_Slider_Value                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Selected_Index4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Conv_IntToBool_ReturnValue2                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_ComponentBoundEvent_Selected_Index3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Selected_Index2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Conv_IntToBool_ReturnValue3                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void UTabAudioOptions_C::ExecuteUbergraph_TabAudioOptions(int32 EntryPoint, int32 K2Node_ComponentBoundEvent_Selected_Index, bool CallFunc_Conv_IntToBool_ReturnValue, float K2Node_ComponentBoundEvent_Slider_Value4, float K2Node_ComponentBoundEvent_Slider_Value3, float K2Node_ComponentBoundEvent_Slider_Value2, float K2Node_ComponentBoundEvent_Slider_Value, int32 K2Node_ComponentBoundEvent_Selected_Index4, bool CallFunc_Conv_IntToBool_ReturnValue2, int32 K2Node_ComponentBoundEvent_Selected_Index3, int32 K2Node_ComponentBoundEvent_Selected_Index2, bool CallFunc_Conv_IntToBool_ReturnValue3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TabAudioOptions_C", "ExecuteUbergraph_TabAudioOptions");

	Params::UTabAudioOptions_C_ExecuteUbergraph_TabAudioOptions_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Selected_Index = K2Node_ComponentBoundEvent_Selected_Index;
	Parms.CallFunc_Conv_IntToBool_ReturnValue = CallFunc_Conv_IntToBool_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Slider_Value4 = K2Node_ComponentBoundEvent_Slider_Value4;
	Parms.K2Node_ComponentBoundEvent_Slider_Value3 = K2Node_ComponentBoundEvent_Slider_Value3;
	Parms.K2Node_ComponentBoundEvent_Slider_Value2 = K2Node_ComponentBoundEvent_Slider_Value2;
	Parms.K2Node_ComponentBoundEvent_Slider_Value = K2Node_ComponentBoundEvent_Slider_Value;
	Parms.K2Node_ComponentBoundEvent_Selected_Index4 = K2Node_ComponentBoundEvent_Selected_Index4;
	Parms.CallFunc_Conv_IntToBool_ReturnValue2 = CallFunc_Conv_IntToBool_ReturnValue2;
	Parms.K2Node_ComponentBoundEvent_Selected_Index3 = K2Node_ComponentBoundEvent_Selected_Index3;
	Parms.K2Node_ComponentBoundEvent_Selected_Index2 = K2Node_ComponentBoundEvent_Selected_Index2;
	Parms.CallFunc_Conv_IntToBool_ReturnValue3 = CallFunc_Conv_IntToBool_ReturnValue3;

	UObject::ProcessEvent(Func, &Parms);

}

}


