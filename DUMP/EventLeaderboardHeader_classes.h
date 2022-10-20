// WidgetBlueprintGeneratedClass EventLeaderboardHeader.EventLeaderboardHeader_C
// Size: 0x780 (Inherited: 0x768)
struct UEventLeaderboardHeader_C : UFortShowdownDetailView {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x768(0x08)
	struct UCommonBorder* CommonBorder_ScoringTitleBG; // 0x770(0x08)
	struct UCommonTextBlock* Text_RoundTitle; // 0x778(0x08)

	void RefreshDataBP(); // Function EventLeaderboardHeader.EventLeaderboardHeader_C.RefreshDataBP // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_EventLeaderboardHeader(int32_t EntryPoint); // Function EventLeaderboardHeader.EventLeaderboardHeader_C.ExecuteUbergraph_EventLeaderboardHeader // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

