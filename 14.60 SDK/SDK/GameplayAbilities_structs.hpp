#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EGameplayEffectGrantedAbilityRemovePolicy : uint8
{
	CancelAbilityImmediately       = 0,
	RemoveAbilityOnEnd             = 1,
	DoNothing                      = 2,
	EGameplayEffectGrantedAbilityRemovePolicy_MAX = 3,
};

enum class EGameplayEffectAttributeCaptureSource : uint8
{
	Source                         = 0,
	Target                         = 1,
	EGameplayEffectAttributeCaptureSource_MAX = 2,
};

enum class EGameplayAbilityActivationMode : uint8
{
	Authority                      = 0,
	NonAuthority                   = 1,
	Predicting                     = 2,
	Confirmed                      = 3,
	Rejected                       = 4,
	EGameplayAbilityActivationMode_MAX = 5,
};

enum class EAbilityGenericReplicatedEvent : uint8
{
	GenericConfirm                 = 0,
	GenericCancel                  = 1,
	InputPressed                   = 2,
	InputReleased                  = 3,
	GenericSignalFromClient        = 4,
	GenericSignalFromServer        = 5,
	GameCustom1                    = 6,
	GameCustom2                    = 7,
	GameCustom3                    = 8,
	GameCustom4                    = 9,
	GameCustom5                    = 10,
	GameCustom6                    = 11,
	MAX                            = 12,
};

enum class EGameplayCueEvent : uint8
{
	OnActive                       = 0,
	WhileActive                    = 1,
	Executed                       = 2,
	Removed                        = 3,
	EGameplayCueEvent_MAX          = 4,
};

enum class EGameplayEffectReplicationMode : uint8
{
	Minimal                        = 0,
	Mixed                          = 1,
	Full                           = 2,
	EGameplayEffectReplicationMode_MAX = 3,
};

enum class EAbilityTaskWaitState : uint8
{
	WaitingOnGame                  = 1,
	WaitingOnUser                  = 2,
	WaitingOnAvatar                = 4,
	EAbilityTaskWaitState_MAX      = 5,
};

enum class ERootMotionMoveToActorTargetOffsetType : uint8
{
	AlignFromTargetToSource        = 0,
	AlignToTargetForward           = 1,
	AlignToWorldSpace              = 2,
	ERootMotionMoveToActorTargetOffsetType_MAX = 3,
};

enum class EAbilityTaskNetSyncType : uint8
{
	BothWait                       = 0,
	OnlyServerWait                 = 1,
	OnlyClientWait                 = 2,
	EAbilityTaskNetSyncType_MAX    = 3,
};

enum class EWaitAttributeChangeComparison : uint8
{
	None                           = 0,
	GreaterThan                    = 1,
	LessThan                       = 2,
	GreaterThanOrEqualTo           = 3,
	LessThanOrEqualTo              = 4,
	NotEqualTo                     = 5,
	ExactlyEqualTo                 = 6,
	MAX                            = 7,
};

enum class EGameplayAbilityInputBinds : uint8
{
	Ability1                       = 0,
	Ability2                       = 1,
	Ability3                       = 2,
	Ability4                       = 3,
	Ability5                       = 4,
	Ability6                       = 5,
	Ability7                       = 6,
	Ability8                       = 7,
	Ability9                       = 8,
	EGameplayAbilityInputBinds_MAX = 9,
};

enum class ETargetDataFilterSelf : uint8
{
	TDFS_Any                       = 0,
	TDFS_NoSelf                    = 1,
	TDFS_NoOthers                  = 2,
	TDFS_MAX                       = 3,
};

enum class EGameplayAbilityTargetingLocationType : uint8
{
	LiteralTransform               = 0,
	ActorTransform                 = 1,
	SocketTransform                = 2,
	EGameplayAbilityTargetingLocationType_MAX = 3,
};

enum class EGameplayTargetingConfirmation : uint8
{
	Instant                        = 0,
	UserConfirmed                  = 1,
	Custom                         = 2,
	CustomMulti                    = 3,
	EGameplayTargetingConfirmation_MAX = 4,
};

enum class ERepAnimPositionMethod : uint8
{
	Position                       = 0,
	CurrentSectionId               = 1,
	ERepAnimPositionMethod_MAX     = 2,
};

enum class EGameplayAbilityTriggerSource : uint8
{
	GameplayEvent                  = 0,
	OwnedTagAdded                  = 1,
	OwnedTagPresent                = 2,
	EGameplayAbilityTriggerSource_MAX = 3,
};

enum class EGameplayAbilityReplicationPolicy : uint8
{
	ReplicateNo                    = 0,
	ReplicateYes                   = 1,
	EGameplayAbilityReplicationPolicy_MAX = 2,
};

enum class EGameplayAbilityNetSecurityPolicy : uint8
{
	ClientOrServer                 = 0,
	ServerOnlyExecution            = 1,
	ServerOnlyTermination          = 2,
	ServerOnly                     = 3,
	EGameplayAbilityNetSecurityPolicy_MAX = 4,
};

enum class EGameplayAbilityNetExecutionPolicy : uint8
{
	LocalPredicted                 = 0,
	LocalOnly                      = 1,
	ServerInitiated                = 2,
	ServerOnly                     = 3,
	EGameplayAbilityNetExecutionPolicy_MAX = 4,
};

enum class EGameplayAbilityInstancingPolicy : uint8
{
	NonInstanced                   = 0,
	InstancedPerActor              = 1,
	InstancedPerExecution          = 2,
	EGameplayAbilityInstancingPolicy_MAX = 3,
};

enum class EGameplayCuePayloadType : uint8
{
	CueParameters                  = 0,
	FromSpec                       = 1,
	EGameplayCuePayloadType_MAX    = 2,
};

enum class EGameplayEffectPeriodInhibitionRemovedPolicy : uint8
{
	NeverReset                     = 0,
	ResetPeriod                    = 1,
	ExecuteAndResetPeriod          = 2,
	EGameplayEffectPeriodInhibitionRemovedPolicy_MAX = 3,
};

enum class EGameplayEffectStackingExpirationPolicy : uint8
{
	ClearEntireStack               = 0,
	RemoveSingleStackAndRefreshDuration = 1,
	RefreshDuration                = 2,
	EGameplayEffectStackingExpirationPolicy_MAX = 3,
};

enum class EGameplayEffectStackingPeriodPolicy : uint8
{
	ResetOnSuccessfulApplication   = 0,
	NeverReset                     = 1,
	EGameplayEffectStackingPeriodPolicy_MAX = 2,
};

enum class EGameplayEffectStackingDurationPolicy : uint8
{
	RefreshOnSuccessfulApplication = 0,
	NeverRefresh                   = 1,
	EGameplayEffectStackingDurationPolicy_MAX = 2,
};

enum class EGameplayEffectDurationType : uint8
{
	Instant                        = 0,
	Infinite                       = 1,
	HasDuration                    = 2,
	EGameplayEffectDurationType_MAX = 3,
};

enum class EGameplayEffectScopedModifierAggregatorType : uint8
{
	CapturedAttributeBacked        = 0,
	Transient                      = 1,
	EGameplayEffectScopedModifierAggregatorType_MAX = 2,
};

enum class EAttributeBasedFloatCalculationType : uint8
{
	AttributeMagnitude             = 0,
	AttributeBaseValue             = 1,
	AttributeBonusMagnitude        = 2,
	AttributeMagnitudeEvaluatedUpToChannel = 3,
	EAttributeBasedFloatCalculationType_MAX = 4,
};

enum class EGameplayEffectMagnitudeCalculation : uint8
{
	ScalableFloat                  = 0,
	AttributeBased                 = 1,
	CustomCalculationClass         = 2,
	SetByCaller                    = 3,
	EGameplayEffectMagnitudeCalculation_MAX = 4,
};

enum class EGameplayTagEventType : uint8
{
	NewOrRemoved                   = 0,
	AnyCountChange                 = 1,
	EGameplayTagEventType_MAX      = 2,
};

enum class EGameplayEffectStackingType : uint8
{
	None                           = 0,
	AggregateBySource              = 1,
	AggregateByTarget              = 2,
	EGameplayEffectStackingType_MAX = 3,
};

enum class EGameplayModOp : uint8
{
	Additive                       = 0,
	Multiplicitive                 = 1,
	Division                       = 2,
	Override                       = 3,
	Max                            = 4,
};

enum class EGameplayModEvaluationChannel : uint8
{
	Channel0                       = 0,
	Channel1                       = 1,
	Channel2                       = 2,
	Channel3                       = 3,
	Channel4                       = 4,
	Channel5                       = 5,
	Channel6                       = 6,
	Channel7                       = 7,
	Channel8                       = 8,
	Channel9                       = 9,
	Channel_MAX                    = 10,
	EGameplayModEvaluationChannel_MAX = 11,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x38 - 0x0)
// ScriptStruct GameplayAbilities.GameplayAttribute
struct FGameplayAttribute
{
public:
	class FString                                AttributeName;                                     // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FFieldPathProperty_                          Attribute;                                         // 0x10(0x20)(Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UStruct*                               AttributeOwner;                                    // 0x30(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct GameplayAbilities.GameplayEffectModifiedAttribute
struct FGameplayEffectModifiedAttribute
{
public:
	struct FGameplayAttribute                    Attribute;                                         // 0x0(0x38)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TotalMagnitude;                                    // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_846[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct GameplayAbilities.GameplayEffectAttributeCaptureDefinition
struct FGameplayEffectAttributeCaptureDefinition
{
public:
	struct FGameplayAttribute                    AttributeToCapture;                                // 0x0(0x38)(Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGameplayEffectAttributeCaptureSource AttributeSource;                                   // 0x38(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSnapshot;                                         // 0x39(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_847[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct GameplayAbilities.GameplayEffectAttributeCaptureSpec
struct FGameplayEffectAttributeCaptureSpec
{
public:
	struct FGameplayEffectAttributeCaptureDefinition BackingDefinition;                                 // 0x0(0x40)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_848[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct GameplayAbilities.GameplayEffectAttributeCaptureSpecContainer
struct FGameplayEffectAttributeCaptureSpecContainer
{
public:
	TArray<struct FGameplayEffectAttributeCaptureSpec> SourceAttributes;                                  // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FGameplayEffectAttributeCaptureSpec> TargetAttributes;                                  // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bHasNonSnapshottedAttributes;                      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_84A[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x88 (0x88 - 0x0)
// ScriptStruct GameplayAbilities.TagContainerAggregator
struct FTagContainerAggregator
{
public:
	struct FGameplayTagContainer                 CapturedActorTags;                                 // 0x0(0x20)(NativeAccessSpecifierPrivate)
	struct FGameplayTagContainer                 CapturedSpecTags;                                  // 0x20(0x20)(NativeAccessSpecifierPrivate)
	struct FGameplayTagContainer                 ScopedTags;                                        // 0x40(0x20)(NativeAccessSpecifierPrivate)
	uint8                                        Pad_84B[0x28];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct GameplayAbilities.ScalableFloat
struct FScalableFloat
{
public:
	float                                        Value;                                             // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_84C[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCurveTableRowHandle                  Curve;                                             // 0x8(0x10)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_84D[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// ScriptStruct GameplayAbilities.GameplayAbilitySpecHandle
struct FGameplayAbilitySpecHandle
{
public:
	int32                                        Handle;                                            // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x90 (0x90 - 0x0)
// ScriptStruct GameplayAbilities.GameplayAbilitySpecDef
struct FGameplayAbilitySpecDef
{
public:
	TSubclassOf<class UGameplayAbility>          Ability;                                           // 0x0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepSkip, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScalableFloat                        LevelScalableFloat;                                // 0x8(0x20)(Edit, DisableEditOnInstance, RepSkip, NativeAccessSpecifierPublic)
	int32                                        InputID;                                           // 0x28(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGameplayEffectGrantedAbilityRemovePolicy RemovalPolicy;                                     // 0x2C(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_84E[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               SourceObject;                                      // 0x30(0x8)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_84F[0x50];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayAbilitySpecHandle            AssignedHandle;                                    // 0x88(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_850[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// ScriptStruct GameplayAbilities.ModifierSpec
struct FModifierSpec
{
public:
	float                                        EvaluatedMagnitude;                                // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GameplayAbilities.GameplayEffectContextHandle
struct FGameplayEffectContextHandle
{
public:
	uint8                                        Pad_851[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x298 (0x298 - 0x0)
// ScriptStruct GameplayAbilities.GameplayEffectSpec
struct FGameplayEffectSpec
{
public:
	class UGameplayEffect*                       Def;                                               // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FGameplayEffectModifiedAttribute> ModifiedAttributes;                                // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayEffectAttributeCaptureSpecContainer CapturedRelevantAttributes;                        // 0x18(0x28)(RepSkip, NativeAccessSpecifierPublic)
	uint8                                        Pad_852[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Duration;                                          // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Period;                                            // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ChanceToApplyToTarget;                             // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_853[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTagContainerAggregator               CapturedSourceTags;                                // 0x60(0x88)(RepSkip, NativeAccessSpecifierPublic)
	struct FTagContainerAggregator               CapturedTargetTags;                                // 0xE8(0x88)(RepSkip, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 DynamicGrantedTags;                                // 0x170(0x20)(NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 DynamicAssetTags;                                  // 0x190(0x20)(NativeAccessSpecifierPublic)
	TArray<struct FModifierSpec>                 Modifiers;                                         // 0x1B0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StackCount;                                        // 0x1C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCompletedSourceAttributeCapture : 1;              // Mask: 0x1, PropSize: 0x10x1C4(0x1)(RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCompletedTargetAttributeCapture : 1;              // Mask: 0x2, PropSize: 0x10x1C4(0x1)(RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDurationLocked : 1;                               // Mask: 0x4, PropSize: 0x10x1C4(0x1)(RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_9C : 5;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_854[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FGameplayAbilitySpecDef>       GrantedAbilitySpecs;                               // 0x1C8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_855[0xA0];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayEffectContextHandle          EffectContext;                                     // 0x278(0x18)(NativeAccessSpecifierPrivate)
	float                                        Level;                                             // 0x290(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_856[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GameplayAbilities.PredictionKey
struct FPredictionKey
{
public:
	class UPackageMap*                           PredictiveConnection;                              // 0x0(0x8)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int16                                        Current;                                           // 0x8(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int16                                        Base;                                              // 0xA(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsStale;                                          // 0xC(0x1)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsServerInitiated;                                // 0xD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_859[0x2];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x35C (0x368 - 0xC)
// ScriptStruct GameplayAbilities.ActiveGameplayEffect
struct FActiveGameplayEffect : public FFastArraySerializerItem
{
public:
	uint8                                        Pad_85A[0xC];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayEffectSpec                   Spec;                                              // 0x18(0x298)(NativeAccessSpecifierPublic)
	struct FPredictionKey                        PredictionKey;                                     // 0x2B0(0x10)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StartServerWorldTime;                              // 0x2C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CachedStartServerWorldTime;                        // 0x2C4(0x4)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StartWorldTime;                                    // 0x2C8(0x4)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsInhibited;                                      // 0x2CC(0x1)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_85B[0x9B];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct GameplayAbilities.ActiveGameplayEffectHandle
struct FActiveGameplayEffectHandle
{
public:
	int32                                        Handle;                                            // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bPassedFiltersAndWasExecuted;                      // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_85C[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GameplayAbilities.GameplayEffectSpecHandle
struct FGameplayEffectSpecHandle
{
public:
	uint8                                        Pad_85D[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct GameplayAbilities.GameplayEffectRemovalInfo
struct FGameplayEffectRemovalInfo
{
public:
	bool                                         bPrematureRemoval;                                 // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_85E[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        StackCount;                                        // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayEffectContextHandle          EffectContext;                                     // 0x8(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct GameplayAbilities.GameplayAbilityTargetDataHandle
struct FGameplayAbilityTargetDataHandle
{
public:
	uint8                                        Pad_85F[0x28];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xB0 (0xB0 - 0x0)
// ScriptStruct GameplayAbilities.GameplayEventData
struct FGameplayEventData
{
public:
	struct FGameplayTag                          EventTag;                                          // 0x0(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Instigator;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Target;                                            // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               OptionalObject;                                    // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               OptionalObject2;                                   // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayEffectContextHandle          ContextHandle;                                     // 0x28(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 InstigatorTags;                                    // 0x40(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 TargetTags;                                        // 0x60(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                        EventMagnitude;                                    // 0x80(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_860[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayAbilityTargetDataHandle      TargetData;                                        // 0x88(0x28)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GameplayAbilities.GameplayAbilityActivationInfo
struct FGameplayAbilityActivationInfo
{
public:
	enum class EGameplayAbilityActivationMode    ActivationMode;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCanBeEndedByOtherInstance : 1;                    // Mask: 0x1, PropSize: 0x10x1(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_9D : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_861[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPredictionKey                        PredictionKeyWhenActivated;                        // 0x8(0x10)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x150 (0x150 - 0x0)
// ScriptStruct GameplayAbilities.GameplayEffectQuery
struct FGameplayEffectQuery
{
public:
	uint8                                        Pad_863[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           CustomMatchDelegate_BP;                            // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	struct FGameplayTagQuery                     OwningTagQuery;                                    // 0x20(0x48)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FGameplayTagQuery                     EffectTagQuery;                                    // 0x68(0x48)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FGameplayTagQuery                     SourceTagQuery;                                    // 0xB0(0x48)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FGameplayAttribute                    ModifyingAttribute;                                // 0xF8(0x38)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               EffectSource;                                      // 0x130(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UGameplayEffect>           EffectDefinition;                                  // 0x138(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_866[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xB8 (0xB8 - 0x0)
// ScriptStruct GameplayAbilities.GameplayCueParameters
struct FGameplayCueParameters
{
public:
	float                                        NormalizedMagnitude;                               // 0x0(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RawMagnitude;                                      // 0x4(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayEffectContextHandle          EffectContext;                                     // 0x8(0x18)(BlueprintVisible, NativeAccessSpecifierPublic)
	struct FGameplayTag                          MatchedTagName;                                    // 0x20(0x8)(BlueprintVisible, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          OriginalTag;                                       // 0x28(0x8)(BlueprintVisible, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 AggregatedSourceTags;                              // 0x30(0x20)(BlueprintVisible, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 AggregatedTargetTags;                              // 0x50(0x20)(BlueprintVisible, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize10                 Location;                                          // 0x70(0xC)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantizeNormal             Normal;                                            // 0x7C(0xC)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class AActor>                 Instigator;                                        // 0x88(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class AActor>                 EffectCauser;                                      // 0x90(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UObject>                SourceObject;                                      // 0x98(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UPhysicalMaterial>      PhysicalMaterial;                                  // 0xA0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        GameplayEffectLevel;                               // 0xA8(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AbilityLevel;                                      // 0xAC(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class USceneComponent>        TargetAttachComponent;                             // 0xB0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// ScriptStruct GameplayAbilities.GameplayEffectSpecForRPC
struct FGameplayEffectSpecForRPC
{
public:
	class UGameplayEffect*                       Def;                                               // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FGameplayEffectModifiedAttribute> ModifiedAttributes;                                // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayEffectContextHandle          EffectContext;                                     // 0x18(0x18)(NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 AggregatedSourceTags;                              // 0x30(0x20)(NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 AggregatedTargetTags;                              // 0x50(0x20)(NativeAccessSpecifierPublic)
	float                                        Level;                                             // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AbilityLevel;                                      // 0x74(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct GameplayAbilities.ServerAbilityRPCBatch
struct FServerAbilityRPCBatch
{
public:
	struct FGameplayAbilitySpecHandle            AbilitySpecHandle;                                 // 0x0(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_86A[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPredictionKey                        PredictionKey;                                     // 0x8(0x10)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayAbilityTargetDataHandle      TargetData;                                        // 0x18(0x28)(NativeAccessSpecifierPublic)
	bool                                         InputPressed;                                      // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Ended;                                             // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Started;                                           // 0x42(0x1)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_86B[0x5];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x14 (0x20 - 0xC)
// ScriptStruct GameplayAbilities.ReplicatedPredictionKeyItem
struct FReplicatedPredictionKeyItem : public FFastArraySerializerItem
{
public:
	uint8                                        Pad_86C[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPredictionKey                        PredictionKey;                                     // 0x10(0x10)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x118 - 0x108)
// ScriptStruct GameplayAbilities.ReplicatedPredictionKeyMap
struct FReplicatedPredictionKeyMap : public FFastArraySerializer
{
public:
	TArray<struct FReplicatedPredictionKeyItem>  PredictionKeys;                                    // 0x108(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct GameplayAbilities.MinimalReplicationTagCountMap
struct FMinimalReplicationTagCountMap
{
public:
	uint8                                        Pad_86D[0x50];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAbilitySystemComponent*               Owner;                                             // 0x50(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_86E[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xDC (0xE8 - 0xC)
// ScriptStruct GameplayAbilities.ActiveGameplayCue
struct FActiveGameplayCue : public FFastArraySerializerItem
{
public:
	struct FGameplayTag                          GameplayCueTag;                                    // 0xC(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_86F[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPredictionKey                        PredictionKey;                                     // 0x18(0x10)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayCueParameters                Parameters;                                        // 0x28(0xB8)(ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bPredictivelyRemoved;                              // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_870[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x128 - 0x108)
// ScriptStruct GameplayAbilities.ActiveGameplayCueContainer
struct FActiveGameplayCueContainer : public FFastArraySerializer
{
public:
	TArray<struct FActiveGameplayCue>            GameplayCues;                                      // 0x108(0x10)(ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_871[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UAbilitySystemComponent*               Owner;                                             // 0x120(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x370 (0x478 - 0x108)
// ScriptStruct GameplayAbilities.ActiveGameplayEffectsContainer
struct FActiveGameplayEffectsContainer : public FFastArraySerializer
{
public:
	uint8                                        Pad_872[0x28];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FActiveGameplayEffect>         GameplayEffects_Internal;                          // 0x130(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_873[0x310];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UGameplayEffect*>               ApplicationImmunityQueryEffects;                   // 0x450(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_874[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct GameplayAbilities.GameplayAbilityLocalAnimMontage
struct FGameplayAbilityLocalAnimMontage
{
public:
	class UAnimMontage*                          AnimMontage;                                       // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         PlayBit;                                           // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_876[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPredictionKey                        PredictionKey;                                     // 0x10(0x10)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGameplayAbility*                      AnimatingAbility;                                  // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct GameplayAbilities.GameplayAbilityRepAnimMontage
struct FGameplayAbilityRepAnimMontage
{
public:
	class UAnimMontage*                          AnimMontage;                                       // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PlayRate;                                          // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Position;                                          // 0xC(0x4)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BlendTime;                                         // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        NextSectionID;                                     // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bRepPosition : 1;                                  // Mask: 0x1, PropSize: 0x10x15(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        IsStopped : 1;                                     // Mask: 0x2, PropSize: 0x10x15(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        ForcePlayBit : 1;                                  // Mask: 0x4, PropSize: 0x10x15(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        SkipPositionCorrection : 1;                        // Mask: 0x8, PropSize: 0x10x15(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSkipPlayRate : 1;                                 // Mask: 0x10, PropSize: 0x10x15(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_9E : 3;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_87C[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPredictionKey                        PredictionKey;                                     // 0x18(0x10)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        SectionIdToPlay;                                   // 0x28(0x1)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_87D[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xD4 (0xE0 - 0xC)
// ScriptStruct GameplayAbilities.GameplayAbilitySpec
struct FGameplayAbilitySpec : public FFastArraySerializerItem
{
public:
	struct FGameplayAbilitySpecHandle            Handle;                                            // 0xC(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGameplayAbility*                      Ability;                                           // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Level;                                             // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InputID;                                           // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               SourceObject;                                      // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        ActiveCount;                                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        InputPressed : 1;                                  // Mask: 0x1, PropSize: 0x10x29(0x1)(RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        RemoveAfterActivation : 1;                         // Mask: 0x2, PropSize: 0x10x29(0x1)(RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        PendingRemove : 1;                                 // Mask: 0x4, PropSize: 0x10x29(0x1)(RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bActivateOnce : 1;                                 // Mask: 0x8, PropSize: 0x10x29(0x1)(RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_9F : 4;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_87E[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayAbilityActivationInfo        ActivationInfo;                                    // 0x30(0x18)(RepSkip, NoDestructor, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 DynamicAbilityTags;                                // 0x48(0x20)(NativeAccessSpecifierPublic)
	TArray<class UGameplayAbility*>              NonReplicatedInstances;                            // 0x68(0x10)(ZeroConstructor, RepSkip, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UGameplayAbility*>              ReplicatedInstances;                               // 0x78(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FActiveGameplayEffectHandle           GameplayEffectHandle;                              // 0x88(0x8)(RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_880[0x50];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x120 - 0x108)
// ScriptStruct GameplayAbilities.GameplayAbilitySpecContainer
struct FGameplayAbilitySpecContainer : public FFastArraySerializer
{
public:
	TArray<struct FGameplayAbilitySpec>          Items;                                             // 0x108(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAbilitySystemComponent*               Owner;                                             // 0x118(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GameplayAbilities.AttributeDefaults
struct FAttributeDefaults
{
public:
	TSubclassOf<class UAttributeSet>             Attributes;                                        // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                            DefaultStartingTable;                              // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct GameplayAbilities.GameplayTagRequirements
struct FGameplayTagRequirements
{
public:
	struct FGameplayTagContainer                 RequireTags;                                       // 0x0(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 IgnoreTags;                                        // 0x20(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GameplayAbilities.NetSerializeScriptStructCache
struct FNetSerializeScriptStructCache
{
public:
	TArray<class UScriptStruct*>                 ScriptStructs;                                     // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct GameplayAbilities.AttributeMetaData
struct FAttributeMetaData : public FTableRowBase
{
public:
	float                                        BaseValue;                                         // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinValue;                                          // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxValue;                                          // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_888[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                DerivedAttributeInfo;                              // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanStack;                                         // 0x28(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_889[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GameplayAbilities.GameplayAttributeData
struct FGameplayAttributeData
{
public:
	uint8                                        Pad_88A[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        BaseValue;                                         // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        CurrentValue;                                      // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// 0xC (0xC - 0x0)
// ScriptStruct GameplayAbilities.AbilityTriggerData
struct FAbilityTriggerData
{
public:
	struct FGameplayTag                          TriggerTag;                                        // 0x0(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGameplayAbilityTriggerSource     TriggerSource;                                     // 0x8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_88B[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GameplayAbilities.GameplayAbilityBindInfo
struct FGameplayAbilityBindInfo
{
public:
	enum class EGameplayAbilityInputBinds        Command;                                           // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_88E[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UGameplayAbility>          GameplayAbilityClass;                              // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GameplayAbilities.GameplayTargetDataFilterHandle
struct FGameplayTargetDataFilterHandle
{
public:
	uint8                                        Pad_88F[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct GameplayAbilities.GameplayTargetDataFilter
struct FGameplayTargetDataFilter
{
public:
	uint8                                        Pad_890[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                SelfActor;                                         // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class AActor>                    RequiredActorClass;                                // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETargetDataFilterSelf             SelfFilter;                                        // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReverseFilter;                                    // 0x19(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_891[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct GameplayAbilities.GameplayAbilityTargetData
struct FGameplayAbilityTargetData
{
public:
	uint8                                        Pad_893[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x90 (0x98 - 0x8)
// ScriptStruct GameplayAbilities.GameplayAbilityTargetData_SingleTargetHit
struct FGameplayAbilityTargetData_SingleTargetHit : public FGameplayAbilityTargetData
{
public:
	struct FHitResult                            HitResult;                                         // 0x8(0x8C)(IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bHitReplaced;                                      // 0x94(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_894[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0x70 - 0x0)
// ScriptStruct GameplayAbilities.GameplayAbilityTargetingLocationInfo
struct FGameplayAbilityTargetingLocationInfo
{
public:
	uint8                                        Pad_895[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EGameplayAbilityTargetingLocationType LocationType;                                      // 0x10(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_896[0xF];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            LiteralTransform;                                  // 0x20(0x30)(BlueprintVisible, IsPlainOldData, NoDestructor, ExposeOnSpawn, NativeAccessSpecifierPublic)
	class AActor*                                SourceActor;                                       // 0x50(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMeshComponent*                        SourceComponent;                                   // 0x58(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGameplayAbility*                      SourceAbility;                                     // 0x60(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SourceSocketName;                                  // 0x68(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x88 (0x90 - 0x8)
// ScriptStruct GameplayAbilities.GameplayAbilityTargetData_ActorArray
struct FGameplayAbilityTargetData_ActorArray : public FGameplayAbilityTargetData
{
public:
	uint8                                        Pad_898[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayAbilityTargetingLocationInfo SourceLocation;                                    // 0x10(0x70)(Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<TWeakObjectPtr<class AActor>>         TargetActorArray;                                  // 0x80(0x10)(Edit, ZeroConstructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xE8 (0xF0 - 0x8)
// ScriptStruct GameplayAbilities.GameplayAbilityTargetData_LocationInfo
struct FGameplayAbilityTargetData_LocationInfo : public FGameplayAbilityTargetData
{
public:
	uint8                                        Pad_899[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayAbilityTargetingLocationInfo SourceLocation;                                    // 0x10(0x70)(Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGameplayAbilityTargetingLocationInfo TargetLocation;                                    // 0x80(0x70)(Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct GameplayAbilities.GameplayAbilitySpecHandleAndPredictionKey
struct FGameplayAbilitySpecHandleAndPredictionKey
{
public:
	struct FGameplayAbilitySpecHandle            AbilityHandle;                                     // 0x0(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PredictionKeyAtCreation;                           // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GameplayAbilities.AbilityTaskDebugMessage
struct FAbilityTaskDebugMessage
{
public:
	class UGameplayTask*                         FromTask;                                          // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Message;                                           // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GameplayAbilities.AbilityEndedData
struct FAbilityEndedData
{
public:
	class UGameplayAbility*                      AbilityThatEnded;                                  // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayAbilitySpecHandle            AbilitySpecHandle;                                 // 0x8(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReplicateEndAbility;                              // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWasCancelled;                                     // 0xD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_89A[0x2];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// ScriptStruct GameplayAbilities.GameplayAbilityActorInfo
struct FGameplayAbilityActorInfo
{
public:
	uint8                                        Pad_89B[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TWeakObjectPtr<class AActor>                 OwnerActor;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class AActor>                 AvatarActor;                                       // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class APlayerController>      PlayerController;                                  // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UAbilitySystemComponent> AbilitySystemComponent;                            // 0x20(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class USkeletalMeshComponent> SkeletalMeshComponent;                             // 0x28(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UAnimInstance>          AnimInstance;                                      // 0x30(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UMovementComponent>     MovementComponent;                                 // 0x38(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  AffectedAnimInstanceTag;                           // 0x40(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct GameplayAbilities.WorldReticleParameters
struct FWorldReticleParameters
{
public:
	struct FVector                               AOEScale;                                          // 0x0(0xC)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct GameplayAbilities.PreallocationInfo
struct FPreallocationInfo
{
public:
	uint8                                        Pad_89C[0x50];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TSubclassOf<class AGameplayCueNotify_Actor>> ClassesNeedingPreallocation;                       // 0x50(0x10)(ZeroConstructor, Transient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_89D[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x168 (0x168 - 0x0)
// ScriptStruct GameplayAbilities.GameplayCuePendingExecute
struct FGameplayCuePendingExecute
{
public:
	uint8                                        Pad_89E[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPredictionKey                        PredictionKey;                                     // 0x18(0x10)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGameplayCuePayloadType           PayloadType;                                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_89F[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UAbilitySystemComponent*               OwningComponent;                                   // 0x30(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayEffectSpecForRPC             FromSpec;                                          // 0x38(0x78)(NativeAccessSpecifierPublic)
	struct FGameplayCueParameters                CueParameters;                                     // 0xB0(0xB8)(ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x1C0 (0x1C0 - 0x0)
// ScriptStruct GameplayAbilities.MinimalGameplayCueReplicationProxy
struct FMinimalGameplayCueReplicationProxy
{
public:
	uint8                                        Pad_8A1[0x1B0];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UAbilitySystemComponent*               Owner;                                             // 0x1B0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_8A2[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct GameplayAbilities.GameplayCueTag
struct FGameplayCueTag
{
public:
	struct FGameplayTag                          GameplayCueTag;                                    // 0x0(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct GameplayAbilities.GameplayCueObjectLibrary
struct FGameplayCueObjectLibrary
{
public:
	TArray<class FString>                        Paths;                                             // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A3[0x20];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObjectLibrary*                        ActorObjectLibrary;                                // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObjectLibrary*                        StaticObjectLibrary;                               // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGameplayCueSet*                       CueSet;                                            // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A4[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bShouldSyncScan;                                   // 0x4C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShouldAsyncLoad;                                  // 0x4D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShouldSyncLoad;                                   // 0x4E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasBeenInitialized;                               // 0x4F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct GameplayAbilities.GameplayCueNotifyData
struct FGameplayCueNotifyData
{
public:
	struct FGameplayTag                          GameplayCueTag;                                    // 0x0(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoftObjectPath                       GameplayCueNotifyObj;                              // 0x8(0x18)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                LoadedGameplayCueClass;                            // 0x20(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A5[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GameplayAbilities.GameplayCueTranslationLink
struct FGameplayCueTranslationLink
{
public:
	class UGameplayCueTranslator*                RulesCDO;                                          // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A6[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// ScriptStruct GameplayAbilities.GameplayCueTranslatorNodeIndex
struct FGameplayCueTranslatorNodeIndex
{
public:
	int32                                        Index;                                             // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// ScriptStruct GameplayAbilities.GameplayCueTranslatorNode
struct FGameplayCueTranslatorNode
{
public:
	TArray<struct FGameplayCueTranslationLink>   Links;                                             // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayCueTranslatorNodeIndex       CachedIndex;                                       // 0x10(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          CachedGameplayTag;                                 // 0x14(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  CachedGameplayTagName;                             // 0x1C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A7[0x54];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x80 (0x80 - 0x0)
// ScriptStruct GameplayAbilities.GameplayCueTranslationManager
struct FGameplayCueTranslationManager
{
public:
	TArray<struct FGameplayCueTranslatorNode>    TranslationLUT;                                    // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMap<class FName, struct FGameplayCueTranslatorNodeIndex> TranslationNameToIndexMap;                         // 0x10(0x50)(NativeAccessSpecifierPrivate)
	class UGameplayTagsManager*                  TagManager;                                        // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_8A8[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x88 (0x88 - 0x0)
// ScriptStruct GameplayAbilities.ActiveGameplayEffectQuery
struct FActiveGameplayEffectQuery
{
public:
	uint8                                        Pad_8A9[0x88];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x60 - 0x0)
// ScriptStruct GameplayAbilities.InheritedTagContainer
struct FInheritedTagContainer
{
public:
	struct FGameplayTagContainer                 CombinedTags;                                      // 0x0(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 Added;                                             // 0x20(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, Transient, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 Removed;                                           // 0x40(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, Transient, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct GameplayAbilities.GameplayEffectCue
struct FGameplayEffectCue
{
public:
	struct FGameplayAttribute                    MagnitudeAttribute;                                // 0x0(0x38)(Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinLevel;                                          // 0x38(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxLevel;                                          // 0x3C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 GameplayCueTags;                                   // 0x40(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0xF8 (0xF8 - 0x0)
// ScriptStruct GameplayAbilities.AttributeBasedFloat
struct FAttributeBasedFloat
{
public:
	struct FScalableFloat                        Coefficient;                                       // 0x0(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        PreMultiplyAdditiveValue;                          // 0x20(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        PostMultiplyAdditiveValue;                         // 0x40(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FGameplayEffectAttributeCaptureDefinition BackingAttribute;                                  // 0x60(0x40)(Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCurveTableRowHandle                  AttributeCurve;                                    // 0xA0(0x10)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAttributeBasedFloatCalculationType AttributeCalculationType;                          // 0xB0(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGameplayModEvaluationChannel     FinalChannel;                                      // 0xB1(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8AC[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 SourceTagFilter;                                   // 0xB8(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 TargetTagFilter;                                   // 0xD8(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// ScriptStruct GameplayAbilities.CustomCalculationBasedFloat
struct FCustomCalculationBasedFloat
{
public:
	TSubclassOf<class UGameplayModMagnitudeCalculation> CalculationClassMagnitude;                         // 0x0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScalableFloat                        Coefficient;                                       // 0x8(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        PreMultiplyAdditiveValue;                          // 0x28(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        PostMultiplyAdditiveValue;                         // 0x48(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FCurveTableRowHandle                  FinalLookupCurve;                                  // 0x68(0x10)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GameplayAbilities.SetByCallerFloat
struct FSetByCallerFloat
{
public:
	class FName                                  DataName;                                          // 0x0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          DataTag;                                           // 0x8(0x8)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1A8 (0x1A8 - 0x0)
// ScriptStruct GameplayAbilities.GameplayEffectModifierMagnitude
struct FGameplayEffectModifierMagnitude
{
public:
	enum class EGameplayEffectMagnitudeCalculation MagnitudeCalculationType;                          // 0x0(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_8AD[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FScalableFloat                        ScalableFloatMagnitude;                            // 0x8(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FAttributeBasedFloat                  AttributeBasedMagnitude;                           // 0x28(0xF8)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FCustomCalculationBasedFloat          CustomMagnitude;                                   // 0x120(0x78)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FSetByCallerFloat                     SetByCallerMagnitude;                              // 0x198(0x10)(Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct GameplayAbilities.GameplayModEvaluationChannelSettings
struct FGameplayModEvaluationChannelSettings
{
public:
	enum class EGameplayModEvaluationChannel     Channel;                                           // 0x0(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// 0x290 (0x290 - 0x0)
// ScriptStruct GameplayAbilities.GameplayModifierInfo
struct FGameplayModifierInfo
{
public:
	struct FGameplayAttribute                    Attribute;                                         // 0x0(0x38)(Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGameplayModOp                    ModifierOp;                                        // 0x38(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B1[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FScalableFloat                        Magnitude;                                         // 0x40(0x20)(NativeAccessSpecifierPublic)
	struct FGameplayEffectModifierMagnitude      ModifierMagnitude;                                 // 0x60(0x1A8)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FGameplayModEvaluationChannelSettings EvaluationChannelSettings;                         // 0x208(0x1)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B4[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagRequirements              SourceTags;                                        // 0x210(0x40)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FGameplayTagRequirements              TargetTags;                                        // 0x250(0x40)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x280 (0x280 - 0x0)
// ScriptStruct GameplayAbilities.GameplayEffectExecutionScopedModifierInfo
struct FGameplayEffectExecutionScopedModifierInfo
{
public:
	struct FGameplayEffectAttributeCaptureDefinition CapturedAttribute;                                 // 0x0(0x40)(Edit, DisableEditOnInstance, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          TransientAggregatorIdentifier;                     // 0x40(0x8)(Edit, DisableEditOnInstance, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGameplayEffectScopedModifierAggregatorType AggregatorType;                                    // 0x48(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGameplayModOp                    ModifierOp;                                        // 0x49(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B5[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayEffectModifierMagnitude      ModifierMagnitude;                                 // 0x50(0x1A8)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FGameplayModEvaluationChannelSettings EvaluationChannelSettings;                         // 0x1F8(0x1)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B6[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagRequirements              SourceTags;                                        // 0x200(0x40)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FGameplayTagRequirements              TargetTags;                                        // 0x240(0x40)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct GameplayAbilities.ConditionalGameplayEffect
struct FConditionalGameplayEffect
{
public:
	TSubclassOf<class UGameplayEffect>           EffectClass;                                       // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 RequiredSourceTags;                                // 0x8(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct GameplayAbilities.GameplayEffectExecutionDefinition
struct FGameplayEffectExecutionDefinition
{
public:
	TSubclassOf<class UGameplayEffectExecutionCalculation> CalculationClass;                                  // 0x0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 PassedInTags;                                      // 0x8(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FGameplayEffectExecutionScopedModifierInfo> CalculationModifiers;                              // 0x28(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class UGameplayEffect>>   ConditionalGameplayEffectClasses;                  // 0x38(0x10)(ZeroConstructor, Deprecated, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FConditionalGameplayEffect>    ConditionalGameplayEffects;                        // 0x48(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct GameplayAbilities.GameplayModifierEvaluatedData
struct FGameplayModifierEvaluatedData
{
public:
	struct FGameplayAttribute                    Attribute;                                         // 0x0(0x38)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGameplayModOp                    ModifierOp;                                        // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B8[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Magnitude;                                         // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FActiveGameplayEffectHandle           Handle;                                            // 0x40(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsValid;                                           // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B9[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GameplayAbilities.GameplayEffectCustomExecutionOutput
struct FGameplayEffectCustomExecutionOutput
{
public:
	TArray<struct FGameplayModifierEvaluatedData> OutputModifiers;                                   // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bTriggerConditionalGameplayEffects : 1;            // Mask: 0x1, PropSize: 0x10x10(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bHandledStackCountManually : 1;                    // Mask: 0x2, PropSize: 0x10x10(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bHandledGameplayCuesManually : 1;                  // Mask: 0x4, PropSize: 0x10x10(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_8BA[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xF0 (0xF0 - 0x0)
// ScriptStruct GameplayAbilities.GameplayEffectCustomExecutionParameters
struct FGameplayEffectCustomExecutionParameters
{
public:
	uint8                                        Pad_8BB[0xF0];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// ScriptStruct GameplayAbilities.GameplayTagBlueprintPropertyMapping
struct FGameplayTagBlueprintPropertyMapping
{
public:
	struct FGameplayTag                          TagToMap;                                          // 0x0(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FFieldPathProperty_                          PropertyToEdit;                                    // 0x8(0x20)(Edit, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  PropertyName;                                      // 0x28(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 PropertyGuid;                                      // 0x30(0x10)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8BC[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct GameplayAbilities.GameplayTagBlueprintPropertyMap
struct FGameplayTagBlueprintPropertyMap
{
public:
	uint8                                        Pad_8BD[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FGameplayTagBlueprintPropertyMapping> PropertyMappings;                                  // 0x10(0x10)(Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct GameplayAbilities.GameplayEffectContext
struct FGameplayEffectContext
{
public:
	uint8                                        Pad_8BE[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TWeakObjectPtr<class AActor>                 Instigator;                                        // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class AActor>                 EffectCauser;                                      // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UGameplayAbility>       AbilityCDO;                                        // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UGameplayAbility>       AbilityInstanceNotReplicated;                      // 0x20(0x8)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        AbilityLevel;                                      // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UObject>                SourceObject;                                      // 0x2C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UAbilitySystemComponent> InstigatorAbilitySystemComponent;                  // 0x34(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_8C0[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TWeakObjectPtr<class AActor>>         Actors;                                            // 0x40(0x10)(ZeroConstructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_8C1[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               WorldOrigin;                                       // 0x60(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bHasWorldOrigin : 1;                               // Mask: 0x1, PropSize: 0x10x6C(0x1)(NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bReplicateSourceObject : 1;                        // Mask: 0x2, PropSize: 0x10x6C(0x1)(NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_8C2[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct GameplayAbilities.GameplayTagReponsePair
struct FGameplayTagReponsePair
{
public:
	struct FGameplayTag                          Tag;                                               // 0x0(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UGameplayEffect>           ResponseGameplayEffect;                            // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class UGameplayEffect>>   ResponseGameplayEffects;                           // 0x10(0x10)(Edit, ZeroConstructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SoftCountCap;                                      // 0x20(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8C3[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct GameplayAbilities.GameplayTagResponseTableEntry
struct FGameplayTagResponseTableEntry
{
public:
	struct FGameplayTagReponsePair               Positive;                                          // 0x0(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FGameplayTagReponsePair               Negative;                                          // 0x28(0x28)(Edit, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// ScriptStruct GameplayAbilities.MovieSceneGameplayCueKey
struct FMovieSceneGameplayCueKey
{
public:
	struct FGameplayCueTag                       Cue;                                               // 0x0(0x8)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               Location;                                          // 0x8(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Normal;                                            // 0x14(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  AttachSocketName;                                  // 0x20(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NormalizedMagnitude;                               // 0x28(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMovieSceneObjectBindingID            Instigator;                                        // 0x2C(0x18)(Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMovieSceneObjectBindingID            EffectCauser;                                      // 0x44(0x18)(Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8C4[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UPhysicalMaterial*                     PhysicalMaterial;                                  // 0x60(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        GameplayEffectLevel;                               // 0x68(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AbilityLevel;                                      // 0x6C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAttachToBinding;                                  // 0x70(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8C5[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x80 (0x88 - 0x8)
// ScriptStruct GameplayAbilities.MovieSceneGameplayCueChannel
struct FMovieSceneGameplayCueChannel : public FMovieSceneChannel
{
public:
	TArray<struct FFrameNumber>                  KeyTimes;                                          // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FMovieSceneGameplayCueKey>     KeyValues;                                         // 0x18(0x10)(ZeroConstructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_8C7[0x60];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}


