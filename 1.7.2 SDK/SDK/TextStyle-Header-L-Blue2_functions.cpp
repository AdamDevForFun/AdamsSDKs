#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Header-L-Blue2.TextStyle-Header-L-Blue2_C
// (None)

class UClass* UTextStyleMinusHeaderMinusLMinusBlue2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Header-L-Blue2_C");

	return Clss;
}


// TextStyle-Header-L-Blue2_C TextStyle-Header-L-Blue2.Default__TextStyle-Header-L-Blue2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusHeaderMinusLMinusBlue2_C* UTextStyleMinusHeaderMinusLMinusBlue2_C::GetDefaultObj()
{
	static class UTextStyleMinusHeaderMinusLMinusBlue2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusHeaderMinusLMinusBlue2_C*>(UTextStyleMinusHeaderMinusLMinusBlue2_C::StaticClass()->DefaultObject);

	return Default;
}

}


