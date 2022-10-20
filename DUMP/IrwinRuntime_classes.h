// Class IrwinRuntime.FortAIFaunaAnimInstance
// Size: 0x6e0 (Inherited: 0x580)
struct UFortAIFaunaAnimInstance : UFortAIAnimInstance {
	float AverageSpeed; // 0x578(0x04)
	float AverageSpeedTimeFrame; // 0x57c(0x04)
	bool bHasValidAimTarget; // 0x580(0x01)
	float AimTime; // 0x584(0x04)
	struct FVector AimTargetLocation; // 0x588(0x18)
	bool bIsSurfaceSwimming; // 0x5a0(0x01)
	bool bIsMovingOnGround; // 0x5a1(0x01)
	bool bIsInTornado; // 0x5a2(0x01)
	float LookAtAlpha; // 0x5a4(0x04)
	float MaxDistanceToPlayerForLookAt; // 0x5a8(0x04)
	float LookAtTooFarFromPlayerTimeOut; // 0x5ac(0x04)
	bool bDisableLookAtDuringMontage; // 0x5b0(0x01)
	struct FName DisableHeadTrackingCurveName; // 0x5b4(0x04)
	struct FRidingAnimationData RidingAnimationData; // 0x5b8(0x14)
	bool bIsSlopeSliding; // 0x5cc(0x01)
	char pad_5CE[0x2]; // 0x5ce(0x02)
	float SlopeSlidingPitch; // 0x5d0(0x04)
	float SlopeSlidingRoll; // 0x5d4(0x04)
	float RidingMovePlayRate; // 0x5d8(0x04)
	bool bJustGotPlayer; // 0x5dc(0x01)
	bool bIsBoosting; // 0x5dd(0x01)
	bool bIsTurningInPlace; // 0x5de(0x01)
	char pad_5DF[0x1]; // 0x5df(0x01)
	float TurnInPlaceRotationSpeed; // 0x5e0(0x04)
	float TurnInPlaceAngleDelta; // 0x5e4(0x04)
	bool bIsMovingBackwards; // 0x5e8(0x01)
	char pad_5E9[0x3]; // 0x5e9(0x03)
	float RiderReferentialYaw; // 0x5ec(0x04)
	float BoostPlayRate; // 0x5f0(0x04)
	bool bIsTurnInPlaceAngleDeltaPositive; // 0x5f4(0x01)
	bool bPlayLandAdditive; // 0x5f5(0x01)
	char pad_5F6[0x2]; // 0x5f6(0x02)
	float BackwardVelocity; // 0x5f8(0x04)
	bool bShouldPlayStopBackwards; // 0x5fc(0x01)
	char pad_5FD[0x3]; // 0x5fd(0x03)
	float SwimmingYaw; // 0x600(0x04)
	float BackwardsPlayRate; // 0x604(0x04)
	float BodyRoll; // 0x608(0x04)
	float TurnAngleStored; // 0x60c(0x04)
	bool bWasTurningRight; // 0x610(0x01)
	enum class ERidingFootPhase FootPhase; // 0x611(0x01)
	bool bIsFootPhase_FeetInAir; // 0x612(0x01)
	bool bIsFootPhase_FrontFeetPlanted; // 0x613(0x01)
	bool bIsFootPhase_BackFeetPlanted; // 0x614(0x01)
	bool bIsFootPhase_LeftBackFeetForward; // 0x615(0x01)
	bool bIsFootPhase_RightBackFeetForward; // 0x616(0x01)
	bool bIsFootPhase_LeftPlantedRightPass; // 0x617(0x01)
	bool bIsFootPhase_RightPlantedLeftPass; // 0x618(0x01)
	char pad_619[0x7]; // 0x619(0x07)
	struct FGameplayTagContainer SlipstreamTags; // 0x620(0x20)
	bool bIsInSlipstream; // 0x640(0x01)
	char pad_641[0x7]; // 0x641(0x07)
	struct FGameplayTagContainer SkydivingTags; // 0x648(0x20)
	bool bMovementMode_Skydiving; // 0x668(0x01)
	char pad_669[0x7]; // 0x669(0x07)
	struct FGameplayTagContainer SkytubingTags; // 0x670(0x20)
	bool bGameplay_Status_Skytubing; // 0x690(0x01)
	bool bIsAbducted; // 0x691(0x01)
	char pad_692[0x6]; // 0x692(0x06)
	struct FGameplayTagContainer TractorBeamTags; // 0x698(0x20)
	bool bIsInTractorBeam; // 0x6b8(0x01)
	bool bIsFloating; // 0x6b9(0x01)
	char pad_6BA[0x2]; // 0x6ba(0x02)
	float JustGotPlayerInitialDelaySec; // 0x6bc(0x04)
	char pad_6C0[0x20]; // 0x6c0(0x20)

	void UpdateTurnAngleStored(); // Function IrwinRuntime.FortAIFaunaAnimInstance.UpdateTurnAngleStored // (Native|Event|Public|BlueprintEvent) // @ game+0x1138230
	void UpdateSwimmingYaw(); // Function IrwinRuntime.FortAIFaunaAnimInstance.UpdateSwimmingYaw // (Native|Event|Public|BlueprintEvent) // @ game+0x26eaa48
	void UpdateRidingMovePlayRate(); // Function IrwinRuntime.FortAIFaunaAnimInstance.UpdateRidingMovePlayRate // (Native|Event|Public|BlueprintEvent) // @ game+0x2462ea0
	void UpdatePlayLandAdditive(); // Function IrwinRuntime.FortAIFaunaAnimInstance.UpdatePlayLandAdditive // (Native|Event|Public|BlueprintEvent) // @ game+0x2731cf8
	void UpdateFootPhaseStop(); // Function IrwinRuntime.FortAIFaunaAnimInstance.UpdateFootPhaseStop // (Native|Event|Public|BlueprintEvent) // @ game+0x234846c
	void UpdateBoostPlayRate(); // Function IrwinRuntime.FortAIFaunaAnimInstance.UpdateBoostPlayRate // (Native|Event|Public|BlueprintEvent) // @ game+0x2760158
	void UpdateBodyRoll(); // Function IrwinRuntime.FortAIFaunaAnimInstance.UpdateBodyRoll // (Native|Event|Public|BlueprintEvent) // @ game+0x1db3074
	void UpdateBackwardVelocity(); // Function IrwinRuntime.FortAIFaunaAnimInstance.UpdateBackwardVelocity // (Native|Event|Public|BlueprintEvent) // @ game+0x22f2acc
	void UpdateBackwardsPlayRate(); // Function IrwinRuntime.FortAIFaunaAnimInstance.UpdateBackwardsPlayRate // (Native|Event|Public|BlueprintEvent) // @ game+0x1282d0c
	void FinishFootPhaseStopUpdate(); // Function IrwinRuntime.FortAIFaunaAnimInstance.FinishFootPhaseStopUpdate // (Native|Event|Public|BlueprintEvent) // @ game+0x259e1b0
	void CalculateLookAtAlpha(bool bForceDisableLookAt, float DeltaSeconds); // Function IrwinRuntime.FortAIFaunaAnimInstance.CalculateLookAtAlpha // (Final|Native|Public|BlueprintCallable) // @ game+0x653b7bc
};

// Class IrwinRuntime.FortAIFaunaAnimInstance_Burt
// Size: 0x780 (Inherited: 0x6e0)
struct UFortAIFaunaAnimInstance_Burt : UFortAIFaunaAnimInstance {
	float MovingPlayRate; // 0x6d8(0x04)
	float LocomotionPoseAdditiveAlpha; // 0x6dc(0x04)
	bool bEnableHeadTiltUpAdditive; // 0x6e0(0x01)
	bool bTurnAngleIsNegative; // 0x6e1(0x01)
	struct FName DisableLocomotionAdditiveCurveName; // 0x6e4(0x04)
	struct FName InterruptibleCurveName; // 0x6e8(0x04)
	bool bIsIdleShuffleTurn; // 0x6ec(0x01)
	float IdleShuffleBodyBend; // 0x6f0(0x04)
	float IdleShufflePlayRate; // 0x6f4(0x04)
	bool bIdleShuffleTurnDirection; // 0x6f8(0x01)
	bool bIsMoving; // 0x6f9(0x01)
	bool bCanTransitionIdleToApex; // 0x6fa(0x01)
	bool bCanTransitionIdleToMoving; // 0x6fb(0x01)
	bool bCanTransitionMovingToIdle; // 0x6fc(0x01)
	bool bCanTransitionLandToIdle; // 0x6fd(0x01)
	bool bCanTransitionLandToJumpStart; // 0x6fe(0x01)
	bool bCanTransitionJumpStartToApex; // 0x6ff(0x01)
	bool bCanTransitionApexToFall; // 0x700(0x01)
	bool bCanTransitionFallToLand; // 0x701(0x01)
	bool bCanTransitionIdleTurnToIdle; // 0x702(0x01)
	bool bCanTransitionLocomotionTurnToIdle; // 0x703(0x01)
	bool bCanTransitionLocomotionTurnToMoving; // 0x704(0x01)
	bool bCanTransitionIdleTurnToMoving; // 0x705(0x01)
	bool bCanTransitionFallToMoving; // 0x706(0x01)
	bool bCanTransitionFallToIdle; // 0x707(0x01)
	float MovingPlayRate_SpeedThreshold; // 0x708(0x04)
	float MovingPlayRate_SlowSpeedDivisor; // 0x70c(0x04)
	float MovingPlayRate_FastSpeedDivisor; // 0x710(0x04)
	float MovingPlayRate_MinClamp; // 0x714(0x04)
	float MovingPlayRate_MaxClamp; // 0x718(0x04)
	float MovingPlayRate_InterpSpeed; // 0x71c(0x04)
	float LocomotionPoseAdditiveAlpha_InterpSpeed; // 0x720(0x04)
	float EnableHeadTiltUpAdditive_PawnUniqueIDMultiplier; // 0x724(0x04)
	float EnableHeadTiltUpAdditive_ModOperand; // 0x728(0x04)
	float InterruptibleCurveValue_LargeThreshold; // 0x72c(0x04)
	float InterruptibleCurveValue_TurnAngleThreshold; // 0x730(0x04)
	float Speed_MovingThreshold; // 0x734(0x04)
	float Speed_IdleThreshold; // 0x738(0x04)
	float TurnAngle_LargeThreshold; // 0x73c(0x04)
	float Speed_RidingMovingThreshold; // 0x740(0x04)
	float Speed_RidingIdleThreshold; // 0x744(0x04)
	float IdleShuffleBodyBendMultiplier; // 0x748(0x04)
	float IdleShuffleTurnThreshold; // 0x74c(0x04)
	float IdleShuffleTurnDirectionThreshold; // 0x750(0x04)
	float IdleShufflePlayRateInRangeA; // 0x754(0x04)
	float IdleShufflePlayRateInRangeB; // 0x758(0x04)
	float IdleShufflePlayRateOutRangeA; // 0x75c(0x04)
	float IdleShufflePlayRateOutRangeB; // 0x760(0x04)
	float MinSpeedSlowRidingMovePlayRate; // 0x764(0x04)
	float SpeedSlowDivisorRidingMovePlayRate; // 0x768(0x04)
	struct FMapRangeClamped_Ranges RidingMovePlayRate_Ranges; // 0x76c(0x10)
	char pad_77F[0x1]; // 0x77f(0x01)
};

// Class IrwinRuntime.FortAIFaunaAnimInstance_Burt_Hitchhiker
// Size: 0x790 (Inherited: 0x780)
struct UFortAIFaunaAnimInstance_Burt_Hitchhiker : UFortAIFaunaAnimInstance_Burt {
	bool IsFloating; // 0x780(0x01)
	bool IsInTractorBeam; // 0x781(0x01)
	bool IsHitchhiked; // 0x782(0x01)
	char pad_783[0xd]; // 0x783(0x0d)
};

// Class IrwinRuntime.FortAIFaunaAnimInstance_Crow
// Size: 0x710 (Inherited: 0x6e0)
struct UFortAIFaunaAnimInstance_Crow : UFortAIFaunaAnimInstance {
	float WingFlapPlayRate; // 0x6d8(0x04)
	bool bIsDescending; // 0x6dc(0x01)
	bool bIsGliding; // 0x6dd(0x01)
	bool bIsFlying; // 0x6de(0x01)
	bool bIsFlyingSlow; // 0x6df(0x01)
	bool bIsLanding; // 0x6e0(0x01)
	float WingFlapPlayRateInRangeA; // 0x6e4(0x04)
	float WingFlapPlayRateInRangeB; // 0x6e8(0x04)
	float WingFlapPlayRateOutRangeA; // 0x6ec(0x04)
	float WingFlapPlayRateOutRangeB; // 0x6f0(0x04)
	float ZVelocityDescendingThreshold; // 0x6f4(0x04)
	float GlidingSpeedThreshold; // 0x6f8(0x04)
	float FlyingSpeedThreshold; // 0x6fc(0x04)
	float FlyingSlowSpeedThreshold; // 0x700(0x04)
	float LandingSpeedThreshold; // 0x704(0x04)
	char pad_70D[0x3]; // 0x70d(0x03)
};

// Class IrwinRuntime.FortAIFaunaAnimInstance_Grandma
// Size: 0x7a0 (Inherited: 0x6e0)
struct UFortAIFaunaAnimInstance_Grandma : UFortAIFaunaAnimInstance {
	struct AFortAIPawn* AIPawn; // 0x6d8(0x08)
	float MeshScale; // 0x6e0(0x04)
	bool bShouldPlayFullBodyInPlace; // 0x6e4(0x01)
	float BlinkAlpha; // 0x6e8(0x04)
	float WalkRunPlayRate; // 0x6ec(0x04)
	float LocomotionPoseAdditiveAlpha; // 0x6f0(0x04)
	bool bEnableSniffAdditive; // 0x6f4(0x01)
	bool bEnableAlertAdditive; // 0x6f5(0x01)
	bool bIdleStartTurn; // 0x6f6(0x01)
	bool bLookAtAdditiveTurnAlpha; // 0x6f7(0x01)
	bool bIsIdleShuffleTurn; // 0x6f8(0x01)
	float IdleShuffleBodyBend; // 0x6fc(0x04)
	float IdleShufflePlayRate; // 0x700(0x04)
	bool bIdleShuffleTurnDirection; // 0x704(0x01)
	char pad_707[0x1]; // 0x707(0x01)
	float TurnInPlaceModulatedSpeed; // 0x708(0x04)
	float MaxSpeedFullBodyInPlace; // 0x70c(0x04)
	float MinCurveValueFullBodyInPlace; // 0x710(0x04)
	float LocomotionPoseAdditiveAlphaInterpRate; // 0x714(0x04)
	int32_t SniffAdditiveFrequenceySeconds; // 0x718(0x04)
	int32_t AlertAdditiveFrequenceySeconds; // 0x71c(0x04)
	int32_t PawnIDScale; // 0x720(0x04)
	struct FName ShouldPlayFullBodyInPlaceCurveName; // 0x724(0x04)
	struct FName BlinkAlphaCurveName; // 0x728(0x04)
	float IdleStartTurnInterruptibleThreshold; // 0x72c(0x04)
	float IdleShuffleBodyBendMultiplier; // 0x730(0x04)
	float IdleShuffleTurnThreshold; // 0x734(0x04)
	float IdleShuffleTurnDirectionThreshold; // 0x738(0x04)
	float LookAtAdditiveTurnAlphaThreshold; // 0x73c(0x04)
	float IdleShufflePlayRateInRangeA; // 0x740(0x04)
	float IdleShufflePlayRateInRangeB; // 0x744(0x04)
	float IdleShufflePlayRateOutRangeA; // 0x748(0x04)
	float IdleShufflePlayRateOutRangeB; // 0x74c(0x04)
	float TurnInPlaceModulatedSpeedFactor; // 0x750(0x04)
	bool bIsMovingOnGroundORIsSurfaceSwimming; // 0x754(0x01)
	bool bStateRule_DefaultJump_ToJumpApex; // 0x755(0x01)
	bool bStateRule_TurnIdle_Idle; // 0x756(0x01)
	bool bStateRule_TurnIdle_Moving; // 0x757(0x01)
	bool bStateRule_Moving_TurnIdle; // 0x758(0x01)
	bool bStateRule_TurnMoving_Moving; // 0x759(0x01)
	bool bStateRule_Moving_TurnMoving; // 0x75a(0x01)
	bool bStateRule_Idle_Moving; // 0x75b(0x01)
	bool bStateRule_Moving_Idle; // 0x75c(0x01)
	bool bStateRule_JumpLand_Idle; // 0x75d(0x01)
	bool bStateRule_JumpLand_Moving; // 0x75e(0x01)
	bool bStateRule_JumpStart_JumpApex; // 0x75f(0x01)
	bool bStateRule_Fall_Moving; // 0x760(0x01)
	bool bStateRule_Fall_Idle; // 0x761(0x01)
	bool bStateRule_SwimIdle_SwimLoco; // 0x762(0x01)
	bool bStateRule_SwimLoco_SwimIdle; // 0x763(0x01)
	bool bStateRule_SwimTurn_SwimIdle; // 0x764(0x01)
	bool bStateRule_SwimTurn_SwimLoco; // 0x765(0x01)
	bool bAnimRule_NegativeTurnAngle; // 0x766(0x01)
	char pad_767[0x1]; // 0x767(0x01)
	float InterruptibleMaxCheck; // 0x768(0x04)
	float SpeedStopTransition; // 0x76c(0x04)
	float SpeedIdleMoveTransition; // 0x770(0x04)
	float SpeedMovingTurnIdleTransition; // 0x774(0x04)
	float SpeedToMoveMin; // 0x778(0x04)
	float SpeedToMoveMinWhileRiding; // 0x77c(0x04)
	float SpeedToMoveMinWhileAcceleratingAndRiding; // 0x780(0x04)
	float StateTimeFromEndThreshold; // 0x784(0x04)
	float SpeedIdleStartTurnThreshold; // 0x788(0x04)
	float SpeedFallMovingThreshold; // 0x78c(0x04)
	char pad_790[0x10]; // 0x790(0x10)

	void UpdateStateVariables(bool bAccelerating); // Function IrwinRuntime.FortAIFaunaAnimInstance_Grandma.UpdateStateVariables // (Final|Native|Public|BlueprintCallable) // @ game+0x653bb94
	void UpdateShouldPlayFullBodyInPlace(); // Function IrwinRuntime.FortAIFaunaAnimInstance_Grandma.UpdateShouldPlayFullBodyInPlace // (Final|Native|Public|BlueprintCallable) // @ game+0x653bb6c
	void UpdateMovingRates(); // Function IrwinRuntime.FortAIFaunaAnimInstance_Grandma.UpdateMovingRates // (Final|Native|Public|BlueprintCallable) // @ game+0x653bb44
	void UpdateMeshScale(); // Function IrwinRuntime.FortAIFaunaAnimInstance_Grandma.UpdateMeshScale // (Final|Native|Public|BlueprintCallable) // @ game+0x653bb20
	void UpdateLocomotionPoseAlpha(); // Function IrwinRuntime.FortAIFaunaAnimInstance_Grandma.UpdateLocomotionPoseAlpha // (Final|Native|Public|BlueprintCallable) // @ game+0x653baf4
	void UpdateIdleStartTurn(); // Function IrwinRuntime.FortAIFaunaAnimInstance_Grandma.UpdateIdleStartTurn // (Final|Native|Public|BlueprintCallable) // @ game+0x653ba50
	void UpdateEnableSniffAdditive(); // Function IrwinRuntime.FortAIFaunaAnimInstance_Grandma.UpdateEnableSniffAdditive // (Final|Native|Public|BlueprintCallable) // @ game+0x653ba2c
	void UpdateEnableAlertAdditive(); // Function IrwinRuntime.FortAIFaunaAnimInstance_Grandma.UpdateEnableAlertAdditive // (Final|Native|Public|BlueprintCallable) // @ game+0x653b9e4
	void UpdateBlinkAlpha(); // Function IrwinRuntime.FortAIFaunaAnimInstance_Grandma.UpdateBlinkAlpha // (Final|Native|Public|BlueprintCallable) // @ game+0x653b9b8
	bool DetermineShouldPlayFullBodyInPlace(); // Function IrwinRuntime.FortAIFaunaAnimInstance_Grandma.DetermineShouldPlayFullBodyInPlace // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x653b994
	bool DetermineIdleStartTurn(); // Function IrwinRuntime.FortAIFaunaAnimInstance_Grandma.DetermineIdleStartTurn // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x653b928
	bool DetermineEnableSniffAdditive(); // Function IrwinRuntime.FortAIFaunaAnimInstance_Grandma.DetermineEnableSniffAdditive // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x653b908
	bool DetermineEnableAlertAdditive(); // Function IrwinRuntime.FortAIFaunaAnimInstance_Grandma.DetermineEnableAlertAdditive // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x653b8c8
	float CalculateWalkRunPlayRate(); // Function IrwinRuntime.FortAIFaunaAnimInstance_Grandma.CalculateWalkRunPlayRate // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x653b8a4
	float CalculateMeshScale(); // Function IrwinRuntime.FortAIFaunaAnimInstance_Grandma.CalculateMeshScale // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x653b884
	float CalculateLocomotionPoseAlpha(); // Function IrwinRuntime.FortAIFaunaAnimInstance_Grandma.CalculateLocomotionPoseAlpha // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x653b794
	float CalculateBlinkAlpha(); // Function IrwinRuntime.FortAIFaunaAnimInstance_Grandma.CalculateBlinkAlpha // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x653b744
};

// Class IrwinRuntime.FortAIFaunaAnimInstance_Grandma_Hitchhiker
// Size: 0x7a0 (Inherited: 0x7a0)
struct UFortAIFaunaAnimInstance_Grandma_Hitchhiker : UFortAIFaunaAnimInstance_Grandma {
	bool bIsHitchhiked; // 0x798(0x01)
	bool bIsGrandmaSprinting; // 0x799(0x01)
	float SprintCheckSpeed; // 0x79c(0x04)
};

// Class IrwinRuntime.FortAIFaunaAnimInstance_Nug
// Size: 0x770 (Inherited: 0x6e0)
struct UFortAIFaunaAnimInstance_Nug : UFortAIFaunaAnimInstance {
	bool bIsBeingHeld; // 0x6d8(0x01)
	bool bIsBeingThrown; // 0x6d9(0x01)
	float LowerBodyMaskAlpha; // 0x6dc(0x04)
	bool bShouldExitJump; // 0x6e0(0x01)
	float MovingPlayRate; // 0x6e4(0x04)
	bool bShouldLean; // 0x6e8(0x01)
	float LeanDirection; // 0x6ec(0x04)
	bool bTurnAngleIsNegative; // 0x6f0(0x01)
	char pad_6F1[0x3]; // 0x6f1(0x03)
	struct FName InterruptibleCurveName; // 0x6f4(0x04)
	bool bIsIdleShuffleTurn; // 0x6f8(0x01)
	char pad_6F9[0x3]; // 0x6f9(0x03)
	float IdleShuffleBodyBend; // 0x6fc(0x04)
	float IdleShufflePlayRate; // 0x700(0x04)
	bool bIdleShuffleTurnDirection; // 0x704(0x01)
	bool bCanTransitionIdleToIdleTurn; // 0x705(0x01)
	bool bCanTransitionIdleToLocomotionTurn; // 0x706(0x01)
	bool bCanTransitionIdleToMoving; // 0x707(0x01)
	bool bCanTransitionIdleToJumpApex; // 0x708(0x01)
	bool bCanTransitionMovingToIdle; // 0x709(0x01)
	bool bCanTransitionJumpStartToJumpApex; // 0x70a(0x01)
	bool bCanTransitionJumpApexToJumpLoop; // 0x70b(0x01)
	bool bCanTransitionLocomotionTurnToIdle; // 0x70c(0x01)
	bool bCanTransitionLocomotionTurnToMoving; // 0x70d(0x01)
	bool bCanTransitionIdleTurnToMoving; // 0x70e(0x01)
	bool bCanTransitionIdleTurnToIdle; // 0x70f(0x01)
	bool bCanTransitionJumpLoopToJumpLand; // 0x710(0x01)
	bool bCanTransitionIsBeingHeldToChickenChuck; // 0x711(0x01)
	char pad_712[0x2]; // 0x712(0x02)
	float ShouldExitJump_SpeedThreshold; // 0x714(0x04)
	float MovingPlayRate_SpeedThreshold; // 0x718(0x04)
	float MovingPlayRate_SlowSpeedDivisor; // 0x71c(0x04)
	float MovingPlayRate_FastSpeedDivisor; // 0x720(0x04)
	float MovingPlayRate_InterpSpeed; // 0x724(0x04)
	float MovingPlayRate_MinClamp; // 0x728(0x04)
	float MovingPlayRate_MaxClamp; // 0x72c(0x04)
	float LeanDirection_SpeedThreshold; // 0x730(0x04)
	float ShouldLean_SpeedThreshold; // 0x734(0x04)
	float InterruptibleCurveValue_LargeThreshold; // 0x738(0x04)
	float Speed_MovingThreshold; // 0x73c(0x04)
	float Speed_IdleThreshold; // 0x740(0x04)
	float IdleTurnTransition_SpeedThreshold; // 0x744(0x04)
	float LocomotionTurnTransition_SpeedThreshold; // 0x748(0x04)
	float IdleShuffleBodyBendMultiplier; // 0x74c(0x04)
	float IdleShuffleTurnThreshold; // 0x750(0x04)
	float IdleShuffleTurnDirectionThreshold; // 0x754(0x04)
	float IdleShufflePlayRateInRangeA; // 0x758(0x04)
	float IdleShufflePlayRateInRangeB; // 0x75c(0x04)
	float IdleShufflePlayRateOutRangeA; // 0x760(0x04)
	float IdleShufflePlayRateOutRangeB; // 0x764(0x04)
	char pad_768[0x8]; // 0x768(0x08)
};

// Class IrwinRuntime.FortAIFaunaAnimInstance_Nug_Hitchhiker
// Size: 0x770 (Inherited: 0x770)
struct UFortAIFaunaAnimInstance_Nug_Hitchhiker : UFortAIFaunaAnimInstance_Nug {
	bool bIsSwimming; // 0x768(0x01)
	bool bIsHitchhiked; // 0x769(0x01)
};

// Class IrwinRuntime.FortAIFaunaAnimInstance_Robert
// Size: 0x770 (Inherited: 0x6e0)
struct UFortAIFaunaAnimInstance_Robert : UFortAIFaunaAnimInstance {
	struct AFortAIPawn* AIPawn; // 0x6e0(0x08)
	bool bIdleStartTurn; // 0x6e8(0x01)
	bool bEnableHeadTiltDownAdditive; // 0x6e9(0x01)
	bool bIsFullBodyInPlace; // 0x6ea(0x01)
	char pad_6EB[0x1]; // 0x6eb(0x01)
	float LocomotionPoseAdditiveAlpha; // 0x6ec(0x04)
	bool bIsIdleShuffleTurn; // 0x6f0(0x01)
	char pad_6F1[0x3]; // 0x6f1(0x03)
	float IdleShuffleBodyBend; // 0x6f4(0x04)
	float IdleShufflePlayRate; // 0x6f8(0x04)
	bool bIdleShuffleTurnDirection; // 0x6fc(0x01)
	bool bLookAtAdditiveTurnAlpha; // 0x6fd(0x01)
	bool bTurnDirection; // 0x6fe(0x01)
	char pad_6FF[0x1]; // 0x6ff(0x01)
	int32_t PawnIDScale; // 0x700(0x04)
	int32_t HeadTiltDownAdditiveFrequenceySeconds; // 0x704(0x04)
	float ForceFullBodyTransition; // 0x708(0x04)
	float LocomotionPoseAdditiveAlphaInterpRate; // 0x70c(0x04)
	float IdleStartTurnInterruptibleThreshold; // 0x710(0x04)
	float LookAtAlphaThreshold; // 0x714(0x04)
	float SpeedMovingThreshold; // 0x718(0x04)
	float TurnDirectionThreshold; // 0x71c(0x04)
	float IdleShuffleBodyBendMultiplier; // 0x720(0x04)
	float IdleShuffleTurnThreshold; // 0x724(0x04)
	float IdleShuffleTurnDirectionThreshold; // 0x728(0x04)
	float IdleShufflePlayRateInRangeA; // 0x72c(0x04)
	float IdleShufflePlayRateInRangeB; // 0x730(0x04)
	float IdleShufflePlayRateOutRangeA; // 0x734(0x04)
	float IdleShufflePlayRateOutRangeB; // 0x738(0x04)
	bool bStateRule_TurnIdle_Idle; // 0x73c(0x01)
	bool bStateRule_Idle_TurnIdle; // 0x73d(0x01)
	bool bStateRule_TurnIdle_Moving; // 0x73e(0x01)
	bool bStateRule_TurnMoving_TurnIdle; // 0x73f(0x01)
	bool bStateRule_Idle_Moving; // 0x740(0x01)
	bool bStateRule_Moving_Idle; // 0x741(0x01)
	bool bStateRule_TurnMoving_Moving; // 0x742(0x01)
	bool bStateRule_Moving_TurnMoving; // 0x743(0x01)
	bool bStateRule_Swimming_Fall; // 0x744(0x01)
	bool bStateRule_Land_Idle; // 0x745(0x01)
	bool bStateRule_JumpStart_Apex; // 0x746(0x01)
	bool bStateRule_Fall_Idle; // 0x747(0x01)
	bool bStateRule_Fall_Moving; // 0x748(0x01)
	bool bStateRule_SwimIdle_SwimLoco; // 0x749(0x01)
	bool bStateRule_SwimLoco_SwimIdle; // 0x74a(0x01)
	bool bStateRule_SwimTurn_SwimIdle; // 0x74b(0x01)
	bool bStateRule_SwimTurn_SwimLoco; // 0x74c(0x01)
	bool bAnimRule_NegativeTurnAngle; // 0x74d(0x01)
	char pad_74E[0x2]; // 0x74e(0x02)
	float InterruptibleMaxCheck; // 0x750(0x04)
	float SpeedStopTransition; // 0x754(0x04)
	float SpeedIdleMoveTransition; // 0x758(0x04)
	float SpeedToMoveMin; // 0x75c(0x04)
	float StateTimeFromEndThreshold; // 0x760(0x04)
	char pad_764[0xc]; // 0x764(0x0c)

	void UpdateStateVariables(); // Function IrwinRuntime.FortAIFaunaAnimInstance_Robert.UpdateStateVariables // (Final|Native|Public|BlueprintCallable) // @ game+0x653bc14
	void UpdateLocomotionPoseAdditiveAlpha(); // Function IrwinRuntime.FortAIFaunaAnimInstance_Robert.UpdateLocomotionPoseAdditiveAlpha // (Final|Native|Public|BlueprintCallable) // @ game+0x653bac8
	void UpdateIsFullBodyInPlace(); // Function IrwinRuntime.FortAIFaunaAnimInstance_Robert.UpdateIsFullBodyInPlace // (Final|Native|Public|BlueprintCallable) // @ game+0x653baa0
	void UpdateIdleStartTurn(); // Function IrwinRuntime.FortAIFaunaAnimInstance_Robert.UpdateIdleStartTurn // (Final|Native|Public|BlueprintCallable) // @ game+0x653ba78
	void UpdateEnableHeadTiltDownAdditive(); // Function IrwinRuntime.FortAIFaunaAnimInstance_Robert.UpdateEnableHeadTiltDownAdditive // (Final|Native|Public|BlueprintCallable) // @ game+0x653ba08
	bool DetermineIsFullBodyInPlace(); // Function IrwinRuntime.FortAIFaunaAnimInstance_Robert.DetermineIsFullBodyInPlace // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x653b970
	bool DetermineIdleStartTurn(); // Function IrwinRuntime.FortAIFaunaAnimInstance_Robert.DetermineIdleStartTurn // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x653b94c
	bool DetermineEnableHeadTiltDownAdditive(); // Function IrwinRuntime.FortAIFaunaAnimInstance_Robert.DetermineEnableHeadTiltDownAdditive // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x653b8e8
	float CalculateLocomotionPoseAdditiveAlpha(); // Function IrwinRuntime.FortAIFaunaAnimInstance_Robert.CalculateLocomotionPoseAdditiveAlpha // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x653b76c
};

// Class IrwinRuntime.FortAIFaunaAnimInstance_Smackie
// Size: 0x710 (Inherited: 0x6e0)
struct UFortAIFaunaAnimInstance_Smackie : UFortAIFaunaAnimInstance {
	bool bIsIdleShuffleTurn; // 0x6d8(0x01)
	float IdleShuffleBodyBend; // 0x6dc(0x04)
	float IdleShufflePlayRate; // 0x6e0(0x04)
	bool bIdleShuffleTurnDirection; // 0x6e4(0x01)
	bool bCanTransitionIdleToHop; // 0x6e5(0x01)
	bool bCanTransitionHopToIdle; // 0x6e6(0x01)
	bool bCanTransitionFallToIdle; // 0x6e7(0x01)
	bool bCanTransitionFallToHop; // 0x6e8(0x01)
	float SpeedThreshold; // 0x6ec(0x04)
	float IdleShuffleBodyBendMultiplier; // 0x6f0(0x04)
	float IdleShuffleTurnThreshold; // 0x6f4(0x04)
	float IdleShuffleTurnDirectionThreshold; // 0x6f8(0x04)
	float IdleShufflePlayRateInRangeA; // 0x6fc(0x04)
	float IdleShufflePlayRateInRangeB; // 0x700(0x04)
	float IdleShufflePlayRateOutRangeA; // 0x704(0x04)
	float IdleShufflePlayRateOutRangeB; // 0x708(0x04)
	char pad_70E[0x2]; // 0x70e(0x02)
};

// Class IrwinRuntime.FortAIFaunaLayerAnimInstance
// Size: 0x450 (Inherited: 0x440)
struct UFortAIFaunaLayerAnimInstance : UFortBaseLayerAnimInstance {
	struct UAnimInstance* MainAnimBP; // 0x440(0x08)
	char pad_448[0x8]; // 0x448(0x08)
};
