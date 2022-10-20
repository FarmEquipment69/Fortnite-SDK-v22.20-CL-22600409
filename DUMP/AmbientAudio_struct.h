// Enum AmbientAudio.EAmbientAudioEntryActionType
enum class EAmbientAudioEntryActionType : uint8 {
	Added = 0,
	Updated = 1,
	Removed = 2,
	Count = 3,
	EAmbientAudioEntryActionType_MAX = 4
};

// Enum AmbientAudio.EAmbientAudioTagActionType
enum class EAmbientAudioTagActionType : uint8 {
	Added = 0,
	Removed = 1,
	Count = 2,
	EAmbientAudioTagActionType_MAX = 3
};

// ScriptStruct AmbientAudio.AmbientAudioBase
// Size: 0xc0 (Inherited: 0x00)
struct FAmbientAudioBase {
	struct TSoftObjectPtr<USoundBase> sound; // 0x00(0x28)
	struct FGameplayTagQuery Requirements; // 0x28(0x48)
	struct FAudioGameplayRequirements PlaybackRequirements; // 0x70(0x50)
};

// ScriptStruct AmbientAudio.AmbientAudioLoop
// Size: 0xc0 (Inherited: 0xc0)
struct FAmbientAudioLoop : FAmbientAudioBase {
};

// ScriptStruct AmbientAudio.AmbientAudioOneShot
// Size: 0xe0 (Inherited: 0xc0)
struct FAmbientAudioOneShot : FAmbientAudioBase {
	struct FVector2D RetriggerTimeRange; // 0xc0(0x10)
	struct FVector2D TriggerDistanceRange; // 0xd0(0x10)
};

