// WidgetBlueprintGeneratedClass DiscoveryLobbyMatchmakingPlay.DiscoveryLobbyMatchmakingPlay_C
// Size: 0x590 (Inherited: 0x4e0)
struct UDiscoveryLobbyMatchmakingPlay_C : UFortAthenaMatchmakingWidgetLegacy {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UWidgetAnimation* ShowMatchmakingDetails; // 0x4e8(0x08)
	struct UWidgetAnimation* NewModeViolation; // 0x4f0(0x08)
	struct UBorder* Border_DisableFillBP; // 0x4f8(0x08)
	struct UBorder* Border_DisableLobbyBP; // 0x500(0x08)
	struct UBorder* Border_DisableModeSetBP; // 0x508(0x08)
	struct UHorizontalBox* Box_LimitedMatchmaking; // 0x510(0x08)
	struct UActivityBrowserSoloButton_C* Button_ModeSet; // 0x518(0x08)
	struct UWBP_PopupTooltip_C* DiscoveryTooltip_FirstTimeEntryFlow; // 0x520(0x08)
	struct UWBP_PopupTooltip_C* DiscoveryTooltip_FirstTimeNotifcation; // 0x528(0x08)
	struct UWBP_PopupTooltip_C* DiscoveryTooltip_SubmodeViolator; // 0x530(0x08)
	struct UMatchmakingInputIndicator_C* MatchmakingInputIndicator; // 0x538(0x08)
	struct UOverlay* Overlay_ModeSet; // 0x540(0x08)
	struct UVerticalBox* SpinnerAndTextContainer; // 0x548(0x08)
	struct UWidgetSwitcher* ViolatorSwitcher; // 0x550(0x08)
	struct FTimerHandle ShowNewPlaylistTimer; // 0x558(0x08)
	struct USoundBase* MatchmakingSucceededSound; // 0x560(0x08)
	struct UFortPlaylistAthena* PlaylistData; // 0x568(0x08)
	bool IsShowingMatchmakingDetails; // 0x570(0x01)
	char pad_571[0x7]; // 0x571(0x07)
	struct USoundBase* CreativeMatchmakingSucceededSound; // 0x578(0x08)
	bool IsShowingSubModeFirstTimeNotification; // 0x580(0x01)
	char pad_581[0x7]; // 0x581(0x07)
	struct FTimerHandle Hide ToolTip Timer; // 0x588(0x08)

	void OnInputMethodChanged(enum class ECommonInputType bNewInputType); // Function DiscoveryLobbyMatchmakingPlay.DiscoveryLobbyMatchmakingPlay_C.OnInputMethodChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UpdateModeSetButtonText(); // Function DiscoveryLobbyMatchmakingPlay.DiscoveryLobbyMatchmakingPlay_C.UpdateModeSetButtonText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void PickMatchmakingSucceededSound(struct USoundBase*& SelectedMatchmakingSucceededSound); // Function DiscoveryLobbyMatchmakingPlay.DiscoveryLobbyMatchmakingPlay_C.PickMatchmakingSucceededSound // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xd67374
	struct FText GetButtonPublicMatchText(); // Function DiscoveryLobbyMatchmakingPlay.DiscoveryLobbyMatchmakingPlay_C.GetButtonPublicMatchText // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xd67374
	struct FText GetButtonPrivateMatchText(); // Function DiscoveryLobbyMatchmakingPlay.DiscoveryLobbyMatchmakingPlay_C.GetButtonPrivateMatchText // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xd67374
	void Construct(); // Function DiscoveryLobbyMatchmakingPlay.DiscoveryLobbyMatchmakingPlay_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnSetPlayButtonText(struct FText& PlayButtonText); // Function DiscoveryLobbyMatchmakingPlay.DiscoveryLobbyMatchmakingPlay_C.OnSetPlayButtonText // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void OnSetCancelButtonText(struct FText& CancelButtonText); // Function DiscoveryLobbyMatchmakingPlay.DiscoveryLobbyMatchmakingPlay_C.OnSetCancelButtonText // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void PlaylistChanged(struct FPlaylistFrontEndData& NewPlaylist, struct FText& PlaylistCMSOverrideName, enum class EFortLobbyType LobbyType); // Function DiscoveryLobbyMatchmakingPlay.DiscoveryLobbyMatchmakingPlay_C.PlaylistChanged // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void AnimateViolator(); // Function DiscoveryLobbyMatchmakingPlay.DiscoveryLobbyMatchmakingPlay_C.AnimateViolator // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnMatchmakingFinishedBlueprint(bool bSuccess, struct UFortPlaylistAthena* Playlist); // Function DiscoveryLobbyMatchmakingPlay.DiscoveryLobbyMatchmakingPlay_C.OnMatchmakingFinishedBlueprint // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnCrossplayPreferencesChanged(bool IsCrossplayEnabled); // Function DiscoveryLobbyMatchmakingPlay.DiscoveryLobbyMatchmakingPlay_C.OnCrossplayPreferencesChanged // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ShouldShowMatchmakingDetails(bool bShow); // Function DiscoveryLobbyMatchmakingPlay.DiscoveryLobbyMatchmakingPlay_C.ShouldShowMatchmakingDetails // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnSquadFillButtonEnabledStateUpdated(bool bIsLocalPlayerPartyLeader, bool bIsMatchmaking); // Function DiscoveryLobbyMatchmakingPlay.DiscoveryLobbyMatchmakingPlay_C.OnSquadFillButtonEnabledStateUpdated // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BndEvt__Button_Play_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function DiscoveryLobbyMatchmakingPlay.DiscoveryLobbyMatchmakingPlay_C.BndEvt__Button_Play_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void OnPrivateMatchButtonEnabledStateUpdated(bool bIsLocalPlayerPartyLeader, bool bIsMatchmaking); // Function DiscoveryLobbyMatchmakingPlay.DiscoveryLobbyMatchmakingPlay_C.OnPrivateMatchButtonEnabledStateUpdated // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void Destruct(); // Function DiscoveryLobbyMatchmakingPlay.DiscoveryLobbyMatchmakingPlay_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnViolatorStyleRefreshed(enum class EFortMatchmakingViolatorStyle NewViolatorStyle); // Function DiscoveryLobbyMatchmakingPlay.DiscoveryLobbyMatchmakingPlay_C.OnViolatorStyleRefreshed // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BndEvt__DiscoveryLobbyMatchmakingPlay_Button_MatchmakingMode_K2Node_ComponentBoundEvent_0_OnActivityChanged__DelegateSignature(); // Function DiscoveryLobbyMatchmakingPlay.DiscoveryLobbyMatchmakingPlay_C.BndEvt__DiscoveryLobbyMatchmakingPlay_Button_MatchmakingMode_K2Node_ComponentBoundEvent_0_OnActivityChanged__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void BndEvt__DiscoveryLobbyMatchmakingPlay_Button_ModeSet_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function DiscoveryLobbyMatchmakingPlay.DiscoveryLobbyMatchmakingPlay_C.BndEvt__DiscoveryLobbyMatchmakingPlay_Button_ModeSet_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void BndEvt__DiscoveryLobbyMatchmakingPlay_Button_MatchmakingMode_K2Node_ComponentBoundEvent_3_OnShowChildModeChangedNotification__DelegateSignature(struct FText DisplayName); // Function DiscoveryLobbyMatchmakingPlay.DiscoveryLobbyMatchmakingPlay_C.BndEvt__DiscoveryLobbyMatchmakingPlay_Button_MatchmakingMode_K2Node_ComponentBoundEvent_3_OnShowChildModeChangedNotification__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void BndEvt__DiscoveryLobbyMatchmakingPlay_Button_MatchmakingMode_K2Node_ComponentBoundEvent_4_OnShowChildModeFirstTimeNotification__DelegateSignature(); // Function DiscoveryLobbyMatchmakingPlay.DiscoveryLobbyMatchmakingPlay_C.BndEvt__DiscoveryLobbyMatchmakingPlay_Button_MatchmakingMode_K2Node_ComponentBoundEvent_4_OnShowChildModeFirstTimeNotification__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void OnSetPlayButtonSecondaryText(struct FText& PlayButtonSecondaryText); // Function DiscoveryLobbyMatchmakingPlay.DiscoveryLobbyMatchmakingPlay_C.OnSetPlayButtonSecondaryText // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void OnInitialized(); // Function DiscoveryLobbyMatchmakingPlay.DiscoveryLobbyMatchmakingPlay_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void Hide Tooltip After Delay(); // Function DiscoveryLobbyMatchmakingPlay.DiscoveryLobbyMatchmakingPlay_C.Hide Tooltip After Delay // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void BndEvt__DiscoveryLobbyMatchmakingPlay_Button_MatchmakingMode_K2Node_ComponentBoundEvent_5_OnHideChildModeFirstTimeNotification__DelegateSignature(); // Function DiscoveryLobbyMatchmakingPlay.DiscoveryLobbyMatchmakingPlay_C.BndEvt__DiscoveryLobbyMatchmakingPlay_Button_MatchmakingMode_K2Node_ComponentBoundEvent_5_OnHideChildModeFirstTimeNotification__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void OnLocalPlayerPromotedToLeader(); // Function DiscoveryLobbyMatchmakingPlay.DiscoveryLobbyMatchmakingPlay_C.OnLocalPlayerPromotedToLeader // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void SetShowingDiscoveryEntryFlowToolTip(bool bShowTooltip); // Function DiscoveryLobbyMatchmakingPlay.DiscoveryLobbyMatchmakingPlay_C.SetShowingDiscoveryEntryFlowToolTip // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BndEvt__DiscoveryLobbyMatchmakingPlay_Button_MatchmakingMode_K2Node_ComponentBoundEvent_7_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function DiscoveryLobbyMatchmakingPlay.DiscoveryLobbyMatchmakingPlay_C.BndEvt__DiscoveryLobbyMatchmakingPlay_Button_MatchmakingMode_K2Node_ComponentBoundEvent_7_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_DiscoveryLobbyMatchmakingPlay(int32_t EntryPoint); // Function DiscoveryLobbyMatchmakingPlay.DiscoveryLobbyMatchmakingPlay_C.ExecuteUbergraph_DiscoveryLobbyMatchmakingPlay // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

