// WidgetBlueprintGeneratedClass VBucksStoreScreen.VBucksStoreScreen_C
// Size: 0x6a2 (Inherited: 0x618)
struct UVBucksStoreScreen_C : UFortVbucksStoreScreen {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x618(0x08)
	struct UWidgetAnimation* Intro; // 0x620(0x08)
	struct UCommonBorder* CurrencyNotificationBorder; // 0x628(0x08)
	struct UCommonTextBlock* CurrencyNotificationText; // 0x630(0x08)
	struct UHorizontalBox* ; // 0x638(0x08)
	struct UInfoFlag_C* InfoFlag; // 0x640(0x08)
	struct UNamedSlot* NamedSlot_ExtraContentBottom; // 0x648(0x08)
	struct UCommonBorder* NewNoOffersBox; // 0x650(0x08)
	struct UCommonBorder* NewPurchasingDisabledBox; // 0x658(0x08)
	struct UImage* NewSpinner; // 0x660(0x08)
	struct UCommonWidgetSwitcherLegacy* NewSwitcherItemsProgress; // 0x668(0x08)
	struct UVerticalBox* NewVbuckOffers; // 0x670(0x08)
	struct UVerticalBox* NewVBuckSection; // 0x678(0x08)
	struct UScaleBox* OfferScaleBoxRoot; // 0x680(0x08)
	struct UOverlay* ; // 0x688(0x08)
	struct UAudioComponent* Ambient Sound; // 0x690(0x08)
	struct UWidget* InitiallyFocusedOffer; // 0x698(0x08)
	bool bShowingCampaignUpsell; // 0x6a0(0x01)
	bool bUseMobileLayout; // 0x6a1(0x01)

	void ApplyMobileLayout(); // Function VBucksStoreScreen.VBucksStoreScreen_C.ApplyMobileLayout // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	struct UWidget* BP_GetDesiredFocusTarget(); // Function VBucksStoreScreen.VBucksStoreScreen_C.BP_GetDesiredFocusTarget // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xd67374
	void GetVisibilityByChildrenPresence(struct UPanelWidget* Panel, enum class ESlateVisibility& NewParam); // Function VBucksStoreScreen.VBucksStoreScreen_C.GetVisibilityByChildrenPresence // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xd67374
	void HandleAllOffersGenerated(); // Function VBucksStoreScreen.VBucksStoreScreen_C.HandleAllOffersGenerated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void PlayEquippedLockerMusic(); // Function VBucksStoreScreen.VBucksStoreScreen_C.PlayEquippedLockerMusic // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void HandleBack(bool& PassThrough); // Function VBucksStoreScreen.VBucksStoreScreen_C.HandleBack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void HandleRedeem(bool& bPassThrough); // Function VBucksStoreScreen.VBucksStoreScreen_C.HandleRedeem // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UpdateCurrencyNotification(); // Function VBucksStoreScreen.VBucksStoreScreen_C.UpdateCurrencyNotification // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void NoOffersAvailable(); // Function VBucksStoreScreen.VBucksStoreScreen_C.NoOffersAvailable // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnOffersGenerated(); // Function VBucksStoreScreen.VBucksStoreScreen_C.OnOffersGenerated // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnActivated(); // Function VBucksStoreScreen.VBucksStoreScreen_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnUpdateOtherPlatformMTXMessage(bool HasOtherPlatformCurrency, struct FText& CurrencyMessageLocText); // Function VBucksStoreScreen.VBucksStoreScreen_C.OnUpdateOtherPlatformMTXMessage // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void OnPurchasingDisabled(); // Function VBucksStoreScreen.VBucksStoreScreen_C.OnPurchasingDisabled // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnTransitionedBySwitcher(); // Function VBucksStoreScreen.VBucksStoreScreen_C.OnTransitionedBySwitcher // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnStartReadingOffers(); // Function VBucksStoreScreen.VBucksStoreScreen_C.OnStartReadingOffers // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void PreConstruct(bool IsDesignTime); // Function VBucksStoreScreen.VBucksStoreScreen_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_VBucksStoreScreen(int32_t EntryPoint); // Function VBucksStoreScreen.VBucksStoreScreen_C.ExecuteUbergraph_VBucksStoreScreen // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

