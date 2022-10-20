// Enum LandscapePatch.ELandscapeTexturePatchSourceMode
enum class ELandscapeTexturePatchSourceMode : uint8 {
	None = 0,
	InternalTexture = 1,
	TextureBackedRenderTarget = 2,
	TextureAsset = 3,
	ELandscapeTexturePatchSourceMode_MAX = 4
};

// Enum LandscapePatch.ELandscapeTexturePatchBlendMode
enum class ELandscapeTexturePatchBlendMode : uint8 {
	AlphaBlend = 0,
	Additive = 1,
	Min = 2,
	Max = 3
};

// Enum LandscapePatch.ELandscapeTexturePatchFalloffMode
enum class ELandscapeTexturePatchFalloffMode : uint8 {
	Circle = 0,
	RoundedRectangle = 1,
	ELandscapeTexturePatchFalloffMode_MAX = 2
};

// Enum LandscapePatch.ELandscapeTextureHeightPatchEncoding
enum class ELandscapeTextureHeightPatchEncoding : uint8 {
	ZeroToOne = 0,
	WorldUnits = 1,
	NativePackedHeight = 2,
	ELandscapeTextureHeightPatchEncoding_MAX = 3
};

// Enum LandscapePatch.ELandscapeTextureHeightPatchZeroHeightMeaning
enum class ELandscapeTextureHeightPatchZeroHeightMeaning : uint8 {
	PatchZ = 0,
	LandscapeZ = 1,
	WorldZero = 2,
	ELandscapeTextureHeightPatchZeroHeightMeaning_MAX = 3
};

// ScriptStruct LandscapePatch.LandscapePatchComponentInstanceData
// Size: 0xc0 (Inherited: 0xb8)
struct FLandscapePatchComponentInstanceData : FSceneComponentInstanceData {
	int32_t IndexInManager; // 0xb8(0x04)
	char pad_BC[0x4]; // 0xbc(0x04)
};

// ScriptStruct LandscapePatch.LandscapeTexturePatchEncodingSettings
// Size: 0x10 (Inherited: 0x00)
struct FLandscapeTexturePatchEncodingSettings {
	double ZeroInEncoding; // 0x00(0x08)
	double WorldSpaceEncodingScale; // 0x08(0x08)
};

// ScriptStruct LandscapePatch.LandscapeHeightPatchConvertToNativeParams
// Size: 0x0c (Inherited: 0x00)
struct FLandscapeHeightPatchConvertToNativeParams {
	float ZeroInEncoding; // 0x00(0x04)
	float HeightScale; // 0x04(0x04)
	float HeightOffset; // 0x08(0x04)
};

