// Enum NevadaRuntime.ETractorBeamState
enum class ETractorBeamState : uint8 {
	TBS_Inactive = 0,
	TBS_Charging = 1,
	TBS_Active = 2,
	TBS_MAX = 3
};

// Enum NevadaRuntime.ENevadaFlightStates
enum class ENevadaFlightStates : uint8 {
	FLIGHT = 0,
	CRASHING = 1,
	CRASHED = 2,
	REBOOTING = 3,
	LANDING = 4,
	LANDED = 5,
	IDLE = 6,
	NONE = 7,
	ENevadaFlightStates_MAX = 8
};

// ScriptStruct NevadaRuntime.NevadaAudioUpdateContext
// Size: 0x01 (Inherited: 0x00)
struct FNevadaAudioUpdateContext {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct NevadaRuntime.NevadaOutContinuous
// Size: 0x40 (Inherited: 0x38)
struct FNevadaOutContinuous : FFortVehicleOutContinuous {
	float AltimeterTraceHitDistance; // 0x38(0x04)
	float TractorBeamAppliedForceMagnitude; // 0x3c(0x04)
};

// ScriptStruct NevadaRuntime.NevadaOutPersistent
// Size: 0x448 (Inherited: 0x20)
struct FNevadaOutPersistent : FFortVehicleOutPersistent {
	char pad_20[0x428]; // 0x20(0x428)
};

// ScriptStruct NevadaRuntime.NevadaState
// Size: 0x14 (Inherited: 0x00)
struct FNevadaState {
	enum class ENevadaFlightStates CurrentStatus; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t LivesRemaining; // 0x04(0x04)
	bool bHijackingActive; // 0x08(0x01)
	bool bPilotBubbleCollisionEnabled; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	float CurrentBatteryCharge; // 0x0c(0x04)
	bool bCannonEnabled; // 0x10(0x01)
	bool bTractorBeamEnabled; // 0x11(0x01)
	char pad_12[0x2]; // 0x12(0x02)
};

// ScriptStruct NevadaRuntime.NevadaMoveModeConfig
// Size: 0x14 (Inherited: 0x00)
struct FNevadaMoveModeConfig {
	float ThrustForce; // 0x00(0x04)
	float LiftForce; // 0x04(0x04)
	float MaxHorizontalSpeed; // 0x08(0x04)
	float MaxVerticalSpeed; // 0x0c(0x04)
	float DragForceMultiplier; // 0x10(0x04)
};

// ScriptStruct NevadaRuntime.DampedSpringConfig
// Size: 0x0c (Inherited: 0x00)
struct FDampedSpringConfig {
	float Stiffness; // 0x00(0x04)
	float Damping; // 0x04(0x04)
	float MaxAccel; // 0x08(0x04)
};

// ScriptStruct NevadaRuntime.NevadaInPersistent
// Size: 0x290 (Inherited: 0x180)
struct FNevadaInPersistent : FFortVehicleInPersistent {
	struct UFortNevadaVehicleConfigs* FortNevadaVehicleConfigs; // 0x180(0x08)
	bool bBoostThrust; // 0x188(0x01)
	bool bBoostDrag; // 0x189(0x01)
	char pad_18A[0x2]; // 0x18a(0x02)
	float TractorBeamExtraLengthForExtents; // 0x18c(0x04)
	bool bUseTractorBeamUprightForce; // 0x190(0x01)
	char pad_191[0x7]; // 0x191(0x07)
	struct FVector CrashingDesiredUp; // 0x198(0x18)
	enum class ENevadaFlightStates CurrentVehicleState; // 0x1b0(0x01)
	char pad_1B1[0xdf]; // 0x1b1(0xdf)
};

