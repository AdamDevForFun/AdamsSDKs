#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Tracer_GoingCommando_02.Tracer_GoingCommando_02_C
// (Actor)

class UClass* ATracer_GoingCommando_02_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Tracer_GoingCommando_02_C");

	return Clss;
}


// Tracer_GoingCommando_02_C Tracer_GoingCommando_02.Default__Tracer_GoingCommando_02_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATracer_GoingCommando_02_C* ATracer_GoingCommando_02_C::GetDefaultObj()
{
	static class ATracer_GoingCommando_02_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATracer_GoingCommando_02_C*>(ATracer_GoingCommando_02_C::StaticClass()->DefaultObject);

	return Default;
}

}


