// Class CreativeVideoPlayerUI.CreativeVideoPlayerFullScreenWidget
// Size: 0x460 (Inherited: 0x3f8)
struct UCreativeVideoPlayerFullScreenWidget : UCommonActivatableWidget {
	char pad_3F8[0x18]; // 0x3f8(0x18)
	struct USoundSourceBus* SourceBus; // 0x410(0x08)
	struct USoundClass* SoundClass; // 0x418(0x08)
	struct FDataTableRowHandle HoldToSkipAction; // 0x420(0x10)
	struct UCommonButtonLegacy* Button_Skip; // 0x430(0x08)
	float SkipButtonTimeout; // 0x438(0x04)
	float LastInteractionTime; // 0x43c(0x04)
	bool bControlsVisible; // 0x440(0x01)
	char pad_441[0xf]; // 0x441(0x0f)
	struct UAudioComponent* SoundComponent; // 0x450(0x08)
	char pad_458[0x8]; // 0x458(0x08)

	void OnSkipButtonActionProgress(float HeldPercent); // Function CreativeVideoPlayerUI.CreativeVideoPlayerFullScreenWidget.OnSkipButtonActionProgress // (Final|Native|Private) // @ game+0x6753c4c
	void OnSkipButtonActionComplete(); // Function CreativeVideoPlayerUI.CreativeVideoPlayerFullScreenWidget.OnSkipButtonActionComplete // (Final|Native|Private) // @ game+0x6753c38
};

