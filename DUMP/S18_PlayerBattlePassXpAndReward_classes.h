// WidgetBlueprintGeneratedClass S18_PlayerBattlePassXpAndReward.S18_PlayerBattlePassXpAndReward_C
// Size: 0x304 (Inherited: 0x2e0)
struct US18_PlayerBattlePassXpAndReward_C : UFortSeasonDataWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e0(0x08)
	struct UImage* Image_RaceTrack; // 0x2e8(0x08)
	struct UCommonRichTextBlock* RichText_CurrentLevel; // 0x2f0(0x08)
	struct UCommonRichTextBlock* RichText_Level; // 0x2f8(0x08)
	int32_t Max BPLevel for Rewards; // 0x300(0x04)

	void Update Text(); // Function S18_PlayerBattlePassXpAndReward.S18_PlayerBattlePassXpAndReward_C.Update Text // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnLevelChanged(); // Function S18_PlayerBattlePassXpAndReward.S18_PlayerBattlePassXpAndReward_C.OnLevelChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnProgressUpdated(); // Function S18_PlayerBattlePassXpAndReward.S18_PlayerBattlePassXpAndReward_C.OnProgressUpdated // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnSuperCharged(); // Function S18_PlayerBattlePassXpAndReward.S18_PlayerBattlePassXpAndReward_C.OnSuperCharged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_S18_PlayerBattlePassXpAndReward(int32_t EntryPoint); // Function S18_PlayerBattlePassXpAndReward.S18_PlayerBattlePassXpAndReward_C.ExecuteUbergraph_S18_PlayerBattlePassXpAndReward // (Final|UbergraphFunction) // @ game+0xd67374
};

