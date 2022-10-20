// Enum GameplayCameras.ECameraAnimationPlaySpace
enum class ECameraAnimationPlaySpace : uint8 {
	CameraLocal = 0,
	World = 1,
	UserDefined = 2,
	ECameraAnimationPlaySpace_MAX = 3
};

// Enum GameplayCameras.ECameraAnimationEasingType
enum class ECameraAnimationEasingType : uint8 {
	Linear = 0,
	Sinusoidal = 1,
	Quadratic = 2,
	Cubic = 3,
	Quartic = 4,
	Quintic = 5,
	Exponential = 6,
	Circular = 7,
	ECameraAnimationEasingType_MAX = 8
};

// Enum GameplayCameras.EOscillatorWaveform
enum class EOscillatorWaveform : uint8 {
	SineWave = 0,
	PerlinNoise = 1,
	EOscillatorWaveform_MAX = 2
};

// Enum GameplayCameras.EInitialOscillatorOffset
enum class EInitialOscillatorOffset : uint8 {
	EOO_OffsetRandom = 0,
	EOO_OffsetZero = 1,
	EOO_MAX = 2
};

// Enum GameplayCameras.EInitialWaveOscillatorOffsetType
enum class EInitialWaveOscillatorOffsetType : uint8 {
	Random = 0,
	Zero = 1,
	EInitialWaveOscillatorOffsetType_MAX = 2
};

// ScriptStruct GameplayCameras.CameraAnimationParams
// Size: 0x40 (Inherited: 0x00)
struct FCameraAnimationParams {
	float PlayRate; // 0x00(0x04)
	float Scale; // 0x04(0x04)
	enum class ECameraAnimationEasingType EaseInType; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float EaseInDuration; // 0x0c(0x04)
	enum class ECameraAnimationEasingType EaseOutType; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float EaseOutDuration; // 0x14(0x04)
	bool bLoop; // 0x18(0x01)
	bool bRandomStartTime; // 0x19(0x01)
	char pad_1A[0x2]; // 0x1a(0x02)
	float DurationOverride; // 0x1c(0x04)
	enum class ECameraAnimationPlaySpace Playspace; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct FRotator UserPlaySpaceRot; // 0x28(0x18)
};

// ScriptStruct GameplayCameras.CameraAnimationHandle
// Size: 0x04 (Inherited: 0x00)
struct FCameraAnimationHandle {
	char pad_0[0x4]; // 0x00(0x04)
};

// ScriptStruct GameplayCameras.ActiveCameraAnimationInfo
// Size: 0x70 (Inherited: 0x00)
struct FActiveCameraAnimationInfo {
	struct UCameraAnimationSequence* Sequence; // 0x00(0x08)
	struct FCameraAnimationParams Params; // 0x08(0x40)
	struct FCameraAnimationHandle Handle; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct UCameraAnimationSequencePlayer* Player; // 0x50(0x08)
	struct UCameraAnimationSequenceCameraStandIn* CameraStandIn; // 0x58(0x08)
	float EaseInCurrentTime; // 0x60(0x04)
	float EaseOutCurrentTime; // 0x64(0x04)
	bool bIsEasingIn; // 0x68(0x01)
	bool bIsEasingOut; // 0x69(0x01)
	char pad_6A[0x6]; // 0x6a(0x06)
};

// ScriptStruct GameplayCameras.FOscillator
// Size: 0x0c (Inherited: 0x00)
struct FFOscillator {
	float Amplitude; // 0x00(0x04)
	float Frequency; // 0x04(0x04)
	enum class EInitialOscillatorOffset InitialOffset; // 0x08(0x01)
	enum class EOscillatorWaveform Waveform; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
};

// ScriptStruct GameplayCameras.ROscillator
// Size: 0x24 (Inherited: 0x00)
struct FROscillator {
	struct FFOscillator Pitch; // 0x00(0x0c)
	struct FFOscillator Yaw; // 0x0c(0x0c)
	struct FFOscillator Roll; // 0x18(0x0c)
};

// ScriptStruct GameplayCameras.VOscillator
// Size: 0x24 (Inherited: 0x00)
struct FVOscillator {
	struct FFOscillator X; // 0x00(0x0c)
	struct FFOscillator Y; // 0x0c(0x0c)
	struct FFOscillator Z; // 0x18(0x0c)
};

// ScriptStruct GameplayCameras.PerlinNoiseShaker
// Size: 0x08 (Inherited: 0x00)
struct FPerlinNoiseShaker {
	float Amplitude; // 0x00(0x04)
	float Frequency; // 0x04(0x04)
};

// ScriptStruct GameplayCameras.WaveOscillator
// Size: 0x0c (Inherited: 0x00)
struct FWaveOscillator {
	float Amplitude; // 0x00(0x04)
	float Frequency; // 0x04(0x04)
	enum class EInitialWaveOscillatorOffsetType InitialOffsetType; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

