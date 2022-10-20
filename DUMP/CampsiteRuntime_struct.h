// Enum CampsiteRuntime.ECampsiteActionType
enum class ECampsiteActionType : uint8 {
	None = 0,
	Stash = 1,
	Unstash = 2,
	Swap = 3,
	Clear = 4,
	Max = 5
};

// Enum CampsiteRuntime.EAbandonedCampsiteSpawnType
enum class EAbandonedCampsiteSpawnType : uint8 {
	None = 0,
	PlacedInLevel = 1,
	EnvironmentalQuery = 2,
	FromPlayerProfile = 3,
	Max = 4
};

// ScriptStruct CampsiteRuntime.AbandonedCampsiteAnalytics
// Size: 0x20 (Inherited: 0x00)
struct FAbandonedCampsiteAnalytics {
	char pad_0[0x20]; // 0x00(0x20)
};

