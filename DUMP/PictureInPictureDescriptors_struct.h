// Enum PictureInPictureDescriptors.PictureInPictureAction
enum class PictureInPictureAction : uint8 {
	NEXT = 0,
	PREVIOUS = 1,
	PLAY = 2,
	PAUSE = 3,
	PLAYPAUSE = 4,
	LIKE = 5,
	REPORT = 6,
	EXIT = 7,
	UNLIKE = 8,
	TOGGLELIKE = 9,
	TOGGLEFULLSCREEN = 10,
	Count = 11,
	PictureInPictureAction_MAX = 12
};

// Enum PictureInPictureDescriptors.PictureInPictureSourceType
enum class PictureInPictureSourceType : uint8 {
	NONE = 0,
	URL = 1,
	BLURL = 2,
	EXTERNAL_ASSETS = 3,
	PictureInPictureSourceType_MAX = 4
};

// ScriptStruct PictureInPictureDescriptors.PiPPartnerSource
// Size: 0x128 (Inherited: 0x00)
struct FPiPPartnerSource {
	char pad_0[0x48]; // 0x00(0x48)
	enum class PictureInPictureSourceType SourceType; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct FString Name; // 0x50(0x10)
	struct FDateTime StartTime; // 0x60(0x08)
	struct FDateTime EndTime; // 0x68(0x08)
	struct FFortMediaEventsStreamAssets AssetConfig; // 0x70(0x60)
	struct FString EventIconUrl; // 0xd0(0x10)
	struct UEpicCMSImage* CMSImage; // 0xe0(0x08)
	struct UPictureInPictureSourceActionData* ActionData; // 0xe8(0x08)
	struct TArray<struct FString> PlatformBlacklist; // 0xf0(0x10)
	struct TArray<struct FString> GameplayTagBlacklist; // 0x100(0x10)
	struct TArray<struct FString> GameplayTagWhitelist; // 0x110(0x10)
	bool bManual; // 0x120(0x01)
	char pad_121[0x7]; // 0x121(0x07)
};

// ScriptStruct PictureInPictureDescriptors.PictureInPictureAnalyticsPayload
// Size: 0x98 (Inherited: 0x00)
struct FPictureInPictureAnalyticsPayload {
	struct TMap<enum class PictureInPictureAction, int32_t> PartnerActionTally; // 0x00(0x50)
	char pad_50[0x48]; // 0x50(0x48)
};

// ScriptStruct PictureInPictureDescriptors.PIPVideoPlayerAssetConfig
// Size: 0x88 (Inherited: 0x00)
struct FPIPVideoPlayerAssetConfig {
	struct UMediaTexture* VideoTexture; // 0x00(0x08)
	struct UMediaPlayer* VideoPlayer; // 0x08(0x08)
	struct UMaterialInterface* VideoMaterial; // 0x10(0x08)
	struct UMaterialInterface* ThumbnailMaterial; // 0x18(0x08)
	struct FVector2D LoadingScreenSize; // 0x20(0x10)
	struct FVector2D LoadingScreenPosition; // 0x30(0x10)
	struct UFortStreamMediaSource* MediaSource; // 0x40(0x08)
	struct UMediaSoundComponent* SoundComponent; // 0x48(0x08)
	struct USoundClass* SoundClass; // 0x50(0x08)
	struct USoundMix* ActiveSoundMix; // 0x58(0x08)
	struct USoundSubmixBase* DefaultSubmix; // 0x60(0x08)
	struct USoundSubmixBase* LicensedSubmix; // 0x68(0x08)
	struct UFortMediaSubtitlesPlayer* SubtitlePlayer; // 0x70(0x08)
	struct ULocalizedOverlays* SubtitleOverlays; // 0x78(0x08)
	struct USubtitleDisplayOptions* SubtitleDisplayOptions; // 0x80(0x08)
};

// ScriptStruct PictureInPictureDescriptors.PIPVideoPlayerConfig
// Size: 0x48 (Inherited: 0x00)
struct FPIPVideoPlayerConfig {
	struct FString mimetype; // 0x00(0x10)
	struct FString BlurlVUID; // 0x10(0x10)
	bool bLoopEnabled; // 0x20(0x01)
	bool bAutoPlay; // 0x21(0x01)
	char pad_22[0x6]; // 0x22(0x06)
	struct FString VideoURL; // 0x28(0x10)
	bool bShareBlocked; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct FDateTime EventStartTime; // 0x40(0x08)
};

// ScriptStruct PictureInPictureDescriptors.PictureInPictureActionConfig
// Size: 0xf0 (Inherited: 0x00)
struct FPictureInPictureActionConfig {
	enum class PictureInPictureAction ActionType; // 0x00(0x01)
	char pad_1[0xf]; // 0x01(0x0f)
	struct FSlateBrush ActionBrush; // 0x10(0xc0)
	struct FText ActionText; // 0xd0(0x18)
	char pad_E8[0x8]; // 0xe8(0x08)
};

