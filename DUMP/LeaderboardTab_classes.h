// WidgetBlueprintGeneratedClass LeaderboardTab.LeaderboardTab_C
// Size: 0x438 (Inherited: 0x418)
struct ULeaderboardTab_C : UFortLeaderboardViewTab {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x418(0x08)
	struct UCommonBorder* CommonBorder_ContainerBG; // 0x420(0x08)
	struct UEventLeaderboardHeader_C* EventLeaderboardHeaderDetails; // 0x428(0x08)
	struct UCommonTextBlock* Text_NoLeaderboardEntries; // 0x430(0x08)

	void Colorize(struct FFortTournamentDisplayInfo Color Info); // Function LeaderboardTab.LeaderboardTab_C.Colorize // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Set Event(struct FString EventId, struct FString EventWindowId); // Function LeaderboardTab.LeaderboardTab_C.Set Event // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_LeaderboardTab(int32_t EntryPoint); // Function LeaderboardTab.LeaderboardTab_C.ExecuteUbergraph_LeaderboardTab // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

