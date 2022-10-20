// WidgetBlueprintGeneratedClass ShowdownPin.ShowdownPin_C
// Size: 0x80a (Inherited: 0x770)
struct UShowdownPin_C : UFortShowdownPin {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x770(0x08)
	struct UWidgetAnimation* Hover; // 0x778(0x08)
	struct UWidgetAnimation* Focus; // 0x780(0x08)
	struct UWidgetAnimation* Reveal; // 0x788(0x08)
	struct UCommonTextBlock* CommonTextBlock_NoPinPts; // 0x790(0x08)
	struct UCommonTextBlock* CommonTextBlock_PinPts; // 0x798(0x08)
	struct UImage* Image_PinShadow; // 0x7a0(0x08)
	struct UOverlay* NoPinContent; // 0x7a8(0x08)
	struct UCommonLazyImage* NoPinIcon; // 0x7b0(0x08)
	struct UCommonTextBlock* NoPinPlusSign; // 0x7b8(0x08)
	struct UCommonNumericTextBlock* NoPinScoreText; // 0x7c0(0x08)
	struct UCommonLazyImage* NoPinShadow; // 0x7c8(0x08)
	struct UOverlay* PinContent; // 0x7d0(0x08)
	struct UImage* PinIcon; // 0x7d8(0x08)
	struct UCommonWidgetSwitcherLegacy* PinInfoSwitcher; // 0x7e0(0x08)
	struct UCommonTextBlock* PinScoreText; // 0x7e8(0x08)
	struct UVerticalBox* VerticalBox_PointValuesProgress; // 0x7f0(0x08)
	struct UVerticalBox* VerticalBoxPointValues; // 0x7f8(0x08)
	bool bRepresentsTournamentBestPin; // 0x800(0x01)
	bool DEVShowPin; // 0x801(0x01)
	bool HidePoints; // 0x802(0x01)
	char pad_803[0x1]; // 0x803(0x01)
	int32_t DEVPinScore; // 0x804(0x04)
	bool colorSilhouette; // 0x808(0x01)
	bool hideBackplate; // 0x809(0x01)

	void ChooseScoreToDisplay(int32_t& ScoreToDisplay); // Function ShowdownPin.ShowdownPin_C.ChooseScoreToDisplay // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Refresh(); // Function ShowdownPin.ShowdownPin_C.Refresh // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void RefreshDataBP(); // Function ShowdownPin.ShowdownPin_C.RefreshDataBP // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void PreConstruct(bool IsDesignTime); // Function ShowdownPin.ShowdownPin_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void EventSetTier(int32_t Score); // Function ShowdownPin.ShowdownPin_C.EventSetTier // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void EventFixPts(int32_t Points); // Function ShowdownPin.ShowdownPin_C.EventFixPts // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void EventColorize(); // Function ShowdownPin.ShowdownPin_C.EventColorize // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void EventRevealAnim(); // Function ShowdownPin.ShowdownPin_C.EventRevealAnim // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_ShowdownPin(int32_t EntryPoint); // Function ShowdownPin.ShowdownPin_C.ExecuteUbergraph_ShowdownPin // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

