// WidgetBlueprintGeneratedClass EventLeaderboardDetails_Stat.EventLeaderboardDetails_Stat_C
// Size: 0x2dc (Inherited: 0x2b8)
struct UEventLeaderboardDetails_Stat_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b8(0x08)
	struct UWidgetAnimation* UpdateStat; // 0x2c0(0x08)
	struct UCommonTextBlock* Text_StatName; // 0x2c8(0x08)
	struct UCommonTextBlock* Text_StatValue; // 0x2d0(0x08)
	int32_t StatItemIndex; // 0x2d8(0x04)

	void SetStatData(struct FText Name, double Value, int32_t NumFractionalDigits); // Function EventLeaderboardDetails_Stat.EventLeaderboardDetails_Stat_C.SetStatData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Construct(); // Function EventLeaderboardDetails_Stat.EventLeaderboardDetails_Stat_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void EventStatAnim(); // Function EventLeaderboardDetails_Stat.EventLeaderboardDetails_Stat_C.EventStatAnim // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_EventLeaderboardDetails_Stat(int32_t EntryPoint); // Function EventLeaderboardDetails_Stat.EventLeaderboardDetails_Stat_C.ExecuteUbergraph_EventLeaderboardDetails_Stat // (Final|UbergraphFunction) // @ game+0xd67374
};

