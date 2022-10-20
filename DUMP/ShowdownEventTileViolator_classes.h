// WidgetBlueprintGeneratedClass ShowdownEventTileViolator.ShowdownEventTileViolator_C
// Size: 0x7a1 (Inherited: 0x768)
struct UShowdownEventTileViolator_C : UFortShowdownDetailView {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x768(0x08)
	struct UWidgetAnimation* Focus; // 0x770(0x08)
	struct UCommonTextBlock* ; // 0x778(0x08)
	struct UCommonTextBlock* CommonTextBlock_RoundNumber; // 0x780(0x08)
	struct UCommonWidgetSwitcherLegacy* CommonWidgetSwitcher_EventState; // 0x788(0x08)
	struct UCommonWidgetSwitcherLegacy* CommonWidgetSwitcher_Proximity; // 0x790(0x08)
	struct ULiveViolator_C* LiveViolator; // 0x798(0x08)
	bool OverrideDoNotShowRound; // 0x7a0(0x01)

	void Construct(); // Function ShowdownEventTileViolator.ShowdownEventTileViolator_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void RefreshDataBP(); // Function ShowdownEventTileViolator.ShowdownEventTileViolator_C.RefreshDataBP // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void RefreshViolatorData(); // Function ShowdownEventTileViolator.ShowdownEventTileViolator_C.RefreshViolatorData // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_ShowdownEventTileViolator(int32_t EntryPoint); // Function ShowdownEventTileViolator.ShowdownEventTileViolator_C.ExecuteUbergraph_ShowdownEventTileViolator // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

