#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class MovieScene.MovieSceneSignedObject
// (None)

class UClass* UMovieSceneSignedObject::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneSignedObject");

	return Clss;
}


// MovieSceneSignedObject MovieScene.Default__MovieSceneSignedObject
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneSignedObject* UMovieSceneSignedObject::GetDefaultObj()
{
	static class UMovieSceneSignedObject* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneSignedObject*>(UMovieSceneSignedObject::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieScene.MovieScene
// (None)

class UClass* UMovieScene::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieScene");

	return Clss;
}


// MovieScene MovieScene.Default__MovieScene
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieScene* UMovieScene::GetDefaultObj()
{
	static class UMovieScene* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieScene*>(UMovieScene::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieScene.MovieSceneBindingOverridesInterface
// (None)

class UClass* IMovieSceneBindingOverridesInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneBindingOverridesInterface");

	return Clss;
}


// MovieSceneBindingOverridesInterface MovieScene.Default__MovieSceneBindingOverridesInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class IMovieSceneBindingOverridesInterface* IMovieSceneBindingOverridesInterface::GetDefaultObj()
{
	static class IMovieSceneBindingOverridesInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<IMovieSceneBindingOverridesInterface*>(IMovieSceneBindingOverridesInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieScene.MovieSceneBindingOverrides
// (None)

class UClass* UMovieSceneBindingOverrides::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneBindingOverrides");

	return Clss;
}


// MovieSceneBindingOverrides MovieScene.Default__MovieSceneBindingOverrides
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneBindingOverrides* UMovieSceneBindingOverrides::GetDefaultObj()
{
	static class UMovieSceneBindingOverrides* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneBindingOverrides*>(UMovieSceneBindingOverrides::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieScene.MovieSceneBindingOwnerInterface
// (None)

class UClass* IMovieSceneBindingOwnerInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneBindingOwnerInterface");

	return Clss;
}


// MovieSceneBindingOwnerInterface MovieScene.Default__MovieSceneBindingOwnerInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class IMovieSceneBindingOwnerInterface* IMovieSceneBindingOwnerInterface::GetDefaultObj()
{
	static class IMovieSceneBindingOwnerInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<IMovieSceneBindingOwnerInterface*>(IMovieSceneBindingOwnerInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieScene.MovieSceneFolder
// (None)

class UClass* UMovieSceneFolder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneFolder");

	return Clss;
}


// MovieSceneFolder MovieScene.Default__MovieSceneFolder
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneFolder* UMovieSceneFolder::GetDefaultObj()
{
	static class UMovieSceneFolder* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneFolder*>(UMovieSceneFolder::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieScene.MovieSceneSequencePlayer
// (None)

class UClass* UMovieSceneSequencePlayer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneSequencePlayer");

	return Clss;
}


// MovieSceneSequencePlayer MovieScene.Default__MovieSceneSequencePlayer
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneSequencePlayer* UMovieSceneSequencePlayer::GetDefaultObj()
{
	static class UMovieSceneSequencePlayer* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneSequencePlayer*>(UMovieSceneSequencePlayer::StaticClass()->DefaultObject);

	return Default;
}


// Function MovieScene.MovieSceneSequencePlayer.Stop
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMovieSceneSequencePlayer::Stop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequencePlayer", "Stop");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MovieScene.MovieSceneSequencePlayer.StartPlayingNextTick
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMovieSceneSequencePlayer::StartPlayingNextTick()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequencePlayer", "StartPlayingNextTick");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MovieScene.MovieSceneSequencePlayer.SetPlayRate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              PlayRate                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMovieSceneSequencePlayer::SetPlayRate(float PlayRate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequencePlayer", "SetPlayRate");

	Params::UMovieSceneSequencePlayer_SetPlayRate_Params Parms{};

	Parms.PlayRate = PlayRate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieScene.MovieSceneSequencePlayer.SetPlaybackRange
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewStartTime                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              NewEndTime                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMovieSceneSequencePlayer::SetPlaybackRange(float NewStartTime, float NewEndTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequencePlayer", "SetPlaybackRange");

	Params::UMovieSceneSequencePlayer_SetPlaybackRange_Params Parms{};

	Parms.NewStartTime = NewStartTime;
	Parms.NewEndTime = NewEndTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieScene.MovieSceneSequencePlayer.SetPlaybackPosition
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewPlaybackPosition                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMovieSceneSequencePlayer::SetPlaybackPosition(float NewPlaybackPosition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequencePlayer", "SetPlaybackPosition");

	Params::UMovieSceneSequencePlayer_SetPlaybackPosition_Params Parms{};

	Parms.NewPlaybackPosition = NewPlaybackPosition;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieScene.MovieSceneSequencePlayer.PlayReverse
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMovieSceneSequencePlayer::PlayReverse()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequencePlayer", "PlayReverse");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MovieScene.MovieSceneSequencePlayer.PlayLooping
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              NumLoops                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMovieSceneSequencePlayer::PlayLooping(int32 NumLoops)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequencePlayer", "PlayLooping");

	Params::UMovieSceneSequencePlayer_PlayLooping_Params Parms{};

	Parms.NumLoops = NumLoops;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieScene.MovieSceneSequencePlayer.Play
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMovieSceneSequencePlayer::Play()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequencePlayer", "Play");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MovieScene.MovieSceneSequencePlayer.Pause
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMovieSceneSequencePlayer::Pause()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequencePlayer", "Pause");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MovieScene.MovieSceneSequencePlayer.IsPlaying
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMovieSceneSequencePlayer::IsPlaying()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequencePlayer", "IsPlaying");

	Params::UMovieSceneSequencePlayer_IsPlaying_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieScene.MovieSceneSequencePlayer.GetPlayRate
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UMovieSceneSequencePlayer::GetPlayRate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequencePlayer", "GetPlayRate");

	Params::UMovieSceneSequencePlayer_GetPlayRate_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieScene.MovieSceneSequencePlayer.GetPlaybackStart
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UMovieSceneSequencePlayer::GetPlaybackStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequencePlayer", "GetPlaybackStart");

	Params::UMovieSceneSequencePlayer_GetPlaybackStart_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieScene.MovieSceneSequencePlayer.GetPlaybackPosition
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UMovieSceneSequencePlayer::GetPlaybackPosition()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequencePlayer", "GetPlaybackPosition");

	Params::UMovieSceneSequencePlayer_GetPlaybackPosition_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieScene.MovieSceneSequencePlayer.GetPlaybackEnd
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UMovieSceneSequencePlayer::GetPlaybackEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequencePlayer", "GetPlaybackEnd");

	Params::UMovieSceneSequencePlayer_GetPlaybackEnd_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieScene.MovieSceneSequencePlayer.GetLength
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UMovieSceneSequencePlayer::GetLength()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequencePlayer", "GetLength");

	Params::UMovieSceneSequencePlayer_GetLength_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieScene.MovieSceneSequencePlayer.ChangePlaybackDirection
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMovieSceneSequencePlayer::ChangePlaybackDirection()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequencePlayer", "ChangePlaybackDirection");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class MovieScene.MovieSceneSection
// (None)

class UClass* UMovieSceneSection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneSection");

	return Clss;
}


// MovieSceneSection MovieScene.Default__MovieSceneSection
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneSection* UMovieSceneSection::GetDefaultObj()
{
	static class UMovieSceneSection* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneSection*>(UMovieSceneSection::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieScene.MovieSceneTrack
// (None)

class UClass* UMovieSceneTrack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneTrack");

	return Clss;
}


// MovieSceneTrack MovieScene.Default__MovieSceneTrack
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneTrack* UMovieSceneTrack::GetDefaultObj()
{
	static class UMovieSceneTrack* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneTrack*>(UMovieSceneTrack::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieScene.MovieSceneSequence
// (None)

class UClass* UMovieSceneSequence::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneSequence");

	return Clss;
}


// MovieSceneSequence MovieScene.Default__MovieSceneSequence
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneSequence* UMovieSceneSequence::GetDefaultObj()
{
	static class UMovieSceneSequence* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneSequence*>(UMovieSceneSequence::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieScene.MovieSceneNameableTrack
// (None)

class UClass* UMovieSceneNameableTrack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneNameableTrack");

	return Clss;
}


// MovieSceneNameableTrack MovieScene.Default__MovieSceneNameableTrack
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneNameableTrack* UMovieSceneNameableTrack::GetDefaultObj()
{
	static class UMovieSceneNameableTrack* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneNameableTrack*>(UMovieSceneNameableTrack::StaticClass()->DefaultObject);

	return Default;
}

}


