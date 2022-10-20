// Enum HoagieRuntime.EHoagieBoostState
enum class EHoagieBoostState : uint8 {
	Unknown = 0,
	Ready = 1,
	Started = 2,
	Finished = 3,
	Failed = 4,
	EHoagieBoostState_MAX = 5
};

// Enum HoagieRuntime.EHoagieState
enum class EHoagieState : uint8 {
	STARTUP = 0,
	STARTUP_LIFT = 1,
	FLIGHT = 2,
	AUTO_LANDING = 3,
	SPIN_CRASHING = 4,
	CRASHING_NO_SPIN = 5,
	CRASH_LANDED = 6,
	LANDED = 7,
	EXPLODING = 8,
	NONE = 9,
	EHoagieState_MAX = 10
};

// ScriptStruct HoagieRuntime.FortHeliFlightModel
// Size: 0x1e8 (Inherited: 0x00)
struct FFortHeliFlightModel {
	char pad_0[0x1e0]; // 0x00(0x1e0)
	struct UFortHoagieVehicleConfigs* Configs; // 0x1e0(0x08)
};

// ScriptStruct HoagieRuntime.RotorHit
// Size: 0x1c (Inherited: 0x00)
struct FRotorHit {
	struct FActorInstanceHandle HitObjectHandle; // 0x00(0x18)
	float LastHitTimer; // 0x18(0x04)
};

// ScriptStruct HoagieRuntime.CachedSeatCollision
// Size: 0x08 (Inherited: 0x00)
struct FCachedSeatCollision {
	int32_t SeatIndex; // 0x00(0x04)
	bool bOccupied; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct HoagieRuntime.ReplicatedHeliControlState
// Size: 0x30 (Inherited: 0x00)
struct FReplicatedHeliControlState {
	struct FVector_NetQuantizeNormal Up; // 0x00(0x18)
	struct FVector_NetQuantizeNormal Forward; // 0x18(0x18)
};

// ScriptStruct HoagieRuntime.HoagieCmd
// Size: 0x78 (Inherited: 0x00)
struct FHoagieCmd {
	char pad_0[0x78]; // 0x00(0x78)
};

// ScriptStruct HoagieRuntime.HoagieInPersistent
// Size: 0x1c0 (Inherited: 0x180)
struct FHoagieInPersistent : FFortVehicleInPersistent {
	struct UFortHoagieVehicleConfigs* FortHoagieVehicleConfigs; // 0x180(0x08)
	enum class EHoagieState CurrentHoagieState; // 0x188(0x04)
	float LastRotorImpulseTime; // 0x18c(0x04)
	struct FVector RotorHitLinearImpulse; // 0x190(0x18)
	struct FVector RotorHitAngularImpulse; // 0x1a8(0x18)
};

// ScriptStruct HoagieRuntime.HoagieInternal
// Size: 0x270 (Inherited: 0x80)
struct FHoagieInternal : FFortVehicleInternalPersistent {
	struct FFortHeliFlightModel FlightModel; // 0x80(0x1e8)
	char pad_268[0x8]; // 0x268(0x08)
};

// ScriptStruct HoagieRuntime.HoagieOutContinuous
// Size: 0x38 (Inherited: 0x38)
struct FHoagieOutContinuous : FFortVehicleOutContinuous {
};

// ScriptStruct HoagieRuntime.HoagieOutPersistent
// Size: 0x20 (Inherited: 0x20)
struct FHoagieOutPersistent : FFortVehicleOutPersistent {
};

// ScriptStruct HoagieRuntime.HoagieDeathEffectInfo
// Size: 0x148 (Inherited: 0x00)
struct FHoagieDeathEffectInfo {
	float Damage; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FGameplayTagContainer DamageTags; // 0x08(0x20)
	struct FVector Momentum; // 0x28(0x18)
	struct FHitResult HitInfo; // 0x40(0xe0)
	struct AFortPawn* InstigatedBy; // 0x120(0x08)
	struct AActor* DamageCauser; // 0x128(0x08)
	struct FGameplayEffectContextHandle EffectContext; // 0x130(0x18)
};

