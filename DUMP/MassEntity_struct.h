// Enum MassEntity.EMassCommandOperationType
enum class EMassCommandOperationType : uint8 {
	None = 0,
	Create = 1,
	Add = 2,
	Remove = 3,
	ChangeComposition = 4,
	Set = 5,
	Destroy = 6,
	MAX = 7
};

// Enum MassEntity.EMassObservedOperation
enum class EMassObservedOperation : uint8 {
	Add = 0,
	Remove = 1,
	MAX = 2
};

// Enum MassEntity.EProcessorExecutionFlags
enum class EProcessorExecutionFlags : uint8 {
	None = 0,
	Standalone = 1,
	Server = 2,
	Client = 4,
	All = 7,
	EProcessorExecutionFlags_MAX = 8
};

// Enum MassEntity.EMassProcessingPhase
enum class EMassProcessingPhase : uint8 {
	PrePhysics = 0,
	StartPhysics = 1,
	DuringPhysics = 2,
	EndPhysics = 3,
	PostPhysics = 4,
	FrameEnd = 5,
	MAX = 6
};

// ScriptStruct MassEntity.MassSharedFragment
// Size: 0x01 (Inherited: 0x00)
struct FMassSharedFragment {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct MassEntity.MassFragment
// Size: 0x01 (Inherited: 0x00)
struct FMassFragment {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct MassEntity.MassEntityQuery
// Size: 0x2d0 (Inherited: 0x00)
struct FMassEntityQuery {
	char pad_0[0x2d0]; // 0x00(0x2d0)
};

// ScriptStruct MassEntity.MassProcessingPhaseConfig
// Size: 0x20 (Inherited: 0x00)
struct FMassProcessingPhaseConfig {
	struct FName PhaseName; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UMassCompositeProcessor* PhaseGroupClass; // 0x08(0x08)
	struct TArray<struct UMassProcessor*> ProcessorCDOs; // 0x10(0x10)
};

// ScriptStruct MassEntity.MassTag
// Size: 0x01 (Inherited: 0x00)
struct FMassTag {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct MassEntity.MassChunkFragment
// Size: 0x01 (Inherited: 0x00)
struct FMassChunkFragment {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct MassEntity.MassEntityHandle
// Size: 0x08 (Inherited: 0x00)
struct FMassEntityHandle {
	int32_t Index; // 0x00(0x04)
	int32_t SerialNumber; // 0x04(0x04)
};

// ScriptStruct MassEntity.MassEntityView
// Size: 0x20 (Inherited: 0x00)
struct FMassEntityView {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct MassEntity.MassObserversMap
// Size: 0x50 (Inherited: 0x00)
struct FMassObserversMap {
	struct TMap<struct UScriptStruct*, struct FMassRuntimePipeline> Container; // 0x00(0x50)
};

// ScriptStruct MassEntity.MassRuntimePipeline
// Size: 0x10 (Inherited: 0x00)
struct FMassRuntimePipeline {
	struct TArray<struct UMassProcessor*> Processors; // 0x00(0x10)
};

// ScriptStruct MassEntity.MassObserverManager
// Size: 0x1c8 (Inherited: 0x00)
struct FMassObserverManager {
	char pad_0[0x80]; // 0x00(0x80)
	struct FMassObserversMap FragmentObservers[0x2]; // 0x80(0xa0)
	struct FMassObserversMap TagObservers[0x2]; // 0x120(0xa0)
	char pad_1C0[0x8]; // 0x1c0(0x08)
};

// ScriptStruct MassEntity.MassProcessorClassCollection
// Size: 0x10 (Inherited: 0x00)
struct FMassProcessorClassCollection {
	struct TArray<struct UMassProcessor*> ClassCollection; // 0x00(0x10)
};

// ScriptStruct MassEntity.MassEntityObserverClassesMap
// Size: 0x50 (Inherited: 0x00)
struct FMassEntityObserverClassesMap {
	struct TMap<struct UScriptStruct*, struct FMassProcessorClassCollection> Container; // 0x00(0x50)
};

// ScriptStruct MassEntity.MassProcessingPhase
// Size: 0x78 (Inherited: 0x28)
struct FMassProcessingPhase : FTickFunction {
	struct UMassCompositeProcessor* PhaseProcessor; // 0x28(0x08)
	struct UMassProcessingPhaseManager* Manager; // 0x30(0x08)
	char pad_38[0x40]; // 0x38(0x40)
};

// ScriptStruct MassEntity.ProcessorAuxDataBase
// Size: 0x01 (Inherited: 0x00)
struct FProcessorAuxDataBase {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct MassEntity.MassProcessingContext
// Size: 0x38 (Inherited: 0x00)
struct FMassProcessingContext {
	struct UMassEntitySubsystem* EntitySubsystem; // 0x00(0x08)
	float DeltaSeconds; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FInstancedStruct AuxData; // 0x10(0x10)
	bool bFlushCommandBuffer; // 0x20(0x01)
	char pad_21[0x17]; // 0x21(0x17)
};

// ScriptStruct MassEntity.MassProcessorExecutionOrder
// Size: 0x28 (Inherited: 0x00)
struct FMassProcessorExecutionOrder {
	struct FName ExecuteInGroup; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FName> ExecuteBefore; // 0x08(0x10)
	struct TArray<struct FName> ExecuteAfter; // 0x18(0x10)
};

