// Enum SoundCueTemplates.ESoundContainerType
enum class ESoundContainerType : uint8 {
	Concatenate = 0,
	Randomize = 1,
	Mix = 2,
	ESoundContainerType_MAX = 3
};

// ScriptStruct SoundCueTemplates.SoundCueCrossfadeInfo
// Size: 0x20 (Inherited: 0x00)
struct FSoundCueCrossfadeInfo {
	struct FDistanceDatum DistanceInfo; // 0x00(0x14)
	char pad_14[0x4]; // 0x14(0x04)
	struct USoundWave* sound; // 0x18(0x08)
};

// ScriptStruct SoundCueTemplates.SoundCueTemplateQualitySettings
// Size: 0x28 (Inherited: 0x00)
struct FSoundCueTemplateQualitySettings {
	struct FText DisplayName; // 0x00(0x18)
	int32_t MaxConcatenatedVariations; // 0x18(0x04)
	int32_t MaxRandomizedVariations; // 0x1c(0x04)
	int32_t MaxMixVariations; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

