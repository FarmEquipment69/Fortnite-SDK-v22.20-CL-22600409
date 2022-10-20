// Enum MotionWarping.ERootMotionModifierState
enum class ERootMotionModifierState : uint8 {
	Waiting = 0,
	Active = 1,
	MarkedForRemoval = 2,
	Disabled = 3,
	ERootMotionModifierState_MAX = 4
};

// Enum MotionWarping.EMotionWarpRotationType
enum class EMotionWarpRotationType : uint8 {
	Default = 0,
	Facing = 1,
	EMotionWarpRotationType_MAX = 2
};

// Enum MotionWarping.EWarpPointAnimProvider
enum class EWarpPointAnimProvider : uint8 {
	None = 0,
	Static = 1,
	Bone = 2,
	EWarpPointAnimProvider_MAX = 3
};

// ScriptStruct MotionWarping.MotionWarpingWindowData
// Size: 0x10 (Inherited: 0x00)
struct FMotionWarpingWindowData {
	struct UAnimNotifyState_MotionWarping* AnimNotify; // 0x00(0x08)
	float StartTime; // 0x08(0x04)
	float EndTime; // 0x0c(0x04)
};

// ScriptStruct MotionWarping.MotionWarpingUpdateContext
// Size: 0x14 (Inherited: 0x00)
struct FMotionWarpingUpdateContext {
	struct TWeakObjectPtr<struct UAnimSequenceBase> Animation; // 0x00(0x08)
	float PreviousPosition; // 0x08(0x04)
	float CurrentPosition; // 0x0c(0x04)
	float Weight; // 0x10(0x04)
};

// ScriptStruct MotionWarping.MotionWarpingTarget
// Size: 0x48 (Inherited: 0x00)
struct FMotionWarpingTarget {
	struct FName Name; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FVector Location; // 0x08(0x18)
	struct FRotator Rotation; // 0x20(0x18)
	struct TWeakObjectPtr<struct USceneComponent> Component; // 0x38(0x08)
	struct FName BoneName; // 0x40(0x04)
	bool bFollowComponent; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
};

// ScriptStruct MotionWarping.MotionDeltaTrack
// Size: 0x60 (Inherited: 0x00)
struct FMotionDeltaTrack {
	struct TArray<struct FTransform> BoneTransformTrack; // 0x00(0x10)
	struct TArray<struct FVector> DeltaTranslationTrack; // 0x10(0x10)
	struct TArray<struct FRotator> DeltaRotationTrack; // 0x20(0x10)
	struct FVector TotalTranslation; // 0x30(0x18)
	struct FRotator TotalRotation; // 0x48(0x18)
};

// ScriptStruct MotionWarping.MotionDeltaTrackContainer
// Size: 0x10 (Inherited: 0x00)
struct FMotionDeltaTrackContainer {
	struct TArray<struct FMotionDeltaTrack> Tracks; // 0x00(0x10)
};

