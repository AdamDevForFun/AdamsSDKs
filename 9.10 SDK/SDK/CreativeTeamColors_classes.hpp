#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x250 - 0x230)
// BlueprintGeneratedClass CreativeTeamColors.CreativeTeamColors_C
class UCreativeTeamColors_C : public USceneComponent
{
public:
	TArray<struct FLinearColor>                  TeamLightColors;                                   // 0x230(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FLinearColor>                  TeamSelectorColors;                                // 0x240(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UCreativeTeamColors_C* GetDefaultObj();

};

}


