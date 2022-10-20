// WidgetBlueprintGeneratedClass ProgressiveItemScreen.ProgressiveItemScreen_C
// Size: 0x898 (Inherited: 0x838)
struct UProgressiveItemScreen_C : UFortProgressiveItemScreen {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x838(0x08)
	struct UWidgetAnimation* Intro; // 0x840(0x08)
	struct UWidgetAnimation* ProgDetailsItemChange; // 0x848(0x08)
	struct UImage* BottomScreenGradient; // 0x850(0x08)
	struct UErrorInfoFlag_C* ErrorInfoFlag; // 0x858(0x08)
	struct USizeBox* SizeBox_ProgressiveStageList; // 0x860(0x08)
	struct FLinearColor BaseColor; // 0x868(0x10)
	struct FLinearColor HoverColor; // 0x878(0x10)
	struct FLinearColor SelectColor; // 0x888(0x10)

	void UpdateSubscribedVisuals(bool Subscribed); // Function ProgressiveItemScreen.ProgressiveItemScreen_C.UpdateSubscribedVisuals // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UpdateLayoutForTabs(bool bTabsVisible, double Spacing Adjustment For Tabs); // Function ProgressiveItemScreen.ProgressiveItemScreen_C.UpdateLayoutForTabs // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void BP_OnActivated(); // Function ProgressiveItemScreen.ProgressiveItemScreen_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnItemSelected(); // Function ProgressiveItemScreen.ProgressiveItemScreen_C.OnItemSelected // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnErrorStateTextUpdated(struct FText& ErrorStateText); // Function ProgressiveItemScreen.ProgressiveItemScreen_C.OnErrorStateTextUpdated // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void OnSetIsSoloScreen(bool bInIsSoloScreen); // Function ProgressiveItemScreen.ProgressiveItemScreen_C.OnSetIsSoloScreen // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnUpdateSubscriptionState(bool bSubscribed); // Function ProgressiveItemScreen.ProgressiveItemScreen_C.OnUpdateSubscriptionState // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnContainerTabVisibilityUpdated(bool bTabsVisible, float SpacingAdjustmentForTabs); // Function ProgressiveItemScreen.ProgressiveItemScreen_C.BP_OnContainerTabVisibilityUpdated // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnPreviewActionButtonUpdated(struct FText& RowDisplayName); // Function ProgressiveItemScreen.ProgressiveItemScreen_C.OnPreviewActionButtonUpdated // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_ProgressiveItemScreen(int32_t EntryPoint); // Function ProgressiveItemScreen.ProgressiveItemScreen_C.ExecuteUbergraph_ProgressiveItemScreen // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

