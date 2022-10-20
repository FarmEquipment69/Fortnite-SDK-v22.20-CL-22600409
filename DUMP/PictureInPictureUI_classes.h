// Class PictureInPictureUI.PictureInPictureBladeMenuButton
// Size: 0x1480 (Inherited: 0x1480)
struct UPictureInPictureBladeMenuButton : UCommonButtonLegacy {

	void UpdatePiPStatusBP(bool LoggedIn, bool Enabled, bool ParentalControlsEnabled); // Function PictureInPictureUI.PictureInPictureBladeMenuButton.UpdatePiPStatusBP // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnPartnerListUpdated(); // Function PictureInPictureUI.PictureInPictureBladeMenuButton.OnPartnerListUpdated // (Final|Native|Private) // @ game+0x148a848
	void HandlePiPLogoutSuccess(); // Function PictureInPictureUI.PictureInPictureBladeMenuButton.HandlePiPLogoutSuccess // (Final|Native|Public) // @ game+0x29d5d88
	void HandlePiPLoginSuccess(); // Function PictureInPictureUI.PictureInPictureBladeMenuButton.HandlePiPLoginSuccess // (Final|Native|Public) // @ game+0x29d5d88
	void HandlePiPEnabled(bool Enabled); // Function PictureInPictureUI.PictureInPictureBladeMenuButton.HandlePiPEnabled // (Final|Native|Public) // @ game+0x2b51864
};

// Class PictureInPictureUI.PictureInPictureLoadingScreenOverlayAction
// Size: 0x60 (Inherited: 0x28)
struct UPictureInPictureLoadingScreenOverlayAction : UFortUIGameFeatureAction {
	struct USubtitleDisplayNative* SubtitleDisplay; // 0x28(0x08)
	char pad_30[0x30]; // 0x30(0x30)
};

// Class PictureInPictureUI.PictureInPictureMetadataOverlay
// Size: 0x3f8 (Inherited: 0x3f8)
struct UPictureInPictureMetadataOverlay : UCommonActivatableWidget {

	void OnMediaStarted(); // Function PictureInPictureUI.PictureInPictureMetadataOverlay.OnMediaStarted // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void HandleOnPIPVideoStarted(); // Function PictureInPictureUI.PictureInPictureMetadataOverlay.HandleOnPIPVideoStarted // (Final|Native|Protected) // @ game+0x689d0f8
	void HandleOnPIPVideoResumed(); // Function PictureInPictureUI.PictureInPictureMetadataOverlay.HandleOnPIPVideoResumed // (Final|Native|Protected) // @ game+0x689d0f8
};

// Class PictureInPictureUI.PictureInPicturePanelWidget
// Size: 0x608 (Inherited: 0x3f8)
struct UPictureInPicturePanelWidget : UCommonActivatableWidget {
	char pad_3F8[0x8]; // 0x3f8(0x08)
	struct USizeBox* Video_Size_Box; // 0x400(0x08)
	struct FVector2D StandardVideoSize; // 0x408(0x10)
	struct FVector2D StandardVideoTranslation; // 0x418(0x10)
	struct UImage* Image_Movie; // 0x428(0x08)
	struct UCommonLazyImage* Image_Thumbnail_Prev; // 0x430(0x08)
	struct UCommonLazyImage* Image_Thumbnail_Next; // 0x438(0x08)
	struct UNamedSlot* MetadataOverlaySlot; // 0x440(0x08)
	struct UOverlay* Overlay_Main; // 0x448(0x08)
	struct UOverlay* Overlay_Keybind; // 0x450(0x08)
	struct FDataTableRowHandle PressedObjectInputAction; // 0x458(0x10)
	char pad_468[0x8]; // 0x468(0x08)
	struct UPictureInPicturePartnerControls* CurrentPartner; // 0x470(0x08)
	bool bEnableUCPCheck; // 0x478(0x01)
	char pad_479[0x7]; // 0x479(0x07)
	struct UCommonActivatableWidget* SourcePickerClass; // 0x480(0x08)
	struct USoundSourceBus* SourceBus; // 0x488(0x08)
	struct UCommonActionWidget* ToggleActionWidget; // 0x490(0x08)
	struct UCommonActivatableWidget* SourcePickerWidget; // 0x498(0x08)
	struct UPictureInPicturePlayer* VideoWidget; // 0x4a0(0x08)
	char pad_4A8[0x20]; // 0x4a8(0x20)
	struct UAudioComponent* PIPSoundComponent; // 0x4c8(0x08)
	struct FPiPPartnerSource CurrentSource; // 0x4d0(0x128)
	char pad_5F8[0x8]; // 0x5f8(0x08)
	struct USubtitleDisplay* Subtitles; // 0x600(0x08)

	void ToggleFullScreenPiP(); // Function PictureInPictureUI.PictureInPicturePanelWidget.ToggleFullScreenPiP // (Final|Native|Protected) // @ game+0x689d5b0
	void ShowDebugInfo(bool bShow); // Function PictureInPictureUI.PictureInPicturePanelWidget.ShowDebugInfo // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void SetupPIPSoundComponent(struct FFortMediaEventsStreamAssets& InStreamAssets); // Function PictureInPictureUI.PictureInPicturePanelWidget.SetupPIPSoundComponent // (Final|Native|Private|HasOutParms|BlueprintCallable) // @ game+0x689d4e4
	void IntentionalDeactivate(); // Function PictureInPictureUI.PictureInPicturePanelWidget.IntentionalDeactivate // (Final|Native|Protected) // @ game+0x689d4b4
	void HandleToggleFullscreenMap(bool bFullscreenMapVisible); // Function PictureInPictureUI.PictureInPicturePanelWidget.HandleToggleFullscreenMap // (Final|Native|Protected) // @ game+0x689d434
	void HandleOnPartnerSourceChanged(struct FPiPPartnerSource& InSelectedSource); // Function PictureInPictureUI.PictureInPicturePanelWidget.HandleOnPartnerSourceChanged // (Final|Native|Protected|HasOutParms) // @ game+0x2ad8d5c
	void HandleOnPartnerListUpdated(); // Function PictureInPictureUI.PictureInPicturePanelWidget.HandleOnPartnerListUpdated // (Final|Native|Protected) // @ game+0x1c1d278
	void HandleOnPartnerChanged(struct UPictureInPicturePartnerControls* NewPartnerControls); // Function PictureInPictureUI.PictureInPicturePanelWidget.HandleOnPartnerChanged // (Final|Native|Protected) // @ game+0x689d10c
	void HandleIsPictureInPictureEnabledChanged(bool bIsPiPEnabled); // Function PictureInPictureUI.PictureInPicturePanelWidget.HandleIsPictureInPictureEnabledChanged // (Final|Native|Protected) // @ game+0x27c5604
	void FlipPIPAudioSubmix(bool bInDefault, struct FFortMediaEventsStreamAssets& InStreamAssets, bool bForce); // Function PictureInPictureUI.PictureInPicturePanelWidget.FlipPIPAudioSubmix // (Final|Native|Private|HasOutParms|BlueprintCallable) // @ game+0x689cfa8
	void DestroyPIPSoundComponent(); // Function PictureInPictureUI.PictureInPicturePanelWidget.DestroyPIPSoundComponent // (Final|Native|Private|BlueprintCallable) // @ game+0x689cf94
	void AutoEnableController(); // Function PictureInPictureUI.PictureInPicturePanelWidget.AutoEnableController // (Final|Native|Private) // @ game+0x689cf80
};

// Class PictureInPictureUI.PictureInPictureSourcePicker
// Size: 0x5f0 (Inherited: 0x3f8)
struct UPictureInPictureSourcePicker : UCommonActivatableWidget {
	char pad_3F8[0x8]; // 0x3f8(0x08)
	struct FVector2D FullScreenTranslation; // 0x400(0x10)
	struct FVector2D StandardTranslation; // 0x410(0x10)
	struct UVerticalBox* VerticalBox_Main; // 0x420(0x08)
	char pad_428[0x8]; // 0x428(0x08)
	struct FSlateBrush FullScreenActionBrush; // 0x430(0xc0)
	struct FSlateBrush StandardScreenActionBrush; // 0x4f0(0xc0)
	char pad_5B0[0x1]; // 0x5b0(0x01)
	struct FPrimaryContentSetup PrimaryContentSetup; // 0x5b1(0x03)
	char pad_5B4[0x4]; // 0x5b4(0x04)
	struct UCommonTextBlock* Text_ItemName; // 0x5b8(0x08)
	struct UFortPickerOverlay* PickerOverlay_MediaSource; // 0x5c0(0x08)
	struct UOverlay* Overlay_Main; // 0x5c8(0x08)
	struct UTexture2D* DefaultItemTexture; // 0x5d0(0x08)
	struct UPictureInPictureMediaController* CurrentPartner; // 0x5d8(0x08)
	char pad_5E0[0x10]; // 0x5e0(0x10)

	void HandleOnPartnerSourceChanged(struct TArray<struct FPiPPartnerSource>& CurrentSources); // Function PictureInPictureUI.PictureInPictureSourcePicker.HandleOnPartnerSourceChanged // (Final|Native|Private|HasOutParms) // @ game+0x689d398
	void HandleOnPartnerChanged(struct UPictureInPicturePartnerControls* NewPartner); // Function PictureInPictureUI.PictureInPictureSourcePicker.HandleOnPartnerChanged // (Final|Native|Private) // @ game+0x689d314
};

