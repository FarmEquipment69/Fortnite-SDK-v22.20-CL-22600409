// WidgetBlueprintGeneratedClass CareerScreen.CareerScreen_C
// Size: 0x619 (Inherited: 0x5e0)
struct UCareerScreen_C : UAthenaCareerScreen {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5e0(0x08)
	struct UWidgetSwitcher* FeatDisplaySwitcher; // 0x5e8(0x08)
	struct UCommonRichTextBlock* NoAchievementMessage; // 0x5f0(0x08)
	struct UCommonTextBlock* SeasonHeadingTextLabel; // 0x5f8(0x08)
	struct UWidgetSwitcher* Switcher; // 0x600(0x08)
	struct FDataTableRowHandle Input_ReplayCinematic; // 0x608(0x10)
	bool AutoPlayVideo; // 0x618(0x01)

	void ReplayCinematic(bool& PassThrough); // Function CareerScreen.CareerScreen_C.ReplayCinematic // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void PlayCinematic(); // Function CareerScreen.CareerScreen_C.PlayCinematic // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ShowFeats(bool bHasCompletedFeats); // Function CareerScreen.CareerScreen_C.ShowFeats // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnActivated(); // Function CareerScreen.CareerScreen_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnInitialized(); // Function CareerScreen.CareerScreen_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_CareerScreen(int32_t EntryPoint); // Function CareerScreen.CareerScreen_C.ExecuteUbergraph_CareerScreen // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

