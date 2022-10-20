// Class CrewUI.BattlePassCrewContentInterface
// Size: 0x28 (Inherited: 0x28)
struct UBattlePassCrewContentInterface : UInterface {
};

// Class CrewUI.BattlePassCrewPurchaseButton
// Size: 0x14f0 (Inherited: 0x14d0)
struct UBattlePassCrewPurchaseButton : UFortHoldableButton {
	enum class EBattlePassPurchaseButtonCurrencyType CurrencyType; // 0x14c8(0x01)
	struct UCommonTextBlock* Text_Label; // 0x14d0(0x08)
	struct UCommonTextBlock* Text_SecondaryLabel; // 0x14d8(0x08)
	struct UCommonTextBlock* Text_FinalCost; // 0x14e0(0x08)
	struct UWidget* Container_SecondaryLabel; // 0x14e8(0x08)

	void OnCurrencyUpdated(); // Function CrewUI.BattlePassCrewPurchaseButton.OnCurrencyUpdated // (Event|Protected|BlueprintEvent) // @ game+0xd67374
};

// Class CrewUI.BattlePassCrewPurchaseContainer
// Size: 0x478 (Inherited: 0x3f8)
struct UBattlePassCrewPurchaseContainer : UCommonActivatableWidget {
	char pad_3F8[0x20]; // 0x3f8(0x20)
	float CrewUpsellTransitionDelayTime; // 0x418(0x04)
	char pad_41C[0xc]; // 0x41c(0x0c)
	struct UCommonActivatableWidgetSwitcher* Switcher_ContentContainer; // 0x428(0x08)
	struct UBattlePassPurchaseScreen* BattlePassPurchaseScreen; // 0x430(0x08)
	struct UWidgetAnimation* Intro; // 0x438(0x08)
	struct UWidgetAnimation* QuickIntro; // 0x440(0x08)
	struct UWidgetAnimation* CrewBenefitsIntro; // 0x448(0x08)
	struct UCrewSubscriptionErrorModal* CrewSubscriptionErrorModalClass; // 0x450(0x08)
	char pad_458[0x20]; // 0x458(0x20)

	void OnTriggerIntroAnimation(bool bCanClaimRewards); // Function CrewUI.BattlePassCrewPurchaseContainer.OnTriggerIntroAnimation // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnContentStateUpdated(enum class EBattlePassCrewContentState InState, bool bInScreenOpened); // Function CrewUI.BattlePassCrewPurchaseContainer.OnContentStateUpdated // (Event|Protected|BlueprintEvent) // @ game+0xd67374
};

// Class CrewUI.BattlePassSeasonHeading
// Size: 0x2e8 (Inherited: 0x2e0)
struct UBattlePassSeasonHeading : UCommonUserWidget {
	struct UCommonRichTextBlock* Text_Season; // 0x2e0(0x08)
};

// Class CrewUI.BattlePassPurchaseScreen
// Size: 0x550 (Inherited: 0x438)
struct UBattlePassPurchaseScreen : UCMSBackgroundWidget {
	char pad_438[0xa0]; // 0x438(0xa0)
	struct UCommonActivatableWidget* PurchaseCompleteModal; // 0x4d8(0x08)
	struct UCommonButtonBase* Button_ToCrew; // 0x4e0(0x08)
	struct UBattlePassCrewPurchaseButton* Button_Purchase; // 0x4e8(0x08)
	struct UCommonButtonBase* Button_MoreInfo; // 0x4f0(0x08)
	struct UCommonButtonBase* Button_GiftBattlePass; // 0x4f8(0x08)
	struct UBattlePassCrewPurchaseButton* Button_ConfirmBase; // 0x500(0x08)
	struct UBattlePassCrewPurchaseButton* Button_ConfirmBundle; // 0x508(0x08)
	struct UBattlePassSeasonHeading* Heading_Primary; // 0x510(0x08)
	struct UBattlePassSeasonHeading* Heading_Secondary; // 0x518(0x08)
	struct UCommonRichTextBlock* RichText_Disclaimer; // 0x520(0x08)
	struct UCommonTextBlock* Text_Description; // 0x528(0x08)
	struct UCommonAnimatedSwitcher* Switcher_PurchaseState; // 0x530(0x08)
	char pad_538[0x18]; // 0x538(0x18)

	void OnShowNavButtonNotification(bool bShowNotification); // Function CrewUI.BattlePassPurchaseScreen.OnShowNavButtonNotification // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnSetScreenInteractable(bool bInteractable); // Function CrewUI.BattlePassPurchaseScreen.OnSetScreenInteractable // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnSetNavButtonNotificationText(struct FText& NotificationText); // Function CrewUI.BattlePassPurchaseScreen.OnSetNavButtonNotificationText // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void OnPurchaseStateChanged(enum class EBattlePassPurchaseState InCurrentState); // Function CrewUI.BattlePassPurchaseScreen.OnPurchaseStateChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnPurchaseConfirmed(); // Function CrewUI.BattlePassPurchaseScreen.OnPurchaseConfirmed // (Event|Protected|BlueprintEvent) // @ game+0xd67374
};

// Class CrewUI.CrewMultiSubscriptionAlertModal
// Size: 0x4d0 (Inherited: 0x3f8)
struct UCrewMultiSubscriptionAlertModal : UCommonActivatableWidget {
	char pad_3F8[0x8]; // 0x3f8(0x08)
	struct UDynamicEntryBox* EntryBox_BulletPoints; // 0x400(0x08)
	struct UCommonButtonBase* Button_OpenHowToURL; // 0x408(0x08)
	struct UCommonButtonBase* Button_TextURL; // 0x410(0x08)
	struct UCommonButtonBase* Button_DoNotRemind; // 0x418(0x08)
	struct UCommonButtonBase* Button_Close; // 0x420(0x08)
	struct TArray<struct FText> BulletPoints; // 0x428(0x10)
	struct TMap<enum class EAppStore, struct FText> AppStorePlatformMapping; // 0x438(0x50)
	struct FString HowToCancelURL; // 0x488(0x10)
	char pad_498[0x20]; // 0x498(0x20)
	struct FText PlatformTextStyle; // 0x4b8(0x18)

	void OnSetHowToCancelURL(struct FString MoreInfoUrl); // Function CrewUI.CrewMultiSubscriptionAlertModal.OnSetHowToCancelURL // (Event|Protected|BlueprintEvent) // @ game+0xd67374
};

// Class CrewUI.CrewPriceChangeAcknowledgeModal
// Size: 0x598 (Inherited: 0x3f8)
struct UCrewPriceChangeAcknowledgeModal : UCommonActivatableWidget {
	char pad_3F8[0x8]; // 0x3f8(0x08)
	struct UCommonButtonBase* Button_Accept; // 0x400(0x08)
	struct UCommonButtonBase* Button_CancelSubscription; // 0x408(0x08)
	struct UCommonButtonBase* Button_MoreInfo; // 0x410(0x08)
	struct UCommonButtonBase* Button_TextURL; // 0x418(0x08)
	struct TSoftClassPtr<UObject> CancellationInfoModalClass; // 0x420(0x28)
	char pad_448[0x150]; // 0x448(0x150)

	void OnSetPriceChangeAcknowledgeTitle(struct FText& Title); // Function CrewUI.CrewPriceChangeAcknowledgeModal.OnSetPriceChangeAcknowledgeTitle // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void OnSetPriceChangeAcknowledgeMoreInfoUrl(struct FText& MoreInfoUrl); // Function CrewUI.CrewPriceChangeAcknowledgeModal.OnSetPriceChangeAcknowledgeMoreInfoUrl // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void OnSetPriceChangeAcknowledgeMoreInfoText(struct FText& ConfirmButtonText); // Function CrewUI.CrewPriceChangeAcknowledgeModal.OnSetPriceChangeAcknowledgeMoreInfoText // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void OnSetPriceChangeAcknowledgeConfirmButtonText(struct FText& ConfirmButtonText); // Function CrewUI.CrewPriceChangeAcknowledgeModal.OnSetPriceChangeAcknowledgeConfirmButtonText // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void OnSetPriceChangeAcknowledgeCheckboxText(struct FText& CheckboxText); // Function CrewUI.CrewPriceChangeAcknowledgeModal.OnSetPriceChangeAcknowledgeCheckboxText // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void OnSetPriceChangeAcknowledgeCancelSubscriptionButtonText(struct FText& CancelSubscriptionButtonText); // Function CrewUI.CrewPriceChangeAcknowledgeModal.OnSetPriceChangeAcknowledgeCancelSubscriptionButtonText // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void OnSetPriceChangeAcknowledgeBodyText(struct FText& BodyText); // Function CrewUI.CrewPriceChangeAcknowledgeModal.OnSetPriceChangeAcknowledgeBodyText // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void OnSetPriceChangeAcknowledgeBodyTable(struct TArray<struct FCrewTableRow>& PriceChangeByRegionRows); // Function CrewUI.CrewPriceChangeAcknowledgeModal.OnSetPriceChangeAcknowledgeBodyTable // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void OnModalBackout(); // Function CrewUI.CrewPriceChangeAcknowledgeModal.OnModalBackout // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExitModal(); // Function CrewUI.CrewPriceChangeAcknowledgeModal.ExitModal // (Final|Native|Protected|BlueprintCallable) // @ game+0x5c3c3b4
};

// Class CrewUI.CrewPurchaseScreen
// Size: 0x5c8 (Inherited: 0x438)
struct UCrewPurchaseScreen : UCMSBackgroundWidget {
	char pad_438[0x68]; // 0x438(0x68)
	bool bManagementModeEnabled; // 0x4a0(0x01)
	char pad_4A1[0x7]; // 0x4a1(0x07)
	struct UWidget* FocusWidget; // 0x4a8(0x08)
	struct UCommonButtonGroupBase* ButtonGroup_BenefitsTiles; // 0x4b0(0x08)
	struct TSoftClassPtr<UObject> CancellationInfoModalClass; // 0x4b8(0x28)
	struct TSoftClassPtr<UObject> LegalInfoModalClass; // 0x4e0(0x28)
	struct TSoftClassPtr<UObject> ResolveIssueModalClass; // 0x508(0x28)
	struct TSoftClassPtr<UObject> RejoinModalClass; // 0x530(0x28)
	struct UCommonButtonBase* Button_ToBattlePass; // 0x558(0x08)
	struct UBattlePassCrewPurchaseButton* Button_Purchase; // 0x560(0x08)
	struct UBattlePassCrewPurchaseButton* Button_Rejoin; // 0x568(0x08)
	struct UCommonButtonBase* Button_ResolvePayment; // 0x570(0x08)
	struct UCommonButtonBase* Button_WatchTrailer; // 0x578(0x08)
	struct UCommonButtonBase* Button_Terms; // 0x580(0x08)
	struct UCommonButtonBase* Button_CancellationInfo; // 0x588(0x08)
	struct UDynamicEntryBox* EntryBox_RecurringRewards; // 0x590(0x08)
	struct UDynamicEntryBox* EntryBox_LimitedTimeRewards; // 0x598(0x08)
	struct UCrewTileDetails* Details_CurrentCrewTile; // 0x5a0(0x08)
	struct UCommonTextBlock* Text_LimitedTime; // 0x5a8(0x08)
	struct UOverlay* Overlay_UserInformation; // 0x5b0(0x08)
	struct UCommonTextBlock* Text_UserInformation; // 0x5b8(0x08)
	struct UCommonTextBlock* Text_CrewDisclaimer; // 0x5c0(0x08)

	void OnUserInformationTextsUpdated(struct FText& UserInformationText1, struct FText& UserInformationText2, enum class EMcpSubscriptionState SubscriptionState); // Function CrewUI.CrewPurchaseScreen.OnUserInformationTextsUpdated // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void OnUpdateVBuckRefundVisibility(bool bVisible); // Function CrewUI.CrewPurchaseScreen.OnUpdateVBuckRefundVisibility // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnUpdatePurchaseButtonState(enum class ECrewPurchaseButtonState ButtonState); // Function CrewUI.CrewPurchaseScreen.OnUpdatePurchaseButtonState // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnShowNavButtonNotification(bool bShowNotification); // Function CrewUI.CrewPurchaseScreen.OnShowNavButtonNotification // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnSetNavButtonNotificationText(struct FText& NotificationText); // Function CrewUI.CrewPurchaseScreen.OnSetNavButtonNotificationText // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void OnContainerTabVisibilityUpdated(bool bTabsVisible, float SpacingAdjustmentForTabs); // Function CrewUI.CrewPurchaseScreen.OnContainerTabVisibilityUpdated // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void EndProgress(); // Function CrewUI.CrewPurchaseScreen.EndProgress // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BeginProgress(struct FText& ProgressLabel); // Function CrewUI.CrewPurchaseScreen.BeginProgress // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
};

// Class CrewUI.CrewRewardTile
// Size: 0x1490 (Inherited: 0x1430)
struct UCrewRewardTile : UCommonButtonBase {
	char pad_1430[0x40]; // 0x1430(0x40)
	float TileImageStreamoutSeconds; // 0x1470(0x04)
	char pad_1474[0x4]; // 0x1474(0x04)
	struct UImage* Image_TileImage; // 0x1478(0x08)
	struct UCommonTextBlock* Text_TileLabel; // 0x1480(0x08)
	char pad_1488[0x8]; // 0x1488(0x08)

	void OnUpdateOwnedState(bool bOwned); // Function CrewUI.CrewRewardTile.OnUpdateOwnedState // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnStartingDownloadTileImage(); // Function CrewUI.CrewRewardTile.OnStartingDownloadTileImage // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnDownloadTileImageComplete(struct UTexture2D* Texture); // Function CrewUI.CrewRewardTile.OnDownloadTileImageComplete // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	bool IsMonthlyBenefit(); // Function CrewUI.CrewRewardTile.IsMonthlyBenefit // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x26bc05c
};

// Class CrewUI.CrewSeasonLaunchScreen
// Size: 0x528 (Inherited: 0x438)
struct UCrewSeasonLaunchScreen : UCMSBackgroundWidget {
	char pad_438[0x38]; // 0x438(0x38)
	struct TSoftClassPtr<UObject> ResolveIssueModalClass; // 0x470(0x28)
	struct UBattlePassSeasonHeading* Heading_SeasonInfo; // 0x498(0x08)
	struct UCommonTextBlock* Text_Description; // 0x4a0(0x08)
	struct UCommonButtonBase* Button_Claim; // 0x4a8(0x08)
	struct UCommonButtonBase* Button_ResolveIssue; // 0x4b0(0x08)
	struct UCommonButtonBase* Button_GiftBattlePass; // 0x4b8(0x08)
	struct UCommonRichTextBlock* RichText_Disclaimer; // 0x4c0(0x08)
	char pad_4C8[0x60]; // 0x4c8(0x60)
};

// Class CrewUI.CrewStandaloneSubscriptionContentContainer
// Size: 0x628 (Inherited: 0x620)
struct UCrewStandaloneSubscriptionContentContainer : UFortStandaloneFrontend {
	struct UCrewSubscriptionContentContainer* Widget_CrewContentContainer; // 0x620(0x08)
};

// Class CrewUI.CrewSubscriptionContentContainer
// Size: 0x498 (Inherited: 0x3f8)
struct UCrewSubscriptionContentContainer : UCommonActivatableWidget {
	char pad_3F8[0x30]; // 0x3f8(0x30)
	struct TArray<struct FCrewSubscriptionContentTabData> TabsData; // 0x428(0x10)
	struct FDataTableRowHandle NextTabInputAction; // 0x438(0x10)
	struct FDataTableRowHandle PreviousTabInputAction; // 0x448(0x10)
	struct UDynamicEntryBox* EntryBox_Tabs; // 0x458(0x08)
	struct UCommonButtonGroupBase* ButtonGroup_Tabs; // 0x460(0x08)
	struct UCommonActivatableWidgetSwitcher* Switcher_Tabs; // 0x468(0x08)
	struct UWidget* Widget_TabsContainer; // 0x470(0x08)
	float SpacingAdjustmentForTabs; // 0x478(0x04)
	struct FPrimaryContentSetup ContentSetup; // 0x47c(0x03)
	char pad_47F[0x19]; // 0x47f(0x19)

	void OnTabSelected(int32_t TabIndex); // Function CrewUI.CrewSubscriptionContentContainer.OnTabSelected // (Event|Protected|BlueprintEvent) // @ game+0xd67374
};

// Class CrewUI.CrewSubscriptionErrorModal
// Size: 0x408 (Inherited: 0x3f8)
struct UCrewSubscriptionErrorModal : UCommonActivatableWidget {
	struct UCommonButtonBase* Button_Confirm; // 0x3f8(0x08)
	struct UCommonButtonBase* Button_CloseMobile; // 0x400(0x08)
};

// Class CrewUI.CrewTileDetails
// Size: 0x328 (Inherited: 0x2e0)
struct UCrewTileDetails : UCommonUserWidget {
	char pad_2E0[0x28]; // 0x2e0(0x28)
	struct UCommonTextBlock* Text_Title; // 0x308(0x08)
	struct UCommonRichTextBlock* RichText_Description; // 0x310(0x08)
	struct UDynamicEntryBox* EntryBox_Tags; // 0x318(0x08)
	struct UCommonButtonBase* Button_MobileMoreInfo; // 0x320(0x08)
};

// Class CrewUI.CrewTileDetailsTag
// Size: 0x2e8 (Inherited: 0x2e0)
struct UCrewTileDetailsTag : UCommonUserWidget {
	struct UCommonRichTextBlock* Text_Label; // 0x2e0(0x08)

	void OnTagSetup(enum class ECrewDetailsTag RewardTag, bool bIsOwnedTag); // Function CrewUI.CrewTileDetailsTag.OnTagSetup // (Event|Protected|BlueprintEvent) // @ game+0xd67374
};

// Class CrewUI.CrewUIGameFeatureAction
// Size: 0x160 (Inherited: 0x28)
struct UCrewUIGameFeatureAction : UFortUIGameFeatureAction {
	struct TSoftClassPtr<UObject> BattlePassCrewContainerClass; // 0x28(0x28)
	struct TSoftClassPtr<UObject> CrewContentContainerClass; // 0x50(0x28)
	struct TSoftClassPtr<UObject> CrewStandaloneContentContainerClass; // 0x78(0x28)
	struct TSoftClassPtr<UObject> CrewPurchaseScreenClass; // 0xa0(0x28)
	struct TSoftClassPtr<UObject> ProgressionScreenClass; // 0xc8(0x28)
	struct TSoftClassPtr<UObject> CrewPriceChangeAcknowledgeModalClass; // 0xf0(0x28)
	struct TSoftClassPtr<UObject> MultiSubAlertModalClass; // 0x118(0x28)
	struct TArray<struct FFortProgressiveSet> ProgressiveCosmeticSets; // 0x140(0x10)
	char pad_150[0x10]; // 0x150(0x10)
};

// Class CrewUI.FortProgressiveContentContainer
// Size: 0x448 (Inherited: 0x3f8)
struct UFortProgressiveContentContainer : UCommonActivatableWidget {
	char pad_3F8[0x38]; // 0x3f8(0x38)
	struct UCommonActivatableWidgetSwitcher* Switcher_PrimaryContent; // 0x430(0x08)
	struct UFortProgressiveTableOfContentsScreen* Widget_ProgressiveTableOfContentsScreen; // 0x438(0x08)
	struct UFortProgressiveItemScreen* Widget_ProgressiveItemScreen; // 0x440(0x08)
};

// Class CrewUI.FortProgressiveContentInterface
// Size: 0x28 (Inherited: 0x28)
struct UFortProgressiveContentInterface : UInterface {
};

// Class CrewUI.FortProgressiveItemDetailsWidget
// Size: 0x2e0 (Inherited: 0x2b8)
struct UFortProgressiveItemDetailsWidget : UUserWidget {
	struct UCommonTextBlock* Text_CosmeticStage; // 0x2b8(0x08)
	struct UCommonRichTextBlock* Text_UnlockCriteria; // 0x2c0(0x08)
	struct UWidget* Widget_UnlockCriteriaContainer; // 0x2c8(0x08)
	struct UAthenaRewardItemTypeRarityTag* Widget_ItemTypeRarityTag; // 0x2d0(0x08)
	struct UWidget* Tag_Owned; // 0x2d8(0x08)
};

// Class CrewUI.FortProgressiveScreenBase
// Size: 0x720 (Inherited: 0x6b8)
struct UFortProgressiveScreenBase : UFortItemPreviewScreen {
	char pad_6B8[0x54]; // 0x6b8(0x54)
	float VariantPreviewTime; // 0x70c(0x04)
	char pad_710[0x10]; // 0x710(0x10)

	void BP_OnContainerTabVisibilityUpdated(bool bTabsVisible, float SpacingAdjustmentForTabs); // Function CrewUI.FortProgressiveScreenBase.BP_OnContainerTabVisibilityUpdated // (Event|Protected|BlueprintEvent) // @ game+0xd67374
};

// Class CrewUI.FortProgressiveItemScreen
// Size: 0x838 (Inherited: 0x720)
struct UFortProgressiveItemScreen : UFortProgressiveScreenBase {
	struct UCommonButtonBase* Button_Back; // 0x720(0x08)
	struct UCommonButtonBase* Button_MobileBack; // 0x728(0x08)
	struct UCommonButtonBase* Button_MoreInfo; // 0x730(0x08)
	struct UBattlePassCrewPurchaseButton* Button_Subscribe; // 0x738(0x08)
	struct UCommonButtonBase* Button_PreviewStyles; // 0x740(0x08)
	struct UCommonTextBlock* Text_ExpirationFinePrint; // 0x748(0x08)
	struct UCommonTextBlock* Text_NewStagesUnlockFinePrint; // 0x750(0x08)
	struct UDynamicEntryBox* EntryBox_StagesPips; // 0x758(0x08)
	struct UCommonButtonGroupBase* ButtonGroup_StagesPips; // 0x760(0x08)
	struct UFortProgressiveItemDetailsWidget* Widget_ProgressiveItemDetails; // 0x768(0x08)
	struct UFortProgressiveStageList* Widget_ProgressiveStageList; // 0x770(0x08)
	struct UFortProgressiveItemStateTitleWidget* ProgressiveItemStateTitle; // 0x778(0x08)
	struct TSoftClassPtr<UObject> MoreInfoModalClass; // 0x780(0x28)
	struct FName SubscribedMaterialParameterName; // 0x7a8(0x04)
	char pad_7AC[0x8c]; // 0x7ac(0x8c)

	void OnUpdateSubscriptionState(bool bSubscribed); // Function CrewUI.FortProgressiveItemScreen.OnUpdateSubscriptionState // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnSetIsSoloScreen(bool bInIsSoloScreen); // Function CrewUI.FortProgressiveItemScreen.OnSetIsSoloScreen // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnItemSelected(); // Function CrewUI.FortProgressiveItemScreen.OnItemSelected // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnErrorStateTextUpdated(struct FText& ErrorStateText); // Function CrewUI.FortProgressiveItemScreen.OnErrorStateTextUpdated // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
};

// Class CrewUI.FortProgressiveItemStateTitleWidget
// Size: 0x2b8 (Inherited: 0x2b8)
struct UFortProgressiveItemStateTitleWidget : UUserWidget {

	void BP_OnSetHeaderInfo(struct FText& Subheading, bool bSubscribed, int32_t UnlockedStages, int32_t MaxStages); // Function CrewUI.FortProgressiveItemStateTitleWidget.BP_OnSetHeaderInfo // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
};

// Class CrewUI.FortProgressiveItemWidget
// Size: 0x14c0 (Inherited: 0x1430)
struct UFortProgressiveItemWidget : UCommonButtonBase {
	struct UAthenaItemShopReactiveTileText* TileText_ItemName; // 0x1430(0x08)
	struct FProgressiveStageItemInfo StageItemInfo; // 0x1438(0x70)
	char pad_14A8[0x18]; // 0x14a8(0x18)

	void OnUnhighlighted(); // Function CrewUI.FortProgressiveItemWidget.OnUnhighlighted // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnTileMaterialLoaded(bool bSubscribed); // Function CrewUI.FortProgressiveItemWidget.OnTileMaterialLoaded // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnStageItemChanged(struct FProgressiveStageItemInfo& InStageItemInfo); // Function CrewUI.FortProgressiveItemWidget.OnStageItemChanged // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void OnPeekStateChanged(bool bIsInPeekState); // Function CrewUI.FortProgressiveItemWidget.OnPeekStateChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnHighlighted(); // Function CrewUI.FortProgressiveItemWidget.OnHighlighted // (Event|Protected|BlueprintEvent) // @ game+0xd67374
};

// Class CrewUI.FortProgressiveSetDetailsWidget
// Size: 0x2e8 (Inherited: 0x2b8)
struct UFortProgressiveSetDetailsWidget : UUserWidget {
	struct UCommonButtonBase* Button_MoreInfo; // 0x2b8(0x08)
	char pad_2C0[0x28]; // 0x2c0(0x28)

	void BP_OnUpdateSetDetails(struct FText& SetName, struct FText& ExpiringText, bool bCompleted); // Function CrewUI.FortProgressiveSetDetailsWidget.BP_OnUpdateSetDetails // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
};

// Class CrewUI.FortProgressiveSetList
// Size: 0x478 (Inherited: 0x3f8)
struct UFortProgressiveSetList : UCommonActivatableWidget {
	char pad_3F8[0x8]; // 0x3f8(0x08)
	struct UAthenaScrollBox* ScrollBox_SetList; // 0x400(0x08)
	struct UFortSwipePanel* SwipePanel_Navigation; // 0x408(0x08)
	struct UCommonButtonGroupBase* ButtonGroup_SetTiles; // 0x410(0x08)
	int32_t NumTilesPerPage; // 0x418(0x04)
	char pad_41C[0x4]; // 0x41c(0x04)
	struct TArray<struct UFortProgressiveSetTile*> SetTiles; // 0x420(0x10)
	char pad_430[0x48]; // 0x430(0x48)

	void ClearSetTiles(); // Function CrewUI.FortProgressiveSetList.ClearSetTiles // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	struct UFortProgressiveSetTile* AddSetTile(); // Function CrewUI.FortProgressiveSetList.AddSetTile // (Event|Protected|BlueprintEvent) // @ game+0xd67374
};

// Class CrewUI.FortProgressiveSetTile
// Size: 0x14e0 (Inherited: 0x1430)
struct UFortProgressiveSetTile : UCommonButtonBase {
	char pad_1430[0xb0]; // 0x1430(0xb0)

	void BP_OnTileMaterialLoaded(bool bSubscribed); // Function CrewUI.FortProgressiveSetTile.BP_OnTileMaterialLoaded // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnInitializeSetInfo(struct FProgressiveSetInfo& InSetInfo, struct FText& BottomText, struct FText& BottomSubtext, bool bSubscribed); // Function CrewUI.FortProgressiveSetTile.BP_OnInitializeSetInfo // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
};

// Class CrewUI.FortProgressiveStageList
// Size: 0x448 (Inherited: 0x3f8)
struct UFortProgressiveStageList : UCommonActivatableWidget {
	char pad_3F8[0x18]; // 0x3f8(0x18)
	struct UCommonButtonGroupBase* ButtonGroup_StageItems; // 0x410(0x08)
	struct UAthenaScrollBox* ScrollBox_StageList; // 0x418(0x08)
	struct UFortSwipePanel* SwipePanel_Navigation; // 0x420(0x08)
	char pad_428[0x8]; // 0x428(0x08)
	struct TArray<struct UFortProgressiveStageWidget*> Stages; // 0x430(0x10)
	char pad_440[0x8]; // 0x440(0x08)

	void SelectStageInDirection(int32_t Direction); // Function CrewUI.FortProgressiveStageList.SelectStageInDirection // (Final|Native|Public|BlueprintCallable) // @ game+0x67e0dd8
	void ClearStageWidgets(); // Function CrewUI.FortProgressiveStageList.ClearStageWidgets // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	struct UFortProgressiveStageWidget* AddStageWidget(); // Function CrewUI.FortProgressiveStageList.AddStageWidget // (Event|Protected|BlueprintEvent) // @ game+0xd67374
};

// Class CrewUI.FortProgressiveStageWidget
// Size: 0x300 (Inherited: 0x2e0)
struct UFortProgressiveStageWidget : UCommonUserWidget {
	struct UCommonTextBlock* Text_Month; // 0x2e0(0x08)
	char pad_2E8[0x18]; // 0x2e8(0x18)

	void OnSetTooltipVisible(bool bVisible); // Function CrewUI.FortProgressiveStageWidget.OnSetTooltipVisible // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnSetTooltipText(struct FText& InToolTipText); // Function CrewUI.FortProgressiveStageWidget.OnSetTooltipText // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void OnPeekStateChanged(bool bIsInPeekState); // Function CrewUI.FortProgressiveStageWidget.OnPeekStateChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ClearStageItemWidgets(); // Function CrewUI.FortProgressiveStageWidget.ClearStageItemWidgets // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	struct UFortProgressiveItemWidget* AddStageItemWidget(); // Function CrewUI.FortProgressiveStageWidget.AddStageItemWidget // (Event|Protected|BlueprintEvent) // @ game+0xd67374
};

// Class CrewUI.FortProgressiveTableOfContentsScreen
// Size: 0x7a8 (Inherited: 0x720)
struct UFortProgressiveTableOfContentsScreen : UFortProgressiveScreenBase {
	struct UCommonButtonBase* Button_Back; // 0x720(0x08)
	struct UCommonButtonBase* Button_MobileBack; // 0x728(0x08)
	struct UCommonButtonBase* Button_MoreInfo; // 0x730(0x08)
	struct UBattlePassCrewPurchaseButton* Button_Subscribe; // 0x738(0x08)
	struct UFortProgressiveSetList* Widget_SetList; // 0x740(0x08)
	struct UFortProgressiveSetDetailsWidget* Widget_SetDetails; // 0x748(0x08)
	struct UFortProgressiveItemStateTitleWidget* Widget_ItemStateTitle; // 0x750(0x08)
	struct UDynamicEntryBox* EntryBox_SetPagesPips; // 0x758(0x08)
	struct UCommonButtonGroupBase* ButtonGroup_SetPagesPips; // 0x760(0x08)
	struct TSoftClassPtr<UObject> MoreInfoModalClass; // 0x768(0x28)
	struct FName SubscribedMaterialParameterName; // 0x790(0x04)
	char pad_794[0x14]; // 0x794(0x14)

	void BP_OnUpdateSubscriptionState(bool bSubscribed); // Function CrewUI.FortProgressiveTableOfContentsScreen.BP_OnUpdateSubscriptionState // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnUpdateNumTilesAvailable(int32_t NumTiles); // Function CrewUI.FortProgressiveTableOfContentsScreen.BP_OnUpdateNumTilesAvailable // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnUpdateErrorStateText(struct FText& ErrorStateText); // Function CrewUI.FortProgressiveTableOfContentsScreen.BP_OnUpdateErrorStateText // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void BP_OnUpdateBanner(struct FText& BannerText, bool bAllSetsCompleted, bool bSubscribed); // Function CrewUI.FortProgressiveTableOfContentsScreen.BP_OnUpdateBanner // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void BP_OnSetDescriptionText(struct FText& ProductDescription); // Function CrewUI.FortProgressiveTableOfContentsScreen.BP_OnSetDescriptionText // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
};

