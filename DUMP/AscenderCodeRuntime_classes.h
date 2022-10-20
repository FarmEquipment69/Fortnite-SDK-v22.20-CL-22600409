// Class AscenderCodeRuntime.FortAscenderZipline
// Size: 0xf98 (Inherited: 0xc60)
struct AFortAscenderZipline : AFortAthenaSplineZipline {
	struct FName SplineTopAttachPointName; // 0xc60(0x04)
	bool bAutoFindSplineEndLocation; // 0xc64(0x01)
	char pad_C65[0x3]; // 0xc65(0x03)
	float SplineOffsetFromGround; // 0xc68(0x04)
	float CableOffsetFromSplineEnd; // 0xc6c(0x04)
	float SplineLength; // 0xc70(0x04)
	char pad_C74[0x4]; // 0xc74(0x04)
	struct UStaticMesh* SplineStaticMesh; // 0xc78(0x08)
	enum class ESplineMeshAxis MeshForwardAxis; // 0xc80(0x01)
	bool bHandleReturning; // 0xc81(0x01)
	char pad_C82[0x2]; // 0xc82(0x02)
	float HandleReturnSpeed; // 0xc84(0x04)
	bool bCableDropping; // 0xc88(0x01)
	char pad_C89[0x3]; // 0xc89(0x03)
	float CableDropSpeed; // 0xc8c(0x04)
	float YawRotationOffsetWhileUsingHandle; // 0xc90(0x04)
	float YawRotationOffsetWhileSlidingDown; // 0xc94(0x04)
	bool bUseComplexSplineCollision; // 0xc98(0x01)
	char pad_C99[0x3]; // 0xc99(0x03)
	float SimpleSplineCollisionRadius; // 0xc9c(0x04)
	float SimpleSplineCollisionHeightExtension; // 0xca0(0x04)
	char pad_CA4[0x4]; // 0xca4(0x04)
	struct FScalableFloat DescendMinDistanceFromBottom; // 0xca8(0x28)
	struct FScalableFloat AscendReachedEndHorizontalLaunchSpeed; // 0xcd0(0x28)
	struct FScalableFloat AscendReachedEndVerticalLaunchSpeed; // 0xcf8(0x28)
	struct FScalableFloat AscendJumpedOffHorizontalLaunchSpeed; // 0xd20(0x28)
	struct FScalableFloat AscendJumpedOffVerticalLaunchSpeed; // 0xd48(0x28)
	struct FScalableFloat DescendReachedEndHorizontalLaunchSpeed; // 0xd70(0x28)
	struct FScalableFloat DescendReachedEndVerticalLaunchSpeed; // 0xd98(0x28)
	struct FScalableFloat DescendJumpedOffHorizontalLaunchSpeed; // 0xdc0(0x28)
	struct FScalableFloat DescendJumpedOffVerticalLaunchSpeed; // 0xde8(0x28)
	struct FScalableFloat HandleActorHitPlayerHorizontalLaunchSpeed; // 0xe10(0x28)
	struct FScalableFloat HandleActorHitPlayerVerticalLaunchSpeed; // 0xe38(0x28)
	struct FVector HandleDestroyBuildingsOverlapExtents; // 0xe60(0x18)
	struct FVector PlayerDestroyBuildingsOverlapExtents; // 0xe78(0x18)
	struct FVector InitialSplineEndLocation; // 0xe90(0x18)
	struct FVector CurrentSplineEndLocation; // 0xea8(0x18)
	struct FVector TargetSplineEndLocation; // 0xec0(0x18)
	struct FVector CurrentHandleLocation; // 0xed8(0x18)
	struct TWeakObjectPtr<struct UPrimitiveComponent> CurrentInteractComponent; // 0xef0(0x08)
	struct AFortPlayerPawn* PawnUsingHandle; // 0xef8(0x08)
	struct TWeakObjectPtr<struct AFortPlayerPawn> PreviousPawnUsingHandle; // 0xf00(0x08)
	struct USplineMeshComponent* SplineMesh; // 0xf08(0x08)
	struct UCapsuleComponent* SimpleSplineMeshCollision; // 0xf10(0x08)
	struct TWeakObjectPtr<struct ABuildingActor> FloorActor; // 0xf18(0x08)
	struct TArray<struct TWeakObjectPtr<struct AFortPlayerPawn>> RotationLockedPawns; // 0xf20(0x10)
	char pad_F30[0x68]; // 0xf30(0x68)

	void OnRep_TargetSplineEndLocation(); // Function AscenderCodeRuntime.FortAscenderZipline.OnRep_TargetSplineEndLocation // (Final|Native|Protected) // @ game+0x2ae74f0
	void OnRep_PawnUsingHandle(); // Function AscenderCodeRuntime.FortAscenderZipline.OnRep_PawnUsingHandle // (Final|Native|Protected) // @ game+0x64b73bc
	void OnRep_InitialSplineEndLocation(); // Function AscenderCodeRuntime.FortAscenderZipline.OnRep_InitialSplineEndLocation // (Final|Native|Protected) // @ game+0x1c2ae7c
	void HandlePawnUsingHandleDied(struct AFortPawn* DeadPawn); // Function AscenderCodeRuntime.FortAscenderZipline.HandlePawnUsingHandleDied // (Final|Native|Protected) // @ game+0x64b733c
	void HandleFloorActorHealthChanged(); // Function AscenderCodeRuntime.FortAscenderZipline.HandleFloorActorHealthChanged // (Final|Native|Protected) // @ game+0x64b7328
	void HandleFloorActorDestroyed(struct AActor* Actor); // Function AscenderCodeRuntime.FortAscenderZipline.HandleFloorActorDestroyed // (Final|Native|Protected) // @ game+0x64b72a8
	struct UPrimitiveComponent* GetTopComponent(); // Function AscenderCodeRuntime.FortAscenderZipline.GetTopComponent // (Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xd67374
	struct AFortPlayerPawn* GetPawnUsingHandle(); // Function AscenderCodeRuntime.FortAscenderZipline.GetPawnUsingHandle // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x64b7290
	struct UPrimitiveComponent* GetInteractComponentOverride(struct AFortPlayerPawn* InteractingPawn, struct UPrimitiveComponent* InteractComponent); // Function AscenderCodeRuntime.FortAscenderZipline.GetInteractComponentOverride // (Native|Event|Public|BlueprintEvent|Const) // @ game+0x64b71c4
	struct UPrimitiveComponent* GetHandleComponent(); // Function AscenderCodeRuntime.FortAscenderZipline.GetHandleComponent // (Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xd67374
	void BP_HandleUpdatedLoweringHandle(); // Function AscenderCodeRuntime.FortAscenderZipline.BP_HandleUpdatedLoweringHandle // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void BP_HandleUpdatedLoweringCable(); // Function AscenderCodeRuntime.FortAscenderZipline.BP_HandleUpdatedLoweringCable // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void BP_HandleStoppedLoweringHandle(); // Function AscenderCodeRuntime.FortAscenderZipline.BP_HandleStoppedLoweringHandle // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void BP_HandleStoppedLoweringCable(); // Function AscenderCodeRuntime.FortAscenderZipline.BP_HandleStoppedLoweringCable // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void BP_HandleStartedLoweringHandle(); // Function AscenderCodeRuntime.FortAscenderZipline.BP_HandleStartedLoweringHandle // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void BP_HandleStartedLoweringCable(); // Function AscenderCodeRuntime.FortAscenderZipline.BP_HandleStartedLoweringCable // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void BP_HandlePlayerStoppedUsingHandle(struct AFortPlayerPawn* Player); // Function AscenderCodeRuntime.FortAscenderZipline.BP_HandlePlayerStoppedUsingHandle // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void BP_HandlePlayerStartedUsingHandle(struct AFortPlayerPawn* Player); // Function AscenderCodeRuntime.FortAscenderZipline.BP_HandlePlayerStartedUsingHandle // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void ApplyStructureDamage(struct ABuildingSMActor* BuildingActor, struct AActor* DamageSource); // Function AscenderCodeRuntime.FortAscenderZipline.ApplyStructureDamage // (Event|Public|BlueprintCallable|BlueprintEvent|Const) // @ game+0xd67374
};

