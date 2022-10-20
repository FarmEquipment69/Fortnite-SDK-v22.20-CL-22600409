// Enum GameplayMessages.EGameplayMessageMatchType
enum class EGameplayMessageMatchType : uint8 {
	ExactMatch = 0,
	PartialMatch = 1,
	EGameplayMessageMatchType_MAX = 2
};

// ScriptStruct GameplayMessages.ReplicatedMessageData
// Size: 0x18 (Inherited: 0x00)
struct FReplicatedMessageData {
	struct UScriptStruct* StructType; // 0x00(0x08)
	char pad_8[0x10]; // 0x08(0x10)
};

// ScriptStruct GameplayMessages.ReplicatedMessage
// Size: 0x10 (Inherited: 0x00)
struct FReplicatedMessage {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct GameplayMessages.GameplayMessageReceiverHandle
// Size: 0x18 (Inherited: 0x00)
struct FGameplayMessageReceiverHandle {
	struct TWeakObjectPtr<struct UGameplayMessageRouter> Subsystem; // 0x00(0x08)
	struct FEventMessageTag Channel; // 0x08(0x04)
	int32_t ID; // 0x0c(0x04)
	char pad_10[0x8]; // 0x10(0x08)
};

// ScriptStruct GameplayMessages.EventMessageTag
// Size: 0x04 (Inherited: 0x04)
struct FEventMessageTag : FGameplayTag {
};

// ScriptStruct GameplayMessages.GameplayMessageReceiverData
// Size: 0xa0 (Inherited: 0x00)
struct FGameplayMessageReceiverData {
	char pad_0[0xa0]; // 0x00(0xa0)
};

