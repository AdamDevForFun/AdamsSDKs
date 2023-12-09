#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_CameraRainDrops_01.B_CameraRainDrops_01_C
// (Actor)

class UClass* AB_CameraRainDrops_01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_CameraRainDrops_01_C");

	return Clss;
}


// B_CameraRainDrops_01_C B_CameraRainDrops_01.Default__B_CameraRainDrops_01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AB_CameraRainDrops_01_C* AB_CameraRainDrops_01_C::GetDefaultObj()
{
	static class AB_CameraRainDrops_01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AB_CameraRainDrops_01_C*>(AB_CameraRainDrops_01_C::StaticClass()->DefaultObject);

	return Default;
}


// Function B_CameraRainDrops_01.B_CameraRainDrops_01_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_CameraRainDrops_01_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_CameraRainDrops_01_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_CameraRainDrops_01.B_CameraRainDrops_01_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AB_CameraRainDrops_01_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_CameraRainDrops_01_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_CameraRainDrops_01.B_CameraRainDrops_01_C.ExecuteUbergraph_B_CameraRainDrops_01
// (None)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_CameraRainDrops_01_C::ExecuteUbergraph_B_CameraRainDrops_01(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_CameraRainDrops_01_C", "ExecuteUbergraph_B_CameraRainDrops_01");

	Params::AB_CameraRainDrops_01_C_ExecuteUbergraph_B_CameraRainDrops_01_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


