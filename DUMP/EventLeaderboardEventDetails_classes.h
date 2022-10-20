// WidgetBlueprintGeneratedClass EventLeaderboardEventDetails.EventLeaderboardEventDetails_C
// Size: 0x788 (Inherited: 0x768)
struct UEventLeaderboardEventDetails_C : UFortShowdownDetailView {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x768(0x08)
	struct UCommonTextBlock* Text_EventName; // 0x770(0x08)
	struct UCommonTextBlock* Text_RegionName; // 0x778(0x08)
	struct UCommonTextBlock* Text_SessionName; // 0x780(0x08)

	void RefreshDataBP(); // Function EventLeaderboardEventDetails.EventLeaderboardEventDetails_C.RefreshDataBP // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_EventLeaderboardEventDetails(int32_t EntryPoint); // Function EventLeaderboardEventDetails.EventLeaderboardEventDetails_C.ExecuteUbergraph_EventLeaderboardEventDetails // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

