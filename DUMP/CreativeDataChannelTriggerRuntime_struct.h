// ScriptStruct CreativeDataChannelTriggerRuntime.CDCStringFloatArrayMap
// Size: 0x50 (Inherited: 0x00)
struct FCDCStringFloatArrayMap {
	struct TMap<struct FString, struct FVector> Data; // 0x00(0x50)
};

// ScriptStruct CreativeDataChannelTriggerRuntime.CDCFloatArray
// Size: 0x10 (Inherited: 0x00)
struct FCDCFloatArray {
	struct TArray<float> Data; // 0x00(0x10)
};

// ScriptStruct CreativeDataChannelTriggerRuntime.CDCStringFloatMap
// Size: 0x50 (Inherited: 0x00)
struct FCDCStringFloatMap {
	struct TMap<struct FString, float> Data; // 0x00(0x50)
};

// ScriptStruct CreativeDataChannelTriggerRuntime.CDCStringIntMap
// Size: 0x50 (Inherited: 0x00)
struct FCDCStringIntMap {
	struct TMap<struct FString, int32_t> Data; // 0x00(0x50)
};

// ScriptStruct CreativeDataChannelTriggerRuntime.CDCInt
// Size: 0x04 (Inherited: 0x00)
struct FCDCInt {
	int32_t Data; // 0x00(0x04)
};

// ScriptStruct CreativeDataChannelTriggerRuntime.CDCLargeInt
// Size: 0x08 (Inherited: 0x00)
struct FCDCLargeInt {
	int64_t Data; // 0x00(0x08)
};

// ScriptStruct CreativeDataChannelTriggerRuntime.CDCStringStringMap
// Size: 0xa0 (Inherited: 0x00)
struct FCDCStringStringMap {
	struct TMap<struct FString, struct FString> Data; // 0x00(0x50)
	struct TMap<struct FString, int32_t> ExtraData; // 0x50(0x50)
};

// ScriptStruct CreativeDataChannelTriggerRuntime.CDCString
// Size: 0x10 (Inherited: 0x00)
struct FCDCString {
	struct FString Data; // 0x00(0x10)
};

// ScriptStruct CreativeDataChannelTriggerRuntime.CDCStringArray
// Size: 0x18 (Inherited: 0x00)
struct FCDCStringArray {
	struct TArray<struct FString> Data; // 0x00(0x10)
	int32_t ExtraData; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct CreativeDataChannelTriggerRuntime.CreativeDataChannelEvents
// Size: 0x10 (Inherited: 0x00)
struct FCreativeDataChannelEvents {
	struct TArray<struct FCreativeDataChannelEvent> Events; // 0x00(0x10)
};

// ScriptStruct CreativeDataChannelTriggerRuntime.CreativeDataChannelEvent
// Size: 0x0c (Inherited: 0x00)
struct FCreativeDataChannelEvent {
	struct FName EventName; // 0x00(0x04)
	struct FName Parameters; // 0x04(0x04)
	struct FName TriggerCondition; // 0x08(0x04)
};

