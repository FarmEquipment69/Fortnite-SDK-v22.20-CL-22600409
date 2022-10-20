// ScriptStruct DaySequence.DaySequenceBindingReference
// Size: 0x60 (Inherited: 0x00)
struct FDaySequenceBindingReference {
	struct TSoftObjectPtr<UObject> ExternalObjectPath; // 0x00(0x28)
	struct FString ObjectPath; // 0x28(0x10)
	struct TSoftClassPtr<UObject> ObjectClass; // 0x38(0x28)
};

// ScriptStruct DaySequence.DaySequenceBindingReferenceArray
// Size: 0x10 (Inherited: 0x00)
struct FDaySequenceBindingReferenceArray {
	struct TArray<struct FDaySequenceBindingReference> References; // 0x00(0x10)
};

// ScriptStruct DaySequence.DaySequenceBindingReferences
// Size: 0xa0 (Inherited: 0x00)
struct FDaySequenceBindingReferences {
	struct TMap<struct FGuid, struct FDaySequenceBindingReferenceArray> BindingIdToReferences; // 0x00(0x50)
	struct TSet<struct FGuid> AnimSequenceInstances; // 0x50(0x50)
};

