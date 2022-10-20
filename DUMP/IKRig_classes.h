// Class IKRig.RetargetChainSettings
// Size: 0xc0 (Inherited: 0x28)
struct URetargetChainSettings : UObject {
	struct FName SourceChain; // 0x28(0x04)
	struct FName TargetChain; // 0x2c(0x04)
	bool CopyPoseUsingFK; // 0x30(0x01)
	enum class ERetargetRotationMode RotationMode; // 0x31(0x01)
	char pad_32[0x2]; // 0x32(0x02)
	float RotationAlpha; // 0x34(0x04)
	enum class ERetargetTranslationMode TranslationMode; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	float TranslationAlpha; // 0x3c(0x04)
	bool DriveIKGoal; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	float BlendToSource; // 0x44(0x04)
	struct FVector BlendToSourceWeights; // 0x48(0x18)
	struct FVector StaticOffset; // 0x60(0x18)
	struct FVector StaticLocalOffset; // 0x78(0x18)
	struct FRotator StaticRotationOffset; // 0x90(0x18)
	float Extension; // 0xa8(0x04)
	bool UseSpeedCurveToPlantIK; // 0xac(0x01)
	char pad_AD[0x3]; // 0xad(0x03)
	struct FName SpeedCurveName; // 0xb0(0x04)
	float VelocityThreshold; // 0xb4(0x04)
	float UnplantStiffness; // 0xb8(0x04)
	float UnplantCriticalDamping; // 0xbc(0x04)
};

// Class IKRig.RetargetRootSettings
// Size: 0x80 (Inherited: 0x28)
struct URetargetRootSettings : UObject {
	float BlendToSource; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FVector BlendToSourceWeights; // 0x30(0x18)
	float GlobalScaleHorizontal; // 0x48(0x04)
	float GlobalScaleVertical; // 0x4c(0x04)
	struct FVector StaticOffset; // 0x50(0x18)
	struct FRotator StaticRotationOffset; // 0x68(0x18)
};

// Class IKRig.IKRetargeter
// Size: 0x1a8 (Inherited: 0x28)
struct UIKRetargeter : UObject {
	struct TSoftObjectPtr<UIKRigDefinition> SourceIKRigAsset; // 0x28(0x28)
	struct TSoftObjectPtr<UIKRigDefinition> TargetIKRigAsset; // 0x50(0x28)
	struct URetargetRootSettings* RootSettings; // 0x78(0x08)
	bool bRetargetRoot; // 0x80(0x01)
	bool bRetargetFK; // 0x81(0x01)
	bool bRetargetIK; // 0x82(0x01)
	char pad_83[0x5]; // 0x83(0x05)
	struct TArray<struct FRetargetChainMap> ChainMapping; // 0x88(0x10)
	struct TArray<struct URetargetChainSettings*> ChainSettings; // 0x98(0x10)
	struct TMap<struct FName, struct FIKRetargetPose> SourceRetargetPoses; // 0xa8(0x50)
	struct TMap<struct FName, struct FIKRetargetPose> TargetRetargetPoses; // 0xf8(0x50)
	struct FName CurrentSourceRetargetPose; // 0x148(0x04)
	struct FName CurrentTargetRetargetPose; // 0x14c(0x04)
	struct TMap<struct FName, struct FIKRetargetPose> RetargetPoses; // 0x150(0x50)
	struct FName CurrentRetargetPose; // 0x1a0(0x04)
	char pad_1A4[0x4]; // 0x1a4(0x04)
};

// Class IKRig.IKRetargetProcessor
// Size: 0x2e0 (Inherited: 0x28)
struct UIKRetargetProcessor : UObject {
	char pad_28[0x138]; // 0x28(0x138)
	struct UIKRigProcessor* IKRigProcessor; // 0x160(0x08)
	char pad_168[0x178]; // 0x168(0x178)
};

// Class IKRig.IKRigComponent
// Size: 0xb8 (Inherited: 0xa0)
struct UIKRigComponent : UActorComponent {
	char pad_A0[0x18]; // 0xa0(0x18)

	void SetIKRigGoalTransform(struct FName GoalName, struct FTransform Transform, float PositionAlpha, float RotationAlpha); // Function IKRig.IKRigComponent.SetIKRigGoalTransform // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x6e41af0
	void SetIKRigGoalPositionAndRotation(struct FName GoalName, struct FVector Position, struct FQuat Rotation, float PositionAlpha, float RotationAlpha); // Function IKRig.IKRigComponent.SetIKRigGoalPositionAndRotation // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x6e41948
	void SetIKRigGoal(struct FIKRigGoal& Goal); // Function IKRig.IKRigComponent.SetIKRigGoal // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x6e418ac
	void ClearAllGoals(); // Function IKRig.IKRigComponent.ClearAllGoals // (Final|Native|Public|BlueprintCallable) // @ game+0x6e4187c
};

// Class IKRig.IKRigEffectorGoal
// Size: 0x100 (Inherited: 0x28)
struct UIKRigEffectorGoal : UObject {
	struct FName GoalName; // 0x28(0x04)
	struct FName BoneName; // 0x2c(0x04)
	float PositionAlpha; // 0x30(0x04)
	float RotationAlpha; // 0x34(0x04)
	char pad_38[0x8]; // 0x38(0x08)
	struct FTransform CurrentTransform; // 0x40(0x60)
	struct FTransform InitialTransform; // 0xa0(0x60)
};

// Class IKRig.IKRigDefinition
// Size: 0x100 (Inherited: 0x28)
struct UIKRigDefinition : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct TSoftObjectPtr<USkeletalMesh> PreviewSkeletalMesh; // 0x30(0x28)
	struct FIKRigSkeleton Skeleton; // 0x58(0x70)
	struct TArray<struct UIKRigEffectorGoal*> Goals; // 0xc8(0x10)
	struct TArray<struct UIKRigSolver*> Solvers; // 0xd8(0x10)
	struct FRetargetDefinition RetargetDefinition; // 0xe8(0x18)
};

// Class IKRig.IKGoalCreatorInterface
// Size: 0x28 (Inherited: 0x28)
struct UIKGoalCreatorInterface : UInterface {

	void AddIKGoals(struct TMap<struct FName, struct FIKRigGoal>& OutGoals); // Function IKRig.IKGoalCreatorInterface.AddIKGoals // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x6e41760
};

// Class IKRig.IKRigProcessor
// Size: 0x148 (Inherited: 0x28)
struct UIKRigProcessor : UObject {
	char pad_28[0x38]; // 0x28(0x38)
	struct TArray<struct UIKRigSolver*> Solvers; // 0x60(0x10)
	char pad_70[0xd8]; // 0x70(0xd8)
};

// Class IKRig.IKRigSolver
// Size: 0x28 (Inherited: 0x28)
struct UIKRigSolver : UObject {
};

// Class IKRig.IKRig_BodyMoverEffector
// Size: 0x38 (Inherited: 0x28)
struct UIKRig_BodyMoverEffector : UObject {
	struct FName GoalName; // 0x28(0x04)
	struct FName BoneName; // 0x2c(0x04)
	float InfluenceMultiplier; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// Class IKRig.IKRig_BodyMover
// Size: 0x70 (Inherited: 0x28)
struct UIKRig_BodyMover : UIKRigSolver {
	struct FName RootBone; // 0x28(0x04)
	float PositionAlpha; // 0x2c(0x04)
	float PositionPositiveX; // 0x30(0x04)
	float PositionNegativeX; // 0x34(0x04)
	float PositionPositiveY; // 0x38(0x04)
	float PositionNegativeY; // 0x3c(0x04)
	float PositionPositiveZ; // 0x40(0x04)
	float PositionNegativeZ; // 0x44(0x04)
	float RotationAlpha; // 0x48(0x04)
	float RotateXAlpha; // 0x4c(0x04)
	float RotateYAlpha; // 0x50(0x04)
	float RotateZAlpha; // 0x54(0x04)
	struct TArray<struct UIKRig_BodyMoverEffector*> Effectors; // 0x58(0x10)
	char pad_68[0x8]; // 0x68(0x08)
};

// Class IKRig.IKRig_LimbEffector
// Size: 0x30 (Inherited: 0x28)
struct UIKRig_LimbEffector : UObject {
	struct FName GoalName; // 0x28(0x04)
	struct FName BoneName; // 0x2c(0x04)
};

// Class IKRig.IKRig_LimbSolver
// Size: 0x80 (Inherited: 0x28)
struct UIKRig_LimbSolver : UIKRigSolver {
	struct FName RootName; // 0x28(0x04)
	float ReachPrecision; // 0x2c(0x04)
	enum class EAxis HingeRotationAxis; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	int32_t MaxIterations; // 0x34(0x04)
	bool bEnableLimit; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	float MinRotationAngle; // 0x3c(0x04)
	bool bAveragePull; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	float PullDistribution; // 0x44(0x04)
	float ReachStepAlpha; // 0x48(0x04)
	bool bEnableTwistCorrection; // 0x4c(0x01)
	enum class EAxis EndBoneForwardAxis; // 0x4d(0x01)
	char pad_4E[0x2]; // 0x4e(0x02)
	struct UIKRig_LimbEffector* Effector; // 0x50(0x08)
	char pad_58[0x28]; // 0x58(0x28)
};

// Class IKRig.IKRig_FBIKEffector
// Size: 0x40 (Inherited: 0x28)
struct UIKRig_FBIKEffector : UObject {
	struct FName GoalName; // 0x28(0x04)
	struct FName BoneName; // 0x2c(0x04)
	float StrengthAlpha; // 0x30(0x04)
	float PullChainAlpha; // 0x34(0x04)
	float PinRotation; // 0x38(0x04)
	int32_t IndexInSolver; // 0x3c(0x04)
};

// Class IKRig.IKRig_PBIKBoneSettings
// Size: 0x78 (Inherited: 0x28)
struct UIKRig_PBIKBoneSettings : UObject {
	struct FName bone; // 0x28(0x04)
	float RotationStiffness; // 0x2c(0x04)
	float PositionStiffness; // 0x30(0x04)
	enum class EPBIKLimitType X; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	float MinX; // 0x38(0x04)
	float MaxX; // 0x3c(0x04)
	enum class EPBIKLimitType Y; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	float MinY; // 0x44(0x04)
	float MaxY; // 0x48(0x04)
	enum class EPBIKLimitType Z; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	float MinZ; // 0x50(0x04)
	float MaxZ; // 0x54(0x04)
	bool bUsePreferredAngles; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
	struct FVector PreferredAngles; // 0x60(0x18)
};

// Class IKRig.IKRigPBIKSolver
// Size: 0xc8 (Inherited: 0x28)
struct UIKRigPBIKSolver : UIKRigSolver {
	struct FName RootBone; // 0x28(0x04)
	int32_t Iterations; // 0x2c(0x04)
	float MassMultiplier; // 0x30(0x04)
	float MinMassMultiplier; // 0x34(0x04)
	bool bAllowStretch; // 0x38(0x01)
	enum class EPBIKRootBehavior RootBehavior; // 0x39(0x01)
	bool bStartSolveFromInputPose; // 0x3a(0x01)
	char pad_3B[0x5]; // 0x3b(0x05)
	struct TArray<struct UIKRig_FBIKEffector*> Effectors; // 0x40(0x10)
	struct TArray<struct UIKRig_PBIKBoneSettings*> BoneSettings; // 0x50(0x10)
	char pad_60[0x68]; // 0x60(0x68)
};

// Class IKRig.IKRig_PoleSolverEffector
// Size: 0x38 (Inherited: 0x28)
struct UIKRig_PoleSolverEffector : UObject {
	struct FName GoalName; // 0x28(0x04)
	struct FName BoneName; // 0x2c(0x04)
	float Alpha; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// Class IKRig.IKRig_PoleSolver
// Size: 0x58 (Inherited: 0x28)
struct UIKRig_PoleSolver : UIKRigSolver {
	struct FName RootName; // 0x28(0x04)
	struct FName EndName; // 0x2c(0x04)
	struct UIKRig_PoleSolverEffector* Effector; // 0x30(0x08)
	char pad_38[0x20]; // 0x38(0x20)
};

// Class IKRig.IKRig_SetTransformEffector
// Size: 0x30 (Inherited: 0x28)
struct UIKRig_SetTransformEffector : UObject {
	bool bEnablePosition; // 0x28(0x01)
	bool bEnableRotation; // 0x29(0x01)
	char pad_2A[0x2]; // 0x2a(0x02)
	float Alpha; // 0x2c(0x04)
};

// Class IKRig.IKRig_SetTransform
// Size: 0x40 (Inherited: 0x28)
struct UIKRig_SetTransform : UIKRigSolver {
	struct FName Goal; // 0x28(0x04)
	struct FName RootBone; // 0x2c(0x04)
	struct UIKRig_SetTransformEffector* Effector; // 0x30(0x08)
	char pad_38[0x8]; // 0x38(0x08)
};

