#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class UACCommon.UACNetComponent
// (None)

class UClass* UUACNetComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UACNetComponent");

	return Clss;
}


// UACNetComponent UACCommon.Default__UACNetComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UUACNetComponent* UUACNetComponent::GetDefaultObj()
{
	static class UUACNetComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UUACNetComponent*>(UUACNetComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function UACCommon.UACNetComponent.SendPacketToServer
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// enum class EUACPacketType          Type                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<uint8>                      Packet                                                           (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UUACNetComponent::SendPacketToServer(enum class EUACPacketType Type, TArray<uint8>& Packet)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UACNetComponent", "SendPacketToServer");

	Params::UUACNetComponent_SendPacketToServer_Params Parms{};

	Parms.Type = Type;
	Parms.Packet = Packet;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UACCommon.UACNetComponent.SendPacketToClient
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// enum class EUACPacketType          Type                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<uint8>                      Packet                                                           (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UUACNetComponent::SendPacketToClient(enum class EUACPacketType Type, TArray<uint8>& Packet)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UACNetComponent", "SendPacketToClient");

	Params::UUACNetComponent_SendPacketToClient_Params Parms{};

	Parms.Type = Type;
	Parms.Packet = Packet;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UACCommon.UACNetComponent.SendClientHello
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:

void UUACNetComponent::SendClientHello()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UACNetComponent", "SendClientHello");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}

}


