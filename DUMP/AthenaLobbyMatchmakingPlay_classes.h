// WidgetBlueprintGeneratedClass AthenaLobbyMatchmakingPlay.AthenaLobbyMatchmakingPlay_C
// Size: 0x650 (Inherited: 0x4e0)
struct UAthenaLobbyMatchmakingPlay_C : UFortAthenaMatchmakingWidgetLegacy {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UWidgetAnimation* ShowMatchmakingDetails; // 0x4e8(0x08)
	struct UWidgetAnimation* NewModeViolation; // 0x4f0(0x08)
	struct UCommonBorder* Border_BasePanel; // 0x4f8(0x08)
	struct UHorizontalBox* Box_LimitedMatchmaking; // 0x500(0x08)
	struct UIconTextButton_C* DebugCreativeServerSelect; // 0x508(0x08)
	struct UImage* MatchmakingSpinner; // 0x510(0x08)
	struct UCommonBorder* NewModeBorder; // 0x518(0x08)
	struct UVerticalBox* SpinnerAndTextContainer; // 0x520(0x08)
	struct UCommonTextBlock* Text_ModeTitle; // 0x528(0x08)
	struct UCommonTextBlock* TextBlock_ContentDownloadingHeader; // 0x530(0x08)
	struct UCommonTextBlock* TextBlock_NewMode; // 0x538(0x08)
	struct UOverlay* ViolatorContent; // 0x540(0x08)
	struct UWidgetSwitcher* ViolatorSwitcher; // 0x548(0x08)
	struct FMulticastInlineDelegate PlaylistsUpdated; // 0x550(0x10)
	struct FTimerHandle ShowNewPlaylistTimer; // 0x560(0x08)
	struct FMulticastInlineDelegate OnPlaylistChanged; // 0x568(0x10)
	struct USoundBase* MatchmakingSucceededSound; // 0x578(0x08)
	struct UFortPlaylistAthena* PlaylistData; // 0x580(0x08)
	bool IsShowingMatchmakingDetails; // 0x588(0x01)
	char pad_589[0x7]; // 0x589(0x07)
	struct FSlateFontInfo PlaylistMainFont; // 0x590(0x58)
	struct FSlateFontInfo PlaylistActivityFont; // 0x5e8(0x58)
	struct UFont* PlaylistActivityFontFamily; // 0x640(0x08)
	struct USoundBase* CreativeMatchmakingSucceededSound; // 0x648(0x08)

	void PickMatchmakingSucceededSound(struct USoundBase*& SelectedMatchmakingSucceededSound); // Function AthenaLobbyMatchmakingPlay.AthenaLobbyMatchmakingPlay_C.PickMatchmakingSucceededSound // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xd67374
	void InitFonts(); // Function AthenaLobbyMatchmakingPlay.AthenaLobbyMatchmakingPlay_C.InitFonts // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Update Playlist Info(struct FPlaylistFrontEndData& NewPlaylist, struct FText& PlaylistTitleOverride, enum class EFortLobbyType& LobbyType); // Function AthenaLobbyMatchmakingPlay.AthenaLobbyMatchmakingPlay_C.Update Playlist Info // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetBasePanelColor(struct FLinearColor NewColor); // Function AthenaLobbyMatchmakingPlay.AthenaLobbyMatchmakingPlay_C.SetBasePanelColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Construct(); // Function AthenaLobbyMatchmakingPlay.AthenaLobbyMatchmakingPlay_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnAvailablePlaylistsUpdated(); // Function AthenaLobbyMatchmakingPlay.AthenaLobbyMatchmakingPlay_C.OnAvailablePlaylistsUpdated // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnSetPlayButtonText(struct FText& PlayButtonText); // Function AthenaLobbyMatchmakingPlay.AthenaLobbyMatchmakingPlay_C.OnSetPlayButtonText // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void OnSetCancelButtonText(struct FText& CancelButtonText); // Function AthenaLobbyMatchmakingPlay.AthenaLobbyMatchmakingPlay_C.OnSetCancelButtonText // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void PlaylistChanged(struct FPlaylistFrontEndData& NewPlaylist, struct FText& PlaylistCMSOverrideName, enum class EFortLobbyType LobbyType); // Function AthenaLobbyMatchmakingPlay.AthenaLobbyMatchmakingPlay_C.PlaylistChanged // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void OnMatchmakingFinishedBlueprint(bool bSuccess, struct UFortPlaylistAthena* Playlist); // Function AthenaLobbyMatchmakingPlay.AthenaLobbyMatchmakingPlay_C.OnMatchmakingFinishedBlueprint // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BndEvt__PlayButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function AthenaLobbyMatchmakingPlay.AthenaLobbyMatchmakingPlay_C.BndEvt__PlayButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void OnInitialized(); // Function AthenaLobbyMatchmakingPlay.AthenaLobbyMatchmakingPlay_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnCrossplayPreferencesChanged(bool IsCrossplayEnabled); // Function AthenaLobbyMatchmakingPlay.AthenaLobbyMatchmakingPlay_C.OnCrossplayPreferencesChanged // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ShouldShowMatchmakingDetails(bool bShow); // Function AthenaLobbyMatchmakingPlay.AthenaLobbyMatchmakingPlay_C.ShouldShowMatchmakingDetails // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void PlaylistActivityChanged(struct FPlaylistFrontEndData& NewPlaylist, struct FText& ActivityName, enum class EFortLobbyType LobbyType); // Function AthenaLobbyMatchmakingPlay.AthenaLobbyMatchmakingPlay_C.PlaylistActivityChanged // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void AnimateViolator(); // Function AthenaLobbyMatchmakingPlay.AthenaLobbyMatchmakingPlay_C.AnimateViolator // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnViolatorStyleRefreshed(enum class EFortMatchmakingViolatorStyle NewViolatorStyle); // Function AthenaLobbyMatchmakingPlay.AthenaLobbyMatchmakingPlay_C.OnViolatorStyleRefreshed // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_AthenaLobbyMatchmakingPlay(int32_t EntryPoint); // Function AthenaLobbyMatchmakingPlay.AthenaLobbyMatchmakingPlay_C.ExecuteUbergraph_AthenaLobbyMatchmakingPlay // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
	void OnPlaylistChanged__DelegateSignature(struct FPlaylistFrontEndData Playlist Data, struct FText Playlist CMS Override, enum class EFortLobbyType Lobby Type); // Function AthenaLobbyMatchmakingPlay.AthenaLobbyMatchmakingPlay_C.OnPlaylistChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void PlaylistsUpdated__DelegateSignature(); // Function AthenaLobbyMatchmakingPlay.AthenaLobbyMatchmakingPlay_C.PlaylistsUpdated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
};

