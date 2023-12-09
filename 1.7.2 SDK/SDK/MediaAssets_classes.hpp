#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x88 (0xB0 - 0x28)
// Class MediaAssets.MediaOverlays
class UMediaOverlays : public UObject
{
public:
	uint8                                        Pad_1E7B[0x88];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMediaOverlays* GetDefaultObj();

	void GetTexts(TArray<struct FMediaPlayerOverlay>* OutTexts, const struct FTimespan& Time);
	void GetSubtitles(TArray<struct FMediaPlayerOverlay>* OutSubtitles, const struct FTimespan& Time);
	void GetCaptions(TArray<struct FMediaPlayerOverlay>* OutCaptions, const struct FTimespan& Time);
};

// 0x138 (0x160 - 0x28)
// Class MediaAssets.MediaPlayer
class UMediaPlayer : public UObject
{
public:
	uint8                                        Pad_1E8E[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnEndReached;                                      // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnMediaClosed;                                     // 0x50(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnMediaOpened;                                     // 0x60(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnMediaOpenFailed;                                 // 0x70(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnPlaybackResumed;                                 // 0x80(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnPlaybackSuspended;                               // 0x90(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                         PlayOnOpen;                                        // 0xA0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E8F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        Shuffle : 1;                                       // Mask: 0x1, PropSize: 0x10xA4(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Loop : 1;                                          // Mask: 0x2, PropSize: 0x10xA4(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_207 : 6;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1E90[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMediaOverlays*                        Overlays;                                          // 0xA8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMediaPlaylist*                        Playlist;                                          // 0xB0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        PlaylistIndex;                                     // 0xB8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1E91[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMediaSoundWave*                       SoundWave;                                         // 0xC0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMediaTexture*                         VideoTexture;                                      // 0xC8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1E92[0x90];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMediaPlayer* GetDefaultObj();

	bool SupportsSeeking();
	bool SupportsScrubbing();
	bool SupportsRate(float Rate, bool Unthinned);
	void SetVideoTexture(class UMediaTexture* NewTexture);
	void SetSoundWave(class UMediaSoundWave* NewSoundWave);
	bool SetRate(float Rate);
	void SetOverlays(class UMediaOverlays* NewOverlays);
	bool SetLooping(bool Looping);
	void SetDesiredPlayerName(class FName PlayerName);
	bool SelectTrack(enum class EMediaPlayerTrack TrackType, int32 TrackIndex);
	bool Seek(struct FTimespan& Time);
	bool Rewind();
	bool Reopen();
	bool Previous();
	bool Play();
	bool Pause();
	bool OpenUrl(const class FString& URL);
	bool OpenSource(class UMediaSource* MediaSource);
	bool OpenPlaylistIndex(class UMediaPlaylist* InPlaylist, int32 Index);
	bool OpenPlaylist(class UMediaPlaylist* InPlaylist);
	bool OpenFile(const class FString& FilePath);
	bool Next();
	bool IsReady();
	bool IsPreparing();
	bool IsPlaying();
	bool IsPaused();
	bool IsLooping();
	class FString GetUrl();
	class FString GetTrackLanguage(enum class EMediaPlayerTrack TrackType, int32 TrackIndex);
	class FText GetTrackDisplayName(enum class EMediaPlayerTrack TrackType, int32 TrackIndex);
	struct FTimespan GetTime();
	int32 GetSelectedTrack(enum class EMediaPlayerTrack TrackType);
	struct FFloatRange GetReverseRates(bool Unthinned);
	float GetRate();
	class FName GetPlayerName();
	int32 GetNumTracks(enum class EMediaPlayerTrack TrackType);
	struct FFloatRange GetForwardRates(bool Unthinned);
	struct FTimespan GetDuration();
	class FName GetDesiredPlayerName();
	void Close();
	bool CanPlayUrl(const class FString& URL);
	bool CanPlaySource(class UMediaSource* MediaSource);
	bool CanPause();
};

// 0x10 (0x38 - 0x28)
// Class MediaAssets.MediaPlaylist
class UMediaPlaylist : public UObject
{
public:
	TArray<class UMediaSource*>                  Items;                                             // 0x28(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UMediaPlaylist* GetDefaultObj();

	void RemoveAt(int32 Index);
	void Remove(class UMediaSource* MediaSource);
	int32 Num();
	void Insert(class UMediaSource* MediaSource, int32 Index);
	class UMediaSource* GetRandom(int32* InOutIndex);
	class UMediaSource* GetPrevious(int32* InOutIndex);
	class UMediaSource* GetNext(int32* InOutIndex);
	class UMediaSource* Get(int32 Index);
	void Add(class UMediaSource* MediaSource);
};

// 0xD8 (0x340 - 0x268)
// Class MediaAssets.MediaSoundWave
class UMediaSoundWave : public USoundWave
{
public:
	uint8                                        Pad_1E98[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        AudioTrackIndex;                                   // 0x270(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1E99[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMediaPlayer*                          MediaPlayer;                                       // 0x278(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1E9A[0xC0];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMediaSoundWave* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class MediaAssets.MediaSource
class UMediaSource : public UObject
{
public:
	uint8                                        Pad_1E9B[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMediaSource* GetDefaultObj();

};

// 0x8 (0x38 - 0x30)
// Class MediaAssets.BaseMediaSource
class UBaseMediaSource : public UMediaSource
{
public:
	class FName                                  PlayerName;                                        // 0x30(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UBaseMediaSource* GetDefaultObj();

};

// 0x18 (0x50 - 0x38)
// Class MediaAssets.FileMediaSource
class UFileMediaSource : public UBaseMediaSource
{
public:
	class FString                                FilePath;                                          // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         PrecacheFile;                                      // 0x48(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E9C[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFileMediaSource* GetDefaultObj();

	void SetFilePath(const class FString& Path);
};

// 0x10 (0x48 - 0x38)
// Class MediaAssets.StreamMediaSource
class UStreamMediaSource : public UBaseMediaSource
{
public:
	class FString                                StreamUrl;                                         // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UStreamMediaSource* GetDefaultObj();

};

// 0x8 (0x38 - 0x30)
// Class MediaAssets.PlatformMediaSource
class UPlatformMediaSource : public UMediaSource
{
public:
	class UMediaSource*                          MediaSource;                                       // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UPlatformMediaSource* GetDefaultObj();

};

// 0xE8 (0x1B0 - 0xC8)
// Class MediaAssets.MediaTexture
class UMediaTexture : public UTexture
{
public:
	uint8                                        Pad_1E9D[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class ETextureAddress                   AddressX;                                          // 0xD0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETextureAddress                   AddressY;                                          // 0xD1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E9E[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          ClearColor;                                        // 0xD4(0x10)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E9F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMediaPlayer*                          MediaPlayer;                                       // 0xE8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        VideoTrackIndex;                                   // 0xF0(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1EA0[0xBC];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMediaTexture* GetDefaultObj();

	int32 GetWidth();
	int32 GetHeight();
	float GetAspectRatio();
};

}


