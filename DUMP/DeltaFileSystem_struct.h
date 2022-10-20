// ScriptStruct DeltaFileSystem.DeltaAction
// Size: 0x20 (Inherited: 0x00)
struct FDeltaAction {
	struct FGuid ActorGUID; // 0x00(0x10)
	struct FDateTime CommitTime; // 0x10(0x08)
	uint32_t DataHash; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct DeltaFileSystem.AddAction
// Size: 0xc0 (Inherited: 0x20)
struct FAddAction : FDeltaAction {
	struct TSoftClassPtr<UObject> ActorClass; // 0x20(0x28)
	struct FString JsonStringObjectForPropertyData; // 0x48(0x10)
	char pad_58[0x8]; // 0x58(0x08)
	struct FTransform Transform; // 0x60(0x60)
};

// ScriptStruct DeltaFileSystem.UpdateAction
// Size: 0x30 (Inherited: 0x20)
struct FUpdateAction : FDeltaAction {
	struct FString JsonStringObjectForPropertyData; // 0x20(0x10)
};

// ScriptStruct DeltaFileSystem.DeleteAction
// Size: 0x90 (Inherited: 0x20)
struct FDeleteAction : FDeltaAction {
	struct FString ActorName; // 0x20(0x10)
	struct FTransform Transform; // 0x30(0x60)
};

// ScriptStruct DeltaFileSystem.DeltaTrackingHandles
// Size: 0x20 (Inherited: 0x00)
struct FDeltaTrackingHandles {
	char pad_0[0x10]; // 0x00(0x10)
	struct TArray<ClassPtrProperty> AllowedClasses; // 0x10(0x10)
};

