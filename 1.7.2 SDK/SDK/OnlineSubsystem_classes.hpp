#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x98 (0xC0 - 0x28)
// Class OnlineSubsystem.NamedInterfaces
class UNamedInterfaces : public UObject
{
public:
	TArray<struct FNamedInterface>               NamedInterfaces;                                   // 0x28(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FNamedInterfaceDef>            NamedInterfaceDefs;                                // 0x38(0x10)(ZeroConstructor, Config, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1ED5[0x78];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UNamedInterfaces* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class OnlineSubsystem.TurnBasedMatchInterface
class ITurnBasedMatchInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ITurnBasedMatchInterface* GetDefaultObj();

	void OnMatchReceivedTurn(const class FString& Match, bool bDidBecomeActive);
	void OnMatchEnded(const class FString& Match);
};

}


