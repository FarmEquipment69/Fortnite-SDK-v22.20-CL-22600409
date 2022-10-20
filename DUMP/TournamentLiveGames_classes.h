// WidgetBlueprintGeneratedClass TournamentLiveGames.TournamentLiveGames_C
// Size: 0x540 (Inherited: 0x4a0)
struct UTournamentLiveGames_C : UFortTournamentLiveGames {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4a0(0x08)
	struct UWidgetAnimation* Intro; // 0x4a8(0x08)
	struct UEventsSimpleButton_C* BackButton; // 0x4b0(0x08)
	struct UCloseButton_C* CloseButton; // 0x4b8(0x08)
	struct UCommonBorder* CommonBorder_ContainerBG; // 0x4c0(0x08)
	struct UCommonBorder* CommonBorder_OptionsBarBG; // 0x4c8(0x08)
	struct UCommonBorder* CommonBorder_ScoringTitleBG; // 0x4d0(0x08)
	struct UVerticalBox* Content_LeaderboardEntries; // 0x4d8(0x08)
	struct UHorizontalBox* Content_LoadingEntries; // 0x4e0(0x08)
	struct UCommonBorder* Content_NoLeaderboardEntries; // 0x4e8(0x08)
	struct UEventLeaderboardEventDetails_C* EventLeaderboardEventDetails; // 0x4f0(0x08)
	struct UImage* ; // 0x4f8(0x08)
	struct UImage* Image_OnlineStatus; // 0x500(0x08)
	struct UOverlay* Overlay_OnlineStatus; // 0x508(0x08)
	struct USafeZone* ; // 0x510(0x08)
	struct UCommonWidgetSwitcherLegacy* Switcher_LeaderboardEntries; // 0x518(0x08)
	struct UCommonTextBlock* Text_NoLeaderboardEntries; // 0x520(0x08)
	struct UCommonTextBlock* Text_RoundTitle; // 0x528(0x08)
	struct FMulticastInlineDelegate CallEventLiveGamesBack; // 0x530(0x10)

	void BndEvt__BackButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function TournamentLiveGames.TournamentLiveGames_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void Init(struct FString TournamentId, struct FString EventId); // Function TournamentLiveGames.TournamentLiveGames_C.Init // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void EventColorize(struct FFortTournamentDisplayInfo TournamentDisplayInfo); // Function TournamentLiveGames.TournamentLiveGames_C.EventColorize // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void NotifyNoLiveGames(); // Function TournamentLiveGames.TournamentLiveGames_C.NotifyNoLiveGames // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void NotifyLoadingMoreGames(bool bIsLoading); // Function TournamentLiveGames.TournamentLiveGames_C.NotifyLoadingMoreGames // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void HandleViewLiveGames(); // Function TournamentLiveGames.TournamentLiveGames_C.HandleViewLiveGames // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function TournamentLiveGames.TournamentLiveGames_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_TournamentLiveGames(int32_t EntryPoint); // Function TournamentLiveGames.TournamentLiveGames_C.ExecuteUbergraph_TournamentLiveGames // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
	void CallEventLiveGamesBack__DelegateSignature(); // Function TournamentLiveGames.TournamentLiveGames_C.CallEventLiveGamesBack__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
};

