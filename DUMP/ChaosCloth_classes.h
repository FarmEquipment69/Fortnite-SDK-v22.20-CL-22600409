// Class ChaosCloth.ChaosClothConfig
// Size: 0x118 (Inherited: 0x28)
struct UChaosClothConfig : UClothConfigCommon {
	enum class EClothMassMode MassMode; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	float UniformMass; // 0x2c(0x04)
	float TotalMass; // 0x30(0x04)
	float Density; // 0x34(0x04)
	float MinPerParticleMass; // 0x38(0x04)
	struct FChaosClothWeightedValue EdgeStiffnessWeighted; // 0x3c(0x08)
	struct FChaosClothWeightedValue BendingStiffnessWeighted; // 0x44(0x08)
	float BucklingRatio; // 0x4c(0x04)
	struct FChaosClothWeightedValue BucklingStiffnessWeighted; // 0x50(0x08)
	bool bUseBendingElements; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	struct FChaosClothWeightedValue AreaStiffnessWeighted; // 0x5c(0x08)
	float VolumeStiffness; // 0x64(0x04)
	struct FChaosClothWeightedValue TetherStiffness; // 0x68(0x08)
	struct FChaosClothWeightedValue TetherScale; // 0x70(0x08)
	bool bUseGeodesicDistance; // 0x78(0x01)
	char pad_79[0x3]; // 0x79(0x03)
	float ShapeTargetStiffness; // 0x7c(0x04)
	float CollisionThickness; // 0x80(0x04)
	float FrictionCoefficient; // 0x84(0x04)
	bool bUseCCD; // 0x88(0x01)
	bool bUseSelfCollisions; // 0x89(0x01)
	char pad_8A[0x2]; // 0x8a(0x02)
	float SelfCollisionThickness; // 0x8c(0x04)
	float SelfCollisionFriction; // 0x90(0x04)
	bool bUseSelfIntersections; // 0x94(0x01)
	bool bUseLegacyBackstop; // 0x95(0x01)
	char pad_96[0x2]; // 0x96(0x02)
	float DampingCoefficient; // 0x98(0x04)
	float LocalDampingCoefficient; // 0x9c(0x04)
	bool bUsePointBasedWindModel; // 0xa0(0x01)
	char pad_A1[0x3]; // 0xa1(0x03)
	struct FChaosClothWeightedValue Drag; // 0xa4(0x08)
	struct FChaosClothWeightedValue Lift; // 0xac(0x08)
	bool bUseGravityOverride; // 0xb4(0x01)
	char pad_B5[0x3]; // 0xb5(0x03)
	float GravityScale; // 0xb8(0x04)
	char pad_BC[0x4]; // 0xbc(0x04)
	struct FVector Gravity; // 0xc0(0x18)
	struct FChaosClothWeightedValue Pressure; // 0xd8(0x08)
	struct FChaosClothWeightedValue AnimDriveStiffness; // 0xe0(0x08)
	struct FChaosClothWeightedValue AnimDriveDamping; // 0xe8(0x08)
	struct FVector LinearVelocityScale; // 0xf0(0x18)
	float AngularVelocityScale; // 0x108(0x04)
	float FictitiousAngularScale; // 0x10c(0x04)
	bool bUseTetrahedralConstraints; // 0x110(0x01)
	bool bUseThinShellVolumeConstraints; // 0x111(0x01)
	bool bUseContinuousCollisionDetection; // 0x112(0x01)
	char pad_113[0x5]; // 0x113(0x05)
};

// Class ChaosCloth.ChaosClothSharedSimConfig
// Size: 0x38 (Inherited: 0x28)
struct UChaosClothSharedSimConfig : UClothSharedConfigCommon {
	int32_t IterationCount; // 0x28(0x04)
	int32_t MaxIterationCount; // 0x2c(0x04)
	int32_t SubdivisionCount; // 0x30(0x04)
	bool bUseLocalSpaceSimulation; // 0x34(0x01)
	bool bUseXPBDConstraints; // 0x35(0x01)
	char pad_36[0x2]; // 0x36(0x02)
};

// Class ChaosCloth.ChaosClothingSimulationFactory
// Size: 0x28 (Inherited: 0x28)
struct UChaosClothingSimulationFactory : UClothingSimulationFactory {
};

// Class ChaosCloth.ChaosClothingInteractor
// Size: 0x40 (Inherited: 0x30)
struct UChaosClothingInteractor : UClothingInteractor {
	char pad_30[0x10]; // 0x30(0x10)

	void SetWind(struct FVector2D Drag, struct FVector2D Lift, float AirDensity, struct FVector WindVelocity); // Function ChaosCloth.ChaosClothingInteractor.SetWind // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x729d308
	void SetVelocityScale(struct FVector LinearVelocityScale, float AngularVelocityScale, float FictitiousAngularScale); // Function ChaosCloth.ChaosClothingInteractor.SetVelocityScale // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x729d1fc
	void SetPressure(struct FVector2D Pressure); // Function ChaosCloth.ChaosClothingInteractor.SetPressure // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x729d124
	void SetMaterialLinear(float EdgeStiffness, float BendingStiffness, float AreaStiffness); // Function ChaosCloth.ChaosClothingInteractor.SetMaterialLinear // (Final|Native|Public|BlueprintCallable) // @ game+0x729d028
	void SetMaterial(struct FVector2D EdgeStiffness, struct FVector2D BendingStiffness, struct FVector2D AreaStiffness); // Function ChaosCloth.ChaosClothingInteractor.SetMaterial // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x729cf08
	void SetLongRangeAttachmentLinear(float TetherStiffness, float TetherScale); // Function ChaosCloth.ChaosClothingInteractor.SetLongRangeAttachmentLinear // (Final|Native|Public|BlueprintCallable) // @ game+0x729ce44
	void SetLongRangeAttachment(struct FVector2D TetherStiffness, struct FVector2D TetherScale); // Function ChaosCloth.ChaosClothingInteractor.SetLongRangeAttachment // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x729cd74
	void SetGravity(float GravityScale, bool bIsGravityOverridden, struct FVector GravityOverride); // Function ChaosCloth.ChaosClothingInteractor.SetGravity // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x729cc54
	void SetDamping(float DampingCoefficient, float LocalDampingCoefficient); // Function ChaosCloth.ChaosClothingInteractor.SetDamping // (Final|Native|Public|BlueprintCallable) // @ game+0x729cb90
	void SetCollision(float CollisionThickness, float FrictionCoefficient, bool bUseCCD, float SelfCollisionThickness); // Function ChaosCloth.ChaosClothingInteractor.SetCollision // (Final|Native|Public|BlueprintCallable) // @ game+0x729ca40
	void SetBackstop(bool bEnabled); // Function ChaosCloth.ChaosClothingInteractor.SetBackstop // (Final|Native|Public|BlueprintCallable) // @ game+0x729c968
	void SetAnimDriveLinear(float AnimDriveStiffness); // Function ChaosCloth.ChaosClothingInteractor.SetAnimDriveLinear // (Final|Native|Public|BlueprintCallable) // @ game+0x729c8e4
	void SetAnimDrive(struct FVector2D AnimDriveStiffness, struct FVector2D AnimDriveDamping); // Function ChaosCloth.ChaosClothingInteractor.SetAnimDrive // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x729c814
	void SetAerodynamics(float DragCoefficient, float LiftCoefficient, struct FVector WindVelocity); // Function ChaosCloth.ChaosClothingInteractor.SetAerodynamics // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x729c708
	void ResetAndTeleport(bool bReset, bool bTeleport); // Function ChaosCloth.ChaosClothingInteractor.ResetAndTeleport // (Final|Native|Public|BlueprintCallable) // @ game+0x729c644
};

// Class ChaosCloth.ChaosClothingSimulationInteractor
// Size: 0xa0 (Inherited: 0x90)
struct UChaosClothingSimulationInteractor : UClothingSimulationInteractor {
	char pad_90[0x10]; // 0x90(0x10)
};

