// Enum ButterCakeRuntime.EFortButterCakeFootPhase
enum class EFortButterCakeFootPhase : uint8 {
	RightPlantA = 0,
	RightPlantB = 1,
	RightPlantC = 2,
	LeftPlantA = 3,
	LeftPlantB = 4,
	LeftPlantC = 5,
	HostileRightPass = 6,
	HostileRightPlant = 7,
	HostileLeftPass = 8,
	HostileLeftPlant = 9,
	BothPlant = 10,
	BothPlantA = 11,
	BothPlantB = 12,
	BothPlantC = 13,
	BothPlantD = 14,
	EFortButterCakeFootPhase_MAX = 15
};

// ScriptStruct ButterCakeRuntime.RigUnit_ButterCakeBase
// Size: 0x08 (Inherited: 0x08)
struct FRigUnit_ButterCakeBase : FRigUnit {
};

// ScriptStruct ButterCakeRuntime.RigUnit_ButterCakeBaseMutable
// Size: 0x38 (Inherited: 0x38)
struct FRigUnit_ButterCakeBaseMutable : FRigUnitMutable {
};

// ScriptStruct ButterCakeRuntime.RigUnit_GetGroundHitAtIndex
// Size: 0x40 (Inherited: 0x08)
struct FRigUnit_GetGroundHitAtIndex : FRigUnit_ButterCakeBase {
	int32_t Index; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FVector Location; // 0x10(0x18)
	struct FVector Normal; // 0x28(0x18)
};

// ScriptStruct ButterCakeRuntime.RigUnit_BoneGroundTrace
// Size: 0x50 (Inherited: 0x08)
struct FRigUnit_BoneGroundTrace : FRigUnit_ButterCakeBase {
	struct FRigElementKey bone; // 0x08(0x08)
	float Above; // 0x10(0x04)
	float Below; // 0x14(0x04)
	bool bHit; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct FVector HitLocation; // 0x20(0x18)
	struct FVector HitNormal; // 0x38(0x18)
};

// ScriptStruct ButterCakeRuntime.RigUnit_UpdateSomeGroundTraces
// Size: 0x38 (Inherited: 0x38)
struct FRigUnit_UpdateSomeGroundTraces : FRigUnit_ButterCakeBaseMutable {
};

// ScriptStruct ButterCakeRuntime.RigUnit_UpdateAllGroundTraces
// Size: 0x38 (Inherited: 0x38)
struct FRigUnit_UpdateAllGroundTraces : FRigUnit_ButterCakeBaseMutable {
};

// ScriptStruct ButterCakeRuntime.RigUnit_MoveFeetToGround
// Size: 0x58 (Inherited: 0x38)
struct FRigUnit_MoveFeetToGround : FRigUnit_ButterCakeBaseMutable {
	struct TArray<struct FTransform> FootEffectorTransformList; // 0x38(0x10)
	struct TArray<float> FootEffectorStrengthAlphaList; // 0x48(0x10)
};

// ScriptStruct ButterCakeRuntime.RigUnit_MoveTailOutOfGround
// Size: 0xa0 (Inherited: 0x38)
struct FRigUnit_MoveTailOutOfGround : FRigUnit_ButterCakeBaseMutable {
	bool bShouldDoIK; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct FTransform TailTipEffectorTransform; // 0x40(0x60)
};

// ScriptStruct ButterCakeRuntime.RigUnit_MoveChinOutOfGround
// Size: 0xa0 (Inherited: 0x38)
struct FRigUnit_MoveChinOutOfGround : FRigUnit_ButterCakeBaseMutable {
	bool bShouldDoIK; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct FTransform ChinEffectorTransform; // 0x40(0x60)
};

