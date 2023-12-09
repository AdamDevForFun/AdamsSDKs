#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NeoTilted_Bench_01.NeoTilted_Bench_01_C
// (Actor)

class UClass* ANeoTilted_Bench_01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NeoTilted_Bench_01_C");

	return Clss;
}


// NeoTilted_Bench_01_C NeoTilted_Bench_01.Default__NeoTilted_Bench_01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ANeoTilted_Bench_01_C* ANeoTilted_Bench_01_C::GetDefaultObj()
{
	static class ANeoTilted_Bench_01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ANeoTilted_Bench_01_C*>(ANeoTilted_Bench_01_C::StaticClass()->DefaultObject);

	return Default;
}

}


