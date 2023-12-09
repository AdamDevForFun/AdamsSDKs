#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HeroNotificationHandler.HeroNotificationHandler_C
// (None)

class UClass* UHeroNotificationHandler_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HeroNotificationHandler_C");

	return Clss;
}


// HeroNotificationHandler_C HeroNotificationHandler.Default__HeroNotificationHandler_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHeroNotificationHandler_C* UHeroNotificationHandler_C::GetDefaultObj()
{
	static class UHeroNotificationHandler_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHeroNotificationHandler_C*>(UHeroNotificationHandler_C::StaticClass()->DefaultObject);

	return Default;
}


// Function HeroNotificationHandler.HeroNotificationHandler_C.CreateWidget
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           OwningPlayer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStickyNotification_C*       CallFunc_Create_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UUserWidget* UHeroNotificationHandler_C::CreateWidget(class APlayerController* OwningPlayer, class UStickyNotification_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeroNotificationHandler_C", "CreateWidget");

	Params::UHeroNotificationHandler_C_CreateWidget_Params Parms{};

	Parms.OwningPlayer = OwningPlayer;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


