// Class GrappleParentRuntime.FortCameraModifier_Swinging
// Size: 0x288 (Inherited: 0x48)
struct UFortCameraModifier_Swinging : UCameraModifier {
	float MaxVelocityDeltaPerSecond; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct UCurveFloat* BlendInCurve; // 0x50(0x08)
	struct UCurveFloat* BlendOutCurve; // 0x58(0x08)
	struct FSpeedScaledAxisOffsetData ForwardOffsetData; // 0x60(0x60)
	struct FVector2D TotalForwardOffsetBounds; // 0xc0(0x10)
	struct FSpeedScaledAxisOffsetData RightOffsetData; // 0xd0(0x60)
	struct FVector2D RightForwardOffsetMultiplierBounds; // 0x130(0x10)
	struct FSpeedScaledAxisOffsetData UpOffsetData; // 0x140(0x60)
	struct FVector2D UpPositiveForwardOffsetMultiplierBounds; // 0x1a0(0x10)
	struct FVector2D UpNegativeForwardOffsetMultiplierBounds; // 0x1b0(0x10)
	float FOVInterpSpeed; // 0x1c0(0x04)
	char pad_1C4[0x4]; // 0x1c4(0x04)
	struct FVector2D FOVBounds; // 0x1c8(0x10)
	struct UCurveFloat* BoostCurve; // 0x1d8(0x08)
	struct FScalableFloat BoostModifier; // 0x1e0(0x28)
	float AttachBoostDuration; // 0x208(0x04)
	float AttachBoostMagnitude; // 0x20c(0x04)
	float DetachBoostDuration; // 0x210(0x04)
	float DetachBoostMagnitude; // 0x214(0x04)
	struct UCurveFloat* SlidingHeightCurve; // 0x218(0x08)
	struct FGameplayTag SlidingGameplayTag; // 0x220(0x04)
	float SlideHeightTransitionDuration; // 0x224(0x04)
	float MaxSlidingSpeedMultiplierOffset; // 0x228(0x04)
	char pad_22C[0x4]; // 0x22c(0x04)
	struct AFortPlayerPawnAthena* CachedPlayer; // 0x230(0x08)
	struct AFortWeaponRangedDualSwing* CachedWeapon; // 0x238(0x08)
	char pad_240[0x48]; // 0x240(0x48)

	void RemoveSelfFromCameraManager(); // Function GrappleParentRuntime.FortCameraModifier_Swinging.RemoveSelfFromCameraManager // (Final|Native|Protected) // @ game+0x64b9880
	void CalculateDynamicMultipliers(float& OutFOVBoundsMultiplier, float& OutBoostOffsetMultiplier); // Function GrappleParentRuntime.FortCameraModifier_Swinging.CalculateDynamicMultipliers // (Native|Event|Protected|HasOutParms|BlueprintEvent|Const) // @ game+0x64b95d0
};

// Class GrappleParentRuntime.FortSwingingLayerAnimInstance
// Size: 0x5e0 (Inherited: 0x440)
struct UFortSwingingLayerAnimInstance : UFortBaseLayerAnimInstance {
	struct UAnimInstance* MainAnimBP; // 0x440(0x08)
	struct AFortPlayerPawnAthena* Player; // 0x448(0x08)
	bool IsGroundSwing; // 0x450(0x01)
	bool IsFemale; // 0x451(0x01)
	char pad_452[0x2]; // 0x452(0x02)
	float PlayerDistanceToGround; // 0x454(0x04)
	bool CalculateRotation; // 0x458(0x01)
	char pad_459[0x7]; // 0x459(0x07)
	struct FScalableFloat ForwardInfluenceOnRotation; // 0x460(0x28)
	struct FScalableFloat TimeForMaxRotationSpeed; // 0x488(0x28)
	struct FScalableFloat MaxRotationSpeed; // 0x4b0(0x28)
	struct FScalableFloat RotationSpeedWhileNotAttached; // 0x4d8(0x28)
	struct FScalableFloat RotationSpeedWhileNotRotated; // 0x500(0x28)
	struct AActor* GetAttachedActor; // 0x528(0x08)
	bool isFreeFalling; // 0x530(0x01)
	bool IsAttached; // 0x531(0x01)
	bool IsNotAttachedToCliff; // 0x532(0x01)
	char pad_533[0x5]; // 0x533(0x05)
	struct FVector Velocity; // 0x538(0x18)
	struct FVector XYVelocity; // 0x550(0x18)
	struct FVector VecFromPlayerToAttachPoint; // 0x568(0x18)
	float PitchAngleFromAttachPoint; // 0x580(0x04)
	float RollAngle; // 0x584(0x04)
	float YawAngleToAttachTarget; // 0x588(0x04)
	struct FName CurveName_SwingPhase; // 0x58c(0x04)
	struct FName CurveName_BlendOut; // 0x590(0x04)
	float SwingPhase; // 0x594(0x04)
	struct FRotator CurrentRootRotation; // 0x598(0x18)
	struct FVector CurrentRootTranslation; // 0x5b0(0x18)
	bool IsSwingRelease1; // 0x5c8(0x01)
	bool IsSwingRelease2; // 0x5c9(0x01)
	bool IsSwingRelease3; // 0x5ca(0x01)
	bool IsSwingRelease4; // 0x5cb(0x01)
	bool IsSwingRelease5; // 0x5cc(0x01)
	bool IsSwingReleaseSkid; // 0x5cd(0x01)
	bool IsMovingAttachPoint; // 0x5ce(0x01)
	bool IsBlendOut; // 0x5cf(0x01)
	float WebCastAttachDirection; // 0x5d0(0x04)
	bool IsWebCastDown; // 0x5d4(0x01)
	bool IsSwingOneHand; // 0x5d5(0x01)
	bool IsRandomHandBool; // 0x5d6(0x01)
	bool IsRandomSwingReleaseBool; // 0x5d7(0x01)
	bool IsRandomeReleaseBool; // 0x5d8(0x01)
	bool IsWithin100UnitsOfGround; // 0x5d9(0x01)
	bool IsHanging; // 0x5da(0x01)
	bool IsFallRelease; // 0x5db(0x01)
	bool IsOnGroundWebCast; // 0x5dc(0x01)
	bool IsSwingNearGroundToSkid; // 0x5dd(0x01)
	bool IsHangToSwingInAir; // 0x5de(0x01)
	bool IsHangToSwingNearGround; // 0x5df(0x01)

	void GetPlayerAnglesFromAttachPoint(float& Pitch, float& Roll, float& Yaw); // Function GrappleParentRuntime.FortSwingingLayerAnimInstance.GetPlayerAnglesFromAttachPoint // (Final|Native|Public|HasOutParms) // @ game+0x64b9758
	struct FVector GetAttachVectorInPlayerSpace(struct FVector& InPlayerToAttachPoint); // Function GrappleParentRuntime.FortSwingingLayerAnimInstance.GetAttachVectorInPlayerSpace // (Final|Native|Public|HasOutParms|HasDefaults) // @ game+0x64b96b0
};

