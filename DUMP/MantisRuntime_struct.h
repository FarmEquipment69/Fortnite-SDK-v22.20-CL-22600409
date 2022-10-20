// Enum MantisRuntime.EFortMantisTechniqueActivationInputType
enum class EFortMantisTechniqueActivationInputType : uint8 {
	None = 0,
	Primary = 1,
	Secondary = 2,
	Max_Invalid = 3,
	EFortMantisTechniqueActivationInputType_MAX = 4
};

// Enum MantisRuntime.EFortMantisNotifyEvent
enum class EFortMantisNotifyEvent : uint8 {
	Invalid = 0,
	Branch = 1,
	EFortMantisNotifyEvent_MAX = 2
};

// Enum MantisRuntime.EFortMantisNotifyWindow
enum class EFortMantisNotifyWindow : uint8 {
	Invalid = 0,
	Input = 1,
	Execution = 2,
	Damage = 3,
	RootMotionWarp = 4,
	EFortMantisNotifyWindow_MAX = 5
};

// Enum MantisRuntime.EFortMantisNotifyRotationWarpRateRule
enum class EFortMantisNotifyRotationWarpRateRule : uint8 {
	Snap = 0,
	WindowDurationLerp = 1,
	EFortMantisNotifyRotationWarpRateRule_MAX = 2
};

// Enum MantisRuntime.EFortMantisBranchRule
enum class EFortMantisBranchRule : uint8 {
	Off = 0,
	Any = 1,
	Starter = 2,
	EFortMantisBranchRule_MAX = 3
};

// Enum MantisRuntime.EFortMantisBranchPath
enum class EFortMantisBranchPath : uint8 {
	Default = 0,
	 = 1,
	 = 2,
	 = 3,
	 = 4,
	 = 5,
	Blocked = 6,
	EFortMantisBranchPath_MAX = 7
};

// ScriptStruct MantisRuntime.FortRootMotionSource_Mantis
// Size: 0x160 (Inherited: 0xe0)
struct FFortRootMotionSource_Mantis : FRootMotionSource {
	float CurrentTechniqueTime; // 0xd8(0x04)
	struct UAnimMontage* TechniqueMontage; // 0xe0(0x08)
	struct FFortMantisRootMotionWarpInfo WarpInfo; // 0xe8(0x28)
	struct FVector LatestRepMovementLocation; // 0x110(0x18)
	char pad_12C[0x34]; // 0x12c(0x34)
};

// ScriptStruct MantisRuntime.FortMantisRootMotionWarpInfo
// Size: 0x28 (Inherited: 0x00)
struct FFortMantisRootMotionWarpInfo {
	struct AActor* WarpTarget; // 0x00(0x08)
	char pad_8[0x20]; // 0x08(0x20)
};

// ScriptStruct MantisRuntime.FortMantisTargetData
// Size: 0x38 (Inherited: 0x08)
struct FFortMantisTargetData : FGameplayAbilityTargetData {
	struct FFortMantisRootMotionWarpInfo TechniqueWarpInfo; // 0x08(0x28)
	int32_t TechniqueDataIndex; // 0x30(0x04)
	bool bIsLockedOn; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
};

// ScriptStruct MantisRuntime.FortMantisTechniqueData
// Size: 0xd8 (Inherited: 0x00)
struct FFortMantisTechniqueData {
	struct FName Name; // 0x00(0x04)
	bool bStartsSequence; // 0x04(0x01)
	bool bEndsSequence; // 0x05(0x01)
	char pad_6[0x2]; // 0x06(0x02)
	float InputWindowDelay; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UAnimMontage* Montage; // 0x10(0x08)
	struct FGameplayTagContainer ActivationGameplayCues; // 0x18(0x20)
	bool bUseRootMotion; // 0x38(0x01)
	enum class EFortMantisTechniqueActivationInputType ActivationInputType; // 0x39(0x01)
	char pad_3A[0x6]; // 0x3a(0x06)
	struct FGameplayTagQuery ActivationTagQuery; // 0x40(0x48)
	struct FGameplayTagQuery OngoingTagQuery; // 0x88(0x48)
	struct FGameplayTag ApplicationTag; // 0xd0(0x04)
	char pad_D4[0x4]; // 0xd4(0x04)
};

// ScriptStruct MantisRuntime.FortMantisTechniqueBranch
// Size: 0x0c (Inherited: 0x00)
struct FFortMantisTechniqueBranch {
	struct FName FromTechnique; // 0x00(0x04)
	struct FName ToTechnique; // 0x04(0x04)
	enum class EFortMantisBranchPath BranchPath; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct MantisRuntime.FortMantisMontageData
// Size: 0x18 (Inherited: 0x00)
struct FFortMantisMontageData {
	struct UAnimMontage* Montage; // 0x00(0x08)
	char pad_8[0x10]; // 0x08(0x10)
};

