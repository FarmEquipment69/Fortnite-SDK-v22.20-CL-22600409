// BlueprintGeneratedClass WindManager.WindManager_C
// Size: 0x644 (Inherited: 0x518)
struct AWindManager_C : AFortWindManager {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x518(0x08)
	struct UStaticMeshComponent* EmptyStaticMesh; // 0x520(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x528(0x08)
	double SmallerRenderTargetOrthoWidth; // 0x530(0x08)
	struct TArray<struct AActor*> External Test Actor; // 0x538(0x10)
	struct TArray<struct AFortStaticMeshActor*> World Terrain Meshes; // 0x548(0x10)
	struct FVector Camera Height Offset; // 0x558(0x18)
	double Particle Z Offset; // 0x570(0x08)
	bool Is Water Interaction Enabled; // 0x578(0x01)
	char pad_579[0x7]; // 0x579(0x07)
	struct TArray<struct FStaticMeshMaterialArrayCombo> WorldStaticMeshArray; // 0x580(0x10)
	struct FArrayOfWaterMeshWaterBlueprintPairs Array Of Water Assets; // 0x590(0x10)
	struct TArray<struct UStaticMesh*> PrototypicalStaticMeshes; // 0x5a0(0x10)
	int32_t Current Water Mesh Index; // 0x5b0(0x04)
	char pad_5B4[0x4]; // 0x5b4(0x04)
	struct TArray<struct FFlowMapMaterials> WaterVectorMatToDefaultMaterialPairing; // 0x5b8(0x10)
	bool MaterialPairingFound; // 0x5c8(0x01)
	char pad_5C9[0x3]; // 0x5c9(0x03)
	struct FLinearColor WorldBoundsMinMax; // 0x5cc(0x10)
	char pad_5DC[0x4]; // 0x5dc(0x04)
	struct UMaterialInterface* Black Scene Capture Material; // 0x5e0(0x08)
	struct FBox Max level bounds - used to isolate the level from the vista; // 0x5e8(0x38)
	struct TArray<struct UStaticMeshComponent*> StormCylinderMeshes; // 0x620(0x10)
	bool Storm Cyl Mesh Match; // 0x630(0x01)
	char pad_631[0x3]; // 0x631(0x03)
	int32_t Wind Cyl Mesh Array Match Index; // 0x634(0x04)
	double Delta Wind Falloff in World Units; // 0x638(0x08)
	struct FFortWindImpulseHandle ; // 0x640(0x04)

	void Find Matching Wind Mesh Index And Write Bool(struct FVector Wind location, bool& Storm Cyl Mesh Match, int32_t& Wind Cyl Mesh Array Match Index); // Function WindManager.WindManager_C.Find Matching Wind Mesh Index And Write Bool // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetWindMatVariables(struct UMaterialInstanceDynamic* Mid, bool Set AnimatedCylinderCenter, struct FVector AnimatedCylinderCenter, bool Set Animating Wind Magnitude, double Animating Wind Magnitude, bool Set Static Wind Magnitude, double Static Wind Magnitude, bool Set CylinderCenter, struct FVector CylinderCenter, bool Set WindVector, struct FVector WindVector, bool Set WindCrossVector, struct FVector WindCrossVector, bool Set OverallOuterRadius, double OverallOuterRadius, bool Set OverallInnerRadius, double OverallInnerRadius, bool Set Wind Still 0 or Animating 1, double Wind Still 0 or Animating 1, bool Set Circular Shader?, double Circular Shader?, bool& NewParam); // Function WindManager.WindManager_C.SetWindMatVariables // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UpdateWindDeltaCyl(double Static Cylinder Outer Radius, double Duration, struct UMaterialInstanceDynamic* Mid, bool Is Wind Circular?); // Function WindManager.WindManager_C.UpdateWindDeltaCyl // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void RemoveWindCylinder(struct FFortWindImpulseCylinder& WindImpulseCylinder); // Function WindManager.WindManager_C.RemoveWindCylinder // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UpdateStormWindCylinder(struct FFortWindImpulseCylinder Wind Impulse, struct FFortWindImpulseCylinderDelta Wind Delta); // Function WindManager.WindManager_C.UpdateStormWindCylinder // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	struct FVector Calculate Camera Position(double Scale, struct USceneCaptureComponent2D* Scene Capture); // Function WindManager.WindManager_C.Calculate Camera Position // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UserConstructionScript(); // Function WindManager.WindManager_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnWindImpulseCylinderDeath(struct FFortWindImpulseCylinder& WindImpulseCylinder); // Function WindManager.WindManager_C.OnWindImpulseCylinderDeath // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void OnWindImpulseCylinderDeltaComplete(struct FFortWindImpulseCylinder& WindImpulseCylinder); // Function WindManager.WindManager_C.OnWindImpulseCylinderDeltaComplete // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void OnWindImpulseCylinderCreation(struct FFortWindImpulseCylinder& WindImpulseCylinder, struct FFortWindImpulseCylinderDelta& WindImpulseCylinderDelta); // Function WindManager.WindManager_C.OnWindImpulseCylinderCreation // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void SpawnTestWind(double Radius, double ImpulseMagnitude); // Function WindManager.WindManager_C.SpawnTestWind // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Play Water Splash Particle System At Location(struct FTransform Particle Transform); // Function WindManager.WindManager_C.Play Water Splash Particle System At Location // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void AddWindParticleSystemComponent(struct UParticleSystemComponent* ParticleSystemComponent); // Function WindManager.WindManager_C.AddWindParticleSystemComponent // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Register player for render to texture purposes(struct UPrimitiveComponent* Effect Water Interaction FX, struct UPrimitiveComponent* Gameplay Wind INteraction Effects); // Function WindManager.WindManager_C.Register player for render to texture purposes // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Add Wind Component(struct UPrimitiveComponent* InComponent); // Function WindManager.WindManager_C.Add Wind Component // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ReceiveBeginPlay(); // Function WindManager.WindManager_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void Update Test(double NewMagnitude); // Function WindManager.WindManager_C.Update Test // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Add Render To Texture Particle(struct UParticleSystem* EmitterTemplate, struct FTransform& InTransform); // Function WindManager.WindManager_C.Add Render To Texture Particle // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_WindManager(int32_t EntryPoint); // Function WindManager.WindManager_C.ExecuteUbergraph_WindManager // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

