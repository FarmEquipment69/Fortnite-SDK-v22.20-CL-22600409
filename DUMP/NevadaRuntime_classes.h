// Class NevadaRuntime.FortCameraMode_Nevada
// Size: 0x1b60 (Inherited: 0x1af0)
struct UFortCameraMode_Nevada : UFortCameraMode_AthenaVehicle {
	char pad_1AF0[0x28]; // 0x1af0(0x28)
	struct FVector TractorBeamCameraOffset; // 0x1b18(0x18)
	float TractorBeamCameraLerpTime; // 0x1b30(0x04)
	float TractorBeamCameraExtraPitch; // 0x1b34(0x04)
	float TractorBeamInactiveCameraExtraPitch; // 0x1b38(0x04)
	float TractorBeamCameraPositionResetDelay; // 0x1b3c(0x04)
	float MinPitchForOffset; // 0x1b40(0x04)
	float MaxPitchForOffset; // 0x1b44(0x04)
	struct FVector ExtraOffset; // 0x1b48(0x18)
};

// Class NevadaRuntime.FortNevadaAudioController
// Size: 0x350 (Inherited: 0x288)
struct AFortNevadaAudioController : AActor {
	struct FVector2D SpeedRangeMap; // 0x288(0x10)
	struct FVector2D TurningRangeMap; // 0x298(0x10)
	struct FVector2D AcceleratingRangeMap; // 0x2a8(0x10)
	struct FVector2D BrakingRangeMap; // 0x2b8(0x10)
	struct FVector2D PassByRangeMap; // 0x2c8(0x10)
	struct FVector2D LFORangeMap; // 0x2d8(0x10)
	struct AFortNevadaVehicle* Vehicle; // 0x2e8(0x08)
	struct UFortLayeredAudioComponent* LayeredAudioComponent; // 0x2f0(0x08)
	float SpeedParamValue; // 0x2f8(0x04)
	float SpeedParamValuePrev; // 0x2fc(0x04)
	float AcceleratingParamValue; // 0x300(0x04)
	float BrakingParamValue; // 0x304(0x04)
	struct FVector ForwardVector; // 0x308(0x18)
	struct FVector ForwardVectorPrev; // 0x320(0x18)
	float TurningParamValue; // 0x338(0x04)
	float PassByParamValue; // 0x33c(0x04)
	float LocallyControlledParamValue; // 0x340(0x04)
	float LFOParamValue; // 0x344(0x04)
	char pad_348[0x8]; // 0x348(0x08)

	void Update(); // Function NevadaRuntime.FortNevadaAudioController.Update // (Final|Native|Public) // @ game+0x67b9c14
	void Init(struct AFortNevadaVehicle* InVehicle); // Function NevadaRuntime.FortNevadaAudioController.Init // (Final|Native|Public) // @ game+0x67b94d8
	struct AFortNevadaVehicle* GetVehicleActor(); // Function NevadaRuntime.FortNevadaAudioController.GetVehicleActor // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x67b94c0
	void CacheReferences(struct UFortLayeredAudioComponent* InLayeredAudioComponent); // Function NevadaRuntime.FortNevadaAudioController.CacheReferences // (Final|Native|Public|BlueprintCallable) // @ game+0x67b91d4
	void BP_Update(); // Function NevadaRuntime.FortNevadaAudioController.BP_Update // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void BP_Init(); // Function NevadaRuntime.FortNevadaAudioController.BP_Init // (Event|Public|BlueprintEvent) // @ game+0xd67374
};

// Class NevadaRuntime.FortNevadaVehicle
// Size: 0x1f70 (Inherited: 0x1970)
struct AFortNevadaVehicle : AFortAthenaSKVehicle {
	struct FNevadaState ServerReplicatedState; // 0x1970(0x14)
	char pad_1984[0x4]; // 0x1984(0x04)
	struct UFortNevadaVehicleConfigs* FortNevadaVehicleConfigs; // 0x1988(0x08)
	struct AFortNevadaAudioController* FortNevadaAudioControllerClass; // 0x1990(0x08)
	struct UChildActorComponent* AudioControllerActor; // 0x1998(0x08)
	struct AFortNevadaAudioController* FortNevadaAudioController; // 0x19a0(0x08)
	struct FVehicleGamepadLiftInputs LiftInputs; // 0x19a8(0x08)
	float LastBatteryRegenTickTime; // 0x19b0(0x04)
	bool bBoostThrust; // 0x19b4(0x01)
	bool bBoostDrag; // 0x19b5(0x01)
	bool bBoostInputReleased; // 0x19b6(0x01)
	bool bUseTractorBeamUprightForce; // 0x19b7(0x01)
	bool bDeadBattery; // 0x19b8(0x01)
	char pad_19B9[0x3]; // 0x19b9(0x03)
	float TractorBeamExtraLengthForExtents; // 0x19bc(0x04)
	struct FVector CrashingDesiredUp; // 0x19c0(0x18)
	float BoostStartTime; // 0x19d8(0x04)
	float BoostPitchAlpha; // 0x19dc(0x04)
	float BoostChargeProgress; // 0x19e0(0x04)
	int32_t BoostChargesAvailable; // 0x19e4(0x04)
	struct FVector CachedBoostMoveDir; // 0x19e8(0x18)
	float CurrentStateStartTime; // 0x1a00(0x04)
	float HeightAtLandingTime; // 0x1a04(0x04)
	float CrashingScrapingTime; // 0x1a08(0x04)
	float CrashingNotMovingTimer; // 0x1a0c(0x04)
	float AltimeterTraceHitDistance; // 0x1a10(0x04)
	float TractorBeamAppliedForceMagnitude; // 0x1a14(0x04)
	float AnimParamDriverSeatLeftRight; // 0x1a18(0x04)
	float AnimParamDriverSeatForwardBack; // 0x1a1c(0x04)
	bool bForceNegativeLift; // 0x1a20(0x01)
	bool bForcePositiveLift; // 0x1a21(0x01)
	bool bInitialLift; // 0x1a22(0x01)
	enum class ENevadaFlightStates CurrentVehicleState; // 0x1a23(0x01)
	char pad_1A24[0x4c]; // 0x1a24(0x4c)
	struct TWeakObjectPtr<struct ALandscapeProxy> CachedLandscapeProxy; // 0x1a70(0x08)
	struct UFortCameraMode_AthenaVehicle* PassengerCameraModeClass; // 0x1a78(0x08)
	bool bTractorBeamChargeStarted; // 0x1a80(0x01)
	char pad_1A81[0x7]; // 0x1a81(0x07)
	struct FTowhookParams TowhookParams; // 0x1a88(0xd0)
	struct AFortAthenaVehicle* AttachedPawnHiddenVehicle; // 0x1b58(0x08)
	struct TWeakObjectPtr<struct UPrimitiveComponent> TractorBeamAttachedPrimitive; // 0x1b60(0x08)
	struct AFortAthenaVehicle* SpawnedTractorBeamVictimVehicle; // 0x1b68(0x08)
	struct TWeakObjectPtr<struct UPrimitiveComponent> PreviousTractorBeamAttachedPrimitive; // 0x1b70(0x08)
	struct TArray<struct AActor*> TractorBeamTargetedActors; // 0x1b78(0x10)
	struct TArray<struct AActor*> PreviouslyTargetedActors; // 0x1b88(0x10)
	struct AActor* TractorBeamAttachedActor; // 0x1b98(0x08)
	struct AActor* TractorBeamTargetedActor; // 0x1ba0(0x08)
	struct FVector TractorBeamTargetPosition; // 0x1ba8(0x18)
	char pad_1BC0[0x1]; // 0x1bc0(0x01)
	bool bBeamButtonReleased; // 0x1bc1(0x01)
	char pad_1BC2[0x6]; // 0x1bc2(0x06)
	struct TArray<enum class EObjectTypeQuery> TractorBeamObjectsTypes; // 0x1bc8(0x10)
	struct FGameplayTagContainer DisallowedBeamTags; // 0x1bd8(0x20)
	struct FGameplayTagContainer AlwaysAllowedBeamTags; // 0x1bf8(0x20)
	char pad_1C18[0x98]; // 0x1c18(0x98)
	struct UNiagaraSystem* TractorBeamFX_Unattached; // 0x1cb0(0x08)
	struct UNiagaraSystem* TractorBeamFX_Attached; // 0x1cb8(0x08)
	struct UNiagaraComponent* BeamPSC; // 0x1cc0(0x08)
	char pad_1CC8[0x50]; // 0x1cc8(0x50)
	enum class ETractorBeamState TractorBeamState; // 0x1d18(0x01)
	char pad_1D19[0x27]; // 0x1d19(0x27)
	float TractorBeamDeactivationTimestamp; // 0x1d40(0x04)
	float TractorBeamDisruptedTimestamp; // 0x1d44(0x04)
	char pad_1D48[0x80]; // 0x1d48(0x80)
	float CockpitHealth; // 0x1dc8(0x04)
	float Native_CockpitEnabled; // 0x1dcc(0x04)
	float LastCockpitHealthTickTime; // 0x1dd0(0x04)
	float LastCockpitDamageTime; // 0x1dd4(0x04)
	float CockpitDissolveStartTime; // 0x1dd8(0x04)
	char pad_1DDC[0x4]; // 0x1ddc(0x04)
	struct FScalableFloat CockpitMaxHealth; // 0x1de0(0x28)
	struct FScalableFloat CockpitHealthTickRate; // 0x1e08(0x28)
	struct FScalableFloat CockpitHealthPerTick; // 0x1e30(0x28)
	struct FScalableFloat CockpitRegenDelay; // 0x1e58(0x28)
	struct UCurveFloat* CockpitHitMaterialWobble; // 0x1e80(0x08)
	float LastDamageAlpha; // 0x1e88(0x04)
	bool bDissolvingCockpit; // 0x1e8c(0x01)
	bool bRestoringCockpit; // 0x1e8d(0x01)
	bool bCockpitWobble; // 0x1e8e(0x01)
	char pad_1E8F[0x1]; // 0x1e8f(0x01)
	struct UStaticMeshComponent* NativeComp_ShieldMesh; // 0x1e90(0x08)
	struct UMaterialInstanceDynamic* Native_CockpitMaterial; // 0x1e98(0x08)
	struct UMaterialInstanceDynamic* Native_EnergyRingMatInstance; // 0x1ea0(0x08)
	struct UMaterialInstanceDynamic* Native_EnergyFieldMatInstance; // 0x1ea8(0x08)
	struct UAudioComponent* NativeComp_DamageStateLastLife; // 0x1eb0(0x08)
	struct UAudioComponent* NativeComp_DamageState; // 0x1eb8(0x08)
	struct FVector Native_LastHitLocation; // 0x1ec0(0x18)
	struct FVector Native_LastHitNormal; // 0x1ed8(0x18)
	struct UNiagaraComponent* NativeComp_DamageStateFX; // 0x1ef0(0x08)
	struct UNiagaraComponent* NativeComp_HologramScreen; // 0x1ef8(0x08)
	struct UNiagaraComponent* NativeComp_SpeedLines; // 0x1f00(0x08)
	struct UMaterialInterface* Native_EnergyRingMat; // 0x1f08(0x08)
	struct UMaterialInterface* Native_EnergyFieldMat; // 0x1f10(0x08)
	struct UNiagaraSystem* NativeSys_DamageStateFX; // 0x1f18(0x08)
	struct UNiagaraSystem* NativeSys_CockpitDestroyed; // 0x1f20(0x08)
	struct USoundBase* CockpitDamagedSound; // 0x1f28(0x08)
	struct USoundBase* CockpitDestroyedSound; // 0x1f30(0x08)
	struct USoundBase* CockpitRespawnSound; // 0x1f38(0x08)
	struct USoundBase* Native_DamageStateSound; // 0x1f40(0x08)
	struct USoundBase* Native_DamageStateLastLifeSound; // 0x1f48(0x08)
	struct UForceFeedbackEffect* CockpitDeactivatedForceFeedback; // 0x1f50(0x08)
	struct ULegacyCameraShake* CockpitDestroyedCamShake; // 0x1f58(0x08)
	struct TArray<struct AActor*> TractorBeamDisallowedClasses; // 0x1f60(0x10)

	void SetTractorBeamInactive(); // Function NevadaRuntime.FortNevadaVehicle.SetTractorBeamInactive // (Final|Native|Protected|BlueprintCallable) // @ game+0x67b9c00
	void SetTractorBeamEnabled(bool bEnabled); // Function NevadaRuntime.FortNevadaVehicle.SetTractorBeamEnabled // (Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x64a1f14
	void SetCannonEnabled(bool bEnabled); // Function NevadaRuntime.FortNevadaVehicle.SetCannonEnabled // (Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x64a1f14
	void SetAttachedPawnAddedVelocity(struct FVector& AddedVelocity); // Function NevadaRuntime.FortNevadaVehicle.SetAttachedPawnAddedVelocity // (Final|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x67b9b78
	void OnTractorBeamDetached(struct AActor* DetachedActor, struct FVector& LastBeamPosition); // Function NevadaRuntime.FortNevadaVehicle.OnTractorBeamDetached // (Event|Protected|HasOutParms|HasDefaults|BlueprintEvent) // @ game+0xd67374
	void OnTractorBeamDeactivated(struct FVector& LastBeamPosition); // Function NevadaRuntime.FortNevadaVehicle.OnTractorBeamDeactivated // (Event|Protected|HasOutParms|HasDefaults|BlueprintEvent) // @ game+0xd67374
	void OnTractorBeamChargeStarted(); // Function NevadaRuntime.FortNevadaVehicle.OnTractorBeamChargeStarted // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnTractorBeamAttached(); // Function NevadaRuntime.FortNevadaVehicle.OnTractorBeamAttached // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnTractorBeamActivated(); // Function NevadaRuntime.FortNevadaVehicle.OnTractorBeamActivated // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnTargetedActorChanged(struct AActor* NewTargetedActor); // Function NevadaRuntime.FortNevadaVehicle.OnTargetedActorChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnStartDescend(); // Function NevadaRuntime.FortNevadaVehicle.OnStartDescend // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnStartAscend(); // Function NevadaRuntime.FortNevadaVehicle.OnStartAscend // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnRep_TractorBeamState(enum class ETractorBeamState PreviousState); // Function NevadaRuntime.FortNevadaVehicle.OnRep_TractorBeamState // (Final|Native|Protected) // @ game+0x67b9aec
	void OnRep_TractorBeamChargeStarted(); // Function NevadaRuntime.FortNevadaVehicle.OnRep_TractorBeamChargeStarted // (Final|Native|Public) // @ game+0x67b9a90
	void OnRep_TractorBeamAttached(); // Function NevadaRuntime.FortNevadaVehicle.OnRep_TractorBeamAttached // (Final|Native|Protected) // @ game+0x67b9a7c
	void OnRep_TargetedActorChanged(); // Function NevadaRuntime.FortNevadaVehicle.OnRep_TargetedActorChanged // (Final|Native|Public) // @ game+0x67b9a40
	void OnRep_ReplicatedTargetedActors(); // Function NevadaRuntime.FortNevadaVehicle.OnRep_ReplicatedTargetedActors // (Final|Native|Public) // @ game+0x67b99dc
	void OnRep_NevadaState(struct FNevadaState& PrevState); // Function NevadaRuntime.FortNevadaVehicle.OnRep_NevadaState // (Final|Native|Protected|HasOutParms) // @ game+0x67b9934
	void OnRebootStarted(); // Function NevadaRuntime.FortNevadaVehicle.OnRebootStarted // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnRebootFinished(); // Function NevadaRuntime.FortNevadaVehicle.OnRebootFinished // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnOutOfBattery(); // Function NevadaRuntime.FortNevadaVehicle.OnOutOfBattery // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnNewVehicleState(enum class ENevadaFlightStates NewVehicleState); // Function NevadaRuntime.FortNevadaVehicle.OnNewVehicleState // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnCrashingStarted(); // Function NevadaRuntime.FortNevadaVehicle.OnCrashingStarted // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnCrashedImpact(); // Function NevadaRuntime.FortNevadaVehicle.OnCrashedImpact // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnBoostStarted(); // Function NevadaRuntime.FortNevadaVehicle.OnBoostStarted // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnBoostFinished(); // Function NevadaRuntime.FortNevadaVehicle.OnBoostFinished // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnBoostChargeRefilled(); // Function NevadaRuntime.FortNevadaVehicle.OnBoostChargeRefilled // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnBatteryRegen(float Newcharge); // Function NevadaRuntime.FortNevadaVehicle.OnBatteryRegen // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnAttachedActorDied(struct AActor* DamagedActor, float Damage, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FVector HitLocation, struct UPrimitiveComponent* FHitComponent, struct FName BoneName, struct FVector Momentum); // Function NevadaRuntime.FortNevadaVehicle.OnAttachedActorDied // (Final|Native|Public|HasDefaults) // @ game+0x67b971c
	void OnAttachedActorDestroyed(struct AActor* DestroyedActor); // Function NevadaRuntime.FortNevadaVehicle.OnAttachedActorDestroyed // (Final|Native|Public) // @ game+0x67b96a0
	void NativeToggleCockpit(bool bEnable); // Function NevadaRuntime.FortNevadaVehicle.NativeToggleCockpit // (Final|Native|Public|BlueprintCallable) // @ game+0x67b9620
	bool IsTractorBeamDisrupted(); // Function NevadaRuntime.FortNevadaVehicle.IsTractorBeamDisrupted // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x67b95a4
	bool IsTractorBeamAttached(); // Function NevadaRuntime.FortNevadaVehicle.IsTractorBeamAttached // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x67b9580
	bool IsTractorBeamActive(); // Function NevadaRuntime.FortNevadaVehicle.IsTractorBeamActive // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x67b9558
	struct FVector GetTractorBeamAttachLocation(); // Function NevadaRuntime.FortNevadaVehicle.GetTractorBeamAttachLocation // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x67b9488
	int32_t GetNumRebootsAvailable(); // Function NevadaRuntime.FortNevadaVehicle.GetNumRebootsAvailable // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x67b9470
	float GetEnergyCanonChargePercent(); // Function NevadaRuntime.FortNevadaVehicle.GetEnergyCanonChargePercent // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x67b9448
	void GetDriverSeatRotationAnimParams(float& OutLeftRight, float& OutForwardBack); // Function NevadaRuntime.FortNevadaVehicle.GetDriverSeatRotationAnimParams // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x67b936c
	enum class ENevadaFlightStates GetCurrentVehicleState(); // Function NevadaRuntime.FortNevadaVehicle.GetCurrentVehicleState // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x67b9354
	float GetBoostChargeTimeRemaining(); // Function NevadaRuntime.FortNevadaVehicle.GetBoostChargeTimeRemaining // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x67b9308
	int32_t GetBoostChargesAvailable(); // Function NevadaRuntime.FortNevadaVehicle.GetBoostChargesAvailable // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x67b933c
	float GetBoostChargeProgress(); // Function NevadaRuntime.FortNevadaVehicle.GetBoostChargeProgress // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x67b92e8
	float GetBatteryCharge(); // Function NevadaRuntime.FortNevadaVehicle.GetBatteryCharge // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x67b92c0
	struct AFortNevadaAudioController* GetAudioController(); // Function NevadaRuntime.FortNevadaVehicle.GetAudioController // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x67b92a8
	void EnablePilotBubbleCollisionOnServer(bool bNewCollisionEnabled); // Function NevadaRuntime.FortNevadaVehicle.EnablePilotBubbleCollisionOnServer // (Final|Native|Protected|BlueprintCallable) // @ game+0x64a1f14
	void DisruptTractorBeam(); // Function NevadaRuntime.FortNevadaVehicle.DisruptTractorBeam // (Final|Native|Protected|BlueprintCallable) // @ game+0x67b9254
	void AddPhysicsImpulseToTractorBeamAttachedActor(struct FVector& Impulse, struct FName BoneName, bool bVelChange); // Function NevadaRuntime.FortNevadaVehicle.AddPhysicsImpulseToTractorBeamAttachedActor // (Final|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x67b90a0
};

// Class NevadaRuntime.FortNevadaVehicleAnimInstance
// Size: 0x6e0 (Inherited: 0x5f0)
struct UFortNevadaVehicleAnimInstance : UFortVehicleAnimInstance {
	struct AFortNevadaVehicle* NevadaVehicle; // 0x5f0(0x08)
	bool bTractorBeam_IsAttached; // 0x5f8(0x01)
	bool bTractorBeam_IsCharging; // 0x5f9(0x01)
	bool bTractorBeam_IsActive; // 0x5fa(0x01)
	bool bTractorBeam_IsInactive; // 0x5fb(0x01)
	bool bTractorBeam_IsOn; // 0x5fc(0x01)
	bool bTractorBeam_HasTarget; // 0x5fd(0x01)
	bool bTractorBeam_ShouldApplyCustomAO; // 0x5fe(0x01)
	char pad_5FF[0x1]; // 0x5ff(0x01)
	float TractorBeam_LookAtPitch; // 0x600(0x04)
	float TractorBeam_LookAtYaw; // 0x604(0x04)
	float LeanLeftRight; // 0x608(0x04)
	float LeanForwardBackward; // 0x60c(0x04)
	float LeanValue; // 0x610(0x04)
	float PreviousLeanValue; // 0x614(0x04)
	float VelocityZValue; // 0x618(0x04)
	float LeanDelta; // 0x61c(0x04)
	bool bTurnAgain; // 0x620(0x01)
	bool bHadDriver; // 0x621(0x01)
	bool bJustGotDriver; // 0x622(0x01)
	bool bJustLostDriver; // 0x623(0x01)
	bool bWasBoosting; // 0x624(0x01)
	bool bIsBoosting; // 0x625(0x01)
	char pad_626[0x2]; // 0x626(0x02)
	int32_t PreviousBoostCount; // 0x628(0x04)
	int32_t BoostCount; // 0x62c(0x04)
	bool bIsBoostingAgain; // 0x630(0x01)
	bool bIsMoving; // 0x631(0x01)
	char pad_632[0x2]; // 0x632(0x02)
	float WingsPlayRate; // 0x634(0x04)
	float TractorBeamAlpha; // 0x638(0x04)
	float AimPitch; // 0x63c(0x04)
	float AimYaw; // 0x640(0x04)
	bool bIsFiringCannon; // 0x644(0x01)
	char pad_645[0x3]; // 0x645(0x03)
	float DistanceFromGround; // 0x648(0x04)
	bool bIsLanding; // 0x64c(0x01)
	bool bHasLanded; // 0x64d(0x01)
	char pad_64E[0x2]; // 0x64e(0x02)
	float LandingAlpha; // 0x650(0x04)
	bool bNotLandingMode; // 0x654(0x01)
	bool bHadBattery; // 0x655(0x01)
	bool bOutOfBattery; // 0x656(0x01)
	bool bJustGotBattery; // 0x657(0x01)
	bool bLaunchToDepart; // 0x658(0x01)
	bool bLaunchToIdle; // 0x659(0x01)
	bool bIsPartsLanding; // 0x65a(0x01)
	char pad_65B[0x1]; // 0x65b(0x01)
	struct FName TractorBeamSocketName; // 0x65c(0x04)
	struct FName TractorBeamAimCurveName; // 0x660(0x04)
	struct FName NevadaVehicleInterruptName; // 0x664(0x04)
	struct FName LandingTraceRightName; // 0x668(0x04)
	struct FName LandingTraceLeftName; // 0x66c(0x04)
	float MaxLeanDeltaInterruptMagnitude; // 0x670(0x04)
	float MinForwardSpeedToBeMoving; // 0x674(0x04)
	float MinForwardSpeedToPlayWings; // 0x678(0x04)
	float MinWingsPlayRate; // 0x67c(0x04)
	float MaxWingsPlayRate; // 0x680(0x04)
	float WingsPlayRateInterpSpeed; // 0x684(0x04)
	struct TSoftObjectPtr<UAnimMontage> CannonFiringMontage; // 0x688(0x28)
	float LandingGearTraceLength; // 0x6b0(0x04)
	char pad_6B4[0x2c]; // 0x6b4(0x2c)
};

// Class NevadaRuntime.FortNevadaVehicleConfigs
// Size: 0xc50 (Inherited: 0x7a8)
struct UFortNevadaVehicleConfigs : UFortPhysicsVehicleConfigs {
	struct FNevadaMoveModeConfig BaseMovement; // 0x7a8(0x14)
	struct FNevadaMoveModeConfig BoostMovement; // 0x7bc(0x14)
	struct FNevadaMoveModeConfig ChargingMovement; // 0x7d0(0x14)
	struct FDampedSpringConfig UprightSpringForce; // 0x7e4(0x0c)
	float DebaseLaunchspeed; // 0x7f0(0x04)
	float MaxHeight; // 0x7f4(0x04)
	float MinHeight; // 0x7f8(0x04)
	float OnEnterPitchAlpha; // 0x7fc(0x04)
	float FallDamageHeightBuffer; // 0x800(0x04)
	float TurningForce; // 0x804(0x04)
	float ThrustRotationAlpha; // 0x808(0x04)
	float PitchDrag; // 0x80c(0x04)
	float YawDrag; // 0x810(0x04)
	float RollDrag; // 0x814(0x04)
	float BoostThrustDuration; // 0x818(0x04)
	float BoostDragDuration; // 0x81c(0x04)
	int32_t NumBoostCharges; // 0x820(0x04)
	float BoostChargeDuration; // 0x824(0x04)
	float BoostChargeDelay; // 0x828(0x04)
	float BoostDragFinishSpeed; // 0x82c(0x04)
	float TractorBeamRadius; // 0x830(0x04)
	float TractorBeamWithTargetRadius; // 0x834(0x04)
	struct FScalableFloat TractorBeamSweepLength; // 0x838(0x28)
	struct FScalableFloat TractorBeamChargeTime; // 0x860(0x28)
	struct FScalableFloat TractorBeamDurationTime; // 0x888(0x28)
	struct FScalableFloat TractorBeamTossImpulseStrengthForward; // 0x8b0(0x28)
	struct FScalableFloat TractorBeamTossImpulseStrengthUpward; // 0x8d8(0x28)
	float TractorBeamShutdownTime; // 0x900(0x04)
	char pad_904[0x4]; // 0x904(0x04)
	struct FScalableFloat TractorBeamTurnOffDamage; // 0x908(0x28)
	struct FScalableFloat AllowTractorBeamAIPawns; // 0x930(0x28)
	float TractorBeamBreakForceMagnitude; // 0x958(0x04)
	char pad_95C[0x4]; // 0x95c(0x04)
	struct FScalableFloat TractorBeamActive; // 0x960(0x28)
	struct FScalableFloat TractorBeamCooldown; // 0x988(0x28)
	struct FScalableFloat TractorBeamDisruptionCooldown; // 0x9b0(0x28)
	struct FName TractorBeamSocket; // 0x9d8(0x04)
	char pad_9DC[0x4]; // 0x9dc(0x04)
	struct FVector TractorBeamAttachPositionOffset; // 0x9e0(0x18)
	struct FRigidBodyErrorCorrection TractorBeamTargetOverridenErrorCorrection; // 0x9f8(0x34)
	float VictimPitchDrag; // 0xa2c(0x04)
	float VictimYawDrag; // 0xa30(0x04)
	float VictimRollDrag; // 0xa34(0x04)
	struct FDampedSpringConfig TractorBeamVictimUprightForce; // 0xa38(0x0c)
	int32_t NumReboots; // 0xa44(0x04)
	int32_t NumRebootsDefault; // 0xa48(0x04)
	float MaxCrashingTime; // 0xa4c(0x04)
	float MaxCrashingScrapingTime; // 0xa50(0x04)
	float MaxCrashingTimeSpentNotMoving; // 0xa54(0x04)
	float SpeedThresholdForCrashed; // 0xa58(0x04)
	char pad_A5C[0x4]; // 0xa5c(0x04)
	struct FScalableFloat RebootDuration; // 0xa60(0x28)
	struct FScalableFloat RebootDelay; // 0xa88(0x28)
	float LandingTraceRange; // 0xab0(0x04)
	float DesiredLandingDistance; // 0xab4(0x04)
	float LandingDelay_Max; // 0xab8(0x04)
	float LandingDelay_Min; // 0xabc(0x04)
	float HeightForMinLandingDelay; // 0xac0(0x04)
	float HeightForMaxLandingDelay; // 0xac4(0x04)
	float LandingPitchAlphaMax; // 0xac8(0x04)
	float LandingPitchAlphaMin; // 0xacc(0x04)
	float DriverSeatRotationAnimBlendSpeed; // 0xad0(0x04)
	float CrashingDesiredUpLerpFactor; // 0xad4(0x04)
	float CrashedLinearDrag; // 0xad8(0x04)
	float LandedDragCoef; // 0xadc(0x04)
	float LandedDragCoef2; // 0xae0(0x04)
	float LandedMaxDragSpeed; // 0xae4(0x04)
	float CrashedAngularDragMultiplier; // 0xae8(0x04)
	float BoostFOV; // 0xaec(0x04)
	float ExtraTraceInteractRange; // 0xaf0(0x04)
	float AntiGravityMult; // 0xaf4(0x04)
	float InitialLiftDuration; // 0xaf8(0x04)
	char pad_AFC[0x4]; // 0xafc(0x04)
	struct FScalableFloat BatteryCostDuringFlight; // 0xb00(0x28)
	struct FScalableFloat BatteryRegenDelay; // 0xb28(0x28)
	struct FScalableFloat BatteryRegenTickRate; // 0xb50(0x28)
	struct FScalableFloat BatteryRegenAmount; // 0xb78(0x28)
	struct FScalableFloat MaxBattery; // 0xba0(0x28)
	struct FScalableFloat MinBatteryForFlight; // 0xbc8(0x28)
	struct TArray<struct FName> CockpitShapeNames; // 0xbf0(0x10)
	struct FScalableFloat CockpitDamageMult; // 0xc00(0x28)
	struct FScalableFloat CockpitHealth; // 0xc28(0x28)
};

// Class NevadaRuntime.FortPlayerAnimInstance_NevadaDriver
// Size: 0x20f0 (Inherited: 0x1f70)
struct UFortPlayerAnimInstance_NevadaDriver : UFortPlayerAnimInstance_OctopusDriver {
	struct AFortNevadaVehicle* NevadaVehicle; // 0x1f70(0x08)
	float AnimLeftRight; // 0x1f78(0x04)
	float AnimForwardBackward; // 0x1f7c(0x04)
	struct FVector RootAttachmentLoc; // 0x1f80(0x18)
	struct FRotator RootAttachmentRot; // 0x1f98(0x18)
	int32_t BoostCount; // 0x1fb0(0x04)
	int32_t PreviousBoostCount; // 0x1fb4(0x04)
	bool bIsBoostingAgain; // 0x1fb8(0x01)
	bool bIsMoving; // 0x1fb9(0x01)
	char pad_1FBA[0x2]; // 0x1fba(0x02)
	float MinVehicleVelocityToBeMoving; // 0x1fbc(0x04)
	struct FName DriverSocketName; // 0x1fc0(0x04)
	struct FName RightHandAttachmentSocketName; // 0x1fc4(0x04)
	struct FName LeftHandAttachmentSocketName; // 0x1fc8(0x04)
	struct FName RightFootAttachmentSocketName; // 0x1fcc(0x04)
	struct FName LeftFootAttachementSocketName; // 0x1fd0(0x04)
	char pad_1FD4[0x4]; // 0x1fd4(0x04)
	struct FRotator RightHandRotationOffset; // 0x1fd8(0x18)
	struct FRotator LeftHandRotationOffset; // 0x1ff0(0x18)
	struct FRotator RightFootRotationOffset; // 0x2008(0x18)
	struct FRotator LeftFootRotationOffset; // 0x2020(0x18)
	struct FVector RootAttachmentOffset; // 0x2038(0x18)
	char pad_2050[0xa0]; // 0x2050(0xa0)
};

