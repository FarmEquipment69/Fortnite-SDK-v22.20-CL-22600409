// Class MassEntity.MassModuleSettings
// Size: 0x28 (Inherited: 0x28)
struct UMassModuleSettings : UObject {
};

// Class MassEntity.MassEntitySettings
// Size: 0x110 (Inherited: 0x28)
struct UMassEntitySettings : UMassModuleSettings {
	struct FString DumpDependencyGraphFileName; // 0x28(0x10)
	struct FMassProcessingPhaseConfig ProcessingPhasesConfig[0x6]; // 0x38(0xc0)
	struct TArray<struct UMassProcessor*> ProcessorCDOs; // 0xf8(0x10)
	char pad_108[0x8]; // 0x108(0x08)
};

// Class MassEntity.MassEntitySubsystem
// Size: 0x3b8 (Inherited: 0x30)
struct UMassEntitySubsystem : UWorldSubsystem {
	char pad_30[0x100]; // 0x30(0x100)
	struct TArray<struct FConstSharedStruct> ConstSharedFragments; // 0x130(0x10)
	char pad_140[0x50]; // 0x140(0x50)
	struct TArray<struct FSharedStruct> SharedFragments; // 0x190(0x10)
	char pad_1A0[0x50]; // 0x1a0(0x50)
	struct FMassObserverManager ObserverManager; // 0x1f0(0x1c8)
};

// Class MassEntity.MassProcessor
// Size: 0x70 (Inherited: 0x28)
struct UMassProcessor : UObject {
	int32_t ExecutionFlags; // 0x28(0x04)
	enum class EMassProcessingPhase ProcessingPhase; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	struct FMassProcessorExecutionOrder ExecutionOrder; // 0x30(0x28)
	bool bAutoRegisterWithProcessingPhases; // 0x58(0x01)
	char pad_59[0x1]; // 0x59(0x01)
	bool bRequiresGameThreadExecution; // 0x5a(0x01)
	char pad_5B[0x15]; // 0x5b(0x15)
};

// Class MassEntity.MassObserverProcessor
// Size: 0x80 (Inherited: 0x70)
struct UMassObserverProcessor : UMassProcessor {
	struct UScriptStruct* ObservedType; // 0x70(0x08)
	char pad_78[0x8]; // 0x78(0x08)
};

// Class MassEntity.MassObserverRegistry
// Size: 0x168 (Inherited: 0x28)
struct UMassObserverRegistry : UObject {
	struct FMassEntityObserverClassesMap FragmentObservers[0x2]; // 0x28(0xa0)
	struct FMassEntityObserverClassesMap TagObservers[0x2]; // 0xc8(0xa0)
};

// Class MassEntity.MassProcessingPhaseManager
// Size: 0x308 (Inherited: 0x28)
struct UMassProcessingPhaseManager : UObject {
	struct FMassProcessingPhase ProcessingPhases[0x6]; // 0x28(0x2d0)
	struct UMassEntitySubsystem* EntitySubsystem; // 0x2f8(0x08)
	char pad_300[0x8]; // 0x300(0x08)
};

// Class MassEntity.MassCompositeProcessor
// Size: 0xa8 (Inherited: 0x70)
struct UMassCompositeProcessor : UMassProcessor {
	struct FMassRuntimePipeline ChildPipeline; // 0x70(0x10)
	struct FName GroupName; // 0x80(0x04)
	char pad_84[0x24]; // 0x84(0x24)
};

// Class MassEntity.MassSchematic
// Size: 0x40 (Inherited: 0x30)
struct UMassSchematic : UDataAsset {
	struct TArray<struct UMassProcessor*> Processors; // 0x30(0x10)
};

// Class MassEntity.MassSettings
// Size: 0x80 (Inherited: 0x30)
struct UMassSettings : UDeveloperSettings {
	struct TMap<struct FName, struct UMassModuleSettings*> ModuleSettings; // 0x30(0x50)
};

