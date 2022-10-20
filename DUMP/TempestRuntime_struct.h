// Enum TempestRuntime.ETempestState
enum class ETempestState : uint8 {
	Unformed = 0,
	Forming = 1,
	Active = 2,
	Dissipating = 3,
	Complete = 4,
	ETempestState_MAX = 5
};

// Enum TempestRuntime.ETempestMovementMode
enum class ETempestMovementMode : uint8 {
	EnvQuery = 0,
	Path = 1,
	ETempestMovementMode_MAX = 2
};

// ScriptStruct TempestRuntime.TempestStateInfo
// Size: 0x0c (Inherited: 0x00)
struct FTempestStateInfo {
	enum class ETempestState CurrentState; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float StartTime; // 0x04(0x04)
	float EndTime; // 0x08(0x04)
};

// ScriptStruct TempestRuntime.TempestReplicatedMovementData
// Size: 0x50 (Inherited: 0x00)
struct FTempestReplicatedMovementData {
	struct FVector TargetServerLocation; // 0x00(0x18)
	struct FVector LastServerLocation; // 0x18(0x18)
	struct FQuat LastServerRotation; // 0x30(0x20)
};

// ScriptStruct TempestRuntime.TempestStateChangeTimerInfo
// Size: 0x08 (Inherited: 0x00)
struct FTempestStateChangeTimerInfo {
	char pad_0[0x8]; // 0x00(0x08)
};

