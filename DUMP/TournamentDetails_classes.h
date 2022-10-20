// WidgetBlueprintGeneratedClass TournamentDetails.TournamentDetails_C
// Size: 0x998 (Inherited: 0x780)
struct UTournamentDetails_C : UFortTournamentDetailsPage {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x780(0x08)
	struct UWidgetAnimation* HidePosterFade; // 0x788(0x08)
	struct UWidgetAnimation* CollapseLeaderboardSummary; // 0x790(0x08)
	struct UWidgetAnimation* FullScreenContent; // 0x798(0x08)
	struct UWidgetAnimation* Intro; // 0x7a0(0x08)
	struct UWidgetAnimation* BlurPoster; // 0x7a8(0x08)
	struct UWidgetAnimation* BlurBG; // 0x7b0(0x08)
	struct UWidgetAnimation* ShowEventWindowDetails; // 0x7b8(0x08)
	struct UWidgetAnimation* ShowDetails; // 0x7c0(0x08)
	struct UWidgetAnimation* PosterFlip; // 0x7c8(0x08)
	struct UBackgroundBlur* BackgroundBlur_Background; // 0x7d0(0x08)
	struct UBackgroundBlur* BackgroundBlur_PosterLayer; // 0x7d8(0x08)
	struct UEventsSimpleButton_C* Button_Back; // 0x7e0(0x08)
	struct UIconTextButton_C* Button_EnableMFA; // 0x7e8(0x08)
	struct UCloseButton_C* CloseButton; // 0x7f0(0x08)
	struct UCommonBorder* CommonBorder_BGText; // 0x7f8(0x08)
	struct UCommonBorder* CommonBorder_ScoringBG; // 0x800(0x08)
	struct UCommonBorder* CommonBorder_ScoringTitleBG; // 0x808(0x08)
	struct UCommonTextBlock* CommonTextBlock_TournamentDescription; // 0x810(0x08)
	struct UCommonTextBlock* CommonTextBlock_TournamentSubtitle; // 0x818(0x08)
	struct UCommonTextBlock* CommonTextBlock_UnlockCriteria; // 0x820(0x08)
	struct UCommonWidgetSwitcherLegacy* CommonWidgetSwitcher_DetailsButtons; // 0x828(0x08)
	struct UCommonWidgetSwitcherLegacy* CommonWidgetSwitcher_FullScreenSwitch; // 0x830(0x08)
	struct UCommonWidgetSwitcherLegacy* CommonWidgetSwitcher_WindowsDetails; // 0x838(0x08)
	struct UEventsSimpleButton_C* DetailsPanelButton; // 0x840(0x08)
	struct UCommonWidgetSwitcherLegacy* DetailsSwitcher; // 0x848(0x08)
	struct UEventLeaderboardScreen_C* EventLeaderboardScreen; // 0x850(0x08)
	struct UEventLeaderboardSummary_C* EventLeaderboardSummary; // 0x858(0x08)
	struct UScrollBox* EventsScrollBox; // 0x860(0x08)
	struct UImage* Image_PosterFade; // 0x868(0x08)
	struct UCommonTextBlock* MFA_WarningText; // 0x870(0x08)
	struct UVerticalBox* MFAContainer; // 0x878(0x08)
	struct UOverlay* OverviewPanel; // 0x880(0x08)
	struct UEventsSimpleButton_C* OverviewPanelButton; // 0x888(0x08)
	struct URetainerBox* RetainerBox_BGText; // 0x890(0x08)
	struct URetainerBox* RetainerBox_TimeCallout; // 0x898(0x08)
	struct URichTextBlock* RichTextBlock_TournamentTimeCallout1; // 0x8a0(0x08)
	struct USafeZone* ; // 0x8a8(0x08)
	struct USafeZone* ; // 0x8b0(0x08)
	struct UScrollBox* ScrollBox_DetailAndRules; // 0x8b8(0x08)
	struct UEventsSimpleButton_C* SeriesPointLeaderboardButton; // 0x8c0(0x08)
	struct UShowdownEventTile_C* ShowdownEventTile; // 0x8c8(0x08)
	struct UShowdownEventTile_C* ; // 0x8d0(0x08)
	struct UShowdownEventTile_C* ; // 0x8d8(0x08)
	struct UShowdownEventTile_C* ; // 0x8e0(0x08)
	struct UShowdownTournamentDetailsScoringRule_C* ShowdownTournamentDetailsScoringRule; // 0x8e8(0x08)
	struct UShowdownTournamentDetailsScoringRule_C* ; // 0x8f0(0x08)
	struct UCommonTextBlock* Text_PinUnlockScore; // 0x8f8(0x08)
	struct UTournamentEventWindowDetails_C* TournamentEventWindowDetails; // 0x900(0x08)
	struct UCommonTextBlock* TournamentMatchType; // 0x908(0x08)
	struct UTournamentPayoutModal_C* TournamentPayoutModal; // 0x910(0x08)
	struct UShowdownTournamentPosterBack_C* TournamentPosterBack; // 0x918(0x08)
	struct UShowdownTournamentPosterFront_C* TournamentPosterFront; // 0x920(0x08)
	struct UCommonTextBlock* TournamentRoundText; // 0x928(0x08)
	struct UCommonTextBlock* TournamentSubTitleBackground; // 0x930(0x08)
	struct UTournamentLiveGames_C* TournamentWatchList; // 0x938(0x08)
	struct UUniformGridPanel* UniformGridPanel_TournamentScoringRules; // 0x940(0x08)
	struct UHorizontalBox* UnlockPinContent; // 0x948(0x08)
	bool EventWindowDetailsShown; // 0x950(0x01)
	bool TournamentDetailsShown; // 0x951(0x01)
	char pad_952[0x6]; // 0x952(0x06)
	struct FMulticastInlineDelegate BackActionSelected; // 0x958(0x10)
	struct UWidget* firstActiveEvent; // 0x968(0x08)
	struct UWidget* lastFocusedEvent; // 0x970(0x08)
	bool isCenteringScrollBox; // 0x978(0x01)
	bool LeaderboardisCollapsed; // 0x979(0x01)
	char pad_97A[0x6]; // 0x97a(0x06)
	struct FString DefaultTournamentIdForScoringRules; // 0x980(0x10)
	struct ULeaderboardListViewWrapper_C* LeaderboardListViewWrapper; // 0x990(0x08)

	void RemoveInvalidScoringRules(struct TArray<struct FFortShowdownScoringRuleInfo>& UnfilteredScoringRules, struct TArray<struct FFortShowdownScoringRuleInfo>& FilteredScoringRules); // Function TournamentDetails.TournamentDetails_C.RemoveInvalidScoringRules // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Is Scoring Rule Valid(struct FFortShowdownScoringRuleInfo& ScoringRuleInfo, bool& IsValid); // Function TournamentDetails.TournamentDetails_C.Is Scoring Rule Valid // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void CreateScoringWidgets(struct FString TournamentSeriesId, struct FString TournamentId); // Function TournamentDetails.TournamentDetails_C.CreateScoringWidgets // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnHandleBack(bool& bResult); // Function TournamentDetails.TournamentDetails_C.OnHandleBack // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void RefreshViolators(); // Function TournamentDetails.TournamentDetails_C.RefreshViolators // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Handle_Back(bool& PassThrough); // Function TournamentDetails.TournamentDetails_C.Handle_Back // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void RefreshDetailsPanel(); // Function TournamentDetails.TournamentDetails_C.RefreshDetailsPanel // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void RefreshOverviewPanel(); // Function TournamentDetails.TournamentDetails_C.RefreshOverviewPanel // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void RefreshScoringRules(); // Function TournamentDetails.TournamentDetails_C.RefreshScoringRules // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void RefreshEvents(); // Function TournamentDetails.TournamentDetails_C.RefreshEvents // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Refresh(); // Function TournamentDetails.TournamentDetails_C.Refresh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void RefreshDataBP(); // Function TournamentDetails.TournamentDetails_C.RefreshDataBP // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void EventShowWindowDetails(struct UCommonButtonLegacy* Button); // Function TournamentDetails.TournamentDetails_C.EventShowWindowDetails // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void AnimTransition(bool In, struct UWidgetAnimation* Animation, double PlaySpeed); // Function TournamentDetails.TournamentDetails_C.AnimTransition // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Construct(); // Function TournamentDetails.TournamentDetails_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void CloseTournamentDetails(); // Function TournamentDetails.TournamentDetails_C.CloseTournamentDetails // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void CloseEventWindowDetails(); // Function TournamentDetails.TournamentDetails_C.CloseEventWindowDetails // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void EventDeselectWindows(struct UWidget* SelectedWidget); // Function TournamentDetails.TournamentDetails_C.EventDeselectWindows // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void EventCenterEventWindow(struct UWidget* Widget); // Function TournamentDetails.TournamentDetails_C.EventCenterEventWindow // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function TournamentDetails.TournamentDetails_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void EventStartCentering(); // Function TournamentDetails.TournamentDetails_C.EventStartCentering // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void EventStopCentering(); // Function TournamentDetails.TournamentDetails_C.EventStopCentering // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void BndEvt__BackButton2_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function TournamentDetails.TournamentDetails_C.BndEvt__BackButton2_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void BndEvt__DetailsPanelButton2_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function TournamentDetails.TournamentDetails_C.BndEvt__DetailsPanelButton2_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void BndEvt__OverviewPanelButton2_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function TournamentDetails.TournamentDetails_C.BndEvt__OverviewPanelButton2_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void EventViewFullLeaderboard(struct FString TournamentId, struct FString EventId); // Function TournamentDetails.TournamentDetails_C.EventViewFullLeaderboard // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void EventToggleFullScreenContent(bool In); // Function TournamentDetails.TournamentDetails_C.EventToggleFullScreenContent // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void EventCloseLeaderboard(); // Function TournamentDetails.TournamentDetails_C.EventCloseLeaderboard // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void BndEvt__Button_EnableMFA_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function TournamentDetails.TournamentDetails_C.BndEvt__Button_EnableMFA_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void EventViewPayout(struct FString EventWindowId, struct FString EventId); // Function TournamentDetails.TournamentDetails_C.EventViewPayout // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void EventclosePayout(); // Function TournamentDetails.TournamentDetails_C.EventclosePayout // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void No payouts(); // Function TournamentDetails.TournamentDetails_C.No payouts // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnActivateScreen(); // Function TournamentDetails.TournamentDetails_C.OnActivateScreen // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void EventViewLiveGames(); // Function TournamentDetails.TournamentDetails_C.EventViewLiveGames // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void EventBackoutLiveGames(); // Function TournamentDetails.TournamentDetails_C.EventBackoutLiveGames // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void EventFullScreenAnimOutFinished(); // Function TournamentDetails.TournamentDetails_C.EventFullScreenAnimOutFinished // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function TournamentDetails.TournamentDetails_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void BndEvt__TournamentDetails_FloatingLeaderboardButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function TournamentDetails.TournamentDetails_C.BndEvt__TournamentDetails_FloatingLeaderboardButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void OnInitialized(); // Function TournamentDetails.TournamentDetails_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_TournamentDetails(int32_t EntryPoint); // Function TournamentDetails.TournamentDetails_C.ExecuteUbergraph_TournamentDetails // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
	void BackActionSelected__DelegateSignature(); // Function TournamentDetails.TournamentDetails_C.BackActionSelected__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
};

