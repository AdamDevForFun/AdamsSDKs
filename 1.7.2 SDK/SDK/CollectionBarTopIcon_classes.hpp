#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA0 (0x2D8 - 0x238)
// WidgetBlueprintGeneratedClass CollectionBarTopIcon.CollectionBarTopIcon_C
class UCollectionBarTopIcon_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x238(0x8)(Transient, DuplicateTransient)
	class UImage*                                Icon;                                              // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSlateBrush                           IconBrush;                                         // 0x248(0x90)(Edit, BlueprintVisible, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UCollectionBarTopIcon_C* GetDefaultObj();

	void Construct();
	void ExecuteUbergraph_CollectionBarTopIcon(int32 EntryPoint);
};

}


