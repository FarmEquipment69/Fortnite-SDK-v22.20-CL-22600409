// WidgetBlueprintGeneratedClass LeaderboardListViewWrapper.LeaderboardListViewWrapper_C
// Size: 0x618 (Inherited: 0x408)
struct ULeaderboardListViewWrapper_C : UFortLeaderboardListViewWrapper {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x408(0x08)
	struct UEventsSimpleButton_C* Button_Filter; // 0x410(0x08)
	struct UEventsSimpleButton_C* Button_Position; // 0x418(0x08)
	struct UCommonBorder* CommonBorder_OptionsBarBG; // 0x420(0x08)
	struct UCommonWidgetSwitcherLegacy* CommonWidgetSwitcher_FliterOptions; // 0x428(0x08)
	struct UEventLeaderboardPlayerPerformance_C* EventLeaderboardPlayerPerformance; // 0x430(0x08)
	struct UImage* ; // 0x438(0x08)
	struct UVerticalBox* VerticalBox; // 0x440(0x08)
	struct FFortTournamentDisplayInfo DisplayInfo; // 0x448(0x1d0)

	void Set Display Info(struct FFortTournamentDisplayInfo DisplayInfo); // Function LeaderboardListViewWrapper.LeaderboardListViewWrapper_C.Set Display Info // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Set Event(struct FString EventId, struct FString EventWindowId); // Function LeaderboardListViewWrapper.LeaderboardListViewWrapper_C.Set Event // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnLeaderboardDisplayTypeChanged(enum class ELeaderboardDisplayType NewDisplayType); // Function LeaderboardListViewWrapper.LeaderboardListViewWrapper_C.OnLeaderboardDisplayTypeChanged // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_LeaderboardListViewWrapper(int32_t EntryPoint); // Function LeaderboardListViewWrapper.LeaderboardListViewWrapper_C.ExecuteUbergraph_LeaderboardListViewWrapper // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

