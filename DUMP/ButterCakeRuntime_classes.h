// Class ButterCakeRuntime.ButterCakeKismetLibrary
// Size: 0x28 (Inherited: 0x28)
struct UButterCakeKismetLibrary : UBlueprintFunctionLibrary {
};

// Class ButterCakeRuntime.ButterCakeUnstuckComponent
// Size: 0x178 (Inherited: 0xa0)
struct UButterCakeUnstuckComponent : UActorComponent {
	struct FMulticastInlineDelegate OnBlocked; // 0xa0(0x10)
	struct FScalableFloat EnsureEnable; // 0xb0(0x28)
	struct FScalableFloat EventBPEnable; // 0xd8(0x28)
	int32_t LocationSampleMaxCount; // 0x100(0x04)
	float LocationSampleDelay; // 0x104(0x04)
	float DistanceMinToUnstuck; // 0x108(0x04)
	char pad_10C[0x4]; // 0x10c(0x04)
	struct FGameplayTagContainer PauseUnstuckBehaviorTags; // 0x110(0x20)
	struct TArray<struct FVector> LocationSamples; // 0x130(0x10)
	struct TArray<struct FString> BTTaskSamples; // 0x140(0x10)
	float DistanceMinToUnstuckSqr; // 0x150(0x04)
	char pad_154[0x4]; // 0x154(0x04)
	struct AFortAIPawn* CachedOwner; // 0x158(0x08)
	struct UAbilitySystemComponent* CachedAbilityComponent; // 0x160(0x08)
	struct AFortGameStateAthena* CachedAthenaGameState; // 0x168(0x08)
	char pad_170[0x8]; // 0x170(0x08)

	void ResetUnstuckLocationSamples(); // Function ButterCakeRuntime.ButterCakeUnstuckComponent.ResetUnstuckLocationSamples // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x6549aec
	void HandleAthenaGamePhaseChanged(enum class EAthenaGamePhase GamePhase); // Function ButterCakeRuntime.ButterCakeUnstuckComponent.HandleAthenaGamePhaseChanged // (Final|Native|Private) // @ game+0x65497f8
};

// Class ButterCakeRuntime.FortAIAnimInstance_ButterCake
// Size: 0x5f0 (Inherited: 0x580)
struct UFortAIAnimInstance_ButterCake : UFortAIAnimInstance {
	float DeltaTimeX; // 0x578(0x04)
	float LeanAngle; // 0x57c(0x04)
	float StartPosLeftPlantC; // 0x580(0x04)
	float LookAtYaw; // 0x584(0x04)
	float LookAtPitch; // 0x588(0x04)
	bool bIsMoving; // 0x58c(0x01)
	bool bShouldApplyHostileAdditive; // 0x58d(0x01)
	bool bIsMouthOpen; // 0x58e(0x01)
	bool bIsLocomotion; // 0x58f(0x01)
	bool bIsHostile; // 0x590(0x01)
	bool bIsLured; // 0x591(0x01)
	struct FName AimOffsetAlpha; // 0x594(0x04)
	enum class EFortButterCakeFootPhase FootPhase; // 0x598(0x01)
	bool bFootPhaseIsRightPlantA; // 0x599(0x01)
	bool bFootPhaseIsRightPlantB; // 0x59a(0x01)
	bool bFootPhaseIsRightPlantC; // 0x59b(0x01)
	bool bFootPhaseIsLeftPlantA; // 0x59c(0x01)
	bool bFootPhaseIsLeftPlantB; // 0x59d(0x01)
	bool bFootPhaseIsLeftPlantC; // 0x59e(0x01)
	bool bFootPhaseIsHostileRightPass; // 0x59f(0x01)
	bool bFootPhaseIsHostileRightPlant; // 0x5a0(0x01)
	bool bFootPhaseIsHostileLeftPass; // 0x5a1(0x01)
	bool bFootPhaseIsHostileLeftPlant; // 0x5a2(0x01)
	bool bFootPhaseIsBothPlant; // 0x5a3(0x01)
	bool bFootPhaseIsBothPlantA; // 0x5a4(0x01)
	bool bFootPhaseIsBothPlantB; // 0x5a5(0x01)
	bool bFootPhaseIsBothPlantC; // 0x5a6(0x01)
	bool bFootPhaseIsBothPlantD; // 0x5a7(0x01)
	bool bIsIdleTurn; // 0x5a8(0x01)
	bool bIdleTurnRight; // 0x5a9(0x01)
	float RotationDirection; // 0x5ac(0x04)
	bool bLocomotion_Conduit_IsMovingORIsLocomotion; // 0x5b0(0x01)
	bool bLocomotion_Conduit_NOTIsMovingANDNOTIsLocomotion; // 0x5b1(0x01)
	float MinLeanAngleDegrees; // 0x5b4(0x04)
	float MaxLeanAngleDegrees; // 0x5b8(0x04)
	float MouthOpenMinCurveValue; // 0x5bc(0x04)
	float LocomotionMinCurveValue; // 0x5c0(0x04)
	float FootPhaseMinActivateValue; // 0x5c4(0x04)
	float FootPhaseActiveStartValue; // 0x5c8(0x04)
	float FootPhaseInactiveStartValue; // 0x5cc(0x04)
	struct FName CurveName_DisableHostileAdditive; // 0x5d0(0x04)
	struct FName CurveName_FootPhase; // 0x5d4(0x04)
	struct FName CurveName_ApplyAimOffset; // 0x5d8(0x04)
	struct FName CurveName_ApplyHostileAimOffset; // 0x5dc(0x04)
	struct FName CurveName_MouthOpen; // 0x5e0(0x04)
	struct FName CurveName_IsLocomotion; // 0x5e4(0x04)
	struct FName AIE_ButterCake_Berserk; // 0x5e8(0x04)
	struct FName AIE_ButterCake_Lured; // 0x5ec(0x04)

	void SetFootPhaseMembers(); // Function ButterCakeRuntime.FortAIAnimInstance_ButterCake.SetFootPhaseMembers // (Final|Native|Public|BlueprintCallable) // @ game+0x6549b00
	float ComputeLeanAngleByVelocity(); // Function ButterCakeRuntime.FortAIAnimInstance_ButterCake.ComputeLeanAngleByVelocity // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x6549690
	enum class EFortButterCakeFootPhase ComputeFootPhase(); // Function ButterCakeRuntime.FortAIAnimInstance_ButterCake.ComputeFootPhase // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x654966c
};

// Class ButterCakeRuntime.FortButterCakeComponent_Telemetry
// Size: 0x138 (Inherited: 0x108)
struct UFortButterCakeComponent_Telemetry : UFortAIComponent_Telemetry {
	int32_t ItemsEatenCount; // 0x108(0x04)
	int32_t SneezeCount; // 0x10c(0x04)
	int32_t ItemsSneezedCount; // 0x110(0x04)
	int32_t BerserkCount; // 0x114(0x04)
	int32_t PlayerAsBerserkInstigatorCount; // 0x118(0x04)
	int32_t BotAsBerserkInstigatorCount; // 0x11c(0x04)
	int32_t NPCAsBerserkInstigatorCount; // 0x120(0x04)
	int32_t AIPawnAsBerserkInstigatorCount; // 0x124(0x04)
	int32_t UnknownAsBerserkInstigatorCount; // 0x128(0x04)
	int32_t BlowholeUsesCount; // 0x12c(0x04)
	int32_t LuredCount; // 0x130(0x04)
	char pad_134[0x4]; // 0x134(0x04)

	void OnLured(); // Function ButterCakeRuntime.FortButterCakeComponent_Telemetry.OnLured // (Final|Native|Public|BlueprintCallable) // @ game+0x6549ad8
	void OnItemsSneezed(int32_t ItemsCount); // Function ButterCakeRuntime.FortButterCakeComponent_Telemetry.OnItemsSneezed // (Final|Native|Public|BlueprintCallable) // @ game+0x6549a54
	void OnItemsEaten(int32_t ItemsCount); // Function ButterCakeRuntime.FortButterCakeComponent_Telemetry.OnItemsEaten // (Final|Native|Public|BlueprintCallable) // @ game+0x65499d8
	void OnEnterBerserk(struct AController* Instigator); // Function ButterCakeRuntime.FortButterCakeComponent_Telemetry.OnEnterBerserk // (Final|Native|Public|BlueprintCallable) // @ game+0x65498f0
	void OnBlowHoleUsed(); // Function ButterCakeRuntime.FortButterCakeComponent_Telemetry.OnBlowHoleUsed // (Final|Native|Public|BlueprintCallable) // @ game+0x65498dc
};

// Class ButterCakeRuntime.FortButterCakeControlRig
// Size: 0x620 (Inherited: 0x558)
struct UFortButterCakeControlRig : UControlRig {
	struct FName PBIKRootBoneName; // 0x558(0x04)
	char pad_55C[0x4]; // 0x55c(0x04)
	struct FRigElementKeyCollection FootCurveCollection; // 0x560(0x10)
	struct FRigElementKeyCollection FootEffectorBoneCollection; // 0x570(0x10)
	struct FRigElementKeyCollection FootEffectorControlCollection; // 0x580(0x10)
	struct FRigElementKeyCollection FootExcludedBoneCollection; // 0x590(0x10)
	struct FRigElementKeyCollection ChinEffectorBoneCollection; // 0x5a0(0x10)
	struct FRigElementKeyCollection ChinExcludedBoneCollection; // 0x5b0(0x10)
	struct FRigElementKeyCollection TailEffectorBoneCollection; // 0x5c0(0x10)
	struct FRigElementKey TailBaseBoneKey; // 0x5d0(0x08)
	struct FRigElementKey TailTipBoneKey; // 0x5d8(0x08)
	struct FRigElementKey UpperLipBoneKey; // 0x5e0(0x08)
	struct FRigElementKeyCollection GroundHitBoneCollection; // 0x5e8(0x10)
	struct TArray<struct FVector> GroundHitLocationList; // 0x5f8(0x10)
	struct TArray<struct FVector> GroundHitNormalList; // 0x608(0x10)
	int32_t Counter; // 0x618(0x04)
	char pad_61C[0x4]; // 0x61c(0x04)

	struct FVector GetGroundHitNormalAt(int32_t Index); // Function ButterCakeRuntime.FortButterCakeControlRig.GetGroundHitNormalAt // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x6549758
	struct FVector GetGroundHitLocationAt(int32_t Index); // Function ButterCakeRuntime.FortButterCakeControlRig.GetGroundHitLocationAt // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x65496b8
};

