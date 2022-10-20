// WidgetBlueprintGeneratedClass EventLeaderboardSummary.EventLeaderboardSummary_C
// Size: 0x810 (Inherited: 0x768)
struct UEventLeaderboardSummary_C : UFortShowdownDetailView {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x768(0x08)
	struct UWidgetAnimation* ViewAllHover; // 0x770(0x08)
	struct UIconTextButton_C* Button_ViewAll; // 0x778(0x08)
	struct UCommonBorder* CommonBorder_ContainerBG; // 0x780(0x08)
	struct UCommonBorder* CommonBorder_ScoringTitleBG; // 0x788(0x08)
	struct UCommonBorder* CommonBorder_ViewAllBG; // 0x790(0x08)
	struct UCommonTextBlock* CommonTextBlock_Title; // 0x798(0x08)
	struct UEventLeaderboardEntry_C* EventLeaderboardEntry; // 0x7a0(0x08)
	struct UEventLeaderboardEntry_C* ; // 0x7a8(0x08)
	struct UEventLeaderboardEntry_C* ; // 0x7b0(0x08)
	struct UEventLeaderboardEntry_C* ; // 0x7b8(0x08)
	struct UEventLeaderboardEntry_C* ; // 0x7c0(0x08)
	struct UEventLeaderboardEntry_C* ; // 0x7c8(0x08)
	struct UEventLeaderboardEntry_C* ; // 0x7d0(0x08)
	struct UEventLeaderboardEntry_C* ; // 0x7d8(0x08)
	struct UEventLeaderboardEntry_C* ; // 0x7e0(0x08)
	struct UEventLeaderboardEntry_C* ; // 0x7e8(0x08)
	struct UOverlay* Overlay_SummaryContent; // 0x7f0(0x08)
	struct UCommonTextBlock* Text_ViewFullLeaderboard; // 0x7f8(0x08)
	struct FMulticastInlineDelegate EventViewFullLeaderboard; // 0x800(0x10)

	void BndEvt__Button_ViewAll_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function EventLeaderboardSummary.EventLeaderboardSummary_C.BndEvt__Button_ViewAll_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void EventColorize(struct FFortTournamentDisplayInfo TournamentDisplayInfo); // Function EventLeaderboardSummary.EventLeaderboardSummary_C.EventColorize // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void BndEvt__Button_ViewAll_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function EventLeaderboardSummary.EventLeaderboardSummary_C.BndEvt__Button_ViewAll_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void BndEvt__Button_ViewAll_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function EventLeaderboardSummary.EventLeaderboardSummary_C.BndEvt__Button_ViewAll_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void RefreshDataBP(); // Function EventLeaderboardSummary.EventLeaderboardSummary_C.RefreshDataBP // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_EventLeaderboardSummary(int32_t EntryPoint); // Function EventLeaderboardSummary.EventLeaderboardSummary_C.ExecuteUbergraph_EventLeaderboardSummary // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
	void EventViewFullLeaderboard__DelegateSignature(struct FString TournamentId, struct FString EventId); // Function EventLeaderboardSummary.EventLeaderboardSummary_C.EventViewFullLeaderboard__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
};

