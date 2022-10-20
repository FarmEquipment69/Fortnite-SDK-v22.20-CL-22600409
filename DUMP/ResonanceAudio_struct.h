// Enum ResonanceAudio.EResonanceRenderMode
enum class EResonanceRenderMode : uint8 {
	StereoPanning = 0,
	BinauralLowQuality = 1,
	BinauralMediumQuality = 2,
	BinauralHighQuality = 3,
	RoomEffectsOnly = 4,
	EResonanceRenderMode_MAX = 5
};

// Enum ResonanceAudio.ERaQualityMode
enum class ERaQualityMode : uint8 {
	STEREO_PANNING = 0,
	BINAURAL_LOW = 1,
	BINAURAL_MEDIUM = 2,
	BINAURAL_HIGH = 3,
	ERaQualityMode_MAX = 4
};

// Enum ResonanceAudio.ERaSpatializationMethod
enum class ERaSpatializationMethod : uint8 {
	STEREO_PANNING = 0,
	HRTF = 1,
	ERaSpatializationMethod_MAX = 2
};

// Enum ResonanceAudio.ERaDistanceRolloffModel
enum class ERaDistanceRolloffModel : uint8 {
	LOGARITHMIC = 0,
	LINEAR = 1,
	NONE = 2,
	ERaDistanceRolloffModel_MAX = 3
};

// Enum ResonanceAudio.ERaMaterialName
enum class ERaMaterialName : uint8 {
	TRANSPARENT = 0,
	ACOUSTIC_CEILING_TILES = 1,
	BRICK_BARE = 2,
	BRICK_PAINTED = 3,
	CONCRETE_BLOCK_COARSE = 4,
	CONCRETE_BLOCK_PAINTED = 5,
	CURTAIN_HEAVY = 6,
	FIBER_GLASS_INSULATION = 7,
	GLASS_THIN = 8,
	GLASS_THICK = 9,
	GRASS = 10,
	LINOLEUM_ON_CONCRETE = 11,
	MARBLE = 12,
	METAL = 13,
	PARQUET_ONCONCRETE = 14,
	PLASTER_ROUGH = 15,
	PLASTER_SMOOTH = 16,
	PLYWOOD_PANEL = 17,
	POLISHED_CONCRETE_OR_TILE = 18,
	SHEETROCK = 19,
	WATER_OR_ICE_SURFACE = 20,
	WOOD_CEILING = 21,
	WOOD_PANEL = 22,
	UNIFORM = 23,
	ERaMaterialName_MAX = 24
};

// ScriptStruct ResonanceAudio.ResonanceAudioReverbPluginSettings
// Size: 0x70 (Inherited: 0x00)
struct FResonanceAudioReverbPluginSettings {
	bool bEnableRoomEffects; // 0x00(0x01)
	bool bGetTransformFromAudioVolume; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct FVector RoomPosition; // 0x08(0x18)
	struct FQuat RoomRotation; // 0x20(0x20)
	struct FVector RoomDimensions; // 0x40(0x18)
	enum class ERaMaterialName LeftWallMaterial; // 0x58(0x01)
	enum class ERaMaterialName RightWallMaterial; // 0x59(0x01)
	enum class ERaMaterialName FloorMaterial; // 0x5a(0x01)
	enum class ERaMaterialName CeilingMaterial; // 0x5b(0x01)
	enum class ERaMaterialName FrontWallMaterial; // 0x5c(0x01)
	enum class ERaMaterialName BackWallMaterial; // 0x5d(0x01)
	char pad_5E[0x2]; // 0x5e(0x02)
	float ReflectionScalar; // 0x60(0x04)
	float ReverbGain; // 0x64(0x04)
	float ReverbTimeModifier; // 0x68(0x04)
	float ReverbBrightness; // 0x6c(0x04)
};

