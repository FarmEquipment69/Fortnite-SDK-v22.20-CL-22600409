// Class MotherGameplayRuntime.FortBaseAnimInstance_CageSaddle
// Size: 0x5a0 (Inherited: 0x430)
struct UFortBaseAnimInstance_CageSaddle : UFortBaseAnimInstance {
	struct AFortSphericalVehicle* AsFortSphericalVehicle; // 0x430(0x08)
	bool bIsOnGround; // 0x438(0x01)
	char pad_439[0x3]; // 0x439(0x03)
	float RemappedPitch; // 0x43c(0x04)
	float CurrentRoll; // 0x440(0x04)
	float LockedRoll; // 0x444(0x04)
	bool bHeadShouldBend; // 0x448(0x01)
	bool bFootShouldBend; // 0x449(0x01)
	char pad_44A[0x6]; // 0x44a(0x06)
	struct FVector BodyGroundOffset; // 0x450(0x18)
	struct FVector2D MinClampPitchInRange; // 0x468(0x10)
	struct FVector2D MinClampPitchOutRange; // 0x478(0x10)
	struct FVector2D MaxClampPitchInRange; // 0x488(0x10)
	struct FVector2D MaxClampPitchOutRange; // 0x498(0x10)
	float HeadAlphaInterpSpeed; // 0x4a8(0x04)
	char pad_4AC[0xf4]; // 0x4ac(0xf4)
};

// Class MotherGameplayRuntime.FortCabbageIglooVehicle
// Size: 0x24b0 (Inherited: 0x24b0)
struct AFortCabbageIglooVehicle : AFortOctopusVehicle {
};

// Class MotherGameplayRuntime.FortGameplayCueNotifyLoop_Goop
// Size: 0x9a0 (Inherited: 0x960)
struct AFortGameplayCueNotifyLoop_Goop : AFortGameplayCueNotify_Loop {
	struct FName SpeedParamName; // 0x960(0x04)
	struct FName IsFallingParamName; // 0x964(0x04)
	struct FGoopAudioMapRangeClamped SpeedMapRangeClamped; // 0x968(0x20)
	float InterpSpeed; // 0x988(0x04)
	char pad_98C[0x4]; // 0x98c(0x04)
	struct UAudioComponent* LoopingAudioComponent; // 0x990(0x08)
	char pad_998[0x8]; // 0x998(0x08)
};

// Class MotherGameplayRuntime.GravityGunTargetTrackingComponent
// Size: 0x268 (Inherited: 0xa0)
struct UGravityGunTargetTrackingComponent : UActorComponent {
	struct FScalableFloat AllowLargeObjects; // 0xa0(0x28)
	struct FScalableFloat AllowMultipleGrabbers; // 0xc8(0x28)
	struct FScalableFloat AllowVehicles; // 0xf0(0x28)
	struct FScalableFloat AllowPickups; // 0x118(0x28)
	struct FScalableFloat AllowProjectiles; // 0x140(0x28)
	struct FScalableFloat AllowForay; // 0x168(0x28)
	struct FScalableFloat AllowWhileInVehicle; // 0x190(0x28)
	struct FName GrabbedByGravityGunTagName; // 0x1b8(0x04)
	char pad_1BC[0x4]; // 0x1bc(0x04)
	struct FGameplayTagContainer InvalidTargetTags; // 0x1c0(0x20)
	struct FGameplayTagContainer TargetIsPlayerTag; // 0x1e0(0x20)
	struct FGameplayTagContainer TargetIsAlreadyGrabbedTag; // 0x200(0x20)
	struct FGameplayTagContainer TargetIsOwnVehicleTag; // 0x220(0x20)
	struct FMulticastInlineDelegate FoundTargetDelegate; // 0x240(0x10)
	struct FMulticastInlineDelegate DeactivateReticleDelegate; // 0x250(0x10)
	char pad_260[0x8]; // 0x260(0x08)

	bool IsValidTarget(struct AActor* OwningPlayer, struct AActor* PotentialTarget, struct FGameplayTagContainer& ReasonForFailure); // Function MotherGameplayRuntime.GravityGunTargetTrackingComponent.IsValidTarget // (Final|Native|Protected|HasOutParms|BlueprintCallable) // @ game+0x6734470
	bool FindTargetProjectile(struct AActor* OwningPlayer, struct FVector& TraceStart, struct FVector& TraceEnd, float TargetingRadius); // Function MotherGameplayRuntime.GravityGunTargetTrackingComponent.FindTargetProjectile // (Final|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x6733988
	void FindTargetActor(struct AActor* OwningPlayer, struct FVector& TraceStart, struct FVector& TraceEnd); // Function MotherGameplayRuntime.GravityGunTargetTrackingComponent.FindTargetActor // (Final|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x6732fa0
};

// Class MotherGameplayRuntime.PropGunFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UPropGunFunctionLibrary : UBlueprintFunctionLibrary {

	void UpdatePropPreviewPosition(struct USceneComponent* PropPreviewComponent, float DeltaTime, struct AFortPawn* AttachPawn, struct FName AttachSocket, struct USkeletalMeshComponent* WeaponMesh, struct FVector& DesiredRelativeTransform, float MinimumZOffset, struct FRotator& RelativeRotation, struct FVector& CachedScale, float InterpSpeed); // Function MotherGameplayRuntime.PropGunFunctionLibrary.UpdatePropPreviewPosition // (Final|Native|Static|Private|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x67348f4
};

// Class MotherGameplayRuntime.ReactorGradeGameplayCue_ChargeUp
// Size: 0x9e8 (Inherited: 0x960)
struct AReactorGradeGameplayCue_ChargeUp : AFortGameplayCueNotify_Loop {
	struct AFortPawn* Pawn; // 0x960(0x08)
	struct UFortWeaponFxComponent_ChargeAimLocation* CachedAimLocationComponent; // 0x968(0x08)
	struct FVector FoundEndPoint; // 0x970(0x18)
	struct FScalableFloat MinHitDistance; // 0x988(0x28)
	struct FScalableFloat HitObjectsLimit; // 0x9b0(0x28)
	char pad_9D8[0x4]; // 0x9d8(0x04)
	enum class ECollisionChannel TraceChannel; // 0x9dc(0x01)
	char pad_9DD[0xb]; // 0x9dd(0x0b)

	void UpdateAimEndPoint(); // Function MotherGameplayRuntime.ReactorGradeGameplayCue_ChargeUp.UpdateAimEndPoint // (Final|Native|Public|BlueprintCallable) // @ game+0x67348e0
	void OnEndPointUpdated(struct FVector& FoundPoint); // Function MotherGameplayRuntime.ReactorGradeGameplayCue_ChargeUp.OnEndPointUpdated // (Event|Public|HasOutParms|HasDefaults|BlueprintEvent) // @ game+0xd67374
	struct FVector GetFoundEndPoint(); // Function MotherGameplayRuntime.ReactorGradeGameplayCue_ChargeUp.GetFoundEndPoint // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x6734448
};

