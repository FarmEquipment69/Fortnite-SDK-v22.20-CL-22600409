// Enum FortniteConversationRuntime.EInteractionRange
enum class EInteractionRange : uint8 {
	Preview = 0,
	Interaction = 1,
	EInteractionRange_MAX = 2
};

// ScriptStruct FortniteConversationRuntime.FortConversationConditionalMessage
// Size: 0x20 (Inherited: 0x00)
struct FFortConversationConditionalMessage {
	struct UFortConversationContextCondition* Condition; // 0x00(0x08)
	struct FText message; // 0x08(0x18)
};

// ScriptStruct FortniteConversationRuntime.FortConversationNodeConditionalMessages
// Size: 0x10 (Inherited: 0x00)
struct FFortConversationNodeConditionalMessages {
	struct TArray<struct FFortConversationConditionalMessage> Messages; // 0x00(0x10)
};

