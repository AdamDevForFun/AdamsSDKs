#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x1F0 - 0x1F0)
// BlueprintGeneratedClass HeroNotificationHandler.HeroNotificationHandler_C
class UHeroNotificationHandler_C : public UFortHeroNotificationHandler
{
public:

	static class UClass* StaticClass();
	static class UHeroNotificationHandler_C* GetDefaultObj();

	class UUserWidget* CreateWidget(class APlayerController* OwningPlayer, class UStickyNotification_C* CallFunc_Create_ReturnValue);
};

}


