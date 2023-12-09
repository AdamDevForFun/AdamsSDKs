#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_Post_Explosion_Generic.B_Post_Explosion_Generic_C
// (Actor)

class UClass* AB_Post_Explosion_Generic_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_Post_Explosion_Generic_C");

	return Clss;
}


// B_Post_Explosion_Generic_C B_Post_Explosion_Generic.Default__B_Post_Explosion_Generic_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AB_Post_Explosion_Generic_C* AB_Post_Explosion_Generic_C::GetDefaultObj()
{
	static class AB_Post_Explosion_Generic_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AB_Post_Explosion_Generic_C*>(AB_Post_Explosion_Generic_C::StaticClass()->DefaultObject);

	return Default;
}


// Function B_Post_Explosion_Generic.B_Post_Explosion_Generic_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_Post_Explosion_Generic_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Post_Explosion_Generic_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}

}


