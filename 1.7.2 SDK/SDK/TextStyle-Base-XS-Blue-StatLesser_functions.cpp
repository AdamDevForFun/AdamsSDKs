#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Base-XS-Blue-StatLesser.TextStyle-Base-XS-Blue-StatLesser_C
// (None)

class UClass* UTextStyleMinusBaseMinusXSMinusBlueMinusStatLesser_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Base-XS-Blue-StatLesser_C");

	return Clss;
}


// TextStyle-Base-XS-Blue-StatLesser_C TextStyle-Base-XS-Blue-StatLesser.Default__TextStyle-Base-XS-Blue-StatLesser_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusBaseMinusXSMinusBlueMinusStatLesser_C* UTextStyleMinusBaseMinusXSMinusBlueMinusStatLesser_C::GetDefaultObj()
{
	static class UTextStyleMinusBaseMinusXSMinusBlueMinusStatLesser_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusBaseMinusXSMinusBlueMinusStatLesser_C*>(UTextStyleMinusBaseMinusXSMinusBlueMinusStatLesser_C::StaticClass()->DefaultObject);

	return Default;
}

}


