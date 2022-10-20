// WidgetBlueprintGeneratedClass EventLeaderboardScreen.EventLeaderboardScreen_C
// Size: 0x778 (Inherited: 0x518)
struct UEventLeaderboardScreen_C : UFortEventLeaderboardScreen {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x518(0x08)
	struct UEventsSimpleButton_C* Button_Back; // 0x520(0x08)
	struct UCloseButton_C* CloseButton; // 0x528(0x08)
	struct UEventLeaderboardEntryDetails_C* EntryDetails; // 0x530(0x08)
	struct UEventLeaderboardEventDetails_C* EventLeaderboardEventDetails; // 0x538(0x08)
	struct UHorizontalBox* HorizontalBox_Tab; // 0x540(0x08)
	struct UOverlay* Overlay_EntryDetailsVisibility; // 0x548(0x08)
	struct USafeZone* ; // 0x550(0x08)
	struct UFortEventLeaderboardEntryData* DebugLeaderboardEntry1; // 0x558(0x08)
	struct UFortEventLeaderboardEntryData* DebugLeaderboardEntry2; // 0x560(0x08)
	struct UFortEventLeaderboardEntryData* DebugLeaderboardEntry3; // 0x568(0x08)
	struct UFortEventLeaderboardEntryData* DebugLeaderboardEntry4; // 0x570(0x08)
	struct TArray<struct UFortEventLeaderboardEntryData*> DebugLeaderboardEntries; // 0x578(0x10)
	struct FMulticastInlineDelegate EventCloseButton; // 0x588(0x10)
	struct FMulticastInlineDelegate EventViewLiveGames; // 0x598(0x10)
	struct FFortTournamentDisplayInfo CurrentDisplayInfo; // 0x5a8(0x1d0)

	void Init(struct FString EventWindowId, struct FString TournamentSeriesId); // Function EventLeaderboardScreen.EventLeaderboardScreen_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void EventIntro(); // Function EventLeaderboardScreen.EventLeaderboardScreen_C.EventIntro // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnLeaderboardEntrySelected(struct UFortEventLeaderboardEntryData* EntryData); // Function EventLeaderboardScreen.EventLeaderboardScreen_C.OnLeaderboardEntrySelected // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void Event Leaderboard Screen On Activated(); // Function EventLeaderboardScreen.EventLeaderboardScreen_C.Event Leaderboard Screen On Activated // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Construct(); // Function EventLeaderboardScreen.EventLeaderboardScreen_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void ShowMyStats(struct UCommonButtonLegacy* Button); // Function EventLeaderboardScreen.EventLeaderboardScreen_C.ShowMyStats // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function EventLeaderboardScreen.EventLeaderboardScreen_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void Item Double-Clicked(struct UObject* Item); // Function EventLeaderboardScreen.EventLeaderboardScreen_C.Item Double-Clicked // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnTabVisibilityChange(bool bIsVisible); // Function EventLeaderboardScreen.EventLeaderboardScreen_C.OnTabVisibilityChange // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BndEvt__LiveGames_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function EventLeaderboardScreen.EventLeaderboardScreen_C.BndEvt__LiveGames_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void InitializeTabButton(struct UCommonButtonLegacy* TabButton, struct FText& TabText); // Function EventLeaderboardScreen.EventLeaderboardScreen_C.InitializeTabButton // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void EventColorize(struct FFortTournamentDisplayInfo TournamentDisplayInfo); // Function EventLeaderboardScreen.EventLeaderboardScreen_C.EventColorize // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnDetailsPanelUpdate(bool bShowDetailsPanel); // Function EventLeaderboardScreen.EventLeaderboardScreen_C.OnDetailsPanelUpdate // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BndEvt__Button_Back2_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function EventLeaderboardScreen.EventLeaderboardScreen_C.BndEvt__Button_Back2_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void OnLeaderboardDisplayTypeChanged(enum class ELeaderboardDisplayType NewDisplayType); // Function EventLeaderboardScreen.EventLeaderboardScreen_C.OnLeaderboardDisplayTypeChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_EventLeaderboardScreen(int32_t EntryPoint); // Function EventLeaderboardScreen.EventLeaderboardScreen_C.ExecuteUbergraph_EventLeaderboardScreen // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
	void EventViewLiveGames__DelegateSignature(); // Function EventLeaderboardScreen.EventLeaderboardScreen_C.EventViewLiveGames__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void EventCloseButton__DelegateSignature(); // Function EventLeaderboardScreen.EventLeaderboardScreen_C.EventCloseButton__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
};

