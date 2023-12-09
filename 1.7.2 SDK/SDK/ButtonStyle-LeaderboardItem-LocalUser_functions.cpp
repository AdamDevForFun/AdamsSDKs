#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-LeaderboardItem-LocalUser.ButtonStyle-LeaderboardItem-LocalUser_C
// (None)

class UClass* UButtonStyleMinusLeaderboardItemMinusLocalUser_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-LeaderboardItem-LocalUser_C");

	return Clss;
}


// ButtonStyle-LeaderboardItem-LocalUser_C ButtonStyle-LeaderboardItem-LocalUser.Default__ButtonStyle-LeaderboardItem-LocalUser_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusLeaderboardItemMinusLocalUser_C* UButtonStyleMinusLeaderboardItemMinusLocalUser_C::GetDefaultObj()
{
	static class UButtonStyleMinusLeaderboardItemMinusLocalUser_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusLeaderboardItemMinusLocalUser_C*>(UButtonStyleMinusLeaderboardItemMinusLocalUser_C::StaticClass()->DefaultObject);

	return Default;
}

}


