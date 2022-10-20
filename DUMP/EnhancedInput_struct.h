// Enum EnhancedInput.EInputMappingRebuildType
enum class EInputMappingRebuildType : uint8 {
	None = 0,
	Rebuild = 1,
	RebuildWithFlush = 2,
	EInputMappingRebuildType_MAX = 3
};

// Enum EnhancedInput.EInputActionValueType
enum class EInputActionValueType : uint8 {
	Boolean = 0,
	Axis1D = 1,
	Axis2D = 2,
	Axis3D = 3,
	EInputActionValueType_MAX = 4
};

// Enum EnhancedInput.EMappingQueryResult
enum class EMappingQueryResult : uint8 {
	Error_EnhancedInputNotEnabled = 0,
	Error_InputContextNotInActiveContexts = 1,
	Error_InvalidAction = 2,
	NotMappable = 3,
	MappingAvailable = 4,
	EMappingQueryResult_MAX = 5
};

// Enum EnhancedInput.EMappingQueryIssue
enum class EMappingQueryIssue : uint8 {
	NoIssue = 0,
	ReservedByAction = 1,
	HidesExistingMapping = 2,
	HiddenByExistingMapping = 4,
	CollisionWithMappingInSameContext = 8,
	ForcesTypePromotion = 16,
	ForcesTypeDemotion = 32,
	EMappingQueryIssue_MAX = 33
};

// Enum EnhancedInput.EModifierExecutionPhase
enum class EModifierExecutionPhase : uint8 {
	PerInput = 0,
	FinalValue = 1,
	NumPhases = 2,
	EModifierExecutionPhase_MAX = 3
};

// Enum EnhancedInput.EDeadZoneType
enum class EDeadZoneType : uint8 {
	Axial = 0,
	Radial = 1,
	EDeadZoneType_MAX = 2
};

// Enum EnhancedInput.EFOVScalingType
enum class EFOVScalingType : uint8 {
	Standard = 0,
	UE4_BackCompat = 1,
	EFOVScalingType_MAX = 2
};

// Enum EnhancedInput.EInputAxisSwizzle
enum class EInputAxisSwizzle : uint8 {
	YXZ = 0,
	ZYX = 1,
	XZY = 2,
	YZX = 3,
	ZXY = 4,
	EInputAxisSwizzle_MAX = 5
};

// Enum EnhancedInput.ETriggerState
enum class ETriggerState : uint8 {
	None = 0,
	Ongoing = 1,
	Triggered = 2,
	ETriggerState_MAX = 3
};

// Enum EnhancedInput.ETriggerEvent
enum class ETriggerEvent : uint8 {
	None = 0,
	Triggered = 1,
	Started = 2,
	Ongoing = 3,
	Canceled = 4,
	Completed = 5,
	ETriggerEvent_MAX = 6
};

// Enum EnhancedInput.ETriggerType
enum class ETriggerType : uint8 {
	Explicit = 0,
	Implicit = 1,
	Blocker = 2,
	ETriggerType_MAX = 3
};

// Enum EnhancedInput.ETriggerEventsSupported
enum class ETriggerEventsSupported : uint8 {
	None = 0,
	Instant = 1,
	Uninterruptible = 2,
	Ongoing = 4,
	All = 7,
	ETriggerEventsSupported_MAX = 8
};

// ScriptStruct EnhancedInput.InputActionValue
// Size: 0x20 (Inherited: 0x00)
struct FInputActionValue {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct EnhancedInput.PlayerMappableKeyOptions
// Size: 0x40 (Inherited: 0x00)
struct FPlayerMappableKeyOptions {
	struct UObject* MetaData; // 0x00(0x08)
	struct FName Name; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FText DisplayName; // 0x10(0x18)
	struct FText DisplayCategory; // 0x28(0x18)
};

// ScriptStruct EnhancedInput.EnhancedActionKeyMapping
// Size: 0x90 (Inherited: 0x00)
struct FEnhancedActionKeyMapping {
	struct UInputAction* Action; // 0x00(0x08)
	struct FKey Key; // 0x08(0x18)
	char bIsPlayerMappable : 1; // 0x20(0x01)
	char pad_20_1 : 7; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct FPlayerMappableKeyOptions PlayerMappableOptions; // 0x28(0x40)
	char bShouldBeIgnored : 1; // 0x68(0x01)
	char pad_68_1 : 7; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
	struct TArray<struct UInputTrigger*> Triggers; // 0x70(0x10)
	struct TArray<struct UInputModifier*> Modifiers; // 0x80(0x10)
};

// ScriptStruct EnhancedInput.BlueprintEnhancedInputActionBinding
// Size: 0x10 (Inherited: 0x00)
struct FBlueprintEnhancedInputActionBinding {
	struct UInputAction* InputAction; // 0x00(0x08)
	enum class ETriggerEvent TriggerEvent; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	struct FName FunctionNameToBind; // 0x0c(0x04)
};

// ScriptStruct EnhancedInput.ModifyContextOptions
// Size: 0x01 (Inherited: 0x00)
struct FModifyContextOptions {
	char bIgnoreAllPressedKeysUntilRelease : 1; // 0x00(0x01)
	char bForceImmediately : 1; // 0x00(0x01)
	char pad_0_2 : 6; // 0x00(0x01)
};

// ScriptStruct EnhancedInput.InputActionInstance
// Size: 0x88 (Inherited: 0x00)
struct FInputActionInstance {
	struct UInputAction* SourceAction; // 0x00(0x08)
	char pad_8[0x10]; // 0x08(0x10)
	struct TArray<struct UInputTrigger*> Triggers; // 0x18(0x10)
	struct TArray<struct UInputModifier*> Modifiers; // 0x28(0x10)
	struct TArray<struct UInputModifier*> PerInputModifiers; // 0x38(0x10)
	struct TArray<struct UInputModifier*> FinalValueModifiers; // 0x48(0x10)
	char pad_58[0x20]; // 0x58(0x20)
	float ElapsedProcessedTime; // 0x78(0x04)
	float ElapsedTriggeredTime; // 0x7c(0x04)
	float LastTriggeredWorldTime; // 0x80(0x04)
	enum class ETriggerEvent TriggerEvent; // 0x84(0x01)
	char pad_85[0x3]; // 0x85(0x03)
};

// ScriptStruct EnhancedInput.BlueprintInputDebugKeyDelegateBinding
// Size: 0x30 (Inherited: 0x00)
struct FBlueprintInputDebugKeyDelegateBinding {
	struct FInputChord InputChord; // 0x00(0x20)
	enum class EInputEvent InputKeyEvent; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	struct FName FunctionNameToBind; // 0x24(0x04)
	bool bExecuteWhenPaused; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct EnhancedInput.MappingQueryIssue
// Size: 0x18 (Inherited: 0x00)
struct FMappingQueryIssue {
	enum class EMappingQueryIssue Issue; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UInputMappingContext* BlockingContext; // 0x08(0x08)
	struct UInputAction* BlockingAction; // 0x10(0x08)
};

// ScriptStruct EnhancedInput.InputComboStepData
// Size: 0x10 (Inherited: 0x00)
struct FInputComboStepData {
	struct UInputAction* ComboStepAction; // 0x00(0x08)
	float TimeToPressKey; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

