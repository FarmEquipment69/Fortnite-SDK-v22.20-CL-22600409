// BlueprintGeneratedClass _WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C
// Size: 0x2f3 (Inherited: 0x288)
struct A_WaterMeshBlueprintMaster_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UStaticMeshComponent* CollisionMesh1; // 0x290(0x08)
	struct UStaticMeshComponent* CollisionMesh2; // 0x298(0x08)
	struct UStaticMeshComponent* CollisionMesh4; // 0x2a0(0x08)
	struct UStaticMeshComponent* CollisionMesh3; // 0x2a8(0x08)
	struct UStaticMeshComponent* StaticMesh1; // 0x2b0(0x08)
	int32_t Number of Collision Meshes; // 0x2b8(0x04)
	bool FlipFlow; // 0x2bc(0x01)
	bool NoFlow; // 0x2bd(0x01)
	char pad_2BE[0x2]; // 0x2be(0x02)
	struct UMaterialInterface* FlippedMaterial; // 0x2c0(0x08)
	int32_t Current Characters Personal Water Counter; // 0x2c8(0x04)
	bool Water Interactions; // 0x2cc(0x01)
	bool Entering True Exiting False; // 0x2cd(0x01)
	char pad_2CE[0x2]; // 0x2ce(0x02)
	struct APlayerPawn_Generic_Parent_C* ExternalActor; // 0x2d0(0x08)
	struct UStaticMeshComponent* Internal Mesh; // 0x2d8(0x08)
	bool Continue; // 0x2e0(0x01)
	char pad_2E1[0x7]; // 0x2e1(0x07)
	double Minimum time between splashes; // 0x2e8(0x08)
	bool ShowTestMesh; // 0x2f0(0x01)
	bool HasExecutedConstuctionScript; // 0x2f1(0x01)
	bool Is Deep Water Asset?; // 0x2f2(0x01)

	void Construction(); // Function _WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.Construction // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Handle Water Penetration Components And Arrays(bool In T Out F, struct AActor* Touching Actor, struct UStaticMeshComponent* Touching Volume); // Function _WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.Handle Water Penetration Components And Arrays // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Find Placement on water mesh surfaces(struct FTransform& Traced Transform, struct FVector& VelocityVector, bool& Trace Hit); // Function _WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.Find Placement on water mesh surfaces // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetupMeshCollisionVolumes(struct UStaticMeshComponent* StaticMeshComponent, int32_t Target Int); // Function _WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.SetupMeshCollisionVolumes // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UserConstructionScript(); // Function _WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void BndEvt__CollisionMesh2_K2Node_ComponentBoundEvent_220_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function _WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.BndEvt__CollisionMesh2_K2Node_ComponentBoundEvent_220_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void BndEvt__CollisionMesh3_K2Node_ComponentBoundEvent_211_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function _WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.BndEvt__CollisionMesh3_K2Node_ComponentBoundEvent_211_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void BndEvt__CollisionMesh_K2Node_ComponentBoundEvent_66_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function _WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.BndEvt__CollisionMesh_K2Node_ComponentBoundEvent_66_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0xd67374
	void BndEvt__CollisionMesh4_K2Node_ComponentBoundEvent_203_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function _WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.BndEvt__CollisionMesh4_K2Node_ComponentBoundEvent_203_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void BndEvt__CollisionMesh2_K2Node_ComponentBoundEvent_196_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function _WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.BndEvt__CollisionMesh2_K2Node_ComponentBoundEvent_196_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0xd67374
	void BndEvt__CollisionMesh3_K2Node_ComponentBoundEvent_190_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function _WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.BndEvt__CollisionMesh3_K2Node_ComponentBoundEvent_190_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0xd67374
	void BndEvt__CollisionMesh4_K2Node_ComponentBoundEvent_185_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function _WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.BndEvt__CollisionMesh4_K2Node_ComponentBoundEvent_185_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0xd67374
	void BndEvt__CollisionMesh_K2Node_ComponentBoundEvent_69_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function _WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.BndEvt__CollisionMesh_K2Node_ComponentBoundEvent_69_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void Construct(); // Function _WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.Construct // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ReceiveBeginPlay(); // Function _WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph__WaterMeshBlueprintMaster(int32_t EntryPoint); // Function _WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.ExecuteUbergraph__WaterMeshBlueprintMaster // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

