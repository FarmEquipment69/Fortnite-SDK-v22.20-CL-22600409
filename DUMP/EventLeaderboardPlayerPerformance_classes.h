// WidgetBlueprintGeneratedClass EventLeaderboardPlayerPerformance.EventLeaderboardPlayerPerformance_C
// Size: 0x7a0 (Inherited: 0x768)
struct UEventLeaderboardPlayerPerformance_C : UFortShowdownDetailView {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x768(0x08)
	struct UEventsSimpleButton_C* Button_MyPosition; // 0x770(0x08)
	struct UCommonTextBlock* ; // 0x778(0x08)
	struct UCommonTextBlock* ; // 0x780(0x08)
	struct UHorizontalBox* HorizontalBox_Container; // 0x788(0x08)
	struct UCommonTextBlock* Text_PlayerPerformance; // 0x790(0x08)
	struct UCommonTextBlock* Text_PlayerScore; // 0x798(0x08)

	void RefreshDataBP(); // Function EventLeaderboardPlayerPerformance.EventLeaderboardPlayerPerformance_C.RefreshDataBP // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_EventLeaderboardPlayerPerformance(int32_t EntryPoint); // Function EventLeaderboardPlayerPerformance.EventLeaderboardPlayerPerformance_C.ExecuteUbergraph_EventLeaderboardPlayerPerformance // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

