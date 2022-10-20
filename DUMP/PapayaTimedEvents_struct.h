// ScriptStruct PapayaTimedEvents.MediaTimeEventItem
// Size: 0x38 (Inherited: 0x0c)
struct FMediaTimeEventItem : FFastArraySerializerItem {
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString EventName; // 0x10(0x10)
	int64_t Time; // 0x20(0x08)
	struct FString Parameter; // 0x28(0x10)
};

// ScriptStruct PapayaTimedEvents.MediaTimeEventArray
// Size: 0x118 (Inherited: 0x108)
struct FMediaTimeEventArray : FFastArraySerializer {
	struct TArray<struct FMediaTimeEventItem> Items; // 0x108(0x10)
};

