// Class SubtitlesWidgets.FortMediaSubtitlesPlayer
// Size: 0x58 (Inherited: 0x28)
struct UFortMediaSubtitlesPlayer : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct UOverlays* SourceSubtitles; // 0x30(0x08)
	char pad_38[0x20]; // 0x38(0x20)

	void Stop(); // Function SubtitlesWidgets.FortMediaSubtitlesPlayer.Stop // (Final|Native|Public|BlueprintCallable) // @ game+0x689db24
	void SetSubtitles(struct UOverlays* Subtitles); // Function SubtitlesWidgets.FortMediaSubtitlesPlayer.SetSubtitles // (Final|Native|Public|BlueprintCallable) // @ game+0x689daa8
	void Play(); // Function SubtitlesWidgets.FortMediaSubtitlesPlayer.Play // (Final|Native|Public|BlueprintCallable) // @ game+0x689da94
	void BindToMediaPlayer(struct UMediaPlayer* InMediaPlayer); // Function SubtitlesWidgets.FortMediaSubtitlesPlayer.BindToMediaPlayer // (Final|Native|Public|BlueprintCallable) // @ game+0x689d95c
};

// Class SubtitlesWidgets.SubtitleDisplay
// Size: 0x560 (Inherited: 0x148)
struct USubtitleDisplay : UWidget {
	struct FSubtitleFormat Format; // 0x148(0x04)
	char pad_14C[0x4]; // 0x14c(0x04)
	struct USubtitleDisplayOptions* Options; // 0x150(0x08)
	float WrapTextAt; // 0x158(0x04)
	bool bPreviewMode; // 0x15c(0x01)
	char pad_15D[0x3]; // 0x15d(0x03)
	struct FText PreviewText; // 0x160(0x18)
	char pad_178[0x8]; // 0x178(0x08)
	struct FTextBlockStyle GeneratedStyle; // 0x180(0x310)
	struct FSlateBrush GeneratedBackgroundBorder; // 0x490(0xc0)
	char pad_550[0x10]; // 0x550(0x10)

	bool HasSubtitles(); // Function SubtitlesWidgets.SubtitleDisplay.HasSubtitles // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x689da54
};

// Class SubtitlesWidgets.SubtitleDisplayNative
// Size: 0x420 (Inherited: 0x28)
struct USubtitleDisplayNative : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct USubtitleDisplayOptions* Options; // 0x30(0x08)
	char pad_38[0x8]; // 0x38(0x08)
	struct FTextBlockStyle GeneratedStyle; // 0x40(0x310)
	struct FSlateBrush GeneratedBackgroundBorder; // 0x350(0xc0)
	char pad_410[0x10]; // 0x410(0x10)
};

// Class SubtitlesWidgets.SubtitleDisplayOptions
// Size: 0x1a0 (Inherited: 0x30)
struct USubtitleDisplayOptions : UDataAsset {
	struct FSlateFontInfo Font; // 0x30(0x58)
	int32_t DisplayTextSizes[0x5]; // 0x88(0x14)
	struct FLinearColor DisplayTextColors[0x2]; // 0x9c(0x20)
	float DisplayBorderSize[0x3]; // 0xbc(0x0c)
	float DisplayBackgroundOpacity[0x5]; // 0xc8(0x14)
	char pad_DC[0x4]; // 0xdc(0x04)
	struct FSlateBrush BackgroundBrush; // 0xe0(0xc0)
};

// Class SubtitlesWidgets.SubtitleDisplaySubsystem
// Size: 0x50 (Inherited: 0x30)
struct USubtitleDisplaySubsystem : UGameInstanceSubsystem {
	char pad_30[0x18]; // 0x30(0x18)
	struct FSubtitleFormat SubtitleFormat; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

