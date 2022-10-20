// Class PictureInPictureCore.PictureInPictureCheatManager
// Size: 0x28 (Inherited: 0x28)
struct UPictureInPictureCheatManager : UChildCheatManager {

	void SuspendPiP(); // Function PictureInPictureCore.PictureInPictureCheatManager.SuspendPiP // (Final|Exec|Native|Public|BlueprintCallable) // @ game+0x24841e4
	void ResumePiP(); // Function PictureInPictureCore.PictureInPictureCheatManager.ResumePiP // (Final|Exec|Native|Public|BlueprintCallable) // @ game+0x24841e4
	void PrintPiPRegionInfo(); // Function PictureInPictureCore.PictureInPictureCheatManager.PrintPiPRegionInfo // (Final|Exec|Native|Public|BlueprintCallable) // @ game+0x24841e4
	void EnablePiP(); // Function PictureInPictureCore.PictureInPictureCheatManager.EnablePiP // (Final|Exec|Native|Public|BlueprintCallable) // @ game+0x24841e4
	void DisablePiP(); // Function PictureInPictureCore.PictureInPictureCheatManager.DisablePiP // (Final|Exec|Native|Public|BlueprintCallable) // @ game+0x24841e4
	void CanEnablePartnerPiP(); // Function PictureInPictureCore.PictureInPictureCheatManager.CanEnablePartnerPiP // (Final|Exec|Native|Public|BlueprintCallable) // @ game+0x24841e4
};

// Class PictureInPictureCore.PictureInPictureCoreEnableDisableAction
// Size: 0x28 (Inherited: 0x28)
struct UPictureInPictureCoreEnableDisableAction : UFortUIGameFeatureAction {
};

// Class PictureInPictureCore.PictureInPictureMediaController
// Size: 0x558 (Inherited: 0x28)
struct UPictureInPictureMediaController : UObject {
	struct FString PartnerName; // 0x28(0x10)
	char pad_38[0x10]; // 0x38(0x10)
	struct TArray<struct UPictureInPictureActionData*> ActionDataArray; // 0x48(0x10)
	struct FPIPVideoPlayerAssetConfig DefaultPlayerAssetConfig; // 0x58(0x88)
	struct FPIPVideoPlayerAssetConfig PlayerAssetConfig; // 0xe0(0x88)
	struct UPictureInPicturePlayer* VideoWidget; // 0x168(0x08)
	struct FPIPVideoPlayerConfig VideoWidgetConfig; // 0x170(0x48)
	struct TWeakObjectPtr<struct UCommonLazyImage> ThumbnailImageNext; // 0x1b8(0x08)
	struct TWeakObjectPtr<struct UCommonLazyImage> ThumbnailImagePrevious; // 0x1c0(0x08)
	bool bSupportsMultipleSources; // 0x1c8(0x01)
	char pad_1C9[0x7]; // 0x1c9(0x07)
	struct FPiPPartnerSource CurrentSource; // 0x1d0(0x128)
	struct TArray<struct FPiPPartnerSource> Sources; // 0x2f8(0x10)
	struct TArray<struct FPiPPartnerSource> ValidSources; // 0x308(0x10)
	struct FMediaPlayerOptions LocalOptions; // 0x318(0x30)
	struct FMulticastInlineDelegate BaseErrorEvent; // 0x348(0x10)
	struct FMulticastInlineDelegate BaseEnabledEvent; // 0x358(0x10)
	struct FMulticastInlineDelegate SourcesChangedEvent; // 0x368(0x10)
	struct FMulticastInlineDelegate SourceSelectedEvent; // 0x378(0x10)
	char pad_388[0x8]; // 0x388(0x08)
	struct TArray<struct FPictureInPictureActionConfig> InstanceActionData; // 0x390(0x10)
	struct UPictureInPictureAnalyticsManager* AnalyticsManager; // 0x3a0(0x08)
	struct FDateTime ActiveStartTime; // 0x3a8(0x08)
	struct FDateTime PausedStartTime; // 0x3b0(0x08)
	char pad_3B8[0x8]; // 0x3b8(0x08)
	struct FPiPSuspendInfo SuspendedInfo; // 0x3c0(0x130)
	char pad_4F0[0x68]; // 0x4f0(0x68)

	void ToggleFullScreen(); // Function PictureInPictureCore.PictureInPictureMediaController.ToggleFullScreen // (Final|Native|Public) // @ game+0x689bc60
	void Stop(); // Function PictureInPictureCore.PictureInPictureMediaController.Stop // (Native|Public|BlueprintCallable) // @ game+0x26d2f98
	void SetEnabled(bool bIsEnabled, bool bIsFromUser); // Function PictureInPictureCore.PictureInPictureMediaController.SetEnabled // (Native|Public|BlueprintCallable) // @ game+0x689b668
	void SetCurrentSource(struct FPiPPartnerSource& SelectedSource); // Function PictureInPictureCore.PictureInPictureMediaController.SetCurrentSource // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x689b5c0
	void Play(bool bForcePlay); // Function PictureInPictureCore.PictureInPictureMediaController.Play // (Native|Public|BlueprintCallable) // @ game+0x689b53c
	void Pause(); // Function PictureInPictureCore.PictureInPictureMediaController.Pause // (Native|Public|BlueprintCallable) // @ game+0x18168e4
	void OnPrevThumbnailReceived(struct UTexture2DDynamic* InTexture); // Function PictureInPictureCore.PictureInPictureMediaController.OnPrevThumbnailReceived // (Final|Native|Private) // @ game+0x689b4bc
	void OnNextThumbnailReceived(struct UTexture2DDynamic* InTexture); // Function PictureInPictureCore.PictureInPictureMediaController.OnNextThumbnailReceived // (Final|Native|Private) // @ game+0x689b43c
	void OnMediaStartedAnalytics(); // Function PictureInPictureCore.PictureInPictureMediaController.OnMediaStartedAnalytics // (Final|Native|Private) // @ game+0x689b428
	void OnMediaResumedAnalytics(); // Function PictureInPictureCore.PictureInPictureMediaController.OnMediaResumedAnalytics // (Final|Native|Private) // @ game+0x689b414
	void OnMediaPausedAnalytics(); // Function PictureInPictureCore.PictureInPictureMediaController.OnMediaPausedAnalytics // (Final|Native|Private) // @ game+0x689b3d8
	void OnMediaClosedAnalytics(); // Function PictureInPictureCore.PictureInPictureMediaController.OnMediaClosedAnalytics // (Final|Native|Private) // @ game+0x689b3c4
	bool IsPlaying(); // Function PictureInPictureCore.PictureInPictureMediaController.IsPlaying // (Final|Native|Public|BlueprintCallable) // @ game+0x689b27c
	bool IsPaused(); // Function PictureInPictureCore.PictureInPictureMediaController.IsPaused // (Final|Native|Public|BlueprintCallable) // @ game+0x689b258
	bool IsMultiSourceSupported(); // Function PictureInPictureCore.PictureInPictureMediaController.IsMultiSourceSupported // (Native|Public|BlueprintCallable) // @ game+0x5c9990c
	bool IsEnabled(); // Function PictureInPictureCore.PictureInPictureMediaController.IsEnabled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x689b22c
	void HandleSourceSelectedEvent(struct FString SelectedSource); // Function PictureInPictureCore.PictureInPictureMediaController.HandleSourceSelectedEvent // (Native|Protected) // @ game+0x689b03c
	struct TArray<struct FPiPPartnerSource> GetValidSources(); // Function PictureInPictureCore.PictureInPictureMediaController.GetValidSources // (Native|Public|BlueprintCallable) // @ game+0x689af78
	struct TArray<struct FPiPPartnerSource> GetSources(); // Function PictureInPictureCore.PictureInPictureMediaController.GetSources // (Native|Public|BlueprintCallable) // @ game+0x689af48
	struct FPIPVideoPlayerAssetConfig GetPlayerAssetConfig(); // Function PictureInPictureCore.PictureInPictureMediaController.GetPlayerAssetConfig // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x689aedc
	struct UPictureInPicturePlayer* GetMediaPlayerWidget(); // Function PictureInPictureCore.PictureInPictureMediaController.GetMediaPlayerWidget // (Final|Native|Public|Const) // @ game+0x689aa24
	struct FPIPVideoPlayerAssetConfig GetDefaultPlayerAssetConfig(); // Function PictureInPictureCore.PictureInPictureMediaController.GetDefaultPlayerAssetConfig // (Final|Native|Public|Const) // @ game+0x689a70c
	struct FPiPPartnerSource GetCurrentSource(); // Function PictureInPictureCore.PictureInPictureMediaController.GetCurrentSource // (Native|Public|BlueprintCallable) // @ game+0x689a6dc
	struct TArray<struct UPictureInPictureActionData*> GetActions(); // Function PictureInPictureCore.PictureInPictureMediaController.GetActions // (Final|Native|Public|BlueprintCallable) // @ game+0x689a494
	void Exit(bool bStop); // Function PictureInPictureCore.PictureInPictureMediaController.Exit // (Native|Public|BlueprintCallable) // @ game+0x689a3fc
};

// Class PictureInPictureCore.PictureInPictureMediaPlayerCtrl
// Size: 0x128 (Inherited: 0x118)
struct UPictureInPictureMediaPlayerCtrl : UFortMediaPlayerCtrl {
	char pad_118[0x10]; // 0x118(0x10)
};

// Class PictureInPictureCore.PictureInPicturePlayer
// Size: 0x230 (Inherited: 0x28)
struct UPictureInPicturePlayer : UObject {
	char pad_28[0xe0]; // 0x28(0xe0)
	struct FPIPVideoPlayerAssetConfig AssetConfig; // 0x108(0x88)
	struct UPictureInPictureMediaPlayerCtrl* MediaController; // 0x190(0x08)
	char pad_198[0x50]; // 0x198(0x50)
	struct USoundSubmixBase* DefaultSubmix; // 0x1e8(0x08)
	struct USoundSubmixBase* LicensedSubmix; // 0x1f0(0x08)
	char pad_1F8[0x38]; // 0x1f8(0x38)

	void UpdateStreamingPlayerSize(struct FVector2D& InVector); // Function PictureInPictureCore.PictureInPicturePlayer.UpdateStreamingPlayerSize // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x689bd50
	void StreamedVideoOnUrlSuccess(struct FString URL); // Function PictureInPictureCore.PictureInPicturePlayer.StreamedVideoOnUrlSuccess // (Final|Native|Private) // @ game+0x18c7e4c
	void StreamedVideoOnUrlFailure(struct FString URL); // Function PictureInPictureCore.PictureInPicturePlayer.StreamedVideoOnUrlFailure // (Final|Native|Private) // @ game+0x689bb00
	bool SetPlayerAssetConfig(struct FPIPVideoPlayerAssetConfig& InAssetConfig); // Function PictureInPictureCore.PictureInPicturePlayer.SetPlayerAssetConfig // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x689b734
	bool IsAssetConfigSet(); // Function PictureInPictureCore.PictureInPicturePlayer.IsAssetConfigSet // (Final|Native|Public|BlueprintCallable) // @ game+0x689b214
	void HandleUCPAudioChanged(struct UFortClientSettingsRecord* Settings); // Function PictureInPictureCore.PictureInPicturePlayer.HandleUCPAudioChanged // (Final|Native|Private) // @ game+0x689b194
	void FlushPlayerAssetConfig(); // Function PictureInPictureCore.PictureInPicturePlayer.FlushPlayerAssetConfig // (Final|Native|Public|BlueprintCallable) // @ game+0x689a480
};

// Class PictureInPictureCore.PictureInPictureClient
// Size: 0xa8 (Inherited: 0x28)
struct UPictureInPictureClient : UObject {
	struct FMulticastInlineDelegate LoginSuccessEvent; // 0x28(0x10)
	struct FMulticastInlineDelegate LogoutSuccessEvent; // 0x38(0x10)
	struct FMulticastInlineDelegate QRCodeReceivedEvent; // 0x48(0x10)
	struct FMulticastInlineDelegate ErrorDelegate; // 0x58(0x10)
	char pad_68[0x8]; // 0x68(0x08)
	struct FString UserName; // 0x70(0x10)
	struct UEpicCMSImage* UserAvatarImage; // 0x80(0x08)
	char pad_88[0x8]; // 0x88(0x08)
	struct UTexture2DDynamic* CurrentQRCodeTexture; // 0x90(0x08)
	char pad_98[0x10]; // 0x98(0x10)

	void Logout(); // Function PictureInPictureCore.PictureInPictureClient.Logout // (Native|Public|BlueprintCallable) // @ game+0x16ee844
	bool IsLoggedIn(); // Function PictureInPictureCore.PictureInPictureClient.IsLoggedIn // (Native|Public|BlueprintCallable) // @ game+0x2ad8cc0
	struct UTexture2DDynamic* GetQRCodeTexture(); // Function PictureInPictureCore.PictureInPictureClient.GetQRCodeTexture // (Final|Native|Public|BlueprintCallable) // @ game+0x1c7ea00
	enum class PictureInPictureAuthState GetLoginState(); // Function PictureInPictureCore.PictureInPictureClient.GetLoginState // (Final|Native|Public|BlueprintCallable) // @ game+0x21f44cc
	struct UEpicCMSImage* GetAvatarImage(); // Function PictureInPictureCore.PictureInPictureClient.GetAvatarImage // (Final|Native|Public|BlueprintCallable) // @ game+0x686ef1c
	void EndLogin(struct UObject* InWorldContext); // Function PictureInPictureCore.PictureInPictureClient.EndLogin // (Native|Public|BlueprintCallable) // @ game+0x689a378
	void CheckLogin(struct UObject* InWorldContext); // Function PictureInPictureCore.PictureInPictureClient.CheckLogin // (Native|Public|BlueprintCallable) // @ game+0x6487de4
	void BeginLogin(struct UObject* InWorldContext); // Function PictureInPictureCore.PictureInPictureClient.BeginLogin // (Native|Public|BlueprintCallable) // @ game+0x689a274
};

// Class PictureInPictureCore.PictureInPicturePartnerControls
// Size: 0x40 (Inherited: 0x28)
struct UPictureInPicturePartnerControls : UObject {
	bool bRequiresAgeOfConsent; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct UPictureInPictureClient* ClientObject; // 0x30(0x08)
	struct UPictureInPictureMediaController* MediaController; // 0x38(0x08)
};

// Class PictureInPictureCore.PictureInPictureSubsystem
// Size: 0x120 (Inherited: 0x30)
struct UPictureInPictureSubsystem : UEngineSubsystem {
	struct TArray<struct UPictureInPicturePartnerDataAsset*> AvailableClientsList; // 0x30(0x10)
	struct FMulticastInlineDelegate OnPartnerUpdateComplete; // 0x40(0x10)
	struct FMulticastInlineDelegate OnPartnerChanged; // 0x50(0x10)
	bool bPartnerListUpdated; // 0x60(0x01)
	bool bIsSuspended; // 0x61(0x01)
	bool bCMSInitialized; // 0x62(0x01)
	char pad_63[0x5]; // 0x63(0x05)
	struct FString CurrentPlatform; // 0x68(0x10)
	char pad_78[0x10]; // 0x78(0x10)
	struct TMap<struct FString, struct UPictureInPicturePartnerControls*> SupportedPartnerControls; // 0x88(0x50)
	struct FString CurrentPartnerName; // 0xd8(0x10)
	struct FString CurrentContinent; // 0xe8(0x10)
	struct FString CurrentCountry; // 0xf8(0x10)
	struct TArray<struct FString> CurrentSubdivisions; // 0x108(0x10)
	struct UFortMediaCMSEventsComponent* CMSEventsComponent; // 0x118(0x08)

	void UpdatePartnerItemList(struct UObject* InWorldContext, bool bForce); // Function PictureInPictureCore.PictureInPictureSubsystem.UpdatePartnerItemList // (Final|Native|Public|BlueprintCallable) // @ game+0x689bc88
	void ToggleFullScreenPiP(); // Function PictureInPictureCore.PictureInPictureSubsystem.ToggleFullScreenPiP // (Final|Native|Public) // @ game+0x689bc74
	void SuspendCurrentMediaController(); // Function PictureInPictureCore.PictureInPictureSubsystem.SuspendCurrentMediaController // (Final|Native|Public) // @ game+0x1c1eb9c
	void StoreLastUsedSource(struct FString InPartnerSourceName); // Function PictureInPictureCore.PictureInPictureSubsystem.StoreLastUsedSource // (Final|Native|Public|BlueprintCallable) // @ game+0x689b9b0
	void StoreLastUsedPartner(struct FString InPartnerName); // Function PictureInPictureCore.PictureInPictureSubsystem.StoreLastUsedPartner // (Final|Native|Public|BlueprintCallable) // @ game+0x689b860
	void StoreAutoEnableSetting(bool InUserEnabled); // Function PictureInPictureCore.PictureInPictureSubsystem.StoreAutoEnableSetting // (Final|Native|Public|BlueprintCallable) // @ game+0x689b7f0
	void ShutdownAllPartners(); // Function PictureInPictureCore.PictureInPictureSubsystem.ShutdownAllPartners // (Final|Native|Public|BlueprintCallable) // @ game+0x689b7dc
	void ResumeCurrentMediaController(); // Function PictureInPictureCore.PictureInPictureSubsystem.ResumeCurrentMediaController // (Final|Native|Public) // @ game+0x1c1ebb0
	void OnCurrentPartnerSourceSelected(struct FPiPPartnerSource& SelectedSource); // Function PictureInPictureCore.PictureInPictureSubsystem.OnCurrentPartnerSourceSelected // (Final|Native|Private|HasOutParms) // @ game+0x689b320
	void OnCMSEventValid(struct UMediaCMSEvent* ValidEvent); // Function PictureInPictureCore.PictureInPictureSubsystem.OnCMSEventValid // (Final|Native|Private) // @ game+0x1c1ebc4
	void OnCMSEventInvalid(struct UMediaCMSEvent* InvalidEvent); // Function PictureInPictureCore.PictureInPictureSubsystem.OnCMSEventInvalid // (Final|Native|Private) // @ game+0x689b2a0
	bool IsPartnerListUpdated(); // Function PictureInPictureCore.PictureInPictureSubsystem.IsPartnerListUpdated // (Final|Native|Public|BlueprintCallable) // @ game+0x689b244
	void HandleMediaSourceRequest(); // Function PictureInPictureCore.PictureInPictureSubsystem.HandleMediaSourceRequest // (Final|Native|Private) // @ game+0x689b028
	void HandleFNEventsSetCurrentMediaControllerEnabled(bool InEnabled); // Function PictureInPictureCore.PictureInPictureSubsystem.HandleFNEventsSetCurrentMediaControllerEnabled // (Final|Native|Private) // @ game+0x689afa8
	struct TArray<struct UPictureInPicturePartnerDataAsset*> GetPartnerItemList(); // Function PictureInPictureCore.PictureInPictureSubsystem.GetPartnerItemList // (Final|Native|Public|BlueprintCallable) // @ game+0x689ae68
	struct UPictureInPicturePartnerDataAsset* GetPartnerItem(struct FString PartnerName); // Function PictureInPictureCore.PictureInPictureSubsystem.GetPartnerItem // (Final|Native|Public|BlueprintCallable) // @ game+0x689ad04
	struct UPictureInPicturePartnerControls* GetPartnerControls(struct FString PartnerName); // Function PictureInPictureCore.PictureInPictureSubsystem.GetPartnerControls // (Final|Native|Public|BlueprintCallable) // @ game+0x1c1d9c8
	struct UPictureInPictureMediaController* GetPartnerController(struct FString PartnerName); // Function PictureInPictureCore.PictureInPictureSubsystem.GetPartnerController // (Final|Native|Public|BlueprintCallable) // @ game+0x689aba0
	struct UPictureInPictureClient* GetPartnerClient(struct FString PartnerName); // Function PictureInPictureCore.PictureInPictureSubsystem.GetPartnerClient // (Final|Native|Public|BlueprintCallable) // @ game+0x689aa3c
	void GetLastUsedSource(struct FString& OutPartnerSourceName); // Function PictureInPictureCore.PictureInPictureSubsystem.GetLastUsedSource // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x689a8cc
	void GetLastUsedPartner(struct FString& OutPartnerName); // Function PictureInPictureCore.PictureInPictureSubsystem.GetLastUsedPartner // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x689a774
	struct UPictureInPicturePartnerDataAsset* GetCurrentPartnerItem(); // Function PictureInPictureCore.PictureInPictureSubsystem.GetCurrentPartnerItem // (Final|Native|Public|BlueprintCallable) // @ game+0x689a6b0
	struct UPictureInPicturePartnerControls* GetCurrentPartnerControls(); // Function PictureInPictureCore.PictureInPictureSubsystem.GetCurrentPartnerControls // (Final|Native|Public|BlueprintCallable) // @ game+0x689a634
	struct UPictureInPictureMediaController* GetCurrentPartnerController(); // Function PictureInPictureCore.PictureInPictureSubsystem.GetCurrentPartnerController // (Final|Native|Public|BlueprintCallable) // @ game+0x689a5b0
	struct UPictureInPictureClient* GetCurrentPartnerClient(); // Function PictureInPictureCore.PictureInPictureSubsystem.GetCurrentPartnerClient // (Final|Native|Public|BlueprintCallable) // @ game+0x689a52c
	bool GetAutoEnableSetting(); // Function PictureInPictureCore.PictureInPictureSubsystem.GetAutoEnableSetting // (Final|Native|Public|BlueprintCallable) // @ game+0x689a508
	void EnableFullScreenPiPOption(bool bEnable); // Function PictureInPictureCore.PictureInPictureSubsystem.EnableFullScreenPiPOption // (Final|Native|Public) // @ game+0x689a2f8
};

