// Enum CreativeVideoPlayerRuntime.ECreativeVideoPlayerFullscreenEffects
enum class ECreativeVideoPlayerFullscreenEffects : uint8 {
	None = 0,
	NoCollisionOnly = 1,
	NoDamageOnly = 2,
	NoCollisionAndNoDamage = 3,
	ECreativeVideoPlayerFullscreenEffects_MAX = 4
};

// ScriptStruct CreativeVideoPlayerRuntime.CreativeVideoPlayerFullscreenOptions
// Size: 0x02 (Inherited: 0x00)
struct FCreativeVideoPlayerFullscreenOptions {
	enum class ECreativeVideoPlayerFullscreenEffects GameplayEffects; // 0x00(0x01)
	bool bPromptFirst; // 0x01(0x01)
};

