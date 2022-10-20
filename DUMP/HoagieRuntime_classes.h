// Class HoagieRuntime.FortCameraMode_Hoagie
// Size: 0x1b60 (Inherited: 0x1af0)
struct UFortCameraMode_Hoagie : UFortCameraMode_AthenaVehicle {
	float CurrentRollMultiplier; // 0x1af0(0x04)
	float CurrentPitchMultiplier; // 0x1af4(0x04)
	struct FVector LastOrigin; // 0x1af8(0x18)
	struct FVector CurrentInterpSpeed; // 0x1b10(0x18)
	struct FVector BoostInterpSpeed; // 0x1b28(0x18)
	float BaseRollMultiplier; // 0x1b40(0x04)
	float BasePitchMultiplier; // 0x1b44(0x04)
	float BoostRollMultiplier; // 0x1b48(0x04)
	float BoostPitchMultiplier; // 0x1b4c(0x04)
	float BoostRollDampFactor; // 0x1b50(0x04)
	float BoostRollRecoveryDampFactor; // 0x1b54(0x04)
	float BoostRecoveryInterpSpeed; // 0x1b58(0x04)
	char pad_1B5C[0x4]; // 0x1b5c(0x04)
};

// Class HoagieRuntime.FortHoagieAudioController
// Size: 0x2f0 (Inherited: 0x288)
struct AFortHoagieAudioController : AActor {
	bool bHighQualityOverride; // 0x288(0x01)
	bool bLocalPlayerInHoagie; // 0x289(0x01)
	bool bCriticalDamageNative; // 0x28a(0x01)
	bool bRotorHitNative; // 0x28b(0x01)
	bool bIsRotorWashActiveNative; // 0x28c(0x01)
	char pad_28D[0x3]; // 0x28d(0x03)
	float RotorWashRelativeZOffset; // 0x290(0x04)
	struct TWeakObjectPtr<struct AFortHoagieVehicle> Vehicle; // 0x294(0x08)
	char pad_29C[0x4]; // 0x29c(0x04)
	struct UFortLayeredAudioComponent* EngineAudio; // 0x2a0(0x08)
	struct UFortLayeredAudioComponent* RotorAudio; // 0x2a8(0x08)
	char pad_2B0[0x40]; // 0x2b0(0x40)

	void Update(); // Function HoagieRuntime.FortHoagieAudioController.Update // (Final|Native|Public|BlueprintCallable) // @ game+0x64fff74
	void CacheHoagieVehicle(struct AFortHoagieVehicle* InVehicle); // Function HoagieRuntime.FortHoagieAudioController.CacheHoagieVehicle // (Final|Native|Public|BlueprintCallable) // @ game+0x64ff99c
	void CacheAudioComponents(struct UFortLayeredAudioComponent* InEngine, struct UFortLayeredAudioComponent* InRotor); // Function HoagieRuntime.FortHoagieAudioController.CacheAudioComponents // (Final|Native|Public|BlueprintCallable) // @ game+0x64ff8d0
};

// Class HoagieRuntime.FortHoagieDriverAnimInstance
// Size: 0x890 (Inherited: 0x810)
struct UFortHoagieDriverAnimInstance : UFortVehicleOccupantAnimInstance {
	struct FVector LeftHandIKPositionOffset; // 0x810(0x18)
	struct FVector RightHandIKPositionOffset; // 0x828(0x18)
	struct FRotator LeftHandIKRotationOffset; // 0x840(0x18)
	struct FRotator RightHandIKRotationOffset; // 0x858(0x18)
	enum class EFortCardinalDirection BoostCardinalDirection; // 0x870(0x01)
	char pad_871[0x3]; // 0x871(0x03)
	float NormalizedAcceleration; // 0x874(0x04)
	float VehicleRoll; // 0x878(0x04)
	float VehicleYaw; // 0x87c(0x04)
	float ForwardSpeed; // 0x880(0x04)
	bool bIsMovingAnyDirection; // 0x884(0x01)
	bool bIsMovingFastAnyDirection; // 0x885(0x01)
	bool bShouldReverse; // 0x886(0x01)
	bool bShouldGoBackToIdle; // 0x887(0x01)
	bool bTransition_Default_ReverseStart; // 0x888(0x01)
	bool bTransition_BoostLoop_Reverse; // 0x889(0x01)
	char pad_88A[0x6]; // 0x88a(0x06)
};

// Class HoagieRuntime.FortHoagieVehicle
// Size: 0x1f90 (Inherited: 0x1970)
struct AFortHoagieVehicle : AFortAthenaSKVehicle {
	struct FName PassengerCollision; // 0x1970(0x04)
	float CameraBoomDistance; // 0x1974(0x04)
	float CameraBoomHeight; // 0x1978(0x04)
	char pad_197C[0x4]; // 0x197c(0x04)
	struct FMulticastInlineDelegate OnBoostStateChanged; // 0x1980(0x10)
	struct FMulticastInlineDelegate OnAltimeterTraceUpdated; // 0x1990(0x10)
	struct FMulticastInlineDelegate OnCrashingStateEntered; // 0x19a0(0x10)
	bool bEngineAudioDisabled; // 0x19b0(0x01)
	char pad_19B1[0x3]; // 0x19b1(0x03)
	float LiftRumbleTimer; // 0x19b4(0x04)
	bool bLiftUp; // 0x19b8(0x01)
	char pad_19B9[0x7]; // 0x19b9(0x07)
	uint64_t LiftForceFeedbackHandle; // 0x19c0(0x08)
	uint64_t PassiveForceFeedbackHandle; // 0x19c8(0x08)
	float Theta_Native; // 0x19d0(0x04)
	float WashAltAlpha_Native; // 0x19d4(0x04)
	float RotorWashTickTimer; // 0x19d8(0x04)
	char pad_19DC[0x4]; // 0x19dc(0x04)
	struct TArray<struct FVector> RotorTraceArray; // 0x19e0(0x10)
	struct TArray<enum class EObjectTypeQuery> RotorWashObjectsTypes; // 0x19f0(0x10)
	struct UFortHoagieVehicleConfigs* FortHoagieVehicleConfigs; // 0x1a00(0x08)
	struct UCurveFloat* RumbleIntensity; // 0x1a08(0x08)
	struct FFortHeliFlightModel FlightModel; // 0x1a10(0x1e8)
	bool bClearPitchInput; // 0x1bf8(0x01)
	char pad_1BF9[0x3]; // 0x1bf9(0x03)
	float BoostTimeLeft; // 0x1bfc(0x04)
	float BoostBrakingTimeLeft; // 0x1c00(0x04)
	float BoostCooldown; // 0x1c04(0x04)
	float ShutdownTimer; // 0x1c08(0x04)
	float FoliageDestructionTimer; // 0x1c0c(0x04)
	float CrashingScrapingTimer; // 0x1c10(0x04)
	float CrashingNotMovingTimer; // 0x1c14(0x04)
	bool bCanSleep; // 0x1c18(0x01)
	bool bHasAppliedCrashDamage; // 0x1c19(0x01)
	bool bOrientedForLanding; // 0x1c1a(0x01)
	bool bForceNegativeLift; // 0x1c1b(0x01)
	float AltimeterTraceTimer; // 0x1c1c(0x04)
	float LastRotorImpulseTime; // 0x1c20(0x04)
	float CriticalExplodeTimer; // 0x1c24(0x04)
	bool bCriticalExplosionPlayed; // 0x1c28(0x01)
	char pad_1C29[0x3]; // 0x1c29(0x03)
	float TimeWhileCritical; // 0x1c2c(0x04)
	float TimeWhileLanding; // 0x1c30(0x04)
	float LiftFromOverrideButton; // 0x1c34(0x04)
	struct FVector BoostDirection; // 0x1c38(0x18)
	struct FVector LastRotorSweepDirection; // 0x1c50(0x18)
	struct FHitResult AltimeterTraceResult; // 0x1c68(0xe0)
	int32_t HoagieStateRep; // 0x1d48(0x04)
	enum class EHoagieState CurrentHoagieState; // 0x1d4c(0x04)
	float CurrentRotorSpeed; // 0x1d50(0x04)
	float CurrentRotorAngle; // 0x1d54(0x04)
	float RotorImpactTraceAngle; // 0x1d58(0x04)
	struct FVehicleGamepadLiftInputs LiftInputs; // 0x1d5c(0x08)
	char pad_1D64[0x4]; // 0x1d64(0x04)
	struct TArray<struct FRotorHit> RotorHits; // 0x1d68(0x10)
	struct TArray<struct FCachedSeatCollision> CachedSeatCollision; // 0x1d78(0x10)
	struct FVector RotorHitLinearImpulse; // 0x1d88(0x18)
	struct FVector RotorHitAngularImpulse; // 0x1da0(0x18)
	struct UNiagaraComponent* HoagieIdleFX_Native; // 0x1db8(0x08)
	struct UNiagaraComponent* DamageFX_Native; // 0x1dc0(0x08)
	struct UNiagaraComponent* RotorWashFX_Native; // 0x1dc8(0x08)
	struct UFortHoagieVehicleAnimInstance* HoagieAnimBP_Native; // 0x1dd0(0x08)
	struct FName AltimeterTraceSocketName; // 0x1dd8(0x04)
	struct FName RotorDamageTraceSocketName; // 0x1ddc(0x04)
	struct FName MainRotorCritSocketName; // 0x1de0(0x04)
	struct FName TailRotorCritSocketName; // 0x1de4(0x04)
	struct UAnimMontage* SeatTransition_ToDriver; // 0x1de8(0x08)
	struct UAnimMontage* SeatTransition_ToPassenger; // 0x1df0(0x08)
	struct FName RotorTraceProfile; // 0x1df8(0x04)
	struct FName FoliageOverlapsBoxTag; // 0x1dfc(0x04)
	struct FReplicatedHeliControlState ControlState; // 0x1e00(0x30)
	float CurrentViewDistanceScale; // 0x1e30(0x04)
	float CurrentHLODDistanceOverrideScale; // 0x1e34(0x04)
	float CurrentHLODMaxDrawDistanceScale; // 0x1e38(0x04)
	char pad_1E3C[0xc]; // 0x1e3c(0x0c)
	struct FHoagieDeathEffectInfo CachedDeathEffectInfo; // 0x1e48(0x148)

	void UpdateHoagieAnimBP(); // Function HoagieRuntime.FortHoagieVehicle.UpdateHoagieAnimBP // (Native|Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x650000c
	void UpdateDamageStateNative(float Damage); // Function HoagieRuntime.FortHoagieVehicle.UpdateDamageStateNative // (Final|Native|Protected|BlueprintCallable) // @ game+0x64fff88
	void ShowCooldownCue(struct AFortPlayerPawn* Pawn, float Duration); // Function HoagieRuntime.FortHoagieVehicle.ShowCooldownCue // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void SetTailRotorRotation(float Degrees); // Function HoagieRuntime.FortHoagieVehicle.SetTailRotorRotation // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void SetRotorWashActive(bool bActive); // Function HoagieRuntime.FortHoagieVehicle.SetRotorWashActive // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void SetMainRotorRotation(float Degrees); // Function HoagieRuntime.FortHoagieVehicle.SetMainRotorRotation // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ServerUpdateControlState(struct FReplicatedHeliControlState InControlState); // Function HoagieRuntime.FortHoagieVehicle.ServerUpdateControlState // (Final|Net|Native|Event|Private|NetServer) // @ game+0x64ffed0
	void OnTickRotors(float RotorAngleDegrees); // Function HoagieRuntime.FortHoagieVehicle.OnTickRotors // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnStartupEnd(); // Function HoagieRuntime.FortHoagieVehicle.OnStartupEnd // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnStartupBegin(); // Function HoagieRuntime.FortHoagieVehicle.OnStartupBegin // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnRotorsStop(); // Function HoagieRuntime.FortHoagieVehicle.OnRotorsStop // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnRotorDamagePlayer(struct FHitResult& Impact); // Function HoagieRuntime.FortHoagieVehicle.OnRotorDamagePlayer // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void OnRotorDamageDealtOuter(struct FHitResult& Impact); // Function HoagieRuntime.FortHoagieVehicle.OnRotorDamageDealtOuter // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void OnRotorDamageDealtInner(struct FHitResult& Impact); // Function HoagieRuntime.FortHoagieVehicle.OnRotorDamageDealtInner // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void OnRotorDamageDealt(struct FHitResult& Impact, bool bInner); // Function HoagieRuntime.FortHoagieVehicle.OnRotorDamageDealt // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void OnRep_HoagieState(); // Function HoagieRuntime.FortHoagieVehicle.OnRep_HoagieState // (Final|Native|Protected) // @ game+0x64ffebc
	void OnRep_ControlState(); // Function HoagieRuntime.FortHoagieVehicle.OnRep_ControlState // (Final|Native|Private) // @ game+0x24841e4
	void OnRefueledFromEmpty(); // Function HoagieRuntime.FortHoagieVehicle.OnRefueledFromEmpty // (Final|Native|Protected) // @ game+0x64ffea8
	void OnImpactWhileCritical(); // Function HoagieRuntime.FortHoagieVehicle.OnImpactWhileCritical // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnImpactOtherHoagie(struct FVector& HitLocation, struct FVector& NormalImpulse); // Function HoagieRuntime.FortHoagieVehicle.OnImpactOtherHoagie // (Event|Protected|HasOutParms|HasDefaults|BlueprintEvent) // @ game+0xd67374
	void OnCritRotor(float Damage, struct FVector& ImpactLocation, struct AController* DamageInstigator, struct AActor* DamageCauser, bool bMainRotor); // Function HoagieRuntime.FortHoagieVehicle.OnCritRotor // (Event|Protected|HasOutParms|HasDefaults|BlueprintEvent) // @ game+0xd67374
	void OnBoostStarted(); // Function HoagieRuntime.FortHoagieVehicle.OnBoostStarted // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnBoostReady(); // Function HoagieRuntime.FortHoagieVehicle.OnBoostReady // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnBoostFinished(); // Function HoagieRuntime.FortHoagieVehicle.OnBoostFinished // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnBoostFailed(); // Function HoagieRuntime.FortHoagieVehicle.OnBoostFailed // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void MulticastRotorImpulse(struct FHitResult RotorHit); // Function HoagieRuntime.FortHoagieVehicle.MulticastRotorImpulse // (Net|NetReliableNative|Event|NetMulticast|Protected|BlueprintCallable) // @ game+0x64ffe18
	bool IsStartingUp(); // Function HoagieRuntime.FortHoagieVehicle.IsStartingUp // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x64ffdfc
	bool IsShuttingDown(); // Function HoagieRuntime.FortHoagieVehicle.IsShuttingDown // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x64ffddc
	bool IsScrapingBottom(); // Function HoagieRuntime.FortHoagieVehicle.IsScrapingBottom // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x64ffdb8
	float GetVerticalSpeedKmh(); // Function HoagieRuntime.FortHoagieVehicle.GetVerticalSpeedKmh // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x64ffd90
	struct FVector GetThrustDirection(bool bWorldSpace); // Function HoagieRuntime.FortHoagieVehicle.GetThrustDirection // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x64ffcec
	float GetStrafeAlpha(); // Function HoagieRuntime.FortHoagieVehicle.GetStrafeAlpha // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x64ffb54
	float GetSteerAlpha(); // Function HoagieRuntime.FortHoagieVehicle.GetSteerAlpha // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x64ffcb8
	float GetShutdownTimeLeft(); // Function HoagieRuntime.FortHoagieVehicle.GetShutdownTimeLeft // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x64ffca0
	float GetRotorSpeedPercent(); // Function HoagieRuntime.FortHoagieVehicle.GetRotorSpeedPercent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x64ffc80
	float GetRotorSpeed(); // Function HoagieRuntime.FortHoagieVehicle.GetRotorSpeed // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x64ffc68
	struct FVector GetRotorCenterPosition(); // Function HoagieRuntime.FortHoagieVehicle.GetRotorCenterPosition // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x64ffc30
	float GetRotorAngleDegrees(); // Function HoagieRuntime.FortHoagieVehicle.GetRotorAngleDegrees // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x64ffc18
	float GetMaxBoostCooldown(); // Function HoagieRuntime.FortHoagieVehicle.GetMaxBoostCooldown // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x64ffbf8
	float GetMaxAltitude(); // Function HoagieRuntime.FortHoagieVehicle.GetMaxAltitude // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x64ffbd8
	float GetLiftAlpha(); // Function HoagieRuntime.FortHoagieVehicle.GetLiftAlpha // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x64ffba4
	bool GetIsEngineOn(); // Function HoagieRuntime.FortHoagieVehicle.GetIsEngineOn // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x64ffb84
	float GetForwardAlpha(); // Function HoagieRuntime.FortHoagieVehicle.GetForwardAlpha // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x64ffb54
	float GetDistanceToGround(); // Function HoagieRuntime.FortHoagieVehicle.GetDistanceToGround // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x64ffb3c
	float GetBoostTimeLeft(); // Function HoagieRuntime.FortHoagieVehicle.GetBoostTimeLeft // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x64ffb24
	float GetBoostDuration(); // Function HoagieRuntime.FortHoagieVehicle.GetBoostDuration // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x64ffb04
	struct FVector GetBoostDirection(); // Function HoagieRuntime.FortHoagieVehicle.GetBoostDirection // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x64ffadc
	float GetBoostCooldown(); // Function HoagieRuntime.FortHoagieVehicle.GetBoostCooldown // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x64ffac4
	float GetAltitude(); // Function HoagieRuntime.FortHoagieVehicle.GetAltitude // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x64ffaa4
};

// Class HoagieRuntime.FortHoagieVehicleAnimInstance
// Size: 0x7e0 (Inherited: 0x5f0)
struct UFortHoagieVehicleAnimInstance : UFortVehicleAnimInstance {
	char pad_5F0[0x130]; // 0x5f0(0x130)
	struct FRotator EngineRotation; // 0x720(0x18)
	struct FRotator MainRotorRotation; // 0x738(0x18)
	struct FRotator TailRotorRotaton; // 0x750(0x18)
	struct FRotator BoosterFanRotation; // 0x768(0x18)
	enum class EFortCardinalDirection BoostCardinalDirection; // 0x780(0x01)
	char pad_781[0x1b]; // 0x781(0x1b)
	float EngineRotationInterpSpeed; // 0x79c(0x04)
	float EngineRotationDuringBoostInterpSpeed; // 0x7a0(0x04)
	float EngineFlipSpeedThreshold; // 0x7a4(0x04)
	float BoostDirectionDeadzone; // 0x7a8(0x04)
	float EngineFlipDeadzone; // 0x7ac(0x04)
	float DriverRoll; // 0x7b0(0x04)
	float DriverYaw; // 0x7b4(0x04)
	float VerticalSpeed; // 0x7b8(0x04)
	float FwdSpeed; // 0x7bc(0x04)
	float LocalBoostDirection; // 0x7c0(0x04)
	float YawBlendSpaceInput; // 0x7c4(0x04)
	float NormalizedAcceleration; // 0x7c8(0x04)
	char pad_7CC[0x1]; // 0x7cc(0x01)
	bool bShouldHideBlades; // 0x7cd(0x01)
	bool bIsBoostOnCD; // 0x7ce(0x01)
	bool bIsBoostReady; // 0x7cf(0x01)
	bool bIsMovingForward; // 0x7d0(0x01)
	bool bIsReversing; // 0x7d1(0x01)
	bool bIsMovingAnyDirection; // 0x7d2(0x01)
	bool bIsBoosting; // 0x7d3(0x01)
	bool bShouldReverse; // 0x7d4(0x01)
	bool bShouldGoBackToIdle; // 0x7d5(0x01)
	bool bShouldApplyBoostAdditive; // 0x7d6(0x01)
	bool bIsEngineShuttingOff; // 0x7d7(0x01)
	bool bTransition_Default_ReverseStart; // 0x7d8(0x01)
	bool bTransition_BoostLoop_Reverse; // 0x7d9(0x01)
	char pad_7DA[0x6]; // 0x7da(0x06)
};

// Class HoagieRuntime.FortHoagieVehicleConfigs
// Size: 0x9e0 (Inherited: 0x7a8)
struct UFortHoagieVehicleConfigs : UFortPhysicsVehicleConfigs {
	float StrafeForce; // 0x7a8(0x04)
	float StrafeForceMin; // 0x7ac(0x04)
	float MaxStrafeSpeedKmh; // 0x7b0(0x04)
	float StrafeTooFastBrakeForce; // 0x7b4(0x04)
	float LandedBrakeForce; // 0x7b8(0x04)
	float LiftForce; // 0x7bc(0x04)
	float MaxLiftSpeedKmh; // 0x7c0(0x04)
	float LiftTooFastBrakeForce; // 0x7c4(0x04)
	float LateralDragCoefficient; // 0x7c8(0x04)
	float LateralDragCoefficient2; // 0x7cc(0x04)
	float LiftDragCoefficient; // 0x7d0(0x04)
	float LiftDragCoefficient2; // 0x7d4(0x04)
	float MaxPitchForCameraYaw; // 0x7d8(0x04)
	float MaxCameraYawAngle; // 0x7dc(0x04)
	float CameraYawStiff; // 0x7e0(0x04)
	float CameraYawDamp; // 0x7e4(0x04)
	float CameraYawStrength; // 0x7e8(0x04)
	float UprightStiff; // 0x7ec(0x04)
	float UprightDamp; // 0x7f0(0x04)
	bool bUseVehiclePivotForCameraPitch; // 0x7f4(0x01)
	char pad_7F5[0x3]; // 0x7f5(0x03)
	float ThrustTorqueAnglePercent; // 0x7f8(0x04)
	float BoostThrustTorqueAnglePercent; // 0x7fc(0x04)
	float ThrustTorqueStiff; // 0x800(0x04)
	float ThrustTorqueDamp; // 0x804(0x04)
	float ThrustTorqueMaxAccel; // 0x808(0x04)
	float ThrustTorque; // 0x80c(0x04)
	float YawTorque; // 0x810(0x04)
	float YawTorqueDampingSpeed; // 0x814(0x04)
	float BoostForce; // 0x818(0x04)
	float BoostMaxSpeedKmh; // 0x81c(0x04)
	float BoostDuration; // 0x820(0x04)
	float BoostCooldown; // 0x824(0x04)
	float BoostTorqueStiff; // 0x828(0x04)
	float BoostTorqueDamp; // 0x82c(0x04)
	float AfterBoostBrakingForce; // 0x830(0x04)
	float AfterBoostBrakingDuration; // 0x834(0x04)
	float AfterBoostBrakingMinSpeed; // 0x838(0x04)
	float PitchAngleRequiredForFullThrust; // 0x83c(0x04)
	float DistanceToGroundForLanding; // 0x840(0x04)
	float StartupDelay; // 0x844(0x04)
	float LandingSequenceDelay; // 0x848(0x04)
	float RotorsRadius; // 0x84c(0x04)
	float RotorsRadiusInner; // 0x850(0x04)
	float NoDriverBrakeForce; // 0x854(0x04)
	float TimeBetweenRotorDamageTicks; // 0x858(0x04)
	float AutoLandingForce; // 0x85c(0x04)
	float RotorDamageBoxSweepLength; // 0x860(0x04)
	float CriticalStateLiftForce; // 0x864(0x04)
	float IdleRotationMultiplier; // 0x868(0x04)
	float LiftPitchDegrees; // 0x86c(0x04)
	float MinAltitudeForIdleNoise; // 0x870(0x04)
	float DefaultLinearDamp; // 0x874(0x04)
	float DefaultAngularDamp; // 0x878(0x04)
	float LandingLinearDamp; // 0x87c(0x04)
	float LandingAngularDamp; // 0x880(0x04)
	float LandingLiftAlpha; // 0x884(0x04)
	float CriticalStateThrustMultiplier; // 0x888(0x04)
	float BodyUpDotThresholdForLanding; // 0x88c(0x04)
	int32_t CriticalHealthThreshold; // 0x890(0x04)
	float DamagePerImpulseWhileCritical; // 0x894(0x04)
	float RotorImpulseLinear; // 0x898(0x04)
	float RotorImpulseAngular; // 0x89c(0x04)
	float RotorImpulseCooldown; // 0x8a0(0x04)
	float StartupLift; // 0x8a4(0x04)
	float StartupLiftTime; // 0x8a8(0x04)
	float MaxAltitude; // 0x8ac(0x04)
	float AltitudeForSpinning; // 0x8b0(0x04)
	float RotorMaxSpeed; // 0x8b4(0x04)
	float RotorAccel; // 0x8b8(0x04)
	float RotorDecel; // 0x8bc(0x04)
	float ExplodeRotorDecel; // 0x8c0(0x04)
	float MinRotorSpeedForSkippingStartup; // 0x8c4(0x04)
	float RotorSpeedForStartupLift; // 0x8c8(0x04)
	float CriticalLiftForceDecay; // 0x8cc(0x04)
	float CriticalYawTorqueMin; // 0x8d0(0x04)
	float CriticalYawTorqueMax; // 0x8d4(0x04)
	float CriticalYawTorqueRampDuration; // 0x8d8(0x04)
	float RotorTraceRotationSpeed; // 0x8dc(0x04)
	float RotorTraceBoxSize; // 0x8e0(0x04)
	float RotorTraceBoxHeight; // 0x8e4(0x04)
	float MaxCriticalFallForce; // 0x8e8(0x04)
	float BoostFOV; // 0x8ec(0x04)
	float GentleCrashTimeToExplode; // 0x8f0(0x04)
	float CriticalTimeForGentleCrash; // 0x8f4(0x04)
	float AutoLandingYawTorque; // 0x8f8(0x04)
	float MinHeightForAutoLandingYawTorque; // 0x8fc(0x04)
	float MinSpeedForScrapingBottom; // 0x900(0x04)
	float FallDamageHeightBuffer; // 0x904(0x04)
	float TimeBetweenRotorPlayerDamage; // 0x908(0x04)
	float RotorMoveSpeedRequiredToUpdateTraceDirSqr; // 0x90c(0x04)
	float FoliageTraceRate; // 0x910(0x04)
	float RotorWashTicksPerFrame; // 0x914(0x04)
	float CriticalHitRadius; // 0x918(0x04)
	float AngleNormalUpForLockMovement; // 0x91c(0x04)
	float MaxAutoLandingTime; // 0x920(0x04)
	float SpeedThresholdForCrashed; // 0x924(0x04)
	float CritMultiplier; // 0x928(0x04)
	float AltitudeForSprings; // 0x92c(0x04)
	float MaxCrashingTime; // 0x930(0x04)
	float MaxCrashingScrapingTime; // 0x934(0x04)
	float MaxCrashingTimeSpentNotMoving; // 0x938(0x04)
	float LandscapeRotorImpulseMag; // 0x93c(0x04)
	float HealthThresholdForLandscapeRotorImpulse; // 0x940(0x04)
	float MaxHeightBuffer; // 0x944(0x04)
	bool bImpulseOnOuterRotorHitLandscape; // 0x948(0x01)
	bool bSkipRotorImpulses; // 0x949(0x01)
	bool bEnableCVarScaling; // 0x94a(0x01)
	char pad_94B[0x1]; // 0x94b(0x01)
	float CVarScalingInterp; // 0x94c(0x04)
	struct FVector FoliageTraceBoxSize; // 0x950(0x18)
	struct FVector WaterBoxSize; // 0x968(0x18)
	struct FVector WaterBoxOffset; // 0x980(0x18)
	struct FVector RotorOffsetFromActorLocationOnServer; // 0x998(0x18)
	bool bSkipContactRotations; // 0x9b0(0x01)
	char pad_9B1[0x7]; // 0x9b1(0x07)
	struct FScalableFloat MaxAutoLandHeightWhenOutOfFuel; // 0x9b8(0x28)
};

