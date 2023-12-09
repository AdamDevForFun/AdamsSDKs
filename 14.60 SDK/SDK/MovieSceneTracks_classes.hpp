#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0xA8 - 0x78)
// Class MovieSceneTracks.MovieScenePropertyTrack
class UMovieScenePropertyTrack : public UMovieSceneNameableTrack
{
public:
	class UMovieSceneSection*                    SectionToKey;                                      // 0x78(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FMovieScenePropertyBinding            PropertyBinding;                                   // 0x80(0x14)(NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_396D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UMovieSceneSection*>            Sections;                                          // 0x98(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UMovieScenePropertyTrack* GetDefaultObj();

};

// 0x60 (0x148 - 0xE8)
// Class MovieSceneTracks.MovieSceneParameterSection
class UMovieSceneParameterSection : public UMovieSceneSection
{
public:
	TArray<struct FBoolParameterNameAndCurve>    BoolParameterNamesAndCurves;                       // 0xE8(0x10)(ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FScalarParameterNameAndCurve>  ScalarParameterNamesAndCurves;                     // 0xF8(0x10)(ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FVector2DParameterNameAndCurves> Vector2DParameterNamesAndCurves;                   // 0x108(0x10)(ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FVectorParameterNameAndCurves> VectorParameterNamesAndCurves;                     // 0x118(0x10)(ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FColorParameterNameAndCurves>  ColorParameterNamesAndCurves;                      // 0x128(0x10)(ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FTransformParameterNameAndCurves> TransformParameterNamesAndCurves;                  // 0x138(0x10)(ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UMovieSceneParameterSection* GetDefaultObj();

};

// 0x0 (0x40 - 0x40)
// Class MovieSceneTracks.FloatChannelEvaluatorSystem
class UFloatChannelEvaluatorSystem : public UMovieSceneEntitySystem
{
public:

	static class UClass* StaticClass();
	static class UFloatChannelEvaluatorSystem* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MovieSceneTracks.MovieSceneTransformOrigin
class IMovieSceneTransformOrigin : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IMovieSceneTransformOrigin* GetDefaultObj();

	struct FTransform BP_GetTransformOrigin();
};

// 0x28 (0x110 - 0xE8)
// Class MovieSceneTracks.MovieScene3DConstraintSection
class UMovieScene3DConstraintSection : public UMovieSceneSection
{
public:
	struct FGuid                                 ConstraintId;                                      // 0xE8(0x10)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FMovieSceneObjectBindingID            ConstraintBindingID;                               // 0xF8(0x18)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UMovieScene3DConstraintSection* GetDefaultObj();

	void SetConstraintBindingID(struct FMovieSceneObjectBindingID& InConstraintBindingID);
	struct FMovieSceneObjectBindingID GetConstraintBindingID();
};

// 0x20 (0x130 - 0x110)
// Class MovieSceneTracks.MovieScene3DAttachSection
class UMovieScene3DAttachSection : public UMovieScene3DConstraintSection
{
public:
	uint8                                        Pad_396E[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  AttachSocketName;                                  // 0x118(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  AttachComponentName;                               // 0x120(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAttachmentRule                   AttachmentLocationRule;                            // 0x128(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAttachmentRule                   AttachmentRotationRule;                            // 0x129(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAttachmentRule                   AttachmentScaleRule;                               // 0x12A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDetachmentRule                   DetachmentLocationRule;                            // 0x12B(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDetachmentRule                   DetachmentRotationRule;                            // 0x12C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDetachmentRule                   DetachmentScaleRule;                               // 0x12D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_396F[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieScene3DAttachSection* GetDefaultObj();

};

// 0x10 (0x88 - 0x78)
// Class MovieSceneTracks.MovieScene3DConstraintTrack
class UMovieScene3DConstraintTrack : public UMovieSceneTrack
{
public:
	TArray<class UMovieSceneSection*>            ConstraintSections;                                // 0x78(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UMovieScene3DConstraintTrack* GetDefaultObj();

};

// 0x0 (0x88 - 0x88)
// Class MovieSceneTracks.MovieScene3DAttachTrack
class UMovieScene3DAttachTrack : public UMovieScene3DConstraintTrack
{
public:

	static class UClass* StaticClass();
	static class UMovieScene3DAttachTrack* GetDefaultObj();

};

// 0xA8 (0x1B8 - 0x110)
// Class MovieSceneTracks.MovieScene3DPathSection
class UMovieScene3DPathSection : public UMovieScene3DConstraintSection
{
public:
	struct FMovieSceneFloatChannel               TimingCurve;                                       // 0x110(0xA0)(NativeAccessSpecifierPublic)
	enum class EMovieScene3DPathSection_Axis     FrontAxisEnum;                                     // 0x1B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMovieScene3DPathSection_Axis     UpAxisEnum;                                        // 0x1B1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3970[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bFollow : 1;                                       // Mask: 0x1, PropSize: 0x10x1B4(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bReverse : 1;                                      // Mask: 0x2, PropSize: 0x10x1B4(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bForceUpright : 1;                                 // Mask: 0x4, PropSize: 0x10x1B4(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3971[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieScene3DPathSection* GetDefaultObj();

};

// 0x8 (0x90 - 0x88)
// Class MovieSceneTracks.MovieScene3DPathTrack
class UMovieScene3DPathTrack : public UMovieScene3DConstraintTrack
{
public:
	uint8                                        Pad_3972[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieScene3DPathTrack* GetDefaultObj();

};

// 0x10 (0x50 - 0x40)
// Class MovieSceneTracks.MovieScenePropertySystem
class UMovieScenePropertySystem : public UMovieSceneEntitySystem
{
public:
	class UMovieScenePropertyInstantiatorSystem* InstantiatorSystem;                                // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3973[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieScenePropertySystem* GetDefaultObj();

};

// 0x0 (0x50 - 0x50)
// Class MovieSceneTracks.MovieScene3DTransformPropertySystem
class UMovieScene3DTransformPropertySystem : public UMovieScenePropertySystem
{
public:

	static class UClass* StaticClass();
	static class UMovieScene3DTransformPropertySystem* GetDefaultObj();

};

// 0x658 (0x740 - 0xE8)
// Class MovieSceneTracks.MovieScene3DTransformSection
class UMovieScene3DTransformSection : public UMovieSceneSection
{
public:
	uint8                                        Pad_3974[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMovieSceneTransformMask              TransformMask;                                     // 0xF0(0x4)(NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3975[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMovieSceneFloatChannel               Translation[0x3];                                  // 0xF8(0x1E0)(NativeAccessSpecifierPrivate)
	struct FMovieSceneFloatChannel               Rotation[0x3];                                     // 0x2D8(0x1E0)(NativeAccessSpecifierPrivate)
	struct FMovieSceneFloatChannel               Scale[0x3];                                        // 0x4B8(0x1E0)(NativeAccessSpecifierPrivate)
	struct FMovieSceneFloatChannel               ManualWeight;                                      // 0x698(0xA0)(NativeAccessSpecifierPrivate)
	bool                                         bUseQuaternionInterpolation;                       // 0x738(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3976[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieScene3DTransformSection* GetDefaultObj();

};

// 0x0 (0xA8 - 0xA8)
// Class MovieSceneTracks.MovieScene3DTransformTrack
class UMovieScene3DTransformTrack : public UMovieScenePropertyTrack
{
public:

	static class UClass* StaticClass();
	static class UMovieScene3DTransformTrack* GetDefaultObj();

};

// 0x140 (0x228 - 0xE8)
// Class MovieSceneTracks.MovieSceneActorReferenceSection
class UMovieSceneActorReferenceSection : public UMovieSceneSection
{
public:
	struct FMovieSceneActorReferenceData         ActorReferenceData;                                // 0xE8(0xB0)(NativeAccessSpecifierPrivate)
	struct FIntegralCurve                        ActorGuidIndexCurve;                               // 0x198(0x80)(Deprecated, NativeAccessSpecifierPrivate)
	TArray<class FString>                        ActorGuidStrings;                                  // 0x218(0x10)(ZeroConstructor, Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UMovieSceneActorReferenceSection* GetDefaultObj();

};

// 0x8 (0xB0 - 0xA8)
// Class MovieSceneTracks.MovieSceneActorReferenceTrack
class UMovieSceneActorReferenceTrack : public UMovieScenePropertyTrack
{
public:
	uint8                                        Pad_3977[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieSceneActorReferenceTrack* GetDefaultObj();

};

// 0x250 (0x338 - 0xE8)
// Class MovieSceneTracks.MovieSceneAudioSection
class UMovieSceneAudioSection : public UMovieSceneSection
{
public:
	class USoundBase*                            Sound;                                             // 0xE8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FFrameNumber                          StartFrameOffset;                                  // 0xF0(0x4)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        StartOffset;                                       // 0xF4(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        AudioStartTime;                                    // 0xF8(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        AudioDilationFactor;                               // 0xFC(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        AudioVolume;                                       // 0x100(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3979[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMovieSceneFloatChannel               SoundVolume;                                       // 0x108(0xA0)(NativeAccessSpecifierPrivate)
	struct FMovieSceneFloatChannel               PitchMultiplier;                                   // 0x1A8(0xA0)(NativeAccessSpecifierPrivate)
	struct FMovieSceneActorReferenceData         AttachActorData;                                   // 0x248(0xB0)(NativeAccessSpecifierPrivate)
	bool                                         bLooping;                                          // 0x2F8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bSuppressSubtitles;                                // 0x2F9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bOverrideAttenuation;                              // 0x2FA(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_397A[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundAttenuation*                     AttenuationSettings;                               // 0x300(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	FDelegateProperty_                           OnQueueSubtitles;                                  // 0x308(0x10)(ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_            OnAudioFinished;                                   // 0x318(0x10)(ZeroConstructor, InstancedReference, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_            OnAudioPlaybackPercent;                            // 0x328(0x10)(ZeroConstructor, InstancedReference, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UMovieSceneAudioSection* GetDefaultObj();

	void SetStartOffset(const struct FFrameNumber& InStartOffset);
	void SetSound(class USoundBase* InSound);
	struct FFrameNumber GetStartOffset();
	class USoundBase* GetSound();
};

// 0x18 (0x90 - 0x78)
// Class MovieSceneTracks.MovieSceneAudioTrack
class UMovieSceneAudioTrack : public UMovieSceneNameableTrack
{
public:
	uint8                                        Pad_397B[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UMovieSceneSection*>            AudioSections;                                     // 0x80(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UMovieSceneAudioTrack* GetDefaultObj();

};

// 0x0 (0x40 - 0x40)
// Class MovieSceneTracks.MovieSceneBaseValueEvaluatorSystem
class UMovieSceneBaseValueEvaluatorSystem : public UMovieSceneEntitySystem
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneBaseValueEvaluatorSystem* GetDefaultObj();

};

// 0x8 (0xB0 - 0xA8)
// Class MovieSceneTracks.MovieSceneBoolTrack
class UMovieSceneBoolTrack : public UMovieScenePropertyTrack
{
public:
	uint8                                        Pad_397C[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieSceneBoolTrack* GetDefaultObj();

};

// 0x98 (0x180 - 0xE8)
// Class MovieSceneTracks.MovieSceneByteSection
class UMovieSceneByteSection : public UMovieSceneSection
{
public:
	struct FMovieSceneByteChannel                ByteCurve;                                         // 0xE8(0x98)(NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UMovieSceneByteSection* GetDefaultObj();

};

// 0x10 (0xB8 - 0xA8)
// Class MovieSceneTracks.MovieSceneByteTrack
class UMovieSceneByteTrack : public UMovieScenePropertyTrack
{
public:
	uint8                                        Pad_397E[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UEnum*                                 Enum;                                              // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UMovieSceneByteTrack* GetDefaultObj();

};

// 0x40 (0x128 - 0xE8)
// Class MovieSceneTracks.MovieSceneCameraAnimSection
class UMovieSceneCameraAnimSection : public UMovieSceneSection
{
public:
	struct FMovieSceneCameraAnimSectionData      AnimData;                                          // 0xE8(0x20)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	class UCameraAnim*                           CameraAnim;                                        // 0x108(0x8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        PlayRate;                                          // 0x110(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        PlayScale;                                         // 0x114(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        BlendInTime;                                       // 0x118(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        BlendOutTime;                                      // 0x11C(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bLooping;                                          // 0x120(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3985[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieSceneCameraAnimSection* GetDefaultObj();

};

// 0x18 (0x90 - 0x78)
// Class MovieSceneTracks.MovieSceneCameraAnimTrack
class UMovieSceneCameraAnimTrack : public UMovieSceneNameableTrack
{
public:
	uint8                                        Pad_3986[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UMovieSceneSection*>            CameraAnimSections;                                // 0x80(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UMovieSceneCameraAnimTrack* GetDefaultObj();

};

// 0x78 (0x160 - 0xE8)
// Class MovieSceneTracks.MovieSceneCameraCutSection
class UMovieSceneCameraCutSection : public UMovieSceneSection
{
public:
	uint8                                        Pad_398A[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bLockPreviousCamera;                               // 0xF0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_398B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGuid                                 CameraGuid;                                        // 0xF4(0x10)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FMovieSceneObjectBindingID            CameraBindingID;                                   // 0x104(0x18)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_398C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            InitialCameraCutTransform;                         // 0x120(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	bool                                         bHasInitialCameraCutTransform;                     // 0x150(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_398D[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieSceneCameraCutSection* GetDefaultObj();

	void SetCameraBindingID(struct FMovieSceneObjectBindingID& InCameraBindingID);
	struct FMovieSceneObjectBindingID GetCameraBindingID();
};

// 0x18 (0x90 - 0x78)
// Class MovieSceneTracks.MovieSceneCameraCutTrack
class UMovieSceneCameraCutTrack : public UMovieSceneNameableTrack
{
public:
	bool                                         bCanBlend;                                         // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_398F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UMovieSceneSection*>            Sections;                                          // 0x80(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UMovieSceneCameraCutTrack* GetDefaultObj();

};

// 0x68 (0xB8 - 0x50)
// Class MovieSceneTracks.MovieSceneCameraCutTrackInstance
class UMovieSceneCameraCutTrackInstance : public UMovieSceneTrackInstance
{
public:
	uint8                                        Pad_3992[0x68];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieSceneCameraCutTrackInstance* GetDefaultObj();

};

// 0x40 (0x128 - 0xE8)
// Class MovieSceneTracks.MovieSceneCameraShakeSection
class UMovieSceneCameraShakeSection : public UMovieSceneSection
{
public:
	struct FMovieSceneCameraShakeSectionData     ShakeData;                                         // 0xE8(0x20)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	TSubclassOf<class UMatineeCameraShake>       ShakeClass;                                        // 0x108(0x8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PlayScale;                                         // 0x110(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECameraShakePlaySpace             Playspace;                                         // 0x114(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3994[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              UserDefinedPlaySpace;                              // 0x118(0xC)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_3995[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieSceneCameraShakeSection* GetDefaultObj();

};

// 0x20 (0x108 - 0xE8)
// Class MovieSceneTracks.MovieSceneCameraShakeSourceShakeSection
class UMovieSceneCameraShakeSourceShakeSection : public UMovieSceneSection
{
public:
	struct FMovieSceneCameraShakeSectionData     ShakeData;                                         // 0xE8(0x20)(Edit, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UMovieSceneCameraShakeSourceShakeSection* GetDefaultObj();

};

// 0x18 (0x90 - 0x78)
// Class MovieSceneTracks.MovieSceneCameraShakeSourceShakeTrack
class UMovieSceneCameraShakeSourceShakeTrack : public UMovieSceneNameableTrack
{
public:
	uint8                                        Pad_3998[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UMovieSceneSection*>            CameraShakeSections;                               // 0x80(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UMovieSceneCameraShakeSourceShakeTrack* GetDefaultObj();

};

// 0x88 (0x170 - 0xE8)
// Class MovieSceneTracks.MovieSceneCameraShakeSourceTriggerSection
class UMovieSceneCameraShakeSourceTriggerSection : public UMovieSceneSection
{
public:
	struct FMovieSceneCameraShakeSourceTriggerChannel Channel;                                           // 0xE8(0x88)(NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UMovieSceneCameraShakeSourceTriggerSection* GetDefaultObj();

};

// 0x18 (0x90 - 0x78)
// Class MovieSceneTracks.MovieSceneCameraShakeSourceTriggerTrack
class UMovieSceneCameraShakeSourceTriggerTrack : public UMovieSceneTrack
{
public:
	uint8                                        Pad_399A[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UMovieSceneSection*>            Sections;                                          // 0x80(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UMovieSceneCameraShakeSourceTriggerTrack* GetDefaultObj();

};

// 0x18 (0x90 - 0x78)
// Class MovieSceneTracks.MovieSceneCameraShakeTrack
class UMovieSceneCameraShakeTrack : public UMovieSceneNameableTrack
{
public:
	uint8                                        Pad_399B[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UMovieSceneSection*>            CameraShakeSections;                               // 0x80(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UMovieSceneCameraShakeTrack* GetDefaultObj();

};

// 0x28 (0x190 - 0x168)
// Class MovieSceneTracks.MovieSceneCinematicShotSection
class UMovieSceneCinematicShotSection : public UMovieSceneSubSection
{
public:
	class FString                                ShotDisplayName;                                   // 0x168(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FText                                  DisplayName;                                       // 0x178(0x18)(Deprecated, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UMovieSceneCinematicShotSection* GetDefaultObj();

	void SetShotDisplayName(const class FString& InShotDisplayName);
	class FString GetShotDisplayName();
};

// 0x0 (0x88 - 0x88)
// Class MovieSceneTracks.MovieSceneCinematicShotTrack
class UMovieSceneCinematicShotTrack : public UMovieSceneSubTrack
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneCinematicShotTrack* GetDefaultObj();

};

// 0x280 (0x368 - 0xE8)
// Class MovieSceneTracks.MovieSceneColorSection
class UMovieSceneColorSection : public UMovieSceneSection
{
public:
	struct FMovieSceneFloatChannel               RedCurve;                                          // 0xE8(0xA0)(NativeAccessSpecifierPrivate)
	struct FMovieSceneFloatChannel               GreenCurve;                                        // 0x188(0xA0)(NativeAccessSpecifierPrivate)
	struct FMovieSceneFloatChannel               BlueCurve;                                         // 0x228(0xA0)(NativeAccessSpecifierPrivate)
	struct FMovieSceneFloatChannel               AlphaCurve;                                        // 0x2C8(0xA0)(NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UMovieSceneColorSection* GetDefaultObj();

};

// 0x10 (0xB8 - 0xA8)
// Class MovieSceneTracks.MovieSceneColorTrack
class UMovieSceneColorTrack : public UMovieScenePropertyTrack
{
public:
	uint8                                        Pad_39A2[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bIsSlateColor;                                     // 0xB0(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_39A3[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieSceneColorTrack* GetDefaultObj();

};

// 0x0 (0x40 - 0x40)
// Class MovieSceneTracks.MovieSceneComponentAttachmentInvalidatorSystem
class UMovieSceneComponentAttachmentInvalidatorSystem : public UMovieSceneEntityInstantiatorSystem
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneComponentAttachmentInvalidatorSystem* GetDefaultObj();

};

// 0x180 (0x1C0 - 0x40)
// Class MovieSceneTracks.MovieSceneComponentAttachmentSystem
class UMovieSceneComponentAttachmentSystem : public UMovieSceneEntityInstantiatorSystem
{
public:
	uint8                                        Pad_39A4[0x180];                                   // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieSceneComponentAttachmentSystem* GetDefaultObj();

};

// 0x1E0 (0x220 - 0x40)
// Class MovieSceneTracks.MovieSceneComponentMobilitySystem
class UMovieSceneComponentMobilitySystem : public UMovieSceneEntityInstantiatorSystem
{
public:
	uint8                                        Pad_39A5[0x1E0];                                   // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieSceneComponentMobilitySystem* GetDefaultObj();

};

// 0x180 (0x1C0 - 0x40)
// Class MovieSceneTracks.MovieScenePreAnimatedComponentTransformSystem
class UMovieScenePreAnimatedComponentTransformSystem : public UMovieSceneEntityInstantiatorSystem
{
public:
	uint8                                        Pad_39A7[0x180];                                   // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieScenePreAnimatedComponentTransformSystem* GetDefaultObj();

};

// 0x0 (0x50 - 0x50)
// Class MovieSceneTracks.MovieSceneComponentTransformSystem
class UMovieSceneComponentTransformSystem : public UMovieScenePropertySystem
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneComponentTransformSystem* GetDefaultObj();

};

// 0x18 (0x58 - 0x40)
// Class MovieSceneTracks.MovieSceneDeferredComponentMovementSystem
class UMovieSceneDeferredComponentMovementSystem : public UMovieSceneEntitySystem
{
public:
	uint8                                        Pad_39A8[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieSceneDeferredComponentMovementSystem* GetDefaultObj();

};

// 0x98 (0x180 - 0xE8)
// Class MovieSceneTracks.MovieSceneEnumSection
class UMovieSceneEnumSection : public UMovieSceneSection
{
public:
	struct FMovieSceneByteChannel                EnumCurve;                                         // 0xE8(0x98)(NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UMovieSceneEnumSection* GetDefaultObj();

};

// 0x10 (0xB8 - 0xA8)
// Class MovieSceneTracks.MovieSceneEnumTrack
class UMovieSceneEnumTrack : public UMovieScenePropertyTrack
{
public:
	uint8                                        Pad_39AE[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UEnum*                                 Enum;                                              // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UMovieSceneEnumTrack* GetDefaultObj();

};

// 0x0 (0x50 - 0x50)
// Class MovieSceneTracks.MovieSceneEulerTransformPropertySystem
class UMovieSceneEulerTransformPropertySystem : public UMovieScenePropertySystem
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneEulerTransformPropertySystem* GetDefaultObj();

};

// 0x0 (0xA8 - 0xA8)
// Class MovieSceneTracks.MovieSceneEulerTransformTrack
class UMovieSceneEulerTransformTrack : public UMovieScenePropertyTrack
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneEulerTransformTrack* GetDefaultObj();

};

// 0x0 (0xE8 - 0xE8)
// Class MovieSceneTracks.MovieSceneEventSectionBase
class UMovieSceneEventSectionBase : public UMovieSceneSection
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneEventSectionBase* GetDefaultObj();

};

// 0x30 (0x118 - 0xE8)
// Class MovieSceneTracks.MovieSceneEventRepeaterSection
class UMovieSceneEventRepeaterSection : public UMovieSceneEventSectionBase
{
public:
	uint8                                        Pad_39AF[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMovieSceneEvent                      Event;                                             // 0xF0(0x28)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UMovieSceneEventRepeaterSection* GetDefaultObj();

};

// 0x100 (0x1E8 - 0xE8)
// Class MovieSceneTracks.MovieSceneEventSection
class UMovieSceneEventSection : public UMovieSceneSection
{
public:
	struct FNameCurve                            Events;                                            // 0xE8(0x78)(Deprecated, NativeAccessSpecifierPrivate)
	struct FMovieSceneEventSectionData           EventData;                                         // 0x160(0x88)(NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UMovieSceneEventSection* GetDefaultObj();

};

// 0x50 (0x90 - 0x40)
// Class MovieSceneTracks.MovieSceneEventSystem
class UMovieSceneEventSystem : public UMovieSceneEntitySystem
{
public:
	uint8                                        Pad_39B2[0x50];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieSceneEventSystem* GetDefaultObj();

};

// 0x0 (0x90 - 0x90)
// Class MovieSceneTracks.MovieScenePreSpawnEventSystem
class UMovieScenePreSpawnEventSystem : public UMovieSceneEventSystem
{
public:

	static class UClass* StaticClass();
	static class UMovieScenePreSpawnEventSystem* GetDefaultObj();

};

// 0x0 (0x90 - 0x90)
// Class MovieSceneTracks.MovieScenePostSpawnEventSystem
class UMovieScenePostSpawnEventSystem : public UMovieSceneEventSystem
{
public:

	static class UClass* StaticClass();
	static class UMovieScenePostSpawnEventSystem* GetDefaultObj();

};

// 0x0 (0x90 - 0x90)
// Class MovieSceneTracks.MovieScenePostEvalEventSystem
class UMovieScenePostEvalEventSystem : public UMovieSceneEventSystem
{
public:

	static class UClass* StaticClass();
	static class UMovieScenePostEvalEventSystem* GetDefaultObj();

};

// 0x20 (0x98 - 0x78)
// Class MovieSceneTracks.MovieSceneEventTrack
class UMovieSceneEventTrack : public UMovieSceneNameableTrack
{
public:
	uint8                                        Pad_39B3[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bFireEventsWhenForwards : 1;                       // Mask: 0x1, PropSize: 0x10x80(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bFireEventsWhenBackwards : 1;                      // Mask: 0x2, PropSize: 0x10x80(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_26C : 6;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_39B4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EFireEventsAtPosition             EventPosition;                                     // 0x84(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_39B5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UMovieSceneSection*>            Sections;                                          // 0x88(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UMovieSceneEventTrack* GetDefaultObj();

};

// 0x90 (0x178 - 0xE8)
// Class MovieSceneTracks.MovieSceneEventTriggerSection
class UMovieSceneEventTriggerSection : public UMovieSceneEventSectionBase
{
public:
	uint8                                        Pad_39B6[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMovieSceneEventChannel               EventChannel;                                      // 0xF0(0x88)(NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UMovieSceneEventTriggerSection* GetDefaultObj();

};

// 0xB8 (0x1A0 - 0xE8)
// Class MovieSceneTracks.MovieSceneFadeSection
class UMovieSceneFadeSection : public UMovieSceneSection
{
public:
	struct FMovieSceneFloatChannel               FloatCurve;                                        // 0xE8(0xA0)(NativeAccessSpecifierPublic)
	struct FLinearColor                          FadeColor;                                         // 0x188(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bFadeAudio : 1;                                    // Mask: 0x1, PropSize: 0x10x198(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_39B7[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieSceneFadeSection* GetDefaultObj();

};

// 0x0 (0xA8 - 0xA8)
// Class MovieSceneTracks.MovieSceneFloatTrack
class UMovieSceneFloatTrack : public UMovieScenePropertyTrack
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneFloatTrack* GetDefaultObj();

};

// 0x8 (0xB0 - 0xA8)
// Class MovieSceneTracks.MovieSceneFadeTrack
class UMovieSceneFadeTrack : public UMovieSceneFloatTrack
{
public:
	uint8                                        Pad_39B8[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieSceneFadeTrack* GetDefaultObj();

};

// 0x0 (0x50 - 0x50)
// Class MovieSceneTracks.MovieSceneFloatPropertySystem
class UMovieSceneFloatPropertySystem : public UMovieScenePropertySystem
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneFloatPropertySystem* GetDefaultObj();

};

// 0xA8 (0x190 - 0xE8)
// Class MovieSceneTracks.MovieSceneFloatSection
class UMovieSceneFloatSection : public UMovieSceneSection
{
public:
	uint8                                        Pad_39BA[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMovieSceneFloatChannel               FloatCurve;                                        // 0xF0(0xA0)(Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UMovieSceneFloatSection* GetDefaultObj();

};

// 0x0 (0x40 - 0x40)
// Class MovieSceneTracks.MovieSceneHierarchicalBiasSystem
class UMovieSceneHierarchicalBiasSystem : public UMovieSceneEntityInstantiatorSystem
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneHierarchicalBiasSystem* GetDefaultObj();

};

// 0x90 (0x178 - 0xE8)
// Class MovieSceneTracks.MovieSceneIntegerSection
class UMovieSceneIntegerSection : public UMovieSceneSection
{
public:
	struct FMovieSceneIntegerChannel             IntegerCurve;                                      // 0xE8(0x90)(NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UMovieSceneIntegerSection* GetDefaultObj();

};

// 0x8 (0xB0 - 0xA8)
// Class MovieSceneTracks.MovieSceneIntegerTrack
class UMovieSceneIntegerTrack : public UMovieScenePropertyTrack
{
public:
	uint8                                        Pad_39BB[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieSceneIntegerTrack* GetDefaultObj();

};

// 0x1A8 (0x1E8 - 0x40)
// Class MovieSceneTracks.MovieSceneInterrogatedPropertyInstantiatorSystem
class UMovieSceneInterrogatedPropertyInstantiatorSystem : public UMovieSceneEntityInstantiatorSystem
{
public:
	uint8                                        Pad_39BC[0x1A8];                                   // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieSceneInterrogatedPropertyInstantiatorSystem* GetDefaultObj();

};

// 0x20 (0x108 - 0xE8)
// Class MovieSceneTracks.MovieSceneLevelVisibilitySection
class UMovieSceneLevelVisibilitySection : public UMovieSceneSection
{
public:
	uint8                                        Pad_39BE[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class ELevelVisibility                  Visibility;                                        // 0xF0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_39BF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          LevelNames;                                        // 0xF8(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UMovieSceneLevelVisibilitySection* GetDefaultObj();

	void SetVisibility(enum class ELevelVisibility InVisibility);
	void SetLevelNames(TArray<class FName>& InLevelNames);
	enum class ELevelVisibility GetVisibility();
	TArray<class FName> GetLevelNames();
};

// 0x168 (0x1A8 - 0x40)
// Class MovieSceneTracks.MovieSceneLevelVisibilitySystem
class UMovieSceneLevelVisibilitySystem : public UMovieSceneEntitySystem
{
public:
	uint8                                        Pad_39C1[0x168];                                   // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieSceneLevelVisibilitySystem* GetDefaultObj();

};

// 0x10 (0x88 - 0x78)
// Class MovieSceneTracks.MovieSceneLevelVisibilityTrack
class UMovieSceneLevelVisibilityTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>            Sections;                                          // 0x78(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UMovieSceneLevelVisibilityTrack* GetDefaultObj();

};

// 0x10 (0x88 - 0x78)
// Class MovieSceneTracks.MovieSceneMaterialTrack
class UMovieSceneMaterialTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>            Sections;                                          // 0x78(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UMovieSceneMaterialTrack* GetDefaultObj();

};

// 0x10 (0x98 - 0x88)
// Class MovieSceneTracks.MovieSceneMaterialParameterCollectionTrack
class UMovieSceneMaterialParameterCollectionTrack : public UMovieSceneMaterialTrack
{
public:
	uint8                                        Pad_39C2[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialParameterCollection*          MPC;                                               // 0x90(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UMovieSceneMaterialParameterCollectionTrack* GetDefaultObj();

};

// 0x10 (0x98 - 0x88)
// Class MovieSceneTracks.MovieSceneComponentMaterialTrack
class UMovieSceneComponentMaterialTrack : public UMovieSceneMaterialTrack
{
public:
	uint8                                        Pad_39C3[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MaterialIndex;                                     // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_39C4[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieSceneComponentMaterialTrack* GetDefaultObj();

};

// 0xC0 (0x1A8 - 0xE8)
// Class MovieSceneTracks.MovieSceneObjectPropertySection
class UMovieSceneObjectPropertySection : public UMovieSceneSection
{
public:
	struct FMovieSceneObjectPathChannel          ObjectChannel;                                     // 0xE8(0xC0)(NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UMovieSceneObjectPropertySection* GetDefaultObj();

};

// 0x10 (0xB8 - 0xA8)
// Class MovieSceneTracks.MovieSceneObjectPropertyTrack
class UMovieSceneObjectPropertyTrack : public UMovieScenePropertyTrack
{
public:
	uint8                                        Pad_39C5[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                PropertyClass;                                     // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UMovieSceneObjectPropertyTrack* GetDefaultObj();

};

// 0x18 (0x90 - 0x78)
// Class MovieSceneTracks.MovieSceneParticleParameterTrack
class UMovieSceneParticleParameterTrack : public UMovieSceneNameableTrack
{
public:
	uint8                                        Pad_39C6[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UMovieSceneSection*>            Sections;                                          // 0x80(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UMovieSceneParticleParameterTrack* GetDefaultObj();

};

// 0x98 (0x180 - 0xE8)
// Class MovieSceneTracks.MovieSceneParticleSection
class UMovieSceneParticleSection : public UMovieSceneSection
{
public:
	struct FMovieSceneParticleChannel            ParticleKeys;                                      // 0xE8(0x98)(NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UMovieSceneParticleSection* GetDefaultObj();

};

// 0x18 (0x90 - 0x78)
// Class MovieSceneTracks.MovieSceneParticleTrack
class UMovieSceneParticleTrack : public UMovieSceneNameableTrack
{
public:
	uint8                                        Pad_39C7[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UMovieSceneSection*>            ParticleSections;                                  // 0x80(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UMovieSceneParticleTrack* GetDefaultObj();

};

// 0xC0 (0x120 - 0x60)
// Class MovieSceneTracks.MovieScenePiecewiseFloatBlenderSystem
class UMovieScenePiecewiseFloatBlenderSystem : public UMovieSceneBlenderSystem
{
public:
	uint8                                        Pad_39C8[0xC0];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieScenePiecewiseFloatBlenderSystem* GetDefaultObj();

};

// 0xC0 (0x1A8 - 0xE8)
// Class MovieSceneTracks.MovieScenePrimitiveMaterialSection
class UMovieScenePrimitiveMaterialSection : public UMovieSceneSection
{
public:
	struct FMovieSceneObjectPathChannel          MaterialChannel;                                   // 0xE8(0xC0)(NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UMovieScenePrimitiveMaterialSection* GetDefaultObj();

};

// 0x10 (0xB8 - 0xA8)
// Class MovieSceneTracks.MovieScenePrimitiveMaterialTrack
class UMovieScenePrimitiveMaterialTrack : public UMovieScenePropertyTrack
{
public:
	uint8                                        Pad_39C9[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MaterialIndex;                                     // 0xB0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_39CA[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieScenePrimitiveMaterialTrack* GetDefaultObj();

};

// 0x250 (0x290 - 0x40)
// Class MovieSceneTracks.MovieScenePropertyInstantiatorSystem
class UMovieScenePropertyInstantiatorSystem : public UMovieSceneEntityInstantiatorSystem
{
public:
	uint8                                        Pad_39CB[0x250];                                   // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieScenePropertyInstantiatorSystem* GetDefaultObj();

};

// 0x0 (0x40 - 0x40)
// Class MovieSceneTracks.MovieSceneQuaternionInterpolationRotationSystem
class UMovieSceneQuaternionInterpolationRotationSystem : public UMovieSceneEntitySystem
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneQuaternionInterpolationRotationSystem* GetDefaultObj();

};

// 0x100 (0x1E8 - 0xE8)
// Class MovieSceneTracks.MovieSceneSkeletalAnimationSection
class UMovieSceneSkeletalAnimationSection : public UMovieSceneSection
{
public:
	struct FMovieSceneSkeletalAnimationParams    Params;                                            // 0xE8(0xD8)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class UAnimSequence*                         AnimSequence;                                      // 0x1C0(0x8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAnimSequenceBase*                     Animation;                                         // 0x1C8(0x8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        StartOffset;                                       // 0x1D0(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        EndOffset;                                         // 0x1D4(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        PlayRate;                                          // 0x1D8(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bReverse : 1;                                      // Mask: 0x1, PropSize: 0x10x1DC(0x1)(Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        BitPad_26D : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_39CC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  SlotName;                                          // 0x1E0(0x8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UMovieSceneSkeletalAnimationSection* GetDefaultObj();

};

// 0x20 (0x98 - 0x78)
// Class MovieSceneTracks.MovieSceneSkeletalAnimationTrack
class UMovieSceneSkeletalAnimationTrack : public UMovieSceneNameableTrack
{
public:
	uint8                                        Pad_39CD[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UMovieSceneSection*>            AnimationSections;                                 // 0x80(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bUseLegacySectionIndexBlend;                       // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_39CE[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieSceneSkeletalAnimationTrack* GetDefaultObj();

};

// 0xA0 (0x188 - 0xE8)
// Class MovieSceneTracks.MovieSceneSlomoSection
class UMovieSceneSlomoSection : public UMovieSceneSection
{
public:
	struct FMovieSceneFloatChannel               FloatCurve;                                        // 0xE8(0xA0)(NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UMovieSceneSlomoSection* GetDefaultObj();

};

// 0x8 (0xB0 - 0xA8)
// Class MovieSceneTracks.MovieSceneSlomoTrack
class UMovieSceneSlomoTrack : public UMovieSceneFloatTrack
{
public:
	uint8                                        Pad_39CF[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieSceneSlomoTrack* GetDefaultObj();

};

// 0xA0 (0x188 - 0xE8)
// Class MovieSceneTracks.MovieSceneStringSection
class UMovieSceneStringSection : public UMovieSceneSection
{
public:
	struct FMovieSceneStringChannel              StringCurve;                                       // 0xE8(0xA0)(NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UMovieSceneStringSection* GetDefaultObj();

};

// 0x8 (0xB0 - 0xA8)
// Class MovieSceneTracks.MovieSceneStringTrack
class UMovieSceneStringTrack : public UMovieScenePropertyTrack
{
public:
	uint8                                        Pad_39D0[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieSceneStringTrack* GetDefaultObj();

};

// 0x38 (0x78 - 0x40)
// Class MovieSceneTracks.MovieSceneTransformOriginSystem
class UMovieSceneTransformOriginSystem : public UMovieSceneEntitySystem
{
public:
	uint8                                        Pad_39D1[0x38];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieSceneTransformOriginSystem* GetDefaultObj();

};

// 0x0 (0xA8 - 0xA8)
// Class MovieSceneTracks.MovieSceneTransformTrack
class UMovieSceneTransformTrack : public UMovieScenePropertyTrack
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneTransformTrack* GetDefaultObj();

};

// 0x288 (0x370 - 0xE8)
// Class MovieSceneTracks.MovieSceneVectorSection
class UMovieSceneVectorSection : public UMovieSceneSection
{
public:
	struct FMovieSceneFloatChannel               Curves[0x4];                                       // 0xE8(0x280)(NativeAccessSpecifierPrivate)
	int32                                        ChannelsUsed;                                      // 0x368(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_39D2[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieSceneVectorSection* GetDefaultObj();

};

// 0x10 (0xB8 - 0xA8)
// Class MovieSceneTracks.MovieSceneVectorTrack
class UMovieSceneVectorTrack : public UMovieScenePropertyTrack
{
public:
	uint8                                        Pad_39D3[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NumChannelsUsed;                                   // 0xB0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_39D4[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieSceneVectorTrack* GetDefaultObj();

};

// 0x0 (0xB0 - 0xB0)
// Class MovieSceneTracks.MovieSceneVisibilityTrack
class UMovieSceneVisibilityTrack : public UMovieSceneBoolTrack
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneVisibilityTrack* GetDefaultObj();

};

// 0x50 (0x90 - 0x40)
// Class MovieSceneTracks.MovieSceneHierarchicalEasingInstantiatorSystem
class UMovieSceneHierarchicalEasingInstantiatorSystem : public UMovieSceneEntityInstantiatorSystem
{
public:
	uint8                                        Pad_39D6[0x50];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieSceneHierarchicalEasingInstantiatorSystem* GetDefaultObj();

};

// 0x38 (0x78 - 0x40)
// Class MovieSceneTracks.WeightAndEasingEvaluatorSystem
class UWeightAndEasingEvaluatorSystem : public UMovieSceneEntitySystem
{
public:
	uint8                                        Pad_39D7[0x38];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UWeightAndEasingEvaluatorSystem* GetDefaultObj();

};

}


