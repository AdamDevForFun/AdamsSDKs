#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Base-XS-Blue-StatNormal.TextStyle-Base-XS-Blue-StatNormal_C
// (None)

class UClass* UTextStyleMinusBaseMinusXSMinusBlueMinusStatNormal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Base-XS-Blue-StatNormal_C");

	return Clss;
}


// TextStyle-Base-XS-Blue-StatNormal_C TextStyle-Base-XS-Blue-StatNormal.Default__TextStyle-Base-XS-Blue-StatNormal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusBaseMinusXSMinusBlueMinusStatNormal_C* UTextStyleMinusBaseMinusXSMinusBlueMinusStatNormal_C::GetDefaultObj()
{
	static class UTextStyleMinusBaseMinusXSMinusBlueMinusStatNormal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusBaseMinusXSMinusBlueMinusStatNormal_C*>(UTextStyleMinusBaseMinusXSMinusBlueMinusStatNormal_C::StaticClass()->DefaultObject);

	return Default;
}

}


