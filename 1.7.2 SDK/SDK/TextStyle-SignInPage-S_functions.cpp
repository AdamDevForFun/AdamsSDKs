#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-SignInPage-S.TextStyle-SignInPage-S_C
// (None)

class UClass* UTextStyleMinusSignInPageMinusS_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-SignInPage-S_C");

	return Clss;
}


// TextStyle-SignInPage-S_C TextStyle-SignInPage-S.Default__TextStyle-SignInPage-S_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusSignInPageMinusS_C* UTextStyleMinusSignInPageMinusS_C::GetDefaultObj()
{
	static class UTextStyleMinusSignInPageMinusS_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusSignInPageMinusS_C*>(UTextStyleMinusSignInPageMinusS_C::StaticClass()->DefaultObject);

	return Default;
}

}


