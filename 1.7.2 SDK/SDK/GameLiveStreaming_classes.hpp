#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class GameLiveStreaming.GameLiveStreamingFunctionLibrary
class UGameLiveStreamingFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGameLiveStreamingFunctionLibrary* GetDefaultObj();

	void StopWebCam();
	void StopBroadcastingGame();
	void StartWebCam(int32 DesiredWebCamWidth, int32 DesiredWebCamHeight, bool bMirrorWebCamImage, bool bDrawSimpleWebCamVideo);
	void StartBroadcastingGame(const class FString& LoginUserName, const class FString& LoginPassword, int32 FrameRate, float ScreenScaling, bool bStartWebCam, int32 DesiredWebCamWidth, int32 DesiredWebCamHeight, bool bMirrorWebCamImage, bool bDrawSimpleWebCamVideo, bool bCaptureAudioFromComputer, bool bCaptureAudioFromMicrophone, class UTexture2D* CoverUpImage);
	bool IsWebCamEnabled();
	bool IsBroadcastingGame();
};

// 0x20 (0x48 - 0x28)
// Class GameLiveStreaming.QueryLiveStreamsCallbackProxy
class UQueryLiveStreamsCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	UMulticastDelegateProperty_                  OnQueriedLiveStreams;                              // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E76[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UQueryLiveStreamsCallbackProxy* GetDefaultObj();

	class UQueryLiveStreamsCallbackProxy* QueryLiveStreams(const class FString& GameName);
};

}


