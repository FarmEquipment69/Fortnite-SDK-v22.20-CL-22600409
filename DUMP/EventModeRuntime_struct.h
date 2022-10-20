// Enum EventModeRuntime.EFortEventModeEmoteToPlay
enum class EFortEventModeEmoteToPlay : uint8 {
	Emote1 = 0,
	Emote2 = 1,
	Emote3 = 2,
	RandomEmote = 3,
	QuickEmotes = 4,
	EFortEventModeEmoteToPlay_MAX = 5
};

// ScriptStruct EventModeRuntime.EventModeFocusActor
// Size: 0x50 (Inherited: 0x00)
struct FEventModeFocusActor {
	struct TSoftObjectPtr<AActor> Target; // 0x00(0x28)
	float Distance; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FVector Offset; // 0x30(0x18)
	float FOV; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct EventModeRuntime.EventModeWidgetCachedData
// Size: 0x0c (Inherited: 0x00)
struct FEventModeWidgetCachedData {
	enum class EUIExtensionSlot Slot; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct TWeakObjectPtr<struct UUserWidget> Widget; // 0x04(0x08)
};

