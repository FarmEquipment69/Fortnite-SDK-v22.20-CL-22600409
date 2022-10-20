// Enum HeadMountedDisplay.EOrientPositionSelector
enum class EOrientPositionSelector : uint8 {
	Orientation = 0,
	Position = 1,
	OrientationAndPosition = 2,
	EOrientPositionSelector_MAX = 3
};

// Enum HeadMountedDisplay.EHMDTrackingOrigin
enum class EHMDTrackingOrigin : uint8 {
	Floor = 0,
	Eye = 1,
	Stage = 2,
	EHMDTrackingOrigin_MAX = 3
};

// Enum HeadMountedDisplay.EHMDWornState
enum class EHMDWornState : uint8 {
	Unknown = 0,
	Worn = 1,
	NotWorn = 2,
	EHMDWornState_MAX = 3
};

// Enum HeadMountedDisplay.EXRDeviceConnectionResult
enum class EXRDeviceConnectionResult : uint8 {
	NoTrackingSystem = 0,
	FeatureNotSupported = 1,
	NoValidViewport = 2,
	MiscFailure = 3,
	Success = 4,
	EXRDeviceConnectionResult_MAX = 5
};

// Enum HeadMountedDisplay.EXRSystemFlags
enum class EXRSystemFlags : uint8 {
	NoFlags = 0,
	IsAR = 1,
	IsTablet = 2,
	IsHeadMounted = 4,
	SupportsHandTracking = 8,
	EXRSystemFlags_MAX = 9
};

// Enum HeadMountedDisplay.ESpectatorScreenMode
enum class ESpectatorScreenMode : uint8 {
	Disabled = 0,
	SingleEyeLetterboxed = 1,
	Undistorted = 2,
	Distorted = 3,
	SingleEye = 4,
	SingleEyeCroppedToFill = 5,
	Texture = 6,
	TexturePlusEye = 7,
	ESpectatorScreenMode_MAX = 8
};

// Enum HeadMountedDisplay.EXRTrackedDeviceType
enum class EXRTrackedDeviceType : uint8 {
	HeadMountedDisplay = 0,
	Controller = 1,
	TrackingReference = 2,
	Other = 3,
	Invalid = 254,
	Any = 255,
	EXRTrackedDeviceType_MAX = 256
};

// Enum HeadMountedDisplay.EHandKeypoint
enum class EHandKeypoint : uint8 {
	Palm = 0,
	Wrist = 1,
	ThumbMetacarpal = 2,
	ThumbProximal = 3,
	ThumbDistal = 4,
	ThumbTip = 5,
	IndexMetacarpal = 6,
	IndexProximal = 7,
	IndexIntermediate = 8,
	IndexDistal = 9,
	IndexTip = 10,
	MiddleMetacarpal = 11,
	MiddleProximal = 12,
	MiddleIntermediate = 13,
	MiddleDistal = 14,
	MiddleTip = 15,
	RingMetacarpal = 16,
	RingProximal = 17,
	RingIntermediate = 18,
	RingDistal = 19,
	RingTip = 20,
	LittleMetacarpal = 21,
	LittleProximal = 22,
	LittleIntermediate = 23,
	LittleDistal = 24,
	LittleTip = 25,
	EHandKeypoint_MAX = 26
};

// Enum HeadMountedDisplay.EXRVisualType
enum class EXRVisualType : uint8 {
	Controller = 0,
	Hand = 1,
	EXRVisualType_MAX = 2
};

// Enum HeadMountedDisplay.ETrackingStatus
enum class ETrackingStatus : uint8 {
	NotTracked = 0,
	InertialOnly = 1,
	Tracked = 2,
	ETrackingStatus_MAX = 3
};

// Enum HeadMountedDisplay.ESpatialInputGestureAxis
enum class ESpatialInputGestureAxis : uint8 {
	None = 0,
	Manipulation = 1,
	Navigation = 2,
	NavigationRails = 3,
	ESpatialInputGestureAxis_MAX = 4
};

// ScriptStruct HeadMountedDisplay.XRHMDData
// Size: 0x60 (Inherited: 0x00)
struct FXRHMDData {
	bool bValid; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FName DeviceName; // 0x04(0x04)
	struct FGuid ApplicationInstanceID; // 0x08(0x10)
	enum class ETrackingStatus TrackingStatus; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct FVector Position; // 0x20(0x18)
	char pad_38[0x8]; // 0x38(0x08)
	struct FQuat Rotation; // 0x40(0x20)
};

// ScriptStruct HeadMountedDisplay.XRMotionControllerData
// Size: 0xe0 (Inherited: 0x00)
struct FXRMotionControllerData {
	bool bValid; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FName DeviceName; // 0x04(0x04)
	struct FGuid ApplicationInstanceID; // 0x08(0x10)
	enum class EXRVisualType DeviceVisualType; // 0x18(0x01)
	enum class EControllerHand HandIndex; // 0x19(0x01)
	enum class ETrackingStatus TrackingStatus; // 0x1a(0x01)
	char pad_1B[0x5]; // 0x1b(0x05)
	struct FVector GripPosition; // 0x20(0x18)
	char pad_38[0x8]; // 0x38(0x08)
	struct FQuat GripRotation; // 0x40(0x20)
	struct FVector AimPosition; // 0x60(0x18)
	char pad_78[0x8]; // 0x78(0x08)
	struct FQuat AimRotation; // 0x80(0x20)
	struct TArray<struct FVector> HandKeyPositions; // 0xa0(0x10)
	struct TArray<struct FQuat> HandKeyRotations; // 0xb0(0x10)
	struct TArray<float> HandKeyRadii; // 0xc0(0x10)
	bool bIsGrasped; // 0xd0(0x01)
	char pad_D1[0xf]; // 0xd1(0x0f)
};

// ScriptStruct HeadMountedDisplay.XRDeviceId
// Size: 0x08 (Inherited: 0x00)
struct FXRDeviceId {
	struct FName SystemName; // 0x00(0x04)
	int32_t DeviceID; // 0x04(0x04)
};

// ScriptStruct HeadMountedDisplay.XRGestureConfig
// Size: 0x06 (Inherited: 0x00)
struct FXRGestureConfig {
	bool bTap; // 0x00(0x01)
	bool bHold; // 0x01(0x01)
	enum class ESpatialInputGestureAxis AxisGesture; // 0x02(0x01)
	bool bNavigationAxisX; // 0x03(0x01)
	bool bNavigationAxisY; // 0x04(0x01)
	bool bNavigationAxisZ; // 0x05(0x01)
};

