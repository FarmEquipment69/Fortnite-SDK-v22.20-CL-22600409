// Class GiftingUI.AthenaGiftConfirmedPanel
// Size: 0x420 (Inherited: 0x3f8)
struct UAthenaGiftConfirmedPanel : UCommonActivatableWidget {
	char pad_3F8[0x18]; // 0x3f8(0x18)
	struct URichTextBlock* Text_RecipientInfo; // 0x410(0x08)
	struct UCommonButtonLegacy* Button_Back; // 0x418(0x08)
};

// Class GiftingUI.AthenaGiftingConfirmationScreen
// Size: 0x550 (Inherited: 0x3f8)
struct UAthenaGiftingConfirmationScreen : UCommonActivatableWidget {
	char pad_3F8[0x30]; // 0x3f8(0x30)
	struct UFortStoreFrontOfferInfo* PresentedGiftableOfferInfo; // 0x428(0x08)
	struct UFortStoreFrontOfferInfo* PresentedOptionalTokenOfferInfo; // 0x430(0x08)
	char pad_438[0xbc]; // 0x438(0xbc)
	float MinGiftSubmissionDelay; // 0x4f4(0x04)
	float MaxGiftSubmissionDelay; // 0x4f8(0x04)
	char pad_4FC[0x14]; // 0x4fc(0x14)
	struct UCommonButtonLegacy* Button_WrapOptions; // 0x510(0x08)
	struct UCommonButtonLegacy* Button_Back; // 0x518(0x08)
	struct UCommonButtonLegacy* Button_MobileClose; // 0x520(0x08)
	struct UCommonButtonLegacy* Button_MtxWallet; // 0x528(0x08)
	struct UAthenaGiftingPurchasePanel* Panel_GiftingPurchase; // 0x530(0x08)
	struct UAthenaGiftingWrapOptionsPanel* Panel_WrapOptions; // 0x538(0x08)
	struct UAthenaGiftConfirmedPanel* Panel_GiftConfirmed; // 0x540(0x08)
	struct UAthenaGiftingErrorsPanel* Panel_GiftingErrors; // 0x548(0x08)

	void OnPresentationModeChanged(enum class EGiftingPresentationMode NewMode); // Function GiftingUI.AthenaGiftingConfirmationScreen.OnPresentationModeChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void HandleTokenOfferPurchaseComplete(bool bSuccess, struct TArray<struct FPurchasedItemInfo>& PurchasedItems); // Function GiftingUI.AthenaGiftingConfirmationScreen.HandleTokenOfferPurchaseComplete // (Final|Native|Private|HasOutParms) // @ game+0x687e6a0
	void HandleGiftSent(bool bSuccess, struct TArray<struct FString>& IneligibleAccounts, struct TArray<struct FString>& ErrorCodes); // Function GiftingUI.AthenaGiftingConfirmationScreen.HandleGiftSent // (Final|Native|Private|HasOutParms) // @ game+0x687e338
	void Dismiss(bool bGiftConfirmed); // Function GiftingUI.AthenaGiftingConfirmationScreen.Dismiss // (Final|Native|Private|BlueprintCallable) // @ game+0x687e29c
};

// Class GiftingUI.AthenaGiftingErrorsPanel
// Size: 0x458 (Inherited: 0x3f8)
struct UAthenaGiftingErrorsPanel : UCommonActivatableWidget {
	char pad_3F8[0x30]; // 0x3f8(0x30)
	struct URichTextBlock* Text_RecipientInfo; // 0x428(0x08)
	struct URichTextBlock* Text_Title; // 0x430(0x08)
	struct UCommonButtonLegacy* Button_MobileClose; // 0x438(0x08)
	struct UCommonButtonLegacy* Button_Back; // 0x440(0x08)
	struct UCommonButtonLegacy* Button_Continue; // 0x448(0x08)
	struct UTileView* TileView_Items; // 0x450(0x08)

	void UpdateGiftEligibility(bool bStillGiftable); // Function GiftingUI.AthenaGiftingErrorsPanel.UpdateGiftEligibility // (Event|Protected|BlueprintEvent) // @ game+0xd67374
};

// Class GiftingUI.AthenaGiftingPriceWidget
// Size: 0x300 (Inherited: 0x2e0)
struct UAthenaGiftingPriceWidget : UCommonUserWidget {
	struct UCommonTextBlock* Text_RealMoneyPrice; // 0x2e0(0x08)
	struct UCommonTextBlock* Text_FinalPrice; // 0x2e8(0x08)
	struct UCommonTextBlock* Text_RegularPrice; // 0x2f0(0x08)
	struct UWidget* Overlay_SalePrice; // 0x2f8(0x08)

	void SetPresentationMode(enum class EGiftingPricePresentationMode Mode); // Function GiftingUI.AthenaGiftingPriceWidget.SetPresentationMode // (Event|Protected|BlueprintEvent) // @ game+0xd67374
};

// Class GiftingUI.AthenaGiftingPurchaseButton
// Size: 0x14e0 (Inherited: 0x14d0)
struct UAthenaGiftingPurchaseButton : UFortHoldableButton {
	struct UAthenaGiftingPriceWidget* Widget_Price; // 0x14c8(0x08)
	struct UCommonTextBlock* Text_Title; // 0x14d0(0x08)
};

// Class GiftingUI.AthenaGiftingPurchasePanel
// Size: 0x440 (Inherited: 0x3f8)
struct UAthenaGiftingPurchasePanel : UCommonActivatableWidget {
	char pad_3F8[0x18]; // 0x3f8(0x18)
	struct UAthenaGiftingPurchaseButton* Button_PurchaseGift; // 0x410(0x08)
	struct UFortSocialAvatarIcon* Avatar_MemberIcon; // 0x418(0x08)
	struct UCommonTextBlock* Text_SocialNameInfo; // 0x420(0x08)
	struct UCommonTextBlock* Text_ItemsCount; // 0x428(0x08)
	struct UCommonTextBlock* Text_OfferName; // 0x430(0x08)
	struct UTileView* TileView_Items; // 0x438(0x08)

	void PlayIntroAnimation(); // Function GiftingUI.AthenaGiftingPurchasePanel.PlayIntroAnimation // (Event|Public|BlueprintEvent) // @ game+0xd67374
};

// Class GiftingUI.AthenaGiftingScreen
// Size: 0x898 (Inherited: 0x6b8)
struct UAthenaGiftingScreen : UFortItemPreviewScreen {
	char pad_6B8[0x8]; // 0x6b8(0x08)
	struct UFortGiftingUserSearchWidget* SearchWidget_SocialSearchWidget; // 0x6c0(0x08)
	struct UFortGiftingSocialUserListView* ListView_Recipients; // 0x6c8(0x08)
	struct UTileView* TileView_Items; // 0x6d0(0x08)
	struct UCommonButtonBase* Button_Back; // 0x6d8(0x08)
	struct UCommonButtonBase* Button_MobileClose; // 0x6e0(0x08)
	struct UCommonButtonBase* Button_GiftingPolicy; // 0x6e8(0x08)
	struct UCommonButtonBase* Button_CameraControl; // 0x6f0(0x08)
	struct UCommonTextBlock* Text_OfferName; // 0x6f8(0x08)
	struct UCommonTextBlock* Text_VBucksOffCount; // 0x700(0x08)
	struct UCommonTextBlock* Text_ShownItemIndex; // 0x708(0x08)
	struct UCommonRichTextBlock* Text_NoContent; // 0x710(0x08)
	struct UCommonRichTextBlock* RichText_OfferItemOwnedCount; // 0x718(0x08)
	struct UOverlay* Container_VBucksOffViolator; // 0x720(0x08)
	struct UCommonRichTextBlock* RichText_GiftCount; // 0x728(0x08)
	struct UAthenaGiftingPriceWidget* Widget_Price; // 0x730(0x08)
	struct UAthenaLockerItemInfo* Widget_ItemInfo; // 0x738(0x08)
	struct UDynamicEntryBox* EntryBox_FilterTabs; // 0x740(0x08)
	struct UCommonActionWidget* ActionWidget_FilterTabsPrevious; // 0x748(0x08)
	struct UCommonActionWidget* ActionWidget_FilterTabsNext; // 0x750(0x08)
	struct UAthenaGiftingConfirmationScreen* ActivatableWidget_GiftingConfirmation; // 0x758(0x08)
	float ItemCyclingInterval; // 0x760(0x04)
	char pad_764[0x4]; // 0x764(0x04)
	struct FDataTableRowHandle FilterTabsPreviousAction; // 0x768(0x10)
	struct FDataTableRowHandle FilterTabsNextAction; // 0x778(0x10)
	struct FText RegularGiftingPolicy; // 0x788(0x18)
	struct FText BattlePassGiftingPolicy; // 0x7a0(0x18)
	char pad_7B8[0x60]; // 0x7b8(0x60)
	struct TMap<struct UCommonButtonLegacy*, enum class EFilterType> FilterMap; // 0x818(0x50)
	struct UCommonButtonGroupLegacy* FilterGroup; // 0x868(0x08)
	struct TArray<struct UFortItemDefinition*> ItemDefinitions; // 0x870(0x10)
	struct UFortItemDefinition* PresentedItemDefinition; // 0x880(0x08)
	struct UFortStoreFrontOfferInfo* GiftableOfferInfo; // 0x888(0x08)
	struct UFortStoreFrontOfferInfo* OptionalTokenOfferInfo; // 0x890(0x08)

	void OnShowSearchWarningText(bool bShow); // Function GiftingUI.AthenaGiftingScreen.OnShowSearchWarningText // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnShownItemChanged(); // Function GiftingUI.AthenaGiftingScreen.OnShownItemChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnSetupFilterTabButton(struct UCommonButtonLegacy* Button, enum class EFilterType FilterType); // Function GiftingUI.AthenaGiftingScreen.OnSetupFilterTabButton // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnPresentationModeChanged(enum class EGiftingScreenPresentationMode Mode); // Function GiftingUI.AthenaGiftingScreen.OnPresentationModeChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnPartyListUpdated(bool bEmpty); // Function GiftingUI.AthenaGiftingScreen.OnPartyListUpdated // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnFriendSelectionChanged(); // Function GiftingUI.AthenaGiftingScreen.OnFriendSelectionChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnFilterChanged(enum class EFilterType FilterType); // Function GiftingUI.AthenaGiftingScreen.OnFilterChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
};

// Class GiftingUI.AthenaGiftingWrapOptionsPanel
// Size: 0x460 (Inherited: 0x3f8)
struct UAthenaGiftingWrapOptionsPanel : UCommonActivatableWidget {
	char pad_3F8[0x28]; // 0x3f8(0x28)
	struct TArray<struct TSoftObjectPtr<UFortGiftBoxItemDefinition>> GiftBoxes; // 0x420(0x10)
	struct TArray<struct UFortGiftBoxItemDefinition*> GiftBoxItemDefs; // 0x430(0x10)
	char pad_440[0x10]; // 0x440(0x10)
	struct UCommonButtonLegacy* Button_ConfirmWrap; // 0x450(0x08)
	struct UTileView* TileView_WrapOptions; // 0x458(0x08)
};

// Class GiftingUI.FortGiftingSocialUserListEntry
// Size: 0x1580 (Inherited: 0x14a0)
struct UFortGiftingSocialUserListEntry : USocialListEntryBase {
	char pad_14A0[0xb8]; // 0x14a0(0xb8)
	struct UFortSocialAvatarIcon* Avatar_MemberIcon; // 0x1558(0x08)
	struct USocialNameTextBlock* Text_SocialName; // 0x1560(0x08)
	struct UCommonRichTextBlock* RichText_EligibilityStatus; // 0x1568(0x08)
	struct UCommonRichTextBlock* RichText_OwnedItems; // 0x1570(0x08)
	struct UAthenaGiftingPriceWidget* Widget_Price; // 0x1578(0x08)

	void SetPresentationMode(enum class ERecipientPresentationMode Mode); // Function GiftingUI.FortGiftingSocialUserListEntry.SetPresentationMode // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnUserItemSet(); // Function GiftingUI.FortGiftingSocialUserListEntry.OnUserItemSet // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnRecipientStatusUpdated(); // Function GiftingUI.FortGiftingSocialUserListEntry.OnRecipientStatusUpdated // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnTouchSelectionConfirmed(); // Function GiftingUI.FortGiftingSocialUserListEntry.BP_OnTouchSelectionConfirmed // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnHighlightedStateChanged(bool bInIsHighlighted, bool bPlayAnimation); // Function GiftingUI.FortGiftingSocialUserListEntry.BP_OnHighlightedStateChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
};

// Class GiftingUI.FortGiftingSocialUserListView
// Size: 0x458 (Inherited: 0x360)
struct UFortGiftingSocialUserListView : USocialUserListViewBase {
	float RefreshRecipientStatusDelay; // 0x360(0x04)
	char pad_364[0xf4]; // 0x364(0xf4)
};

// Class GiftingUI.FortGiftingUserSearchWidget
// Size: 0x328 (Inherited: 0x2e0)
struct UFortGiftingUserSearchWidget : UCommonUserWidget {
	struct UEditableText* EditableText_SearchFriends; // 0x2e0(0x08)
	struct UCommonButtonBase* Button_ClearQuery; // 0x2e8(0x08)
	struct UCommonButtonBase* Button_SubmitQuery; // 0x2f0(0x08)
	char pad_2F8[0x30]; // 0x2f8(0x30)

	void OnSearchCommit(bool bSearchStringShort); // Function GiftingUI.FortGiftingUserSearchWidget.OnSearchCommit // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void HandleSearchFriendsTextEntered(struct FText& Text, enum class ETextCommit CommitMethod); // Function GiftingUI.FortGiftingUserSearchWidget.HandleSearchFriendsTextEntered // (Final|Native|Private|HasOutParms) // @ game+0x687e538
	void HandleSearchFriendsTextChanged(struct FText& Text); // Function GiftingUI.FortGiftingUserSearchWidget.HandleSearchFriendsTextChanged // (Final|Native|Private|HasOutParms) // @ game+0x687e484
	void FocusEditableText(); // Function GiftingUI.FortGiftingUserSearchWidget.FocusEditableText // (Final|Native|Protected|BlueprintCallable) // @ game+0x687e31c
};

// Class GiftingUI.FortGiftingWrapOptionListEntry
// Size: 0x14a0 (Inherited: 0x1480)
struct UFortGiftingWrapOptionListEntry : UCommonButtonLegacy {
	char pad_1480[0x8]; // 0x1480(0x08)
	struct UFortGiftBoxItemDefinition* GiftBoxDefinition; // 0x1488(0x08)
	struct UCommonLazyImage* Image_Gift; // 0x1490(0x08)
	char pad_1498[0x8]; // 0x1498(0x08)
};

// Class GiftingUI.FortGiftingData
// Size: 0x548 (Inherited: 0x520)
struct UFortGiftingData : UFortGameFeatureData {
	struct TSoftClassPtr<UObject> GiftingScreenClass; // 0x520(0x28)
};

