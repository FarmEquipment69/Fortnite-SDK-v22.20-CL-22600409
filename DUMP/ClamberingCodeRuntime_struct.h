// Enum ClamberingCodeRuntime.EClamberingType
enum class EClamberingType : uint8 {
	Invalid = 0,
	Ledge = 1,
	Window = 2,
	EClamberingType_MAX = 3
};

// Enum ClamberingCodeRuntime.EClamberingState
enum class EClamberingState : uint8 {
	Inactive = 0,
	Targeting = 1,
	Ledge_Moving = 2,
	Ledge_Failed = 3,
	Window_Moving = 4,
	Window_Failed = 5,
	EClamberingState_MAX = 6
};

// Enum ClamberingCodeRuntime.EClamberingFailedReason
enum class EClamberingFailedReason : uint8 {
	None = 0,
	Unknown = 1,
	DebugForced = 2,
	OwnerDied = 3,
	OwnerDBNO = 4,
	OwnerLaunched = 5,
	SynchedActionNotStarted = 6,
	Ledge_PlayerTooFar = 7,
	Ledge_TargetLocationInvalid = 8,
	Ledge_TargetActorInvalid = 9,
	Ledge_TargetActorDestroyed = 10,
	Ledge_BlockerEncountered = 11,
	EClamberingFailedReason_MAX = 12
};

// Enum ClamberingCodeRuntime.EClamberingActivationMode
enum class EClamberingActivationMode : uint8 {
	ClientPreference = 0,
	ForceAutoClambering = 1,
	ForceManualClambering = 2,
	EClamberingActivationMode_MAX = 3
};

// Enum ClamberingCodeRuntime.EClamberingDebugTextAlign
enum class EClamberingDebugTextAlign : uint8 {
	Left = 0,
	Right = 1,
	Center = 2,
	EClamberingDebugTextAlign_MAX = 3
};

// ScriptStruct ClamberingCodeRuntime.ClamberingInputConfig
// Size: 0x210 (Inherited: 0x00)
struct FClamberingInputConfig {
	struct FScalableFloat ClamberActivationHorizontalRange; // 0x00(0x28)
	struct FScalableFloat ClamberActivationVerticalRange; // 0x28(0x28)
	struct FScalableFloat EnableInputDelay; // 0x50(0x28)
	struct FScalableFloat QueuedInputWindow; // 0x78(0x28)
	struct FScalableFloat HeldInputDuration; // 0xa0(0x28)
	enum class EClamberingActivationMode ActivationMode; // 0xc8(0x01)
	char pad_C9[0x7]; // 0xc9(0x07)
	struct FScalableFloat AutoStartMovementThreshold; // 0xd0(0x28)
	struct FScalableFloat AutoStartLookAtThreshold; // 0xf8(0x28)
	struct FScalableFloat AutoStartWallCheckCastRadius; // 0x120(0x28)
	struct FScalableFloat AutoStartWallCheckHorizontalRange; // 0x148(0x28)
	struct FScalableFloat AutoStartWallCheckLookAtThresholdMultiplier; // 0x170(0x28)
	struct FScalableFloat TargetInvalidateDistance; // 0x198(0x28)
	struct FScalableFloat TargetAimInvalidateAngle; // 0x1c0(0x28)
	struct FScalableFloat TargetActorMovementInvalidateDistance; // 0x1e8(0x28)
};

// ScriptStruct ClamberingCodeRuntime.ClamberingTargetingConfig_Ledge
// Size: 0x2a8 (Inherited: 0x00)
struct FClamberingTargetingConfig_Ledge {
	struct FScalableFloat ForwardCastDistance; // 0x00(0x28)
	struct FScalableFloat ForwardCastRadius; // 0x28(0x28)
	struct FScalableFloat FowardCast2D; // 0x50(0x28)
	struct FScalableFloat VerticalSurfaceThreshold; // 0x78(0x28)
	struct FScalableFloat HorizontalSurfaceThreshold; // 0xa0(0x28)
	struct FScalableFloat UpwardDistanceCapsuleHeightMultiplier; // 0xc8(0x28)
	struct FScalableFloat UpwardStartDistanceCapsuleHeightMultiplier; // 0xf0(0x28)
	struct FScalableFloat DownwardDistanceCapsuleHeightMultiplier; // 0x118(0x28)
	struct FScalableFloat MinimumLedgeHeight; // 0x140(0x28)
	struct FScalableFloat MinimumLedgeHeightWater; // 0x168(0x28)
	struct FScalableFloat ForwardSphereCastRadius; // 0x190(0x28)
	struct FScalableFloat DownwardSphereCastRadius; // 0x1b8(0x28)
	struct FScalableFloat AllowNonWalkableSurfaces; // 0x1e0(0x28)
	struct FScalableFloat TargetValidationEnabled; // 0x208(0x28)
	struct FScalableFloat TargetValidationCapsuleRadiusModifier; // 0x230(0x28)
	struct FScalableFloat TargetValidationCapsuleHalfHeightModifier; // 0x258(0x28)
	struct FScalableFloat TargetValidationCapsuleBottomVerticalOffset; // 0x280(0x28)
};

// ScriptStruct ClamberingCodeRuntime.ClamberingTargetingConfig_Ledge_CachedContextualValues
// Size: 0x08 (Inherited: 0x00)
struct FClamberingTargetingConfig_Ledge_CachedContextualValues {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct ClamberingCodeRuntime.ClamberingTargetingDebugDrawData
// Size: 0x28 (Inherited: 0x00)
struct FClamberingTargetingDebugDrawData {
	char pad_0[0x28]; // 0x00(0x28)
};

// ScriptStruct ClamberingCodeRuntime.ClamberingTargetingDebugDrawData_Capsule
// Size: 0x50 (Inherited: 0x28)
struct FClamberingTargetingDebugDrawData_Capsule : FClamberingTargetingDebugDrawData {
	char pad_28[0x28]; // 0x28(0x28)
};

// ScriptStruct ClamberingCodeRuntime.ClamberingTargetingDebugDrawData_Line
// Size: 0x40 (Inherited: 0x28)
struct FClamberingTargetingDebugDrawData_Line : FClamberingTargetingDebugDrawData {
	char pad_28[0x18]; // 0x28(0x18)
};

// ScriptStruct ClamberingCodeRuntime.ClamberingTargetingDebugDrawData_Sphere
// Size: 0x30 (Inherited: 0x28)
struct FClamberingTargetingDebugDrawData_Sphere : FClamberingTargetingDebugDrawData {
	char pad_28[0x8]; // 0x28(0x08)
};

// ScriptStruct ClamberingCodeRuntime.ClamberingTargetingDebugDrawData_DirectionalArrow
// Size: 0x48 (Inherited: 0x28)
struct FClamberingTargetingDebugDrawData_DirectionalArrow : FClamberingTargetingDebugDrawData {
	char pad_28[0x20]; // 0x28(0x20)
};

// ScriptStruct ClamberingCodeRuntime.ClamberingTargetingDebugDrawData_CapsuleCast
// Size: 0x70 (Inherited: 0x50)
struct FClamberingTargetingDebugDrawData_CapsuleCast : FClamberingTargetingDebugDrawData_Capsule {
	char pad_50[0x20]; // 0x50(0x20)
};

// ScriptStruct ClamberingCodeRuntime.ClamberingTargetingDebugDrawData_SphereCast
// Size: 0x48 (Inherited: 0x30)
struct FClamberingTargetingDebugDrawData_SphereCast : FClamberingTargetingDebugDrawData_Sphere {
	char pad_30[0x18]; // 0x30(0x18)
};

// ScriptStruct ClamberingCodeRuntime.ClamberingTargetingDebugData
// Size: 0x01 (Inherited: 0x00)
struct FClamberingTargetingDebugData {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct ClamberingCodeRuntime.ClamberingTargetingDebugData_Ledge
// Size: 0x01 (Inherited: 0x01)
struct FClamberingTargetingDebugData_Ledge : FClamberingTargetingDebugData {
};

// ScriptStruct ClamberingCodeRuntime.ClamberingTargetingData
// Size: 0xd0 (Inherited: 0x00)
struct FClamberingTargetingData {
	enum class EClamberingType Type; // 0x00(0x01)
	char bValid : 1; // 0x01(0x01)
	char pad_1_1 : 7; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct AActor* SourceActor; // 0x08(0x08)
	struct FVector SourceLocation; // 0x10(0x18)
	struct FVector SourceAim; // 0x28(0x18)
	struct FVector WallLocation; // 0x40(0x18)
	struct FVector WallNormal; // 0x58(0x18)
	struct FVector TargetLocation; // 0x70(0x18)
	struct FVector TargetNormal; // 0x88(0x18)
	struct AActor* TargetActor; // 0xa0(0x08)
	struct UActorComponent* TargetActorComponent; // 0xa8(0x08)
	struct FVector TargetActorComponentLocation; // 0xb0(0x18)
	struct FName TargetActorBoneName; // 0xc8(0x04)
	char pad_CC[0x4]; // 0xcc(0x04)
};

// ScriptStruct ClamberingCodeRuntime.ReplicatedClamberingTargetingData
// Size: 0x78 (Inherited: 0x00)
struct FReplicatedClamberingTargetingData {
	enum class EClamberingType Type; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FVector_NetQuantize10 SourceLocation; // 0x08(0x18)
	struct FVector_NetQuantize100 WallLocation; // 0x20(0x18)
	uint16_t WallNormalYawQuantized; // 0x38(0x02)
	uint16_t WallNormalPitchQuantized; // 0x3a(0x02)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct FVector_NetQuantize100 TargetLocation; // 0x40(0x18)
	uint16_t TargetNormalYawQuantized; // 0x58(0x02)
	uint16_t TargetNormalPitchQuantized; // 0x5a(0x02)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct AActor* TargetActor; // 0x60(0x08)
	struct UActorComponent* TargetActorComponent; // 0x68(0x08)
	struct FName TargetActorBoneName; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
};

// ScriptStruct ClamberingCodeRuntime.ReplicatedClamberingTargetingData_SimClient
// Size: 0x38 (Inherited: 0x00)
struct FReplicatedClamberingTargetingData_SimClient {
	enum class EClamberingType Type; // 0x00(0x01)
	char pad_1[0x1]; // 0x01(0x01)
	uint16_t WallNormalYawQuantized; // 0x02(0x02)
	char pad_4[0x4]; // 0x04(0x04)
	struct FVector_NetQuantize100 TargetLocation; // 0x08(0x18)
	struct AActor* TargetActor; // 0x20(0x08)
	struct UActorComponent* TargetActorComponent; // 0x28(0x08)
	struct FName TargetActorBoneName; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct ClamberingCodeRuntime.ClamberingMovementConfig_Ledge
// Size: 0x50 (Inherited: 0x00)
struct FClamberingMovementConfig_Ledge {
	struct FScalableFloat Duration; // 0x00(0x28)
	struct FScalableFloat BlockCheckTickRate; // 0x28(0x28)
};

// ScriptStruct ClamberingCodeRuntime.ClamberingAnalytics_ClamberEvent
// Size: 0x28 (Inherited: 0x00)
struct FClamberingAnalytics_ClamberEvent {
	int32_t MatchTime; // 0x00(0x04)
	enum class EClamberingType ClamberType; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct FVector ClamberLocation; // 0x08(0x18)
	enum class EClamberingFailedReason FailureReason; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

