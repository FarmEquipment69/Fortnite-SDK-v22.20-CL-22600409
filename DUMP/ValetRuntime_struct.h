// Enum ValetRuntime.EFortDagwoodSimEvent
enum class EFortDagwoodSimEvent : uint8 {
	EnterLandscape = 0,
	ExitLandscape = 1,
	EnterRoad = 2,
	ExitRoad = 3,
	Explode = 4,
	FlipImpact = 5,
	StartBoost = 6,
	FinishBoost = 7,
	EFortDagwoodSimEvent_MAX = 8
};

// Enum ValetRuntime.EControlsPrototypes
enum class EControlsPrototypes : uint8 {
	CameraSteering = 0,
	NonCameraSteering = 1,
	HybridCameraSteering = 2,
	MaxCount = 3,
	EControlsPrototypes_MAX = 4
};

// Enum ValetRuntime.EPoppedTireReactionStates
enum class EPoppedTireReactionStates : uint8 {
	None = 0,
	VeerLeft = 1,
	VeerRight = 2,
	Wiggle = 3,
	Yaw90 = 4,
	FlipPitch = 5,
	FlipRoll = 6,
	EPoppedTireReactionStates_MAX = 7
};

// Enum ValetRuntime.ETireLocations
enum class ETireLocations : uint8 {
	FrontRight = 0,
	FrontLeft = 1,
	BackRight = 2,
	BackLeft = 3,
	ETireLocations_MAX = 4
};

// Enum ValetRuntime.EVehicleClass
enum class EVehicleClass : uint8 {
	Sedan = 0,
	Sport = 1,
	PickupTruck = 2,
	SemiTruck = 3,
	EVehicleClass_MAX = 4
};

// ScriptStruct ValetRuntime.FortDagwoodCmd
// Size: 0x30 (Inherited: 0x00)
struct FFortDagwoodCmd {
	float ForwardAlpha; // 0x00(0x04)
	float RightAlpha; // 0x04(0x04)
	float AccelerationAlpha; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FVector_NetQuantize100 MovementDir; // 0x10(0x18)
	char bBoost : 1; // 0x28(0x01)
	char bHandbrake : 1; // 0x28(0x01)
	char pad_28_2 : 6; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct ValetRuntime.DagwoodInPersistent
// Size: 0x240 (Inherited: 0x180)
struct FDagwoodInPersistent : FFortVehicleInPersistent {
	struct UFortDagwoodVehicleConfigs* FortDagwoodVehicleConfigs; // 0x180(0x08)
	struct FDagwoodRuntimeModifiers DagwoodRuntimeModifiedProperties; // 0x188(0x70)
	char pad_1F8[0x48]; // 0x1f8(0x48)
};

// ScriptStruct ValetRuntime.DagwoodRuntimeModifiers
// Size: 0x70 (Inherited: 0x00)
struct FDagwoodRuntimeModifiers {
	struct FRuntimeBoostInfo BoostInfo; // 0x00(0x18)
	struct FRuntimeFuelInfo FuelInfo; // 0x18(0x0c)
	struct FRuntimeSpringsInfo SpringsInfo; // 0x24(0x20)
	bool bDamageFriendlyVehicles; // 0x44(0x01)
	bool bDamageOtherVehicles; // 0x45(0x01)
	bool bDamageOwnVehicle; // 0x46(0x01)
	bool bDamageAllowedFromOtherVehicle; // 0x47(0x01)
	float GravityMultiplier; // 0x48(0x04)
	float MaxInclineAngle; // 0x4c(0x04)
	float MaxTiltAngle; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
	struct TArray<struct FRuntimeGearInfo> GearInfos; // 0x58(0x10)
	struct FGameplayTag TireModTag; // 0x68(0x04)
	char TireModVersion; // 0x6c(0x01)
	bool bTireModAdjustsPosition; // 0x6d(0x01)
	char DataVersion; // 0x6e(0x01)
	char pad_6F[0x1]; // 0x6f(0x01)
};

// ScriptStruct ValetRuntime.RuntimeGearInfo
// Size: 0x10 (Inherited: 0x00)
struct FRuntimeGearInfo {
	int32_t GearIndex; // 0x00(0x04)
	float TopSpeed; // 0x04(0x04)
	float MinSpeed; // 0x08(0x04)
	float PushForce; // 0x0c(0x04)
};

// ScriptStruct ValetRuntime.RuntimeFuelInfo
// Size: 0x0c (Inherited: 0x00)
struct FRuntimeFuelInfo {
	float MaxFuel; // 0x00(0x04)
	float FuelPerSecondDriving; // 0x04(0x04)
	float FuelPerSecondBoosting; // 0x08(0x04)
};

// ScriptStruct ValetRuntime.RuntimeBoostInfo
// Size: 0x18 (Inherited: 0x00)
struct FRuntimeBoostInfo {
	char bCanBoost : 1; // 0x00(0x01)
	char bUsesRechargeableBoost : 1; // 0x00(0x01)
	char pad_0_2 : 6; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float BoostPushForce; // 0x04(0x04)
	float BoostTopSpeedForceMultiplier; // 0x08(0x04)
	float BoostTopSpeedMultiplier; // 0x0c(0x04)
	float RechargeableBoostRateOfRegen; // 0x10(0x04)
	float RechargeableBoostRateOfUse; // 0x14(0x04)
};

// ScriptStruct ValetRuntime.DagwoodState_PT
// Size: 0x1a8 (Inherited: 0x00)
struct FDagwoodState_PT {
	struct FDagwoodInternal internal; // 0x00(0x138)
	struct FDagwoodOutPersistent OutPersistent; // 0x138(0x20)
	struct FDagwoodOutContinuous OutContinuous; // 0x158(0x48)
	bool bOutValid; // 0x1a0(0x01)
	char pad_1A1[0x7]; // 0x1a1(0x07)
};

// ScriptStruct ValetRuntime.DagwoodOutContinuous
// Size: 0x48 (Inherited: 0x38)
struct FDagwoodOutContinuous : FFortVehicleOutContinuous {
	char pad_38[0x10]; // 0x38(0x10)
};

// ScriptStruct ValetRuntime.DagwoodOutPersistent
// Size: 0x20 (Inherited: 0x20)
struct FDagwoodOutPersistent : FFortVehicleOutPersistent {
};

// ScriptStruct ValetRuntime.DagwoodInternal
// Size: 0x138 (Inherited: 0x80)
struct FDagwoodInternal : FFortVehicleInternalPersistent {
	char pad_80[0xb8]; // 0x80(0xb8)
};

// ScriptStruct ValetRuntime.DagwoodManagedState
// Size: 0x440 (Inherited: 0x00)
struct FDagwoodManagedState {
	int32_t Frame; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FFortDagwoodCmd InputCmd; // 0x08(0x30)
	struct FDagwoodInPersistent GT_State; // 0x38(0x240)
	struct FDagwoodState_PT PT_State; // 0x278(0x1a8)
	struct APlayerController* PC; // 0x420(0x08)
	char pad_428[0x8]; // 0x428(0x08)
	struct TArray<struct FDagwoodFutureClientInput> FutureInputs; // 0x430(0x10)
};

// ScriptStruct ValetRuntime.DagwoodFutureClientInput
// Size: 0x38 (Inherited: 0x00)
struct FDagwoodFutureClientInput {
	int32_t Frame; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FFortDagwoodCmd InputCmd; // 0x08(0x30)
};

// ScriptStruct ValetRuntime.NetworkPhysicsState
// Size: 0x90 (Inherited: 0x00)
struct FNetworkPhysicsState {
	char pad_0[0x90]; // 0x00(0x90)
};

// ScriptStruct ValetRuntime.VehicleAttachment
// Size: 0x10 (Inherited: 0x00)
struct FVehicleAttachment {
	struct FName ModName; // 0x00(0x04)
	struct FName SocketName; // 0x04(0x04)
	struct USkeletalMesh* SkeletalMesh; // 0x08(0x08)
};

// ScriptStruct ValetRuntime.DagwoodActionDefForUI
// Size: 0x10 (Inherited: 0x00)
struct FDagwoodActionDefForUI {
	struct TArray<struct FActionDefForUI> ActionDefForUI; // 0x00(0x10)
};

// ScriptStruct ValetRuntime.TireSimulationRuntimeData
// Size: 0x1c (Inherited: 0x00)
struct FTireSimulationRuntimeData {
	struct FRuntimeTerrainHandlingInfo HandlingInfo; // 0x00(0x10)
	float PoppedTireSpringLength; // 0x10(0x04)
	float PoppedTireSpringStiff; // 0x14(0x04)
	float PoppedTireSpringDamp; // 0x18(0x04)
};

// ScriptStruct ValetRuntime.ValetUpdateContext
// Size: 0x18 (Inherited: 0x00)
struct FValetUpdateContext {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct ValetRuntime.VehiclePropReplacementData
// Size: 0x58 (Inherited: 0x00)
struct FVehiclePropReplacementData {
	struct TSoftObjectPtr<UFortVehicleItemDefinition> FortVehicleItemDefinition; // 0x00(0x28)
	struct FVector TransOffset; // 0x28(0x18)
	struct FRotator RotOffset; // 0x40(0x18)
};

