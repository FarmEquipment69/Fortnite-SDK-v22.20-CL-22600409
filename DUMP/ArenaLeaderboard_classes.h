// WidgetBlueprintGeneratedClass ArenaLeaderboard.ArenaLeaderboard_C
// Size: 0x538 (Inherited: 0x4e8)
struct UArenaLeaderboard_C : UFortPersistentLeaderboardScreen {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e8(0x08)
	struct UBackgroundBlur* ; // 0x4f0(0x08)
	struct UCommonBorder* Content_NoLeaderboardEntries; // 0x4f8(0x08)
	struct UEventLeaderboardEntryDetails_C* Details_EntryDisplay; // 0x500(0x08)
	struct UImage* Image_BG; // 0x508(0x08)
	struct UImage* ; // 0x510(0x08)
	struct USafeZone* ; // 0x518(0x08)
	struct USafeZone* SafeZone_Close; // 0x520(0x08)
	struct UCommonTextBlock* Text_EventName; // 0x528(0x08)
	struct UCommonTextBlock* Text_NoLeaderboardEntries; // 0x530(0x08)

	void Initialize Children For Event(struct FString Event Id, struct FString Event Window Id); // Function ArenaLeaderboard.ArenaLeaderboard_C.Initialize Children For Event // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnLeaderboardEntrySelected(struct UFortEventLeaderboardEntryData* EntryData); // Function ArenaLeaderboard.ArenaLeaderboard_C.OnLeaderboardEntrySelected // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnInitialized(); // Function ArenaLeaderboard.ArenaLeaderboard_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void ShowMyStats(struct UCommonButtonLegacy* Button); // Function ArenaLeaderboard.ArenaLeaderboard_C.ShowMyStats // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetupForEvent(struct FString EventId, struct FString EventWindowId); // Function ArenaLeaderboard.ArenaLeaderboard_C.SetupForEvent // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnColorize(struct FFortTournamentDisplayInfo ColorInfo); // Function ArenaLeaderboard.ArenaLeaderboard_C.OnColorize // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnDeactivated(); // Function ArenaLeaderboard.ArenaLeaderboard_C.BP_OnDeactivated // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void Item Double-Clicked(struct UObject* Item); // Function ArenaLeaderboard.ArenaLeaderboard_C.Item Double-Clicked // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Construct(); // Function ArenaLeaderboard.ArenaLeaderboard_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnLeaderboardTabsLoaded(bool bNoLeaderboardTabs); // Function ArenaLeaderboard.ArenaLeaderboard_C.OnLeaderboardTabsLoaded // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_ArenaLeaderboard(int32_t EntryPoint); // Function ArenaLeaderboard.ArenaLeaderboard_C.ExecuteUbergraph_ArenaLeaderboard // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

