#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x90 (0x180 - 0xF0)
// Class UACCommon.UACNetComponent
class UUACNetComponent : public UActorComponent
{
public:
	int32                                        PlayerID;                                          // 0xF0(0x4)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F32[0x8C];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UUACNetComponent* GetDefaultObj();

	void SendPacketToServer(enum class EUACPacketType Type, TArray<uint8>& Packet);
	void SendPacketToClient(enum class EUACPacketType Type, TArray<uint8>& Packet);
	void SendClientHello();
};

}


