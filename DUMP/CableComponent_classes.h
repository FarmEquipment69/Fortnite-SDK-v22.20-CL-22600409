// Class CableComponent.CableActor
// Size: 0x290 (Inherited: 0x288)
struct ACableActor : AActor {
	struct UCableComponent* CableComponent; // 0x288(0x08)
};

// Class CableComponent.CableComponent
// Size: 0x630 (Inherited: 0x580)
struct UCableComponent : UMeshComponent {
	bool bAttachStart; // 0x578(0x01)
	bool bAttachEnd; // 0x579(0x01)
	struct FComponentReference AttachEndTo; // 0x580(0x28)
	struct FName AttachEndToSocketName; // 0x5a8(0x04)
	char pad_5AE[0x2]; // 0x5ae(0x02)
	struct FVector EndLocation; // 0x5b0(0x18)
	float CableLength; // 0x5c8(0x04)
	int32_t NumSegments; // 0x5cc(0x04)
	float SubstepTime; // 0x5d0(0x04)
	int32_t SolverIterations; // 0x5d4(0x04)
	bool bEnableStiffness; // 0x5d8(0x01)
	bool bUseSubstepping; // 0x5d9(0x01)
	bool bSkipCableUpdateWhenNotVisible; // 0x5da(0x01)
	bool bSkipCableUpdateWhenNotOwnerRecentlyRendered; // 0x5db(0x01)
	bool bEnableCollision; // 0x5dc(0x01)
	char pad_5DD[0x3]; // 0x5dd(0x03)
	float CollisionFriction; // 0x5e0(0x04)
	char pad_5E4[0x4]; // 0x5e4(0x04)
	struct FVector CableForce; // 0x5e8(0x18)
	float CableGravityScale; // 0x600(0x04)
	float CableWidth; // 0x604(0x04)
	int32_t NumSides; // 0x608(0x04)
	float TileMaterial; // 0x60c(0x04)
	char pad_610[0x20]; // 0x610(0x20)

	void SetAttachEndToComponent(struct USceneComponent* Component, struct FName SocketName); // Function CableComponent.CableComponent.SetAttachEndToComponent // (Final|Native|Public|BlueprintCallable) // @ game+0x6d5b4d4
	void SetAttachEndTo(struct AActor* Actor, struct FName ComponentProperty, struct FName SocketName); // Function CableComponent.CableComponent.SetAttachEndTo // (Final|Native|Public|BlueprintCallable) // @ game+0x6d5b348
	void GetCableParticleLocations(struct TArray<struct FVector>& Locations); // Function CableComponent.CableComponent.GetCableParticleLocations // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x6d5b2a8
	struct USceneComponent* GetAttachedComponent(); // Function CableComponent.CableComponent.GetAttachedComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6d5b248
	struct AActor* GetAttachedActor(); // Function CableComponent.CableComponent.GetAttachedActor // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6d5b1dc
};

