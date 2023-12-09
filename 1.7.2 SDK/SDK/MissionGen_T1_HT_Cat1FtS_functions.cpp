#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionGen_T1_HT_Cat1FtS.MissionGen_T1_HT_Cat1FtS_C
// (None)

class UClass* UMissionGen_T1_HT_Cat1FtS_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionGen_T1_HT_Cat1FtS_C");

	return Clss;
}


// MissionGen_T1_HT_Cat1FtS_C MissionGen_T1_HT_Cat1FtS.Default__MissionGen_T1_HT_Cat1FtS_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionGen_T1_HT_Cat1FtS_C* UMissionGen_T1_HT_Cat1FtS_C::GetDefaultObj()
{
	static class UMissionGen_T1_HT_Cat1FtS_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionGen_T1_HT_Cat1FtS_C*>(UMissionGen_T1_HT_Cat1FtS_C::StaticClass()->DefaultObject);

	return Default;
}

}


