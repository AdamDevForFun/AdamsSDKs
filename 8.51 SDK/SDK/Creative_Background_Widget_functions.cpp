#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Creative_Background_Widget.Creative_Background_Widget_C
// (None)

class UClass* UCreative_Background_Widget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Creative_Background_Widget_C");

	return Clss;
}


// Creative_Background_Widget_C Creative_Background_Widget.Default__Creative_Background_Widget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCreative_Background_Widget_C* UCreative_Background_Widget_C::GetDefaultObj()
{
	static class UCreative_Background_Widget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCreative_Background_Widget_C*>(UCreative_Background_Widget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Creative_Background_Widget.Creative_Background_Widget_C.SetTextColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                TextColor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)

void UCreative_Background_Widget_C::SetTextColor(const struct FLinearColor& TextColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Creative_Background_Widget_C", "SetTextColor");

	Params::UCreative_Background_Widget_C_SetTextColor_Params Parms{};

	Parms.TextColor = TextColor;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Creative_Background_Widget.Creative_Background_Widget_C.SetTextAlignment
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ETextJustify            Alignment                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCreative_Background_Widget_C::SetTextAlignment(enum class ETextJustify Alignment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Creative_Background_Widget_C", "SetTextAlignment");

	Params::UCreative_Background_Widget_C_SetTextAlignment_Params Parms{};

	Parms.Alignment = Alignment;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Creative_Background_Widget.Creative_Background_Widget_C.SetTextScale
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              FontSize                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateFontInfo              K2Node_MakeStruct_SlateFontInfo                                  (HasGetValueTypeHash)

void UCreative_Background_Widget_C::SetTextScale(int32 FontSize, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Creative_Background_Widget_C", "SetTextScale");

	Params::UCreative_Background_Widget_C_SetTextScale_Params Parms{};

	Parms.FontSize = FontSize;
	Parms.K2Node_MakeStruct_SlateFontInfo = K2Node_MakeStruct_SlateFontInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Creative_Background_Widget.Creative_Background_Widget_C.SetBackgroundColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Color                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCreative_Background_Widget_C::SetBackgroundColor(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Creative_Background_Widget_C", "SetBackgroundColor");

	Params::UCreative_Background_Widget_C_SetBackgroundColor_Params Parms{};

	Parms.Color = Color;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Creative_Background_Widget.Creative_Background_Widget_C.SetText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UCreative_Background_Widget_C::SetText(const class FString& Text, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Creative_Background_Widget_C", "SetText");

	Params::UCreative_Background_Widget_C_SetText_Params Parms{};

	Parms.Text = Text;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Creative_Background_Widget.Creative_Background_Widget_C.ExecuteUbergraph_Creative_Background_Widget
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCreative_Background_Widget_C::ExecuteUbergraph_Creative_Background_Widget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Creative_Background_Widget_C", "ExecuteUbergraph_Creative_Background_Widget");

	Params::UCreative_Background_Widget_C_ExecuteUbergraph_Creative_Background_Widget_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


