// BlueprintGeneratedClass DuplicateResOutMesh.DuplicateResOutMesh_C
// Size: 0x414 (Inherited: 0x288)
struct ADuplicateResOutMesh_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x290(0x08)
	float CharacterSpawnInTimeline_FirstPassComplete_2AB89084476E64255664E9B2D45E14C1; // 0x298(0x04)
	float CharacterSpawnInTimeline_LightIntensity_2AB89084476E64255664E9B2D45E14C1; // 0x29c(0x04)
	float CharacterSpawnInTimeline_zHieght_2AB89084476E64255664E9B2D45E14C1; // 0x2a0(0x04)
	enum class ETimelineDirection CharacterSpawnInTimeline__Direction_2AB89084476E64255664E9B2D45E14C1; // 0x2a4(0x01)
	char pad_2A5[0x3]; // 0x2a5(0x03)
	struct UTimelineComponent* CharacterSpawnInTimeline; // 0x2a8(0x08)
	struct USkeletalMeshComponent* Skeletal Mesh Duplicate; // 0x2b0(0x08)
	bool Gun True; // 0x2b8(0x01)
	char pad_2B9[0x7]; // 0x2b9(0x07)
	double BoundsRadius; // 0x2c0(0x08)
	struct TArray<struct UMaterialInstanceDynamic*> MIDArray; // 0x2c8(0x10)
	struct FVector World location for the dissolve location; // 0x2d8(0x18)
	struct UMaterialInstanceDynamic* Current MID; // 0x2f0(0x08)
	double Head Space; // 0x2f8(0x08)
	double Leg Space; // 0x300(0x08)
	struct UPointLightComponent* Spawn Light; // 0x308(0x08)
	double light intensity; // 0x310(0x08)
	int32_t Number of Base skeletal mesh materials; // 0x318(0x04)
	char pad_31C[0x4]; // 0x31c(0x04)
	double FirstPassComplete; // 0x320(0x08)
	struct TArray<struct USkeletalMeshComponent*> ExternalSkeletalMeshComponent; // 0x328(0x10)
	char pad_338[0x8]; // 0x338(0x08)
	struct FTransform Box Local Transform; // 0x340(0x60)
	double Timeline Play Length; // 0x3a0(0x08)
	bool TeleportOut?; // 0x3a8(0x01)
	char pad_3A9[0x7]; // 0x3a9(0x07)
	struct AActor* ExternalActor; // 0x3b0(0x08)
	struct TArray<struct USkeletalMeshComponent*> InternalSkeletalMeshComponents; // 0x3b8(0x10)
	int32_t CurrentMeshMidIndex; // 0x3c8(0x04)
	char pad_3CC[0x4]; // 0x3cc(0x04)
	struct USkeletalMeshComponent* External Base Mesh Component; // 0x3d0(0x08)
	struct TArray<struct UMaterialInstanceDynamic*> ExternalMidArray; // 0x3d8(0x10)
	struct USkeletalMeshComponent* ExternalRootMeshComponent; // 0x3e8(0x08)
	struct TArray<struct UMaterialInterface*> ListOfMaterialsExemptFromReparenting; // 0x3f0(0x10)
	struct TArray<struct UMaterialInstanceDynamic*> Original_MIDs; // 0x400(0x10)
	int32_t Increment_End; // 0x410(0x04)

	void RestoreInProgressRes(); // Function DuplicateResOutMesh.DuplicateResOutMesh_C.RestoreInProgressRes // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Store Original Material for Teleport In(); // Function DuplicateResOutMesh.DuplicateResOutMesh_C.Store Original Material for Teleport In // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void External Mesh Masked Setup(struct TArray<struct USkeletalMeshComponent*>& External MEsh Component Array, struct TArray<struct UMaterialInstanceDynamic*>& Corrected Mid Array); // Function DuplicateResOutMesh.DuplicateResOutMesh_C.External Mesh Masked Setup // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ProcessSpawnInTimeline(double ZHeight, double LightIntensity); // Function DuplicateResOutMesh.DuplicateResOutMesh_C.ProcessSpawnInTimeline // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Make internal mids and append external and intermal mids to mid array(); // Function DuplicateResOutMesh.DuplicateResOutMesh_C.Make internal mids and append external and intermal mids to mid array // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Make and slave internal meshes(); // Function DuplicateResOutMesh.DuplicateResOutMesh_C.Make and slave internal meshes // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Spawn  Light(); // Function DuplicateResOutMesh.DuplicateResOutMesh_C.Spawn  Light // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Find Bounds(); // Function DuplicateResOutMesh.DuplicateResOutMesh_C.Find Bounds // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void initializeExternalSkeletalMeshArray(); // Function DuplicateResOutMesh.DuplicateResOutMesh_C.initializeExternalSkeletalMeshArray // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void CharacterSpawnInTimeline__FinishedFunc(); // Function DuplicateResOutMesh.DuplicateResOutMesh_C.CharacterSpawnInTimeline__FinishedFunc // (BlueprintEvent) // @ game+0xd67374
	void CharacterSpawnInTimeline__UpdateFunc(); // Function DuplicateResOutMesh.DuplicateResOutMesh_C.CharacterSpawnInTimeline__UpdateFunc // (BlueprintEvent) // @ game+0xd67374
	void ReceiveBeginPlay(); // Function DuplicateResOutMesh.DuplicateResOutMesh_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ReceiveTick(float DeltaSeconds); // Function DuplicateResOutMesh.DuplicateResOutMesh_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void UpdateExternalParameters(struct TArray<struct UMaterialInstanceDynamic*>& MID Array, struct TArray<struct USkeletalMeshComponent*>& External MEsh Component Array); // Function DuplicateResOutMesh.DuplicateResOutMesh_C.UpdateExternalParameters // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_DuplicateResOutMesh(int32_t EntryPoint); // Function DuplicateResOutMesh.DuplicateResOutMesh_C.ExecuteUbergraph_DuplicateResOutMesh // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

