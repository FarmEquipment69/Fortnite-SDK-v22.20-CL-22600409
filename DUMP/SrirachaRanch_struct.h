// Enum SrirachaRanch.EOnlineRadioSourceType
enum class EOnlineRadioSourceType : uint8 {
	Epic = 0,
	EOnlineRadioSourceType_MAX = 1
};

// Enum SrirachaRanch.ERadioSource
enum class ERadioSource : uint8 {
	Invalid = 0,
	Vehicle = 1,
	ERadioSource_MAX = 2
};

// Enum SrirachaRanch.EStreamingRadioSourceState
enum class EStreamingRadioSourceState : uint8 {
	None = 0,
	Loading = 1,
	LoadingPlayer = 2,
	LoadedPlayer = 3,
	Playing = 4,
	EStreamingRadioSourceState_MAX = 5
};

// ScriptStruct SrirachaRanch.AthenaRadioStation
// Size: 0x38 (Inherited: 0x00)
struct FAthenaRadioStation {
	struct FText Title; // 0x00(0x18)
	struct FString StationImage; // 0x18(0x10)
	struct FString ResourceID; // 0x28(0x10)
};

// ScriptStruct SrirachaRanch.SrirachaInputMappingData
// Size: 0x20 (Inherited: 0x00)
struct FSrirachaInputMappingData {
	struct FName MainActionName; // 0x00(0x04)
	struct FName GamepadActionName; // 0x04(0x04)
	struct FText DisplayName; // 0x08(0x18)
};

// ScriptStruct SrirachaRanch.SrirachaPerClassSpecialSeats
// Size: 0x10 (Inherited: 0x00)
struct FSrirachaPerClassSpecialSeats {
	struct TArray<int32_t> OutsideSeatIndices; // 0x00(0x10)
};

// ScriptStruct SrirachaRanch.StreamingRadioSourceData
// Size: 0x48 (Inherited: 0x00)
struct FStreamingRadioSourceData {
	enum class EStreamingRadioSourceState State; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t PlayingIndex; // 0x04(0x04)
	float FadeoutSeconds; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FAthenaRadioStation SourceOverride; // 0x10(0x38)
};

