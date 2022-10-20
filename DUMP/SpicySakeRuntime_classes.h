// Class SpicySakeRuntime.FortSpicySakeComponent_Telemetry
// Size: 0x108 (Inherited: 0x108)
struct UFortSpicySakeComponent_Telemetry : UFortAIComponent_Telemetry {
};

// Class SpicySakeRuntime.FortSpicySakeGameplayCueNotifyLoop_Alive
// Size: 0x9a0 (Inherited: 0x960)
struct AFortSpicySakeGameplayCueNotifyLoop_Alive : AFortGameplayCueNotify_Loop {
	struct UFXSystemComponent* WaterFX_Native; // 0x960(0x08)
	struct UFXSystemComponent* LandFX_Native; // 0x968(0x08)
	struct UFortLayeredAudioComponent* FortLayerAudio_Native; // 0x970(0x08)
	struct AFortAIPawn* TargetAIPawn_Native; // 0x978(0x08)
	bool bComputeWaterDepth; // 0x980(0x01)
	char pad_981[0x3]; // 0x981(0x03)
	float TetheredVolumeMultiplier; // 0x984(0x04)
	float SoundSurfaceTypeCount; // 0x988(0x04)
	float VelocityClampingMinimum; // 0x98c(0x04)
	float VelocityClampingMaximum; // 0x990(0x04)
	char pad_994[0xc]; // 0x994(0x0c)
};

// Class SpicySakeRuntime.FortSpicySakeOccupantAnimInstanceLayer
// Size: 0x460 (Inherited: 0x440)
struct UFortSpicySakeOccupantAnimInstanceLayer : UFortBaseLayerAnimInstance {
	float GroundIdleThreshold; // 0x440(0x04)
	float GroundIdleLowThreshold; // 0x444(0x04)
	float LocalVelocityYawAngleTurnResetThreshold; // 0x448(0x04)
	float LocalVelocityYawAngleTurnTransitionThreshold; // 0x44c(0x04)
	float LocalVelocityYawAngle; // 0x450(0x04)
	float PawnSpeed2D; // 0x454(0x04)
	float PawnVelocityZ; // 0x458(0x04)
	char bIsFemale : 1; // 0x45c(0x01)
	char bIsOnGround : 1; // 0x45c(0x01)
	char bIsOnWater : 1; // 0x45c(0x01)
	char bLandingPredicted : 1; // 0x45c(0x01)
	char bTransition_NewFallAditive_NewFallLandAdditive : 1; // 0x45c(0x01)
	char bTransitionNewJumpLoopAdditiveToNewFallAdditive : 1; // 0x45c(0x01)
	char bShouldApplyIdleAdditive : 1; // 0x45c(0x01)
	char bIsTargeting : 1; // 0x45c(0x01)
	char bIsPlayerCloseToShark : 1; // 0x45d(0x01)
	char bIsBoosting : 1; // 0x45d(0x01)
	char bCanTurnLeft : 1; // 0x45d(0x01)
	char bCanTurnRight : 1; // 0x45d(0x01)
	char bTransition_RideLoop_TurnLeft : 1; // 0x45d(0x01)
	char bTransition_RideLoop_TurnRight : 1; // 0x45d(0x01)
	char bIsReloading : 1; // 0x45d(0x01)
	char bIsPlayingMeleeAnim : 1; // 0x45d(0x01)
	char bIsPlayingEmote : 1; // 0x45e(0x01)
	char bShouldPlayOnGroundIdle : 1; // 0x45e(0x01)
	char bShouldPlayOnGroundIdleLow : 1; // 0x45e(0x01)
	char bIsJumping : 1; // 0x45e(0x01)
	char bCanUseTargettingStateMachine : 1; // 0x45e(0x01)
	char bTransition_SharRideLoop_To_JumpUp : 1; // 0x45e(0x01)
	char pad_45E_6 : 2; // 0x45e(0x01)
	char pad_45F[0x1]; // 0x45f(0x01)
};

// Class SpicySakeRuntime.FortSpicySakeVehicleAnimInstance
// Size: 0x470 (Inherited: 0x430)
struct UFortSpicySakeVehicleAnimInstance : UFortBaseAnimInstance {
	struct FRotator OnGroundSlopeRotOffset; // 0x430(0x18)
	float LocalVelocityYawAngle; // 0x448(0x04)
	float ForwardSpeed; // 0x44c(0x04)
	float UpSpeed; // 0x450(0x04)
	float SmoothJumpPitch; // 0x454(0x04)
	float SmoothJumpPitchDeltaRate; // 0x458(0x04)
	float CurrentBoostRateScale; // 0x45c(0x04)
	char bIsJumping : 1; // 0x460(0x01)
	char bIsSurfaceSwimming : 1; // 0x460(0x01)
	char bIsOnGround : 1; // 0x460(0x01)
	char bIsFalling : 1; // 0x460(0x01)
	char bIsCharging : 1; // 0x460(0x01)
	char bOnGroundNotMoving : 1; // 0x460(0x01)
	char bLanded : 1; // 0x460(0x01)
	char bIsBoosting : 1; // 0x460(0x01)
	char bStartBoosting : 1; // 0x461(0x01)
	char bTransition_Idle_To_Boost : 1; // 0x461(0x01)
	char bTransition_Boost_To_Idle : 1; // 0x461(0x01)
	char pad_461_3 : 5; // 0x461(0x01)
	char pad_462[0xe]; // 0x462(0x0e)
};

