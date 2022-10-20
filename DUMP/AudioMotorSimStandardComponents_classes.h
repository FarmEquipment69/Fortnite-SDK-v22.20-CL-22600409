// Class AudioMotorSimStandardComponents.BoostMotorSimComponent
// Size: 0x150 (Inherited: 0xa8)
struct UBoostMotorSimComponent : UAudioMotorSimComponent {
	float ThrottleScale; // 0xa8(0x04)
	float InterpExp; // 0xac(0x04)
	float InterpTime; // 0xb0(0x04)
	bool ScaleThrottleWithBoostStrength; // 0xb4(0x01)
	bool bModifyPitch; // 0xb5(0x01)
	char pad_B6[0x2]; // 0xb6(0x02)
	float PitchModifierInterpSpeed; // 0xb8(0x04)
	char pad_BC[0x4]; // 0xbc(0x04)
	struct FRuntimeFloatCurve BoostToPitchCurve; // 0xc0(0x88)
	char pad_148[0x8]; // 0x148(0x08)
};

// Class AudioMotorSimStandardComponents.MotorPhysicsSimComponent
// Size: 0x108 (Inherited: 0xa8)
struct UMotorPhysicsSimComponent : UAudioMotorSimComponent {
	float Weight; // 0xa8(0x04)
	float EngineTorque; // 0xac(0x04)
	float BrakingHorsePower; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
	struct TArray<float> GearRatios; // 0xb8(0x10)
	float ClutchedGearRatio; // 0xc8(0x04)
	bool bUseInfiniteGears; // 0xcc(0x01)
	bool bAlwaysDownshiftToZerothGear; // 0xcd(0x01)
	char pad_CE[0x2]; // 0xce(0x02)
	float InfiniteGearRatio; // 0xd0(0x04)
	float UpShiftMaxRpm; // 0xd4(0x04)
	float DownShiftStartRpm; // 0xd8(0x04)
	float ClutchedForceModifier; // 0xdc(0x04)
	float EngineGearRatio; // 0xe0(0x04)
	float EngineFriction; // 0xe4(0x04)
	float GroundFriction; // 0xe8(0x04)
	float WindResistancePerVelocity; // 0xec(0x04)
	float ThrottleInterpolationTime; // 0xf0(0x04)
	float RpmInterpSpeed; // 0xf4(0x04)
	struct FMulticastInlineDelegate OnGearChangedEvent; // 0xf8(0x10)
};

// Class AudioMotorSimStandardComponents.ResistanceMotorSimComponent
// Size: 0x138 (Inherited: 0xa8)
struct UResistanceMotorSimComponent : UAudioMotorSimComponent {
	float UpSpeedMaxFriction; // 0xa8(0x04)
	float MinSpeed; // 0xac(0x04)
	struct FRuntimeFloatCurve SideSpeedFrictionCurve; // 0xb0(0x88)
};

// Class AudioMotorSimStandardComponents.ReverseMotorSimComponent
// Size: 0xb0 (Inherited: 0xa8)
struct UReverseMotorSimComponent : UAudioMotorSimComponent {
	float ReverseEngineResistanceModifier; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
};

// Class AudioMotorSimStandardComponents.RevLimiterMotorSimComponent
// Size: 0xc8 (Inherited: 0xa8)
struct URevLimiterMotorSimComponent : UAudioMotorSimComponent {
	float LimitTime; // 0xa8(0x04)
	float DecelScale; // 0xac(0x04)
	float AirMaxThrottleTime; // 0xb0(0x04)
	float SideSpeedThreshold; // 0xb4(0x04)
	float LimiterMaxRpm; // 0xb8(0x04)
	char pad_BC[0xc]; // 0xbc(0x0c)
};

// Class AudioMotorSimStandardComponents.RpmCurveMotorSimComponent
// Size: 0xc0 (Inherited: 0xa8)
struct URpmCurveMotorSimComponent : UAudioMotorSimComponent {
	struct TArray<struct FMotorSimGearCurve> Gears; // 0xa8(0x10)
	float InterpSpeed; // 0xb8(0x04)
	char pad_BC[0x4]; // 0xbc(0x04)
};

// Class AudioMotorSimStandardComponents.ThrottleStateMotorSimComponent
// Size: 0xe8 (Inherited: 0xa8)
struct UThrottleStateMotorSimComponent : UAudioMotorSimComponent {
	struct FMulticastInlineDelegate OnThrottleEngaged; // 0xa8(0x10)
	struct FMulticastInlineDelegate OnThrottleReleased; // 0xb8(0x10)
	struct FMulticastInlineDelegate OnEngineBlowoff; // 0xc8(0x10)
	float BlowoffMinThrottleTime; // 0xd8(0x04)
	char pad_DC[0xc]; // 0xdc(0x0c)
};

// Class AudioMotorSimStandardComponents.VelocitySyncMotorSimComponent
// Size: 0x150 (Inherited: 0xa8)
struct UVelocitySyncMotorSimComponent : UAudioMotorSimComponent {
	float NoThrottleTime; // 0xa8(0x04)
	float SpeedThreshold; // 0xac(0x04)
	struct FRuntimeFloatCurve SpeedToRpmCurve; // 0xb0(0x88)
	float InterpSpeed; // 0x138(0x04)
	float InterpTime; // 0x13c(0x04)
	float FirstGearThrottleThreshold; // 0x140(0x04)
	char pad_144[0xc]; // 0x144(0x0c)
};

