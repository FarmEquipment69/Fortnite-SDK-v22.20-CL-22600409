// Enum StateTreeModule.ECooldownGuardActivation
enum class ECooldownGuardActivation : uint8 {
	OnEnterState = 0,
	OnCompleted = 1,
	OnFailed = 2,
	OnSucceeded = 3,
	ECooldownGuardActivation_MAX = 4
};

// Enum StateTreeModule.ESelectionGuardActivation
enum class ESelectionGuardActivation : uint8 {
	OnEnterState = 0,
	OnCompleted = 1,
	OnFailed = 2,
	OnSucceeded = 3,
	ESelectionGuardActivation_MAX = 4
};

// Enum StateTreeModule.EStateTreeLoopEvents
enum class EStateTreeLoopEvents : uint8 {
	Next = 0,
	Break = 1,
	EStateTreeLoopEvents_MAX = 2
};

// Enum StateTreeModule.EStateTreeStorage
enum class EStateTreeStorage : uint8 {
	Internal = 0,
	External = 1,
	EStateTreeStorage_MAX = 2
};

// Enum StateTreeModule.EStateTreeLinkerStatus
enum class EStateTreeLinkerStatus : uint8 {
	Succeeded = 0,
	Failed = 1,
	EStateTreeLinkerStatus_MAX = 2
};

// Enum StateTreeModule.EStateTreeBlueprintPropertyCategory
enum class EStateTreeBlueprintPropertyCategory : uint8 {
	NotSet = 0,
	Input = 1,
	Parameter = 2,
	Output = 3,
	ExternalData = 4,
	EStateTreeBlueprintPropertyCategory_MAX = 5
};

// Enum StateTreeModule.EStateTreeBindableStructSource
enum class EStateTreeBindableStructSource : uint8 {
	TreeData = 0,
	TreeParameter = 1,
	StateParameter = 2,
	Task = 3,
	Evaluator = 4,
	Condition = 5,
	EStateTreeBindableStructSource_MAX = 6
};

// Enum StateTreeModule.EStateTreePropertyAccessType
enum class EStateTreePropertyAccessType : uint8 {
	Offset = 0,
	Object = 1,
	WeakObject = 2,
	SoftObject = 3,
	IndexArray = 4,
	EStateTreePropertyAccessType_MAX = 5
};

// Enum StateTreeModule.EStateTreePropertyCopyType
enum class EStateTreePropertyCopyType : uint8 {
	None = 0,
	CopyPlain = 1,
	CopyComplex = 2,
	CopyBool = 3,
	CopyStruct = 4,
	CopyObject = 5,
	CopyName = 6,
	CopyFixedArray = 7,
	StructReference = 8,
	PromoteBoolToByte = 9,
	PromoteBoolToInt32 = 10,
	PromoteBoolToUInt32 = 11,
	PromoteBoolToInt64 = 12,
	PromoteBoolToFloat = 13,
	PromoteBoolToDouble = 14,
	PromoteByteToInt32 = 15,
	PromoteByteToUInt32 = 16,
	PromoteByteToInt64 = 17,
	PromoteByteToFloat = 18,
	PromoteByteToDouble = 19,
	PromoteInt32ToInt64 = 20,
	PromoteInt32ToFloat = 21,
	PromoteInt32ToDouble = 22,
	PromoteUInt32ToInt64 = 23,
	PromoteUInt32ToFloat = 24,
	PromoteUInt32ToDouble = 25,
	PromoteFloatToInt32 = 26,
	PromoteFloatToInt64 = 27,
	PromoteFloatToDouble = 28,
	DemoteDoubleToInt32 = 29,
	DemoteDoubleToInt64 = 30,
	DemoteDoubleToFloat = 31,
	EStateTreePropertyCopyType_MAX = 32
};

// Enum StateTreeModule.EStateTreeRunStatus
enum class EStateTreeRunStatus : uint8 {
	Running = 0,
	Failed = 1,
	Succeeded = 2,
	Unset = 3,
	EStateTreeRunStatus_MAX = 4
};

// Enum StateTreeModule.EStateTreeEvaluationType
enum class EStateTreeEvaluationType : uint8 {
	PreSelect = 0,
	Tick = 1,
	EStateTreeEvaluationType_MAX = 2
};

// Enum StateTreeModule.EStateTreeStateChangeType
enum class EStateTreeStateChangeType : uint8 {
	None = 0,
	Changed = 1,
	Sustained = 2,
	EStateTreeStateChangeType_MAX = 3
};

// Enum StateTreeModule.EStateTreeTransitionType
enum class EStateTreeTransitionType : uint8 {
	Succeeded = 0,
	Failed = 1,
	GotoState = 2,
	NotSet = 3,
	NextState = 4,
	EStateTreeTransitionType_MAX = 5
};

// Enum StateTreeModule.EStateTreeConditionOperand
enum class EStateTreeConditionOperand : uint8 {
	Copy = 0,
	And = 1,
	Or = 2,
	EStateTreeConditionOperand_MAX = 3
};

// Enum StateTreeModule.EStateTreeStateType
enum class EStateTreeStateType : uint8 {
	State = 0,
	Group = 1,
	Linked = 2,
	Subtree = 3,
	EStateTreeStateType_MAX = 4
};

// Enum StateTreeModule.EStateTreeTransitionTrigger
enum class EStateTreeTransitionTrigger : uint8 {
	None = 0,
	OnStateCompleted = 3,
	OnStateSucceeded = 1,
	OnStateFailed = 2,
	OnTick = 4,
	OnEvent = 8,
	MAX = 9
};

// Enum StateTreeModule.EStateTreeExternalDataRequirement
enum class EStateTreeExternalDataRequirement : uint8 {
	Required = 0,
	Optional = 1,
	EStateTreeExternalDataRequirement_MAX = 2
};

// Enum StateTreeModule.EStateTreePropertyIndirection
enum class EStateTreePropertyIndirection : uint8 {
	Offset = 0,
	Indirect = 1,
	EStateTreePropertyIndirection_MAX = 2
};

// Enum StateTreeModule.EStateTreePropertyUsage
enum class EStateTreePropertyUsage : uint8 {
	Invalid = 0,
	Input = 1,
	Parameter = 2,
	Output = 3,
	Internal = 4,
	EStateTreePropertyUsage_MAX = 5
};

// ScriptStruct StateTreeModule.CooldownGuardEvaluatorInstanceData
// Size: 0x0c (Inherited: 0x00)
struct FCooldownGuardEvaluatorInstanceData {
	float Duration; // 0x00(0x04)
	float EndTime; // 0x04(0x04)
	bool bActive; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct StateTreeModule.StateTreeNodeBase
// Size: 0x18 (Inherited: 0x00)
struct FStateTreeNodeBase {
	char pad_0[0x8]; // 0x00(0x08)
	struct FName Name; // 0x08(0x04)
	struct FStateTreeIndex16 BindingsBatch; // 0x0c(0x02)
	struct FStateTreeIndex16 DataViewIndex; // 0x0e(0x02)
	struct FStateTreeIndex16 InstanceIndex; // 0x10(0x02)
	char bInstanceIsObject : 1; // 0x12(0x01)
	char pad_12_1 : 7; // 0x12(0x01)
	char pad_13[0x5]; // 0x13(0x05)
};

// ScriptStruct StateTreeModule.StateTreeIndex16
// Size: 0x02 (Inherited: 0x00)
struct FStateTreeIndex16 {
	uint16_t Value; // 0x00(0x02)
};

// ScriptStruct StateTreeModule.StateTreeEvaluatorBase
// Size: 0x18 (Inherited: 0x18)
struct FStateTreeEvaluatorBase : FStateTreeNodeBase {
};

// ScriptStruct StateTreeModule.StateTreeEvaluatorCommonBase
// Size: 0x18 (Inherited: 0x18)
struct FStateTreeEvaluatorCommonBase : FStateTreeEvaluatorBase {
};

// ScriptStruct StateTreeModule.CooldownGuardEvaluator
// Size: 0x30 (Inherited: 0x18)
struct FCooldownGuardEvaluator : FStateTreeEvaluatorCommonBase {
	char pad_18[0xc]; // 0x18(0x0c)
	float RandomDeviation; // 0x24(0x04)
	enum class ECooldownGuardActivation Activation; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct StateTreeModule.SelectionGuardEvaluatorInstanceData
// Size: 0x01 (Inherited: 0x00)
struct FSelectionGuardEvaluatorInstanceData {
	bool bActive; // 0x00(0x01)
};

// ScriptStruct StateTreeModule.SelectionGuardEvaluator
// Size: 0x20 (Inherited: 0x18)
struct FSelectionGuardEvaluator : FStateTreeEvaluatorCommonBase {
	char pad_18[0x4]; // 0x18(0x04)
	enum class ESelectionGuardActivation Activation; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
};

// ScriptStruct StateTreeModule.StateTreeAnyEnum
// Size: 0x10 (Inherited: 0x00)
struct FStateTreeAnyEnum {
	uint32_t Value; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UEnum* Enum; // 0x08(0x08)
};

// ScriptStruct StateTreeModule.StateTreeCompareIntConditionInstanceData
// Size: 0x08 (Inherited: 0x00)
struct FStateTreeCompareIntConditionInstanceData {
	int32_t Left; // 0x00(0x04)
	int32_t Right; // 0x04(0x04)
};

// ScriptStruct StateTreeModule.StateTreeConditionBase
// Size: 0x20 (Inherited: 0x18)
struct FStateTreeConditionBase : FStateTreeNodeBase {
	enum class EStateTreeConditionOperand Operand; // 0x18(0x01)
	int8_t DeltaIndent; // 0x19(0x01)
	char pad_1A[0x6]; // 0x1a(0x06)
};

// ScriptStruct StateTreeModule.StateTreeConditionCommonBase
// Size: 0x20 (Inherited: 0x20)
struct FStateTreeConditionCommonBase : FStateTreeConditionBase {
};

// ScriptStruct StateTreeModule.StateTreeCompareIntCondition
// Size: 0x28 (Inherited: 0x20)
struct FStateTreeCompareIntCondition : FStateTreeConditionCommonBase {
	bool bInvert; // 0x20(0x01)
	enum class EGenericAICheck Operator; // 0x21(0x01)
	char pad_22[0x6]; // 0x22(0x06)
};

// ScriptStruct StateTreeModule.StateTreeCompareFloatConditionInstanceData
// Size: 0x10 (Inherited: 0x00)
struct FStateTreeCompareFloatConditionInstanceData {
	double Left; // 0x00(0x08)
	double Right; // 0x08(0x08)
};

// ScriptStruct StateTreeModule.StateTreeCompareFloatCondition
// Size: 0x28 (Inherited: 0x20)
struct FStateTreeCompareFloatCondition : FStateTreeConditionCommonBase {
	bool bInvert; // 0x20(0x01)
	enum class EGenericAICheck Operator; // 0x21(0x01)
	char pad_22[0x6]; // 0x22(0x06)
};

// ScriptStruct StateTreeModule.StateTreeCompareBoolConditionInstanceData
// Size: 0x02 (Inherited: 0x00)
struct FStateTreeCompareBoolConditionInstanceData {
	bool bLeft; // 0x00(0x01)
	bool bRight; // 0x01(0x01)
};

// ScriptStruct StateTreeModule.StateTreeCompareBoolCondition
// Size: 0x28 (Inherited: 0x20)
struct FStateTreeCompareBoolCondition : FStateTreeConditionCommonBase {
	bool bInvert; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct StateTreeModule.StateTreeCompareEnumConditionInstanceData
// Size: 0x20 (Inherited: 0x00)
struct FStateTreeCompareEnumConditionInstanceData {
	struct FStateTreeAnyEnum Left; // 0x00(0x10)
	struct FStateTreeAnyEnum Right; // 0x10(0x10)
};

// ScriptStruct StateTreeModule.StateTreeCompareEnumCondition
// Size: 0x28 (Inherited: 0x20)
struct FStateTreeCompareEnumCondition : FStateTreeConditionCommonBase {
	bool bInvert; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct StateTreeModule.StateTreeCompareDistanceConditionInstanceData
// Size: 0x38 (Inherited: 0x00)
struct FStateTreeCompareDistanceConditionInstanceData {
	struct FVector Source; // 0x00(0x18)
	struct FVector Target; // 0x18(0x18)
	double Distance; // 0x30(0x08)
};

// ScriptStruct StateTreeModule.StateTreeCompareDistanceCondition
// Size: 0x28 (Inherited: 0x20)
struct FStateTreeCompareDistanceCondition : FStateTreeConditionCommonBase {
	bool bInvert; // 0x20(0x01)
	enum class EGenericAICheck Operator; // 0x21(0x01)
	char pad_22[0x6]; // 0x22(0x06)
};

// ScriptStruct StateTreeModule.StateTreeRandomConditionInstanceData
// Size: 0x04 (Inherited: 0x00)
struct FStateTreeRandomConditionInstanceData {
	float Threshold; // 0x00(0x04)
};

// ScriptStruct StateTreeModule.StateTreeRandomCondition
// Size: 0x20 (Inherited: 0x20)
struct FStateTreeRandomCondition : FStateTreeConditionBase {
};

// ScriptStruct StateTreeModule.StateTreeBlueprintConditionWrapper
// Size: 0x38 (Inherited: 0x20)
struct FStateTreeBlueprintConditionWrapper : FStateTreeConditionBase {
	struct UStateTreeConditionBlueprintBase* ConditionClass; // 0x20(0x08)
	char pad_28[0x10]; // 0x28(0x10)
};

// ScriptStruct StateTreeModule.StateTreeDebugTextTaskInstanceData
// Size: 0x01 (Inherited: 0x00)
struct FStateTreeDebugTextTaskInstanceData {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct StateTreeModule.StateTreeTaskBase
// Size: 0x18 (Inherited: 0x18)
struct FStateTreeTaskBase : FStateTreeNodeBase {
};

// ScriptStruct StateTreeModule.StateTreeTaskCommonBase
// Size: 0x18 (Inherited: 0x18)
struct FStateTreeTaskCommonBase : FStateTreeTaskBase {
};

// ScriptStruct StateTreeModule.StateTreeDebugTextTask
// Size: 0x58 (Inherited: 0x18)
struct FStateTreeDebugTextTask : FStateTreeTaskCommonBase {
	char pad_18[0x8]; // 0x18(0x08)
	struct FString Text; // 0x20(0x10)
	struct FColor TextColor; // 0x30(0x04)
	float FontScale; // 0x34(0x04)
	struct FVector Offset; // 0x38(0x18)
	bool bEnabled; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
};

// ScriptStruct StateTreeModule.StateTreeDelayTaskInstanceData
// Size: 0x10 (Inherited: 0x00)
struct FStateTreeDelayTaskInstanceData {
	float Duration; // 0x00(0x04)
	float RandomDeviation; // 0x04(0x04)
	bool bRunForever; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct StateTreeModule.StateTreeDelayTask
// Size: 0x18 (Inherited: 0x18)
struct FStateTreeDelayTask : FStateTreeTaskCommonBase {
};

// ScriptStruct StateTreeModule.StateTreeBlueprintEvaluatorWrapper
// Size: 0x30 (Inherited: 0x18)
struct FStateTreeBlueprintEvaluatorWrapper : FStateTreeEvaluatorBase {
	struct UStateTreeEvaluatorBlueprintBase* EvaluatorClass; // 0x18(0x08)
	char pad_20[0x10]; // 0x20(0x10)
};

// ScriptStruct StateTreeModule.StateTreeEvent
// Size: 0x20 (Inherited: 0x00)
struct FStateTreeEvent {
	struct FGameplayTag tag; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FInstancedStruct Payload; // 0x08(0x10)
	struct FName Origin; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct StateTreeModule.StateTreeExecutionState
// Size: 0x24 (Inherited: 0x00)
struct FStateTreeExecutionState {
	char pad_0[0x24]; // 0x00(0x24)
};

// ScriptStruct StateTreeModule.StateTreeExecutionContext
// Size: 0x78 (Inherited: 0x00)
struct FStateTreeExecutionContext {
	char pad_0[0x8]; // 0x00(0x08)
	struct UStateTree* StateTree; // 0x08(0x08)
	struct UObject* Owner; // 0x10(0x08)
	struct FStateTreeInstanceData InternalInstanceData; // 0x18(0x30)
	char pad_48[0x30]; // 0x48(0x30)
};

// ScriptStruct StateTreeModule.StateTreeInstanceData
// Size: 0x30 (Inherited: 0x00)
struct FStateTreeInstanceData {
	struct FInstancedStructArray InstanceStructs; // 0x00(0x10)
	struct TArray<struct UObject*> InstanceObjects; // 0x10(0x10)
	struct TArray<struct FStateTreeEvent> Events; // 0x20(0x10)
};

// ScriptStruct StateTreeModule.GameplayTagMatchConditionInstanceData
// Size: 0x28 (Inherited: 0x00)
struct FGameplayTagMatchConditionInstanceData {
	struct FGameplayTagContainer TagContainer; // 0x00(0x20)
	struct FGameplayTag tag; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct StateTreeModule.GameplayTagMatchCondition
// Size: 0x28 (Inherited: 0x20)
struct FGameplayTagMatchCondition : FStateTreeConditionCommonBase {
	bool bExactMatch; // 0x20(0x01)
	bool bInvert; // 0x21(0x01)
	char pad_22[0x6]; // 0x22(0x06)
};

// ScriptStruct StateTreeModule.GameplayTagContainerMatchConditionInstanceData
// Size: 0x40 (Inherited: 0x00)
struct FGameplayTagContainerMatchConditionInstanceData {
	struct FGameplayTagContainer TagContainer; // 0x00(0x20)
	struct FGameplayTagContainer OtherContainer; // 0x20(0x20)
};

// ScriptStruct StateTreeModule.GameplayTagContainerMatchCondition
// Size: 0x28 (Inherited: 0x20)
struct FGameplayTagContainerMatchCondition : FStateTreeConditionCommonBase {
	enum class EGameplayContainerMatchType MatchType; // 0x20(0x01)
	bool bExactMatch; // 0x21(0x01)
	bool bInvert; // 0x22(0x01)
	char pad_23[0x5]; // 0x23(0x05)
};

// ScriptStruct StateTreeModule.GameplayTagQueryConditionInstanceData
// Size: 0x20 (Inherited: 0x00)
struct FGameplayTagQueryConditionInstanceData {
	struct FGameplayTagContainer TagContainer; // 0x00(0x20)
};

// ScriptStruct StateTreeModule.GameplayTagQueryCondition
// Size: 0x70 (Inherited: 0x20)
struct FGameplayTagQueryCondition : FStateTreeConditionCommonBase {
	struct FGameplayTagQuery TagQuery; // 0x20(0x48)
	bool bInvert; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
};

// ScriptStruct StateTreeModule.StateTreeBlueprintPropertyInfo
// Size: 0x08 (Inherited: 0x00)
struct FStateTreeBlueprintPropertyInfo {
	struct FName PropertyName; // 0x00(0x04)
	enum class EStateTreeBlueprintPropertyCategory category; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct StateTreeModule.StateTreeObjectIsValidConditionInstanceData
// Size: 0x08 (Inherited: 0x00)
struct FStateTreeObjectIsValidConditionInstanceData {
	struct UObject* Object; // 0x00(0x08)
};

// ScriptStruct StateTreeModule.StateTreeObjectIsValidCondition
// Size: 0x28 (Inherited: 0x20)
struct FStateTreeObjectIsValidCondition : FStateTreeConditionCommonBase {
	bool bInvert; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct StateTreeModule.StateTreeObjectEqualsConditionInstanceData
// Size: 0x10 (Inherited: 0x00)
struct FStateTreeObjectEqualsConditionInstanceData {
	struct UObject* Left; // 0x00(0x08)
	struct UObject* Right; // 0x08(0x08)
};

// ScriptStruct StateTreeModule.StateTreeObjectEqualsCondition
// Size: 0x28 (Inherited: 0x20)
struct FStateTreeObjectEqualsCondition : FStateTreeConditionCommonBase {
	bool bInvert; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct StateTreeModule.StateTreeObjectIsChildOfClassConditionInstanceData
// Size: 0x10 (Inherited: 0x00)
struct FStateTreeObjectIsChildOfClassConditionInstanceData {
	struct UObject* Object; // 0x00(0x08)
	ClassPtrProperty Class; // 0x08(0x08)
};

// ScriptStruct StateTreeModule.StateTreeObjectIsChildOfClassCondition
// Size: 0x28 (Inherited: 0x20)
struct FStateTreeObjectIsChildOfClassCondition : FStateTreeConditionCommonBase {
	bool bInvert; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct StateTreeModule.StateTreeParameterType
// Size: 0x01 (Inherited: 0x00)
struct FStateTreeParameterType {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct StateTreeModule.StateTreeParameterBool
// Size: 0x01 (Inherited: 0x01)
struct FStateTreeParameterBool : FStateTreeParameterType {
	bool bValue; // 0x00(0x01)
};

// ScriptStruct StateTreeModule.StateTreeParameterInt
// Size: 0x04 (Inherited: 0x01)
struct FStateTreeParameterInt : FStateTreeParameterType {
	int32_t Value; // 0x00(0x04)
};

// ScriptStruct StateTreeModule.StateTreeParameterFloat
// Size: 0x04 (Inherited: 0x01)
struct FStateTreeParameterFloat : FStateTreeParameterType {
	float Value; // 0x00(0x04)
};

// ScriptStruct StateTreeModule.StateTreeParameterReal
// Size: 0x08 (Inherited: 0x01)
struct FStateTreeParameterReal : FStateTreeParameterType {
	double Value; // 0x00(0x08)
};

// ScriptStruct StateTreeModule.StateTreeParameterVector
// Size: 0x18 (Inherited: 0x01)
struct FStateTreeParameterVector : FStateTreeParameterType {
	struct FVector Value; // 0x00(0x18)
};

// ScriptStruct StateTreeModule.StateTreeParameterQuat
// Size: 0x20 (Inherited: 0x01)
struct FStateTreeParameterQuat : FStateTreeParameterType {
	struct FQuat Value; // 0x00(0x20)
};

// ScriptStruct StateTreeModule.StateTreeParameterTransform
// Size: 0x60 (Inherited: 0x01)
struct FStateTreeParameterTransform : FStateTreeParameterType {
	struct FTransform Value; // 0x00(0x60)
};

// ScriptStruct StateTreeModule.StateTreeParameterString
// Size: 0x10 (Inherited: 0x01)
struct FStateTreeParameterString : FStateTreeParameterType {
	struct FString Value; // 0x00(0x10)
};

// ScriptStruct StateTreeModule.StateTreeParameterName
// Size: 0x04 (Inherited: 0x01)
struct FStateTreeParameterName : FStateTreeParameterType {
	struct FName Value; // 0x00(0x04)
};

// ScriptStruct StateTreeModule.StateTreeBindableStructDesc
// Size: 0x10 (Inherited: 0x00)
struct FStateTreeBindableStructDesc {
	struct UStruct* Struct; // 0x00(0x08)
	struct FName Name; // 0x08(0x04)
	enum class EStateTreeBindableStructSource DataSource; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct StateTreeModule.StateTreePropertySegment
// Size: 0x0c (Inherited: 0x00)
struct FStateTreePropertySegment {
	struct FName Name; // 0x00(0x04)
	struct FStateTreeIndex16 ArrayIndex; // 0x04(0x02)
	struct FStateTreeIndex16 NextIndex; // 0x06(0x02)
	enum class EStateTreePropertyAccessType Type; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct StateTreeModule.StateTreePropertyBinding
// Size: 0x1c (Inherited: 0x00)
struct FStateTreePropertyBinding {
	struct FStateTreePropertySegment SourcePath; // 0x00(0x0c)
	struct FStateTreePropertySegment TargetPath; // 0x0c(0x0c)
	struct FStateTreeIndex16 SourceStructIndex; // 0x18(0x02)
	enum class EStateTreePropertyCopyType CopyType; // 0x1a(0x01)
	char pad_1B[0x1]; // 0x1b(0x01)
};

// ScriptStruct StateTreeModule.StateTreePropertyIndirection
// Size: 0x10 (Inherited: 0x00)
struct FStateTreePropertyIndirection {
	struct FStateTreeIndex16 ArrayIndex; // 0x00(0x02)
	uint16_t Offset; // 0x02(0x02)
	struct FStateTreeIndex16 NextIndex; // 0x04(0x02)
	enum class EStateTreePropertyAccessType Type; // 0x06(0x01)
	char pad_7[0x9]; // 0x07(0x09)
};

// ScriptStruct StateTreeModule.StateTreePropCopy
// Size: 0x38 (Inherited: 0x00)
struct FStateTreePropCopy {
	struct FStateTreePropertyIndirection SourceIndirection; // 0x00(0x10)
	struct FStateTreePropertyIndirection TargetIndirection; // 0x10(0x10)
	char pad_20[0x10]; // 0x20(0x10)
	int32_t CopySize; // 0x30(0x04)
	struct FStateTreeIndex16 SourceStructIndex; // 0x34(0x02)
	enum class EStateTreePropertyCopyType Type; // 0x36(0x01)
	char pad_37[0x1]; // 0x37(0x01)
};

// ScriptStruct StateTreeModule.StateTreePropCopyBatch
// Size: 0x18 (Inherited: 0x00)
struct FStateTreePropCopyBatch {
	struct FStateTreeBindableStructDesc TargetStruct; // 0x00(0x10)
	uint16_t BindingsBegin; // 0x10(0x02)
	uint16_t BindingsEnd; // 0x12(0x02)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct StateTreeModule.StateTreePropertyBindings
// Size: 0x68 (Inherited: 0x00)
struct FStateTreePropertyBindings {
	struct TArray<struct FStateTreeBindableStructDesc> SourceStructs; // 0x00(0x10)
	struct TArray<struct FStateTreePropCopyBatch> CopyBatches; // 0x10(0x10)
	struct TArray<struct FStateTreePropertyBinding> PropertyBindings; // 0x20(0x10)
	struct TArray<struct FStateTreePropertySegment> PropertySegments; // 0x30(0x10)
	struct TArray<struct FStateTreePropCopy> PropertyCopies; // 0x40(0x10)
	struct TArray<struct FStateTreePropertyIndirection> PropertyIndirections; // 0x50(0x10)
	char pad_60[0x8]; // 0x60(0x08)
};

// ScriptStruct StateTreeModule.StateTreeEditorPropertyPath
// Size: 0x20 (Inherited: 0x00)
struct FStateTreeEditorPropertyPath {
	struct FGuid StructID; // 0x00(0x10)
	struct TArray<struct FString> Path; // 0x10(0x10)
};

// ScriptStruct StateTreeModule.StateTreeReference
// Size: 0x18 (Inherited: 0x00)
struct FStateTreeReference {
	struct UStateTree* StateTree; // 0x00(0x08)
	struct FInstancedPropertyBag Parameters; // 0x08(0x10)
};

// ScriptStruct StateTreeModule.StateTreeBlueprintTaskWrapper
// Size: 0x30 (Inherited: 0x18)
struct FStateTreeBlueprintTaskWrapper : FStateTreeTaskBase {
	struct UStateTreeTaskBlueprintBase* TaskClass; // 0x18(0x08)
	char pad_20[0x10]; // 0x20(0x10)
};

// ScriptStruct StateTreeModule.StateTreeStateHandle
// Size: 0x02 (Inherited: 0x00)
struct FStateTreeStateHandle {
	uint16_t Index; // 0x00(0x02)
};

// ScriptStruct StateTreeModule.StateTreeIndex8
// Size: 0x01 (Inherited: 0x00)
struct FStateTreeIndex8 {
	char Value; // 0x00(0x01)
};

// ScriptStruct StateTreeModule.StateTreeActiveStates
// Size: 0x12 (Inherited: 0x00)
struct FStateTreeActiveStates {
	struct FStateTreeStateHandle States[0x8]; // 0x00(0x10)
	char NumStates; // 0x10(0x01)
	char pad_11[0x1]; // 0x11(0x01)
};

// ScriptStruct StateTreeModule.StateTreeTransitionResult
// Size: 0x2a (Inherited: 0x00)
struct FStateTreeTransitionResult {
	struct FStateTreeActiveStates CurrentActiveStates; // 0x00(0x12)
	enum class EStateTreeRunStatus CurrentRunStatus; // 0x12(0x01)
	char pad_13[0x1]; // 0x13(0x01)
	struct FStateTreeStateHandle TargetState; // 0x14(0x02)
	struct FStateTreeActiveStates NextActiveStates; // 0x16(0x12)
	struct FStateTreeStateHandle CurrentState; // 0x28(0x02)
};

// ScriptStruct StateTreeModule.CompactStateTransition
// Size: 0x0c (Inherited: 0x00)
struct FCompactStateTransition {
	struct FGameplayTag EventTag; // 0x00(0x04)
	uint16_t ConditionsBegin; // 0x04(0x02)
	struct FStateTreeStateHandle State; // 0x06(0x02)
	enum class EStateTreeTransitionType Type; // 0x08(0x01)
	enum class EStateTreeTransitionTrigger Trigger; // 0x09(0x01)
	char GateDelay; // 0x0a(0x01)
	char ConditionsNum; // 0x0b(0x01)
};

// ScriptStruct StateTreeModule.CompactStateTreeState
// Size: 0x1c (Inherited: 0x00)
struct FCompactStateTreeState {
	struct FName Name; // 0x00(0x04)
	struct FStateTreeStateHandle LinkedState; // 0x04(0x02)
	struct FStateTreeStateHandle Parent; // 0x06(0x02)
	uint16_t ChildrenBegin; // 0x08(0x02)
	uint16_t ChildrenEnd; // 0x0a(0x02)
	uint16_t EnterConditionsBegin; // 0x0c(0x02)
	uint16_t TransitionsBegin; // 0x0e(0x02)
	uint16_t TasksBegin; // 0x10(0x02)
	struct FStateTreeIndex16 ParameterInstanceIndex; // 0x12(0x02)
	struct FStateTreeIndex16 ParameterDataViewIndex; // 0x14(0x02)
	char EnterConditionsNum; // 0x16(0x01)
	char TransitionsNum; // 0x17(0x01)
	char TasksNum; // 0x18(0x01)
	enum class EStateTreeStateType Type; // 0x19(0x01)
	char pad_1A[0x2]; // 0x1a(0x02)
};

// ScriptStruct StateTreeModule.CompactStateTreeParameters
// Size: 0x18 (Inherited: 0x00)
struct FCompactStateTreeParameters {
	struct FStateTreeIndex16 BindingsBatch; // 0x00(0x02)
	char pad_2[0x6]; // 0x02(0x06)
	struct FInstancedPropertyBag Parameters; // 0x08(0x10)
};

// ScriptStruct StateTreeModule.StateTreeExternalDataHandle
// Size: 0x01 (Inherited: 0x00)
struct FStateTreeExternalDataHandle {
	struct FStateTreeIndex8 DataViewIndex; // 0x00(0x01)
};

// ScriptStruct StateTreeModule.StateTreeInstanceDataPropertyHandle
// Size: 0x04 (Inherited: 0x00)
struct FStateTreeInstanceDataPropertyHandle {
	char pad_0[0x4]; // 0x00(0x04)
};

// ScriptStruct StateTreeModule.StateTreeExternalDataDesc
// Size: 0x10 (Inherited: 0x00)
struct FStateTreeExternalDataDesc {
	struct UStruct* Struct; // 0x00(0x08)
	struct FName Name; // 0x08(0x04)
	struct FStateTreeExternalDataHandle Handle; // 0x0c(0x01)
	enum class EStateTreeExternalDataRequirement Requirement; // 0x0d(0x01)
	char pad_E[0x2]; // 0x0e(0x02)
};

// ScriptStruct StateTreeModule.StateTreeStructRef
// Size: 0x10 (Inherited: 0x00)
struct FStateTreeStructRef {
	char pad_0[0x10]; // 0x00(0x10)
};

