#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Item_TierStar.Item_TierStar_C
// (None)

class UClass* UItem_TierStar_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Item_TierStar_C");

	return Clss;
}


// Item_TierStar_C Item_TierStar.Default__Item_TierStar_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UItem_TierStar_C* UItem_TierStar_C::GetDefaultObj()
{
	static class UItem_TierStar_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UItem_TierStar_C*>(UItem_TierStar_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Item_TierStar.Item_TierStar_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UItem_TierStar_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Item_TierStar_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Item_TierStar.Item_TierStar_C.ExecuteUbergraph_Item_TierStar
// (None)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItem_TierStar_C::ExecuteUbergraph_Item_TierStar(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Item_TierStar_C", "ExecuteUbergraph_Item_TierStar");

	Params::UItem_TierStar_C_ExecuteUbergraph_Item_TierStar_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


