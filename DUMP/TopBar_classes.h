// WidgetBlueprintGeneratedClass TopBar.TopBar_C
// Size: 0x5c0 (Inherited: 0x580)
struct UTopBar_C : UAthenaTopBar {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x580(0x08)
	struct UWidgetAnimation* IntroTabLabel; // 0x588(0x08)
	struct UGameFeatureStatus_C* GameFeatureStatus_HighResTextureDownload; // 0x590(0x08)
	struct UHorizontalBox* HorizontalBox_TopContent; // 0x598(0x08)
	struct UHorizontalBox* MainNav; // 0x5a0(0x08)
	struct USizeBox* MobileTabTitle; // 0x5a8(0x08)
	struct USafeZone* ; // 0x5b0(0x08)
	struct Uwindowchromebuttons_C* windowchromebuttons; // 0x5b8(0x08)

	void SetMainNavVisibility(enum class ESlateVisibility NewVisibility); // Function TopBar.TopBar_C.SetMainNavVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetTopTabsVisibility(enum class ESlateVisibility NewVisibility); // Function TopBar.TopBar_C.SetTopTabsVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UpdateMTXButton(); // Function TopBar.TopBar_C.UpdateMTXButton // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Construct(); // Function TopBar.TopBar_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnMobileTabLabelChanged(); // Function TopBar.TopBar_C.OnMobileTabLabelChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_TopBar(int32_t EntryPoint); // Function TopBar.TopBar_C.ExecuteUbergraph_TopBar // (Final|UbergraphFunction) // @ game+0xd67374
};

