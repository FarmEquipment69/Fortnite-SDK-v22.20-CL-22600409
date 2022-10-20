// WidgetBlueprintGeneratedClass ShowdownLobbyViolator.ShowdownLobbyViolator_C
// Size: 0x7c1 (Inherited: 0x768)
struct UShowdownLobbyViolator_C : UFortShowdownDetailView {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x768(0x08)
	struct UWidgetAnimation* Intro; // 0x770(0x08)
	struct UCommonBorder* CommonBorder_DetailsBG; // 0x778(0x08)
	struct UCommonBorder* CommonBorder_HighlightBorder; // 0x780(0x08)
	struct UCommonBorder* CommonBorder_TopContainer; // 0x788(0x08)
	struct UCommonTextBlock* CommonTextBlock_TimeRemainingDesc; // 0x790(0x08)
	struct UCommonWidgetSwitcherLegacy* CommonWidgetSwitcher_Status; // 0x798(0x08)
	struct UImage* Image_BGFillColor; // 0x7a0(0x08)
	struct UImage* Image_InnerTriangle; // 0x7a8(0x08)
	struct UImage* Image_OuterTriangle; // 0x7b0(0x08)
	struct UCommonTextBlock* Text_ShowdownTitle; // 0x7b8(0x08)
	bool runOnce; // 0x7c0(0x01)

	void RefreshDataBP(); // Function ShowdownLobbyViolator.ShowdownLobbyViolator_C.RefreshDataBP // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_ShowdownLobbyViolator(int32_t EntryPoint); // Function ShowdownLobbyViolator.ShowdownLobbyViolator_C.ExecuteUbergraph_ShowdownLobbyViolator // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

