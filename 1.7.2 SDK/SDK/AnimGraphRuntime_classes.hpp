#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x358 - 0x358)
// Class AnimGraphRuntime.AnimCustomInstance
class UAnimCustomInstance : public UAnimInstance
{
public:

	static class UClass* StaticClass();
	static class UAnimCustomInstance* GetDefaultObj();

};

// 0x0 (0x358 - 0x358)
// Class AnimGraphRuntime.AnimSequencerInstance
class UAnimSequencerInstance : public UAnimCustomInstance
{
public:

	static class UClass* StaticClass();
	static class UAnimSequencerInstance* GetDefaultObj();

};

}


