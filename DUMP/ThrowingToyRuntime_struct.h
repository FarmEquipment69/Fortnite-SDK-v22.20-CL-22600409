// Enum ThrowingToyRuntime.EThrowingToyItemRemovedReason
enum class EThrowingToyItemRemovedReason : uint8 {
	None = 0,
	ManuallyDropped = 1,
	DeviceForcedDropped = 2,
	DeviceForcedDeleted = 3,
	EThrowingToyItemRemovedReason_MAX = 4
};

// ScriptStruct ThrowingToyRuntime.ThrowingToyData
// Size: 0x28 (Inherited: 0x0c)
struct FThrowingToyData : FFastArraySerializerItem {
	char pad_C[0x4]; // 0x0c(0x04)
	struct AActor* ThrowingToy; // 0x10(0x08)
	struct FGuid WorldItemGuid; // 0x18(0x10)
};

// ScriptStruct ThrowingToyRuntime.ThrowingToyDataArray
// Size: 0x118 (Inherited: 0x108)
struct FThrowingToyDataArray : FFastArraySerializer {
	struct TArray<struct FThrowingToyData> Entries; // 0x108(0x10)
};

