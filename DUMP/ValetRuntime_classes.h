// Class ValetRuntime.DagwoodNetworkPhysicsComponent
// Size: 0xe00 (Inherited: 0xa0)
struct UDagwoodNetworkPhysicsComponent : UActorComponent {
	struct FNetworkPhysicsState NetworkPhysicsState; // 0xa0(0x90)
	struct FMulticastInlineDelegate OnGeneratedLocalInputCmd; // 0x130(0x10)
	struct FDagwoodManagedState ReplicatedManagedState; // 0x140(0x440)
	struct FDagwoodManagedState InManagedState; // 0x580(0x440)
	struct FDagwoodManagedState OutManagedState; // 0x9c0(0x440)

	void SetState_GT(struct FDagwoodInPersistent& In); // Function ValetRuntime.DagwoodNetworkPhysicsComponent.SetState_GT // (Final|Native|Public|HasOutParms) // @ game+0x64a27c8
	void SetPendingInputCmd(struct FFortDagwoodCmd& In); // Function ValetRuntime.DagwoodNetworkPhysicsComponent.SetPendingInputCmd // (Final|Native|Public|HasOutParms) // @ game+0x64a2700
	void OnGeneratedLocalInputCmd__DelegateSignature(); // DelegateFunction ValetRuntime.DagwoodNetworkPhysicsComponent.OnGeneratedLocalInputCmd__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0xd67374
	struct FDagwoodState_PT GetState_PT(); // Function ValetRuntime.DagwoodNetworkPhysicsComponent.GetState_PT // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x64a1ae8
	struct FDagwoodInPersistent GetState_GT(); // Function ValetRuntime.DagwoodNetworkPhysicsComponent.GetState_GT // (Final|Native|Public|Const) // @ game+0x64a1a68
	struct FFortDagwoodCmd GetPendingInputCmd(); // Function ValetRuntime.DagwoodNetworkPhysicsComponent.GetPendingInputCmd // (Final|Native|Public|Const) // @ game+0x64a1a34
};

// Class ValetRuntime.NetworkPhysicsManager
// Size: 0x6118 (Inherited: 0x30)
struct UNetworkPhysicsManager : UWorldSubsystem {
	char pad_30[0x60e8]; // 0x30(0x60e8)
};

// Class ValetRuntime.FortAthenaMutator_OverrideValetVehicleParameters
// Size: 0x380 (Inherited: 0x330)
struct AFortAthenaMutator_OverrideValetVehicleParameters : AFortAthenaMutator {
	struct FScalableFloat MinInitialVehicleFuelPercent; // 0x330(0x28)
	struct FScalableFloat MaxInitialVehicleFuelPercent; // 0x358(0x28)

	void OnPlaylistLoaded(struct FName PlaylistName, struct FGameplayTagContainer& PlaylistContainerTags); // Function ValetRuntime.FortAthenaMutator_OverrideValetVehicleParameters.OnPlaylistLoaded // (Final|Native|Public|HasOutParms) // @ game+0x64a2008
};

// Class ValetRuntime.FortCameraMode_Dagwood
// Size: 0x1b30 (Inherited: 0x1af0)
struct UFortCameraMode_Dagwood : UFortCameraMode_AthenaVehicle {
	float HorizontalCameraSpaceOffsetWhileTurning; // 0x1af0(0x04)
	float SteeringAngleForMaxHorizontalOffset; // 0x1af4(0x04)
	float InAirVerticalOffset; // 0x1af8(0x04)
	float AirOffsetDampFactor; // 0x1afc(0x04)
	float SpeedAlphaDampFactor; // 0x1b00(0x04)
	float TimeInAirRequiredForVertOffset; // 0x1b04(0x04)
	float VehicleBasePitch; // 0x1b08(0x04)
	float HorizOffsetInterpSpeed; // 0x1b0c(0x04)
	float HorizOffsetInterpSpeedRecovery; // 0x1b10(0x04)
	float CurrentSpeedAlpha; // 0x1b14(0x04)
	float CurrentVerticalOffset; // 0x1b18(0x04)
	float CurrentHorizontalOffset; // 0x1b1c(0x04)
	float TimeInAir; // 0x1b20(0x04)
	float PreviousSpeed; // 0x1b24(0x04)
	float AppliedPitch; // 0x1b28(0x04)
	char pad_1B2C[0x4]; // 0x1b2c(0x04)
};

// Class ValetRuntime.FortContextualTutorial_VehicleValetLowFuel
// Size: 0x100 (Inherited: 0xf8)
struct UFortContextualTutorial_VehicleValetLowFuel : UFortContextualTutorial {
	char pad_F8[0x8]; // 0xf8(0x08)

	void HandleVehicleStateChanged(struct AFortPlayerPawn* PlayerPawn, struct AActor* NewVehicle, struct AActor* OldVehicle); // Function ValetRuntime.FortContextualTutorial_VehicleValetLowFuel.HandleVehicleStateChanged // (Final|Native|Private) // @ game+0x64a1ca0
	void HandleStartSkydivingForActivation(); // Function ValetRuntime.FortContextualTutorial_VehicleValetLowFuel.HandleStartSkydivingForActivation // (Final|Native|Private) // @ game+0x64a1c8c
};

// Class ValetRuntime.FortDagwoodModsConfigs
// Size: 0x28 (Inherited: 0x28)
struct UFortDagwoodModsConfigs : UObject {
};

// Class ValetRuntime.FortDagwoodVehicle
// Size: 0x1fe0 (Inherited: 0x19f0)
struct AFortDagwoodVehicle : AFortAthenaSKMotorVehicle {
	struct ULegacyCameraShake* HardLandingCameraShake; // 0x19e8(0x08)
	struct ULegacyCameraShake* DriverCamShakeClass; // 0x19f0(0x08)
	struct ULegacyCameraShake* HandBrakeCamShakeClass; // 0x19f8(0x08)
	enum class EVehicleClass VehicleClass; // 0x1a00(0x01)
	float FadeDelay; // 0x1a04(0x04)
	float FadeDuration; // 0x1a08(0x04)
	float MinBrakeForceForSkid; // 0x1a0c(0x04)
	float MinForwardSpeedForSkid; // 0x1a10(0x04)
	struct FGameplayTag SpeedLinesCueTag; // 0x1a14(0x04)
	float FadeStartTime; // 0x1a18(0x04)
	struct UDagwoodNetworkPhysicsComponent* NetworkPhysicsComponent; // 0x1a20(0x08)
	char pad_1A29[0x77]; // 0x1a29(0x77)
	struct FMulticastInlineDelegate OnTireModHealthChanged; // 0x1aa0(0x10)
	float RechargeableBoostPercent; // 0x1ab0(0x04)
	char pad_1AB4[0x4]; // 0x1ab4(0x04)
	struct UFortSplatterSourceComponent* SplatterSourceComp; // 0x1ab8(0x08)
	bool bEnableNativizedTick; // 0x1ac0(0x01)
	char pad_1AC1[0x7]; // 0x1ac1(0x07)
	struct TArray<struct FName> PassengerLeanSockets; // 0x1ac8(0x10)
	struct TArray<struct FVector> PassngerLeanRelativeOffsets; // 0x1ad8(0x10)
	struct UFortCameraMode_AthenaVehicle* PassengerCameraModeClass; // 0x1ae8(0x08)
	struct UFortCameraMode* PassengerCameraModeClass_ADS; // 0x1af0(0x08)
	struct TArray<struct FName> WheelSocketNames; // 0x1af8(0x10)
	struct UFortDagwoodVehicleConfigs* FortDagwoodVehicleConfigs; // 0x1b08(0x08)
	struct TArray<int32_t> RearShocks; // 0x1b10(0x10)
	struct FGameplayTagContainer OffroadEnvironmentDamageTags; // 0x1b20(0x20)
	struct FGameplayTagContainer FireDamageTags; // 0x1b40(0x20)
	struct FVector NativeWheelScaleRear; // 0x1b60(0x18)
	struct FVector NativeWheelScaleFront; // 0x1b78(0x18)
	struct FVector NativeTireScaleRear; // 0x1b90(0x18)
	struct FVector NativeTireScaleFront; // 0x1ba8(0x18)
	bool bTireSmokeActive; // 0x1bc0(0x01)
	bool bBoostFailed; // 0x1bc1(0x01)
	bool bCanBoostPitch; // 0x1bc2(0x01)
	bool bWasBrakeSkidding; // 0x1bc3(0x01)
	char pad_1BC4[0x4]; // 0x1bc4(0x04)
	uint64_t AccelForceFeedbackHandle; // 0x1bc8(0x08)
	uint64_t SkidForceFeedbackHandle; // 0x1bd0(0x08)
	uint64_t BrakeForceFeedbackHandle; // 0x1bd8(0x08)
	uint64_t HandBrakeForceFeedbackHandle; // 0x1be0(0x08)
	bool bSpeedLinesActive; // 0x1be8(0x01)
	char pad_1BE9[0x1f]; // 0x1be9(0x1f)
	struct FDagwoodRuntimeModifiers DagwoodRuntimeModifiedProperties; // 0x1c08(0x70)
	struct TArray<struct FAttachedWheel> ServerRepWheelData; // 0x1c78(0x10)
	char pad_1C88[0x50]; // 0x1c88(0x50)
	struct FVector FlipYawForwardTargetDirection; // 0x1cd8(0x18)
	struct FVector FlipYawOriginalForward; // 0x1cf0(0x18)
	enum class ETireLocations LastPoppedTire; // 0x1d08(0x01)
	char pad_1D09[0x3]; // 0x1d09(0x03)
	float RoadTopSpeedMultiplier; // 0x1d0c(0x04)
	float CurrentBumpiness; // 0x1d10(0x04)
	float CurrentForwardAcceleration; // 0x1d14(0x04)
	float PreviousTurnAlpha; // 0x1d18(0x04)
	float CurrentCameraAssistStrength; // 0x1d1c(0x04)
	float LostGripTime; // 0x1d20(0x04)
	float LostGripRightAlpha; // 0x1d24(0x04)
	float HandbrakeTime; // 0x1d28(0x04)
	float HandbrakeStartTime; // 0x1d2c(0x04)
	float FlipYawMult; // 0x1d30(0x04)
	float FlipTimer; // 0x1d34(0x04)
	float FlipExplodeTimer; // 0x1d38(0x04)
	float FlipPushForceTimer; // 0x1d3c(0x04)
	float FlipAirTimer; // 0x1d40(0x04)
	float FlipLanding; // 0x1d44(0x04)
	float FlipStartTime; // 0x1d48(0x04)
	float LastFlipDamageTime; // 0x1d4c(0x04)
	float PreFlipControlLossTimer; // 0x1d50(0x04)
	bool bDidCinematicFlip; // 0x1d54(0x01)
	bool bCanCinematicFlip; // 0x1d55(0x01)
	bool bInPopTireVeer; // 0x1d56(0x01)
	bool bInFlipRecovery; // 0x1d57(0x01)
	bool bExplodeAfterFlip; // 0x1d58(0x01)
	bool bLostGrip; // 0x1d59(0x01)
	bool bApplyHandbrakeCatchupForce; // 0x1d5a(0x01)
	bool bDidHandbrakeCatchup; // 0x1d5b(0x01)
	bool bInFlipRoll; // 0x1d5c(0x01)
	bool bInFlipYaw; // 0x1d5d(0x01)
	bool bInFlipPitch; // 0x1d5e(0x01)
	bool bFlipDidLeaveGround; // 0x1d5f(0x01)
	bool bBreakBuildingsIfBlockingLeaningPassenger; // 0x1d60(0x01)
	char pad_1D61[0x3]; // 0x1d61(0x03)
	float LeanBreakTimeAccumulator; // 0x1d64(0x04)
	float LeanBreakCheckInterval; // 0x1d68(0x04)
	char pad_1D6C[0x4]; // 0x1d6c(0x04)
	struct TArray<struct FName> SeatToWindowShapeNames; // 0x1d70(0x10)
	struct ULegacyCameraShake* OffroadCameraShakeInstance; // 0x1d80(0x08)
	struct ULegacyCameraShake* DriverCameraShakeInstance; // 0x1d88(0x08)
	struct ULegacyCameraShake* AccelCameraShakeInstance; // 0x1d90(0x08)
	struct ULegacyCameraShake* HandBrakeCameraShakeInstance; // 0x1d98(0x08)
	struct UNiagaraComponent* NativeComp_RoadAndExhaust; // 0x1da0(0x08)
	struct UNiagaraComponent* NativeComp_TireSkid; // 0x1da8(0x08)
	struct UNiagaraComponent* NativeComp_Damage; // 0x1db0(0x08)
	struct UNiagaraComponent* NativeComp_SpeedLines; // 0x1db8(0x08)
	struct UNiagaraSystem* NativeSys_TireExhaust; // 0x1dc0(0x08)
	struct UNiagaraSystem* NativeSys_SpeedLines; // 0x1dc8(0x08)
	struct UNiagaraSystem* NativeSys_TireSkid; // 0x1dd0(0x08)
	char pad_1DD8[0x10]; // 0x1dd8(0x10)
	struct TArray<enum class ETireStates> FakeTireStates; // 0x1de8(0x10)
	enum class EPoppedTireReactionStates ActivePoppedTireReaction; // 0x1df8(0x01)
	enum class EPoppedTireReactionStates ReplicatedPoppedTireReaction; // 0x1df9(0x01)
	char pad_1DFA[0x2]; // 0x1dfa(0x02)
	struct TWeakObjectPtr<struct AFortValetAudioController> ValetAudio; // 0x1dfc(0x08)
	char pad_1E04[0x4]; // 0x1e04(0x04)
	struct TArray<struct UStaticMeshComponent*> TireMeshes; // 0x1e08(0x10)
	struct TArray<struct UStaticMeshComponent*> FakeTireMeshes; // 0x1e18(0x10)
	char pad_1E28[0x4]; // 0x1e28(0x04)
	bool bIsInoperable; // 0x1e2c(0x01)
	char pad_1E2D[0x3]; // 0x1e2d(0x03)
	int32_t RandomSeed; // 0x1e30(0x04)
	struct FRandomStream RandStream; // 0x1e34(0x08)
	char pad_1E3C[0x104]; // 0x1e3c(0x104)
	char bSelfDestructEnabled : 1; // 0x1f40(0x01)
	char bClientUsesSelfDestructTimer : 1; // 0x1f40(0x01)
	char pad_1F40_2 : 6; // 0x1f40(0x01)
	char pad_1F41[0x7]; // 0x1f41(0x07)
	struct UStaticMesh* TireBootMesh; // 0x1f48(0x08)
	struct TMap<int32_t, struct FDagwoodActionDefForUI> MapSelfDestructActionDefForUI; // 0x1f50(0x50)
	float MinimumTimeBetweenSelfDestructPromptChanges; // 0x1fa0(0x04)
	char pad_1FA4[0x3c]; // 0x1fa4(0x3c)

	void StartFade(); // Function ValetRuntime.FortDagwoodVehicle.StartFade // (Final|Native|Public|BlueprintCallable) // @ game+0x64a289c
	void SetValetAudioController(struct AFortValetAudioController* ValetAudio); // Function ValetRuntime.FortDagwoodVehicle.SetValetAudioController // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x23b3ea8
	void SetDamageInfoOnServer(bool bInDamageFriendlyVehicles, bool bInDamageOtherVehicles, bool bInDamageOwnVehicle, bool bInDamageAllowedFromOtherVehicle); // Function ValetRuntime.FortDagwoodVehicle.SetDamageInfoOnServer // (Final|BlueprintAuthorityOnly|Native|Protected|BlueprintCallable) // @ game+0x64a2598
	void ServerSetRuntimeSpringsInfo(struct FRuntimeSpringsInfo& SpringsInfo); // Function ValetRuntime.FortDagwoodVehicle.ServerSetRuntimeSpringsInfo // (Final|Native|Protected|HasOutParms|BlueprintCallable) // @ game+0x64a24fc
	void ServerSetRuntimeGravity(float GravMult); // Function ValetRuntime.FortDagwoodVehicle.ServerSetRuntimeGravity // (Final|Native|Protected|BlueprintCallable) // @ game+0x64a2468
	void ServerSetRuntimeFuelInfo(struct FRuntimeFuelInfo& FuelInfo); // Function ValetRuntime.FortDagwoodVehicle.ServerSetRuntimeFuelInfo // (Final|Native|Protected|HasOutParms|BlueprintCallable) // @ game+0x64a23b8
	void ServerSetRuntimeDriveInfo(float MaxIncline, float MaxTilt); // Function ValetRuntime.FortDagwoodVehicle.ServerSetRuntimeDriveInfo // (Final|Native|Protected|BlueprintCallable) // @ game+0x64a22dc
	void ServerSetRuntimeBoostInfo(struct FRuntimeBoostInfo& BoostInfo); // Function ValetRuntime.FortDagwoodVehicle.ServerSetRuntimeBoostInfo // (Final|Native|Protected|HasOutParms|BlueprintCallable) // @ game+0x64a2228
	void ServerSetFadeDuration(float NewFadeDuration); // Function ValetRuntime.FortDagwoodVehicle.ServerSetFadeDuration // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x64a21bc
	void ServerSelfDestructActivated(); // Function ValetRuntime.FortDagwoodVehicle.ServerSelfDestructActivated // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x64a21a4
	void ServerAddRuntimeGearsInfo(struct FRuntimeGearInfo& GearInfo); // Function ValetRuntime.FortDagwoodVehicle.ServerAddRuntimeGearsInfo // (Final|Native|Protected|HasOutParms|BlueprintCallable) // @ game+0x64a2110
	void SelfDestructCleanup(); // Function ValetRuntime.FortDagwoodVehicle.SelfDestructCleanup // (Final|Native|Public) // @ game+0x64a20fc
	void OnTickAudioFade(float FadeParam); // Function ValetRuntime.FortDagwoodVehicle.OnTickAudioFade // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnTickAudioController(float DeltaTime); // Function ValetRuntime.FortDagwoodVehicle.OnTickAudioController // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnStopHandbrake(); // Function ValetRuntime.FortDagwoodVehicle.OnStopHandbrake // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnStartHandbrake(); // Function ValetRuntime.FortDagwoodVehicle.OnStartHandbrake // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnServerAltInteract(struct AFortPawn* Pawn); // Function ValetRuntime.FortDagwoodVehicle.OnServerAltInteract // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnRep_ServerRepWheelData(struct TArray<struct FAttachedWheel>& PrevWheelData); // Function ValetRuntime.FortDagwoodVehicle.OnRep_ServerRepWheelData // (Final|Native|Private|HasOutParms) // @ game+0x145a2b4
	void OnRep_RandSeed(); // Function ValetRuntime.FortDagwoodVehicle.OnRep_RandSeed // (Final|Native|Private) // @ game+0x2507da4
	void OnRep_PoppedTireReaction(); // Function ValetRuntime.FortDagwoodVehicle.OnRep_PoppedTireReaction // (Final|Native|Private) // @ game+0x64a20e0
	void OnRep_IsInoperable(); // Function ValetRuntime.FortDagwoodVehicle.OnRep_IsInoperable // (Final|Native|Private) // @ game+0x1d904e4
	void OnRep_FakeTires(struct TArray<enum class ETireStates>& PrevTireStates); // Function ValetRuntime.FortDagwoodVehicle.OnRep_FakeTires // (Final|Native|Private|HasOutParms) // @ game+0x255d634
	void OnRep_DagwoodRuntimeModifiers(struct FDagwoodRuntimeModifiers& PrevMods); // Function ValetRuntime.FortDagwoodVehicle.OnRep_DagwoodRuntimeModifiers // (Final|Native|Private|HasOutParms) // @ game+0x113d278
	void OnInoperableChanged(bool bInoperable); // Function ValetRuntime.FortDagwoodVehicle.OnInoperableChanged // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnHoldSelfDestructStopped(struct AFortPawn* DriverPawn); // Function ValetRuntime.FortDagwoodVehicle.OnHoldSelfDestructStopped // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnHoldSelfDestructStarted(struct AFortPawn* DriverPawn, float ExitDuration); // Function ValetRuntime.FortDagwoodVehicle.OnHoldSelfDestructStarted // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnFlipImpactDamage(); // Function ValetRuntime.FortDagwoodVehicle.OnFlipImpactDamage // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnDestroyedPropFromCollision(struct ABuildingActor* BuildingHitActor); // Function ValetRuntime.FortDagwoodVehicle.OnDestroyedPropFromCollision // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnClientBeginAltInteract(struct AFortPawn* Pawn); // Function ValetRuntime.FortDagwoodVehicle.OnClientBeginAltInteract // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnBoostReady(); // Function ValetRuntime.FortDagwoodVehicle.OnBoostReady // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnBoostFailed(); // Function ValetRuntime.FortDagwoodVehicle.OnBoostFailed // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	float NativeCalculateAccelRumbleIntensity(float MaxIntensity); // Function ValetRuntime.FortDagwoodVehicle.NativeCalculateAccelRumbleIntensity // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x64a1f78
	void MakeOperable(bool bAddGas); // Function ValetRuntime.FortDagwoodVehicle.MakeOperable // (Final|Native|Public|BlueprintCallable) // @ game+0x64a1f14
	void MakeInoperable(); // Function ValetRuntime.FortDagwoodVehicle.MakeInoperable // (Native|Public|BlueprintCallable) // @ game+0x64a1ef4
	bool IsTireSkidding(float MinSpeedForSkid, float AngleForSkid, float SpeedForPeelout, float SpeedForBraking); // Function ValetRuntime.FortDagwoodVehicle.IsTireSkidding // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x64a1db0
	bool IsOnLandscape(); // Function ValetRuntime.FortDagwoodVehicle.IsOnLandscape // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x64a1d98
	bool IsNativeBPTickEnabled(); // Function ValetRuntime.FortDagwoodVehicle.IsNativeBPTickEnabled // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x2524684
	void HandleCurrentPlaylistLoaded(struct FName PlaylistName, struct FGameplayTagContainer& PlaylistContextTags); // Function ValetRuntime.FortDagwoodVehicle.HandleCurrentPlaylistLoaded // (Final|Native|Protected|HasOutParms) // @ game+0xdfcadc
	enum class ETireSurfaces GetTireSurface(enum class ETireLocations TireIndex); // Function ValetRuntime.FortDagwoodVehicle.GetTireSurface // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x64a1c00
	float GetTireHealthPercent(enum class ETireLocations TireIndex); // Function ValetRuntime.FortDagwoodVehicle.GetTireHealthPercent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x64a1b68
	float GetMiddleAxleForwardAdjust(); // Function ValetRuntime.FortDagwoodVehicle.GetMiddleAxleForwardAdjust // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x2698f84
	struct FDagwoodRuntimeModifiers GetCurrentDagwoodRuntimeProperties(); // Function ValetRuntime.FortDagwoodVehicle.GetCurrentDagwoodRuntimeProperties // (Final|Native|Protected|BlueprintCallable) // @ game+0x64a1a18
	float GetBumpiness(); // Function ValetRuntime.FortDagwoodVehicle.GetBumpiness // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x64a1a00
	bool ForwardOrReverseInputPressed(); // Function ValetRuntime.FortDagwoodVehicle.ForwardOrReverseInputPressed // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x64a19dc
	void CleanupLoopingPooledFX(); // Function ValetRuntime.FortDagwoodVehicle.CleanupLoopingPooledFX // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x64a19c4
	void ApplyRuntimeModifiers(); // Function ValetRuntime.FortDagwoodVehicle.ApplyRuntimeModifiers // (Final|Native|Private) // @ game+0x64a19b0
};

// Class ValetRuntime.FortDagwoodVehicleAnimInstance
// Size: 0x660 (Inherited: 0x5f0)
struct UFortDagwoodVehicleAnimInstance : UFortVehicleAnimInstance {
	struct AFortDagwoodVehicle* Dagwood; // 0x5f0(0x08)
	struct FVector GlassScale_FR; // 0x5f8(0x18)
	struct FVector GlassScale_FL; // 0x610(0x18)
	struct FVector GlassScale_BR; // 0x628(0x18)
	struct FVector GlassScale_BL; // 0x640(0x18)
	char pad_658[0x8]; // 0x658(0x08)
};

// Class ValetRuntime.FortDagwoodVehicleConfigs
// Size: 0x9b0 (Inherited: 0x7a8)
struct UFortDagwoodVehicleConfigs : UFortPhysicsVehicleConfigs {
	float BoostMinPushForce; // 0x7a8(0x04)
	float BoostTopSpeedForceMultiplier; // 0x7ac(0x04)
	float BoostTopSpeedMultiplier; // 0x7b0(0x04)
	float BoostWaterMultiplier; // 0x7b4(0x04)
	float VehiclePowerSlideFrontMultiplier; // 0x7b8(0x04)
	float VehiclePowerSlideRearMultiplier; // 0x7bc(0x04)
	float HandbrakeGripAngle; // 0x7c0(0x04)
	float HandbrakeGripAngleRecovery; // 0x7c4(0x04)
	float HandbrakeSpeedForGripLoss; // 0x7c8(0x04)
	float MinSlipDuration; // 0x7cc(0x04)
	float HandbrakeLateralFriction; // 0x7d0(0x04)
	float HandbrakeSteeringMultiplier; // 0x7d4(0x04)
	float HandbrakeFrictionDampFactor; // 0x7d8(0x04)
	float RestoreTractionDampFactor; // 0x7dc(0x04)
	float HandbrakeForce; // 0x7e0(0x04)
	float HandbrakeForceNoAccel; // 0x7e4(0x04)
	float BoostSteeringMultiplier; // 0x7e8(0x04)
	float DirtRoadTopSpeedMultiplier; // 0x7ec(0x04)
	float DirtRoadFrontLateralFriction; // 0x7f0(0x04)
	float DirtRoadRearLateralFriction; // 0x7f4(0x04)
	float DirtRoadAccelForceMultiplier; // 0x7f8(0x04)
	float DirtRoadFakeBumpinessMultiplier; // 0x7fc(0x04)
	float OffRoadTopSpeedMultiplier; // 0x800(0x04)
	float OffRoadFrontLateralFriction; // 0x804(0x04)
	float OffRoadRearLateralFriction; // 0x808(0x04)
	float OffRoadPushForceMultiplier; // 0x80c(0x04)
	float OffroadDamageImpactForceMin; // 0x810(0x04)
	float OffroadDamageImpactForceMax; // 0x814(0x04)
	float OffroadImpactDamageMin; // 0x818(0x04)
	float OffroadImpactDamageMax; // 0x81c(0x04)
	float MinSpeedForOffroadHandling; // 0x820(0x04)
	float FireHealthPercentThreshold; // 0x824(0x04)
	float MinBumpinessSpringHitTimeMultiplier; // 0x828(0x04)
	float MaxBumpinessSpringHitTimeMultiplier; // 0x82c(0x04)
	float BumpinessExponentForShocks; // 0x830(0x04)
	float OffroadRumbleIntensity; // 0x834(0x04)
	float DirtRoadRumbleIntensity; // 0x838(0x04)
	float OffroadDamageScaleExponent; // 0x83c(0x04)
	float HardLandingThresholdMin; // 0x840(0x04)
	float HardLandingThresholdMax; // 0x844(0x04)
	float HardLandingShakeZAmplitudeMin; // 0x848(0x04)
	float HardLandingShakeZAmplitudeMax; // 0x84c(0x04)
	float SpeedLinesThreshold; // 0x850(0x04)
	float PropDestructionImpulse; // 0x854(0x04)
	float DestructionAngle; // 0x858(0x04)
	float UpNormalMinProtected; // 0x85c(0x04)
	float UpForwardMinProtected; // 0x860(0x04)
	float NonCameraSteeringAngleMultiplier; // 0x864(0x04)
	float CameraAssistStrengthMax; // 0x868(0x04)
	float CameraAssistStrengthMin; // 0x86c(0x04)
	float CameraAssistStrengthRecovery; // 0x870(0x04)
	float CameraAssistInterpSpeed; // 0x874(0x04)
	float ReverseChangeDirectionBrakeForceMultiplier; // 0x878(0x04)
	float ReverseChangeDirectionSpeedThreshold; // 0x87c(0x04)
	float DriftExitPushForce; // 0x880(0x04)
	float DriftExitCatchupSpeed; // 0x884(0x04)
	float HandbrakeDurationRequiredForCatchup; // 0x888(0x04)
	float ImpactMagnitudeToEndCatchup; // 0x88c(0x04)
	float PoppedTireSpringLength; // 0x890(0x04)
	float PoppedTireSpringStiff; // 0x894(0x04)
	float PoppedTireSpringDamp; // 0x898(0x04)
	float PoppedTireScrapeFrictionMultiplier; // 0x89c(0x04)
	float RimScrapeFlipRollMagnitude; // 0x8a0(0x04)
	float RimScrapeFlipPitchMagnitude; // 0x8a4(0x04)
	float SpeedForRimFlip; // 0x8a8(0x04)
	float HealthPercentForFlip; // 0x8ac(0x04)
	float FlipYawDuration; // 0x8b0(0x04)
	float FlipRollDuration; // 0x8b4(0x04)
	float FlipPitchDuration; // 0x8b8(0x04)
	float FlipExplodeDuration_Yaw; // 0x8bc(0x04)
	float FlipExplodeDuration_Pitch; // 0x8c0(0x04)
	float FlipPushForceDuration_Yaw; // 0x8c4(0x04)
	float FlipPushForceDuration_Pitch; // 0x8c8(0x04)
	float FlipPushForcMultiplier; // 0x8cc(0x04)
	float FlipPushForce_UpComponentPitch; // 0x8d0(0x04)
	float FlipPushForce_UpComponentRoll; // 0x8d4(0x04)
	float MinTimeInAirRequiredForExplodeLanding; // 0x8d8(0x04)
	float FlipYawSpringStiff; // 0x8dc(0x04)
	float FlipYawSpringDamp; // 0x8e0(0x04)
	float FlipYawSpringMaxAccel; // 0x8e4(0x04)
	float HealthPercentForExplode; // 0x8e8(0x04)
	float FlipRecoveryTime; // 0x8ec(0x04)
	float FlipMaxDuration; // 0x8f0(0x04)
	float FlipWiggleDuration; // 0x8f4(0x04)
	float PoppedTireVeerDuration; // 0x8f8(0x04)
	float PoppedTireVeerSteeringAngle; // 0x8fc(0x04)
	float FlipWiggleFrequency; // 0x900(0x04)
	float FlipWiggleSteeringAngle; // 0x904(0x04)
	float FlipYawAngleThreshold; // 0x908(0x04)
	bool bUsesBoost; // 0x90c(0x01)
	char pad_90D[0x3]; // 0x90d(0x03)
	float RechargeableBoostRateOfUse; // 0x910(0x04)
	float RechargeableBoostRateOfRegen; // 0x914(0x04)
	float BoostRateOfRegenMinMultiplier; // 0x918(0x04)
	float BoostRateOfRegenMaxMultiplier; // 0x91c(0x04)
	float BoostRegenMaxMultiplyTime; // 0x920(0x04)
	float RechargeableBoostRequiredPercentToActivate; // 0x924(0x04)
	float RechargeableBoostMaxPercent; // 0x928(0x04)
	float RechargeableBoostMinPercent; // 0x92c(0x04)
	float AnalogDriftStickThreshold; // 0x930(0x04)
	struct FName TireBootRightSocketName; // 0x934(0x04)
	struct FName TireBootLeftSocketName; // 0x938(0x04)
	float TireBootRelativeDistance; // 0x93c(0x04)
	float BoostForceInAir; // 0x940(0x04)
	float BoostAirMaxSpeed; // 0x944(0x04)
	struct TArray<struct FName> TireSocketNames; // 0x948(0x10)
	struct TArray<struct FName> TireBoneNames; // 0x958(0x10)
	struct TArray<int32_t> RearTireIndices; // 0x968(0x10)
	struct TArray<int32_t> RightSideTires; // 0x978(0x10)
	struct TArray<int32_t> FakeTireIndices; // 0x988(0x10)
	bool bNoWheels; // 0x998(0x01)
	char pad_999[0x3]; // 0x999(0x03)
	float NoWheelsSpringLenMult; // 0x99c(0x04)
	struct TArray<struct FName> NoWheelsBonesToHide; // 0x9a0(0x10)
};

// Class ValetRuntime.FortDagwoodVehicleManager
// Size: 0xb0 (Inherited: 0xa0)
struct UFortDagwoodVehicleManager : UGameStateComponent {
	bool bHasUpdatedPropReplacement; // 0xa0(0x01)
	char pad_A1[0x3]; // 0xa1(0x03)
	int32_t NumVehiclesSpawnedWithTireMod; // 0xa4(0x04)
	char pad_A8[0x8]; // 0xa8(0x08)

	void UpdatePropReplacement(); // Function ValetRuntime.FortDagwoodVehicleManager.UpdatePropReplacement // (Final|Native|Public) // @ game+0x24841e4
	void OnVehicleSpawnsUpdated(struct UFortVehicleItemDefinition* VehicleItemDef, struct TArray<struct AActor*>& SpawnedVehicles, int32_t NewVehicleCount); // Function ValetRuntime.FortDagwoodVehicleManager.OnVehicleSpawnsUpdated // (Final|Native|Public|HasOutParms) // @ game+0x64a2b2c
	void OnVehicleSpawned(struct AFortAthenaVehicle* Vehicle); // Function ValetRuntime.FortDagwoodVehicleManager.OnVehicleSpawned // (Final|Native|Public) // @ game+0x64a2ab0
	void CustomHandleActorStreamedInEditor(struct AActor* SourceActor); // Function ValetRuntime.FortDagwoodVehicleManager.CustomHandleActorStreamedInEditor // (Final|Native|Public) // @ game+0x64a2a4c
};

// Class ValetRuntime.FortValetAudioController
// Size: 0x3d8 (Inherited: 0x288)
struct AFortValetAudioController : AActor {
	struct FMulticastInlineDelegate OnEngineLoadChanged; // 0x288(0x10)
	struct FMulticastInlineDelegate OnShiftGearCompleted; // 0x298(0x10)
	struct FMulticastInlineDelegate OnShiftGearDelegate; // 0x2a8(0x10)
	float RPMResetTime_Native; // 0x2b8(0x04)
	float JitterAmount_Native; // 0x2bc(0x04)
	float ShiftTimeThreshold_Native; // 0x2c0(0x04)
	float TimeSinceShift_Native; // 0x2c4(0x04)
	float EngineRPMInterp_Native; // 0x2c8(0x04)
	float EngineRPMLinear_Native; // 0x2cc(0x04)
	float MinRPMRange_Native; // 0x2d0(0x04)
	float MaxRPMRange_Native; // 0x2d4(0x04)
	bool bCurrentlyShifting_Native; // 0x2d8(0x01)
	char pad_2D9[0x3]; // 0x2d9(0x03)
	float CurrentAccelRateGearModifier_Native; // 0x2dc(0x04)
	float CurrentAccelRate_Native; // 0x2e0(0x04)
	int32_t CurrentGear_Native; // 0x2e4(0x04)
	int32_t MaxGear_Native; // 0x2e8(0x04)
	float DefaultAccelRateScalar_Native; // 0x2ec(0x04)
	float GearAttackInterpSpeed_Native; // 0x2f0(0x04)
	float GearReleaseInterpSpeed_Native; // 0x2f4(0x04)
	float AccelRateScalarFirstGear_Native; // 0x2f8(0x04)
	float AccelRateScalarMinGear_Native; // 0x2fc(0x04)
	float AccelRateScalarMaxGear_Native; // 0x300(0x04)
	float ShiftToRPMStart_Native; // 0x304(0x04)
	float ShiftToRPMEnd_Native; // 0x308(0x04)
	float ShiftFromRPMStart_Native; // 0x30c(0x04)
	float ShiftFromRPMEnd_Native; // 0x310(0x04)
	float MaxRPMSawtoothDecrement_Native; // 0x314(0x04)
	float MaxRPMSawtoothRepeatTime_Native; // 0x318(0x04)
	float DownhillAccelScalar_Native; // 0x31c(0x04)
	float UphillAccelScalar_Native; // 0x320(0x04)
	char pad_324[0x4]; // 0x324(0x04)
	struct UCurveFloat* RPMFloatCurveMapping; // 0x328(0x08)
	float NormalizedSpeed_Native; // 0x330(0x04)
	float SuspValue_Native; // 0x334(0x04)
	bool bIsHandbraking_Native; // 0x338(0x01)
	char pad_339[0x3]; // 0x339(0x03)
	float MotoSynthVolume_Native; // 0x33c(0x04)
	float MotoSynthInitialFadeInTime_Native; // 0x340(0x04)
	char pad_344[0x4]; // 0x344(0x04)
	float MotoSynthLogRPM_Native; // 0x348(0x04)
	bool bHasFuel_Native; // 0x34c(0x01)
	bool bIsInWater_Native; // 0x34d(0x01)
	bool bLocalPlayerInVehicle_Native; // 0x34e(0x01)
	char pad_34F[0x1]; // 0x34f(0x01)
	float TimeLocalPlayerEnteredVehicle_Native; // 0x350(0x04)
	bool bAttemptingDirectionChange_Native; // 0x354(0x01)
	bool bPreDestroy_Native; // 0x355(0x01)
	bool bEngineLoad_Native; // 0x356(0x01)
	char pad_357[0x1]; // 0x357(0x01)
	float SkidAmount_Native; // 0x358(0x04)
	float TimeSinceAwoken_Native; // 0x35c(0x04)
	bool bDestroyed_Native; // 0x360(0x01)
	char pad_361[0x3]; // 0x361(0x03)
	float TimeSinceSurfaceChange_Native; // 0x364(0x04)
	struct USoundBase* OnInitialSuspensionSound; // 0x368(0x08)
	float AngleForSkidding_Native; // 0x370(0x04)
	float SpringCompressionMultiplier; // 0x374(0x04)
	float MotoSynthMaxVolume_Native; // 0x378(0x04)
	char pad_37C[0x4]; // 0x37c(0x04)
	struct FVector2D MotoSynthTimeInVehicleTimeRange; // 0x380(0x10)
	struct FVector2D MotoSynthTimeInVehicleVolumeRange; // 0x390(0x10)
	struct TWeakObjectPtr<struct AFortDagwoodVehicle> ValetVehicle; // 0x3a0(0x08)
	struct UFortLayeredAudioComponent* Engine_Native; // 0x3a8(0x08)
	struct UAudioComponent* BoostAudioComponent_Native; // 0x3b0(0x08)
	struct USynthComponentMoto* SynthComponentMoto_Native; // 0x3b8(0x08)
	struct UFortCollisionAudioComponent* SuspensionCollisionComponent_Native; // 0x3c0(0x08)
	char pad_3C8[0x10]; // 0x3c8(0x10)

	void Update_Native(); // Function ValetRuntime.FortValetAudioController.Update_Native // (Final|Native|Public|BlueprintCallable) // @ game+0x1737c08
	void OnTireModApplied(struct FTireInfo& AppliedTireMod); // Function ValetRuntime.FortValetAudioController.OnTireModApplied // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void OnSuspensionCollision_Native(bool& OutResult, float& OutMagnitude); // Function ValetRuntime.FortValetAudioController.OnSuspensionCollision_Native // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1f29444
	void CacheValetVehicle(struct AFortDagwoodVehicle* InVehicle); // Function ValetRuntime.FortValetAudioController.CacheValetVehicle // (Final|Native|Public|BlueprintCallable) // @ game+0x23b3da4
};

// Class ValetRuntime.FortValetGameFeatureData
// Size: 0x5a0 (Inherited: 0x520)
struct UFortValetGameFeatureData : UFortGameFeatureData {
	struct TMap<struct TSoftClassPtr<UObject>, struct FVehiclePropReplacementData> PropReplacements; // 0x520(0x50)
	struct TSoftClassPtr<UObject> VehicleSpawnerClass; // 0x570(0x28)
	enum class ESpawnActorCollisionHandlingMethod SpawnActorCollisionHandlingMethod; // 0x598(0x01)
	char pad_599[0x7]; // 0x599(0x07)
};

// Class ValetRuntime.FortValetMountedGunAnimInstance
// Size: 0x560 (Inherited: 0x540)
struct UFortValetMountedGunAnimInstance : UFortAnimInstance {
	struct AFortDagwoodVehicle* VehicleActor; // 0x538(0x08)
	bool bIsUsingMountedGun; // 0x540(0x01)
	int32_t SeatIndexCached; // 0x544(0x04)
	float AimingYaw; // 0x548(0x04)
	float AimingPitch; // 0x54c(0x04)
	struct AFortWeaponRangedForVehicle* MountedWeapon; // 0x550(0x08)
	char pad_55D[0x3]; // 0x55d(0x03)
};

// Class ValetRuntime.FortValetPassengerAnimInstance
// Size: 0x880 (Inherited: 0x810)
struct UFortValetPassengerAnimInstance : UFortVehicleOccupantAnimInstance {
	struct FCachedAnimRelevancyData IntoVehicleCachedData; // 0x810(0x14)
	struct FCachedAnimRelevancyData OutOfVehicleCachedData; // 0x824(0x14)
	struct TSoftObjectPtr<AFortDagwoodVehicle> DagwoodVehicleInstance; // 0x838(0x28)
	float TurnYaw; // 0x860(0x04)
	float InTime; // 0x864(0x04)
	float OutTime; // 0x868(0x04)
	float NegativeTurnYaw; // 0x86c(0x04)
	bool bIsReloading; // 0x870(0x01)
	bool bIsTargeting; // 0x871(0x01)
	bool bIsFiring; // 0x872(0x01)
	bool bIsUsingConsumable; // 0x873(0x01)
	bool bIsInAction; // 0x874(0x01)
	bool bIsPassengerBackLeft; // 0x875(0x01)
	bool bIsThrowConsumable; // 0x876(0x01)
	bool bIsTargetingOrThrowingConsumable; // 0x877(0x01)
	char pad_878[0x8]; // 0x878(0x08)
};

