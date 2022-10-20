// WidgetBlueprintGeneratedClass TournamentEventWindowDetails.TournamentEventWindowDetails_C
// Size: 0x860 (Inherited: 0x768)
struct UTournamentEventWindowDetails_C : UFortShowdownDetailView {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x768(0x08)
	struct UWidgetAnimation* PayoutHover; // 0x770(0x08)
	struct UWidgetAnimation* LeaderboardHover; // 0x778(0x08)
	struct UWidgetAnimation* RefreshData; // 0x780(0x08)
	struct UWidgetAnimation* RefreshTime; // 0x788(0x08)
	struct UWidgetAnimation* RefreshDate; // 0x790(0x08)
	struct UBorder* Border_SubheaderBG; // 0x798(0x08)
	struct UEventsSimpleButton_C* Button_Leaderboard; // 0x7a0(0x08)
	struct UEventsSimpleButton_C* Button_Payout; // 0x7a8(0x08)
	struct UCommonBorder* CommonBorder_LeaderboardButtonBG; // 0x7b0(0x08)
	struct UCommonBorder* CommonBorder_PayoutButtonBG; // 0x7b8(0x08)
	struct UCommonBorder* CommonBorder_StartingScore; // 0x7c0(0x08)
	struct UCommonWidgetSwitcherLegacy* CommonWidgetSwitcher_isFuture; // 0x7c8(0x08)
	struct UEventScoreRow_C* EliminationsInfo; // 0x7d0(0x08)
	struct UCommonTextBlock* EventDateText; // 0x7d8(0x08)
	struct UHorizontalBox* HorizontalBox_SquadInfoContainer; // 0x7e0(0x08)
	struct UEventScoreBigStat_C* MatchesPlayedInfo; // 0x7e8(0x08)
	struct UCommonTextBlock* MatchTypeText; // 0x7f0(0x08)
	struct UOverlay* Overlay_LeaderboardButton; // 0x7f8(0x08)
	struct UOverlay* Overlay_PayoutButton; // 0x800(0x08)
	struct UEventScoreRow_C* PlacementInfo; // 0x808(0x08)
	struct UEventScoreBigStat_C* PointsScoredInfo; // 0x810(0x08)
	struct URichTextBlock* RichTextBlock_OtherReason; // 0x818(0x08)
	struct UCommonTextBlock* Text_BusFare; // 0x820(0x08)
	struct UCommonTextBlock* TournamentContextText; // 0x828(0x08)
	struct UEventScoreRow_C* VictoryRoyaleInfo; // 0x830(0x08)
	struct FMulticastInlineDelegate ViewLeaderboard; // 0x838(0x10)
	bool AllowLeaderboardAccess; // 0x848(0x01)
	char pad_849[0x7]; // 0x849(0x07)
	struct FMulticastInlineDelegate ViewPayouts; // 0x850(0x10)

	void RefreshDataBP(); // Function TournamentEventWindowDetails.TournamentEventWindowDetails_C.RefreshDataBP // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void EventColorize(); // Function TournamentEventWindowDetails.TournamentEventWindowDetails_C.EventColorize // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void BndEvt__Button_Leaderboard_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function TournamentEventWindowDetails.TournamentEventWindowDetails_C.BndEvt__Button_Leaderboard_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void BndEvt__Button_Leaderboard_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function TournamentEventWindowDetails.TournamentEventWindowDetails_C.BndEvt__Button_Leaderboard_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void BndEvt__Button_Leaderboard_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function TournamentEventWindowDetails.TournamentEventWindowDetails_C.BndEvt__Button_Leaderboard_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void BndEvt__Button_Payout_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function TournamentEventWindowDetails.TournamentEventWindowDetails_C.BndEvt__Button_Payout_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void BndEvt__Button_Payout_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function TournamentEventWindowDetails.TournamentEventWindowDetails_C.BndEvt__Button_Payout_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void BndEvt__Button_Payout_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function TournamentEventWindowDetails.TournamentEventWindowDetails_C.BndEvt__Button_Payout_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_TournamentEventWindowDetails(int32_t EntryPoint); // Function TournamentEventWindowDetails.TournamentEventWindowDetails_C.ExecuteUbergraph_TournamentEventWindowDetails // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
	void ViewPayouts__DelegateSignature(struct FString EventWindowId, struct FString EventId); // Function TournamentEventWindowDetails.TournamentEventWindowDetails_C.ViewPayouts__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ViewLeaderboard__DelegateSignature(struct FString TournamentId, struct FString EventId); // Function TournamentEventWindowDetails.TournamentEventWindowDetails_C.ViewLeaderboard__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
};

