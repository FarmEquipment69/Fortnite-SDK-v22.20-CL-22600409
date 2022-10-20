// Class ClothingSystemRuntimeNv.ClothConfigNv
// Size: 0x1a0 (Inherited: 0x28)
struct UClothConfigNv : UClothConfigCommon {
	enum class EClothingWindMethodNv ClothingWindMethod; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	struct FClothConstraintSetupNv VerticalConstraint; // 0x2c(0x10)
	struct FClothConstraintSetupNv HorizontalConstraint; // 0x3c(0x10)
	struct FClothConstraintSetupNv BendConstraint; // 0x4c(0x10)
	struct FClothConstraintSetupNv ShearConstraint; // 0x5c(0x10)
	float SelfCollisionRadius; // 0x6c(0x04)
	float SelfCollisionStiffness; // 0x70(0x04)
	float SelfCollisionCullScale; // 0x74(0x04)
	struct FVector Damping; // 0x78(0x18)
	float Friction; // 0x90(0x04)
	float WindDragCoefficient; // 0x94(0x04)
	float WindLiftCoefficient; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
	struct FVector LinearDrag; // 0xa0(0x18)
	struct FVector AngularDrag; // 0xb8(0x18)
	struct FVector LinearInertiaScale; // 0xd0(0x18)
	struct FVector AngularInertiaScale; // 0xe8(0x18)
	struct FVector CentrifugalInertiaScale; // 0x100(0x18)
	float SolverFrequency; // 0x118(0x04)
	float StiffnessFrequency; // 0x11c(0x04)
	float GravityScale; // 0x120(0x04)
	char pad_124[0x4]; // 0x124(0x04)
	struct FVector GravityOverride; // 0x128(0x18)
	bool bUseGravityOverride; // 0x140(0x01)
	char pad_141[0x3]; // 0x141(0x03)
	float TetherStiffness; // 0x144(0x04)
	float TetherLimit; // 0x148(0x04)
	float CollisionThickness; // 0x14c(0x04)
	float AnimDriveSpringStiffness; // 0x150(0x04)
	float AnimDriveDamperStiffness; // 0x154(0x04)
	enum class EClothingWindMethod_Legacy WindMethod; // 0x158(0x01)
	char pad_159[0x3]; // 0x159(0x03)
	struct FClothConstraintSetup_Legacy VerticalConstraintConfig; // 0x15c(0x10)
	struct FClothConstraintSetup_Legacy HorizontalConstraintConfig; // 0x16c(0x10)
	struct FClothConstraintSetup_Legacy BendConstraintConfig; // 0x17c(0x10)
	struct FClothConstraintSetup_Legacy ShearConstraintConfig; // 0x18c(0x10)
	char pad_19C[0x4]; // 0x19c(0x04)
};

// Class ClothingSystemRuntimeNv.ClothingSimulationFactoryNv
// Size: 0x28 (Inherited: 0x28)
struct UClothingSimulationFactoryNv : UClothingSimulationFactory {
};

// Class ClothingSystemRuntimeNv.ClothingSimulationInteractorNv
// Size: 0x90 (Inherited: 0x90)
struct UClothingSimulationInteractorNv : UClothingSimulationInteractor {

	void SetAnimDriveDamperStiffness(float InStiffness); // Function ClothingSystemRuntimeNv.ClothingSimulationInteractorNv.SetAnimDriveDamperStiffness // (Final|Native|Public|BlueprintCallable) // @ game+0x64a21bc
};

// Class ClothingSystemRuntimeNv.ClothPhysicalMeshDataNv_Legacy
// Size: 0x120 (Inherited: 0xe0)
struct UClothPhysicalMeshDataNv_Legacy : UClothPhysicalMeshDataBase_Legacy {
	struct TArray<float> MaxDistances; // 0xe0(0x10)
	struct TArray<float> BackstopDistances; // 0xf0(0x10)
	struct TArray<float> BackstopRadiuses; // 0x100(0x10)
	struct TArray<float> AnimDriveMultipliers; // 0x110(0x10)
};

