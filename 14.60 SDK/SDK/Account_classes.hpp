#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x38 - 0x28)
// Class Account.ExternalAccountProvider
class UExternalAccountProvider : public UObject
{
public:
	TArray<struct FExternalAccountServiceConfig> Services;                                          // 0x28(0x10)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UExternalAccountProvider* GetDefaultObj();

};

// 0x728 (0x750 - 0x28)
// Class Account.OnlineAccountCommon
class UOnlineAccountCommon : public UObject
{
public:
	uint8                                        Pad_35FB[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                AvailabilityServiceGameName;                       // 0x38(0x10)(ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bRequireLightswitchAtStartup;                      // 0x48(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_35FC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                EulaKey;                                           // 0x50(0x10)(ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TMap<class FString, class FString>           EulaKeyMapping;                                    // 0x60(0x50)(Config, Protected, NativeAccessSpecifierProtected)
	bool                                         bEnableWaitingRoom;                                // 0xB0(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_35FD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FWebEnvUrl>                    WebCreateEpicAccountUrl;                           // 0xB8(0x10)(ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bAllowLocalLogout;                                 // 0xC8(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bAllowLocalLogoutKairos;                           // 0xC9(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3600[0x36];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                RedeemAccessUrl;                                   // 0x100(0x10)(ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                RequestFreeAccessUrl;                              // 0x110(0x10)(ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                RealGameAccessUrl;                                 // 0x120(0x10)(ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        SkipRedeemOfflinePurchasesChance;                  // 0x130(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bUseFreeAccessInsteadOfGameAccess;                 // 0x134(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bShouldGrantFreeAccess;                            // 0x135(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3601[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bAllowHomeSharingAccess;                           // 0x137(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bRequireUGCPrivilege;                              // 0x138(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3602[0x29F];                                   // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AccessGrantDelaySeconds;                           // 0x3D8(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3603[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWaitingRoomState*                     WaitingRoomState;                                  // 0x3E0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3604[0x330];                                   // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bAutoCreateHeadlessAccount;                        // 0x718(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3605[0x37];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UOnlineAccountCommon* GetDefaultObj();

};

// 0x60 (0x88 - 0x28)
// Class Account.WaitingRoomState
class UWaitingRoomState : public UObject
{
public:
	uint8                                        Pad_3607[0x34];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        GracePeriodMins;                                   // 0x5C(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3608[0x28];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UWaitingRoomState* GetDefaultObj();

};

}


