// Enum ClothingSystemRuntimeCommon.EClothMassMode
enum class EClothMassMode : uint8 {
	UniformMass = 0,
	TotalMass = 1,
	Density = 2,
	MaxClothMassMode = 3,
	EClothMassMode_MAX = 4
};

// Enum ClothingSystemRuntimeCommon.EClothingWindMethod_Legacy
enum class EClothingWindMethod_Legacy : uint8 {
	Legacy = 0,
	Accurate = 1,
	EClothingWindMethod_MAX = 2
};

// Enum ClothingSystemRuntimeCommon.EWeightMapTargetCommon
enum class EWeightMapTargetCommon : uint8 {
	None = 0,
	MaxDistance = 1,
	BackstopDistance = 2,
	BackstopRadius = 3,
	AnimDriveStiffness = 4,
	AnimDriveDamping_DEPRECATED = 5,
	EWeightMapTargetCommon_MAX = 6
};

// ScriptStruct ClothingSystemRuntimeCommon.ClothLODDataCommon
// Size: 0x148 (Inherited: 0x00)
struct FClothLODDataCommon {
	struct FClothPhysicalMeshData PhysicalMeshData; // 0x00(0xd8)
	struct FClothCollisionData CollisionData; // 0xd8(0x40)
	bool bUseMultipleInfluences; // 0x118(0x01)
	char pad_119[0x3]; // 0x119(0x03)
	float SkinningKernelRadius; // 0x11c(0x04)
	bool bSmoothTransition; // 0x120(0x01)
	char pad_121[0x27]; // 0x121(0x27)
};

// ScriptStruct ClothingSystemRuntimeCommon.ClothPhysicalMeshData
// Size: 0xd8 (Inherited: 0x00)
struct FClothPhysicalMeshData {
	struct TArray<struct FVector3f> Vertices; // 0x00(0x10)
	struct TArray<struct FVector3f> Normals; // 0x10(0x10)
	struct TArray<uint32_t> Indices; // 0x20(0x10)
	struct TMap<uint32_t, struct FPointWeightMap> WeightMaps; // 0x30(0x50)
	struct TArray<float> InverseMasses; // 0x80(0x10)
	struct TArray<struct FClothVertBoneData> BoneData; // 0x90(0x10)
	struct TArray<uint32_t> SelfCollisionIndices; // 0xa0(0x10)
	struct FClothTetherData EuclideanTethers; // 0xb0(0x10)
	struct FClothTetherData GeodesicTethers; // 0xc0(0x10)
	int32_t MaxBoneWeights; // 0xd0(0x04)
	int32_t NumFixedVerts; // 0xd4(0x04)
};

// ScriptStruct ClothingSystemRuntimeCommon.ClothTetherData
// Size: 0x10 (Inherited: 0x00)
struct FClothTetherData {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct ClothingSystemRuntimeCommon.PointWeightMap
// Size: 0x10 (Inherited: 0x00)
struct FPointWeightMap {
	struct TArray<float> Values; // 0x00(0x10)
};

// ScriptStruct ClothingSystemRuntimeCommon.ClothConstraintSetup_Legacy
// Size: 0x10 (Inherited: 0x00)
struct FClothConstraintSetup_Legacy {
	float Stiffness; // 0x00(0x04)
	float StiffnessMultiplier; // 0x04(0x04)
	float StretchLimit; // 0x08(0x04)
	float CompressionLimit; // 0x0c(0x04)
};

// ScriptStruct ClothingSystemRuntimeCommon.ClothConfig_Legacy
// Size: 0x130 (Inherited: 0x00)
struct FClothConfig_Legacy {
	enum class EClothingWindMethod_Legacy WindMethod; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FClothConstraintSetup_Legacy VerticalConstraintConfig; // 0x04(0x10)
	struct FClothConstraintSetup_Legacy HorizontalConstraintConfig; // 0x14(0x10)
	struct FClothConstraintSetup_Legacy BendConstraintConfig; // 0x24(0x10)
	struct FClothConstraintSetup_Legacy ShearConstraintConfig; // 0x34(0x10)
	float SelfCollisionRadius; // 0x44(0x04)
	float SelfCollisionStiffness; // 0x48(0x04)
	float SelfCollisionCullScale; // 0x4c(0x04)
	struct FVector Damping; // 0x50(0x18)
	float Friction; // 0x68(0x04)
	float WindDragCoefficient; // 0x6c(0x04)
	float WindLiftCoefficient; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
	struct FVector LinearDrag; // 0x78(0x18)
	struct FVector AngularDrag; // 0x90(0x18)
	struct FVector LinearInertiaScale; // 0xa8(0x18)
	struct FVector AngularInertiaScale; // 0xc0(0x18)
	struct FVector CentrifugalInertiaScale; // 0xd8(0x18)
	float SolverFrequency; // 0xf0(0x04)
	float StiffnessFrequency; // 0xf4(0x04)
	float GravityScale; // 0xf8(0x04)
	char pad_FC[0x4]; // 0xfc(0x04)
	struct FVector GravityOverride; // 0x100(0x18)
	bool bUseGravityOverride; // 0x118(0x01)
	char pad_119[0x3]; // 0x119(0x03)
	float TetherStiffness; // 0x11c(0x04)
	float TetherLimit; // 0x120(0x04)
	float CollisionThickness; // 0x124(0x04)
	float AnimDriveSpringStiffness; // 0x128(0x04)
	float AnimDriveDamperStiffness; // 0x12c(0x04)
};

// ScriptStruct ClothingSystemRuntimeCommon.ClothParameterMask_Legacy
// Size: 0x28 (Inherited: 0x00)
struct FClothParameterMask_Legacy {
	struct FName MaskName; // 0x00(0x04)
	enum class EWeightMapTargetCommon CurrentTarget; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	float MaxValue; // 0x08(0x04)
	float MinValue; // 0x0c(0x04)
	struct TArray<float> Values; // 0x10(0x10)
	bool bEnabled; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

