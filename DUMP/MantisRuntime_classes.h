// Class MantisRuntime.FortAbilityTask_ApplyRootMotionMantisForce
// Size: 0x100 (Inherited: 0xb8)
struct UFortAbilityTask_ApplyRootMotionMantisForce : UAbilityTask_ApplyRootMotion_Base {
	struct FMulticastInlineDelegate OnFinish; // 0xb8(0x10)
	float Duration; // 0xc8(0x04)
	char pad_CC[0x4]; // 0xcc(0x04)
	struct UAnimMontage* TechniqueMontage; // 0xd0(0x08)
	struct FFortMantisRootMotionWarpInfo WarpInfo; // 0xd8(0x28)
};

// Class MantisRuntime.FortAnimNotify_Mantis
// Size: 0x40 (Inherited: 0x38)
struct UFortAnimNotify_Mantis : UAnimNotify {
	enum class EFortMantisNotifyEvent MantisNotifyEvent; // 0x38(0x01)
	enum class EFortMantisBranchRule MantisBranchRule; // 0x39(0x01)
	enum class EFortMantisBranchPath MantisBranchPath; // 0x3a(0x01)
	char pad_3B[0x5]; // 0x3b(0x05)
};

// Class MantisRuntime.FortAnimNotifyState_Mantis
// Size: 0x40 (Inherited: 0x30)
struct UFortAnimNotifyState_Mantis : UAnimNotifyState {
	enum class EFortMantisNotifyWindow MantisNotifyWindow; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	struct FGameplayTag MantisNotifyTag; // 0x34(0x04)
	enum class EFortMantisNotifyRotationWarpRateRule RotationRateWarpRule; // 0x38(0x01)
	char bWarpRotation : 1; // 0x39(0x01)
	char bWarpTranslation : 1; // 0x39(0x01)
	char pad_39_2 : 6; // 0x39(0x01)
	char pad_3A[0x6]; // 0x3a(0x06)
};

// Class MantisRuntime.FortGameplayAbility_Mantis
// Size: 0xb48 (Inherited: 0xb20)
struct UFortGameplayAbility_Mantis : UFortGameplayAbility {
	bool bAllowRootMotionWarping; // 0xb20(0x01)
	char pad_B21[0x7]; // 0xb21(0x07)
	struct UFortMantisPawnComponent* MantisPawnComponent; // 0xb28(0x08)
	struct UAbilityTask_PlayMontageAndWait* MontageTask; // 0xb30(0x08)
	struct UFortAbilityTask_ApplyRootMotionMantisForce* RootMotionTask; // 0xb38(0x08)
	char pad_B40[0x8]; // 0xb40(0x08)

	void OnMontageFinished(); // Function MantisRuntime.FortGameplayAbility_Mantis.OnMontageFinished // (Final|Native|Protected) // @ game+0x650b0d8
	void OnMontageCancelled(); // Function MantisRuntime.FortGameplayAbility_Mantis.OnMontageCancelled // (Final|Native|Protected) // @ game+0x650b084
	void ConfigureRootMotionWarping(struct AActor*& OutTargetActor, bool& bOutAllowTranslationWarp, bool& bOutAllowRotationWarp, bool& bOutSnapshotTargetLocation); // Function MantisRuntime.FortGameplayAbility_Mantis.ConfigureRootMotionWarping // (Native|Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x650ad80
	void BP_OnMantisTechniqueHit(struct FGameplayAbilityTargetDataHandle& TargetDataHandle, struct FGameplayTag ApplicationTag); // Function MantisRuntime.FortGameplayAbility_Mantis.BP_OnMantisTechniqueHit // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void BP_MantisAbilityTechniqueStarted(struct FGameplayTagContainer OwningTags, struct FName SequenceName, bool StartsSequence, bool EndsSequence); // Function MantisRuntime.FortGameplayAbility_Mantis.BP_MantisAbilityTechniqueStarted // (Event|Protected|BlueprintEvent) // @ game+0xd67374
};

// Class MantisRuntime.FortItemLayerAnimInstance_UncleBrolly
// Size: 0x4f0 (Inherited: 0x460)
struct UFortItemLayerAnimInstance_UncleBrolly : UFortItemLayerAnimInstance {
	struct FCachedAnimStateArray UmbrellaGliderOpenStateDataArray; // 0x460(0x18)
	struct FVector WrapTranslation; // 0x478(0x18)
	struct FRotator WrapRotation; // 0x490(0x18)
	struct FRotator RootRotationOffset; // 0x4a8(0x18)
	float LandingPredictedTimer; // 0x4c0(0x04)
	bool bShouldUpdateYawCorrection; // 0x4c4(0x01)
	bool bWasAcceleratingBeforeDodge; // 0x4c5(0x01)
	char pad_4C6[0x2]; // 0x4c6(0x02)
	float UncleBrollyDeployCurveValue; // 0x4c8(0x04)
	float DashChargeTier; // 0x4cc(0x04)
	float DashChargeAdditivePlayrate; // 0x4d0(0x04)
	bool bIsUmbrellaFailing; // 0x4d4(0x01)
	bool bIsMeleeGuarding; // 0x4d5(0x01)
	bool bIsSprinting; // 0x4d6(0x01)
	bool bIsInAir; // 0x4d7(0x01)
	bool bIsLandingPredicted; // 0x4d8(0x01)
	bool bIsJumping; // 0x4d9(0x01)
	bool bIsDodging; // 0x4da(0x01)
	bool bIsDodgingEast; // 0x4db(0x01)
	bool bIsDodgingSouth; // 0x4dc(0x01)
	bool bIsDodgingWest; // 0x4dd(0x01)
	bool bIsDashing; // 0x4de(0x01)
	bool bIsDashCharging; // 0x4df(0x01)
	bool bIsDashPredictingEnd; // 0x4e0(0x01)
	bool bIsChargeTier1; // 0x4e1(0x01)
	bool bIsChargeTier2; // 0x4e2(0x01)
	bool bIsChargeTier3; // 0x4e3(0x01)
	bool bMeleeGuardingOrUmbrellaFailing; // 0x4e4(0x01)
	bool bTransition_Default_to_GuardLoop; // 0x4e5(0x01)
	bool bTransition_Default_to_GuardIntro; // 0x4e6(0x01)
	bool bTransition_GuardIntro_to_Default; // 0x4e7(0x01)
	bool bUpperBodyShouldPassThrough; // 0x4e8(0x01)
	bool bUmbrellaGliderIsOpen; // 0x4e9(0x01)
	char pad_4EA[0x6]; // 0x4ea(0x06)
};

// Class MantisRuntime.FortMantisData
// Size: 0x88 (Inherited: 0x30)
struct UFortMantisData : UDataAsset {
	bool bDetachCharacterRotationFromCamera; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float ReattachCharacterRotationBlendTime; // 0x34(0x04)
	float ReattachCharacterRotationBlendExponent; // 0x38(0x04)
	float WindupCharacterRotationRate; // 0x3c(0x04)
	float ExecutionCharacterRotationRate; // 0x40(0x04)
	float RecoveryCharacterRotationRate; // 0x44(0x04)
	bool bShowTargetHealthBar; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct UFortGameplayAbility_Mantis* TechniqueAbility; // 0x50(0x08)
	struct TArray<struct FFortGameplayEffectContainer> TechniqueAdditionEffectContainers; // 0x58(0x10)
	struct TArray<struct FFortMantisTechniqueData> Techniques; // 0x68(0x10)
	struct TArray<struct FFortMantisTechniqueBranch> Branches; // 0x78(0x10)
};

// Class MantisRuntime.FortMantisPawnComponent
// Size: 0x260 (Inherited: 0xa0)
struct UFortMantisPawnComponent : UPawnComponent {
	char pad_A0[0x98]; // 0xa0(0x98)
	struct TMap<struct UAnimMontage*, struct FFortMantisMontageData> MontageDataMap; // 0x138(0x50)
	struct UFortMantisData* MantisData; // 0x188(0x08)
	struct AFortWeapon* Weapon; // 0x190(0x08)
	char pad_198[0xc8]; // 0x198(0xc8)

	void SetLockOnState(bool bEnabled, struct AActor* TargetActor); // Function MantisRuntime.FortMantisPawnComponent.SetLockOnState // (Final|Native|Public|BlueprintCallable) // @ game+0x650b1c8
	void OnPostPhysicsRotation(struct UCharacterMovementComponent* CharMoveComp, float DeltaSeconds); // Function MantisRuntime.FortMantisPawnComponent.OnPostPhysicsRotation // (Final|Native|Protected) // @ game+0x650b100
	void OnOwnerWeaponHolstered(); // Function MantisRuntime.FortMantisPawnComponent.OnOwnerWeaponHolstered // (Final|Native|Protected) // @ game+0x650b0ec
	void OnCharacterMovementPreUpdate(struct UCharacterMovementComponent* CharMoveComp, float DeltaSeconds); // Function MantisRuntime.FortMantisPawnComponent.OnCharacterMovementPreUpdate // (Final|Native|Protected) // @ game+0x650afbc
	bool IsPerformingLockOn(); // Function MantisRuntime.FortMantisPawnComponent.IsPerformingLockOn // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x650afa0
	bool HasLockOnTarget(); // Function MantisRuntime.FortMantisPawnComponent.HasLockOnTarget // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x650af24
	struct AActor* GetLockOnTarget(); // Function MantisRuntime.FortMantisPawnComponent.GetLockOnTarget // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x650af00
};

// Class MantisRuntime.FortMantisWeaponComponent
// Size: 0xb8 (Inherited: 0xa0)
struct UFortMantisWeaponComponent : UFortWeaponComponent {
	struct UFortMantisData* MantisData; // 0xa0(0x08)
	struct TWeakObjectPtr<struct UFortMantisPawnComponent> MantisPawnComponent; // 0xa8(0x08)
	char pad_B0[0x8]; // 0xb0(0x08)
};

// Class MantisRuntime.UncleBrollyWeaponAnimInstance
// Size: 0x390 (Inherited: 0x350)
struct UUncleBrollyWeaponAnimInstance : UAnimInstance {
	struct UAnimInstance* UncleBrollyItemLayer; // 0x348(0x08)
	struct FRotator UmbrellaRotation; // 0x350(0x18)
	float UmbrellaSpinSpeed; // 0x368(0x04)
	float BlockDeployEndPlayrate; // 0x36c(0x04)
	float BlockDeployEndStartPosition; // 0x370(0x04)
	bool bIsDodging; // 0x374(0x01)
	bool bIsPlayingMeleeAnim; // 0x375(0x01)
	bool bIsUmbrellaFailing; // 0x376(0x01)
	bool bIsMeleeGuarding; // 0x377(0x01)
	bool bIsInAir; // 0x378(0x01)
	bool bIsDashing; // 0x379(0x01)
	bool bIsSprinting; // 0x37a(0x01)
	bool bIsPredictingEnd; // 0x37b(0x01)
	bool bIsDashCharging; // 0x37c(0x01)
	bool bIsDashPredictingEnd; // 0x37d(0x01)
	bool bInAirAndMeleeGuarding; // 0x37e(0x01)
	bool bTransition_Default_to_DeployStart; // 0x37f(0x01)
	bool bTransition_DeployStart_to_Default; // 0x380(0x01)
	bool bTransition_Fail_to_FailToDeploy; // 0x381(0x01)
	bool bTransition_FailLoop_to_DeployEnd; // 0x382(0x01)
	char pad_38B[0x5]; // 0x38b(0x05)
};

