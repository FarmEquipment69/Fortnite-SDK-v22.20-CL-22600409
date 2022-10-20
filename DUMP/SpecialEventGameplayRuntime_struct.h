// Enum SpecialEventGameplayRuntime.EDestroyActorsAndComponentsMutator_ComponentNameComparisonType
enum class EDestroyActorsAndComponentsMutator_ComponentNameComparisonType : uint8 {
	NameEquals = 0,
	NameStartsWith = 1,
	NameContains = 2,
	AdditionalStatNameEquals = 3,
	AdditionalStatNameStartsWith = 4,
	AdditionalStatNameContains = 5,
	EDestroyActorsAndComponentsMutator_MAX = 6
};

// Enum SpecialEventGameplayRuntime.EFakeKillRelevancyPlayerKillStep
enum class EFakeKillRelevancyPlayerKillStep : uint8 {
	Initiated = 0,
	BlueprintNotified = 1,
	VisualsPerformed = 2,
	EFakeKillRelevancyPlayerKillStep_MAX = 3
};

// Enum SpecialEventGameplayRuntime.ESpecialEventTODMModifyType
enum class ESpecialEventTODMModifyType : uint8 {
	Keep = 0,
	Hide = 1,
	Show = 2,
	Spawn = 3,
	Persistent = 4,
	ESpecialEventTODMModifyType_MAX = 5
};

// Enum SpecialEventGameplayRuntime.EMutatorMovementMode
enum class EMutatorMovementMode : uint8 {
	None = 0,
	BuffetBubbles = 23,
	BuffetBubblesIntro = 24,
	BuffetFlying = 25,
	BuffetFlyingRicochet = 26,
	Rewind = 27,
	EMutatorMovementMode_MAX = 28
};

// Enum SpecialEventGameplayRuntime.EFortCustomTickComponentCondition
enum class EFortCustomTickComponentCondition : uint8 {
	WasRecentlyRendered = 0,
	CameraDistance = 1,
	LocalPlayerDistance = 2,
	Count = 3,
	EFortCustomTickComponentCondition_MAX = 4
};

// Enum SpecialEventGameplayRuntime.ESpecialEventGameUserSettingsResult
enum class ESpecialEventGameUserSettingsResult : uint8 {
	Success = 0,
	Failure = 1,
	ESpecialEventGameUserSettingsResult_MAX = 2
};

// Enum SpecialEventGameplayRuntime.ESpecialEventPhaseState
enum class ESpecialEventPhaseState : uint8 {
	Unregistered = 0,
	Inactive = 1,
	Active = 2,
	Deactivated = 3,
	ESpecialEventPhaseState_MAX = 4
};

// Enum SpecialEventGameplayRuntime.ESpecialEventPhaseComponentNetModeType
enum class ESpecialEventPhaseComponentNetModeType : uint8 {
	ClientControlled = 0,
	Client = 1,
	DedicatedServer = 2,
	ESpecialEventPhaseComponentNetModeType_MAX = 3
};

// Enum SpecialEventGameplayRuntime.ESpecialEventRewindComponentState
enum class ESpecialEventRewindComponentState : uint8 {
	Stop = 0,
	Record = 1,
	Rewind = 2,
	ESpecialEventRewindComponentState_MAX = 3
};

// ScriptStruct SpecialEventGameplayRuntime.SpecialClientEvent
// Size: 0x18 (Inherited: 0x00)
struct FSpecialClientEvent {
	struct AFortPlayerControllerAthena* PlayerController; // 0x00(0x08)
	float TimeSeconds; // 0x08(0x04)
	struct FGameplayTag EventTag; // 0x0c(0x04)
	int32_t Count; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct SpecialEventGameplayRuntime.SpecialEventStatArrayEntry
// Size: 0x40 (Inherited: 0x0c)
struct FSpecialEventStatArrayEntry : FFastArraySerializerItem {
	char pad_C[0x4]; // 0x0c(0x04)
	struct USpecialEventStatComponent* StatComponent; // 0x10(0x08)
	struct AActor* Owner; // 0x18(0x08)
	int32_t StatDefinitionIndex; // 0x20(0x04)
	struct FSpecialEventStatDefinition StatDefinitionCopy; // 0x24(0x10)
	float Value; // 0x34(0x04)
	char pad_38[0x8]; // 0x38(0x08)
};

// ScriptStruct SpecialEventGameplayRuntime.SpecialEventStatDefinition
// Size: 0x10 (Inherited: 0x00)
struct FSpecialEventStatDefinition {
	struct FGameplayTag LookupTag; // 0x00(0x04)
	float min; // 0x04(0x04)
	float max; // 0x08(0x04)
	float DefaultValue; // 0x0c(0x04)
};

// ScriptStruct SpecialEventGameplayRuntime.DestroyActorsAndComponentsMutator_ComponentDefinition
// Size: 0x18 (Inherited: 0x00)
struct FDestroyActorsAndComponentsMutator_ComponentDefinition {
	struct FString ComponentName; // 0x00(0x10)
	enum class EDestroyActorsAndComponentsMutator_ComponentNameComparisonType NameComparisonType; // 0x10(0x01)
	bool bDestroyOnServer; // 0x11(0x01)
	bool bDestroyOnClient; // 0x12(0x01)
	bool bPromoteChildrenOfDestroyedComponents; // 0x13(0x01)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct SpecialEventGameplayRuntime.DestroyActorsAndComponentsMutator_ActorDefinition
// Size: 0x78 (Inherited: 0x00)
struct FDestroyActorsAndComponentsMutator_ActorDefinition {
	struct FGameplayTagContainer Tags; // 0x00(0x20)
	struct TSoftClassPtr<UObject> SoftActorClass; // 0x20(0x28)
	bool bStartEnabled; // 0x48(0x01)
	bool bDestroyActorOnServer; // 0x49(0x01)
	bool bDestroyActorOnClient; // 0x4a(0x01)
	bool bNetForceOnActorDestroy; // 0x4b(0x01)
	bool bShouldModifyLevelOnActorDestroy; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	struct TArray<struct FDestroyActorsAndComponentsMutator_ComponentDefinition> ComponentDefinitions; // 0x50(0x10)
	bool bCurrentlyEnabled; // 0x60(0x01)
	bool bPermanentlyDisabled; // 0x61(0x01)
	char pad_62[0x6]; // 0x62(0x06)
	struct TArray<struct AActor*> ActorsToProcess; // 0x68(0x10)
};

// ScriptStruct SpecialEventGameplayRuntime.FakeKillRelevancyVictim
// Size: 0x20 (Inherited: 0x00)
struct FFakeKillRelevancyVictim {
	struct AFortPlayerStateAthena* PlayerState; // 0x00(0x08)
	struct FVector DeathLocation; // 0x08(0x18)
};

// ScriptStruct SpecialEventGameplayRuntime.FakeKillRelevancyPlayerDataEntry
// Size: 0x38 (Inherited: 0x0c)
struct FFakeKillRelevancyPlayerDataEntry : FFastArraySerializerItem {
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct FFakeKillRelevancyVictim> Victims; // 0x10(0x10)
	struct FGameplayTag Reason; // 0x20(0x04)
	int32_t PhaseNum; // 0x24(0x04)
	int32_t WaveNum; // 0x28(0x04)
	float RelevancyDelay; // 0x2c(0x04)
	float RelevancyChangeServerWorldTime; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct SpecialEventGameplayRuntime.FakeKillRelevancyPlayerDataArray
// Size: 0x120 (Inherited: 0x108)
struct FFakeKillRelevancyPlayerDataArray : FFastArraySerializer {
	struct TArray<struct FFakeKillRelevancyPlayerDataEntry> Entries; // 0x108(0x10)
	struct UFortControllerComponent_FakeKillRelevancy* ControllerComponent; // 0x118(0x08)
};

// ScriptStruct SpecialEventGameplayRuntime.FakeKillRelevancyPhaseData
// Size: 0x30 (Inherited: 0x00)
struct FFakeKillRelevancyPhaseData {
	char pad_0[0x10]; // 0x00(0x10)
	struct FGameplayTag Reason; // 0x10(0x04)
	int32_t NumWavesExpected; // 0x14(0x04)
	int32_t WaveNum; // 0x18(0x04)
	float RelevancyDelay; // 0x1c(0x04)
	char pad_20[0x10]; // 0x20(0x10)
};

// ScriptStruct SpecialEventGameplayRuntime.FakeKillRelevancyBucket
// Size: 0x10 (Inherited: 0x00)
struct FFakeKillRelevancyBucket {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct SpecialEventGameplayRuntime.FakeKillRelevancySupergroup
// Size: 0x20 (Inherited: 0x00)
struct FFakeKillRelevancySupergroup {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct SpecialEventGameplayRuntime.FakeKillRelevancyTestParameters
// Size: 0x38 (Inherited: 0x00)
struct FFakeKillRelevancyTestParameters {
	char pad_0[0x38]; // 0x00(0x38)
};

// ScriptStruct SpecialEventGameplayRuntime.SpecialEventMapData
// Size: 0x20 (Inherited: 0x00)
struct FSpecialEventMapData {
	struct FGameplayTag MapTag; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FName> MapNames; // 0x08(0x10)
	bool bReplicatedHasBeenUnloaded; // 0x18(0x01)
	bool bHasBeenUnloaded; // 0x19(0x01)
	char pad_1A[0x6]; // 0x1a(0x06)
};

// ScriptStruct SpecialEventGameplayRuntime.FortDelayRTMMData
// Size: 0x10 (Inherited: 0x00)
struct FFortDelayRTMMData {
	bool bDelayRTTM; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float MinRTTMDelay; // 0x04(0x04)
	float MaxRTTMDelay; // 0x08(0x04)
	float Timestamp; // 0x0c(0x04)
};

// ScriptStruct SpecialEventGameplayRuntime.FortSpecialEventGEData
// Size: 0x10 (Inherited: 0x00)
struct FFortSpecialEventGEData {
	struct UGameplayEffect* GameplayEffect; // 0x00(0x08)
	int32_t Level; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct SpecialEventGameplayRuntime.FortSpecialEventOverrideParts
// Size: 0x20 (Inherited: 0x00)
struct FFortSpecialEventOverrideParts {
	struct TArray<struct UCustomCharacterPart*> OverrideParts; // 0x00(0x10)
	struct FFortSpecialEventGEData GameplayEffectToApplyOnSwap; // 0x10(0x10)
};

// ScriptStruct SpecialEventGameplayRuntime.SpecialEventTODMSubphaseData
// Size: 0x18 (Inherited: 0x00)
struct FSpecialEventTODMSubphaseData {
	float PhaseTime; // 0x00(0x04)
	enum class ESpecialEventTODMModifyType ModifyType; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct AFortTimeOfDayManager* SpawnClass; // 0x08(0x08)
	float TimeOfDay; // 0x10(0x04)
	float SpeedFactor; // 0x14(0x04)
};

// ScriptStruct SpecialEventGameplayRuntime.SpecialEventTODMPhaseData
// Size: 0x20 (Inherited: 0x00)
struct FSpecialEventTODMPhaseData {
	struct FGameplayTag PhaseTag; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FSpecialEventTODMSubphaseData> SubphaseDataArray; // 0x08(0x10)
	char pad_18[0x8]; // 0x18(0x08)
};

// ScriptStruct SpecialEventGameplayRuntime.BuffetBubblesReplicatedData
// Size: 0x80 (Inherited: 0x00)
struct FBuffetBubblesReplicatedData {
	struct FTransform RelativeTransform; // 0x00(0x60)
	struct FVector RelativeVelocity; // 0x60(0x18)
	char pad_78[0x8]; // 0x78(0x08)
};

// ScriptStruct SpecialEventGameplayRuntime.BuffetBubblesDebugData
// Size: 0xf0 (Inherited: 0x00)
struct FBuffetBubblesDebugData {
	char pad_0[0xf0]; // 0x00(0xf0)
};

// ScriptStruct SpecialEventGameplayRuntime.BuffetFlyingRicochetReplicatedData
// Size: 0x20 (Inherited: 0x00)
struct FBuffetFlyingRicochetReplicatedData {
	float StartTime; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FVector Velocity; // 0x08(0x18)
};

// ScriptStruct SpecialEventGameplayRuntime.CustomTickComonentQualitySettings
// Size: 0x14 (Inherited: 0x00)
struct FCustomTickComonentQualitySettings {
	int32_t NumFramesToSkipBetweenEvaluations; // 0x00(0x04)
	int32_t MinFramesToSkipBetweenCustomTicks; // 0x04(0x04)
	int32_t MaxFramesToSkipBetweenCustomTicks; // 0x08(0x04)
	float InnerDistance; // 0x0c(0x04)
	float OuterDistance; // 0x10(0x04)
};

// ScriptStruct SpecialEventGameplayRuntime.SpecialEventAudioHapticsAction
// Size: 0x20 (Inherited: 0x00)
struct FSpecialEventAudioHapticsAction {
	float LoudnessFloor; // 0x00(0x04)
	float LoudnessCeiling; // 0x04(0x04)
	float HapticsIntensity; // 0x08(0x04)
	int32_t ChannelIndex; // 0x0c(0x04)
	char bAffectsLeftLarge : 1; // 0x10(0x01)
	char bAffectsLeftSmall : 1; // 0x10(0x01)
	char bAffectsRightLarge : 1; // 0x10(0x01)
	char bAffectsRightSmall : 1; // 0x10(0x01)
	char pad_10_4 : 4; // 0x10(0x01)
	char pad_11[0xf]; // 0x11(0x0f)
};

// ScriptStruct SpecialEventGameplayRuntime.SpecialEventCursorMode
// Size: 0x298 (Inherited: 0x00)
struct FSpecialEventCursorMode {
	struct UUserWidget* WidgetClass; // 0x00(0x08)
	bool bAllowDebugCursorDrawing; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	struct FSpecialEventMathEaseData GamepadMoveEaseData; // 0x0c(0x0c)
	struct FScalableFloat GamepadMoveSpeed; // 0x18(0x28)
	struct FSpecialEventMathEaseData TouchMoveEaseData; // 0x40(0x0c)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct FScalableFloat TouchMoveSpeed; // 0x50(0x28)
	float TouchDeadzoneTreshold; // 0x78(0x04)
	float TouchAttenuator; // 0x7c(0x04)
	struct FScalableFloat MinCursorPercentForAdditiveRotationPitch; // 0x80(0x28)
	struct FScalableFloat MinCursorPercentForAdditiveRotationYaw; // 0xa8(0x28)
	struct FScalableFloat MaxAdditiveRotationPitch; // 0xd0(0x28)
	struct FScalableFloat MaxAdditiveRotationYaw; // 0xf8(0x28)
	struct FScalableFloat AdditiveRotationInterpSpeed; // 0x120(0x28)
	struct FScalableFloat ZoomInInterpSpeed; // 0x148(0x28)
	struct FScalableFloat ZoomOutInterpSpeed; // 0x170(0x28)
	struct FScalableFloat ZoomAdditiveFOV; // 0x198(0x28)
	struct FScalableFloat GamepadZoomMoveSpeed; // 0x1c0(0x28)
	struct FScalableFloat TouchZoomMoveSpeed; // 0x1e8(0x28)
	bool bAllowTrace; // 0x210(0x01)
	enum class ECollisionChannel TraceChannel; // 0x211(0x01)
	char pad_212[0x6]; // 0x212(0x06)
	struct FScalableFloat SweepRadius; // 0x218(0x28)
	struct FScalableFloat TraceDistance; // 0x240(0x28)
	struct FScalableFloat bTraceComplex; // 0x268(0x28)
	char pad_290[0x8]; // 0x290(0x08)
};

// ScriptStruct SpecialEventGameplayRuntime.SpecialEventMathEaseData
// Size: 0x0c (Inherited: 0x00)
struct FSpecialEventMathEaseData {
	enum class EEasingFunc EasingFunc; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float BlendExp; // 0x04(0x04)
	int32_t Steps; // 0x08(0x04)
};

// ScriptStruct SpecialEventGameplayRuntime.SpecialEventCursorStackEntry
// Size: 0x0c (Inherited: 0x00)
struct FSpecialEventCursorStackEntry {
	struct FGameplayTag CursorModeTag; // 0x00(0x04)
	struct TWeakObjectPtr<struct UObject> InstigatingObject; // 0x04(0x08)
};

// ScriptStruct SpecialEventGameplayRuntime.SpecialEventPhaseComponentNetModeInfo
// Size: 0x10 (Inherited: 0x00)
struct FSpecialEventPhaseComponentNetModeInfo {
	enum class ESpecialEventPhaseComponentNetModeType NetModeType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UActorComponent* ComponentClass; // 0x08(0x08)
};

// ScriptStruct SpecialEventGameplayRuntime.SpecialEventRewindComponentStateData
// Size: 0x08 (Inherited: 0x00)
struct FSpecialEventRewindComponentStateData {
	enum class ESpecialEventRewindComponentState State; // 0x00(0x01)
	char StateChangedCount; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float ServerWorldTime; // 0x04(0x04)
};

// ScriptStruct SpecialEventGameplayRuntime.SpecialEventRewindComponentFrame
// Size: 0x10 (Inherited: 0x0c)
struct FSpecialEventRewindComponentFrame : FFastArraySerializerItem {
	float ServerWorldTime; // 0x0c(0x04)
};

// ScriptStruct SpecialEventGameplayRuntime.SpecialEventRewindComponentRecording
// Size: 0x20 (Inherited: 0x00)
struct FSpecialEventRewindComponentRecording {
	char pad_0[0x8]; // 0x00(0x08)
	struct USpecialEventRewindComponent* RewindComponent; // 0x08(0x08)
	int32_t StartFrameIndex; // 0x10(0x04)
	int32_t EndFrameIndex; // 0x14(0x04)
	char pad_18[0x8]; // 0x18(0x08)
};

// ScriptStruct SpecialEventGameplayRuntime.SpecialEventRewindComponentFrame_PlayerPawn
// Size: 0x30 (Inherited: 0x10)
struct FSpecialEventRewindComponentFrame_PlayerPawn : FSpecialEventRewindComponentFrame {
	struct FVector_NetQuantize Location; // 0x10(0x18)
	char CompressedYaw; // 0x28(0x01)
	char CompressedControlRotationPitch; // 0x29(0x01)
	char pad_2A[0x6]; // 0x2a(0x06)
};

// ScriptStruct SpecialEventGameplayRuntime.SpecialEventRewindComponentRecordingFastArray_PlayerPawn
// Size: 0x118 (Inherited: 0x108)
struct FSpecialEventRewindComponentRecordingFastArray_PlayerPawn : FFastArraySerializer {
	struct TArray<struct FSpecialEventRewindComponentFrame_PlayerPawn> Frames; // 0x108(0x10)
};

// ScriptStruct SpecialEventGameplayRuntime.SpecialEventRewindComponentRecording_PlayerPawn
// Size: 0x20 (Inherited: 0x20)
struct FSpecialEventRewindComponentRecording_PlayerPawn : FSpecialEventRewindComponentRecording {
};

// ScriptStruct SpecialEventGameplayRuntime.PhaseLevelEntry
// Size: 0xb8 (Inherited: 0x00)
struct FPhaseLevelEntry {
	struct TSoftObjectPtr<UWorld> LevelToLoad; // 0x00(0x28)
	struct FString LevelName; // 0x28(0x10)
	bool bLoadLevelOnScriptStart; // 0x38(0x01)
	bool bLevelStartsVisible; // 0x39(0x01)
	bool bUnloadLevelOnPhaseEnd; // 0x3a(0x01)
	bool bExcludeFromServerPreload; // 0x3b(0x01)
	bool bMakeVisibleOnPhaseStart; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	struct FGameplayTagContainer MakeVisibleAtPhaseTags; // 0x40(0x20)
	struct FGameplayTagContainer UnloadLevelAtPhaseTags; // 0x60(0x20)
	struct FVector Location; // 0x80(0x18)
	struct FRotator Rotation; // 0x98(0x18)
	struct ULevelStreamingDynamic* LevelInstance; // 0xb0(0x08)
};

// ScriptStruct SpecialEventGameplayRuntime.PhaseInfo
// Size: 0x58 (Inherited: 0x00)
struct FPhaseInfo {
	struct ASpecialEventPhase* PhaseActorClass; // 0x00(0x08)
	struct FGameplayTag PhaseTag; // 0x08(0x04)
	float SequenceTime; // 0x0c(0x04)
	bool bSetRelevancyMode; // 0x10(0x01)
	enum class ESpecialRelevancyMode RelevancyMode; // 0x11(0x01)
	char pad_12[0x2]; // 0x12(0x02)
	int32_t NumOfSquadsInRelevancyGroup; // 0x14(0x04)
	struct FGameplayTagContainer RequireLevelsFromPhaseTags; // 0x18(0x20)
	bool bStartNextPhaseOnPhaseFinished; // 0x38(0x01)
	bool bGarbageCollectAtPhaseStartOnServer; // 0x39(0x01)
	bool bGarbageCollectAtPhaseStartOnClient; // 0x3a(0x01)
	char pad_3B[0x5]; // 0x3b(0x05)
	struct TArray<struct FPhaseLevelEntry> Levels; // 0x40(0x10)
	struct ASpecialEventPhase* PhaseActor; // 0x50(0x08)
};

// ScriptStruct SpecialEventGameplayRuntime.SpecialEventStatArray
// Size: 0x120 (Inherited: 0x108)
struct FSpecialEventStatArray : FFastArraySerializer {
	struct TArray<struct FSpecialEventStatArrayEntry> Stats; // 0x108(0x10)
	struct USpecialEventStatComponent* StatComponent; // 0x118(0x08)
};

