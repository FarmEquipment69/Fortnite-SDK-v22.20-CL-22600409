// Enum GameplayEventRouter.EEventBubblingRule
enum class EEventBubblingRule : uint8 {
	None = 0,
	Down = 1,
	EEventBubblingRule_MAX = 2
};

// ScriptStruct GameplayEventRouter.GameplayEventListenerHandle
// Size: 0x1c (Inherited: 0x00)
struct FGameplayEventListenerHandle {
	char pad_0[0x10]; // 0x00(0x10)
	int32_t Handle; // 0x10(0x04)
	char pad_14[0x8]; // 0x14(0x08)
};

// ScriptStruct GameplayEventRouter.GameplayEventId
// Size: 0x10 (Inherited: 0x00)
struct FGameplayEventId {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct GameplayEventRouter.GameplayEventListenerData
// Size: 0xb0 (Inherited: 0x00)
struct FGameplayEventListenerData {
	char pad_0[0x80]; // 0x00(0x80)
	struct UScriptStruct* EventType; // 0x80(0x08)
	struct UObject* EventContext; // 0x88(0x08)
	char pad_90[0x20]; // 0x90(0x20)
};

// ScriptStruct GameplayEventRouter.GameplayEventListenerList
// Size: 0x38 (Inherited: 0x00)
struct FGameplayEventListenerList {
	char pad_0[0x38]; // 0x00(0x38)
};

