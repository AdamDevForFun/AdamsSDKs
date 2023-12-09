#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Frontend_Lobby.Frontend_Lobby_C
// (Actor)

class UClass* AFrontend_Lobby_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Frontend_Lobby_C");

	return Clss;
}


// Frontend_Lobby_C Frontend_Lobby.Default__Frontend_Lobby_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AFrontend_Lobby_C* AFrontend_Lobby_C::GetDefaultObj()
{
	static class AFrontend_Lobby_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AFrontend_Lobby_C*>(AFrontend_Lobby_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Frontend_Lobby.Frontend_Lobby_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AFrontend_Lobby_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Frontend_Lobby_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Frontend_Lobby.Frontend_Lobby_C.ExecuteUbergraph_Frontend_Lobby
// (None)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFrontend_Lobby_C::ExecuteUbergraph_Frontend_Lobby(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Frontend_Lobby_C", "ExecuteUbergraph_Frontend_Lobby");

	Params::AFrontend_Lobby_C_ExecuteUbergraph_Frontend_Lobby_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


