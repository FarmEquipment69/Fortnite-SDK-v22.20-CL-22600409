// Enum TargetingSystem.ETargetingAOEShape
enum class ETargetingAOEShape : uint8 {
	Box = 0,
	Cylinder = 1,
	Sphere = 2,
	Capsule = 3,
	SourceComponent = 4,
	ETargetingAOEShape_MAX = 5
};

// Enum TargetingSystem.ETargetingTraceType
enum class ETargetingTraceType : uint8 {
	Line = 0,
	Sweep = 1,
	ETargetingTraceType_MAX = 2
};

// ScriptStruct TargetingSystem.TargetingRequestHandle
// Size: 0x04 (Inherited: 0x00)
struct FTargetingRequestHandle {
	char pad_0[0x4]; // 0x00(0x04)
};

// ScriptStruct TargetingSystem.TargetingTaskSet
// Size: 0x10 (Inherited: 0x00)
struct FTargetingTaskSet {
	struct TArray<struct UTargetingTask*> Tasks; // 0x00(0x10)
};

// ScriptStruct TargetingSystem.TargetingDefaultResultData
// Size: 0xe8 (Inherited: 0x00)
struct FTargetingDefaultResultData {
	struct FHitResult HitResult; // 0x00(0xe0)
	char pad_E0[0x8]; // 0xe0(0x08)
};

// ScriptStruct TargetingSystem.TargetingDefaultResultsSet
// Size: 0x10 (Inherited: 0x00)
struct FTargetingDefaultResultsSet {
	struct TArray<struct FTargetingDefaultResultData> TargetResults; // 0x00(0x10)
};

// ScriptStruct TargetingSystem.TargetingSourceContext
// Size: 0x38 (Inherited: 0x00)
struct FTargetingSourceContext {
	struct AActor* SourceActor; // 0x00(0x08)
	struct AActor* InstigatorActor; // 0x08(0x08)
	struct FVector SourceLocation; // 0x10(0x18)
	struct FName SourceSocketName; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct UObject* SourceObject; // 0x30(0x08)
};

// ScriptStruct TargetingSystem.TargetingRequestData
// Size: 0x28 (Inherited: 0x00)
struct FTargetingRequestData {
	char pad_0[0x18]; // 0x00(0x18)
	struct FDelegate TargetingRequestDynamicDelegate; // 0x18(0x0c)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct TargetingSystem.TargetingAsyncTaskData
// Size: 0x08 (Inherited: 0x00)
struct FTargetingAsyncTaskData {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct TargetingSystem.TargetingImmediateTaskData
// Size: 0x01 (Inherited: 0x00)
struct FTargetingImmediateTaskData {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct TargetingSystem.TargetingDebugData
// Size: 0x01 (Inherited: 0x00)
struct FTargetingDebugData {
	char pad_0[0x1]; // 0x00(0x01)
};

