#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TheaterMapViewer.TheaterMapViewer_C
// (Actor)

class UClass* ATheaterMapViewer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TheaterMapViewer_C");

	return Clss;
}


// TheaterMapViewer_C TheaterMapViewer.Default__TheaterMapViewer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATheaterMapViewer_C* ATheaterMapViewer_C::GetDefaultObj()
{
	static class ATheaterMapViewer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATheaterMapViewer_C*>(ATheaterMapViewer_C::StaticClass()->DefaultObject);

	return Default;
}


// Function TheaterMapViewer.TheaterMapViewer_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ATheaterMapViewer_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TheaterMapViewer_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}

}


