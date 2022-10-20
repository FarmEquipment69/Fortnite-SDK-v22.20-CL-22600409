// WidgetBlueprintGeneratedClass S17_PlayerBattlePassXpAndReward.S17_PlayerBattlePassXpAndReward_C
// Size: 0x314 (Inherited: 0x2e0)
struct US17_PlayerBattlePassXpAndReward_C : UFortSeasonDataWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e0(0x08)
	struct UImage* ; // 0x2e8(0x08)
	struct UImage* Image_RaceTrack; // 0x2f0(0x08)
	struct UCommonRichTextBlock* RichText_CurrentLevel; // 0x2f8(0x08)
	struct UCommonRichTextBlock* RichText_Level; // 0x300(0x08)
	struct UVerticalBox* VerticalBox_5stars; // 0x308(0x08)
	int32_t Max BPLevel for Rewards; // 0x310(0x04)

	void Update Text(); // Function S17_PlayerBattlePassXpAndReward.S17_PlayerBattlePassXpAndReward_C.Update Text // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnLevelChanged(); // Function S17_PlayerBattlePassXpAndReward.S17_PlayerBattlePassXpAndReward_C.OnLevelChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnProgressUpdated(); // Function S17_PlayerBattlePassXpAndReward.S17_PlayerBattlePassXpAndReward_C.OnProgressUpdated // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnSuperCharged(); // Function S17_PlayerBattlePassXpAndReward.S17_PlayerBattlePassXpAndReward_C.OnSuperCharged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_S17_PlayerBattlePassXpAndReward(int32_t EntryPoint); // Function S17_PlayerBattlePassXpAndReward.S17_PlayerBattlePassXpAndReward_C.ExecuteUbergraph_S17_PlayerBattlePassXpAndReward // (Final|UbergraphFunction) // @ game+0xd67374
};

