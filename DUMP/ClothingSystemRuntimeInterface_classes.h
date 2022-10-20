// Class ClothingSystemRuntimeInterface.ClothConfigBase
// Size: 0x28 (Inherited: 0x28)
struct UClothConfigBase : UObject {
};

// Class ClothingSystemRuntimeInterface.ClothingSimulationFactory
// Size: 0x28 (Inherited: 0x28)
struct UClothingSimulationFactory : UObject {
};

// Class ClothingSystemRuntimeInterface.ClothingInteractor
// Size: 0x30 (Inherited: 0x28)
struct UClothingInteractor : UObject {
	char pad_28[0x8]; // 0x28(0x08)
};

// Class ClothingSystemRuntimeInterface.ClothingSimulationInteractor
// Size: 0x90 (Inherited: 0x28)
struct UClothingSimulationInteractor : UObject {
	struct TMap<struct FName, struct UClothingInteractor*> ClothingInteractors; // 0x28(0x50)
	char pad_78[0x18]; // 0x78(0x18)

	void SetNumSubsteps(int32_t NumSubsteps); // Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.SetNumSubsteps // (Native|Public|BlueprintCallable) // @ game+0x922aa20
	void SetNumIterations(int32_t NumIterations); // Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.SetNumIterations // (Native|Public|BlueprintCallable) // @ game+0x922a99c
	void SetMaxNumIterations(int32_t MaxNumIterations); // Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.SetMaxNumIterations // (Native|Public|BlueprintCallable) // @ game+0x922a918
	void SetAnimDriveSpringStiffness(float InStiffness); // Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.SetAnimDriveSpringStiffness // (Native|Public|BlueprintCallable) // @ game+0x922a890
	void PhysicsAssetUpdated(); // Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.PhysicsAssetUpdated // (Native|Public|BlueprintCallable) // @ game+0x18168e4
	float GetSimulationTime(); // Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetSimulationTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x922a878
	int32_t GetNumSubsteps(); // Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumSubsteps // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x922a860
	int32_t GetNumKinematicParticles(); // Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumKinematicParticles // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x922a84c
	int32_t GetNumIterations(); // Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumIterations // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2859618
	int32_t GetNumDynamicParticles(); // Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumDynamicParticles // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x922a834
	int32_t GetNumCloths(); // Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumCloths // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x686ef84
	struct UClothingInteractor* GetClothingInteractor(struct FString ClothingAssetName); // Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetClothingInteractor // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x922a6d0
	void EnableGravityOverride(struct FVector& InVector); // Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.EnableGravityOverride // (Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x922a644
	void DisableGravityOverride(); // Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.DisableGravityOverride // (Native|Public|BlueprintCallable) // @ game+0x1e84bf4
	void ClothConfigUpdated(); // Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.ClothConfigUpdated // (Native|Public|BlueprintCallable) // @ game+0x26d2f98
};

// Class ClothingSystemRuntimeInterface.ClothSharedSimConfigBase
// Size: 0x28 (Inherited: 0x28)
struct UClothSharedSimConfigBase : UObject {
};

// Class ClothingSystemRuntimeInterface.ClothingAssetBase
// Size: 0x48 (Inherited: 0x28)
struct UClothingAssetBase : UObject {
	struct FString ImportedFilePath; // 0x28(0x10)
	struct FGuid AssetGuid; // 0x38(0x10)
};

// Class ClothingSystemRuntimeInterface.ClothPhysicalMeshDataBase_Legacy
// Size: 0xe0 (Inherited: 0x28)
struct UClothPhysicalMeshDataBase_Legacy : UObject {
	struct TArray<struct FVector3f> Vertices; // 0x28(0x10)
	struct TArray<struct FVector3f> Normals; // 0x38(0x10)
	struct TArray<uint32_t> Indices; // 0x48(0x10)
	struct TArray<float> InverseMasses; // 0x58(0x10)
	struct TArray<struct FClothVertBoneData> BoneData; // 0x68(0x10)
	int32_t NumFixedVerts; // 0x78(0x04)
	int32_t MaxBoneWeights; // 0x7c(0x04)
	struct TArray<uint32_t> SelfCollisionIndices; // 0x80(0x10)
	char pad_90[0x50]; // 0x90(0x50)
};

