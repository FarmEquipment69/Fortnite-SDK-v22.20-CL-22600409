// Enum IKRig.ERetargetTranslationMode
enum class ERetargetTranslationMode : uint8 {
	None = 0,
	GloballyScaled = 1,
	Absolute = 2,
	ERetargetTranslationMode_MAX = 3
};

// Enum IKRig.ERetargetRotationMode
enum class ERetargetRotationMode : uint8 {
	Interpolated = 0,
	OneToOne = 1,
	OneToOneReversed = 2,
	None = 3,
	ERetargetRotationMode_MAX = 4
};

// Enum IKRig.EIKRigGoalSpace
enum class EIKRigGoalSpace : uint8 {
	Component = 0,
	Additive = 1,
	World = 2,
	EIKRigGoalSpace_MAX = 3
};

// Enum IKRig.EIKRigGoalTransformSource
enum class EIKRigGoalTransformSource : uint8 {
	Manual = 0,
	Bone = 1,
	ActorComponent = 2,
	EIKRigGoalTransformSource_MAX = 3
};

// ScriptStruct IKRig.AnimNode_IKRig
// Size: 0x1e0 (Inherited: 0x58)
struct FAnimNode_IKRig : FAnimNode_CustomProperty {
	struct FPoseLink Source; // 0x58(0x10)
	struct UIKRigDefinition* RigDefinitionAsset; // 0x68(0x08)
	struct TArray<struct FIKRigGoal> Goals; // 0x70(0x10)
	bool bStartFromRefPose; // 0x80(0x01)
	enum class EAnimAlphaInputType AlphaInputType; // 0x81(0x01)
	bool bAlphaBoolEnabled; // 0x82(0x01)
	char pad_83[0x1]; // 0x83(0x01)
	float Alpha; // 0x84(0x04)
	struct FInputScaleBias AlphaScaleBias; // 0x88(0x08)
	struct FInputAlphaBoolBlend AlphaBoolBlend; // 0x90(0x48)
	struct FName AlphaCurveName; // 0xd8(0x04)
	struct FInputScaleBiasClamp AlphaScaleBiasClamp; // 0xdc(0x30)
	char pad_10C[0x4]; // 0x10c(0x04)
	struct UIKRigProcessor* IKRigProcessor; // 0x110(0x08)
	char pad_118[0xc0]; // 0x118(0xc0)
	float ActualAlpha; // 0x1d8(0x04)
	char pad_1DC[0x4]; // 0x1dc(0x04)
};

// ScriptStruct IKRig.IKRigGoal
// Size: 0x90 (Inherited: 0x00)
struct FIKRigGoal {
	struct FName Name; // 0x00(0x04)
	enum class EIKRigGoalTransformSource TransformSource; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct FBoneReference SourceBone; // 0x08(0x0c)
	char pad_14[0x4]; // 0x14(0x04)
	struct FVector Position; // 0x18(0x18)
	struct FRotator Rotation; // 0x30(0x18)
	float PositionAlpha; // 0x48(0x04)
	float RotationAlpha; // 0x4c(0x04)
	enum class EIKRigGoalSpace PositionSpace; // 0x50(0x01)
	enum class EIKRigGoalSpace RotationSpace; // 0x51(0x01)
	char pad_52[0x6]; // 0x52(0x06)
	struct FVector FinalBlendedPosition; // 0x58(0x18)
	struct FQuat FinalBlendedRotation; // 0x70(0x20)
};

// ScriptStruct IKRig.AnimNode_RetargetPoseFromMesh
// Size: 0x150 (Inherited: 0x10)
struct FAnimNode_RetargetPoseFromMesh : FAnimNode_Base {
	struct TWeakObjectPtr<struct USkeletalMeshComponent> SourceMeshComponent; // 0x10(0x08)
	bool bUseAttachedParent; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct UIKRetargeter* IKRetargeterAsset; // 0x20(0x08)
	bool bSuppressWarnings; // 0x28(0x01)
	bool bCopyCurves; // 0x29(0x01)
	char pad_2A[0x6]; // 0x2a(0x06)
	struct UIKRetargetProcessor* Processor; // 0x30(0x08)
	char pad_38[0x118]; // 0x38(0x118)
};

// ScriptStruct IKRig.RetargetChainMap
// Size: 0x08 (Inherited: 0x00)
struct FRetargetChainMap {
	struct FName SourceChain; // 0x00(0x04)
	struct FName TargetChain; // 0x04(0x04)
};

// ScriptStruct IKRig.IKRetargetPose
// Size: 0x68 (Inherited: 0x00)
struct FIKRetargetPose {
	struct FVector RootTranslationOffset; // 0x00(0x18)
	struct TMap<struct FName, struct FQuat> BoneRotationOffsets; // 0x18(0x50)
};

// ScriptStruct IKRig.IKRigGoalContainer
// Size: 0x10 (Inherited: 0x00)
struct FIKRigGoalContainer {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct IKRig.BoneChain
// Size: 0x20 (Inherited: 0x00)
struct FBoneChain {
	struct FName ChainName; // 0x00(0x04)
	struct FBoneReference StartBone; // 0x04(0x0c)
	struct FBoneReference EndBone; // 0x10(0x0c)
	struct FName IKGoalName; // 0x1c(0x04)
};

// ScriptStruct IKRig.RetargetDefinition
// Size: 0x18 (Inherited: 0x00)
struct FRetargetDefinition {
	struct FName RootBone; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FBoneChain> BoneChains; // 0x08(0x10)
};

// ScriptStruct IKRig.GoalBone
// Size: 0x0c (Inherited: 0x00)
struct FGoalBone {
	char pad_0[0xc]; // 0x00(0x0c)
};

// ScriptStruct IKRig.IKRigSkeletonChain
// Size: 0x08 (Inherited: 0x00)
struct FIKRigSkeletonChain {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct IKRig.IKRigInputSkeleton
// Size: 0x38 (Inherited: 0x00)
struct FIKRigInputSkeleton {
	char pad_0[0x38]; // 0x00(0x38)
};

// ScriptStruct IKRig.IKRigSkeleton
// Size: 0x70 (Inherited: 0x00)
struct FIKRigSkeleton {
	struct TArray<struct FName> BoneNames; // 0x00(0x10)
	struct TArray<int32_t> ParentIndices; // 0x10(0x10)
	struct TArray<struct FName> ExcludedBones; // 0x20(0x10)
	struct TArray<struct FTransform> CurrentPoseGlobal; // 0x30(0x10)
	struct TArray<struct FTransform> CurrentPoseLocal; // 0x40(0x10)
	struct TArray<struct FTransform> RefPoseGlobal; // 0x50(0x10)
	char pad_60[0x10]; // 0x60(0x10)
};

// ScriptStruct IKRig.LimbSolverSettings
// Size: 0x24 (Inherited: 0x00)
struct FLimbSolverSettings {
	float ReachPrecision; // 0x00(0x04)
	enum class EAxis HingeRotationAxis; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	int32_t MaxIterations; // 0x08(0x04)
	bool bEnableLimit; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	float MinRotationAngle; // 0x10(0x04)
	bool bAveragePull; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	float PullDistribution; // 0x18(0x04)
	float ReachStepAlpha; // 0x1c(0x04)
	bool bEnableTwistCorrection; // 0x20(0x01)
	enum class EAxis EndBoneForwardAxis; // 0x21(0x01)
	char pad_22[0x2]; // 0x22(0x02)
};

// ScriptStruct IKRig.LimbLink
// Size: 0x68 (Inherited: 0x00)
struct FLimbLink {
	char pad_0[0x68]; // 0x00(0x68)
};

// ScriptStruct IKRig.LimbSolver
// Size: 0x18 (Inherited: 0x00)
struct FLimbSolver {
	char pad_0[0x18]; // 0x00(0x18)
};

