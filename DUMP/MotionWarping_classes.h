// Class MotionWarping.AnimNotifyState_MotionWarping
// Size: 0x38 (Inherited: 0x30)
struct UAnimNotifyState_MotionWarping : UAnimNotifyState {
	struct URootMotionModifier* RootMotionModifier; // 0x30(0x08)

	void OnWarpUpdate(struct UMotionWarpingComponent* MotionWarpingComp, struct URootMotionModifier* Modifier); // Function MotionWarping.AnimNotifyState_MotionWarping.OnWarpUpdate // (Event|Public|BlueprintEvent|Const) // @ game+0xd67374
	void OnWarpEnd(struct UMotionWarpingComponent* MotionWarpingComp, struct URootMotionModifier* Modifier); // Function MotionWarping.AnimNotifyState_MotionWarping.OnWarpEnd // (Event|Public|BlueprintEvent|Const) // @ game+0xd67374
	void OnWarpBegin(struct UMotionWarpingComponent* MotionWarpingComp, struct URootMotionModifier* Modifier); // Function MotionWarping.AnimNotifyState_MotionWarping.OnWarpBegin // (Event|Public|BlueprintEvent|Const) // @ game+0xd67374
	void OnRootMotionModifierUpdate(struct UMotionWarpingComponent* MotionWarpingComp, struct URootMotionModifier* Modifier); // Function MotionWarping.AnimNotifyState_MotionWarping.OnRootMotionModifierUpdate // (Final|Native|Public|Const) // @ game+0x7128ee4
	void OnRootMotionModifierDeactivate(struct UMotionWarpingComponent* MotionWarpingComp, struct URootMotionModifier* Modifier); // Function MotionWarping.AnimNotifyState_MotionWarping.OnRootMotionModifierDeactivate // (Final|Native|Public|Const) // @ game+0x7128e20
	void OnRootMotionModifierActivate(struct UMotionWarpingComponent* MotionWarpingComp, struct URootMotionModifier* Modifier); // Function MotionWarping.AnimNotifyState_MotionWarping.OnRootMotionModifierActivate // (Final|Native|Public|Const) // @ game+0x7128d34
	struct URootMotionModifier* AddRootMotionModifier(struct UMotionWarpingComponent* MotionWarpingComp, struct UAnimSequenceBase* Animation, float StartTime, float EndTime); // Function MotionWarping.AnimNotifyState_MotionWarping.AddRootMotionModifier // (Native|Event|Public|BlueprintEvent|Const) // @ game+0x7127c68
};

// Class MotionWarping.MotionWarpingUtilities
// Size: 0x28 (Inherited: 0x28)
struct UMotionWarpingUtilities : UBlueprintFunctionLibrary {

	void GetMotionWarpingWindowsFromAnimation(struct UAnimSequenceBase* Animation, struct TArray<struct FMotionWarpingWindowData>& OutWindows); // Function MotionWarping.MotionWarpingUtilities.GetMotionWarpingWindowsFromAnimation // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x7128ad0
	void GetMotionWarpingWindowsForWarpTargetFromAnimation(struct UAnimSequenceBase* Animation, struct FName WarpTargetName, struct TArray<struct FMotionWarpingWindowData>& OutWindows); // Function MotionWarping.MotionWarpingUtilities.GetMotionWarpingWindowsForWarpTargetFromAnimation // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x7128784
	struct FTransform ExtractRootMotionFromAnimation(struct UAnimSequenceBase* Animation, float StartTime, float EndTime); // Function MotionWarping.MotionWarpingUtilities.ExtractRootMotionFromAnimation // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x7128654
};

// Class MotionWarping.MotionWarpingComponent
// Size: 0xe0 (Inherited: 0xa0)
struct UMotionWarpingComponent : UActorComponent {
	bool bSearchForWindowsInAnimsWithinMontages; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
	struct FMulticastInlineDelegate OnPreUpdate; // 0xa8(0x10)
	struct TWeakObjectPtr<struct ACharacter> CharacterOwner; // 0xb8(0x08)
	struct TArray<struct URootMotionModifier*> Modifiers; // 0xc0(0x10)
	struct TArray<struct FMotionWarpingTarget> WarpTargets; // 0xd0(0x10)

	int32_t RemoveWarpTarget(struct FName WarpTargetName); // Function MotionWarping.MotionWarpingComponent.RemoveWarpTarget // (Final|Native|Public|BlueprintCallable) // @ game+0x7128fd0
	void DisableAllRootMotionModifiers(); // Function MotionWarping.MotionWarpingComponent.DisableAllRootMotionModifiers // (Final|Native|Public|BlueprintCallable) // @ game+0x7128600
	void AddOrUpdateWarpTargetFromTransform(struct FName WarpTargetName, struct FTransform TargetTransform); // Function MotionWarping.MotionWarpingComponent.AddOrUpdateWarpTargetFromTransform // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x7127af8
	void AddOrUpdateWarpTargetFromLocationAndRotation(struct FName WarpTargetName, struct FVector TargetLocation, struct FRotator TargetRotation); // Function MotionWarping.MotionWarpingComponent.AddOrUpdateWarpTargetFromLocationAndRotation // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x71279cc
	void AddOrUpdateWarpTargetFromLocation(struct FName WarpTargetName, struct FVector TargetLocation); // Function MotionWarping.MotionWarpingComponent.AddOrUpdateWarpTargetFromLocation // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x71278bc
	void AddOrUpdateWarpTargetFromComponent(struct FName WarpTargetName, struct USceneComponent* Component, struct FName BoneName, bool bFollowComponent); // Function MotionWarping.MotionWarpingComponent.AddOrUpdateWarpTargetFromComponent // (Final|Native|Public|BlueprintCallable) // @ game+0x71275d4
	void AddOrUpdateWarpTarget(struct FMotionWarpingTarget& WarpTarget); // Function MotionWarping.MotionWarpingComponent.AddOrUpdateWarpTarget // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7127504
};

// Class MotionWarping.RootMotionModifier
// Size: 0xe0 (Inherited: 0x28)
struct URootMotionModifier : UObject {
	struct TWeakObjectPtr<struct UAnimSequenceBase> Animation; // 0x28(0x08)
	float StartTime; // 0x30(0x04)
	float EndTime; // 0x34(0x04)
	float PreviousPosition; // 0x38(0x04)
	float CurrentPosition; // 0x3c(0x04)
	float Weight; // 0x40(0x04)
	char pad_44[0xc]; // 0x44(0x0c)
	struct FTransform StartTransform; // 0x50(0x60)
	float ActualStartTime; // 0xb0(0x04)
	struct FDelegate OnActivateDelegate; // 0xb4(0x0c)
	struct FDelegate OnUpdateDelegate; // 0xc0(0x0c)
	struct FDelegate OnDeactivateDelegate; // 0xcc(0x0c)
	enum class ERootMotionModifierState State; // 0xd8(0x01)
	char pad_D9[0x7]; // 0xd9(0x07)
};

// Class MotionWarping.RootMotionModifier_Warp
// Size: 0x240 (Inherited: 0xe0)
struct URootMotionModifier_Warp : URootMotionModifier {
	struct FName WarpTargetName; // 0xe0(0x04)
	enum class EWarpPointAnimProvider WarpPointAnimProvider; // 0xe4(0x01)
	char pad_E5[0xb]; // 0xe5(0x0b)
	struct FTransform WarpPointAnimTransform; // 0xf0(0x60)
	struct FName WarpPointAnimBoneName; // 0x150(0x04)
	bool bWarpTranslation; // 0x154(0x01)
	bool bIgnoreZAxis; // 0x155(0x01)
	enum class EAlphaBlendOption AddTranslationEasingFunc; // 0x156(0x01)
	char pad_157[0x1]; // 0x157(0x01)
	struct UCurveFloat* AddTranslationEasingCurve; // 0x158(0x08)
	bool bWarpRotation; // 0x160(0x01)
	enum class EMotionWarpRotationType RotationType; // 0x161(0x01)
	char pad_162[0x2]; // 0x162(0x02)
	float WarpRotationTimeMultiplier; // 0x164(0x04)
	char pad_168[0x8]; // 0x168(0x08)
	struct FTransform CachedTargetTransform; // 0x170(0x60)
	char pad_1D0[0x70]; // 0x1d0(0x70)
};

// Class MotionWarping.RootMotionModifier_SimpleWarp
// Size: 0x240 (Inherited: 0x240)
struct URootMotionModifier_SimpleWarp : URootMotionModifier_Warp {
};

// Class MotionWarping.RootMotionModifier_Scale
// Size: 0x100 (Inherited: 0xe0)
struct URootMotionModifier_Scale : URootMotionModifier {
	struct FVector Scale; // 0xe0(0x18)
	char pad_F8[0x8]; // 0xf8(0x08)

	struct URootMotionModifier_Scale* AddRootMotionModifierScale(struct UMotionWarpingComponent* InMotionWarpingComp, struct UAnimSequenceBase* InAnimation, float InStartTime, float InEndTime, struct FVector InScale); // Function MotionWarping.RootMotionModifier_Scale.AddRootMotionModifierScale // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x7127db0
};

// Class MotionWarping.RootMotionModifier_AdjustmentBlendWarp
// Size: 0x3a0 (Inherited: 0x240)
struct URootMotionModifier_AdjustmentBlendWarp : URootMotionModifier_Warp {
	bool bWarpIKBones; // 0x240(0x01)
	char pad_241[0x7]; // 0x241(0x07)
	struct TArray<struct FName> IKBones; // 0x248(0x10)
	char pad_258[0x8]; // 0x258(0x08)
	struct FTransform CachedMeshTransform; // 0x260(0x60)
	struct FTransform CachedMeshRelativeTransform; // 0x2c0(0x60)
	struct FTransform CachedRootMotion; // 0x320(0x60)
	struct FAnimSequenceTrackContainer Result; // 0x380(0x20)
};

// Class MotionWarping.RootMotionModifier_SkewWarp
// Size: 0x240 (Inherited: 0x240)
struct URootMotionModifier_SkewWarp : URootMotionModifier_Warp {

	struct URootMotionModifier_SkewWarp* AddRootMotionModifierSkewWarp(struct UMotionWarpingComponent* InMotionWarpingComp, struct UAnimSequenceBase* InAnimation, float InStartTime, float InEndTime, struct FName InWarpTargetName, enum class EWarpPointAnimProvider InWarpPointAnimProvider, struct FTransform InWarpPointAnimTransform, struct FName InWarpPointAnimBoneName, bool bInWarpTranslation, bool bInIgnoreZAxis, bool bInWarpRotation, enum class EMotionWarpRotationType InRotationType, float InWarpRotationTimeMultiplier); // Function MotionWarping.RootMotionModifier_SkewWarp.AddRootMotionModifierSkewWarp // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x7128020
};

