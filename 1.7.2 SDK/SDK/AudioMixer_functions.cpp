#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class AudioMixer.SoundEffectLowPassFilterPreset
// (None)

class UClass* USoundEffectLowPassFilterPreset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SoundEffectLowPassFilterPreset");

	return Clss;
}


// SoundEffectLowPassFilterPreset AudioMixer.Default__SoundEffectLowPassFilterPreset
// (Public, ClassDefaultObject, ArchetypeObject)

class USoundEffectLowPassFilterPreset* USoundEffectLowPassFilterPreset::GetDefaultObj()
{
	static class USoundEffectLowPassFilterPreset* Default = nullptr;

	if (!Default)
		Default = static_cast<USoundEffectLowPassFilterPreset*>(USoundEffectLowPassFilterPreset::StaticClass()->DefaultObject);

	return Default;
}


// Class AudioMixer.SubmixEffectReverbPreset
// (None)

class UClass* USubmixEffectReverbPreset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SubmixEffectReverbPreset");

	return Clss;
}


// SubmixEffectReverbPreset AudioMixer.Default__SubmixEffectReverbPreset
// (Public, ClassDefaultObject, ArchetypeObject)

class USubmixEffectReverbPreset* USubmixEffectReverbPreset::GetDefaultObj()
{
	static class USubmixEffectReverbPreset* Default = nullptr;

	if (!Default)
		Default = static_cast<USubmixEffectReverbPreset*>(USubmixEffectReverbPreset::StaticClass()->DefaultObject);

	return Default;
}


// Class AudioMixer.SubmixEffectSubmixEQPreset
// (None)

class UClass* USubmixEffectSubmixEQPreset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SubmixEffectSubmixEQPreset");

	return Clss;
}


// SubmixEffectSubmixEQPreset AudioMixer.Default__SubmixEffectSubmixEQPreset
// (Public, ClassDefaultObject, ArchetypeObject)

class USubmixEffectSubmixEQPreset* USubmixEffectSubmixEQPreset::GetDefaultObj()
{
	static class USubmixEffectSubmixEQPreset* Default = nullptr;

	if (!Default)
		Default = static_cast<USubmixEffectSubmixEQPreset*>(USubmixEffectSubmixEQPreset::StaticClass()->DefaultObject);

	return Default;
}


// Class AudioMixer.SubmixEffectTestPreset
// (None)

class UClass* USubmixEffectTestPreset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SubmixEffectTestPreset");

	return Clss;
}


// SubmixEffectTestPreset AudioMixer.Default__SubmixEffectTestPreset
// (Public, ClassDefaultObject, ArchetypeObject)

class USubmixEffectTestPreset* USubmixEffectTestPreset::GetDefaultObj()
{
	static class USubmixEffectTestPreset* Default = nullptr;

	if (!Default)
		Default = static_cast<USubmixEffectTestPreset*>(USubmixEffectTestPreset::StaticClass()->DefaultObject);

	return Default;
}


// Class AudioMixer.SynthSound
// (None)

class UClass* USynthSound::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SynthSound");

	return Clss;
}


// SynthSound AudioMixer.Default__SynthSound
// (Public, ClassDefaultObject, ArchetypeObject)

class USynthSound* USynthSound::GetDefaultObj()
{
	static class USynthSound* Default = nullptr;

	if (!Default)
		Default = static_cast<USynthSound*>(USynthSound::StaticClass()->DefaultObject);

	return Default;
}


// Class AudioMixer.SynthComponent
// (SceneComponent)

class UClass* USynthComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SynthComponent");

	return Clss;
}


// SynthComponent AudioMixer.Default__SynthComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class USynthComponent* USynthComponent::GetDefaultObj()
{
	static class USynthComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<USynthComponent*>(USynthComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function AudioMixer.SynthComponent.Stop
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USynthComponent::Stop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponent", "Stop");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AudioMixer.SynthComponent.Start
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USynthComponent::Start()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponent", "Start");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AudioMixer.SynthComponent.IsPlaying
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USynthComponent::IsPlaying()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponent", "IsPlaying");

	Params::USynthComponent_IsPlaying_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


