// WidgetBlueprintGeneratedClass ProgressiveTableOfContentsScreen.ProgressiveTableOfContentsScreen_C
// Size: 0x828 (Inherited: 0x7a8)
struct UProgressiveTableOfContentsScreen_C : UFortProgressiveTableOfContentsScreen {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x7a8(0x08)
	struct UWidgetAnimation* Intro; // 0x7b0(0x08)
	struct UImage* BottomScreenGradient; // 0x7b8(0x08)
	struct UErrorInfoFlag_C* ErrorInfoFlag; // 0x7c0(0x08)
	struct UCommonTextBlock* NoItems_HeaderText; // 0x7c8(0x08)
	struct UVerticalBox* NoItemsMessage; // 0x7d0(0x08)
	struct UVerticalBox* NoItemsToggleBox; // 0x7d8(0x08)
	struct UProgressiveHeaderBanner_C* ProgressiveHeaderBanner; // 0x7e0(0x08)
	struct UCommonTextBlock* Text_ProductDescription; // 0x7e8(0x08)
	struct UVerticalBox* VB_LeftSideContent; // 0x7f0(0x08)
	struct UVerticalBox* VBox_RightSideContent; // 0x7f8(0x08)
	struct FSlateColor SubscribedTextColor; // 0x800(0x14)
	struct FSlateColor UnsubscribedTextColor; // 0x814(0x14)

	void UpdateLayoutForTabs(bool bTabsVisible, double Spacing Adjustment For Tabs); // Function ProgressiveTableOfContentsScreen.ProgressiveTableOfContentsScreen_C.UpdateLayoutForTabs // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void No Items to Show(int32_t ItemsShown); // Function ProgressiveTableOfContentsScreen.ProgressiveTableOfContentsScreen_C.No Items to Show // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Update Subscribed Visuals(bool Subscribed); // Function ProgressiveTableOfContentsScreen.ProgressiveTableOfContentsScreen_C.Update Subscribed Visuals // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void BP_OnSetDescriptionText(struct FText& ProductDescription); // Function ProgressiveTableOfContentsScreen.ProgressiveTableOfContentsScreen_C.BP_OnSetDescriptionText // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void BP_OnUpdateBanner(struct FText& BannerText, bool bAllSetsCompleted, bool bSubscribed); // Function ProgressiveTableOfContentsScreen.ProgressiveTableOfContentsScreen_C.BP_OnUpdateBanner // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void BP_OnUpdateSubscriptionState(bool bSubscribed); // Function ProgressiveTableOfContentsScreen.ProgressiveTableOfContentsScreen_C.BP_OnUpdateSubscriptionState // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnActivated(); // Function ProgressiveTableOfContentsScreen.ProgressiveTableOfContentsScreen_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnUpdateNumTilesAvailable(int32_t NumTiles); // Function ProgressiveTableOfContentsScreen.ProgressiveTableOfContentsScreen_C.BP_OnUpdateNumTilesAvailable // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnContainerTabVisibilityUpdated(bool bTabsVisible, float SpacingAdjustmentForTabs); // Function ProgressiveTableOfContentsScreen.ProgressiveTableOfContentsScreen_C.BP_OnContainerTabVisibilityUpdated // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnUpdateErrorStateText(struct FText& ErrorStateText); // Function ProgressiveTableOfContentsScreen.ProgressiveTableOfContentsScreen_C.BP_OnUpdateErrorStateText // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_ProgressiveTableOfContentsScreen(int32_t EntryPoint); // Function ProgressiveTableOfContentsScreen.ProgressiveTableOfContentsScreen_C.ExecuteUbergraph_ProgressiveTableOfContentsScreen // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

