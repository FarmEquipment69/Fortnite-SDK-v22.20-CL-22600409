// Enum TankRuntime.ETankAimingMode
enum class ETankAimingMode : uint8 {
	CameraRotationNoTrace = 0,
	CameraTraceFromPivotSocket = 1,
	CameraTraceFromDistanceScalar = 2,
	ETankAimingMode_MAX = 3
};

// ScriptStruct TankRuntime.TankAnimAimingData
// Size: 0x60 (Inherited: 0x00)
struct FTankAnimAimingData {
	char pad_0[0x60]; // 0x00(0x60)
};

// ScriptStruct TankRuntime.ServerSocketTransformOverride
// Size: 0x38 (Inherited: 0x00)
struct FServerSocketTransformOverride {
	struct FName SocketName; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FVector PivotOffset; // 0x08(0x18)
	struct FVector OffsetFromPivot; // 0x20(0x18)
};

// ScriptStruct TankRuntime.TankAudioUpdateContext
// Size: 0xb8 (Inherited: 0x00)
struct FTankAudioUpdateContext {
	bool bIsAwake; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float SpeedParamValue; // 0x04(0x04)
	float LeftTrackPower; // 0x08(0x04)
	float RightTrackPower; // 0x0c(0x04)
	float TurningParamValue; // 0x10(0x04)
	int32_t CurrentGear; // 0x14(0x04)
	float AccelSpeedThreshold; // 0x18(0x04)
	float LastGearChangeTime; // 0x1c(0x04)
	float AccelWaitTime; // 0x20(0x04)
	bool bTurningRight; // 0x24(0x01)
	bool bTurningLeft; // 0x25(0x01)
	bool bPreviousTryMotion; // 0x26(0x01)
	char pad_27[0x1]; // 0x27(0x01)
	float LastForwardSpeed; // 0x28(0x04)
	float TimeUntilAccelOneShotFade; // 0x2c(0x04)
	float DecelSpeedThreshold; // 0x30(0x04)
	float EngineIdleThreshold; // 0x34(0x04)
	struct FVector2D WeaponsMovementThreshold; // 0x38(0x10)
	struct FName CannonSocketName; // 0x48(0x04)
	struct FName TurretSocketName; // 0x4c(0x04)
	int32_t SurfaceID; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
	struct UAudioComponent* DecelOneShot; // 0x58(0x08)
	struct UAudioComponent* AccelOneShot; // 0x60(0x08)
	struct UAudioComponent* TurningOneShot; // 0x68(0x08)
	struct UFortLayeredAudioComponent* TracksLeftAudio; // 0x70(0x08)
	struct UFortLayeredAudioComponent* TracksRightAudio; // 0x78(0x08)
	char pad_80[0x38]; // 0x80(0x38)
};

// ScriptStruct TankRuntime.TankWeaponAimingData
// Size: 0x1c0 (Inherited: 0x00)
struct FTankWeaponAimingData {
	int32_t SeatIndex; // 0x00(0x04)
	bool bAimRotationLerpWithEasing; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct FScalableFloat AimRotationLerpSpeed; // 0x08(0x28)
	struct FRuntimeFloatCurve AimYawRotationEasingCurve; // 0x30(0x88)
	struct FRuntimeFloatCurve AimPitchRotationEasingCurve; // 0xb8(0x88)
	enum class ETankAimingMode AimingMode; // 0x140(0x01)
	char pad_141[0x7]; // 0x141(0x07)
	struct FScalableFloat AimingCameraToMuzzleDistanceScalar; // 0x148(0x28)
	struct FScalableFloat AimingWhileTargetingCameraToMuzzleDistanceScalar; // 0x170(0x28)
	struct FScalableFloat AimingPitchAdjust; // 0x198(0x28)
};

