// Class SaveTheWorldUI.FortAbilitySystemContext
// Size: 0x80 (Inherited: 0x30)
struct UFortAbilitySystemContext : UBlueprintContextBase {
	char pad_30[0x50]; // 0x30(0x50)

	void RemoveDelegatesFromWidget(struct UWidget* Widget); // Function SaveTheWorldUI.FortAbilitySystemContext.RemoveDelegatesFromWidget // (Final|Native|Public|BlueprintCallable) // @ game+0x68bf144
	void RegisterForAttributeChanged(struct UWidget* Widget, struct UAbilitySystemComponent* ASC, struct FGameplayAttribute Attribute, struct FDelegate Callback); // Function SaveTheWorldUI.FortAbilitySystemContext.RegisterForAttributeChanged // (Final|Native|Public|BlueprintCallable) // @ game+0x68bedb0
	bool HasMatchingGameplayTag(struct FGameplayTag TagToCheck); // Function SaveTheWorldUI.FortAbilitySystemContext.HasMatchingGameplayTag // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x68be6e8
};

// Class SaveTheWorldUI.FortAlterationModOptinScreenBase
// Size: 0x548 (Inherited: 0x530)
struct UFortAlterationModOptinScreenBase : UCommonActivatablePanelLegacy {
	struct UFortItem* ItemToOptin; // 0x530(0x08)
	char pad_538[0x10]; // 0x538(0x10)

	void SetupItem(struct UFortItem* Item); // Function SaveTheWorldUI.FortAlterationModOptinScreenBase.SetupItem // (Final|Native|Public|BlueprintCallable) // @ game+0x68bf58c
	void RequestClose(bool bCancelled); // Function SaveTheWorldUI.FortAlterationModOptinScreenBase.RequestClose // (Final|Native|Protected|BlueprintCallable) // @ game+0x68bf1c4
	void OnSetupItem(); // Function SaveTheWorldUI.FortAlterationModOptinScreenBase.OnSetupItem // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnItemConversionComplete(); // Function SaveTheWorldUI.FortAlterationModOptinScreenBase.OnItemConversionComplete // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ConvertItemAlterations(); // Function SaveTheWorldUI.FortAlterationModOptinScreenBase.ConvertItemAlterations // (Final|Native|Protected|BlueprintCallable) // @ game+0x68bddd0
};

// Class SaveTheWorldUI.FortAlterationModScreenBase
// Size: 0x5c8 (Inherited: 0x568)
struct UFortAlterationModScreenBase : UFortActivatablePanel {
	struct UFortAlterationsWidget* AlterationsToEdit; // 0x568(0x08)
	struct UFortAlterationOptionsBase* AlterationSlotOptions; // 0x570(0x08)
	struct UFortItemDetailsHostPanel* ItemInspectionMainItemDetailsHostPanel; // 0x578(0x08)
	struct UFortItemDetailsHostPanel* AlterationsExtraDetailsPanel; // 0x580(0x08)
	struct UFortAlterationModOptinScreenBase* AlterationModOptinScreenClass; // 0x588(0x08)
	struct FDataTableRowHandle BackInputAction; // 0x590(0x10)
	struct TWeakObjectPtr<struct UFortAlterableItem> AlterableItem; // 0x5a0(0x08)
	struct UFortAlterationOption* CurrentAlterationOptionInternal; // 0x5a8(0x08)
	char pad_5B0[0x18]; // 0x5b0(0x18)

	void SetItemForAlterationsModding(struct UFortAlterableItem* InAlterableItem); // Function SaveTheWorldUI.FortAlterationModScreenBase.SetItemForAlterationsModding // (Final|Native|Public|BlueprintCallable) // @ game+0x68bf2c8
	void RefreshItemAndAlterationsBP(); // Function SaveTheWorldUI.FortAlterationModScreenBase.RefreshItemAndAlterationsBP // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnItemSlotChanged(bool SelectedSlot); // Function SaveTheWorldUI.FortAlterationModScreenBase.OnItemSlotChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnAlterationOptionChanged(struct UFortAlterationOption* CurrentAlterationOption); // Function SaveTheWorldUI.FortAlterationModScreenBase.OnAlterationOptionChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnAlterationModificationSucess(int32_t ModifiedSlotIndex); // Function SaveTheWorldUI.FortAlterationModScreenBase.OnAlterationModificationSucess // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnAlterationModificationStarted(); // Function SaveTheWorldUI.FortAlterationModScreenBase.OnAlterationModificationStarted // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnAlterationModificationCompleted(); // Function SaveTheWorldUI.FortAlterationModScreenBase.OnAlterationModificationCompleted // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void HandleBackAction(bool& bPassThrough); // Function SaveTheWorldUI.FortAlterationModScreenBase.HandleBackAction // (Final|Native|Private|HasOutParms) // @ game+0x68be338
	void ConfirmSelection(); // Function SaveTheWorldUI.FortAlterationModScreenBase.ConfirmSelection // (Final|Native|Protected|BlueprintCallable) // @ game+0x68bddbc
	void CancelSelection(); // Function SaveTheWorldUI.FortAlterationModScreenBase.CancelSelection // (Final|Native|Protected|BlueprintCallable) // @ game+0x68bdd1c
	bool AreIngredientRequirementsMent(struct TArray<struct FFortItemQuantityPair>& RequiredIngredients); // Function SaveTheWorldUI.FortAlterationModScreenBase.AreIngredientRequirementsMent // (Final|Native|Protected|HasOutParms|BlueprintCallable) // @ game+0x68bdc10
};

// Class SaveTheWorldUI.FortAlterationOption
// Size: 0x14d0 (Inherited: 0x1480)
struct UFortAlterationOption : UCommonButtonLegacy {
	char pad_1480[0x8]; // 0x1480(0x08)
	struct FAlterationOption AlterationOption; // 0x1488(0x38)
	char pad_14C0[0x10]; // 0x14c0(0x10)

	void Setup(struct FAlterationOption& InAlterationOption, enum class EFortAlterationOptionType InAlterationOptionType); // Function SaveTheWorldUI.FortAlterationOption.Setup // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x68bf4a0
	void OnSetup(); // Function SaveTheWorldUI.FortAlterationOption.OnSetup // (Event|Public|BlueprintEvent) // @ game+0xd67374
	struct TArray<struct FFortItemQuantityPair> GetRequiredIngredients(); // Function SaveTheWorldUI.FortAlterationOption.GetRequiredIngredients // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x68be1cc
	float GetNextPipCount(float MaxPipCount); // Function SaveTheWorldUI.FortAlterationOption.GetNextPipCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x68be138
	float GetCurrentPipCount(float MaxPipCount); // Function SaveTheWorldUI.FortAlterationOption.GetCurrentPipCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x68be008
	enum class EFortAlterationOptionType GetAlterationOptionType(); // Function SaveTheWorldUI.FortAlterationOption.GetAlterationOptionType // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x68bdff0
	struct UFortAlterationItemDefinition* GetAlterationDefinition(); // Function SaveTheWorldUI.FortAlterationOption.GetAlterationDefinition // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x68bde88
};

// Class SaveTheWorldUI.FortAlterationOptionsBase
// Size: 0x388 (Inherited: 0x2e0)
struct UFortAlterationOptionsBase : UCommonUserWidget {
	char pad_2E0[0x10]; // 0x2e0(0x10)
	struct UFortAlterationOption* AlterationOptionClass; // 0x2f0(0x08)
	struct UCommonButtonGroupLegacy* AlterationOptionButtons; // 0x2f8(0x08)
	char pad_300[0x20]; // 0x300(0x20)
	struct UFortAlterableItem* Item; // 0x320(0x08)
	int32_t SlotIndex; // 0x328(0x04)
	bool bUpgradeOptionExists; // 0x32c(0x01)
	char pad_32D[0x3]; // 0x32d(0x03)
	struct FAlterationOption UpgradeOption; // 0x330(0x38)
	struct TArray<struct FAlterationOption> RespecOptions; // 0x368(0x10)
	char pad_378[0x10]; // 0x378(0x10)

	void ProcessAlterationOptions(bool bIntroAlterations); // Function SaveTheWorldUI.FortAlterationOptionsBase.ProcessAlterationOptions // (Final|Native|Public|BlueprintCallable) // @ game+0x68bed30
	void OnItemChanged(bool bIntroAlterations); // Function SaveTheWorldUI.FortAlterationOptionsBase.OnItemChanged // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnGenerateOption(enum class EFortAlterationOptionType OptionType, struct UFortAlterationOption* OptionWidget); // Function SaveTheWorldUI.FortAlterationOptionsBase.OnGenerateOption // (Event|Public|BlueprintEvent) // @ game+0xd67374
	bool IsValidAlterationSlot(); // Function SaveTheWorldUI.FortAlterationOptionsBase.IsValidAlterationSlot // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x68be938
	void HandleAlterationsOptionSelected(struct UCommonButtonLegacy* AlterationOptionButton, int32_t GroupIndex); // Function SaveTheWorldUI.FortAlterationOptionsBase.HandleAlterationsOptionSelected // (Final|Native|Public) // @ game+0x68be274
	void HandleAlterationsOptionHovered(struct UCommonButtonLegacy* AlterationOptionButton, int32_t GroupIndex); // Function SaveTheWorldUI.FortAlterationOptionsBase.HandleAlterationsOptionHovered // (Final|Native|Public) // @ game+0x68be274
	bool DoAlterationOptionsExist(enum class EFortAlterationOptionType OptionType); // Function SaveTheWorldUI.FortAlterationOptionsBase.DoAlterationOptionsExist // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x68bdde4
};

// Class SaveTheWorldUI.FortArmoryScreen
// Size: 0x568 (Inherited: 0x568)
struct UFortArmoryScreen : UFortActivatablePanel {
};

// Class SaveTheWorldUI.FortArmoryScreen_Legacy
// Size: 0x568 (Inherited: 0x568)
struct UFortArmoryScreen_Legacy : UFortActivatablePanel {
};

// Class SaveTheWorldUI.FortBannerSelectorBase
// Size: 0x570 (Inherited: 0x530)
struct UFortBannerSelectorBase : UCommonActivatablePanelLegacy {
	struct UEditableText* BannerName; // 0x530(0x08)
	int32_t BannerNameMaxLength; // 0x538(0x04)
	char pad_53C[0x4]; // 0x53c(0x04)
	struct UBorder* ErrorBorder; // 0x540(0x08)
	struct UCommonTextBlock* ErrorText; // 0x548(0x08)
	bool bFilterHomeBaseNameWithOSS; // 0x550(0x01)
	char pad_551[0x1f]; // 0x551(0x1f)

	void UpdateErrorText(struct FText& ErrorMessageText); // Function SaveTheWorldUI.FortBannerSelectorBase.UpdateErrorText // (Final|Native|Protected|HasOutParms|BlueprintCallable) // @ game+0x68bf60c
	void OnHomebaseNameCommitSucceeded(); // Function SaveTheWorldUI.FortBannerSelectorBase.OnHomebaseNameCommitSucceeded // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnHomebaseNameCommitFailed(); // Function SaveTheWorldUI.FortBannerSelectorBase.OnHomebaseNameCommitFailed // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void IsPlayerNameValid(struct FText& PlayerName, bool& OutIsValid, struct FText& OutErrorText); // Function SaveTheWorldUI.FortBannerSelectorBase.IsPlayerNameValid // (Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x68be7e0
	bool HasIllegalChars(struct FString NewBannerName); // Function SaveTheWorldUI.FortBannerSelectorBase.HasIllegalChars // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x68be584
	void HandleBannerNameChanged(struct FText& Text); // Function SaveTheWorldUI.FortBannerSelectorBase.HandleBannerNameChanged // (Final|Native|Protected|HasOutParms) // @ game+0x68be3c4
	void CompleteHomebaseName(); // Function SaveTheWorldUI.FortBannerSelectorBase.CompleteHomebaseName // (Final|Native|Public|BlueprintCallable) // @ game+0x68bdda8
	void CompleteHomebaseBannerSelection(); // Function SaveTheWorldUI.FortBannerSelectorBase.CompleteHomebaseBannerSelection // (Final|Native|Public|BlueprintCallable) // @ game+0x68bdd94
};

// Class SaveTheWorldUI.FortCollectionBookGenericRewardWidget
// Size: 0x2f8 (Inherited: 0x2e0)
struct UFortCollectionBookGenericRewardWidget : UCommonUserWidget {
	char bUpdateVisibilityBasedOnRewardExistence : 1; // 0x2e0(0x01)
	char pad_2E0_1 : 7; // 0x2e0(0x01)
	char pad_2E1[0x3]; // 0x2e1(0x03)
	enum class ESlateVisibility VisibilityWhenNoRewardSpecified; // 0x2e4(0x01)
	enum class ESlateVisibility VisibilityWhenRewardSpecified; // 0x2e5(0x01)
	char pad_2E6[0x2]; // 0x2e6(0x02)
	struct UFortCollectionBookRewardCardWidget* RewardCardWidget; // 0x2e8(0x08)
	enum class ECollectionBookRewardStatus RewardStatus; // 0x2f0(0x01)
	char pad_2F1[0x7]; // 0x2f1(0x07)

	void SetRewardStatus(enum class ECollectionBookRewardStatus Status); // Function SaveTheWorldUI.FortCollectionBookGenericRewardWidget.SetRewardStatus // (Native|Public|BlueprintCallable) // @ game+0x68bf348
	void SetRewards(struct FFortRewardInfo& Rewards); // Function SaveTheWorldUI.FortCollectionBookGenericRewardWidget.SetRewards // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x68bf3cc
	void SetCurrentItemToDisplay(struct UFortItem* ItemToDisplay); // Function SaveTheWorldUI.FortCollectionBookGenericRewardWidget.SetCurrentItemToDisplay // (Native|Protected) // @ game+0x68bf244
	void OnRewardStatusChanged(enum class ECollectionBookRewardStatus NewStatus); // Function SaveTheWorldUI.FortCollectionBookGenericRewardWidget.OnRewardStatusChanged // (Native|Event|Protected|BlueprintEvent) // @ game+0x68beafc
	bool HasRewards(); // Function SaveTheWorldUI.FortCollectionBookGenericRewardWidget.HasRewards // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x68be7b8
	enum class ECollectionBookRewardStatus GetRewardStatus(); // Function SaveTheWorldUI.FortCollectionBookGenericRewardWidget.GetRewardStatus // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x68be24c
	void ClearRewards(); // Function SaveTheWorldUI.FortCollectionBookGenericRewardWidget.ClearRewards // (Native|Public|BlueprintCallable) // @ game+0x68bdd7c
};

// Class SaveTheWorldUI.FortCollectionBookHelpWidget
// Size: 0x568 (Inherited: 0x568)
struct UFortCollectionBookHelpWidget : UFortActivatablePanel {
};

// Class SaveTheWorldUI.FortCollectionBookItemPopupMenu
// Size: 0x558 (Inherited: 0x550)
struct UFortCollectionBookItemPopupMenu : UFortPopupMenu {
	char pad_550[0x8]; // 0x550(0x08)

	void HandleItemUpdated(); // Function SaveTheWorldUI.FortCollectionBookItemPopupMenu.HandleItemUpdated // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void HandleItemChanged(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged); // Function SaveTheWorldUI.FortCollectionBookItemPopupMenu.HandleItemChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	struct UFortCollectionBookSlotButton* GetHostButton(); // Function SaveTheWorldUI.FortCollectionBookItemPopupMenu.GetHostButton // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x68be09c
	bool CanItemBeUnslotted(); // Function SaveTheWorldUI.FortCollectionBookItemPopupMenu.CanItemBeUnslotted // (Final|Native|Protected|BlueprintCallable) // @ game+0x68bdcf8
	bool CanItemBePurchased(); // Function SaveTheWorldUI.FortCollectionBookItemPopupMenu.CanItemBePurchased // (Final|Native|Protected|BlueprintCallable) // @ game+0x68bdcd4
};

// Class SaveTheWorldUI.FortCollectionBookOverviewWidget
// Size: 0x328 (Inherited: 0x2e0)
struct UFortCollectionBookOverviewWidget : UCommonUserWidget {
	struct FMulticastInlineDelegate OnCollectionBookPageSelected; // 0x2e0(0x10)
	struct FMulticastInlineDelegate OnCollectionBookPageClicked; // 0x2f0(0x10)
	struct UFortCollectionBookPage* LastSelectedPage; // 0x300(0x08)
	struct UFortCollectionBookCategory* LastSelectedCategory; // 0x308(0x08)
	struct TArray<struct UFortCollectionBookCategory*> CategoryObjectPool; // 0x310(0x10)
	struct UCommonTreeView* PageTreeViewWidget; // 0x320(0x08)

	void OnDeactivated(); // Function SaveTheWorldUI.FortCollectionBookOverviewWidget.OnDeactivated // (Native|Event|Public|BlueprintEvent) // @ game+0x68bc17c
	void OnActivated(); // Function SaveTheWorldUI.FortCollectionBookOverviewWidget.OnActivated // (Native|Event|Public|BlueprintEvent) // @ game+0x68be964
	void HandlePagesChanged(struct UFortCollectionBookManager* CBManager); // Function SaveTheWorldUI.FortCollectionBookOverviewWidget.HandlePagesChanged // (Final|Native|Private) // @ game+0x68be488
};

// Class SaveTheWorldUI.FortCollectionBookPageCompletionRewardWidget
// Size: 0x2f8 (Inherited: 0x2f8)
struct UFortCollectionBookPageCompletionRewardWidget : UFortCollectionBookGenericRewardWidget {
};

// Class SaveTheWorldUI.FortCollectionBookPageDetailsWidget
// Size: 0x350 (Inherited: 0x2e0)
struct UFortCollectionBookPageDetailsWidget : UCommonUserWidget {
	struct UCommonTextBlock* PageCompletionText; // 0x2e0(0x08)
	struct UFortMaterialProgressBar* ProgressBar; // 0x2e8(0x08)
	struct UFortCollectionBookPageCompletionRewardWidget* PageRewardWidget; // 0x2f0(0x08)
	struct UCommonButtonLegacy* RewardDetailsButton; // 0x2f8(0x08)
	struct UFortCollectionBookPage* DetailsPage; // 0x300(0x08)
	struct TSoftClassPtr<UObject> RewardDetailsModalWidgetClass; // 0x308(0x28)
	struct FText ModalTitle; // 0x330(0x18)
	struct UFortCollectionBookRewardModalWidget* RewardDetailsModalWidget; // 0x348(0x08)

	void OnUnslotItemComplete(struct UFortAccountItem* SlottedItem, struct UFortAccountItem* OldItem, struct FName SlotId); // Function SaveTheWorldUI.FortCollectionBookPageDetailsWidget.OnUnslotItemComplete // (Final|Native|Protected) // @ game+0x68bec38
	void OnSlotItemComplete(struct UFortAccountItem* SlottedItem, struct FName SlotId); // Function SaveTheWorldUI.FortCollectionBookPageDetailsWidget.OnSlotItemComplete // (Final|Native|Protected) // @ game+0x68beb80
	void OnPageProgressionUpdated(int32_t TotalFilledSlots, int32_t TotalSlots, enum class EFortCollectionBookState State); // Function SaveTheWorldUI.FortCollectionBookPageDetailsWidget.OnPageProgressionUpdated // (Native|Event|Protected|BlueprintEvent) // @ game+0x68bea00
	void OnDetailsPageChanged(struct UFortCollectionBookPage* InNewDetailsPage); // Function SaveTheWorldUI.FortCollectionBookPageDetailsWidget.OnDetailsPageChanged // (Native|Event|Protected|BlueprintEvent) // @ game+0x68be97c
	void HandleRewardDetailsModalWidgetDeactivated(struct UCommonActivatablePanelLegacy* DeactivatedPanel); // Function SaveTheWorldUI.FortCollectionBookPageDetailsWidget.HandleRewardDetailsModalWidgetDeactivated // (Final|Native|Private) // @ game+0x68be504
};

// Class SaveTheWorldUI.FortCollectionBookPageListWidget
// Size: 0x14b0 (Inherited: 0x1480)
struct UFortCollectionBookPageListWidget : UCommonButtonLegacy {
	char pad_1480[0x8]; // 0x1480(0x08)
	struct UCommonTextBlock* PageNameWidget; // 0x1488(0x08)
	struct UCommonNumericTextBlock* AvailableSlotsWidget; // 0x1490(0x08)
	struct UCommonTextBlock* PageCompletionWidget; // 0x1498(0x08)
	struct TWeakObjectPtr<struct UObject> AssociatedPageOrCategory; // 0x14a0(0x08)
	bool bIsExpanded; // 0x14a8(0x01)
	char pad_14A9[0x7]; // 0x14a9(0x07)

	void SetupAsPage(struct UFortCollectionBookPage* Page); // Function SaveTheWorldUI.FortCollectionBookPageListWidget.SetupAsPage // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void SetupAsCategory(struct UFortCollectionBookCategory* category); // Function SaveTheWorldUI.FortCollectionBookPageListWidget.SetupAsCategory // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnSlottedItemOperationComplete(struct UFortAccountItem* SlottedItem, struct FName SlotId); // Function SaveTheWorldUI.FortCollectionBookPageListWidget.OnSlottedItemOperationComplete // (Final|Native|Protected) // @ game+0x68c07ec
	void OnPageDetailsUpdated(int32_t AvailableSlots, int32_t FilledSlots, int32_t TotalSlots, enum class EFortCollectionBookState State); // Function SaveTheWorldUI.FortCollectionBookPageListWidget.OnPageDetailsUpdated // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnCategoryDetailsUpdated(int32_t AvailableSlots, int32_t FilledSlots, int32_t TotalSlots); // Function SaveTheWorldUI.FortCollectionBookPageListWidget.OnCategoryDetailsUpdated // (Event|Protected|BlueprintEvent) // @ game+0xd67374
};

// Class SaveTheWorldUI.FortCollectionBookPicker
// Size: 0x448 (Inherited: 0x420)
struct UFortCollectionBookPicker : UFortItemPickerBase {
	char pad_420[0x8]; // 0x420(0x08)
	struct UFortMulchConfirmationModalWidget* MulchConfirmationModalClass; // 0x428(0x08)
	char pad_430[0x8]; // 0x430(0x08)
	struct UFortAccountItem* CurrentSlottedItem; // 0x438(0x08)
	struct UFortMulchConfirmationModalWidget* MulchConfirmationModal; // 0x440(0x08)

	void ShowMulchDialogForItem(struct UFortItem* ItemToMulch); // Function SaveTheWorldUI.FortCollectionBookPicker.ShowMulchDialogForItem // (Final|Native|Public|BlueprintCallable) // @ game+0x68c0eac
	void ShowMulchConfirmationModal(); // Function SaveTheWorldUI.FortCollectionBookPicker.ShowMulchConfirmationModal // (Native|Protected|BlueprintCallable) // @ game+0x68c0e90
	void OnCollectComplete(); // Function SaveTheWorldUI.FortCollectionBookPicker.OnCollectComplete // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void NotifyPanelDeactivated(); // Function SaveTheWorldUI.FortCollectionBookPicker.NotifyPanelDeactivated // (Native|Protected|BlueprintCallable) // @ game+0x68bfa48
	void NotifyPanelActivated(); // Function SaveTheWorldUI.FortCollectionBookPicker.NotifyPanelActivated // (Native|Protected|BlueprintCallable) // @ game+0x68bfa2c
	void HideMulchConfirmationModal(); // Function SaveTheWorldUI.FortCollectionBookPicker.HideMulchConfirmationModal // (Native|Protected|BlueprintCallable) // @ game+0x68bfa10
};

// Class SaveTheWorldUI.FortCollectionBookPrimaryPanel
// Size: 0x5f0 (Inherited: 0x530)
struct UFortCollectionBookPrimaryPanel : UCommonActivatablePanelLegacy {
	struct FMulticastInlineDelegate OnCollectionBookPageSelectedDelegate; // 0x530(0x10)
	struct FMulticastInlineDelegate OnCollectionBookPageClickedDelegate; // 0x540(0x10)
	struct FMulticastInlineDelegate OnCollectionBookSectionClickedDelegate; // 0x550(0x10)
	struct FDataTableRowHandle BackActionRowHandle; // 0x560(0x10)
	struct FDataTableRowHandle SummonInfoPanelActionRowHandle; // 0x570(0x10)
	struct UFortCollectionBookOverviewWidget* OverviewWidget; // 0x580(0x08)
	struct UCommonTileView* SectionTileViewWidget; // 0x588(0x08)
	enum class ECollectionBookPrimaryNavTarget CurrentNavTarget; // 0x590(0x01)
	char pad_591[0x7]; // 0x591(0x07)
	struct UFortCollectionBookSection* LastClickedSection; // 0x598(0x08)
	char pad_5A0[0x50]; // 0x5a0(0x50)

	void OnSummonInfoPanelExecuted(bool& bPassThrough); // Function SaveTheWorldUI.FortCollectionBookPrimaryPanel.OnSummonInfoPanelExecuted // (Native|Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x68c0a2c
	void OnInputMethodChanged(enum class ECommonInputType CurrentInputType); // Function SaveTheWorldUI.FortCollectionBookPrimaryPanel.OnInputMethodChanged // (Final|Native|Protected) // @ game+0x68bff20
	void OnCollectionBookSectionClicked(struct UFortCollectionBookSection* ClickedSection); // Function SaveTheWorldUI.FortCollectionBookPrimaryPanel.OnCollectionBookSectionClicked // (Native|Event|Protected|BlueprintEvent) // @ game+0x68bfe9c
	void OnCollectionBookPageSelected(struct UFortCollectionBookPage* SelectedPage); // Function SaveTheWorldUI.FortCollectionBookPrimaryPanel.OnCollectionBookPageSelected // (Native|Event|Protected|BlueprintEvent) // @ game+0x68bfd0c
	void OnCollectionBookPageClicked(struct UFortCollectionBookPage* ClickedPage); // Function SaveTheWorldUI.FortCollectionBookPrimaryPanel.OnCollectionBookPageClicked // (Native|Event|Protected|BlueprintEvent) // @ game+0x68bfc88
	void OnBackActionExecuted(bool& bPassThrough); // Function SaveTheWorldUI.FortCollectionBookPrimaryPanel.OnBackActionExecuted // (Final|Native|Public|HasOutParms) // @ game+0x68bfa64
};

// Class SaveTheWorldUI.FortCollectionBookProgressionRewardDetailInspectWidget
// Size: 0x300 (Inherited: 0x2e0)
struct UFortCollectionBookProgressionRewardDetailInspectWidget : UCommonUserWidget {
	struct UCommonNumericTextBlock* LevelTextWidget; // 0x2e0(0x08)
	struct UFortRewardInfoWidget* RewardWidget; // 0x2e8(0x08)
	struct UWidget* CheckmarkImage; // 0x2f0(0x08)
	char pad_2F8[0x8]; // 0x2f8(0x08)

	void SetAssociatedLevel(int32_t Level); // Function SaveTheWorldUI.FortCollectionBookProgressionRewardDetailInspectWidget.SetAssociatedLevel // (Final|Native|Public|BlueprintCallable) // @ game+0x68c0c3c
	void OnXPRequiredChanged(int32_t NewXPRequired); // Function SaveTheWorldUI.FortCollectionBookProgressionRewardDetailInspectWidget.OnXPRequiredChanged // (Event|Public|BlueprintEvent) // @ game+0xd67374
	int32_t GetXPRequired(); // Function SaveTheWorldUI.FortCollectionBookProgressionRewardDetailInspectWidget.GetXPRequired // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x29eefbc
};

// Class SaveTheWorldUI.FortCollectionBookProgressionRewardsModalWidget
// Size: 0x5d0 (Inherited: 0x568)
struct UFortCollectionBookProgressionRewardsModalWidget : UFortActivatablePanel {
	struct TSoftClassPtr<UObject> RewardWidgetClass; // 0x568(0x28)
	struct FMargin RewardWidgetPadding; // 0x590(0x10)
	int32_t NumRewardsToShow; // 0x5a0(0x04)
	char pad_5A4[0x4]; // 0x5a4(0x04)
	struct UVerticalBox* RewardBoxWidget; // 0x5a8(0x08)
	struct UVerticalBox* MajorRewardBoxWidget; // 0x5b0(0x08)
	struct UCommonTextBlock* XPTextWidget; // 0x5b8(0x08)
	struct UCommonNumericTextBlock* LevelTextWidget; // 0x5c0(0x08)
	struct UCommonButtonGroupLegacy* ButtonGroup; // 0x5c8(0x08)

	void OnSelectedButtonChanged(struct UCommonButtonLegacy* SelectedButton, int32_t ButtonIndex); // Function SaveTheWorldUI.FortCollectionBookProgressionRewardsModalWidget.OnSelectedButtonChanged // (Final|Native|Protected) // @ game+0x68c04e8
	void OnLevelProgressionSet(int32_t CurrentLevel, float NextLvlPct, int32_t MaxAchievedLevel); // Function SaveTheWorldUI.FortCollectionBookProgressionRewardsModalWidget.OnLevelProgressionSet // (Native|Event|Protected|BlueprintEvent) // @ game+0x68c0040
	void InspectItemBP(struct UFortItem* Item); // Function SaveTheWorldUI.FortCollectionBookProgressionRewardsModalWidget.InspectItemBP // (Event|Protected|BlueprintEvent) // @ game+0xd67374
};

// Class SaveTheWorldUI.FortCollectionBookProgressionRewardsPreviewWidget
// Size: 0x2f0 (Inherited: 0x2e0)
struct UFortCollectionBookProgressionRewardsPreviewWidget : UCommonUserWidget {
	struct UFortCollectionBookProgressionRewardWidget* NextRewardWidget; // 0x2e0(0x08)
	struct UFortCollectionBookProgressionRewardWidget* NextMajorRewardWidget; // 0x2e8(0x08)
};

// Class SaveTheWorldUI.FortCollectionBookProgressionRewardWidget
// Size: 0x308 (Inherited: 0x2f8)
struct UFortCollectionBookProgressionRewardWidget : UFortCollectionBookGenericRewardWidget {
	struct UCommonNumericTextBlock* LevelTextWidget; // 0x2f8(0x08)
	struct UCommonTextBlock* DisplayNameWidget; // 0x300(0x08)

	void SetAssociatedLevel(int32_t Level); // Function SaveTheWorldUI.FortCollectionBookProgressionRewardWidget.SetAssociatedLevel // (Final|Native|Public|BlueprintCallable) // @ game+0x68c0cbc
};

// Class SaveTheWorldUI.FortCollectionBookProgressWidget
// Size: 0x340 (Inherited: 0x2e0)
struct UFortCollectionBookProgressWidget : UCommonUserWidget {
	int32_t CachedXPLevel; // 0x2e0(0x04)
	float CachedXPCompletionPct; // 0x2e4(0x04)
	struct TSoftClassPtr<UObject> RewardDetailsModalWidgetClass; // 0x2e8(0x28)
	struct UFortCollectionBookProgressionRewardsPreviewWidget* ProgressionRewardsPreviewWidget; // 0x310(0x08)
	struct UCommonTextBlock* XPTextWidget; // 0x318(0x08)
	struct UCommonNumericTextBlock* LevelTextWidget; // 0x320(0x08)
	struct UCommonButtonLegacy* DetailsButtonWidget; // 0x328(0x08)
	struct UFortCollectionBookPageDetailsWidget* PageDetailsWidget; // 0x330(0x08)
	struct UFortCollectionBookProgressionRewardsModalWidget* DetailsModalWidget; // 0x338(0x08)

	void OnSlottedItemOperationComplete(struct UFortAccountItem* ItemSlotted, struct FName SlotId); // Function SaveTheWorldUI.FortCollectionBookProgressWidget.OnSlottedItemOperationComplete // (Final|Native|Protected) // @ game+0x68c08b0
	void OnInventoryUpdated(); // Function SaveTheWorldUI.FortCollectionBookProgressWidget.OnInventoryUpdated // (Final|Native|Protected) // @ game+0x68c002c
	void OnCollectionBookPreviewXPChange(float PreviewCompletionPct); // Function SaveTheWorldUI.FortCollectionBookProgressWidget.OnCollectionBookPreviewXPChange // (Native|Event|Protected|BlueprintEvent) // @ game+0x68bfe14
	void OnCollectionBookPageSelected(struct UFortCollectionBookPage* SelectedPage); // Function SaveTheWorldUI.FortCollectionBookProgressWidget.OnCollectionBookPageSelected // (Native|Event|Public|BlueprintEvent) // @ game+0x68bfd90
	void OnCollectionBookLevelProgressionChanged(float NewCompletionPct); // Function SaveTheWorldUI.FortCollectionBookProgressWidget.OnCollectionBookLevelProgressionChanged // (Native|Event|Protected|BlueprintEvent) // @ game+0x68bfc00
	void OnCollectionBookLevelChanged(int32_t NewLevel); // Function SaveTheWorldUI.FortCollectionBookProgressWidget.OnCollectionBookLevelChanged // (Native|Event|Protected|BlueprintEvent) // @ game+0x68bfb7c
	void HandleDetailsModalWidgetDeactivated(struct UCommonActivatablePanelLegacy* DeactivatedPanel); // Function SaveTheWorldUI.FortCollectionBookProgressWidget.HandleDetailsModalWidgetDeactivated // (Final|Native|Private) // @ game+0x68bf910
};

// Class SaveTheWorldUI.FortCollectionBookRecycleSlotResultsWidget
// Size: 0x2f8 (Inherited: 0x2e0)
struct UFortCollectionBookRecycleSlotResultsWidget : UCommonUserWidget {
	struct UPanelWidget* RecycleResultsWidget; // 0x2e0(0x08)
	enum class EFortItemCardSize ItemCardSize; // 0x2e8(0x01)
	char pad_2E9[0x7]; // 0x2e9(0x07)
	struct UFortAccountItem* ItemToRecycle; // 0x2f0(0x08)

	void SetCurrentItemToRecycle(struct UFortAccountItem* InItemToRecycle); // Function SaveTheWorldUI.FortCollectionBookRecycleSlotResultsWidget.SetCurrentItemToRecycle // (Final|Native|Public|BlueprintCallable) // @ game+0x68c0d3c
};

// Class SaveTheWorldUI.FortCollectionBookRewardCardWidget
// Size: 0x368 (Inherited: 0x2e0)
struct UFortCollectionBookRewardCardWidget : UCommonUserWidget {
	struct FMulticastInlineDelegate OnDisplayedItemChangedEvent; // 0x2e0(0x10)
	struct UFortMultiSizeItemCard* ItemCardWidget; // 0x2f0(0x08)
	struct UWidget* MultiItemRewardOverlay; // 0x2f8(0x08)
	struct UWidget* ChoiceRewardOverlay; // 0x300(0x08)
	struct UWidget* CheckmarkImage; // 0x308(0x08)
	float UpdateCardInterval; // 0x310(0x04)
	enum class EFortItemCardSize ItemCardSize; // 0x314(0x01)
	bool bDisplayAsRewardCard; // 0x315(0x01)
	char pad_316[0x2]; // 0x316(0x02)
	struct FFortRewardInfo RepresentedRewards; // 0x318(0x30)
	struct TArray<struct UFortItem*> DummyItems; // 0x348(0x10)
	struct FTimerHandle UpdateCardTimer; // 0x358(0x08)
	char pad_360[0x8]; // 0x360(0x08)

	void SetRewards(struct FFortRewardInfo& Rewards); // Function SaveTheWorldUI.FortCollectionBookRewardCardWidget.SetRewards // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x68c0dbc
	void OnDisplayedItemChangedEvent__DelegateSignature(struct UFortItem* DisplayedItem); // DelegateFunction SaveTheWorldUI.FortCollectionBookRewardCardWidget.OnDisplayedItemChangedEvent__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0xd67374
	bool HasRewards(); // Function SaveTheWorldUI.FortCollectionBookRewardCardWidget.HasRewards // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x67c6180
	void ClearRewards(); // Function SaveTheWorldUI.FortCollectionBookRewardCardWidget.ClearRewards // (Native|Public|BlueprintCallable) // @ game+0x68be964
};

// Class SaveTheWorldUI.FortCollectionBookRewardModalWidget
// Size: 0x580 (Inherited: 0x530)
struct UFortCollectionBookRewardModalWidget : UCommonActivatablePanelLegacy {
	struct UCommonTextBlock* TitleWidget; // 0x530(0x08)
	struct UFortRewardInfoWidget* RewardWidget; // 0x538(0x08)
	struct UFortMaterialProgressBar* ProgressBar; // 0x540(0x08)
	struct UCommonTextBlock* ProgressTextWidget; // 0x548(0x08)
	char pad_550[0x30]; // 0x550(0x30)
};

// Class SaveTheWorldUI.FortCollectionBookSectionCompletionRewardWidget
// Size: 0x350 (Inherited: 0x2f8)
struct UFortCollectionBookSectionCompletionRewardWidget : UFortCollectionBookGenericRewardWidget {
	struct UCommonButtonLegacy* RewardDetailsButton; // 0x2f8(0x08)
	struct TSoftClassPtr<UObject> RewardDetailsModalWidgetClass; // 0x300(0x28)
	struct FText ModalTitle; // 0x328(0x18)
	struct UFortCollectionBookRewardModalWidget* RewardDetailsModalWidget; // 0x340(0x08)
	struct UFortCollectionBookSection* Section; // 0x348(0x08)

	void HandleRewardDetailsModalWidgetDeactivated(struct UCommonActivatablePanelLegacy* DeactivatedPanel); // Function SaveTheWorldUI.FortCollectionBookSectionCompletionRewardWidget.HandleRewardDetailsModalWidgetDeactivated // (Final|Native|Private) // @ game+0x68bf990
};

// Class SaveTheWorldUI.FortCollectionBookSectionPanel
// Size: 0x700 (Inherited: 0x530)
struct UFortCollectionBookSectionPanel : UCommonActivatablePanelLegacy {
	struct FMulticastInlineDelegate OnSectionCloseRequest; // 0x530(0x10)
	struct FMulticastInlineDelegate OnPreviewXPChangeEvent; // 0x540(0x10)
	struct UCommonTextBlock* SectionNameTextWidget; // 0x550(0x08)
	struct UFortCollectionBookSlotView* SlotViewWidget; // 0x558(0x08)
	struct UFortCollectionBookPicker* SlotItemPicker; // 0x560(0x08)
	struct UWidget* ContextOverlayWidget; // 0x568(0x08)
	struct UTextBlock* ContextTextWidget; // 0x570(0x08)
	struct UFortCollectionBookSectionCompletionRewardWidget* SectionRewardWidget; // 0x578(0x08)
	struct UWidget* ItemAcquisitionSourceContainerWidget; // 0x580(0x08)
	struct UCommonTextBlock* ItemAcquisitionSourceDescWidget; // 0x588(0x08)
	struct UCommonTextBlock* ItemAcquisitionSourceDesc2Widget; // 0x590(0x08)
	struct UWidget* ResearchRecruitUnslotContainerWidget; // 0x598(0x08)
	struct UCommonTextBlock* PersonRecruitUnavailableMessageWidget; // 0x5a0(0x08)
	struct UCommonTextBlock* ItemResearchUnavailableMessageWidget; // 0x5a8(0x08)
	struct UCommonTextBlock* UnslotUnavailableMessageWidget; // 0x5b0(0x08)
	struct FDataTableRowHandle BackActionRowHandle; // 0x5b8(0x10)
	struct FDataTableRowHandle CloseActionRowHandle; // 0x5c8(0x10)
	struct FDataTableRowHandle SlotItemActionRowHandle; // 0x5d8(0x10)
	struct FDataTableRowHandle InspectItemActionRowHandle; // 0x5e8(0x10)
	struct FDataTableRowHandle InspectCollectionBookItemActionRowHandle; // 0x5f8(0x10)
	struct FDataTableRowHandle InspectPreviewItemActionRowHandle; // 0x608(0x10)
	struct FDataTableRowHandle OpenPickerActionRowHandle; // 0x618(0x10)
	struct FDataTableRowHandle LogAllowedItemsActionRowHandle; // 0x628(0x10)
	struct FDataTableRowHandle ResearchItemActionRowHandle; // 0x638(0x10)
	struct FDataTableRowHandle RecruitActionRowHandle; // 0x648(0x10)
	struct FDataTableRowHandle UnslotItemActionRowHandle; // 0x658(0x10)
	enum class ECollectionBookSectionNavTarget CurrentNavTarget; // 0x668(0x01)
	char pad_669[0x7]; // 0x669(0x07)
	struct UFortCollectionBookSection* AssociatedSection; // 0x670(0x08)
	bool bHasSummonedPanel; // 0x678(0x01)
	char pad_679[0x3]; // 0x679(0x03)
	struct FFortDialogExternalLatentActionHandle SlotConfirmationDialogLatentHandle; // 0x67c(0x04)
	struct FMulticastInlineDelegate OnShowItemDetailEvent; // 0x680(0x10)
	struct FMulticastInlineDelegate OnSlotItemConfirmEvent; // 0x690(0x10)
	struct FMulticastInlineDelegate OnResearchItemConfirmEvent; // 0x6a0(0x10)
	struct FMulticastInlineDelegate OnUnslotItemConfirmEvent; // 0x6b0(0x10)
	struct FMulticastInlineDelegate OnInspectItemEvent; // 0x6c0(0x10)
	char pad_6D0[0x28]; // 0x6d0(0x28)
	struct UFortCollectionBookSlotConfirmationModal* SlotConfirmationModalClass; // 0x6f8(0x08)

	void OnUnslotItemOperationComplete(struct UFortAccountItem* UnslottedItem, struct UFortAccountItem* OldSlottedItem, struct FName SlotId); // Function SaveTheWorldUI.FortCollectionBookSectionPanel.OnUnslotItemOperationComplete // (Final|Native|Private) // @ game+0x68c0b44
	void OnUnslotItemComplete(struct UFortItem* UnslottedItem, struct FName SlotId); // Function SaveTheWorldUI.FortCollectionBookSectionPanel.OnUnslotItemComplete // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnUnslotItemActionExecuted(bool& bPassThrough); // Function SaveTheWorldUI.FortCollectionBookSectionPanel.OnUnslotItemActionExecuted // (Final|Native|Protected|HasOutParms) // @ game+0x68c0abc
	void OnSlottedItemOperationComplete(struct UFortAccountItem* SlottedItem, struct FName SlotId); // Function SaveTheWorldUI.FortCollectionBookSectionPanel.OnSlottedItemOperationComplete // (Final|Native|Private) // @ game+0x68c0968
	void OnSlotItemActionExecuted(bool& bPassThrough); // Function SaveTheWorldUI.FortCollectionBookSectionPanel.OnSlotItemActionExecuted // (Final|Native|Protected|HasOutParms) // @ game+0x68c0760
	void OnSlotButtonSelected(struct UFortCollectionBookSlotButton* SlotButton); // Function SaveTheWorldUI.FortCollectionBookSectionPanel.OnSlotButtonSelected // (Final|Native|Protected) // @ game+0x68c06e0
	void OnSlotButtonHovered(int32_t ButtonIx); // Function SaveTheWorldUI.FortCollectionBookSectionPanel.OnSlotButtonHovered // (Final|Native|Protected) // @ game+0x68c0660
	void OnSlotButtonContextAction(enum class EFortCollectionBookPopupButtonType ContextAction); // Function SaveTheWorldUI.FortCollectionBookSectionPanel.OnSlotButtonContextAction // (Final|Native|Protected) // @ game+0x68c05e0
	void OnSectionChanged(struct UFortCollectionBookSection* Section); // Function SaveTheWorldUI.FortCollectionBookSectionPanel.OnSectionChanged // (Native|Event|Protected|BlueprintEvent) // @ game+0x68c0464
	void OnResearchItemOperationComplete(struct UFortAccountItem* NewItem, struct FString TemplateId); // Function SaveTheWorldUI.FortCollectionBookSectionPanel.OnResearchItemOperationComplete // (Final|Native|Private) // @ game+0x68c02bc
	void OnResearchItemAction__DelegateSignature(struct UFortItem* SelectedItem, struct FFortCollectionBookSlotData SlotData); // DelegateFunction SaveTheWorldUI.FortCollectionBookSectionPanel.OnResearchItemAction__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0xd67374
	void OnPurchaseItemActionExecuted(bool& bPassThrough); // Function SaveTheWorldUI.FortCollectionBookSectionPanel.OnPurchaseItemActionExecuted // (Final|Native|Protected|HasOutParms) // @ game+0x68c0234
	void OnOpenPickerActionExecuted(bool& bPassThrough); // Function SaveTheWorldUI.FortCollectionBookSectionPanel.OnOpenPickerActionExecuted // (Final|Native|Protected|HasOutParms) // @ game+0x68c01b4
	void OnLogAllowedItemsActionExecuted(bool& bPassThrough); // Function SaveTheWorldUI.FortCollectionBookSectionPanel.OnLogAllowedItemsActionExecuted // (Final|Native|Protected|HasOutParms) // @ game+0x68c0140
	void OnItemInspectAction__DelegateSignature(struct UFortItem* SelectedItem, bool EnableItemActions, bool IsPlaceholderItem); // DelegateFunction SaveTheWorldUI.FortCollectionBookSectionPanel.OnItemInspectAction__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0xd67374
	void OnItemAction__DelegateSignature(struct UFortItem* SelectedItem); // DelegateFunction SaveTheWorldUI.FortCollectionBookSectionPanel.OnItemAction__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0xd67374
	void OnInspectActionExecuted(bool& bPassThrough); // Function SaveTheWorldUI.FortCollectionBookSectionPanel.OnInspectActionExecuted // (Final|Native|Protected|HasOutParms) // @ game+0x68bffa4
	void OnBackActionExecuted(bool& bPassThrough); // Function SaveTheWorldUI.FortCollectionBookSectionPanel.OnBackActionExecuted // (Final|Native|Protected|HasOutParms) // @ game+0x68bfaf0
};

// Class SaveTheWorldUI.FortCollectionBookSectionTileWidget
// Size: 0x1500 (Inherited: 0x1480)
struct UFortCollectionBookSectionTileWidget : UCommonButtonLegacy {
	char pad_1480[0x8]; // 0x1480(0x08)
	struct TSoftClassPtr<UObject> SlotWidgetClass; // 0x1488(0x28)
	struct FMargin SlotWidgetPadding; // 0x14b0(0x10)
	enum class EHorizontalAlignment SlotWidgetHorizontalAlignment; // 0x14c0(0x01)
	enum class EVerticalAlignment SlotWidgetVerticalAlignment; // 0x14c1(0x01)
	char pad_14C2[0x2]; // 0x14c2(0x02)
	int32_t MaxNumSlotsSupported; // 0x14c4(0x04)
	struct UHorizontalBox* SlotBoxWidget; // 0x14c8(0x08)
	struct UCommonTextBlock* SectionNameWidget; // 0x14d0(0x08)
	struct UFortCollectionBookGenericRewardWidget* SectionRewardWidget; // 0x14d8(0x08)
	struct UFortCollectionBookSection* AssociatedSection; // 0x14e0(0x08)
	struct TArray<struct UFortCollectionBookSlotWidget*> SlotWidgets; // 0x14e8(0x10)
	char pad_14F8[0x8]; // 0x14f8(0x08)

	void OnSectionSlotUpdate(int32_t NumFilledSlots, int32_t NumSlots, enum class EFortCollectionBookState SectionState); // Function SaveTheWorldUI.FortCollectionBookSectionTileWidget.OnSectionSlotUpdate // (Native|Event|Protected|BlueprintEvent) // @ game+0x68c1f58
	void OnItemUnslotted(struct UFortAccountItem* ItemUnslotted, struct UFortAccountItem* OldSlottedItem, struct FName SlotId); // Function SaveTheWorldUI.FortCollectionBookSectionTileWidget.OnItemUnslotted // (Native|Protected) // @ game+0x68c1ddc
	void OnItemSlotted(struct UFortAccountItem* ItemSlotted, struct FName SlotId); // Function SaveTheWorldUI.FortCollectionBookSectionTileWidget.OnItemSlotted // (Native|Protected) // @ game+0x68c1d14
};

// Class SaveTheWorldUI.FortCollectionBookSlotButton
// Size: 0x14c0 (Inherited: 0x1480)
struct UFortCollectionBookSlotButton : UCommonButtonLegacy {
	struct UFortCollectionBookSlotWidget* CollectionBookSlotWidget; // 0x1480(0x08)
	struct UMenuAnchor* PopupMenuAnchor; // 0x1488(0x08)
	char pad_1490[0x30]; // 0x1490(0x30)

	void PopupMenuClosedWithAction(enum class EFortCollectionBookPopupButtonType Selection); // Function SaveTheWorldUI.FortCollectionBookSlotButton.PopupMenuClosedWithAction // (Final|Native|Public|BlueprintCallable) // @ game+0x68c22c0
	void OnSlottedItemUpdated(); // Function SaveTheWorldUI.FortCollectionBookSlotButton.OnSlottedItemUpdated // (Final|Native|Private) // @ game+0x68c22ac
	struct UUserWidget* GetPopupMenu(); // Function SaveTheWorldUI.FortCollectionBookSlotButton.GetPopupMenu // (Final|Native|Private) // @ game+0x68c158c
};

// Class SaveTheWorldUI.FortCollectionBookSlotConfirmationModal
// Size: 0x5c0 (Inherited: 0x568)
struct UFortCollectionBookSlotConfirmationModal : UFortActivatablePanel {
	char pad_568[0x8]; // 0x568(0x08)
	struct UFortAccountItem* CurrentlySlottedItem; // 0x570(0x08)
	struct UFortAccountItem* NewItemToSlot; // 0x578(0x08)
	struct UCommonTextBlock* Text_SlottingDescription; // 0x580(0x08)
	struct UFortMultiSizeItemCard* ItemCard_NewlySlottedItem; // 0x588(0x08)
	struct UFortCollectionBookRecycleSlotResultsWidget* RecycleSlotResultsWidget; // 0x590(0x08)
	struct UCommonButtonLegacy* Button_SlotItem; // 0x598(0x08)
	struct UCommonButtonLegacy* Button_Back; // 0x5a0(0x08)
	char pad_5A8[0x18]; // 0x5a8(0x18)

	void OnSlotItemRequestedComplete(); // Function SaveTheWorldUI.FortCollectionBookSlotConfirmationModal.OnSlotItemRequestedComplete // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnSlotItemRequested(); // Function SaveTheWorldUI.FortCollectionBookSlotConfirmationModal.OnSlotItemRequested // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void HandleSlotItemComplete(struct UFortAccountItem* SlottedItem, struct FName SlotId); // Function SaveTheWorldUI.FortCollectionBookSlotConfirmationModal.HandleSlotItemComplete // (Final|Native|Private) // @ game+0x68c1984
};

// Class SaveTheWorldUI.FortCollectionBookSlotDetailsWidget
// Size: 0x2e0 (Inherited: 0x2e0)
struct UFortCollectionBookSlotDetailsWidget : UCommonUserWidget {
};

// Class SaveTheWorldUI.FortCollectionBookSlotView
// Size: 0x388 (Inherited: 0x2e0)
struct UFortCollectionBookSlotView : UCommonUserWidget {
	struct TSoftClassPtr<UObject> CollectionBookButtonClass; // 0x2e0(0x28)
	struct UHorizontalBox* CollectionBookButtonBox; // 0x308(0x08)
	struct UCommonButtonGroupLegacy* CollectionBookSlotButtonGroup; // 0x310(0x08)
	struct TArray<struct UFortCollectionBookSlotButton*> CollectionBookSlotButtons; // 0x318(0x10)
	struct UFortCollectionBookSection* AssociatedSection; // 0x328(0x08)
	char pad_330[0x48]; // 0x330(0x48)
	int32_t PreviousSelectedButtonIdx; // 0x378(0x04)
	int32_t CurrentSelectedButtonIdx; // 0x37c(0x04)
	char pad_380[0x8]; // 0x380(0x08)

	void OnSlotButtonHovered(struct UCommonButtonLegacy* HoveredButton, int32_t ButtonIdx); // Function SaveTheWorldUI.FortCollectionBookSlotView.OnSlotButtonHovered // (Native|Protected) // @ game+0x68c21e4
	void OnSlotButtonClicked(struct UCommonButtonLegacy* ClickedButton, int32_t ButtonIdx); // Function SaveTheWorldUI.FortCollectionBookSlotView.OnSlotButtonClicked // (Native|Protected) // @ game+0x68c211c
	void OnSelectedSlotButtonChanged(struct UCommonButtonLegacy* SelectedButton, int32_t ButtonIdx); // Function SaveTheWorldUI.FortCollectionBookSlotView.OnSelectedSlotButtonChanged // (Native|Protected) // @ game+0x68c2054
};

// Class SaveTheWorldUI.FortCollectionBookSlotWidget
// Size: 0x408 (Inherited: 0x2e0)
struct UFortCollectionBookSlotWidget : UCommonUserWidget {
	char pad_2E0[0x10]; // 0x2e0(0x10)
	enum class EFortItemCardSize ItemCardSize; // 0x2f0(0x01)
	bool bIsRewardCard; // 0x2f1(0x01)
	char pad_2F2[0x6]; // 0x2f2(0x06)
	struct UFortMultiSizeItemCard* ItemCardWidget; // 0x2f8(0x08)
	struct UWidget* UnslottedOverlayWidget; // 0x300(0x08)
	struct UWidget* ReadyToSlotOverlayWidget; // 0x308(0x08)
	struct UWidget* UnslottedButReadyOverlayWidget; // 0x310(0x08)
	struct FName SlotRowName; // 0x318(0x04)
	char pad_31C[0x4]; // 0x31c(0x04)
	struct FText ItemAvailableToSlotText; // 0x320(0x18)
	struct FText NoItemsAvailableToSlotText; // 0x338(0x18)
	struct FText HigherQualityItemsAvailableToSlotAndUpgradeAvailableText; // 0x350(0x18)
	struct FText HigherQualityItemsAvailableToSlotAndEvolveAvailableText; // 0x368(0x18)
	struct FText HigherQualityItemsAvailableToSlotText; // 0x380(0x18)
	struct FText ItemInSlotFullyUpgradedText; // 0x398(0x18)
	struct FText ItemInSlotCanBeUpgradedText; // 0x3b0(0x18)
	struct FText ItemInSlotCanBeEvolvedText; // 0x3c8(0x18)
	struct UFortItem* SlottedItemRepresentation; // 0x3e0(0x08)
	char pad_3E8[0x20]; // 0x3e8(0x20)

	void OnItemDestroyed(); // Function SaveTheWorldUI.FortCollectionBookSlotWidget.OnItemDestroyed // (Final|Native|Private) // @ game+0x68c1d00
	void OnItemCardUpdated(); // Function SaveTheWorldUI.FortCollectionBookSlotWidget.OnItemCardUpdated // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	bool IsItemSlotted(); // Function SaveTheWorldUI.FortCollectionBookSlotWidget.IsItemSlotted // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x68c1c48
	bool HasItemsToSlot(); // Function SaveTheWorldUI.FortCollectionBookSlotWidget.HasItemsToSlot // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x68c1c0c
	void HandleUnslotItemComplete(struct UFortAccountItem* UnslottedItem, struct UFortAccountItem* OldItem, struct FName SlotId); // Function SaveTheWorldUI.FortCollectionBookSlotWidget.HandleUnslotItemComplete // (Final|Native|Protected) // @ game+0x68c1b0c
	void HandleSlottedItemOperationComplete(struct UFortAccountItem* NewItem, struct FName TemplateId); // Function SaveTheWorldUI.FortCollectionBookSlotWidget.HandleSlottedItemOperationComplete // (Final|Native|Protected) // @ game+0x68c1a48
	void HandleResearchItemComplete(struct UFortAccountItem* ResearchedItem, struct FString SlotId); // Function SaveTheWorldUI.FortCollectionBookSlotWidget.HandleResearchItemComplete // (Final|Native|Protected) // @ game+0x68c17dc
	struct UFortItem* GetSlottedItemRepresentation(); // Function SaveTheWorldUI.FortCollectionBookSlotWidget.GetSlottedItemRepresentation // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x68c15dc
	struct FName GetSlotRowName(); // Function SaveTheWorldUI.FortCollectionBookSlotWidget.GetSlotRowName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2348f88
	int32_t GetNumItemsToSlot(); // Function SaveTheWorldUI.FortCollectionBookSlotWidget.GetNumItemsToSlot // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x68c1568
	void FortCollectionBookSlottedItemUpdatedDelegate__DelegateSignature(); // DelegateFunction SaveTheWorldUI.FortCollectionBookSlotWidget.FortCollectionBookSlottedItemUpdatedDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0xd67374
};

// Class SaveTheWorldUI.FortCollectionBookWidget
// Size: 0x598 (Inherited: 0x568)
struct UFortCollectionBookWidget : UFortActivatablePanel {
	struct UFortCollectionBookProgressWidget* ProgressWidget; // 0x568(0x08)
	struct UCommonWidgetSwitcherLegacy* MainWidgetSwitcher; // 0x570(0x08)
	struct UFortCollectionBookPrimaryPanel* PrimaryPanelWidget; // 0x578(0x08)
	struct UFortCollectionBookSectionPanel* SectionPanelWidget; // 0x580(0x08)
	int32_t PrimaryPanelIdx; // 0x588(0x04)
	int32_t SectionPanelIdx; // 0x58c(0x04)
	char pad_590[0x8]; // 0x590(0x08)

	void RequestToClose(); // Function SaveTheWorldUI.FortCollectionBookWidget.RequestToClose // (Final|Native|Protected|BlueprintCallable) // @ game+0x68c2344
	void OnPreviewXPChangeRequest(int32_t XPChange); // Function SaveTheWorldUI.FortCollectionBookWidget.OnPreviewXPChangeRequest // (Final|Native|Protected) // @ game+0x68c1ed8
	void OnCollectionBookSectionCloseRequest(); // Function SaveTheWorldUI.FortCollectionBookWidget.OnCollectionBookSectionCloseRequest // (Final|Native|Protected) // @ game+0x68c1cec
	void OnCollectionBookSectionClicked(struct UFortCollectionBookSection* ClickedSection); // Function SaveTheWorldUI.FortCollectionBookWidget.OnCollectionBookSectionClicked // (Native|Event|Public|BlueprintEvent) // @ game+0x68c0464
	void OnCollectionBookPageSelected(struct UFortCollectionBookPage* SelectedPage); // Function SaveTheWorldUI.FortCollectionBookWidget.OnCollectionBookPageSelected // (Native|Event|Public|BlueprintEvent) // @ game+0x68bfc88
	void OnCollectionBookPageClicked(struct UFortCollectionBookPage* ClickedPage); // Function SaveTheWorldUI.FortCollectionBookWidget.OnCollectionBookPageClicked // (Native|Event|Public|BlueprintEvent) // @ game+0x68bfe9c
};

// Class SaveTheWorldUI.FortDailyRewards
// Size: 0x570 (Inherited: 0x568)
struct UFortDailyRewards : UFortActivatablePanel {
	char pad_568[0x8]; // 0x568(0x08)

	bool TryGetDailyRewardsData(struct FFortDailyRewardsData& OutDailyRewardsData, int32_t ItemCardsPerSchedule, int32_t MinEpicRewards); // Function SaveTheWorldUI.FortDailyRewards.TryGetDailyRewardsData // (Final|Native|Private|HasOutParms|BlueprintCallable) // @ game+0x68c244c
	bool TryClaimDailyRewards(); // Function SaveTheWorldUI.FortDailyRewards.TryClaimDailyRewards // (Final|Native|Private|BlueprintCallable) // @ game+0x68c2428
	void SetupDailyRewards(); // Function SaveTheWorldUI.FortDailyRewards.SetupDailyRewards // (Event|Public|BlueprintEvent) // @ game+0xd67374
};

// Class SaveTheWorldUI.FortDailyRewardsItem
// Size: 0x2f0 (Inherited: 0x2e0)
struct UFortDailyRewardsItem : UCommonUserWidget {
	struct FFortDailyRewardsItemData ItemData; // 0x2e0(0x10)
};

// Class SaveTheWorldUI.FortDailyRewardsSchedule
// Size: 0x378 (Inherited: 0x2e0)
struct UFortDailyRewardsSchedule : UCommonUserWidget {
	struct FFortDailyRewardsScheduleData ScheduleData; // 0x2e0(0x98)
};

// Class SaveTheWorldUI.FortSquadSelectorButton
// Size: 0x14a0 (Inherited: 0x1480)
struct UFortSquadSelectorButton : UCommonButtonLegacy {
	char pad_1480[0x20]; // 0x1480(0x20)

	bool TryGetStaticSquadDataBP(struct FHomebaseSquad& OutSquadData); // Function SaveTheWorldUI.FortSquadSelectorButton.TryGetStaticSquadDataBP // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x68cec8c
	void SetIdOfSquadToManageBP(struct FName& SquadId); // Function SaveTheWorldUI.FortSquadSelectorButton.SetIdOfSquadToManageBP // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x68ce864
	void HandleSquadChangedBP(); // Function SaveTheWorldUI.FortSquadSelectorButton.HandleSquadChangedBP // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void HandleDifferentSquadSetBP(); // Function SaveTheWorldUI.FortSquadSelectorButton.HandleDifferentSquadSetBP // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	struct FName GetIdOfSquadToManageBP(); // Function SaveTheWorldUI.FortSquadSelectorButton.GetIdOfSquadToManageBP // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x68cd954
};

// Class SaveTheWorldUI.FortDefenderSquadSelectorButton
// Size: 0x14a0 (Inherited: 0x14a0)
struct UFortDefenderSquadSelectorButton : UFortSquadSelectorButton {

	bool TryGetTheaterUniqueId(struct FString& OutTheaterUniqueId, bool& OutIsUnlocked); // Function SaveTheWorldUI.FortDefenderSquadSelectorButton.TryGetTheaterUniqueId // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x68c260c
	bool TryGetPowerLevel(int32_t& OutPowerLevel); // Function SaveTheWorldUI.FortDefenderSquadSelectorButton.TryGetPowerLevel // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x68c2574
};

// Class SaveTheWorldUI.FortDirectAcquisitionWidgetBase
// Size: 0x648 (Inherited: 0x5f0)
struct UFortDirectAcquisitionWidgetBase : UFortMtxStoreRootBase {
	char pad_5F0[0x8]; // 0x5f0(0x08)
	bool bShowIneligible; // 0x5f8(0x01)
	char pad_5F9[0x7]; // 0x5f9(0x07)
	struct UUserWidget* FirstOfferGenerated; // 0x600(0x08)
	char pad_608[0x10]; // 0x608(0x10)
	struct UHorizontalBox* HorizontalBox_LargeTile; // 0x618(0x08)
	struct UGridPanel* GridPanel_SmallTile; // 0x620(0x08)
	struct UHorizontalBox* HorizontalBox_ReorderedItems; // 0x628(0x08)
	struct UVerticalBox* VerticalBox_FeatureItems; // 0x630(0x08)
	struct UVerticalBox* VerticalBox_DailyItems; // 0x638(0x08)
	struct UScaleBox* ScaleBox_Main; // 0x640(0x08)

	void OnDisplayToast(bool bDisplayToast); // Function SaveTheWorldUI.FortDirectAcquisitionWidgetBase.OnDisplayToast // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void IsTabsLayout(bool bShouldDisplayTabs); // Function SaveTheWorldUI.FortDirectAcquisitionWidgetBase.IsTabsLayout // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void HandleAffiliateButtonClicked(); // Function SaveTheWorldUI.FortDirectAcquisitionWidgetBase.HandleAffiliateButtonClicked // (Final|Native|Public|BlueprintCallable) // @ game+0x68c1694
	struct FDateTime GetWeeklyStoreEndDate(); // Function SaveTheWorldUI.FortDirectAcquisitionWidgetBase.GetWeeklyStoreEndDate // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x68c1668
	struct TArray<struct UFortAccountItemDefinition*> GetStoreCurrencies(); // Function SaveTheWorldUI.FortDirectAcquisitionWidgetBase.GetStoreCurrencies // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x68c15f4
	struct FDateTime GetSeasonStoreEndDate(); // Function SaveTheWorldUI.FortDirectAcquisitionWidgetBase.GetSeasonStoreEndDate // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x68c15b0
	struct FDateTime GetDailyStoreEndDate(); // Function SaveTheWorldUI.FortDirectAcquisitionWidgetBase.GetDailyStoreEndDate // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x68c153c
};

// Class SaveTheWorldUI.FortExpeditionBuildSquadWidget
// Size: 0x590 (Inherited: 0x530)
struct UFortExpeditionBuildSquadWidget : UCommonActivatablePanelLegacy {
	struct TWeakObjectPtr<struct UFortExpeditionItem> Item; // 0x530(0x08)
	struct FName CurrentSquadId; // 0x538(0x04)
	char pad_53C[0x4]; // 0x53c(0x04)
	struct UFortSquadSlotsView* ExpeditionSquadSlotsView; // 0x540(0x08)
	struct UFortSquadSlotDetailsPanel* ExpeditionSquadSlotDetails; // 0x548(0x08)
	struct UFortSquadSlotItemPicker* ExpeditionSquadSlotPicker; // 0x550(0x08)
	struct UFortItemViewContext_ExpeditionSquadSlotsView* ItemViewContext_ExpeditionSlotsView; // 0x558(0x08)
	struct UFortItemViewContext_ExpeditionSquadSlotItemPicker* ItemViewContext_ExpeditionSlotItemPicker; // 0x560(0x08)
	char pad_568[0x28]; // 0x568(0x28)

	void SetData(struct UFortExpeditionItem* InItem); // Function SaveTheWorldUI.FortExpeditionBuildSquadWidget.SetData // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x68bfe9c
	void SetCurrentSquadId(struct FName SquadId); // Function SaveTheWorldUI.FortExpeditionBuildSquadWidget.SetCurrentSquadId // (Final|Native|Public|BlueprintCallable) // @ game+0x68c2394
	void OnRequestClosePicker(); // Function SaveTheWorldUI.FortExpeditionBuildSquadWidget.OnRequestClosePicker // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnRefreshBuildSquadWidget(); // Function SaveTheWorldUI.FortExpeditionBuildSquadWidget.OnRefreshBuildSquadWidget // (Native|Event|Protected|BlueprintEvent) // @ game+0x63cb730
	bool IsSquadSlotLocked(int32_t SlotIndex); // Function SaveTheWorldUI.FortExpeditionBuildSquadWidget.IsSquadSlotLocked // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x68c1c60
	bool IsExpeditionValidToStart(); // Function SaveTheWorldUI.FortExpeditionBuildSquadWidget.IsExpeditionValidToStart // (Final|Native|Public|BlueprintCallable) // @ game+0x68c1c24
	void HandleRequestStartExpedition(bool& bPassThrough); // Function SaveTheWorldUI.FortExpeditionBuildSquadWidget.HandleRequestStartExpedition // (Final|Native|Protected|HasOutParms|BlueprintCallable) // @ game+0x68c1760
	void HandleDifferentSquadSlotSelected(int32_t SquadSlotIndex); // Function SaveTheWorldUI.FortExpeditionBuildSquadWidget.HandleDifferentSquadSlotSelected // (Final|Native|Private) // @ game+0x68c16dc
	void ClearTemporaryExpeditionSquadState(bool bPreviewOnly); // Function SaveTheWorldUI.FortExpeditionBuildSquadWidget.ClearTemporaryExpeditionSquadState // (Final|Native|Public|BlueprintCallable) // @ game+0x68c14bc
};

// Class SaveTheWorldUI.FortExpeditionDetailsWidget
// Size: 0x320 (Inherited: 0x2e0)
struct UFortExpeditionDetailsWidget : UCommonUserWidget {
	struct TWeakObjectPtr<struct UFortExpeditionItem> Item; // 0x2e0(0x08)
	struct UFortSquadSlotsView* ExpeditionSquadSlotsView; // 0x2e8(0x08)
	struct FName CurrentSquadId; // 0x2f0(0x04)
	char pad_2F4[0x4]; // 0x2f4(0x04)
	struct UFortItemViewContext_ExpeditionSquadSlotsView* ItemViewContext_ExpeditionSlotsView; // 0x2f8(0x08)
	char pad_300[0x20]; // 0x300(0x20)

	void SetData(struct UFortExpeditionItem* InItem); // Function SaveTheWorldUI.FortExpeditionDetailsWidget.SetData // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x67ea97c
	void SetCurrentSquadId(struct FName SquadId); // Function SaveTheWorldUI.FortExpeditionDetailsWidget.SetCurrentSquadId // (Final|Native|Public|BlueprintCallable) // @ game+0x68c43bc
	void RequestAbandonExpedition(); // Function SaveTheWorldUI.FortExpeditionDetailsWidget.RequestAbandonExpedition // (Final|Native|Public|BlueprintCallable) // @ game+0x68c43a8
	void HandleAbandonExpeditionCompleted(struct UFortExpeditionItem* Expedition, bool bSuccess); // Function SaveTheWorldUI.FortExpeditionDetailsWidget.HandleAbandonExpeditionCompleted // (Final|Native|Private) // @ game+0x68c3db0
};

// Class SaveTheWorldUI.FortExpeditionExpiresWidget
// Size: 0x2f0 (Inherited: 0x2e0)
struct UFortExpeditionExpiresWidget : UCommonUserWidget {
	struct TWeakObjectPtr<struct UFortExpeditionItem> Item; // 0x2e0(0x08)
	char pad_2E8[0x8]; // 0x2e8(0x08)

	void SetData(struct UFortExpeditionItem* InItem); // Function SaveTheWorldUI.FortExpeditionExpiresWidget.SetData // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x68be97c
	void OnExpeditionExpirationUpdated(); // Function SaveTheWorldUI.FortExpeditionExpiresWidget.OnExpeditionExpirationUpdated // (Native|Event|Protected|BlueprintEvent) // @ game+0x68bc17c
};

// Class SaveTheWorldUI.FortExpeditionListItemWidget
// Size: 0x14a0 (Inherited: 0x1480)
struct UFortExpeditionListItemWidget : UCommonButtonLegacy {
	char pad_1480[0x8]; // 0x1480(0x08)
	struct TWeakObjectPtr<struct UFortExpeditionItem> Item; // 0x1488(0x08)
	char pad_1490[0x10]; // 0x1490(0x10)

	void OnItemChanged(); // Function SaveTheWorldUI.FortExpeditionListItemWidget.OnItemChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
};

// Class SaveTheWorldUI.FortExpeditionListViewWidget
// Size: 0x310 (Inherited: 0x2e0)
struct UFortExpeditionListViewWidget : UCommonUserWidget {
	struct FMulticastInlineDelegate OnExpeditionSelected; // 0x2e0(0x10)
	struct FMulticastInlineDelegate OnExpeditionListViewRefreshed; // 0x2f0(0x10)
	struct UCommonListView* ExpeditionListView; // 0x300(0x08)
	struct FName CurrentTabNameId; // 0x308(0x04)
	enum class EFortExpeditionListSort SortType; // 0x30c(0x01)
	char pad_30D[0x3]; // 0x30d(0x03)

	void SetExpeditionListSortType(enum class EFortExpeditionListSort InSortType); // Function SaveTheWorldUI.FortExpeditionListViewWidget.SetExpeditionListSortType // (Final|Native|Public|BlueprintCallable) // @ game+0x68c4590
	struct FText GetExpeditionListSortName(); // Function SaveTheWorldUI.FortExpeditionListViewWidget.GetExpeditionListSortName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x68c3198
};

// Class SaveTheWorldUI.FortExpeditionMasterWidget
// Size: 0x550 (Inherited: 0x530)
struct UFortExpeditionMasterWidget : UCommonActivatablePanelLegacy {
	char pad_530[0x20]; // 0x530(0x20)
};

// Class SaveTheWorldUI.FortExpeditionOverviewWidget
// Size: 0x308 (Inherited: 0x2e0)
struct UFortExpeditionOverviewWidget : UCommonUserWidget {
	struct UCommonButtonBase* TabButtonType; // 0x2e0(0x08)
	struct TArray<struct FExpeditionTabInfo> TabListRegistrationInfo; // 0x2e8(0x10)
	struct UFortTabListWidgetBase* ExpeditionTabList; // 0x2f8(0x08)
	struct UFortExpeditionListViewWidget* ExpeditionListView; // 0x300(0x08)

	void UpdateExpeditionTabs(); // Function SaveTheWorldUI.FortExpeditionOverviewWidget.UpdateExpeditionTabs // (Final|Native|Protected|BlueprintCallable) // @ game+0x68c48a8
	void OnExpeditionTabSelected(struct FName& TabNameID); // Function SaveTheWorldUI.FortExpeditionOverviewWidget.OnExpeditionTabSelected // (Native|Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x68c41d4
	void OnExpeditionOverviewRefresh(); // Function SaveTheWorldUI.FortExpeditionOverviewWidget.OnExpeditionOverviewRefresh // (Native|Event|Protected|BlueprintEvent) // @ game+0x68be964
	void HandleExpeditionTabSelected(struct FName TabNameID); // Function SaveTheWorldUI.FortExpeditionOverviewWidget.HandleExpeditionTabSelected // (Final|Native|Private) // @ game+0x68c4084
	void HandleExpeditionTabButtonCreated(struct FName TabNameID, struct UCommonButtonBase* TabButton); // Function SaveTheWorldUI.FortExpeditionOverviewWidget.HandleExpeditionTabButtonCreated // (Final|Native|Private) // @ game+0x68c3fe0
};

// Class SaveTheWorldUI.FortExpeditionPickVehicleWidget
// Size: 0x538 (Inherited: 0x530)
struct UFortExpeditionPickVehicleWidget : UCommonActivatablePanelLegacy {
	struct TWeakObjectPtr<struct UFortExpeditionItem> Item; // 0x530(0x08)

	void SetData(struct UFortExpeditionItem* InItem); // Function SaveTheWorldUI.FortExpeditionPickVehicleWidget.SetData // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x68c0464
};

// Class SaveTheWorldUI.FortExpeditionReturnsWidget
// Size: 0x2f0 (Inherited: 0x2e0)
struct UFortExpeditionReturnsWidget : UCommonUserWidget {
	struct TWeakObjectPtr<struct UFortExpeditionItem> Item; // 0x2e0(0x08)
	char pad_2E8[0x8]; // 0x2e8(0x08)

	void SetData(struct UFortExpeditionItem* InItem); // Function SaveTheWorldUI.FortExpeditionReturnsWidget.SetData // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x68be97c
	void OnExpeditionInProgressUpdated(); // Function SaveTheWorldUI.FortExpeditionReturnsWidget.OnExpeditionInProgressUpdated // (Native|Event|Protected|BlueprintEvent) // @ game+0x68bc17c
};

// Class SaveTheWorldUI.FortExpeditionRewardsWidget
// Size: 0x308 (Inherited: 0x2e0)
struct UFortExpeditionRewardsWidget : UCommonUserWidget {
	struct FMulticastInlineDelegate OnAllExpeditionsCollected; // 0x2e0(0x10)
	struct UCommonTileView* RewardsTileView; // 0x2f0(0x08)
	bool bPendingCollection; // 0x2f8(0x01)
	char pad_2F9[0xf]; // 0x2f9(0x0f)

	void RefreshRewardsUI(struct UFortExpeditionItem* Expedition, bool bExpeditionSucceeded, struct TArray<struct FFortItemInstanceQuantityPair>& Rewards); // Function SaveTheWorldUI.FortExpeditionRewardsWidget.RefreshRewardsUI // (Native|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x68c4278
	void ProcessNextReward(); // Function SaveTheWorldUI.FortExpeditionRewardsWidget.ProcessNextReward // (Final|Native|Public|BlueprintCallable) // @ game+0x68c4264
	void HandleCollectionExpeditionCompleted(bool bMcpSuccess, struct UFortExpeditionItem* Expedition, bool bExpeditionSuccess, struct TArray<struct FFortItemInstanceQuantityPair>& Rewards); // Function SaveTheWorldUI.FortExpeditionRewardsWidget.HandleCollectionExpeditionCompleted // (Final|Native|Protected|HasOutParms) // @ game+0x68c3e68
};

// Class SaveTheWorldUI.FortExpeditionSummaryWidget
// Size: 0x338 (Inherited: 0x2e0)
struct UFortExpeditionSummaryWidget : UCommonUserWidget {
	int32_t AvailableExpeditions; // 0x2e0(0x04)
	int32_t CompletedExpeditions; // 0x2e4(0x04)
	int32_t LandVehiclesTotal; // 0x2e8(0x04)
	int32_t LandVehiclesAvailable; // 0x2ec(0x04)
	int32_t AirVehiclesTotal; // 0x2f0(0x04)
	int32_t AirVehiclesAvailable; // 0x2f4(0x04)
	int32_t SeaVehiclesTotal; // 0x2f8(0x04)
	int32_t SeaVehiclesAvailable; // 0x2fc(0x04)
	int32_t LandExpeditionsTotal; // 0x300(0x04)
	int32_t LandExpeditionsAvailable; // 0x304(0x04)
	int32_t AirExpeditionsTotal; // 0x308(0x04)
	int32_t AirExpeditionsAvailable; // 0x30c(0x04)
	int32_t SeaExpeditionsTotal; // 0x310(0x04)
	int32_t SeaExpeditionsAvailable; // 0x314(0x04)
	struct TArray<struct UFortExpeditionItem*> InProgressExpeditions; // 0x318(0x10)
	char pad_328[0x10]; // 0x328(0x10)

	void UnbindInventoryDelegates(); // Function SaveTheWorldUI.FortExpeditionSummaryWidget.UnbindInventoryDelegates // (Final|Native|Public|BlueprintCallable) // @ game+0x68c4830
	void OnRefreshSummaryWidget(); // Function SaveTheWorldUI.FortExpeditionSummaryWidget.OnRefreshSummaryWidget // (Native|Event|Protected|BlueprintEvent) // @ game+0x68bc17c
	void BindInventoryDelegates(); // Function SaveTheWorldUI.FortExpeditionSummaryWidget.BindInventoryDelegates // (Final|Native|Public|BlueprintCallable) // @ game+0x68c2be8
};

// Class SaveTheWorldUI.FortExpeditionUtilities
// Size: 0x28 (Inherited: 0x28)
struct UFortExpeditionUtilities : UBlueprintFunctionLibrary {

	int32_t TotalUnseenExpeditionsForTab(struct UWidget* Widget, struct FName& TabNameID); // Function SaveTheWorldUI.FortExpeditionUtilities.TotalUnseenExpeditionsForTab // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x68c4760
	bool IsSquadOnExpedition(struct UWidget* Widget, struct FName& SquadId); // Function SaveTheWorldUI.FortExpeditionUtilities.IsSquadOnExpedition // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x68c4104
	struct FGameplayTag GetVehicleTagRequiredForExpedition(struct UFortExpeditionItem* Expedition); // Function SaveTheWorldUI.FortExpeditionUtilities.GetVehicleTagRequiredForExpedition // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x68c3ba0
	bool GetVehicleTagFromSquadId(struct FName& SquadId, struct FGameplayTag& OutFoundVehicleTag); // Function SaveTheWorldUI.FortExpeditionUtilities.GetVehicleTagFromSquadId // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x68c3ac8
	void GetTotalExpeditionVehiclesAvailable(struct UWidget* Widget, struct AFortPlayerController* FortPC, int32_t& OutLandVehicles, int32_t& OutLandVehiclesAvailable, int32_t& OutSeaVehicles, int32_t& OutSeaVehiclesAvailable, int32_t& OutAirVehicles, int32_t& OutAirVehiclesAvailable); // Function SaveTheWorldUI.FortExpeditionUtilities.GetTotalExpeditionVehiclesAvailable // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x68c37bc
	void GetMatchedCriteriaTags(struct UFortExpeditionItem* Expedition, struct TArray<struct UFortItem*>& SlottedItems, struct TArray<struct FGameplayTag>& OutMatchedCriteria); // Function SaveTheWorldUI.FortExpeditionUtilities.GetMatchedCriteriaTags // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x68c34e8
	bool GetExpeditionSquadsThatMatchRequirements(struct FGameplayTagContainer& RequirementTags, struct AFortPlayerController* FortPC, struct TArray<struct FName>& OutExpeditionSquadIds); // Function SaveTheWorldUI.FortExpeditionUtilities.GetExpeditionSquadsThatMatchRequirements // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x68c32ec
	float GetExpeditionSquadPower(struct AFortPlayerController* FortPC, struct FName& SquadId); // Function SaveTheWorldUI.FortExpeditionUtilities.GetExpeditionSquadPower // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x68c321c
	void GetAllExpeditionSquadIds(struct TArray<struct FName>& OutExpeditionSquadIds); // Function SaveTheWorldUI.FortExpeditionUtilities.GetAllExpeditionSquadIds // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x68c3014
	float CalculateTotalPower(struct AFortPlayerController* FortPC, struct UFortExpeditionItem* Expedition, struct FName& SquadId, struct TArray<struct UFortItem*>& SlottedItems); // Function SaveTheWorldUI.FortExpeditionUtilities.CalculateTotalPower // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x68c2eac
	void CalculateGlobalAndItemRatingModValuesBP(struct UFortExpeditionItem* Expedition, struct TArray<struct UFortItem*>& SlottedItems, float& GlobalPowerMod, struct TArray<float>& SlottedItemMods); // Function SaveTheWorldUI.FortExpeditionUtilities.CalculateGlobalAndItemRatingModValuesBP // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x68c2d18
	float CalculateExpeditionPercentageChanceForSuccess(struct UFortExpeditionItem* Expedition, float TotalPower); // Function SaveTheWorldUI.FortExpeditionUtilities.CalculateExpeditionPercentageChanceForSuccess // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x68c2bfc
	bool AreExpeditionsUnlocked(struct UObject* WorldContextObject, struct FUniqueNetIdRepl& UniqueId); // Function SaveTheWorldUI.FortExpeditionUtilities.AreExpeditionsUnlocked // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x68c2a80
	bool AreAnyExpeditionsComplete(struct UWidget* Widget); // Function SaveTheWorldUI.FortExpeditionUtilities.AreAnyExpeditionsComplete // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x68c2a00
};

// Class SaveTheWorldUI.FortExpeditionVehicleTileItemWidget
// Size: 0x1490 (Inherited: 0x1480)
struct UFortExpeditionVehicleTileItemWidget : UCommonButtonLegacy {
	char pad_1480[0x8]; // 0x1480(0x08)
	struct TWeakObjectPtr<struct UObject> SquadId; // 0x1488(0x08)
};

// Class SaveTheWorldUI.FortFeatureUnlockWidget
// Size: 0x5a0 (Inherited: 0x568)
struct UFortFeatureUnlockWidget : UFortActivatablePanel {
	struct UCommonWidgetSwitcherLegacy* MediaSwitcher; // 0x568(0x08)
	struct UWidget* VideoContent; // 0x570(0x08)
	struct UWidget* ImageContent; // 0x578(0x08)
	struct UFortVideoPlayerWidget* VideoWidget; // 0x580(0x08)
	struct UCommonLazyImage* ImageWidget; // 0x588(0x08)
	char pad_590[0x10]; // 0x590(0x10)

	void SetData(struct FString ItemTemplateID); // Function SaveTheWorldUI.FortFeatureUnlockWidget.SetData // (Final|Native|Public|BlueprintCallable) // @ game+0x68c443c
	void RefreshDataBP(); // Function SaveTheWorldUI.FortFeatureUnlockWidget.RefreshDataBP // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	struct UMediaSource* GetVideo(); // Function SaveTheWorldUI.FortFeatureUnlockWidget.GetVideo // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x68c3d88
	struct FText GetTitle(); // Function SaveTheWorldUI.FortFeatureUnlockWidget.GetTitle // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x68c36c8
	struct TSoftObjectPtr<UTexture2D> GetSmallIcon(); // Function SaveTheWorldUI.FortFeatureUnlockWidget.GetSmallIcon // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x68c362c
	struct TSoftObjectPtr<UTexture2D> GetLargeIcon(); // Function SaveTheWorldUI.FortFeatureUnlockWidget.GetLargeIcon // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x68c344c
	struct FText GetDescription(); // Function SaveTheWorldUI.FortFeatureUnlockWidget.GetDescription // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x68c30a4
};

// Class SaveTheWorldUI.FortHeroLoadoutGadgetPicker
// Size: 0x440 (Inherited: 0x420)
struct UFortHeroLoadoutGadgetPicker : UFortItemPickerBase {
	struct TWeakObjectPtr<struct UFortCampaignHeroLoadoutItem> TargetLoadoutItem; // 0x420(0x08)
	int32_t TargetSlotIndex; // 0x428(0x04)
	char pad_42C[0x4]; // 0x42c(0x04)
	struct TArray<struct UFortItem*> TemporaryGadgetItemInstances; // 0x430(0x10)

	void SetTargetLoadoutSlot(struct UFortCampaignHeroLoadoutItem* LoadoutItem, int32_t SlotIndex); // Function SaveTheWorldUI.FortHeroLoadoutGadgetPicker.SetTargetLoadoutSlot // (Final|Native|Public|BlueprintCallable) // @ game+0x68c469c
	void HandleDifferentTargetLoadoutSlotSetBP(); // Function SaveTheWorldUI.FortHeroLoadoutGadgetPicker.HandleDifferentTargetLoadoutSlotSetBP // (Event|Protected|BlueprintEvent) // @ game+0xd67374
};

// Class SaveTheWorldUI.FortHeroLoadoutGadgetTileBase
// Size: 0x300 (Inherited: 0x2e0)
struct UFortHeroLoadoutGadgetTileBase : UCommonUserWidget {
	struct UCommonTextBlock* Text_GadgetName; // 0x2e0(0x08)
	struct UCommonLazyImage* Image_Icon; // 0x2e8(0x08)
	struct URichTextBlock* RichText_Description; // 0x2f0(0x08)
	struct UFortGadgetItemDefinition* GadgetToRepresent; // 0x2f8(0x08)

	void SetGadgetToRepresent(struct UFortGadgetItemDefinition* GadgetItemDefinition); // Function SaveTheWorldUI.FortHeroLoadoutGadgetTileBase.SetGadgetToRepresent // (Final|Native|Public|BlueprintCallable) // @ game+0x68c461c
	void OnGadgetUpdated(bool bIsValidGadget); // Function SaveTheWorldUI.FortHeroLoadoutGadgetTileBase.OnGadgetUpdated // (Event|Public|BlueprintEvent) // @ game+0xd67374
};

// Class SaveTheWorldUI.FortHeroLoadoutHeroPicker
// Size: 0x4e0 (Inherited: 0x420)
struct UFortHeroLoadoutHeroPicker : UFortItemPickerBase {
	struct UFortTabListWidgetBase* ExternalFilterTabList; // 0x420(0x08)
	struct TWeakObjectPtr<struct UFortCampaignHeroLoadoutItem> TargetLoadoutItem; // 0x428(0x08)
	struct FName TargetSlotName; // 0x430(0x04)
	char pad_434[0x4]; // 0x434(0x04)
	struct UCommonButtonLegacy* FilterTabButtonType; // 0x438(0x08)
	struct TMap<struct FName, struct FFortTabButtonLabelInfo> TabButtonLabelInfoMap; // 0x440(0x50)
	char pad_490[0x50]; // 0x490(0x50)

	void UpdateFilterTabList(struct FName PreviouslySelectedTab); // Function SaveTheWorldUI.FortHeroLoadoutHeroPicker.UpdateFilterTabList // (Final|Native|Private|BlueprintCallable) // @ game+0x68c6674
	void SetTargetLoadoutSlot(struct UFortCampaignHeroLoadoutItem* LoadoutItem, struct FName& SlotName); // Function SaveTheWorldUI.FortHeroLoadoutHeroPicker.SetTargetLoadoutSlot // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x68c6590
	void HandleFilterTabSelectedBP(struct FName TabId); // Function SaveTheWorldUI.FortHeroLoadoutHeroPicker.HandleFilterTabSelectedBP // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void HandleFilterTabSelected(struct FName TabId); // Function SaveTheWorldUI.FortHeroLoadoutHeroPicker.HandleFilterTabSelected // (Final|Native|Private) // @ game+0x68c5a84
	void HandleDifferentTargetLoadoutSetBP(); // Function SaveTheWorldUI.FortHeroLoadoutHeroPicker.HandleDifferentTargetLoadoutSetBP // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	struct FName GetCurrentlySelectedTab(); // Function SaveTheWorldUI.FortHeroLoadoutHeroPicker.GetCurrentlySelectedTab // (Final|Native|Public|BlueprintCallable) // @ game+0x68c53dc
	void AssociateFilterTabList(struct UFortTabListWidgetBase* ExternalFilterTabList); // Function SaveTheWorldUI.FortHeroLoadoutHeroPicker.AssociateFilterTabList // (Final|Native|Public|BlueprintCallable) // @ game+0x68c4e74
};

// Class SaveTheWorldUI.FortHeroLoadoutHeroPickerFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UFortHeroLoadoutHeroPickerFunctionLibrary : UBlueprintFunctionLibrary {
};

// Class SaveTheWorldUI.FortHeroLoadoutInGameScreenBase
// Size: 0x580 (Inherited: 0x530)
struct UFortHeroLoadoutInGameScreenBase : UCommonActivatablePanelLegacy {
	struct TArray<struct FFortInGamePerkDisplayData> PerksDisplayData; // 0x530(0x10)
	struct UFortHeroLoadoutPerkTileBase* TileClass; // 0x540(0x08)
	struct UScrollBox* ScrollBox_Content; // 0x548(0x08)
	struct UFortItemDetailsHostPanel* ItemDetailsHostPanel_Header; // 0x550(0x08)
	struct UGridPanel* GridPanel_Perks; // 0x558(0x08)
	struct UFortHeroLoadoutGadgetTileBase* GadgetTile_Gadget1; // 0x560(0x08)
	struct UFortHeroLoadoutGadgetTileBase* GadgetTile_Gadget2; // 0x568(0x08)
	struct TArray<struct UFortHeroLoadoutGadgetTileBase*> GadgetTiles; // 0x570(0x10)

	void OnPerkWidgetAdded(struct UGridSlot* GridSlot); // Function SaveTheWorldUI.FortHeroLoadoutInGameScreenBase.OnPerkWidgetAdded // (Event|Public|BlueprintEvent) // @ game+0xd67374
	struct UFortGadgetItemDefinition* GetGadgetDefinitionBySlot(int32_t SlotIndex); // Function SaveTheWorldUI.FortHeroLoadoutInGameScreenBase.GetGadgetDefinitionBySlot // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x68c5578
};

// Class SaveTheWorldUI.FortHeroLoadoutPerkTileBase
// Size: 0x368 (Inherited: 0x2e0)
struct UFortHeroLoadoutPerkTileBase : UCommonUserWidget {
	enum class EFortBrushSize BrushSize; // 0x2e0(0x01)
	bool bShowSummaryDescription; // 0x2e1(0x01)
	char pad_2E2[0x6]; // 0x2e2(0x06)
	struct UCommonTextBlock* Text_PerkName; // 0x2e8(0x08)
	struct URichTextBlock* Text_Description; // 0x2f0(0x08)
	struct UFortLazyImage* Image_PerkIcon; // 0x2f8(0x08)
	struct UHorizontalBox* Hbox_PerkDetails; // 0x300(0x08)
	struct FText ActiveText; // 0x308(0x18)
	struct FText InactiveText; // 0x320(0x18)
	float InactiveOpacity; // 0x338(0x04)
	float ActiveOpacity; // 0x33c(0x04)
	struct UFortAbilityKit* AbilityKit; // 0x340(0x08)
	char pad_348[0x20]; // 0x348(0x20)

	void OnPerkInitialized(enum class EFortHeroPerkDisplayType InPerkType, bool bActive, bool bShowWarning); // Function SaveTheWorldUI.FortHeroLoadoutPerkTileBase.OnPerkInitialized // (Event|Protected|BlueprintEvent) // @ game+0xd67374
};

// Class SaveTheWorldUI.FortHeroLoadoutScreenBase
// Size: 0x6b0 (Inherited: 0x6b0)
struct UFortHeroLoadoutScreenBase : UFortActivatablePanelWithItemPreview {

	void SetHeroLoadout(struct UFortCampaignHeroLoadoutItem* HeroLoadout); // Function SaveTheWorldUI.FortHeroLoadoutScreenBase.SetHeroLoadout // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	bool IsLoadoutSwitchingAllowed(); // Function SaveTheWorldUI.FortHeroLoadoutScreenBase.IsLoadoutSwitchingAllowed // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x68c5dac
	bool GetIsReadOnly(); // Function SaveTheWorldUI.FortHeroLoadoutScreenBase.GetIsReadOnly // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x68c5604
};

// Class SaveTheWorldUI.FortHeroLoadoutSlotButton
// Size: 0x14c0 (Inherited: 0x1480)
struct UFortHeroLoadoutSlotButton : UCommonButtonLegacy {
	struct FName SlotName; // 0x1480(0x04)
	int32_t SlotIndex; // 0x1484(0x04)
	enum class EHeroLoadoutSlotType SlotType; // 0x1488(0x01)
	char pad_1489[0x7]; // 0x1489(0x07)
	struct FMulticastInlineDelegate OnRequestChangeHero; // 0x1490(0x10)
	struct FMulticastInlineDelegate OnContextMenuOpenChanged; // 0x14a0(0x10)
	struct UMenuAnchor* ContextMenuAnchor; // 0x14b0(0x08)
	char pad_14B8[0x8]; // 0x14b8(0x08)

	void OnRequestChangeHero__DelegateSignature(struct UFortHeroLoadoutSlotButton* SlotButton); // DelegateFunction SaveTheWorldUI.FortHeroLoadoutSlotButton.OnRequestChangeHero__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0xd67374
	void OnMenuOpenChangedEvent__DelegateSignature(struct UFortHeroLoadoutSlotButton* SlotButton, bool bIsMenuOpen); // DelegateFunction SaveTheWorldUI.FortHeroLoadoutSlotButton.OnMenuOpenChangedEvent__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0xd67374
	bool IsContextMenuOpen(); // Function SaveTheWorldUI.FortHeroLoadoutSlotButton.IsContextMenuOpen // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x68c5ce8
	void HandleMenuOpenChanged(bool bIsMenuOpen); // Function SaveTheWorldUI.FortHeroLoadoutSlotButton.HandleMenuOpenChanged // (Final|Native|Private) // @ game+0x68c5c68
};

// Class SaveTheWorldUI.FortHeroLoadoutTeamPerkPicker
// Size: 0x428 (Inherited: 0x420)
struct UFortHeroLoadoutTeamPerkPicker : UFortItemPickerBase {
	struct TWeakObjectPtr<struct UFortCampaignHeroLoadoutItem> TargetLoadoutItem; // 0x420(0x08)

	void SetTargetLoadout(struct UFortCampaignHeroLoadoutItem* LoadoutItem); // Function SaveTheWorldUI.FortHeroLoadoutTeamPerkPicker.SetTargetLoadout // (Final|Native|Public|BlueprintCallable) // @ game+0x68c6510
	void HandleDifferentTargetLoadoutSetBP(); // Function SaveTheWorldUI.FortHeroLoadoutTeamPerkPicker.HandleDifferentTargetLoadoutSetBP // (Event|Protected|BlueprintEvent) // @ game+0xd67374
};

// Class SaveTheWorldUI.FortSquadStatDetailsWidget
// Size: 0x310 (Inherited: 0x2e0)
struct UFortSquadStatDetailsWidget : UCommonUserWidget {
	char pad_2E0[0x30]; // 0x2e0(0x30)
};

// Class SaveTheWorldUI.FortHeroSquadBonusPerksWidgetBase
// Size: 0x320 (Inherited: 0x310)
struct UFortHeroSquadBonusPerksWidgetBase : UFortSquadStatDetailsWidget {
	struct UFortPerkWidget_NUI* SupportBonusPerkWidget; // 0x310(0x08)
	struct UFortPerkWidget_NUI* TacticalBonusPerkWidget; // 0x318(0x08)
};

// Class SaveTheWorldUI.FortSquadManagementScreenBase
// Size: 0x688 (Inherited: 0x568)
struct UFortSquadManagementScreenBase : UFortActivatablePanel {
	char pad_568[0x10]; // 0x568(0x10)
	bool bReadOnlyModeWIFE; // 0x578(0x01)
	char pad_579[0x7]; // 0x579(0x07)
	struct UFortSquadStatsWidgetBase* SquadStatsWidget; // 0x580(0x08)
	struct UFortSquadSlotsView* SquadSlotsView; // 0x588(0x08)
	struct UFortSquadSlotDetailsPanel* SelectedSlotDetailsPanel; // 0x590(0x08)
	struct UFortSquadSlotItemPicker* SelectedSlotItemPicker; // 0x598(0x08)
	struct FDataTableRowHandle InspectInputActionRowHandle; // 0x5a0(0x10)
	struct FDataTableRowHandle ManageInputActionRowHandle; // 0x5b0(0x10)
	struct FDataTableRowHandle BackInputActionRowHandle; // 0x5c0(0x10)
	struct FDataTableRowHandle InventoryInputActionRowHandle; // 0x5d0(0x10)
	struct FDataTableRowHandle InventoryCloseInputActionRowHandle; // 0x5e0(0x10)
	struct FDataTableRowHandle ClosePickerInputActionRowHandle; // 0x5f0(0x10)
	struct FDataTableRowHandle SelectPickerSlotActionRowHandle; // 0x600(0x10)
	struct FDataTableRowHandle CyclePickerSortActionRowHandle; // 0x610(0x10)
	struct FDataTableRowHandle PreviousSquadActionRowHandle; // 0x620(0x10)
	struct FDataTableRowHandle NextSquadActionRowHandle; // 0x630(0x10)
	struct FDataTableRowHandle ClearAllActionRowHandle; // 0x640(0x10)
	struct FDataTableRowHandle HelpScreenActionRowHandle; // 0x650(0x10)
	struct UFortDisableAutoSlottingPromptAction* DisableAutoSlottingToClearSquadPromptAction; // 0x660(0x08)
	char pad_668[0x10]; // 0x668(0x10)
	struct UFortItemViewContext_SquadSlotsView* ItemViewContext_SquadSlotsView; // 0x678(0x08)
	struct UFortItemViewContext_SquadSlotItemPicker* ItemViewContext_SquadSlotItemPicker; // 0x680(0x08)

	bool TryGetStaticSquadDataBP(struct FHomebaseSquad& OutSquadData); // Function SaveTheWorldUI.FortSquadManagementScreenBase.TryGetStaticSquadDataBP // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x68cd1f0
	bool TryGetSquadTeamAttribute(struct FGameplayAttribute& OutGameplayAttribute); // Function SaveTheWorldUI.FortSquadManagementScreenBase.TryGetSquadTeamAttribute // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x68cd108
	bool TryGetSquadMainAttribute(struct FGameplayAttribute& OutGameplayAttribute); // Function SaveTheWorldUI.FortSquadManagementScreenBase.TryGetSquadMainAttribute // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x68cd020
	bool TryGetAttributeValueFromSquad(float& OutValue, struct FGameplayAttribute& Attribute); // Function SaveTheWorldUI.FortSquadManagementScreenBase.TryGetAttributeValueFromSquad // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x68cce50
	void ShowWarningReadOnlyWIFE(bool Force); // Function SaveTheWorldUI.FortSquadManagementScreenBase.ShowWarningReadOnlyWIFE // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetupInputHandlers(); // Function SaveTheWorldUI.FortSquadManagementScreenBase.SetupInputHandlers // (Native|Protected|BlueprintCallable) // @ game+0x63cb730
	void SetIdOfSquadToManageBP(struct FName& SquadId); // Function SaveTheWorldUI.FortSquadManagementScreenBase.SetIdOfSquadToManageBP // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x68ccc30
	void SelectSquadWithOffset(int32_t Offset); // Function SaveTheWorldUI.FortSquadManagementScreenBase.SelectSquadWithOffset // (Final|Native|Public|BlueprintCallable) // @ game+0x68cc6c8
	void SelectPreviousSquad(); // Function SaveTheWorldUI.FortSquadManagementScreenBase.SelectPreviousSquad // (Final|Native|Public|BlueprintCallable) // @ game+0x68cc6b0
	void SelectNextSquad(); // Function SaveTheWorldUI.FortSquadManagementScreenBase.SelectNextSquad // (Final|Native|Public|BlueprintCallable) // @ game+0x68cc698
	void NavigateToSquadSlot(int32_t SquadSlotIndex); // Function SaveTheWorldUI.FortSquadManagementScreenBase.NavigateToSquadSlot // (Final|Native|Public|BlueprintCallable) // @ game+0x68cc618
	bool IsScreenWIFE(); // Function SaveTheWorldUI.FortSquadManagementScreenBase.IsScreenWIFE // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x68cc4e0
	void HandleViewInAll(int32_t SquadSlotIndex); // Function SaveTheWorldUI.FortSquadManagementScreenBase.HandleViewInAll // (Final|Native|Private) // @ game+0x68cc464
	void HandleSquadStateChanged(); // Function SaveTheWorldUI.FortSquadManagementScreenBase.HandleSquadStateChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void HandleSquadSlotPickerShown(); // Function SaveTheWorldUI.FortSquadManagementScreenBase.HandleSquadSlotPickerShown // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void HandleSquadSlotPickerHidden(); // Function SaveTheWorldUI.FortSquadManagementScreenBase.HandleSquadSlotPickerHidden // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void HandleShouldAutoSlotSurvivorSquadsChanged(); // Function SaveTheWorldUI.FortSquadManagementScreenBase.HandleShouldAutoSlotSurvivorSquadsChanged // (Final|Native|Private) // @ game+0x63cb730
	void HandleSelectPickerSlotInputAction(); // Function SaveTheWorldUI.FortSquadManagementScreenBase.HandleSelectPickerSlotInputAction // (Final|Native|Private) // @ game+0x68cc43c
	void HandlePreviousSquadInputAction(); // Function SaveTheWorldUI.FortSquadManagementScreenBase.HandlePreviousSquadInputAction // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void HandlePickerSelectionCommitted(struct UFortItem* CommittedItem); // Function SaveTheWorldUI.FortSquadManagementScreenBase.HandlePickerSelectionCommitted // (Final|Native|Private) // @ game+0x68cc3c0
	void HandlePickerSelectionChanged(struct UFortItem* SelectedItem); // Function SaveTheWorldUI.FortSquadManagementScreenBase.HandlePickerSelectionChanged // (Final|Native|Private) // @ game+0x68cc340
	void HandleOpenSquadSlot(int32_t SquadSlotIndex); // Function SaveTheWorldUI.FortSquadManagementScreenBase.HandleOpenSquadSlot // (Final|Native|Private) // @ game+0x68cc2c0
	void HandleNextSquadInputAction(); // Function SaveTheWorldUI.FortSquadManagementScreenBase.HandleNextSquadInputAction // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void HandleManageInputAction(); // Function SaveTheWorldUI.FortSquadManagementScreenBase.HandleManageInputAction // (Final|Native|Protected) // @ game+0x68cc2ac
	void HandleInventoryInputAction(); // Function SaveTheWorldUI.FortSquadManagementScreenBase.HandleInventoryInputAction // (Final|Native|Private) // @ game+0x68cc258
	void HandleInspectInputAction(); // Function SaveTheWorldUI.FortSquadManagementScreenBase.HandleInspectInputAction // (Final|Native|Private) // @ game+0x68cc244
	void HandleDifferentSquadSlotSelected(int32_t SquadSlotIndex); // Function SaveTheWorldUI.FortSquadManagementScreenBase.HandleDifferentSquadSlotSelected // (Native|Protected) // @ game+0x68cc1c0
	void HandleDifferentSquadSetBP(); // Function SaveTheWorldUI.FortSquadManagementScreenBase.HandleDifferentSquadSetBP // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void HandleCyclePickerSortInputAction(); // Function SaveTheWorldUI.FortSquadManagementScreenBase.HandleCyclePickerSortInputAction // (Final|Native|Private) // @ game+0x68cc198
	void HandleClosePickerInputAction(); // Function SaveTheWorldUI.FortSquadManagementScreenBase.HandleClosePickerInputAction // (Final|Native|Private) // @ game+0x68cc168
	void HandleBackInputAction(); // Function SaveTheWorldUI.FortSquadManagementScreenBase.HandleBackInputAction // (Final|Native|Protected|BlueprintCallable) // @ game+0x68cc104
	int32_t GetNumUnlockedSquads(); // Function SaveTheWorldUI.FortSquadManagementScreenBase.GetNumUnlockedSquads // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x68cc06c
	struct FName GetIdOfSquadToManageBP(); // Function SaveTheWorldUI.FortSquadManagementScreenBase.GetIdOfSquadToManageBP // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x68cbe54
	void ClearSquad(); // Function SaveTheWorldUI.FortSquadManagementScreenBase.ClearSquad // (Final|Native|Public|BlueprintCallable) // @ game+0x68cbabc
};

// Class SaveTheWorldUI.FortHeroSquadManagementScreen
// Size: 0x6a8 (Inherited: 0x688)
struct UFortHeroSquadManagementScreen : UFortSquadManagementScreenBase {
	struct FDataTableRowHandle ManageDefendersInputActionRowHandle; // 0x688(0x10)
	struct UFortHeroSquadBonusPerksWidgetBase* BonusPerksWidget; // 0x698(0x08)
	char pad_6A0[0x8]; // 0x6a0(0x08)

	void PlayFeedbackForSlottingPerson(struct UFortCharacter* Character, int32_t SlotIndex); // Function SaveTheWorldUI.FortHeroSquadManagementScreen.PlayFeedbackForSlottingPerson // (Event|Protected|BlueprintEvent) // @ game+0xd67374
};

// Class SaveTheWorldUI.FortHomebaseNodeItemTooltip
// Size: 0x70 (Inherited: 0x50)
struct UFortHomebaseNodeItemTooltip : UFortItemTooltip {
	char pad_50[0x20]; // 0x50(0x20)
};

// Class SaveTheWorldUI.FortItemInspectionScreen
// Size: 0x7b0 (Inherited: 0x6b0)
struct UFortItemInspectionScreen : UFortActivatablePanelWithItemPreview {
	enum class EFortItemInspectionMode CurrentInspectMode; // 0x6b0(0x01)
	char pad_6B1[0x3]; // 0x6b1(0x03)
	struct TWeakObjectPtr<struct UFortItem> InspectedItem; // 0x6b4(0x08)
	bool UpgradeAllowed; // 0x6bc(0x01)
	bool EvolveAllowed; // 0x6bd(0x01)
	bool FavoriteAllowed; // 0x6be(0x01)
	bool RarityUpgradingAllowed; // 0x6bf(0x01)
	bool IsPreviewing; // 0x6c0(0x01)
	bool bHasSeenRefundHelpPrompt; // 0x6c1(0x01)
	char pad_6C2[0x6]; // 0x6c2(0x06)
	struct UFortItemInspectCycleWidget* CycleWidget; // 0x6c8(0x08)
	struct FGameplayTagQuery InspectAnimationTag; // 0x6d0(0x48)
	struct UFortAlterationModOptinScreenBase* AlterationModOptinScreenClass; // 0x718(0x08)
	struct UFortAlterationModScreenBase* AlterationModScreenClass; // 0x720(0x08)
	struct TSoftObjectPtr<UDataTable> RefundDescriptionsDataTable; // 0x728(0x28)
	char pad_750[0x60]; // 0x750(0x60)

	void SetItemToRepresent(struct UFortItem* Item); // Function SaveTheWorldUI.FortItemInspectionScreen.SetItemToRepresent // (Final|Native|Protected|BlueprintCallable) // @ game+0x68c6388
	void SetInspectionMode(enum class EFortItemInspectionMode NewInspectMode); // Function SaveTheWorldUI.FortItemInspectionScreen.SetInspectionMode // (Final|Native|Protected|BlueprintCallable) // @ game+0x68c6288
	void SetAttemptingConversion(bool bIsAttemptingConversion); // Function SaveTheWorldUI.FortItemInspectionScreen.SetAttemptingConversion // (Final|Native|Public|BlueprintCallable) // @ game+0x68c6180
	void OpenItemInspect(struct UFortItem* ItemToInspect, enum class EFortItemInspectionMode Mode, bool ShouldAllowUpgrading, bool ShouldAllowEvolution, bool ShouldAllowFavorite, bool IsTemporaryItem, bool bAllowRarityUpgrading, int32_t QuantityOverride); // Function SaveTheWorldUI.FortItemInspectionScreen.OpenItemInspect // (Final|Native|Public|BlueprintCallable) // @ game+0x68c5e18
	bool IsItemSlottedInCollectionBook(struct UFortItem* Item); // Function SaveTheWorldUI.FortItemInspectionScreen.IsItemSlottedInCollectionBook // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x68c5d1c
	void HandleItemToInspectDestroyedBP(); // Function SaveTheWorldUI.FortItemInspectionScreen.HandleItemToInspectDestroyedBP // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void HandleItemToInspectDestroyed(); // Function SaveTheWorldUI.FortItemInspectionScreen.HandleItemToInspectDestroyed // (Final|Native|Protected) // @ game+0x68c5c10
	void HandleItemToInspectChangedBP(bool bWasFavoritedChanged); // Function SaveTheWorldUI.FortItemInspectionScreen.HandleItemToInspectChangedBP // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void HandleItemToInspectChanged(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged); // Function SaveTheWorldUI.FortItemInspectionScreen.HandleItemToInspectChanged // (Final|Native|Protected) // @ game+0x68c5b04
	void HandleIsPreviewingChanged(); // Function SaveTheWorldUI.FortItemInspectionScreen.HandleIsPreviewingChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void HandleDifferentItemToInspectSetBP(); // Function SaveTheWorldUI.FortItemInspectionScreen.HandleDifferentItemToInspectSetBP // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void HandleDifferentInspectionModeSetBP(); // Function SaveTheWorldUI.FortItemInspectionScreen.HandleDifferentInspectionModeSetBP // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	struct UFortAccountItem* GetRefundResultItem(); // Function SaveTheWorldUI.FortItemInspectionScreen.GetRefundResultItem // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x68c57f0
	struct FText GetRefundDescriptionText(); // Function SaveTheWorldUI.FortItemInspectionScreen.GetRefundDescriptionText // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x68c576c
	int32_t GetItemQuantityOverride(); // Function SaveTheWorldUI.FortItemInspectionScreen.GetItemQuantityOverride // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x68c566c
	struct UFortItemInspectCycleWidget* GetCycleWidget(); // Function SaveTheWorldUI.FortItemInspectionScreen.GetCycleWidget // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x6815718
	bool DoesItemHaveLegacyAlterations(); // Function SaveTheWorldUI.FortItemInspectionScreen.DoesItemHaveLegacyAlterations // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x68c5330
	void DoAlterationModification(); // Function SaveTheWorldUI.FortItemInspectionScreen.DoAlterationModification // (Final|Native|Public|BlueprintCallable) // @ game+0x68c531c
};

// Class SaveTheWorldUI.FortItemInspectCycleWidget
// Size: 0x330 (Inherited: 0x2e0)
struct UFortItemInspectCycleWidget : UCommonUserWidget {
	struct FMulticastInlineDelegate OnItemToRepresentChanged; // 0x2e0(0x10)
	struct TWeakObjectPtr<struct UFortItemTileView> ItemTileView; // 0x2f0(0x08)
	struct TWeakObjectPtr<struct UFortItem> ItemToRepresent; // 0x2f8(0x08)
	struct FDataTableRowHandle PreviousItemActionRowHandle; // 0x300(0x10)
	struct FDataTableRowHandle NextItemActionRowHandle; // 0x310(0x10)
	char pad_320[0x10]; // 0x320(0x10)

	void SetupActionHandlers(); // Function SaveTheWorldUI.FortItemInspectCycleWidget.SetupActionHandlers // (Final|Native|Public|BlueprintCallable) // @ game+0x68c6660
	void SetOwningItemInspectScreen(struct UFortItemInspectionScreen* ItemInspect); // Function SaveTheWorldUI.FortItemInspectCycleWidget.SetOwningItemInspectScreen // (Final|Native|Public|BlueprintCallable) // @ game+0x68c6408
	void SetItemToRepresent(struct UFortItem* NewItemToRepresent); // Function SaveTheWorldUI.FortItemInspectCycleWidget.SetItemToRepresent // (Final|Native|Public|BlueprintCallable) // @ game+0x68c6308
	void SelectPreviousItem(); // Function SaveTheWorldUI.FortItemInspectCycleWidget.SelectPreviousItem // (Final|Native|Public|BlueprintCallable) // @ game+0x68c6168
	void SelectNextItem(); // Function SaveTheWorldUI.FortItemInspectCycleWidget.SelectNextItem // (Final|Native|Public|BlueprintCallable) // @ game+0x68c6150
	void SelectItemWithOffset(int32_t Offset); // Function SaveTheWorldUI.FortItemInspectCycleWidget.SelectItemWithOffset // (Final|Native|Public|BlueprintCallable) // @ game+0x68c60d0
	void OnItemCycled(struct UFortItem* OldItem, struct UFortItem* NewItem, int32_t OffsetFromPreviousItem); // Function SaveTheWorldUI.FortItemInspectCycleWidget.OnItemCycled // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	struct UFortItem* GetItemWithOffset_BP(int32_t IndexOffset); // Function SaveTheWorldUI.FortItemInspectCycleWidget.GetItemWithOffset_BP // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x68c56e0
};

// Class SaveTheWorldUI.FortJournalQuestDetails
// Size: 0x2e8 (Inherited: 0x2e0)
struct UFortJournalQuestDetails : UCommonUserWidget {
	struct UFortQuestItem* CurrentQuest; // 0x2e0(0x08)

	void SetCurrentQuest(struct UFortQuestItem* InCurrentQuest); // Function SaveTheWorldUI.FortJournalQuestDetails.SetCurrentQuest // (Final|Native|Public|BlueprintCallable) // @ game+0x68c6208
	void RegisterEndSpokenDialogEvent(); // Function SaveTheWorldUI.FortJournalQuestDetails.RegisterEndSpokenDialogEvent // (Final|Native|Protected|BlueprintCallable) // @ game+0x68c608c
	void OnEndSpokenDialog(); // Function SaveTheWorldUI.FortJournalQuestDetails.OnEndSpokenDialog // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void HandleCurrentQuestChangedBP(); // Function SaveTheWorldUI.FortJournalQuestDetails.HandleCurrentQuestChangedBP // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void GetVisibleObjectives(struct TArray<struct UFortQuestObjectiveInfo*>& VisibleObjectives); // Function SaveTheWorldUI.FortJournalQuestDetails.GetVisibleObjectives // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x68c5928
	void GetRewards(struct TArray<struct FFortItemInstanceQuantityPair>& OutRewards, struct TArray<struct FFortItemInstanceQuantityPair>& OutSelectableRewards); // Function SaveTheWorldUI.FortJournalQuestDetails.GetRewards // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x68c5814
	void GetFutureObjectives(struct TArray<struct UFortQuestObjectiveInfo*>& FutureObjectives); // Function SaveTheWorldUI.FortJournalQuestDetails.GetFutureObjectives // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x68c541c
	enum class EFortTheaterMapTileType GetActiveMissionTileType(); // Function SaveTheWorldUI.FortJournalQuestDetails.GetActiveMissionTileType // (Final|Native|Public|BlueprintCallable) // @ game+0x68c5354
	bool CanPlayQuest(); // Function SaveTheWorldUI.FortJournalQuestDetails.CanPlayQuest // (Final|Native|Public|BlueprintCallable) // @ game+0x68c52f8
	bool CanPartyLeaderPlayQuest(); // Function SaveTheWorldUI.FortJournalQuestDetails.CanPartyLeaderPlayQuest // (Final|Native|Public|BlueprintCallable) // @ game+0x68c5260
	bool CanGotoQuest(); // Function SaveTheWorldUI.FortJournalQuestDetails.CanGotoQuest // (Final|Native|Public|BlueprintCallable) // @ game+0x68c520c
};

// Class SaveTheWorldUI.FortJournalQuestProgressBar
// Size: 0x2f0 (Inherited: 0x2e0)
struct UFortJournalQuestProgressBar : UCommonUserWidget {
	char pad_2E0[0x8]; // 0x2e0(0x08)
	struct TWeakObjectPtr<struct UFortQuestObjectiveInfo> QuestObjectiveInfo; // 0x2e8(0x08)

	void GetProgressDetails(struct FText& OutNumerator, struct FText& OutDenominator, float& OutFraction); // Function SaveTheWorldUI.FortJournalQuestProgressBar.GetProgressDetails // (Final|Native|Protected|HasOutParms|BlueprintCallable) // @ game+0x68c6a14
};

// Class SaveTheWorldUI.FortLayoutQuestNode
// Size: 0x308 (Inherited: 0x2e0)
struct UFortLayoutQuestNode : UCommonUserWidget {
	struct UFortQuestMapQuestTile* QuestTile; // 0x2e0(0x08)
	int32_t QuestNodeIndex; // 0x2e8(0x04)
	char pad_2EC[0x4]; // 0x2ec(0x04)
	struct FFortQuestMapNode QuestMapNode; // 0x2f0(0x18)
};

// Class SaveTheWorldUI.FortLayoutQuestNode_Legacy
// Size: 0x308 (Inherited: 0x2e0)
struct UFortLayoutQuestNode_Legacy : UCommonUserWidget {
	struct UFortQuestMapQuestTile_Legacy* QuestTile; // 0x2e0(0x08)
	int32_t QuestNodeIndex; // 0x2e8(0x04)
	char pad_2EC[0x4]; // 0x2ec(0x04)
	struct FFortQuestMapNode QuestMapNode; // 0x2f0(0x18)
};

// Class SaveTheWorldUI.FortLlamaStoreData
// Size: 0x68 (Inherited: 0x30)
struct UFortLlamaStoreData : UPrimaryDataAsset {
	struct TArray<struct FText> RandomLoadingTexts; // 0x30(0x10)
	struct FName NotEnoughCurrencyDialogCloseAction; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct UFortStoreFrontOfferDetailsWidgetBase* InspectWidgetClass; // 0x48(0x08)
	float ShowOfferDelay; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
	struct UCommonActivatablePanelLegacy* StoreOpeningCardPackClass; // 0x58(0x08)
	struct UFortOpenCardPackModal* UnopenedCardpacksModalClass; // 0x60(0x08)
};

// Class SaveTheWorldUI.FortLlamaStoreBase
// Size: 0x6c0 (Inherited: 0x648)
struct UFortLlamaStoreBase : UFortDirectAcquisitionWidgetBase {
	struct TArray<struct FOfferGroup> OfferCategoriesToDisplay; // 0x648(0x10)
	struct UDynamicEntryBox* OfferEntryBox; // 0x658(0x08)
	struct UCommonButtonGroupLegacy* OfferButtonGroup; // 0x660(0x08)
	struct UFortLlamaStoreDetailsBase* OfferDetails; // 0x668(0x08)
	struct UFortLlamaStoreData* StoreData; // 0x670(0x08)
	struct UCommonButtonLegacy* Button_UnopenedLlamas; // 0x678(0x08)
	struct UFortLlamaStoreOfferInfo* PendingPurchaseOffer; // 0x680(0x08)
	struct UCommonActivatablePanelLegacy* StoreOpeningCardPack; // 0x688(0x08)
	bool bHideSoldOffers; // 0x690(0x01)
	char pad_691[0x2f]; // 0x691(0x2f)

	void SwapToCardEnterState(); // Function SaveTheWorldUI.FortLlamaStoreBase.SwapToCardEnterState // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void SetupFocus(); // Function SaveTheWorldUI.FortLlamaStoreBase.SetupFocus // (Final|Native|Protected|BlueprintCallable) // @ game+0x68c72d8
	void OnStoreStateChanged(enum class EFortStoreState NewStoreState); // Function SaveTheWorldUI.FortLlamaStoreBase.OnStoreStateChanged // (Final|Native|Protected) // @ game+0x68c6e68
	void OnStorePurchaseCompleted(); // Function SaveTheWorldUI.FortLlamaStoreBase.OnStorePurchaseCompleted // (Final|Native|Private) // @ game+0x68c6dd8
	void CreateTencentPuchaseOpenModal(); // Function SaveTheWorldUI.FortLlamaStoreBase.CreateTencentPuchaseOpenModal // (Event|Protected|BlueprintEvent) // @ game+0xd67374
};

// Class SaveTheWorldUI.FortLlamaStoreDetailsBase
// Size: 0x300 (Inherited: 0x2e0)
struct UFortLlamaStoreDetailsBase : UCommonUserWidget {
	struct UFortStoreFrontOfferInfo* OfferInfo; // 0x2e0(0x08)
	struct UCommonTileView* ItemTileView; // 0x2e8(0x08)
	char pad_2F0[0x10]; // 0x2f0(0x10)

	void StartUpgradingToSilver(); // Function SaveTheWorldUI.FortLlamaStoreDetailsBase.StartUpgradingToSilver // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void StartUpgradingToGold(); // Function SaveTheWorldUI.FortLlamaStoreDetailsBase.StartUpgradingToGold // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void SetScrollWidget(); // Function SaveTheWorldUI.FortLlamaStoreDetailsBase.SetScrollWidget // (Final|Native|Public|BlueprintCallable) // @ game+0x68c7294
	void OnOfferInfoChanged(int32_t CurrentOfferRarity); // Function SaveTheWorldUI.FortLlamaStoreDetailsBase.OnOfferInfoChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	int32_t GetNotInCollectionBookCount(); // Function SaveTheWorldUI.FortLlamaStoreDetailsBase.GetNotInCollectionBookCount // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x2b51834
	int32_t GetNewItemCount(); // Function SaveTheWorldUI.FortLlamaStoreDetailsBase.GetNewItemCount // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x29eefbc
	int32_t GetChoiceItemCount(); // Function SaveTheWorldUI.FortLlamaStoreDetailsBase.GetChoiceItemCount // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x68c68c8
};

// Class SaveTheWorldUI.FortLlamaStoreInspectionScreen
// Size: 0x838 (Inherited: 0x828)
struct UFortLlamaStoreInspectionScreen : UFortStoreFrontOfferDetailsWidgetBase {
	struct UCommonTileView* GrantedItemTileView; // 0x828(0x08)
	bool bIsInChoiceViewMode; // 0x830(0x01)
	char pad_831[0x7]; // 0x831(0x07)

	bool IsItemChoicePack(struct UObject* ItemToCheck); // Function SaveTheWorldUI.FortLlamaStoreInspectionScreen.IsItemChoicePack // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x68c6d14
	struct UFortCardPackItem* GetSelectedCardPack(); // Function SaveTheWorldUI.FortLlamaStoreInspectionScreen.GetSelectedCardPack // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x68c6c48
	enum class EInputActionState GetInspectChoiceInputState(); // Function SaveTheWorldUI.FortLlamaStoreInspectionScreen.GetInspectChoiceInputState // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x68c6990
};

// Class SaveTheWorldUI.FortOpenCardPackModal
// Size: 0x5a8 (Inherited: 0x568)
struct UFortOpenCardPackModal : UFortActivatablePanel {
	struct UCommonListView* CardPackList; // 0x568(0x08)
	struct UCommonButtonLegacy* OpenAllButton; // 0x570(0x08)
	struct UCommonButtonLegacy* CancelButton; // 0x578(0x08)
	struct FMulticastInlineDelegate BPOnRequestOpenCardPack; // 0x580(0x10)
	char pad_590[0x18]; // 0x590(0x18)
};

// Class SaveTheWorldUI.FortOutpostScreen
// Size: 0x2c8 (Inherited: 0x2c8)
struct UFortOutpostScreen : UFortUserWidget {

	void SetInputReflectorBoxVisibility(bool bShow); // Function SaveTheWorldUI.FortOutpostScreen.SetInputReflectorBoxVisibility // (Final|Native|Public|BlueprintCallable) // @ game+0x68c6fc0
};

// Class SaveTheWorldUI.FortProgressArrowButton
// Size: 0x1470 (Inherited: 0x1430)
struct UFortProgressArrowButton : UCommonButtonBase {
	struct FSlateColor ArrowColor; // 0x1430(0x14)
	struct FSlateColor HoverColor; // 0x1444(0x14)
	struct FSlateColor ShadowColor; // 0x1458(0x14)
	char pad_146C[0x4]; // 0x146c(0x04)

	void UpdateArrowColor(struct FSlateColor Color, struct FSlateColor HoverColor); // Function SaveTheWorldUI.FortProgressArrowButton.UpdateArrowColor // (Final|Native|Public|BlueprintCallable) // @ game+0x68c7314
	void OnShadowColorSet(); // Function SaveTheWorldUI.FortProgressArrowButton.OnShadowColorSet // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnIsInteractiveSet(bool bIsInteractive); // Function SaveTheWorldUI.FortProgressArrowButton.OnIsInteractiveSet // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnArrowColorSet(); // Function SaveTheWorldUI.FortProgressArrowButton.OnArrowColorSet // (Event|Public|BlueprintEvent) // @ game+0xd67374
};

// Class SaveTheWorldUI.FortProgressArrowButton_Legacy
// Size: 0x14c0 (Inherited: 0x1480)
struct UFortProgressArrowButton_Legacy : UCommonButtonLegacy {
	struct FSlateColor ArrowColor; // 0x1480(0x14)
	struct FSlateColor HoverColor; // 0x1494(0x14)
	struct FSlateColor ShadowColor; // 0x14a8(0x14)
	char pad_14BC[0x4]; // 0x14bc(0x04)

	void UpdateArrowColor(struct FSlateColor Color, struct FSlateColor HoverColor); // Function SaveTheWorldUI.FortProgressArrowButton_Legacy.UpdateArrowColor // (Final|Native|Public|BlueprintCallable) // @ game+0x68c7418
	void OnShadowColorSet(); // Function SaveTheWorldUI.FortProgressArrowButton_Legacy.OnShadowColorSet // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnIsInteractiveSet(bool bIsInteractive); // Function SaveTheWorldUI.FortProgressArrowButton_Legacy.OnIsInteractiveSet // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnArrowColorSet(); // Function SaveTheWorldUI.FortProgressArrowButton_Legacy.OnArrowColorSet // (Event|Public|BlueprintEvent) // @ game+0xd67374
};

// Class SaveTheWorldUI.FortQuestExpiresWidget
// Size: 0x2f0 (Inherited: 0x2e0)
struct UFortQuestExpiresWidget : UCommonUserWidget {
	struct TWeakObjectPtr<struct UFortQuestItem> Item; // 0x2e0(0x08)
	char pad_2E8[0x8]; // 0x2e8(0x08)

	void SetData(struct UFortQuestItem* InItem); // Function SaveTheWorldUI.FortQuestExpiresWidget.SetData // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x68be97c
	void OnQuestExpirationUpdated(); // Function SaveTheWorldUI.FortQuestExpiresWidget.OnQuestExpirationUpdated // (Native|Event|Protected|BlueprintEvent) // @ game+0x68bc17c
};

// Class SaveTheWorldUI.FortQuestMapCosmeticListWidget
// Size: 0x2f0 (Inherited: 0x2e0)
struct UFortQuestMapCosmeticListWidget : UCommonUserWidget {
	char pad_2E0[0x10]; // 0x2e0(0x10)

	void UpdateCosmeticListDisplay(); // Function SaveTheWorldUI.FortQuestMapCosmeticListWidget.UpdateCosmeticListDisplay // (Event|Public|BlueprintEvent) // @ game+0xd67374
	struct TArray<struct UFortItemDefinition*> GetDisplayItemDefs(); // Function SaveTheWorldUI.FortQuestMapCosmeticListWidget.GetDisplayItemDefs // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x68c68e0
};

// Class SaveTheWorldUI.FortQuestMapDetailsPanelBase
// Size: 0x2f8 (Inherited: 0x2e0)
struct UFortQuestMapDetailsPanelBase : UCommonUserWidget {
	struct AFortClientAnnouncement_Conversation* QuestConversationClass; // 0x2e0(0x08)
	float QuestUpdateDelayTime; // 0x2e8(0x04)
	char pad_2EC[0x4]; // 0x2ec(0x04)
	struct FTimerHandle QuestUpdateTimerHandle; // 0x2f0(0x08)

	void SetScrollWidget(); // Function SaveTheWorldUI.FortQuestMapDetailsPanelBase.SetScrollWidget // (Final|Native|Public|BlueprintCallable) // @ game+0x68bdd7c
	void SetQuestToDisplay(struct UFortQuestItemDefinition* QuestDef); // Function SaveTheWorldUI.FortQuestMapDetailsPanelBase.SetQuestToDisplay // (Final|Native|Public|BlueprintCallable) // @ game+0x67ea97c
	void HandleQuestsUpdatedInternal(); // Function SaveTheWorldUI.FortQuestMapDetailsPanelBase.HandleQuestsUpdatedInternal // (Final|Native|Private) // @ game+0x68c6cb8
};

// Class SaveTheWorldUI.FortQuestMapDetailsPanel
// Size: 0x3a8 (Inherited: 0x2f8)
struct UFortQuestMapDetailsPanel : UFortQuestMapDetailsPanelBase {
	struct FDataTableRowHandle PlayButtonTriggeringAction; // 0x2f8(0x10)
	struct TArray<struct UCommonActivatablePanelLegacy*> PriorityActivatablePanelClassList; // 0x308(0x10)
	struct UCommonBorderStyle* CurrentQuestBorder; // 0x318(0x08)
	struct UCommonBorderStyle* CompletedQuestBorder; // 0x320(0x08)
	struct UFortJournalQuestDetails* Panel_JournalDetails; // 0x328(0x08)
	struct UCommonTextBlock* Text_QuestTitle; // 0x330(0x08)
	struct UCommonTextBlock* Text_QuestDescription; // 0x338(0x08)
	struct UCommonTextBlock* Text_Header; // 0x340(0x08)
	struct UCommonTextBlock* Text_NotOwnedHeader; // 0x348(0x08)
	struct UCommonTextBlock* Text_InactiveQuestName; // 0x350(0x08)
	struct UImage* Image_QuestIcon; // 0x358(0x08)
	struct UCommonListView* List_Tasks; // 0x360(0x08)
	struct UCommonBorder* Border_Header; // 0x368(0x08)
	struct UWidgetSwitcher* Switcher_Body; // 0x370(0x08)
	struct UFortRewardInfoWidget* Widget_FutureQuestRewardInfo; // 0x378(0x08)
	struct UScrollBox* ScrollBox_Quest; // 0x380(0x08)
	struct UScrollBox* ScrollBox_NoQuest; // 0x388(0x08)
	struct TArray<struct UFortQuestObjectiveInfo*> VisibleObjectives; // 0x390(0x10)
	struct UFortQuestItem* CurrentQuestItem; // 0x3a0(0x08)
};

// Class SaveTheWorldUI.FortQuestMapEventCallout
// Size: 0x530 (Inherited: 0x3f8)
struct UFortQuestMapEventCallout : UCommonActivatableWidget {
	char pad_3F8[0x48]; // 0x3f8(0x48)
	struct UFortBangWrapper_NUI* BangWrapper_GoButton; // 0x440(0x08)
	struct UFortProgressArrowButton* Button_LeftNav; // 0x448(0x08)
	struct UFortProgressArrowButton* Button_RightNav; // 0x450(0x08)
	struct UCommonButtonBase* Button_SwitchMode; // 0x458(0x08)
	struct UFortQuestMapNewBangWrapper* BangWrapper_Arrow; // 0x460(0x08)
	struct UFortQuestMapEventSequence* Sequence_EventProgress; // 0x468(0x08)
	struct UHorizontalBox* HorizontalBox_NavButtons; // 0x470(0x08)
	struct UCommonTextBlock* Text_Header; // 0x478(0x08)
	struct UCommonTextBlock* Text_Body; // 0x480(0x08)
	struct UImage* Image_Callout; // 0x488(0x08)
	struct UFortBangWrapper_NUI* BangWrapper_UnHover; // 0x490(0x08)
	struct USoundBase* DefaultSound; // 0x498(0x08)
	struct UFortQuestItemDefinition* DefaultRequiredCompletedQuest; // 0x4a0(0x08)
	struct USoundBase* OverrideSound; // 0x4a8(0x08)
	struct UAudioComponent* SoundLoop; // 0x4b0(0x08)
	struct UFortQuestMapData* QuestMapData; // 0x4b8(0x08)
	char pad_4C0[0x70]; // 0x4c0(0x70)

	void UpdateGoButtonBangState(bool bClear); // Function SaveTheWorldUI.FortQuestMapEventCallout.UpdateGoButtonBangState // (Final|Native|Public|BlueprintCallable) // @ game+0x68c7544
	void UpdateCalloutData(); // Function SaveTheWorldUI.FortQuestMapEventCallout.UpdateCalloutData // (Final|Native|Public|BlueprintCallable) // @ game+0x68c751c
	void UpdateActiveEvents(); // Function SaveTheWorldUI.FortQuestMapEventCallout.UpdateActiveEvents // (Final|Native|Public|BlueprintCallable) // @ game+0x68c72ec
	void SetIsFaded(bool Faded); // Function SaveTheWorldUI.FortQuestMapEventCallout.SetIsFaded // (Final|Native|Public|BlueprintCallable) // @ game+0x68c7194
	void SetIsExpanded(bool Expanded); // Function SaveTheWorldUI.FortQuestMapEventCallout.SetIsExpanded // (Final|Native|Public|BlueprintCallable) // @ game+0x68c7094
	void ResetCallout(); // Function SaveTheWorldUI.FortQuestMapEventCallout.ResetCallout // (Final|Native|Public|BlueprintCallable) // @ game+0x68c6f98
	void PlayFadeOut(); // Function SaveTheWorldUI.FortQuestMapEventCallout.PlayFadeOut // (Final|Native|Public|BlueprintCallable) // @ game+0x68c6f40
	void PlayFadeIn(); // Function SaveTheWorldUI.FortQuestMapEventCallout.PlayFadeIn // (Final|Native|Public|BlueprintCallable) // @ game+0x68c6ee8
	void OnResetCallout(); // Function SaveTheWorldUI.FortQuestMapEventCallout.OnResetCallout // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnPlayFadeAnimation(bool bIsFadeOut); // Function SaveTheWorldUI.FortQuestMapEventCallout.OnPlayFadeAnimation // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnEventIndexChanged(); // Function SaveTheWorldUI.FortQuestMapEventCallout.OnEventIndexChanged // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnDeactivatePlayAnimation(); // Function SaveTheWorldUI.FortQuestMapEventCallout.OnDeactivatePlayAnimation // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnActivatePlayAnimation(); // Function SaveTheWorldUI.FortQuestMapEventCallout.OnActivatePlayAnimation // (Event|Public|BlueprintEvent) // @ game+0xd67374
	bool IsCurrentEventUnlocked(); // Function SaveTheWorldUI.FortQuestMapEventCallout.IsCurrentEventUnlocked // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x68c6ccc
	struct UFortQuestItemDefinition* GetRequiredQuestForCurrentEvent(); // Function SaveTheWorldUI.FortQuestMapEventCallout.GetRequiredQuestForCurrentEvent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x68c6bd0
	bool GetIsFaded(); // Function SaveTheWorldUI.FortQuestMapEventCallout.GetIsFaded // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x68c69e4
	bool GetIsExpanded(); // Function SaveTheWorldUI.FortQuestMapEventCallout.GetIsExpanded // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x68c69b4
	int32_t GetEventCount(); // Function SaveTheWorldUI.FortQuestMapEventCallout.GetEventCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x68c6960
	void DeactivateCallout(); // Function SaveTheWorldUI.FortQuestMapEventCallout.DeactivateCallout // (Final|Native|Public|BlueprintCallable) // @ game+0x68c68a0
};

// Class SaveTheWorldUI.FortQuestMapEventCallout_Legacy
// Size: 0x6a0 (Inherited: 0x568)
struct UFortQuestMapEventCallout_Legacy : UFortActivatablePanel {
	char pad_568[0x48]; // 0x568(0x48)
	struct UFortBangWrapper_NUI* BangWrapper_GoButton; // 0x5b0(0x08)
	struct UFortProgressArrowButton_Legacy* Button_LeftNav; // 0x5b8(0x08)
	struct UFortProgressArrowButton_Legacy* Button_RightNav; // 0x5c0(0x08)
	struct UCommonButtonLegacy* Button_SwitchMode; // 0x5c8(0x08)
	struct UFortQuestMapNewBangWrapper_Legacy* BangWrapper_Arrow; // 0x5d0(0x08)
	struct UFortQuestMapEventSequence* Sequence_EventProgress; // 0x5d8(0x08)
	struct UHorizontalBox* HorizontalBox_NavButtons; // 0x5e0(0x08)
	struct UCommonTextBlock* Text_Header; // 0x5e8(0x08)
	struct UCommonTextBlock* Text_Body; // 0x5f0(0x08)
	struct UImage* Image_Callout; // 0x5f8(0x08)
	struct UFortBangWrapper_NUI* BangWrapper_UnHover; // 0x600(0x08)
	struct USoundBase* DefaultSound; // 0x608(0x08)
	struct UFortQuestItemDefinition* DefaultRequiredCompletedQuest; // 0x610(0x08)
	struct USoundBase* OverrideSound; // 0x618(0x08)
	struct UAudioComponent* SoundLoop; // 0x620(0x08)
	struct UFortQuestMapData* QuestMapData; // 0x628(0x08)
	char pad_630[0x70]; // 0x630(0x70)

	void UpdateGoButtonBangState(bool bClear); // Function SaveTheWorldUI.FortQuestMapEventCallout_Legacy.UpdateGoButtonBangState // (Final|Native|Public|BlueprintCallable) // @ game+0x68c75e8
	void UpdateCalloutData(); // Function SaveTheWorldUI.FortQuestMapEventCallout_Legacy.UpdateCalloutData // (Final|Native|Public|BlueprintCallable) // @ game+0x68c7530
	void UpdateActiveEvents(); // Function SaveTheWorldUI.FortQuestMapEventCallout_Legacy.UpdateActiveEvents // (Final|Native|Public|BlueprintCallable) // @ game+0x68c7300
	void SetIsFaded(bool Faded); // Function SaveTheWorldUI.FortQuestMapEventCallout_Legacy.SetIsFaded // (Final|Native|Public|BlueprintCallable) // @ game+0x68c7214
	void SetIsExpanded(bool Expanded); // Function SaveTheWorldUI.FortQuestMapEventCallout_Legacy.SetIsExpanded // (Final|Native|Public|BlueprintCallable) // @ game+0x68c7114
	void ResetCallout(); // Function SaveTheWorldUI.FortQuestMapEventCallout_Legacy.ResetCallout // (Final|Native|Public|BlueprintCallable) // @ game+0x68c6fac
	void PlayFadeOut(); // Function SaveTheWorldUI.FortQuestMapEventCallout_Legacy.PlayFadeOut // (Final|Native|Public|BlueprintCallable) // @ game+0x68c6f6c
	void PlayFadeIn(); // Function SaveTheWorldUI.FortQuestMapEventCallout_Legacy.PlayFadeIn // (Final|Native|Public|BlueprintCallable) // @ game+0x68c6f14
	void OnResetCallout(); // Function SaveTheWorldUI.FortQuestMapEventCallout_Legacy.OnResetCallout // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnPlayFadeAnimation(bool bIsFadeOut); // Function SaveTheWorldUI.FortQuestMapEventCallout_Legacy.OnPlayFadeAnimation // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnEventIndexChanged(); // Function SaveTheWorldUI.FortQuestMapEventCallout_Legacy.OnEventIndexChanged // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnDeactivatePlayAnimation(); // Function SaveTheWorldUI.FortQuestMapEventCallout_Legacy.OnDeactivatePlayAnimation // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnActivatePlayAnimation(); // Function SaveTheWorldUI.FortQuestMapEventCallout_Legacy.OnActivatePlayAnimation // (Event|Public|BlueprintEvent) // @ game+0xd67374
	bool IsCurrentEventUnlocked(); // Function SaveTheWorldUI.FortQuestMapEventCallout_Legacy.IsCurrentEventUnlocked // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x68c6cf0
	struct UFortQuestItemDefinition* GetRequiredQuestForCurrentEvent(); // Function SaveTheWorldUI.FortQuestMapEventCallout_Legacy.GetRequiredQuestForCurrentEvent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x68c6c0c
	bool GetIsFaded(); // Function SaveTheWorldUI.FortQuestMapEventCallout_Legacy.GetIsFaded // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x68c69fc
	bool GetIsExpanded(); // Function SaveTheWorldUI.FortQuestMapEventCallout_Legacy.GetIsExpanded // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x68c69cc
	int32_t GetEventCount(); // Function SaveTheWorldUI.FortQuestMapEventCallout_Legacy.GetEventCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x68c6978
	void DeactivateCallout(); // Function SaveTheWorldUI.FortQuestMapEventCallout_Legacy.DeactivateCallout // (Final|Native|Public|BlueprintCallable) // @ game+0x68c68b4
};

// Class SaveTheWorldUI.FortQuestMapEventDetailsPanel
// Size: 0x390 (Inherited: 0x2f8)
struct UFortQuestMapEventDetailsPanel : UFortQuestMapDetailsPanelBase {
	struct UCommonBorderStyle* CurrentQuestBorder; // 0x2f8(0x08)
	struct UCommonBorderStyle* CompletedQuestBorder; // 0x300(0x08)
	struct UCommonBorderStyle* FutureQuestBorder; // 0x308(0x08)
	struct UVerticalBox* VBox_QuestContainer; // 0x310(0x08)
	struct UVerticalBox* VBox_CompletedQuestContainer; // 0x318(0x08)
	struct UCommonWidgetSwitcherLegacy* Switcher_Quests; // 0x320(0x08)
	struct UCommonBorder* Border_NextQuest; // 0x328(0x08)
	struct UCommonTextBlock* Text_QuestName; // 0x330(0x08)
	struct UCommonTextBlock* Text_QuestDescription; // 0x338(0x08)
	struct UCommonTextBlock* Text_Title; // 0x340(0x08)
	struct UCommonListView* List_Tasks; // 0x348(0x08)
	struct UImage* Image_QuestIcon; // 0x350(0x08)
	struct UScrollBox* ScrollBox_SideBar; // 0x358(0x08)
	struct UDataTable* EventQuestTable; // 0x360(0x08)
	struct UFortQuestMapEventSideEntry* SideBarEntryClass; // 0x368(0x08)
	struct UFortQuestItemDefinition* UnlockEventQuestDefinition; // 0x370(0x08)
	struct UFortQuestItemDefinition* CurrentQuestDef; // 0x378(0x08)
	struct TArray<struct UFortQuestObjectiveInfo*> VisibleObjectives; // 0x380(0x10)
};

// Class SaveTheWorldUI.FortQuestMapEventDetailsPanel_Legacy
// Size: 0x390 (Inherited: 0x2f8)
struct UFortQuestMapEventDetailsPanel_Legacy : UFortQuestMapDetailsPanelBase {
	struct UCommonBorderStyle* CurrentQuestBorder; // 0x2f8(0x08)
	struct UCommonBorderStyle* CompletedQuestBorder; // 0x300(0x08)
	struct UCommonBorderStyle* FutureQuestBorder; // 0x308(0x08)
	struct UVerticalBox* VBox_QuestContainer; // 0x310(0x08)
	struct UVerticalBox* VBox_CompletedQuestContainer; // 0x318(0x08)
	struct UCommonWidgetSwitcherLegacy* Switcher_Quests; // 0x320(0x08)
	struct UCommonBorder* Border_NextQuest; // 0x328(0x08)
	struct UCommonTextBlock* Text_QuestName; // 0x330(0x08)
	struct UCommonTextBlock* Text_QuestDescription; // 0x338(0x08)
	struct UCommonTextBlock* Text_Title; // 0x340(0x08)
	struct UCommonListView* List_Tasks; // 0x348(0x08)
	struct UImage* Image_QuestIcon; // 0x350(0x08)
	struct UScrollBox* ScrollBox_SideBar; // 0x358(0x08)
	struct UDataTable* EventQuestTable; // 0x360(0x08)
	struct UFortQuestMapEventSideEntry* SideBarEntryClass; // 0x368(0x08)
	struct UFortQuestItemDefinition* UnlockEventQuestDefinition; // 0x370(0x08)
	struct UFortQuestItemDefinition* CurrentQuestDef; // 0x378(0x08)
	struct TArray<struct UFortQuestObjectiveInfo*> VisibleObjectives; // 0x380(0x10)
};

// Class SaveTheWorldUI.FortQuestMapEventDot
// Size: 0x2e8 (Inherited: 0x2e0)
struct UFortQuestMapEventDot : UCommonUserWidget {
	struct UImage* Image_ActiveDot; // 0x2e0(0x08)
};

// Class SaveTheWorldUI.FortQuestMapEventSequence
// Size: 0x2f8 (Inherited: 0x2e0)
struct UFortQuestMapEventSequence : UCommonUserWidget {
	struct UHorizontalBox* HorizontalBox_DotBox; // 0x2e0(0x08)
	struct UFortQuestMapEventDot* DotWidgetClass; // 0x2e8(0x08)
	char pad_2F0[0x8]; // 0x2f0(0x08)
};

// Class SaveTheWorldUI.FortQuestMapEventSideEntry
// Size: 0x350 (Inherited: 0x2e0)
struct UFortQuestMapEventSideEntry : UCommonUserWidget {
	struct UCommonWidgetSwitcherLegacy* Switcher_Rewards; // 0x2e0(0x08)
	struct UCommonListView* List_SideTasks; // 0x2e8(0x08)
	struct UCommonTextBlock* Text_SideQuestTitle; // 0x2f0(0x08)
	struct UImage* Image_Arrow; // 0x2f8(0x08)
	struct UImage* Image_QuestComplete; // 0x300(0x08)
	struct FMargin RewardPadding; // 0x308(0x10)
	struct UFortQuestItemDefinition* CurrentQuestItemDef; // 0x318(0x08)
	struct UFortQuestItem* CurrentQuestItem; // 0x320(0x08)
	struct TArray<struct UCommonWidgetSwitcherLegacy*> RewardSwitchers; // 0x328(0x10)
	struct FTimerHandle RewardAnimationTimer; // 0x338(0x08)
	struct TArray<struct UFortQuestObjectiveInfo*> SideQuestObjectives; // 0x340(0x10)
};

// Class SaveTheWorldUI.FortQuestMapNewBangWrapper
// Size: 0x308 (Inherited: 0x2f8)
struct UFortQuestMapNewBangWrapper : UFortBangWrapper_NUI {
	struct UCommonAnimatedSwitcher* Switcher_Bangs; // 0x2f8(0x08)
	char pad_300[0x8]; // 0x300(0x08)
};

// Class SaveTheWorldUI.FortQuestMapNewBangWrapper_Legacy
// Size: 0x308 (Inherited: 0x2f8)
struct UFortQuestMapNewBangWrapper_Legacy : UFortBangWrapper_NUI {
	struct UCommonWidgetSwitcherLegacy* Switcher_Bangs; // 0x2f8(0x08)
	char pad_300[0x8]; // 0x300(0x08)
};

// Class SaveTheWorldUI.FortQuestMapNodeLayout
// Size: 0x320 (Inherited: 0x2b8)
struct UFortQuestMapNodeLayout : UUserWidget {
	struct UPanelWidget* Panel_NodeLayout; // 0x2b8(0x08)
	struct UCommonButtonLegacy* ButtonPrevious; // 0x2c0(0x08)
	struct UCommonButtonLegacy* ButtonNext; // 0x2c8(0x08)
	struct USizeBox* StartArrow; // 0x2d0(0x08)
	struct USizeBox* EndArrow; // 0x2d8(0x08)
	struct UCommonButtonGroupLegacy* QuestButtonGroup; // 0x2e0(0x08)
	struct UFortQuestMapScreen* ParentScreen; // 0x2e8(0x08)
	char pad_2F0[0x30]; // 0x2f0(0x30)

	void HandleQuestIndexSelectionModelIndexChanged(); // Function SaveTheWorldUI.FortQuestMapNodeLayout.HandleQuestIndexSelectionModelIndexChanged // (Final|Native|Private) // @ game+0x68c7cd0
	void HandleQuestButtonSelected(struct UCommonButtonLegacy* SelectedQuestButton, int32_t ButtonIndex); // Function SaveTheWorldUI.FortQuestMapNodeLayout.HandleQuestButtonSelected // (Final|Native|Private) // @ game+0x68c7bbc
};

// Class SaveTheWorldUI.FortQuestMapNodeLayout_Legacy
// Size: 0x320 (Inherited: 0x2b8)
struct UFortQuestMapNodeLayout_Legacy : UUserWidget {
	struct UPanelWidget* Panel_NodeLayout; // 0x2b8(0x08)
	struct UCommonButtonLegacy* ButtonPrevious; // 0x2c0(0x08)
	struct UCommonButtonLegacy* ButtonNext; // 0x2c8(0x08)
	struct USizeBox* StartArrow; // 0x2d0(0x08)
	struct USizeBox* EndArrow; // 0x2d8(0x08)
	struct UCommonButtonGroupLegacy* QuestButtonGroup; // 0x2e0(0x08)
	struct UFortQuestMapScreen_Legacy* ParentScreen; // 0x2e8(0x08)
	char pad_2F0[0x30]; // 0x2f0(0x30)

	void HandleQuestIndexSelectionModelIndexChanged(); // Function SaveTheWorldUI.FortQuestMapNodeLayout_Legacy.HandleQuestIndexSelectionModelIndexChanged // (Final|Native|Private) // @ game+0x68c7cd0
	void HandleQuestButtonSelected(struct UCommonButtonLegacy* SelectedQuestButton, int32_t ButtonIndex); // Function SaveTheWorldUI.FortQuestMapNodeLayout_Legacy.HandleQuestButtonSelected // (Final|Native|Private) // @ game+0x68c7bbc
};

// Class SaveTheWorldUI.FortQuestMapQuestTile
// Size: 0x300 (Inherited: 0x2e0)
struct UFortQuestMapQuestTile : UCommonUserWidget {
	struct UCommonButtonLegacy* QuestButton; // 0x2e0(0x08)
	struct FFortQuestMapNode QuestNodeData; // 0x2e8(0x18)

	void HandleSelectedChange(bool Selected); // Function SaveTheWorldUI.FortQuestMapQuestTile.HandleSelectedChange // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void HandleQuestDataChangedBP(); // Function SaveTheWorldUI.FortQuestMapQuestTile.HandleQuestDataChangedBP // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void GetQuestNodeData(struct UFortQuestItemDefinition*& QuestItemDefinition, struct FFortQuestMapNode& NodeData); // Function SaveTheWorldUI.FortQuestMapQuestTile.GetQuestNodeData // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x68c78f4
};

// Class SaveTheWorldUI.FortQuestMapQuestTile_Legacy
// Size: 0x300 (Inherited: 0x2e0)
struct UFortQuestMapQuestTile_Legacy : UCommonUserWidget {
	struct UCommonButtonLegacy* QuestButton; // 0x2e0(0x08)
	struct FFortQuestMapNode QuestNodeData; // 0x2e8(0x18)

	void HandleSelectedChange(bool Selected); // Function SaveTheWorldUI.FortQuestMapQuestTile_Legacy.HandleSelectedChange // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void HandleQuestDataChangedBP(); // Function SaveTheWorldUI.FortQuestMapQuestTile_Legacy.HandleQuestDataChangedBP // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void GetQuestNodeData(struct UFortQuestItemDefinition*& QuestItemDefinition, struct FFortQuestMapNode& NodeData); // Function SaveTheWorldUI.FortQuestMapQuestTile_Legacy.GetQuestNodeData // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x68c78f4
};

// Class SaveTheWorldUI.FortQuestMapScreen
// Size: 0x598 (Inherited: 0x530)
struct UFortQuestMapScreen : UCommonActivatablePanelLegacy {
	struct UFortQuestMapDetailsPanelBase* CampaignDetailsPanel; // 0x530(0x08)
	struct UFortQuestMapDetailsPanelBase* EventDetailsPanel; // 0x538(0x08)
	struct UFortQuestMapEventCallout* EventCalloutPanel; // 0x540(0x08)
	struct UFortQuestMapViewer* QuestMapViewer; // 0x548(0x08)
	enum class EQuestMapScreenMode CurrentMode; // 0x550(0x01)
	bool bEventsActive; // 0x551(0x01)
	char pad_552[0x6]; // 0x552(0x06)
	struct UFortQuestMapDataAsset* CampaignQuestMapDataTable; // 0x558(0x08)
	struct UFortQuestItemDefinition* CutoffQuest; // 0x560(0x08)
	struct UFortQuestMapDataAsset* CurrentQuestMapDataTable; // 0x568(0x08)
	char pad_570[0x28]; // 0x570(0x28)

	void UpdateQuestMapMode(enum class EQuestMapScreenMode QuestMapMode); // Function SaveTheWorldUI.FortQuestMapScreen.UpdateQuestMapMode // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void ToggleQuestMapState(); // Function SaveTheWorldUI.FortQuestMapScreen.ToggleQuestMapState // (Final|Native|Public|BlueprintCallable) // @ game+0x68c81e8
	void SetQuestMapViewer(struct UFortQuestMapViewer* Value); // Function SaveTheWorldUI.FortQuestMapScreen.SetQuestMapViewer // (Final|Native|Public|BlueprintCallable) // @ game+0x68c80e8
	void SetIgnorePageNavigation(bool bIgnoreNavigation); // Function SaveTheWorldUI.FortQuestMapScreen.SetIgnorePageNavigation // (Final|Native|Public|BlueprintCallable) // @ game+0x68c8058
	void SetFindCurrentActionVisibility(enum class EInputActionState ActionVisibility); // Function SaveTheWorldUI.FortQuestMapScreen.SetFindCurrentActionVisibility // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void SetBeyondCutoffQuest(bool bBeyondCutoff); // Function SaveTheWorldUI.FortQuestMapScreen.SetBeyondCutoffQuest // (Final|Native|Public|BlueprintCallable) // @ game+0x68c7f28
	void OnEventCalloutExpandChanged(); // Function SaveTheWorldUI.FortQuestMapScreen.OnEventCalloutExpandChanged // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnEventCalloutButtonClicked(); // Function SaveTheWorldUI.FortQuestMapScreen.OnEventCalloutButtonClicked // (Event|Public|BlueprintEvent) // @ game+0xd67374
	bool IsEventFlagActive(struct FString EventFlag); // Function SaveTheWorldUI.FortQuestMapScreen.IsEventFlagActive // (Final|Native|Public|BlueprintCallable) // @ game+0x68c7dc4
	bool IsBeyondQuest(struct UFortQuestItemDefinition* QuestDef); // Function SaveTheWorldUI.FortQuestMapScreen.IsBeyondQuest // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x68c7d34
	void InitializeQuestData(); // Function SaveTheWorldUI.FortQuestMapScreen.InitializeQuestData // (Final|Native|Public|BlueprintCallable) // @ game+0x68c7d0c
	void HandleRequestCurrentQuestNavigation(); // Function SaveTheWorldUI.FortQuestMapScreen.HandleRequestCurrentQuestNavigation // (Final|Native|Public|BlueprintCallable) // @ game+0x68c7ce4
	void HandleQuestPageChanged(); // Function SaveTheWorldUI.FortQuestMapScreen.HandleQuestPageChanged // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void HandleQuestIndexSelectionModelChanged(); // Function SaveTheWorldUI.FortQuestMapScreen.HandleQuestIndexSelectionModelChanged // (Final|Native|Private) // @ game+0x68c7c80
	void HandleQuestDetailsUpdated(struct UFortQuestItem* QuestDefinition); // Function SaveTheWorldUI.FortQuestMapScreen.HandleQuestDetailsUpdated // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void HandleMapViewerNavigationRequest(enum class EViewerNavigationDirection Direction); // Function SaveTheWorldUI.FortQuestMapScreen.HandleMapViewerNavigationRequest // (Final|Native|Public|BlueprintCallable) // @ game+0x68c7abc
	void HandleMapModeSwitch(); // Function SaveTheWorldUI.FortQuestMapScreen.HandleMapModeSwitch // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void HandleEventQuestMapActivate(); // Function SaveTheWorldUI.FortQuestMapScreen.HandleEventQuestMapActivate // (Final|Native|Public|BlueprintCallable) // @ game+0x68c7a18
	void HandleEventCalloutDataChangedBP(); // Function SaveTheWorldUI.FortQuestMapScreen.HandleEventCalloutDataChangedBP // (Event|Public|BlueprintEvent) // @ game+0xd67374
	enum class EFrontEndCamera GetCurrentPageCameraMode(); // Function SaveTheWorldUI.FortQuestMapScreen.GetCurrentPageCameraMode // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x68c78c4
	bool GetBeyondCutoffQuest(); // Function SaveTheWorldUI.FortQuestMapScreen.GetBeyondCutoffQuest // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x68c78ac
	void CheckForNewMainQuest(); // Function SaveTheWorldUI.FortQuestMapScreen.CheckForNewMainQuest // (Final|Native|Public|BlueprintCallable) // @ game+0x68c7804
};

// Class SaveTheWorldUI.FortQuestMapScreen_Legacy
// Size: 0x598 (Inherited: 0x530)
struct UFortQuestMapScreen_Legacy : UCommonActivatablePanelLegacy {
	struct UFortQuestMapDetailsPanelBase* CampaignDetailsPanel; // 0x530(0x08)
	struct UFortQuestMapDetailsPanelBase* EventDetailsPanel; // 0x538(0x08)
	struct UFortQuestMapEventCallout_Legacy* EventCalloutPanel; // 0x540(0x08)
	struct UFortQuestMapViewer_Legacy* QuestMapViewer; // 0x548(0x08)
	enum class EQuestMapScreenMode CurrentMode; // 0x550(0x01)
	bool bEventsActive; // 0x551(0x01)
	char pad_552[0x6]; // 0x552(0x06)
	struct UFortQuestMapDataAsset* CampaignQuestMapDataTable; // 0x558(0x08)
	struct UFortQuestItemDefinition* CutoffQuest; // 0x560(0x08)
	struct UFortQuestMapDataAsset* CurrentQuestMapDataTable; // 0x568(0x08)
	char pad_570[0x28]; // 0x570(0x28)

	void UpdateQuestMapMode(enum class EQuestMapScreenMode QuestMapMode); // Function SaveTheWorldUI.FortQuestMapScreen_Legacy.UpdateQuestMapMode // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void ToggleQuestMapState(); // Function SaveTheWorldUI.FortQuestMapScreen_Legacy.ToggleQuestMapState // (Final|Native|Public|BlueprintCallable) // @ game+0x68c8208
	void SetQuestMapViewer(struct UFortQuestMapViewer_Legacy* Value); // Function SaveTheWorldUI.FortQuestMapScreen_Legacy.SetQuestMapViewer // (Final|Native|Public|BlueprintCallable) // @ game+0x68c8168
	void SetIgnorePageNavigation(bool bIgnoreNavigation); // Function SaveTheWorldUI.FortQuestMapScreen_Legacy.SetIgnorePageNavigation // (Final|Native|Public|BlueprintCallable) // @ game+0x68c8058
	void SetFindCurrentActionVisibility(enum class EInputActionState ActionVisibility); // Function SaveTheWorldUI.FortQuestMapScreen_Legacy.SetFindCurrentActionVisibility // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void SetBeyondCutoffQuest(bool bBeyondCutoff); // Function SaveTheWorldUI.FortQuestMapScreen_Legacy.SetBeyondCutoffQuest // (Final|Native|Public|BlueprintCallable) // @ game+0x68c7fc0
	void OnEventCalloutExpandChanged(); // Function SaveTheWorldUI.FortQuestMapScreen_Legacy.OnEventCalloutExpandChanged // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnEventCalloutButtonClicked(); // Function SaveTheWorldUI.FortQuestMapScreen_Legacy.OnEventCalloutButtonClicked // (Event|Public|BlueprintEvent) // @ game+0xd67374
	bool IsEventFlagActive(struct FString EventFlag); // Function SaveTheWorldUI.FortQuestMapScreen_Legacy.IsEventFlagActive // (Final|Native|Public|BlueprintCallable) // @ game+0x68c7dc4
	bool IsBeyondQuest(struct UFortQuestItemDefinition* QuestDef); // Function SaveTheWorldUI.FortQuestMapScreen_Legacy.IsBeyondQuest // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x68c7d34
	void InitializeQuestData(); // Function SaveTheWorldUI.FortQuestMapScreen_Legacy.InitializeQuestData // (Final|Native|Public|BlueprintCallable) // @ game+0x68c7d20
	void HandleRequestCurrentQuestNavigation(); // Function SaveTheWorldUI.FortQuestMapScreen_Legacy.HandleRequestCurrentQuestNavigation // (Final|Native|Public|BlueprintCallable) // @ game+0x68c7cf8
	void HandleQuestPageChanged(); // Function SaveTheWorldUI.FortQuestMapScreen_Legacy.HandleQuestPageChanged // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void HandleQuestIndexSelectionModelChanged(); // Function SaveTheWorldUI.FortQuestMapScreen_Legacy.HandleQuestIndexSelectionModelChanged // (Final|Native|Private) // @ game+0x68c7ca8
	void HandleQuestDetailsUpdated(struct UFortQuestItem* QuestDefinition); // Function SaveTheWorldUI.FortQuestMapScreen_Legacy.HandleQuestDetailsUpdated // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void HandleMapViewerNavigationRequest(enum class EViewerNavigationDirection Direction); // Function SaveTheWorldUI.FortQuestMapScreen_Legacy.HandleMapViewerNavigationRequest // (Final|Native|Public|BlueprintCallable) // @ game+0x68c7b3c
	void HandleMapModeSwitch(); // Function SaveTheWorldUI.FortQuestMapScreen_Legacy.HandleMapModeSwitch // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void HandleEventQuestMapActivate(); // Function SaveTheWorldUI.FortQuestMapScreen_Legacy.HandleEventQuestMapActivate // (Final|Native|Public|BlueprintCallable) // @ game+0x68c7a2c
	void HandleEventCalloutDataChangedBP(); // Function SaveTheWorldUI.FortQuestMapScreen_Legacy.HandleEventCalloutDataChangedBP // (Event|Public|BlueprintEvent) // @ game+0xd67374
	enum class EFrontEndCamera GetCurrentPageCameraMode(); // Function SaveTheWorldUI.FortQuestMapScreen_Legacy.GetCurrentPageCameraMode // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x68c78c4
	bool GetBeyondCutoffQuest(); // Function SaveTheWorldUI.FortQuestMapScreen_Legacy.GetBeyondCutoffQuest // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x68c78ac
	void CheckForNewMainQuest(); // Function SaveTheWorldUI.FortQuestMapScreen_Legacy.CheckForNewMainQuest // (Final|Native|Public|BlueprintCallable) // @ game+0x68c7858
};

// Class SaveTheWorldUI.FortQuestMapViewer
// Size: 0x360 (Inherited: 0x2e0)
struct UFortQuestMapViewer : UCommonUserWidget {
	char pad_2E0[0x10]; // 0x2e0(0x10)
	struct UCommonButtonLegacy* Button_PageRight; // 0x2f0(0x08)
	struct UCommonButtonLegacy* Button_PageLeft; // 0x2f8(0x08)
	struct UCommonTextBlock* Text_Title; // 0x300(0x08)
	struct UCommonTextBlock* Text_Page; // 0x308(0x08)
	struct USizeBox* SizeBox_Viewer; // 0x310(0x08)
	struct UCanvasPanel* CanvasPanel_Cosmetic; // 0x318(0x08)
	struct UFortQuestMapScreen* ParentScreen; // 0x320(0x08)
	struct UFortQuestMapNodeLayout* NodeLayout; // 0x328(0x08)
	char pad_330[0x30]; // 0x330(0x30)

	void UpdateViewerData(); // Function SaveTheWorldUI.FortQuestMapViewer.UpdateViewerData // (Final|Native|Public|BlueprintCallable) // @ game+0x68c8228
	void OnTryUpdateUserWidgetColor(struct UUserWidget* Widget, struct FSlateColor OverrideColor); // Function SaveTheWorldUI.FortQuestMapViewer.OnTryUpdateUserWidgetColor // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnPlayLayoutOutroAnimation(enum class EViewerNavigationDirection TravelDirection); // Function SaveTheWorldUI.FortQuestMapViewer.OnPlayLayoutOutroAnimation // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnPlayLayoutFadeInAnimation(); // Function SaveTheWorldUI.FortQuestMapViewer.OnPlayLayoutFadeInAnimation // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void HandleLayoutOutroAnimationFinished(); // Function SaveTheWorldUI.FortQuestMapViewer.HandleLayoutOutroAnimationFinished // (Final|Native|Public|BlueprintCallable) // @ game+0x68c7a40
};

// Class SaveTheWorldUI.FortQuestMapViewer_Legacy
// Size: 0x360 (Inherited: 0x2e0)
struct UFortQuestMapViewer_Legacy : UCommonUserWidget {
	char pad_2E0[0x10]; // 0x2e0(0x10)
	struct UCommonButtonLegacy* Button_PageRight; // 0x2f0(0x08)
	struct UCommonButtonLegacy* Button_PageLeft; // 0x2f8(0x08)
	struct UCommonTextBlock* Text_Title; // 0x300(0x08)
	struct UCommonTextBlock* Text_Page; // 0x308(0x08)
	struct USizeBox* SizeBox_Viewer; // 0x310(0x08)
	struct UCanvasPanel* CanvasPanel_Cosmetic; // 0x318(0x08)
	struct UFortQuestMapScreen_Legacy* ParentScreen; // 0x320(0x08)
	struct UFortQuestMapNodeLayout_Legacy* NodeLayout; // 0x328(0x08)
	char pad_330[0x30]; // 0x330(0x30)

	void UpdateViewerData(); // Function SaveTheWorldUI.FortQuestMapViewer_Legacy.UpdateViewerData // (Final|Native|Public|BlueprintCallable) // @ game+0x68cb0b0
	void OnTryUpdateUserWidgetColor(struct UUserWidget* Widget, struct FSlateColor OverrideColor); // Function SaveTheWorldUI.FortQuestMapViewer_Legacy.OnTryUpdateUserWidgetColor // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnPlayLayoutOutroAnimation(enum class EViewerNavigationDirection TravelDirection); // Function SaveTheWorldUI.FortQuestMapViewer_Legacy.OnPlayLayoutOutroAnimation // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnPlayLayoutFadeInAnimation(); // Function SaveTheWorldUI.FortQuestMapViewer_Legacy.OnPlayLayoutFadeInAnimation // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void HandleLayoutOutroAnimationFinished(); // Function SaveTheWorldUI.FortQuestMapViewer_Legacy.HandleLayoutOutroAnimationFinished // (Final|Native|Public|BlueprintCallable) // @ game+0x68c9b84
};

// Class SaveTheWorldUI.FortQuestPlayButton
// Size: 0x2e8 (Inherited: 0x2e0)
struct UFortQuestPlayButton : UCommonUserWidget {
	struct UFortQuestItem* QuestItem; // 0x2e0(0x08)

	void OnContentMissing(); // Function SaveTheWorldUI.FortQuestPlayButton.OnContentMissing // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void HandlePlayerStateChanged(); // Function SaveTheWorldUI.FortQuestPlayButton.HandlePlayerStateChanged // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void HandleMatchmakingStarted(); // Function SaveTheWorldUI.FortQuestPlayButton.HandleMatchmakingStarted // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void HandleMatchmakingComplete(enum class EMatchmakingCompleteResult Result); // Function SaveTheWorldUI.FortQuestPlayButton.HandleMatchmakingComplete // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void HandleLobbyDisconnected(); // Function SaveTheWorldUI.FortQuestPlayButton.HandleLobbyDisconnected // (Event|Public|BlueprintEvent) // @ game+0xd67374
	bool CanPlayQuest(); // Function SaveTheWorldUI.FortQuestPlayButton.CanPlayQuest // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x68c8d90
	bool CanNavigateToQuestObjective(); // Function SaveTheWorldUI.FortQuestPlayButton.CanNavigateToQuestObjective // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x68c8d6c
	void AttemptToPlayQuest(); // Function SaveTheWorldUI.FortQuestPlayButton.AttemptToPlayQuest // (Final|Native|Public|BlueprintCallable) // @ game+0x68c8d0c
};

// Class SaveTheWorldUI.FortQuestTreeItemWidget
// Size: 0x1490 (Inherited: 0x1480)
struct UFortQuestTreeItemWidget : UCommonButtonLegacy {
	char pad_1480[0x8]; // 0x1480(0x08)
	struct TWeakObjectPtr<struct UObject> QuestOrCategory; // 0x1488(0x08)

	void SetupAsQuest(struct UFortQuestItem* category); // Function SaveTheWorldUI.FortQuestTreeItemWidget.SetupAsQuest // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void SetupAsCategory(struct UFortQuestCategory* category); // Function SaveTheWorldUI.FortQuestTreeItemWidget.SetupAsCategory // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnQuestsUpdated(); // Function SaveTheWorldUI.FortQuestTreeItemWidget.OnQuestsUpdated // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void HandleQuestsUpdated(); // Function SaveTheWorldUI.FortQuestTreeItemWidget.HandleQuestsUpdated // (Final|Native|Protected) // @ game+0x68c9ef8
};

// Class SaveTheWorldUI.FortResearchMenuBase
// Size: 0x570 (Inherited: 0x568)
struct UFortResearchMenuBase : UFortActivatablePanel {
	struct UFortItemDefinition* ResearchRespecToken; // 0x568(0x08)

	void UseResearchRespecToken(); // Function SaveTheWorldUI.FortResearchMenuBase.UseResearchRespecToken // (Final|Native|Protected|BlueprintCallable) // @ game+0x68cb0c4
	void RequestPurchaseResearchLevel(struct FString StatId); // Function SaveTheWorldUI.FortResearchMenuBase.RequestPurchaseResearchLevel // (Final|Native|Protected|BlueprintCallable) // @ game+0x68ca9f8
	void OnUseResearchRespecTokenComplete(); // Function SaveTheWorldUI.FortResearchMenuBase.OnUseResearchRespecTokenComplete // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnPurchaseResearchLevelStarted(); // Function SaveTheWorldUI.FortResearchMenuBase.OnPurchaseResearchLevelStarted // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnPurchaseResearchLevelCompleted(); // Function SaveTheWorldUI.FortResearchMenuBase.OnPurchaseResearchLevelCompleted // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	int32_t GetResearchRespecTokenCount(); // Function SaveTheWorldUI.FortResearchMenuBase.GetResearchRespecTokenCount // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x68c9a24
	int32_t GetClaimableResearchPointEstimate(); // Function SaveTheWorldUI.FortResearchMenuBase.GetClaimableResearchPointEstimate // (Final|Native|Protected|BlueprintCallable) // @ game+0x68c9564
	bool AreResearchRespecTokensAvailable(); // Function SaveTheWorldUI.FortResearchMenuBase.AreResearchRespecTokensAvailable // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x68c8ce4
};

// Class SaveTheWorldUI.FortResearchStatTileWidget
// Size: 0x2f8 (Inherited: 0x2b8)
struct UFortResearchStatTileWidget : UUserWidget {
	struct UFortStatItemDefinition* PersonalStatItemDefinition; // 0x2b8(0x08)
	struct UFortStatItemDefinition* TeamStatItemDefinition; // 0x2c0(0x08)
	struct FName StatCostCurveName; // 0x2c8(0x04)
	struct FName StatPersonalDeltaCurveName; // 0x2cc(0x04)
	struct FName StatPersonalCumulativeCurveName; // 0x2d0(0x04)
	struct FName StatTeamDeltaCurveName; // 0x2d4(0x04)
	struct FName StatTeamCumulativeCurveName; // 0x2d8(0x04)
	char pad_2DC[0x1c]; // 0x2dc(0x1c)

	void OnStatChanged(); // Function SaveTheWorldUI.FortResearchStatTileWidget.OnStatChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	bool IsAtMaxResearchLevel(); // Function SaveTheWorldUI.FortResearchStatTileWidget.IsAtMaxResearchLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x68ca0cc
	struct FString GetStatIdName(); // Function SaveTheWorldUI.FortResearchStatTileWidget.GetStatIdName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x68c9a48
	enum class EFortStatType GetPersonalStatType(); // Function SaveTheWorldUI.FortResearchStatTileWidget.GetPersonalStatType // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x68c9a04
	int32_t GetNextTeamStatValueDelta(); // Function SaveTheWorldUI.FortResearchStatTileWidget.GetNextTeamStatValueDelta // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x68c99e0
	int32_t GetNextPersonalStatValueDelta(); // Function SaveTheWorldUI.FortResearchStatTileWidget.GetNextPersonalStatValueDelta // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x68c99bc
	int32_t GetNextCombinedStatValueDelta(); // Function SaveTheWorldUI.FortResearchStatTileWidget.GetNextCombinedStatValueDelta // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x68c9974
	int32_t GetCurrentTeamStatValue(); // Function SaveTheWorldUI.FortResearchStatTileWidget.GetCurrentTeamStatValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x68c9650
	int32_t GetCurrentResearchLevel(); // Function SaveTheWorldUI.FortResearchStatTileWidget.GetCurrentResearchLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x68c68c8
	int32_t GetCurrentPersonalStatValue(); // Function SaveTheWorldUI.FortResearchStatTileWidget.GetCurrentPersonalStatValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x68c961c
	int32_t GetCurrentCombinedStatValue(); // Function SaveTheWorldUI.FortResearchStatTileWidget.GetCurrentCombinedStatValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x68c95bc
	int32_t GetCostToIncreaseStat(); // Function SaveTheWorldUI.FortResearchStatTileWidget.GetCostToIncreaseStat // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x68c9588
};

// Class SaveTheWorldUI.FortRewardNotificationData
// Size: 0x30 (Inherited: 0x28)
struct UFortRewardNotificationData : UObject {
	enum class EFrontEndRewardType RewardType; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)

	bool GetIconBrush(struct FSlateBrush& IconBrush, enum class EFortBrushSize BrushSize); // Function SaveTheWorldUI.FortRewardNotificationData.GetIconBrush // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x68c986c
};

// Class SaveTheWorldUI.FortRewardCollectionBookData
// Size: 0x90 (Inherited: 0x30)
struct UFortRewardCollectionBookData : UFortRewardNotificationData {
	struct FFortCollectionBookRewards CollectionBookRewards; // 0x30(0x60)
};

// Class SaveTheWorldUI.FortRewardNotificationSubWidget
// Size: 0x308 (Inherited: 0x2e0)
struct UFortRewardNotificationSubWidget : UCommonUserWidget {
	struct FMulticastInlineDelegate OnTransitionInComplete; // 0x2e0(0x10)
	struct FMulticastInlineDelegate OnTransitionOutComplete; // 0x2f0(0x10)
	char pad_300[0x8]; // 0x300(0x08)

	void TransitionOutBegin(); // Function SaveTheWorldUI.FortRewardNotificationSubWidget.TransitionOutBegin // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void TransitionOut(); // Function SaveTheWorldUI.FortRewardNotificationSubWidget.TransitionOut // (Final|Native|Public|BlueprintCallable) // @ game+0x68cb09c
	void TransitionInBegin(); // Function SaveTheWorldUI.FortRewardNotificationSubWidget.TransitionInBegin // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void TransitionIn(); // Function SaveTheWorldUI.FortRewardNotificationSubWidget.TransitionIn // (Final|Native|Public|BlueprintCallable) // @ game+0x68cb088
	void SetPrimaryActionText(struct FText Text); // Function SaveTheWorldUI.FortRewardNotificationSubWidget.SetPrimaryActionText // (Final|Native|Protected|BlueprintCallable) // @ game+0x68caed4
	void SetPrimaryActionHidden(); // Function SaveTheWorldUI.FortRewardNotificationSubWidget.SetPrimaryActionHidden // (Final|Native|Protected|BlueprintCallable) // @ game+0x68cae20
	void SetPrimaryActionEnabled(bool bEnabled); // Function SaveTheWorldUI.FortRewardNotificationSubWidget.SetPrimaryActionEnabled // (Final|Native|Protected|BlueprintCallable) // @ game+0x68cad1c
	void SetInputActionHandlerState(struct UDataTable* DataTable, struct FName RowName, enum class EInputActionState State); // Function SaveTheWorldUI.FortRewardNotificationSubWidget.SetInputActionHandlerState // (Final|Native|Protected|BlueprintCallable) // @ game+0x68cac0c
	void RemoveInputActionHandler(struct FDataTableRowHandle InputActionRow); // Function SaveTheWorldUI.FortRewardNotificationSubWidget.RemoveInputActionHandler // (Final|Native|Protected|BlueprintCallable) // @ game+0x68ca948
	void RemoveAllInputActionHandlers(); // Function SaveTheWorldUI.FortRewardNotificationSubWidget.RemoveAllInputActionHandlers // (Final|Native|Protected|BlueprintCallable) // @ game+0x68ca92c
	void OnPrimaryAction(); // Function SaveTheWorldUI.FortRewardNotificationSubWidget.OnPrimaryAction // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnNavigationUp(); // Function SaveTheWorldUI.FortRewardNotificationSubWidget.OnNavigationUp // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnNavigationRight(); // Function SaveTheWorldUI.FortRewardNotificationSubWidget.OnNavigationRight // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnNavigationLeft(); // Function SaveTheWorldUI.FortRewardNotificationSubWidget.OnNavigationLeft // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnNavigationDown(); // Function SaveTheWorldUI.FortRewardNotificationSubWidget.OnNavigationDown // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnDeactivated(); // Function SaveTheWorldUI.FortRewardNotificationSubWidget.OnDeactivated // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnActivated(); // Function SaveTheWorldUI.FortRewardNotificationSubWidget.OnActivated // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void IsPrimaryActionHidden(bool& bHidden); // Function SaveTheWorldUI.FortRewardNotificationSubWidget.IsPrimaryActionHidden // (Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x68ca0e4
	void IsPrimaryActionEnabled(bool& bEnabled); // Function SaveTheWorldUI.FortRewardNotificationSubWidget.IsPrimaryActionEnabled // (Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x68ca0e4
	void InspectItem(struct UFortItem* ItemToInspect, int32_t QuantityOverride); // Function SaveTheWorldUI.FortRewardNotificationSubWidget.InspectItem // (Final|Native|Protected|BlueprintCallable) // @ game+0x68c9fdc
	void Init(struct UFortRewardNotificationWidget* MainWidget); // Function SaveTheWorldUI.FortRewardNotificationSubWidget.Init // (Final|Native|Public|BlueprintCallable) // @ game+0x68c9f5c
	void AddInputActionHandler(struct UDataTable* DataTable, struct FName RowName, struct FDelegate CommittedEvent); // Function SaveTheWorldUI.FortRewardNotificationSubWidget.AddInputActionHandler // (Final|Native|Protected|BlueprintCallable) // @ game+0x68c891c
};

// Class SaveTheWorldUI.FortRewardConversationWidget
// Size: 0x308 (Inherited: 0x308)
struct UFortRewardConversationWidget : UFortRewardNotificationSubWidget {

	bool IsValidConversation(struct UFortConversation* Conversation); // Function SaveTheWorldUI.FortRewardConversationWidget.IsValidConversation // (Final|Native|Public|BlueprintCallable) // @ game+0x68ca290
	void GetDataFromSentence(struct FFortConversationSentence& Sentence, struct FText& Text, struct UTexture2D*& TalkingHeadTexture); // Function SaveTheWorldUI.FortRewardConversationWidget.GetDataFromSentence // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x68c9684
};

// Class SaveTheWorldUI.FortRewardDifficultyIncrease
// Size: 0x30 (Inherited: 0x30)
struct UFortRewardDifficultyIncrease : UFortRewardNotificationData {
};

// Class SaveTheWorldUI.FortRewardEpicQuestData
// Size: 0x38 (Inherited: 0x30)
struct UFortRewardEpicQuestData : UFortRewardNotificationData {
	struct UFortQuestItem* Quest; // 0x30(0x08)
};

// Class SaveTheWorldUI.FortRewardExpeditionData
// Size: 0x38 (Inherited: 0x30)
struct UFortRewardExpeditionData : UFortRewardNotificationData {
	struct UFortExpeditionItem* Expedition; // 0x30(0x08)
};

// Class SaveTheWorldUI.FortRewardExpeditionWidget
// Size: 0x370 (Inherited: 0x308)
struct UFortRewardExpeditionWidget : UFortRewardNotificationSubWidget {
	struct FMulticastInlineDelegate OnMcpError; // 0x308(0x10)
	char pad_318[0x58]; // 0x318(0x58)

	void OnCollectExpeditionCompleted(struct UFortExpeditionItem* Expedition, bool bSucceeded, struct TArray<struct FFortItemInstanceQuantityPair>& Rewards); // Function SaveTheWorldUI.FortRewardExpeditionWidget.OnCollectExpeditionCompleted // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void CollectExpedition(struct UFortExpeditionItem* Expedition); // Function SaveTheWorldUI.FortRewardExpeditionWidget.CollectExpedition // (Final|Native|Public|BlueprintCallable) // @ game+0x68c8db4
};

// Class SaveTheWorldUI.FortRewardGiftBoxData
// Size: 0x38 (Inherited: 0x30)
struct UFortRewardGiftBoxData : UFortRewardNotificationData {
	struct UFortGiftBoxItem* GiftBox; // 0x30(0x08)
};

// Class SaveTheWorldUI.FortRewardItemCacheData
// Size: 0x38 (Inherited: 0x30)
struct UFortRewardItemCacheData : UFortRewardNotificationData {
	struct UFortItem* ItemCache; // 0x30(0x08)
};

// Class SaveTheWorldUI.FortRewardMissionAlertData
// Size: 0x30 (Inherited: 0x30)
struct UFortRewardMissionAlertData : UFortRewardNotificationData {
};

// Class SaveTheWorldUI.FortRewardMissionData
// Size: 0x30 (Inherited: 0x30)
struct UFortRewardMissionData : UFortRewardNotificationData {
};

// Class SaveTheWorldUI.FortRewardNewQuestWidget
// Size: 0x308 (Inherited: 0x308)
struct UFortRewardNewQuestWidget : UFortRewardNotificationSubWidget {

	bool IsValidConversation(struct UFortConversation* Conversation); // Function SaveTheWorldUI.FortRewardNewQuestWidget.IsValidConversation // (Final|Native|Public|BlueprintCallable) // @ game+0x68ca290
	void GetDataFromSentence(struct FFortConversationSentence& Sentence, struct FText& Text, struct UTexture2D*& TalkingHeadTexture); // Function SaveTheWorldUI.FortRewardNewQuestWidget.GetDataFromSentence // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x68c9684
};

// Class SaveTheWorldUI.FortRewardNotificationWidget
// Size: 0x620 (Inherited: 0x530)
struct UFortRewardNotificationWidget : UCommonActivatablePanelLegacy {
	char pad_530[0x8]; // 0x530(0x08)
	struct TArray<struct UFortRewardNotificationData*> NotificationDataList; // 0x538(0x10)
	char pad_548[0x10]; // 0x548(0x10)
	struct UOverlay* OverlayMain; // 0x558(0x08)
	struct FFortSwipeDetector SwipeDetector; // 0x560(0x90)
	char pad_5F0[0x20]; // 0x5f0(0x20)
	struct UFortMulchConfirmationModalWidget* MulchConfirmationModalClass; // 0x610(0x08)
	struct UFortMulchConfirmationModalWidget* MulchConfirmationModal; // 0x618(0x08)

	void ShowMulchConfirmationModal(); // Function SaveTheWorldUI.FortRewardNotificationWidget.ShowMulchConfirmationModal // (Native|Public|BlueprintCallable) // @ game+0x68cb06c
	void SetPrimaryActionText(struct FText Text); // Function SaveTheWorldUI.FortRewardNotificationWidget.SetPrimaryActionText // (Final|Native|Public|BlueprintCallable) // @ game+0x68cafd0
	void SetPrimaryActionHidden(); // Function SaveTheWorldUI.FortRewardNotificationWidget.SetPrimaryActionHidden // (Final|Native|Public|BlueprintCallable) // @ game+0x68cae7c
	void SetPrimaryActionEnabled(bool bEnabled); // Function SaveTheWorldUI.FortRewardNotificationWidget.SetPrimaryActionEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x68cada0
	void ResetAllRewardData(); // Function SaveTheWorldUI.FortRewardNotificationWidget.ResetAllRewardData // (Final|Native|Protected|BlueprintCallable) // @ game+0x68cabdc
	void PopulateReward(struct UFortRewardNotificationData* Reward); // Function SaveTheWorldUI.FortRewardNotificationWidget.PopulateReward // (Final|Native|Protected|BlueprintCallable) // @ game+0x68ca3fc
	void OnRewardsScreenClosed(); // Function SaveTheWorldUI.FortRewardNotificationWidget.OnRewardsScreenClosed // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnRewardsClaimFailed(); // Function SaveTheWorldUI.FortRewardNotificationWidget.OnRewardsClaimFailed // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnRewardsClaimed(struct TArray<struct FFortItemInstanceQuantityPair>& ItemList); // Function SaveTheWorldUI.FortRewardNotificationWidget.OnRewardsClaimed // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void OnPrimaryActionTextChanged(struct FText& Text); // Function SaveTheWorldUI.FortRewardNotificationWidget.OnPrimaryActionTextChanged // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void OnPrimaryActionHidden(); // Function SaveTheWorldUI.FortRewardNotificationWidget.OnPrimaryActionHidden // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnPrimaryActionEnabled(); // Function SaveTheWorldUI.FortRewardNotificationWidget.OnPrimaryActionEnabled // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnPrimaryActionDisabled(); // Function SaveTheWorldUI.FortRewardNotificationWidget.OnPrimaryActionDisabled // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnPopulateNewQuestReward(struct UFortRewardEpicQuestData* QuestReward); // Function SaveTheWorldUI.FortRewardNotificationWidget.OnPopulateNewQuestReward // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnPopulateGiftBoxReward(struct UFortRewardGiftBoxData* GiftBoxReward); // Function SaveTheWorldUI.FortRewardNotificationWidget.OnPopulateGiftBoxReward // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnPopulateExpeditionReward(struct UFortRewardExpeditionData* ExpeditionReward); // Function SaveTheWorldUI.FortRewardNotificationWidget.OnPopulateExpeditionReward // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnPopulateChoiceRewards(struct TArray<struct FFortItemInstanceQuantityPair>& ItemList); // Function SaveTheWorldUI.FortRewardNotificationWidget.OnPopulateChoiceRewards // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void OnNavigationUp(); // Function SaveTheWorldUI.FortRewardNotificationWidget.OnNavigationUp // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnNavigationRight(); // Function SaveTheWorldUI.FortRewardNotificationWidget.OnNavigationRight // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnNavigationLeft(); // Function SaveTheWorldUI.FortRewardNotificationWidget.OnNavigationLeft // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnNavigationDown(); // Function SaveTheWorldUI.FortRewardNotificationWidget.OnNavigationDown // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnMulchCompleted(); // Function SaveTheWorldUI.FortRewardNotificationWidget.OnMulchCompleted // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void NotifyPanelDeactivated(); // Function SaveTheWorldUI.FortRewardNotificationWidget.NotifyPanelDeactivated // (Native|Protected|BlueprintCallable) // @ game+0x68ca3e0
	void NotifyPanelActivated(); // Function SaveTheWorldUI.FortRewardNotificationWidget.NotifyPanelActivated // (Native|Protected|BlueprintCallable) // @ game+0x68ca3c4
	void MarkDefaultItemsForMulch(struct TArray<struct FFortItemInstanceQuantityPair> ItemList); // Function SaveTheWorldUI.FortRewardNotificationWidget.MarkDefaultItemsForMulch // (Final|Native|Protected|BlueprintCallable) // @ game+0x68ca318
	void IsPrimaryActionHidden(bool& bHidden); // Function SaveTheWorldUI.FortRewardNotificationWidget.IsPrimaryActionHidden // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x68ca204
	void IsPrimaryActionEnabled(bool& bEnabled); // Function SaveTheWorldUI.FortRewardNotificationWidget.IsPrimaryActionEnabled // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x68ca178
	void InspectItem(struct UFortItem* ItemToInspect, int32_t QuantityOverride); // Function SaveTheWorldUI.FortRewardNotificationWidget.InspectItem // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void HideMulchConfirmationModal(); // Function SaveTheWorldUI.FortRewardNotificationWidget.HideMulchConfirmationModal // (Native|Public|BlueprintCallable) // @ game+0x68c9f40
	void HandleOnQuestRewardClaimed(struct UFortQuestItem* Quest, struct TArray<struct FFortItemInstanceQuantityPair>& Rewards); // Function SaveTheWorldUI.FortRewardNotificationWidget.HandleOnQuestRewardClaimed // (Final|Native|Private|HasOutParms) // @ game+0x68c9e14
	void HandleOnNoQuestRewardsToClaim(); // Function SaveTheWorldUI.FortRewardNotificationWidget.HandleOnNoQuestRewardsToClaim // (Final|Native|Private) // @ game+0x68c9d64
	void HandleOnMissionRewardsOpenFailed(); // Function SaveTheWorldUI.FortRewardNotificationWidget.HandleOnMissionRewardsOpenFailed // (Final|Native|Private) // @ game+0x68c9d64
	void HandleOnMissionRewardsOpened(struct TArray<struct FFortItemInstanceQuantityPair>& MissionRewards); // Function SaveTheWorldUI.FortRewardNotificationWidget.HandleOnMissionRewardsOpened // (Final|Native|Private|HasOutParms) // @ game+0x68c9d78
	void HandleOnMissionAlertRewardsOpened(struct TArray<struct FFortItemInstanceQuantityPair>& AlertRewards); // Function SaveTheWorldUI.FortRewardNotificationWidget.HandleOnMissionAlertRewardsOpened // (Final|Native|Private|HasOutParms) // @ game+0x68c9d78
	void HandleOnItemCacheRewardsClaimFailed(); // Function SaveTheWorldUI.FortRewardNotificationWidget.HandleOnItemCacheRewardsClaimFailed // (Final|Native|Private) // @ game+0x68c9d64
	void HandleOnItemCacheRewardsClaimed(struct TArray<struct FFortItemInstanceQuantityPair>& ClaimedRewards); // Function SaveTheWorldUI.FortRewardNotificationWidget.HandleOnItemCacheRewardsClaimed // (Final|Native|Private|HasOutParms) // @ game+0x68c9d78
	void HandleOnDifficultyIncreaseRewardsClaimFailed(); // Function SaveTheWorldUI.FortRewardNotificationWidget.HandleOnDifficultyIncreaseRewardsClaimFailed // (Final|Native|Private) // @ game+0x68c9d64
	void HandleOnDifficultyIncreaseRewardsClaimed(struct TArray<struct FFortItemInstanceQuantityPair>& DifficultyRewards); // Function SaveTheWorldUI.FortRewardNotificationWidget.HandleOnDifficultyIncreaseRewardsClaimed // (Final|Native|Private|HasOutParms) // @ game+0x68c9d78
	void HandleOnCollectionBookRewardClaimed(struct FFortCollectionBookRewards RewardClaimed, bool bSuccess, struct TArray<struct FFortItemInstanceQuantityPair>& ActualRewards); // Function SaveTheWorldUI.FortRewardNotificationWidget.HandleOnCollectionBookRewardClaimed // (Final|Native|Private|HasOutParms) // @ game+0x68c9c00
	void BeginCloseRewardsScreen(); // Function SaveTheWorldUI.FortRewardNotificationWidget.BeginCloseRewardsScreen // (Final|Native|Public|BlueprintCallable) // @ game+0x68c8d20
	void AddQuestData(struct UFortQuestItem* Quest); // Function SaveTheWorldUI.FortRewardNotificationWidget.AddQuestData // (Final|Native|Protected|BlueprintCallable) // @ game+0x68c8c2c
	void AddPhoenixLevelUpRewardData(); // Function SaveTheWorldUI.FortRewardNotificationWidget.AddPhoenixLevelUpRewardData // (Final|Native|Protected|BlueprintCallable) // @ game+0x68c8c18
	void AddMissionData(); // Function SaveTheWorldUI.FortRewardNotificationWidget.AddMissionData // (Final|Native|Protected|BlueprintCallable) // @ game+0x68c8ba4
	void AddMissionAlertData(); // Function SaveTheWorldUI.FortRewardNotificationWidget.AddMissionAlertData // (Final|Native|Protected|BlueprintCallable) // @ game+0x68c8b30
	void AddItemCacheRewardData(struct UFortItem* ItemCache); // Function SaveTheWorldUI.FortRewardNotificationWidget.AddItemCacheRewardData // (Final|Native|Protected|BlueprintCallable) // @ game+0x68c8a78
	void AddGiftBoxData(); // Function SaveTheWorldUI.FortRewardNotificationWidget.AddGiftBoxData // (Final|Native|Protected|BlueprintCallable) // @ game+0x68c88a8
	void AddExpeditionData(struct UFortExpeditionItem* ExpeditionItem); // Function SaveTheWorldUI.FortRewardNotificationWidget.AddExpeditionData // (Final|Native|Protected|BlueprintCallable) // @ game+0x68c87f0
	void AddEpicQuestData(struct UFortQuestItem* Quest); // Function SaveTheWorldUI.FortRewardNotificationWidget.AddEpicQuestData // (Final|Native|Protected|BlueprintCallable) // @ game+0x68c8738
	void AddDifficultyIncreaseRewardData(); // Function SaveTheWorldUI.FortRewardNotificationWidget.AddDifficultyIncreaseRewardData // (Final|Native|Protected|BlueprintCallable) // @ game+0x68c86c4
	void AddCollectionBookData(struct FFortCollectionBookRewards& CollectionBookRewards); // Function SaveTheWorldUI.FortRewardNotificationWidget.AddCollectionBookData // (Final|Native|Protected|HasOutParms|BlueprintCallable) // @ game+0x68c85a0
};

// Class SaveTheWorldUI.FortRewardPhoenixLevelUpData
// Size: 0x48 (Inherited: 0x30)
struct UFortRewardPhoenixLevelUpData : UFortRewardNotificationData {
	int32_t PhoenixLevel; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct TArray<struct FFortItemInstanceQuantityPair> Rewards; // 0x38(0x10)
};

// Class SaveTheWorldUI.FortRewardQuestData
// Size: 0x38 (Inherited: 0x30)
struct UFortRewardQuestData : UFortRewardNotificationData {
	struct UFortQuestItem* Quest; // 0x30(0x08)
};

// Class SaveTheWorldUI.FortRootViewportLayout_STW
// Size: 0x410 (Inherited: 0x408)
struct UFortRootViewportLayout_STW : UFortRootViewportLayout {
	struct UTalkingHead* TalkingHead; // 0x408(0x08)
};

// Class SaveTheWorldUI.FortSquadIcon
// Size: 0x2f0 (Inherited: 0x2e0)
struct UFortSquadIcon : UCommonUserWidget {
	struct FName Name; // 0x2e0(0x04)
	enum class EFortBrushSize ImageSize; // 0x2e4(0x01)
	char pad_2E5[0x3]; // 0x2e5(0x03)
	struct UImage* Icon; // 0x2e8(0x08)

	void SetSquad(struct FName& InName); // Function SaveTheWorldUI.FortSquadIcon.SetSquad // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x68ccd94
	void HandleDifferentSquadSetBP(); // Function SaveTheWorldUI.FortSquadIcon.HandleDifferentSquadSetBP // (Event|Protected|BlueprintEvent) // @ game+0xd67374
};

// Class SaveTheWorldUI.FortSquadLandingPageDefenderSquadDetails
// Size: 0x2f0 (Inherited: 0x2e0)
struct UFortSquadLandingPageDefenderSquadDetails : UCommonUserWidget {
	struct UCommonTextBlock* OutpostName; // 0x2e0(0x08)
	struct UCommonNumericTextBlock* PowerRating; // 0x2e8(0x08)

	void SetDefenderSquadInfo(struct FFortLandingPageDefenderSummaryInfo& DefenderSummaryInfo); // Function SaveTheWorldUI.FortSquadLandingPageDefenderSquadDetails.SetDefenderSquadInfo // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x68cc748
	void HandleDefenderSquadInfoSetBP(struct FFortLandingPageDefenderSummaryInfo& DefenderSummaryInfo); // Function SaveTheWorldUI.FortSquadLandingPageDefenderSquadDetails.HandleDefenderSquadInfoSetBP // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void HandleAddDefenderSquadMemberBP(struct FName& SquadId, int32_t Index); // Function SaveTheWorldUI.FortSquadLandingPageDefenderSquadDetails.HandleAddDefenderSquadMemberBP // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
};

// Class SaveTheWorldUI.FortSquadLandingPageDefenderSquadDetailsLocked
// Size: 0x2e8 (Inherited: 0x2e0)
struct UFortSquadLandingPageDefenderSquadDetailsLocked : UCommonUserWidget {
	struct UCommonTextBlock* OutpostName; // 0x2e0(0x08)

	void SetDefenderSquadInfo(struct FFortLandingPageDefenderSummaryInfo& DefenderSummaryInfo); // Function SaveTheWorldUI.FortSquadLandingPageDefenderSquadDetailsLocked.SetDefenderSquadInfo // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x68cc81c
};

// Class SaveTheWorldUI.FortSquadLandingPageDefenderSummary
// Size: 0x2e8 (Inherited: 0x2e0)
struct UFortSquadLandingPageDefenderSummary : UCommonUserWidget {
	char pad_2E0[0x8]; // 0x2e0(0x08)

	void HandleClearDefenderSquadDetailsBP(); // Function SaveTheWorldUI.FortSquadLandingPageDefenderSummary.HandleClearDefenderSquadDetailsBP // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void HandleAddLockedDefenderSquadDetailsBP(struct FFortLandingPageDefenderSummaryInfo DefenderSummaryInfo); // Function SaveTheWorldUI.FortSquadLandingPageDefenderSummary.HandleAddLockedDefenderSquadDetailsBP // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void HandleAddDefenderSquadDetailsBP(struct FFortLandingPageDefenderSummaryInfo DefenderSummaryInfo); // Function SaveTheWorldUI.FortSquadLandingPageDefenderSummary.HandleAddDefenderSquadDetailsBP // (Event|Public|BlueprintEvent) // @ game+0xd67374
};

// Class SaveTheWorldUI.FortSquadLandingPageSurvivorSummary
// Size: 0x368 (Inherited: 0x2e0)
struct UFortSquadLandingPageSurvivorSummary : UCommonUserWidget {
	struct UFortSquadStatValueWithIcon* FortitudeStatValue; // 0x2e0(0x08)
	struct UFortSquadStatValueWithIcon* OffenseStatValue; // 0x2e8(0x08)
	struct UFortSquadStatValueWithIcon* ResistanceStatValue; // 0x2f0(0x08)
	struct UFortSquadStatValueWithIcon* TechStatValue; // 0x2f8(0x08)
	char pad_300[0x68]; // 0x300(0x68)

	void HandleClearSetBonusSummaryLineItemsBP(); // Function SaveTheWorldUI.FortSquadLandingPageSurvivorSummary.HandleClearSetBonusSummaryLineItemsBP // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void HandleAddSetBonusSummaryLineItemBP(struct FFortAttributeModifierAccumulation AttributeModifierAccumulation); // Function SaveTheWorldUI.FortSquadLandingPageSurvivorSummary.HandleAddSetBonusSummaryLineItemBP // (Event|Public|BlueprintEvent) // @ game+0xd67374
};

// Class SaveTheWorldUI.FortSquadManagementItemViewContextBase
// Size: 0xf8 (Inherited: 0x28)
struct UFortSquadManagementItemViewContextBase : UObject {
	char pad_28[0xd0]; // 0x28(0xd0)
};

// Class SaveTheWorldUI.FortItemViewContext_SquadSlotsView
// Size: 0x100 (Inherited: 0xf8)
struct UFortItemViewContext_SquadSlotsView : UFortSquadManagementItemViewContextBase {
	char pad_F8[0x8]; // 0xf8(0x08)
};

// Class SaveTheWorldUI.FortItemViewContext_SquadSlotItemPicker
// Size: 0x100 (Inherited: 0xf8)
struct UFortItemViewContext_SquadSlotItemPicker : UFortSquadManagementItemViewContextBase {
	char pad_F8[0x8]; // 0xf8(0x08)
};

// Class SaveTheWorldUI.FortItemViewContext_ExpeditionSquadSlotsView
// Size: 0x108 (Inherited: 0x100)
struct UFortItemViewContext_ExpeditionSquadSlotsView : UFortItemViewContext_SquadSlotsView {
	char pad_100[0x8]; // 0x100(0x08)
};

// Class SaveTheWorldUI.FortItemViewContext_ExpeditionSquadSlotItemPicker
// Size: 0x108 (Inherited: 0x100)
struct UFortItemViewContext_ExpeditionSquadSlotItemPicker : UFortItemViewContext_SquadSlotItemPicker {
	char pad_100[0x8]; // 0x100(0x08)
};

// Class SaveTheWorldUI.FortSquadSlotDetailsPanel
// Size: 0x338 (Inherited: 0x2e0)
struct UFortSquadSlotDetailsPanel : UCommonUserWidget {
	char pad_2E0[0x20]; // 0x2e0(0x20)
	struct UFortSquadSlotItemDetailsHostPanel* ItemDetailsPanel; // 0x300(0x08)
	struct TScriptInterface<IFortItemViewContextInterface> ItemViewContext; // 0x308(0x10)
	char pad_318[0x20]; // 0x318(0x20)

	bool TryGetItemToPreviewInSlot(struct UFortItem*& OutItemToPreviewInSlot); // Function SaveTheWorldUI.FortSquadSlotDetailsPanel.TryGetItemToPreviewInSlot // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x68ccf88
	void SetScrollWidget(); // Function SaveTheWorldUI.FortSquadSlotDetailsPanel.SetScrollWidget // (Final|Native|Public|BlueprintCallable) // @ game+0x68cccc0
	void SetIdOfSquadSlotToManageBP(struct FName& SquadId, int32_t SquadSlotIndex); // Function SaveTheWorldUI.FortSquadSlotDetailsPanel.SetIdOfSquadSlotToManageBP // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x68cc8f0
	bool IsSquadSlotLockedBP(); // Function SaveTheWorldUI.FortSquadSlotDetailsPanel.IsSquadSlotLockedBP // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x68cc54c
	void HandleSquadSlotStateChangedBP(); // Function SaveTheWorldUI.FortSquadSlotDetailsPanel.HandleSquadSlotStateChangedBP // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void HandleSquadSlotRestrictionFactorsChangedBP(); // Function SaveTheWorldUI.FortSquadSlotDetailsPanel.HandleSquadSlotRestrictionFactorsChangedBP // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void HandleDifferentSquadSlotSetBP(); // Function SaveTheWorldUI.FortSquadSlotDetailsPanel.HandleDifferentSquadSlotSetBP // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	struct TArray<enum class EFortSquadSlottingRestrictionReason> GetSlottingRestrictionReasons(); // Function SaveTheWorldUI.FortSquadSlotDetailsPanel.GetSlottingRestrictionReasons // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x68cc090
	struct UFortItem* GetItemInSquadSlotBP(struct ULocalPlayer* LocalPlayer); // Function SaveTheWorldUI.FortSquadSlotDetailsPanel.GetItemInSquadSlotBP // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x68cbe6c
	void GetIdOfSquadSlotToManageBP(struct FName& OutSquadId, int32_t& OutSquadSlotIndex); // Function SaveTheWorldUI.FortSquadSlotDetailsPanel.GetIdOfSquadSlotToManageBP // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x68cbae4
};

// Class SaveTheWorldUI.FortSquadSlotItemDetailElementWidget
// Size: 0x358 (Inherited: 0x338)
struct UFortSquadSlotItemDetailElementWidget : UFortItemDetailElementWidget {
	char pad_338[0x20]; // 0x338(0x20)

	void SetIdOfSquadSlotToManageBP(struct FName& SquadId, int32_t SquadSlotIndex); // Function SaveTheWorldUI.FortSquadSlotItemDetailElementWidget.SetIdOfSquadSlotToManageBP // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x68cc9c0
	bool IsSquadSlotLockedBP(); // Function SaveTheWorldUI.FortSquadSlotItemDetailElementWidget.IsSquadSlotLockedBP // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x68cc590
	void HandlePostDifferentSquadSlotSetBP(); // Function SaveTheWorldUI.FortSquadSlotItemDetailElementWidget.HandlePostDifferentSquadSlotSetBP // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	struct UFortItem* GetItemInSquadSlotBP(struct ULocalPlayer* LocalPlayer); // Function SaveTheWorldUI.FortSquadSlotItemDetailElementWidget.GetItemInSquadSlotBP // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x68cbf24
	void GetIdOfSquadSlotToManageBP(struct FName& OutSquadId, int32_t& OutSquadSlotIndex); // Function SaveTheWorldUI.FortSquadSlotItemDetailElementWidget.GetIdOfSquadSlotToManageBP // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x68cbbc0
};

// Class SaveTheWorldUI.FortSquadSlotItemDetailsHostPanel
// Size: 0x3d8 (Inherited: 0x3b8)
struct UFortSquadSlotItemDetailsHostPanel : UFortItemDetailsHostPanel {
	char pad_3B8[0x20]; // 0x3b8(0x20)

	void SetIdOfSquadSlotToManageBP(struct FName& SquadId, int32_t SquadSlotIndex); // Function SaveTheWorldUI.FortSquadSlotItemDetailsHostPanel.SetIdOfSquadSlotToManageBP // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x68cca90
	bool IsSquadSlotLockedBP(); // Function SaveTheWorldUI.FortSquadSlotItemDetailsHostPanel.IsSquadSlotLockedBP // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x68cc5d4
	struct UFortItem* GetItemInSquadSlotBP(struct ULocalPlayer* LocalPlayer); // Function SaveTheWorldUI.FortSquadSlotItemDetailsHostPanel.GetItemInSquadSlotBP // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x68cbfc8
	void GetIdOfSquadSlotToManageBP(struct FName& OutSquadId, int32_t& OutSquadSlotIndex); // Function SaveTheWorldUI.FortSquadSlotItemDetailsHostPanel.GetIdOfSquadSlotToManageBP // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x68cbc9c
};

// Class SaveTheWorldUI.FortSquadSlotItemPicker
// Size: 0x4e8 (Inherited: 0x420)
struct UFortSquadSlotItemPicker : UFortItemPickerBase {
	char pad_420[0x38]; // 0x420(0x38)
	struct FMulticastInlineDelegate OnSortChanged; // 0x458(0x10)
	char pad_468[0x80]; // 0x468(0x80)

	void SetSortTypes(struct FSquadSlotSortTypes SquadSlotSortTypes); // Function SaveTheWorldUI.FortSquadSlotItemPicker.SetSortTypes // (Final|Native|Public|BlueprintCallable) // @ game+0x68ccce8
	void SetIdOfSquadSlotToManageBP(struct FName& SquadId, int32_t SquadSlotIndex); // Function SaveTheWorldUI.FortSquadSlotItemPicker.SetIdOfSquadSlotToManageBP // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x68ccb60
	void GetIdOfSquadSlotToManageBP(struct FName& OutSquadId, int32_t& OutSquadSlotIndex); // Function SaveTheWorldUI.FortSquadSlotItemPicker.GetIdOfSquadSlotToManageBP // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x68cbd78
	void FortSquadSlotSortChanged__DelegateSignature(enum class ESquadSlotSortType CurrentSortType, enum class ESquadSlotType SquadSlotType); // DelegateFunction SaveTheWorldUI.FortSquadSlotItemPicker.FortSquadSlotSortChanged__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0xd67374
	void CycleSortType(); // Function SaveTheWorldUI.FortSquadSlotItemPicker.CycleSortType // (Final|Native|Public|BlueprintCallable) // @ game+0x68cbad0
};

// Class SaveTheWorldUI.FortSquadSlotItemPickerTileButton
// Size: 0x14d0 (Inherited: 0x14c0)
struct UFortSquadSlotItemPickerTileButton : UFortItemTileButton {
	char pad_14C0[0x10]; // 0x14c0(0x10)

	void HandleSlottingRestrictionReasonsChanged(); // Function SaveTheWorldUI.FortSquadSlotItemPickerTileButton.HandleSlottingRestrictionReasonsChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void HandleItemSlottedToDifferentSquad(struct FHomebaseSquadSlotId& SquadSlotId); // Function SaveTheWorldUI.FortSquadSlotItemPickerTileButton.HandleItemSlottedToDifferentSquad // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
	struct TArray<enum class EFortSquadSlottingRestrictionReason> GetSlottingRestrictionReasons(); // Function SaveTheWorldUI.FortSquadSlotItemPickerTileButton.GetSlottingRestrictionReasons // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x68cdaf8
};

// Class SaveTheWorldUI.FortSquadSlotSelectorPopupMenu
// Size: 0x558 (Inherited: 0x550)
struct UFortSquadSlotSelectorPopupMenu : UFortPopupMenu {
	bool bReadOnlyModeWIFE; // 0x550(0x01)
	char pad_551[0x7]; // 0x551(0x07)

	bool IsScreenWIFE(); // Function SaveTheWorldUI.FortSquadSlotSelectorPopupMenu.IsScreenWIFE // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x68cc4e0
	struct UFortSquadSlotSelectorButton* GetHostButton(); // Function SaveTheWorldUI.FortSquadSlotSelectorPopupMenu.GetHostButton // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x68cd700
};

// Class SaveTheWorldUI.FortSquadSlotSurvivorTraitMatchesDetailWidget
// Size: 0x380 (Inherited: 0x358)
struct UFortSquadSlotSurvivorTraitMatchesDetailWidget : UFortSquadSlotItemDetailElementWidget {
	bool IsSquadLeaderSlot; // 0x358(0x01)
	bool LeaderMatchesSquadType; // 0x359(0x01)
	char pad_35A[0x2]; // 0x35a(0x02)
	int32_t SubordinatePersonalityMatchCount; // 0x35c(0x04)
	bool MatchesLeaderPersonality; // 0x360(0x01)
	char pad_361[0x3]; // 0x361(0x03)
	int32_t MatchingSetBonusCount; // 0x364(0x04)
	int32_t SetBonusSize; // 0x368(0x04)
	char pad_36C[0x14]; // 0x36c(0x14)

	void HandleTraitValuesUpdatedBP(); // Function SaveTheWorldUI.FortSquadSlotSurvivorTraitMatchesDetailWidget.HandleTraitValuesUpdatedBP // (Event|Protected|BlueprintEvent) // @ game+0xd67374
};

// Class SaveTheWorldUI.FortSquadSlotSelectorButton
// Size: 0x1500 (Inherited: 0x1480)
struct UFortSquadSlotSelectorButton : UCommonButtonLegacy {
	char pad_1480[0x20]; // 0x1480(0x20)
	struct FMulticastInlineDelegate OnRequestOpenSquadSlotEvent; // 0x14a0(0x10)
	struct FMulticastInlineDelegate OnRequestViewInAllEvent; // 0x14b0(0x10)
	struct UFortSquadSlotWidget* SquadSlotWidget; // 0x14c0(0x08)
	struct UMenuAnchor* PopupMenuAnchor; // 0x14c8(0x08)
	struct TScriptInterface<IFortItemViewContextInterface> ItemViewContext; // 0x14d0(0x10)
	char pad_14E0[0x20]; // 0x14e0(0x20)

	void ViewInAll(); // Function SaveTheWorldUI.FortSquadSlotSelectorButton.ViewInAll // (Final|Native|Public|BlueprintCallable) // @ game+0x68ceee4
	void SquadSlotWidgetUpdated(); // Function SaveTheWorldUI.FortSquadSlotSelectorButton.SquadSlotWidgetUpdated // (Native|Event|Public|BlueprintEvent) // @ game+0x68cebc8
	void SetIdOfSquadSlotToManageBP(struct FName& SquadId, int32_t SquadSlotIndex); // Function SaveTheWorldUI.FortSquadSlotSelectorButton.SetIdOfSquadSlotToManageBP // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x68ce6c4
	void OpenSquadSlot(); // Function SaveTheWorldUI.FortSquadSlotSelectorButton.OpenSquadSlot // (Final|Native|Public|BlueprintCallable) // @ game+0x68ce370
	bool IsSquadSlotLockedBP(); // Function SaveTheWorldUI.FortSquadSlotSelectorButton.IsSquadSlotLockedBP // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x68ce248
	void HandlePreDifferentSquadSlotSetBP(); // Function SaveTheWorldUI.FortSquadSlotSelectorButton.HandlePreDifferentSquadSlotSetBP // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void HandlePostDifferentSquadSlotSetBP(); // Function SaveTheWorldUI.FortSquadSlotSelectorButton.HandlePostDifferentSquadSlotSetBP // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	struct UUserWidget* GetPopupMenu(); // Function SaveTheWorldUI.FortSquadSlotSelectorButton.GetPopupMenu // (Final|Native|Private) // @ game+0x68cdab0
	bool GetInPreviewMode(); // Function SaveTheWorldUI.FortSquadSlotSelectorButton.GetInPreviewMode // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x68cd984
	void GetIdOfSquadSlotToManageBP(struct FName& OutSquadId, int32_t& OutSquadSlotIndex); // Function SaveTheWorldUI.FortSquadSlotSelectorButton.GetIdOfSquadSlotToManageBP // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x68cd79c
};

// Class SaveTheWorldUI.FortSquadSlotsView
// Size: 0x3d8 (Inherited: 0x2e0)
struct UFortSquadSlotsView : UCommonUserWidget {
	char pad_2E0[0x10]; // 0x2e0(0x10)
	struct FMulticastInlineDelegate OnDifferentSquadSlotSelectedEvent; // 0x2f0(0x10)
	struct FMulticastInlineDelegate OnRequestOpenSquadSlotEvent; // 0x300(0x10)
	struct FMulticastInlineDelegate OnRequestViewInAllEvent; // 0x310(0x10)
	bool bReadOnlyModeWIFE; // 0x320(0x01)
	char pad_321[0x3]; // 0x321(0x03)
	int32_t IndexOfSelectedSquadSlot; // 0x324(0x04)
	bool bSlotButtonsRequireSelection; // 0x328(0x01)
	bool bInPreviewMode; // 0x329(0x01)
	char pad_32A[0x6]; // 0x32a(0x06)
	struct TMap<enum class ESquadSlotType, struct FSquadSlotSortTypes> SquadSlotSortTypesMap; // 0x330(0x50)
	struct UFortDisableAutoSlottingPromptAction* DisableAutoSlottingToOpenSquadSlotPromptAction; // 0x380(0x08)
	struct UFortCommittableButtonGroup* SquadSlotButtonGroup; // 0x388(0x08)
	char pad_390[0x30]; // 0x390(0x30)
	struct TScriptInterface<IFortItemViewContextInterface> ItemViewContext; // 0x3c0(0x10)
	char pad_3D0[0x8]; // 0x3d0(0x08)

	bool TryGetStaticSquadDataBP(struct FHomebaseSquad& OutSquadData); // Function SaveTheWorldUI.FortSquadSlotsView.TryGetStaticSquadDataBP // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x68ced78
	bool TryGetSelectedSquadSlotSortTypes(struct FSquadSlotSortTypes& OutSlotSortTypes); // Function SaveTheWorldUI.FortSquadSlotsView.TryGetSelectedSquadSlotSortTypes // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x68cebe0
	void SetIsSelectionLocked(bool ShouldSelectionBeLocked); // Function SaveTheWorldUI.FortSquadSlotsView.SetIsSelectionLocked // (Final|Native|Public|BlueprintCallable) // @ game+0x68cea84
	void SetInPreviewMode(bool bPreview); // Function SaveTheWorldUI.FortSquadSlotsView.SetInPreviewMode // (Final|Native|Public|BlueprintCallable) // @ game+0x68ce984
	void SetIdOfSquadToManageBP(struct FName& SquadId); // Function SaveTheWorldUI.FortSquadSlotsView.SetIdOfSquadToManageBP // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x68ce8f4
	void SelectSlot(int32_t SquadSlotIndex); // Function SaveTheWorldUI.FortSquadSlotsView.SelectSlot // (Final|Native|Public|BlueprintCallable) // @ game+0x68ce3e0
	void OnDifferentSquadSlotSelected__DelegateSignature(int32_t SquadSlotIndex); // DelegateFunction SaveTheWorldUI.FortSquadSlotsView.OnDifferentSquadSlotSelected__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0xd67374
	void HandleSelectedButtonChanged(struct UCommonButtonLegacy* SelectedButton, int32_t ButtonIndex); // Function SaveTheWorldUI.FortSquadSlotsView.HandleSelectedButtonChanged // (Final|Native|Private) // @ game+0x68ce184
	void HandleRequestViewInAll(int32_t SquadSlotIndex); // Function SaveTheWorldUI.FortSquadSlotsView.HandleRequestViewInAll // (Final|Native|Private) // @ game+0x68ce104
	void HandleRequestOpenSquadSlot(int32_t SquadSlotIndex); // Function SaveTheWorldUI.FortSquadSlotsView.HandleRequestOpenSquadSlot // (Final|Native|Private) // @ game+0x68ce084
	void HandleHoveredButtonChanged(struct UCommonButtonLegacy* HoveredButton, int32_t ButtonIndex); // Function SaveTheWorldUI.FortSquadSlotsView.HandleHoveredButtonChanged // (Final|Native|Private) // @ game+0x68cdf28
	void HandleButtonDoubleClicked(struct UCommonButtonLegacy* CommittedButton, int32_t ButtonIndex); // Function SaveTheWorldUI.FortSquadSlotsView.HandleButtonDoubleClicked // (Final|Native|Private) // @ game+0x68cdd90
	void HandleButtonClicked(struct UCommonButtonLegacy* CommittedButton, int32_t ButtonIndex); // Function SaveTheWorldUI.FortSquadSlotsView.HandleButtonClicked // (Final|Native|Private) // @ game+0x68cdc0c
	int32_t GetIndexOfSelectedSquadSlot(); // Function SaveTheWorldUI.FortSquadSlotsView.GetIndexOfSelectedSquadSlot // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x68cd99c
	struct FName GetIdOfSquadToManageBP(); // Function SaveTheWorldUI.FortSquadSlotsView.GetIdOfSquadToManageBP // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x68cd96c
	struct UFortSquadSlotSelectorButton* CreateAndAddSquadSlotButton(int32_t SquadSlotIndex, struct FHomebaseSquadSlot& SquadSlotDefinition, struct UWidget*& OutSquadSlotButtonHost); // Function SaveTheWorldUI.FortSquadSlotsView.CreateAndAddSquadSlotButton // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
};

// Class SaveTheWorldUI.FortSquadSlotWidget
// Size: 0x1d8 (Inherited: 0x148)
struct UFortSquadSlotWidget : UWidget {
	char pad_148[0x20]; // 0x148(0x20)
	enum class EFortItemCardSize ItemCardSize; // 0x168(0x01)
	char pad_169[0x3f]; // 0x169(0x3f)
	struct UFortMultiSizeItemCard* SlottedItemCard; // 0x1a8(0x08)
	char pad_1B0[0x8]; // 0x1b0(0x08)
	struct TScriptInterface<IFortItemViewContextInterface> ItemViewContext; // 0x1b8(0x10)
	char pad_1C8[0x10]; // 0x1c8(0x10)

	void SetIdOfSquadSlotToManageBP(struct FName& SquadId, int32_t SquadSlotIndex); // Function SaveTheWorldUI.FortSquadSlotWidget.SetIdOfSquadSlotToManageBP // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x68ce794
	void SetCardSize(enum class EFortItemCardSize CardSize); // Function SaveTheWorldUI.FortSquadSlotWidget.SetCardSize // (Final|Native|Public|BlueprintCallable) // @ game+0x68ce59c
	bool IsSquadSlotLockedBP(); // Function SaveTheWorldUI.FortSquadSlotWidget.IsSquadSlotLockedBP // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x68ce26c
	struct UFortItem* GetItemInSquadSlotBP(struct ULocalPlayer* LocalPlayer); // Function SaveTheWorldUI.FortSquadSlotWidget.GetItemInSquadSlotBP // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x68cd9cc
	void GetIdOfSquadSlotToManageBP(struct FName& OutSquadId, int32_t& OutSquadSlotIndex); // Function SaveTheWorldUI.FortSquadSlotWidget.GetIdOfSquadSlotToManageBP // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x68cd878
};

// Class SaveTheWorldUI.FortSquadStatsWidgetBase
// Size: 0x318 (Inherited: 0x2e0)
struct UFortSquadStatsWidgetBase : UCommonUserWidget {
	struct TArray<struct UFortAttributeListItem_NUI*> OverviewStats; // 0x2e0(0x10)
	struct UFortAttributeList_NUI* DetailedStats; // 0x2f0(0x08)
	char pad_2F8[0x20]; // 0x2f8(0x20)

	void RequestStatsUpdate(); // Function SaveTheWorldUI.FortSquadStatsWidgetBase.RequestStatsUpdate // (Final|Native|Public|BlueprintCallable) // @ game+0x68ce3b8
	void RequestShowPreviewStats(); // Function SaveTheWorldUI.FortSquadStatsWidgetBase.RequestShowPreviewStats // (Final|Native|Public|BlueprintCallable) // @ game+0x68ce3a4
	void HandleSquadSlottingPreviewStateChanged(); // Function SaveTheWorldUI.FortSquadStatsWidgetBase.HandleSquadSlottingPreviewStateChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void HandlePowerRatingChanged_BP(bool bHasTeamMebers); // Function SaveTheWorldUI.FortSquadStatsWidgetBase.HandlePowerRatingChanged_BP // (Event|Public|BlueprintEvent) // @ game+0xd67374
	struct FUniqueNetIdRepl GetLocalPlayerId(); // Function SaveTheWorldUI.FortSquadStatsWidgetBase.GetLocalPlayerId // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x68cda58
};

// Class SaveTheWorldUI.FortSquadStatValueWithIcon
// Size: 0x368 (Inherited: 0x2e0)
struct UFortSquadStatValueWithIcon : UCommonUserWidget {
	struct FGameplayAttribute Attribute; // 0x2e0(0x38)
	struct FGameplayAttribute TeamAttribute; // 0x318(0x38)
	enum class EFortBrushSize ImageSize; // 0x350(0x01)
	char pad_351[0x7]; // 0x351(0x07)
	struct UCommonNumericTextBlock* Value; // 0x358(0x08)
	struct UImage* Icon; // 0x360(0x08)

	void HandleDifferentAttributeSetBP(); // Function SaveTheWorldUI.FortSquadStatValueWithIcon.HandleDifferentAttributeSetBP // (Event|Protected|BlueprintEvent) // @ game+0xd67374
};

// Class SaveTheWorldUI.FortSquadTypeLandingPageBase
// Size: 0x598 (Inherited: 0x568)
struct UFortSquadTypeLandingPageBase : UFortActivatablePanel {
	bool bReadOnlyModeWIFE; // 0x568(0x01)
	enum class EFortHomebaseSquadType SquadType; // 0x569(0x01)
	char pad_56A[0x6]; // 0x56a(0x06)
	struct FDataTableRowHandle BackInputActionRowHandle; // 0x570(0x10)
	enum class EFortFrontendInventoryFilter ItemManagementScreenFilter; // 0x580(0x01)
	char pad_581[0x7]; // 0x581(0x07)
	struct TArray<struct TWeakObjectPtr<struct UFortSquadSelectorButton>> SquadSelectorButtons; // 0x588(0x10)

	void ShowWarningReadOnlyWIFE(bool Force); // Function SaveTheWorldUI.FortSquadTypeLandingPageBase.ShowWarningReadOnlyWIFE // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	bool IsScreenWIFE(); // Function SaveTheWorldUI.FortSquadTypeLandingPageBase.IsScreenWIFE // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x68cc4e0
	void HandlePendingNavigationOp(); // Function SaveTheWorldUI.FortSquadTypeLandingPageBase.HandlePendingNavigationOp // (Final|Native|Protected|BlueprintCallable) // @ game+0x68ce070
	void HandleBackInputAction(bool& bPassThrough); // Function SaveTheWorldUI.FortSquadTypeLandingPageBase.HandleBackInputAction // (Final|Native|Protected|HasOutParms|BlueprintCallable) // @ game+0x68cdb84
	struct UFortSquadSelectorButton* CreateAndAddSquadButton(struct FName& SquadId); // Function SaveTheWorldUI.FortSquadTypeLandingPageBase.CreateAndAddSquadButton // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
};

// Class SaveTheWorldUI.FortStatIcon
// Size: 0x328 (Inherited: 0x2e0)
struct UFortStatIcon : UCommonUserWidget {
	struct FGameplayAttribute Attribute; // 0x2e0(0x38)
	enum class EFortBrushSize ImageSize; // 0x318(0x01)
	char pad_319[0x7]; // 0x319(0x07)
	struct UImage* Icon; // 0x320(0x08)

	void SetAttribute(struct FGameplayAttribute& InAttribute); // Function SaveTheWorldUI.FortStatIcon.SetAttribute // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x68ce460
	void HandleDifferentAttributeSetBP(); // Function SaveTheWorldUI.FortStatIcon.HandleDifferentAttributeSetBP // (Event|Protected|BlueprintEvent) // @ game+0xd67374
};

// Class SaveTheWorldUI.FortStatsOverviewDetailsBase
// Size: 0x318 (Inherited: 0x2e0)
struct UFortStatsOverviewDetailsBase : UCommonUserWidget {
	struct TArray<struct UFortAttributeListItem_NUI*> OverviewStats; // 0x2e0(0x10)
	struct UFortAttributeList_NUI* DetailedStats; // 0x2f0(0x08)
	char pad_2F8[0x20]; // 0x2f8(0x20)

	void RequestStatsUpdate(); // Function SaveTheWorldUI.FortStatsOverviewDetailsBase.RequestStatsUpdate // (Final|Native|Public|BlueprintCallable) // @ game+0x68ce3cc
	void ListenForChanges(bool bListen); // Function SaveTheWorldUI.FortStatsOverviewDetailsBase.ListenForChanges // (Final|Native|Public|BlueprintCallable) // @ game+0x68ce2b0
	struct FUniqueNetIdRepl GetLocalPlayerId(); // Function SaveTheWorldUI.FortStatsOverviewDetailsBase.GetLocalPlayerId // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x68cda58
};

// Class SaveTheWorldUI.StoreCardObject
// Size: 0x48 (Inherited: 0x28)
struct UStoreCardObject : UObject {
	struct FCard Card; // 0x28(0x18)
	int32_t OriginalIndex; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// Class SaveTheWorldUI.FortStoreSummary
// Size: 0x578 (Inherited: 0x530)
struct UFortStoreSummary : UCommonActivatablePanelLegacy {
	char pad_530[0x8]; // 0x530(0x08)
	struct TArray<struct UStoreCardObject*> StoreCardObjects; // 0x538(0x10)
	struct UCommonTileView* TileView; // 0x548(0x08)
	struct UFortMulchConfirmationModalWidget* MulchConfirmationModalClass; // 0x550(0x08)
	char pad_558[0x18]; // 0x558(0x18)
	struct UFortMulchConfirmationModalWidget* MulchConfirmationModal; // 0x570(0x08)

	void ShowMulchConfirmationModal(); // Function SaveTheWorldUI.FortStoreSummary.ShowMulchConfirmationModal // (Native|Public|BlueprintCallable) // @ game+0x68cb06c
	void SetIsInChoiceSelectionMode(bool InIsInChoiceSelectionMode); // Function SaveTheWorldUI.FortStoreSummary.SetIsInChoiceSelectionMode // (Final|Native|Public|BlueprintCallable) // @ game+0x68cea04
	void SetCards(struct TArray<struct FCard>& Cards); // Function SaveTheWorldUI.FortStoreSummary.SetCards // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x68ce628
	void NotifyPanelDeactivated(); // Function SaveTheWorldUI.FortStoreSummary.NotifyPanelDeactivated // (Native|Protected|BlueprintCallable) // @ game+0x68ca3e0
	void NotifyPanelActivated(); // Function SaveTheWorldUI.FortStoreSummary.NotifyPanelActivated // (Native|Protected|BlueprintCallable) // @ game+0x68ca3c4
	void MarkDefaultItemsForMulch(); // Function SaveTheWorldUI.FortStoreSummary.MarkDefaultItemsForMulch // (Final|Native|Public|BlueprintCallable) // @ game+0x68ce35c
	void HideMulchConfirmationModal(); // Function SaveTheWorldUI.FortStoreSummary.HideMulchConfirmationModal // (Native|Public|BlueprintCallable) // @ game+0x68c9f40
	void HandleContextMenuOpenChangedBP(bool bIsOpen); // Function SaveTheWorldUI.FortStoreSummary.HandleContextMenuOpenChangedBP // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void HandleContextMenuOpenChanged(bool bIsOpen); // Function SaveTheWorldUI.FortStoreSummary.HandleContextMenuOpenChanged // (Final|Native|Private) // @ game+0x68cdea8
	bool GetIsInChoiceSelectionMode(); // Function SaveTheWorldUI.FortStoreSummary.GetIsInChoiceSelectionMode // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x68cd9b4
	void FinalizeFavoriteStatus(); // Function SaveTheWorldUI.FortStoreSummary.FinalizeFavoriteStatus // (Final|Native|Public|BlueprintCallable) // @ game+0x68cd6a4
	void CloseSummaryScreen(); // Function SaveTheWorldUI.FortStoreSummary.CloseSummaryScreen // (Event|Public|BlueprintEvent) // @ game+0xd67374
};

// Class SaveTheWorldUI.FortStoreSummaryItemButton
// Size: 0x14d0 (Inherited: 0x1480)
struct UFortStoreSummaryItemButton : UCommonButtonLegacy {
	bool HasAnItemMarkedForMulching; // 0x1480(0x01)
	char pad_1481[0x2f]; // 0x1481(0x2f)
	struct UMenuAnchor* PopupMenuAnchor; // 0x14b0(0x08)
	struct UStoreCardObject* StoreCardObject; // 0x14b8(0x08)
	struct UFortInventoryContext* InventoryContext; // 0x14c0(0x08)
	char pad_14C8[0x8]; // 0x14c8(0x08)

	void UpdateMulchListWithItem(bool bAddingItem); // Function SaveTheWorldUI.FortStoreSummaryItemButton.UpdateMulchListWithItem // (Final|Native|Public|BlueprintCallable) // @ game+0x68cee64
	void SetStoreCardObject(struct UStoreCardObject* CardObject); // Function SaveTheWorldUI.FortStoreSummaryItemButton.SetStoreCardObject // (Final|Native|Public|BlueprintCallable) // @ game+0x68ceb0c
	void HandleMenuOpenChanged(bool bIsOpen); // Function SaveTheWorldUI.FortStoreSummaryItemButton.HandleMenuOpenChanged // (Final|Native|Private) // @ game+0x68cdff0
	void HandleItemMulchStateChanged(); // Function SaveTheWorldUI.FortStoreSummaryItemButton.HandleItemMulchStateChanged // (Event|Public|BlueprintEvent) // @ game+0xd67374
	struct UStoreCardObject* GetStoreCardObject(); // Function SaveTheWorldUI.FortStoreSummaryItemButton.GetStoreCardObject // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x68cdb6c
	struct UUserWidget* GetPopupMenu(); // Function SaveTheWorldUI.FortStoreSummaryItemButton.GetPopupMenu // (Final|Native|Private) // @ game+0x68cdad4
};

// Class SaveTheWorldUI.FortStoreSummaryItemPopupMenu
// Size: 0x558 (Inherited: 0x550)
struct UFortStoreSummaryItemPopupMenu : UFortPopupMenu {
	char pad_550[0x8]; // 0x550(0x08)

	void MulchItem(); // Function SaveTheWorldUI.FortStoreSummaryItemPopupMenu.MulchItem // (Final|Native|Protected|BlueprintCallable) // @ game+0x68d08dc
	void HandleItemChanged(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged); // Function SaveTheWorldUI.FortStoreSummaryItemPopupMenu.HandleItemChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	struct UFortStoreSummaryItemButton* GetHostButton(); // Function SaveTheWorldUI.FortStoreSummaryItemPopupMenu.GetHostButton // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x68d0030
};

// Class SaveTheWorldUI.FortSTWUIData
// Size: 0x58 (Inherited: 0x30)
struct UFortSTWUIData : UFortSTWUIDataBase {
	struct TSoftObjectPtr<UDataTable> UpgradesDisplayDataTable; // 0x30(0x28)
};

// Class SaveTheWorldUI.FortSurvivorSquadManagementScreen
// Size: 0x768 (Inherited: 0x688)
struct UFortSurvivorSquadManagementScreen : UFortSquadManagementScreenBase {
	struct UFortSurvivorSquadStatMatchesBase* StatMatchesWidget; // 0x688(0x08)
	char pad_690[0xd8]; // 0x690(0xd8)

	void UpdateCycleButtons(); // Function SaveTheWorldUI.FortSurvivorSquadManagementScreen.UpdateCycleButtons // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ShowHelpDialog(); // Function SaveTheWorldUI.FortSurvivorSquadManagementScreen.ShowHelpDialog // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void PlayFeedbackForSlottingPerson(struct UFortWorker* Worker, int32_t SlotIndex, struct FFortSurvivorSquadSlottingFeedbackData& FeedbackData); // Function SaveTheWorldUI.FortSurvivorSquadManagementScreen.PlayFeedbackForSlottingPerson // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
};

// Class SaveTheWorldUI.FortSurvivorSquadSelectorButton
// Size: 0x14c0 (Inherited: 0x14a0)
struct UFortSurvivorSquadSelectorButton : UFortSquadSelectorButton {
	struct TArray<struct FGameplayAttribute> FortStatAttributes; // 0x1498(0x10)
	struct TArray<struct FGameplayAttribute> FortTeamStatAttributes; // 0x14a8(0x10)

	bool TryGetSummaryStats(struct FFortSurvivorSquadSelectorButtonSummaryStats& OutSummaryStats); // Function SaveTheWorldUI.FortSurvivorSquadSelectorButton.TryGetSummaryStats // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x68d0c44
	bool TryGetSquadMembers(struct TArray<struct UFortWorker*>& OutSquadMembers); // Function SaveTheWorldUI.FortSurvivorSquadSelectorButton.TryGetSquadMembers // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x68d0b98
	bool TryGetPersonalityMatches(struct FFortSurvivorSquadSelectorButtonPersonalityMatches& OutPersonalityMatches); // Function SaveTheWorldUI.FortSurvivorSquadSelectorButton.TryGetPersonalityMatches // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x68d0ab0
};

// Class SaveTheWorldUI.FortSurvivorSquadStatMatchBase
// Size: 0x7b0 (Inherited: 0x2e0)
struct UFortSurvivorSquadStatMatchBase : UCommonUserWidget {
	char pad_2E0[0x10]; // 0x2e0(0x10)
	struct FFortUISurvivorSquadStatMatch StatMatch; // 0x2f0(0x4c0)

	void OnStatMatchUpdated(struct FFortUISurvivorSquadStatMatch UpdatedMatch); // Function SaveTheWorldUI.FortSurvivorSquadStatMatchBase.OnStatMatchUpdated // (Event|Protected|BlueprintEvent) // @ game+0xd67374
};

// Class SaveTheWorldUI.FortSurvivorSquadStatMatchesBase
// Size: 0x340 (Inherited: 0x310)
struct UFortSurvivorSquadStatMatchesBase : UFortSquadStatDetailsWidget {
	struct UFortSurvivorSquadStatMatchBase* StatMatchClass; // 0x310(0x08)
	bool bSummaryView; // 0x318(0x01)
	char pad_319[0x7]; // 0x319(0x07)
	struct TArray<struct UFortSurvivorSquadStatMatchBase*> StatMatches; // 0x320(0x10)
	char pad_330[0x10]; // 0x330(0x10)

	bool TryGetStaticSquadDataBP(struct FHomebaseSquad& OutSquadData); // Function SaveTheWorldUI.FortSurvivorSquadStatMatchesBase.TryGetStaticSquadDataBP // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x68ced78
	void SetSummaryView(bool bInSummaryView); // Function SaveTheWorldUI.FortSurvivorSquadStatMatchesBase.SetSummaryView // (Final|Native|Public|BlueprintCallable) // @ game+0x68d0a1c
	void SetIdOfSquadToManageBP(struct FName& SquadId); // Function SaveTheWorldUI.FortSurvivorSquadStatMatchesBase.SetIdOfSquadToManageBP // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x68ce8f4
	void HandleDifferentSquadSetBP(); // Function SaveTheWorldUI.FortSurvivorSquadStatMatchesBase.HandleDifferentSquadSetBP // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	struct FName GetIdOfSquadToManageBP(); // Function SaveTheWorldUI.FortSurvivorSquadStatMatchesBase.GetIdOfSquadToManageBP // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x68cd96c
	void AddStatMatch(struct UFortSurvivorSquadStatMatchBase* SetBonus); // Function SaveTheWorldUI.FortSurvivorSquadStatMatchesBase.AddStatMatch // (Event|Protected|BlueprintEvent) // @ game+0xd67374
};

// Class SaveTheWorldUI.FortSurvivorSquadSummaryStatItem
// Size: 0x300 (Inherited: 0x2e0)
struct UFortSurvivorSquadSummaryStatItem : UCommonUserWidget {
	enum class EFortBrushSize ImageSize; // 0x2e0(0x01)
	char pad_2E1[0x7]; // 0x2e1(0x07)
	struct UImage* Icon; // 0x2e8(0x08)
	struct UCommonTextBlock* Value; // 0x2f0(0x08)
	struct UCommonTextBlock* Name; // 0x2f8(0x08)

	void SetAttributeModifierAccumulation(struct FFortAttributeModifierAccumulation& Accumulation); // Function SaveTheWorldUI.FortSurvivorSquadSummaryStatItem.SetAttributeModifierAccumulation // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x68d093c
};

// Class SaveTheWorldUI.FortTheaterSelect
// Size: 0x560 (Inherited: 0x530)
struct UFortTheaterSelect : UCommonActivatablePanelLegacy {
	char pad_530[0x10]; // 0x530(0x10)
	struct UOverlay* OverlayMain; // 0x540(0x08)
	char pad_548[0x10]; // 0x548(0x10)
	struct UFortQuestItemDefinition* DefaultRequiredCompletedQuest; // 0x558(0x08)

	void OnNavigationRight(); // Function SaveTheWorldUI.FortTheaterSelect.OnNavigationRight // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnNavigationLeft(); // Function SaveTheWorldUI.FortTheaterSelect.OnNavigationLeft // (Event|Public|BlueprintEvent) // @ game+0xd67374
	bool GetTheaterRecommendedRatingRange(struct FString UniqueId, int32_t& Minimum, int32_t& Maximum); // Function SaveTheWorldUI.FortTheaterSelect.GetTheaterRecommendedRatingRange // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x68d0360
};

// Class SaveTheWorldUI.FortUIStateWidget_STWFrontend
// Size: 0x480 (Inherited: 0x410)
struct UFortUIStateWidget_STWFrontend : UFortUIStateWidgetBase {
	char pad_410[0x8]; // 0x410(0x08)
	struct UTopBar_STW* TopBar_STW; // 0x418(0x08)
	struct UCommonUserWidget* BottomBar_STW; // 0x420(0x08)
	struct UFortActivatableChatWidget* ChatWidget_STW; // 0x428(0x08)
	struct TWeakObjectPtr<struct UFortMainTabsScreenBase> MainTabsScreen; // 0x430(0x08)
	struct UFortPlayerBanned* PlayerBannedScreenClass; // 0x438(0x08)
	struct TArray<struct AFortScriptedAction*> ScriptedActionsToRegister; // 0x440(0x10)
	struct TArray<enum class EFortStoreState> DeferredSquadAutoSlottingStoreStates; // 0x450(0x10)
	char pad_460[0x20]; // 0x460(0x20)
};

// Class SaveTheWorldUI.FortUIStateWidget_STWJoinServer
// Size: 0x438 (Inherited: 0x410)
struct UFortUIStateWidget_STWJoinServer : UFortUIStateWidgetBase {
	struct UFortRejoinWindowBase* RejoinWindow; // 0x410(0x08)
	struct FDataTableRowHandle TutorialCompleteStatHandle; // 0x418(0x10)
	struct UFortRejoinWindowBase* RejoinWindowClass; // 0x428(0x08)
	char pad_430[0x8]; // 0x430(0x08)

	void OnShowTutorialDialog(); // Function SaveTheWorldUI.FortUIStateWidget_STWJoinServer.OnShowTutorialDialog // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void HandleMatchmakingStateChange(enum class EMatchmakingState OldState, enum class EMatchmakingState NewState); // Function SaveTheWorldUI.FortUIStateWidget_STWJoinServer.HandleMatchmakingStateChange // (Final|Native|Private) // @ game+0x68d0740
	void HandleMatchmakingComplete(enum class EMatchmakingCompleteResult MatchmakingResult); // Function SaveTheWorldUI.FortUIStateWidget_STWJoinServer.HandleMatchmakingComplete // (Final|Native|Private) // @ game+0x68d0670
	void HandleLobbyTimeUpdated(int32_t TimeRemaining); // Function SaveTheWorldUI.FortUIStateWidget_STWJoinServer.HandleLobbyTimeUpdated // (Final|Native|Private) // @ game+0x68d05f0
	void HandleLobbyDisconnected(); // Function SaveTheWorldUI.FortUIStateWidget_STWJoinServer.HandleLobbyDisconnected // (Final|Native|Private) // @ game+0x68d05cc
};

// Class SaveTheWorldUI.FortUpgradeDetailsBase
// Size: 0x320 (Inherited: 0x2e0)
struct UFortUpgradeDetailsBase : UCommonUserWidget {
	struct UMediaPlayer* VideoPlayer; // 0x2e0(0x08)
	struct UFortUpgradeInfo* UpgradeInfo; // 0x2e8(0x08)
	char pad_2F0[0x30]; // 0x2f0(0x30)

	void RequestPurchaseNode(); // Function SaveTheWorldUI.FortUpgradeDetailsBase.RequestPurchaseNode // (Final|Native|Protected|BlueprintCallable) // @ game+0x68d0904
	void OnUpgradeToDetailChanged(); // Function SaveTheWorldUI.FortUpgradeDetailsBase.OnUpgradeToDetailChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnShowIcon(struct UTexture2D* Icon); // Function SaveTheWorldUI.FortUpgradeDetailsBase.OnShowIcon // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnScreenActive(); // Function SaveTheWorldUI.FortUpgradeDetailsBase.OnScreenActive // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnPurchaseComplete(); // Function SaveTheWorldUI.FortUpgradeDetailsBase.OnPurchaseComplete // (Event|Public|BlueprintEvent) // @ game+0xd67374
};

// Class SaveTheWorldUI.FortUpgradeInfo
// Size: 0xb0 (Inherited: 0x28)
struct UFortUpgradeInfo : UObject {
	char pad_28[0x20]; // 0x28(0x20)
	struct UFortHomebaseNodeItemDefinition* NodeItemDef; // 0x48(0x08)
	char pad_50[0x60]; // 0x50(0x60)

	bool IsUpgradeUnlocked(); // Function SaveTheWorldUI.FortUpgradeInfo.IsUpgradeUnlocked // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x68d08c8
	bool IsPreviewing(); // Function SaveTheWorldUI.FortUpgradeInfo.IsPreviewing // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x68d0894
	struct UMediaSource* GetVideo(); // Function SaveTheWorldUI.FortUpgradeInfo.GetVideo // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x68d05a8
	int32_t GetUpgradeUnlockLevel(); // Function SaveTheWorldUI.FortUpgradeInfo.GetUpgradeUnlockLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x21f0244
	struct FText GetTitle(); // Function SaveTheWorldUI.FortUpgradeInfo.GetTitle // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x68d0174
	struct FText GetNextLevelTitle(); // Function SaveTheWorldUI.FortUpgradeInfo.GetNextLevelTitle // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x68d02dc
	struct FText GetNextLevelDescription(); // Function SaveTheWorldUI.FortUpgradeInfo.GetNextLevelDescription // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x68d0258
	int32_t GetNextLevel(); // Function SaveTheWorldUI.FortUpgradeInfo.GetNextLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x68d0224
	int32_t GetMaxLevel(); // Function SaveTheWorldUI.FortUpgradeInfo.GetMaxLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x68d020c
	struct FText GetItemName(); // Function SaveTheWorldUI.FortUpgradeInfo.GetItemName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x68d0174
	struct TSoftObjectPtr<UTexture2D> GetIcon(enum class EUpgradeInfoImageSize ImageSize); // Function SaveTheWorldUI.FortUpgradeInfo.GetIcon // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x68d00cc
	bool GetDisplayAttributes(struct TArray<struct FFortDisplayAttribute>& OutDisplayAttributes); // Function SaveTheWorldUI.FortUpgradeInfo.GetDisplayAttributes // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x68cff88
	struct FText GetDescription(); // Function SaveTheWorldUI.FortUpgradeInfo.GetDescription // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x68cfefc
	int32_t GetCurrentLevel(); // Function SaveTheWorldUI.FortUpgradeInfo.GetCurrentLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x68cfee4
	int32_t GetCost(); // Function SaveTheWorldUI.FortUpgradeInfo.GetCost // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x68cfec0
	void ForwardPreview(); // Function SaveTheWorldUI.FortUpgradeInfo.ForwardPreview // (Final|Native|Public|BlueprintCallable) // @ game+0x68cfe84
	bool CanPreview(); // Function SaveTheWorldUI.FortUpgradeInfo.CanPreview // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x68cfe2c
	bool CanAffordUpgrade(); // Function SaveTheWorldUI.FortUpgradeInfo.CanAffordUpgrade // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x68cfe18
	void BackwardPreview(); // Function SaveTheWorldUI.FortUpgradeInfo.BackwardPreview // (Final|Native|Public|BlueprintCallable) // @ game+0x68cfddc
};

// Class SaveTheWorldUI.FortUpgradeScreenBase
// Size: 0x5f8 (Inherited: 0x530)
struct UFortUpgradeScreenBase : UCommonActivatablePanelLegacy {
	struct UFortTabListWidgetBase* UpgradesTabSelector; // 0x530(0x08)
	struct UCommonTileView* UpgradesTileView; // 0x538(0x08)
	struct UCommonLoadGuard* UpgradeTileViewLoadGuard; // 0x540(0x08)
	struct UFortUpgradeDetailsBase* Details; // 0x548(0x08)
	struct TMap<struct FName, enum class EHomebaseNodeType> TabToNodeTypeMap; // 0x550(0x50)
	struct UFortItemDefinition* UpgradesRespecToken; // 0x5a0(0x08)
	char pad_5A8[0x50]; // 0x5a8(0x50)

	void UseUpgradesRespecToken(); // Function SaveTheWorldUI.FortUpgradeScreenBase.UseUpgradesRespecToken // (Final|Native|Protected|BlueprintCallable) // @ game+0x68d0cf4
	void TogglePreview(); // Function SaveTheWorldUI.FortUpgradeScreenBase.TogglePreview // (Final|Native|Protected|BlueprintCallable) // @ game+0x68d0a9c
	void RefreshFocus(); // Function SaveTheWorldUI.FortUpgradeScreenBase.RefreshFocus // (Final|Native|Protected|BlueprintCallable) // @ game+0x68d08f0
	void OnUseUpgradesRespecTokenComplete(); // Function SaveTheWorldUI.FortUpgradeScreenBase.OnUseUpgradesRespecTokenComplete // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnUpgradeInfoChanged(); // Function SaveTheWorldUI.FortUpgradeScreenBase.OnUpgradeInfoChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnPurchaseNodeComplete(); // Function SaveTheWorldUI.FortUpgradeScreenBase.OnPurchaseNodeComplete // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	bool IsPreviewing(); // Function SaveTheWorldUI.FortUpgradeScreenBase.IsPreviewing // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x68d08a8
	void HandleTabSelected(struct FName TabId); // Function SaveTheWorldUI.FortUpgradeScreenBase.HandleTabSelected // (Final|Native|Private) // @ game+0x68d0814
	int32_t GetUpgradesRespecTokenCount(); // Function SaveTheWorldUI.FortUpgradeScreenBase.GetUpgradesRespecTokenCount // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x68d0584
	bool CanPreview(); // Function SaveTheWorldUI.FortUpgradeScreenBase.CanPreview // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x68cfe4c
	bool AreUpgradesRespecTokensAvailable(); // Function SaveTheWorldUI.FortUpgradeScreenBase.AreUpgradesRespecTokensAvailable // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x68cfdb4
};

// Class SaveTheWorldUI.FortUpgradeTileBase
// Size: 0x1490 (Inherited: 0x1480)
struct UFortUpgradeTileBase : UCommonButtonLegacy {
	char pad_1480[0x8]; // 0x1480(0x08)
	struct UFortUpgradeInfo* UpgradeInfo; // 0x1488(0x08)

	void OnDataRefresh(bool bUpgrade); // Function SaveTheWorldUI.FortUpgradeTileBase.OnDataRefresh // (Event|Protected|BlueprintEvent) // @ game+0xd67374
};

// Class SaveTheWorldUI.FortWorkerSetBonusIcon
// Size: 0x2f0 (Inherited: 0x2e0)
struct UFortWorkerSetBonusIcon : UCommonUserWidget {
	struct FGameplayTag GameplayTag; // 0x2e0(0x04)
	enum class EFortBrushSize ImageSize; // 0x2e4(0x01)
	char pad_2E5[0x3]; // 0x2e5(0x03)
	struct UImage* Icon; // 0x2e8(0x08)

	void SetGameplayTag(struct FGameplayTag& InGameplayTag); // Function SaveTheWorldUI.FortWorkerSetBonusIcon.SetGameplayTag // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x68eef7c
	void HandleDifferentGameplayTagSetBP(); // Function SaveTheWorldUI.FortWorkerSetBonusIcon.HandleDifferentGameplayTagSetBP // (Event|Protected|BlueprintEvent) // @ game+0xd67374
};

// Class SaveTheWorldUI.MainMenu_STW
// Size: 0x508 (Inherited: 0x3f8)
struct UMainMenu_STW : UCommonActivatableWidget {
	struct FText DefaultHelpText; // 0x3f8(0x18)
	struct UCommonTextBlock* Text_CountDownTimer; // 0x410(0x08)
	struct UCommonButtonBase* Button_LeaveExperience; // 0x418(0x08)
	struct UCommonUserWidget* Button_Leave; // 0x420(0x08)
	struct UCommonTextBlock* ContextualHelpText; // 0x428(0x08)
	struct UCommonButtonBase* Button_BackBoard; // 0x430(0x08)
	struct UCommonButtonBase* Button_ReportPlayer; // 0x438(0x08)
	struct UCommonButtonBase* Button_Logout; // 0x440(0x08)
	struct UCommonButtonBase* Button_Support; // 0x448(0x08)
	struct UCommonButtonBase* Button_Exit; // 0x450(0x08)
	struct UCommonButtonBase* Button_Settings; // 0x458(0x08)
	struct FDataTableRowHandle CloseMenuAction; // 0x460(0x10)
	struct FDataTableRowHandle SwitchProfileAction; // 0x470(0x10)
	struct UFortOptionsMenu* SettingsScreenClass; // 0x480(0x08)
	struct FText LogoutTitle; // 0x488(0x18)
	struct FText LogoutDescription; // 0x4a0(0x18)
	struct FText ExitTitle; // 0x4b8(0x18)
	struct FText ExitDescription; // 0x4d0(0x18)
	char pad_4E8[0x20]; // 0x4e8(0x20)

	void TryShowPrimaryContent(struct TSoftClassPtr<UObject>& ContentWidgetClass); // Function SaveTheWorldUI.MainMenu_STW.TryShowPrimaryContent // (Final|Native|Protected|HasOutParms|BlueprintCallable) // @ game+0x68ef114
	void TryShowModal(struct TSoftClassPtr<UObject>& ModalWidgetClass); // Function SaveTheWorldUI.MainMenu_STW.TryShowModal // (Final|Native|Protected|HasOutParms|BlueprintCallable) // @ game+0x68ef05c
	bool ShouldShowLeaveExperienceButton(); // Function SaveTheWorldUI.MainMenu_STW.ShouldShowLeaveExperienceButton // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x68ef038
	bool IsActiveTabMainShop(); // Function SaveTheWorldUI.MainMenu_STW.IsActiveTabMainShop // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x68eeedc
};

// Class SaveTheWorldUI.FortQuestScreen
// Size: 0x568 (Inherited: 0x568)
struct UFortQuestScreen : UFortActivatablePanel {

	void ProcessPendingSeenQuestItems(); // Function SaveTheWorldUI.FortQuestScreen.ProcessPendingSeenQuestItems // (Final|Native|Private|BlueprintCallable) // @ game+0x68eef68
};

// Class SaveTheWorldUI.SaveTheWorldRegisterUIManager
// Size: 0x28 (Inherited: 0x28)
struct USaveTheWorldRegisterUIManager : UFortUIGameFeatureAction {
};

// Class SaveTheWorldUI.SaveTheWorldRequestsFeatureAction
// Size: 0xc8 (Inherited: 0x28)
struct USaveTheWorldRequestsFeatureAction : UFortUIGameFeatureAction {
	struct TSoftClassPtr<UObject> ItemManagementScreenClass; // 0x28(0x28)
	struct TSoftClassPtr<UObject> ItemInspectionScreenClass; // 0x50(0x28)
	struct TSoftClassPtr<UObject> HeroLoadoutScreenClass; // 0x78(0x28)
	struct TSoftClassPtr<UObject> SurvivorSquadManagementScreenClass; // 0xa0(0x28)
};

// Class SaveTheWorldUI.TopBar_STW
// Size: 0x498 (Inherited: 0x3f8)
struct UTopBar_STW : UCommonActivatableWidget {
	char pad_3F8[0x18]; // 0x3f8(0x18)
	struct UDataTable* PhoenixSeasonDisplayInfoMap; // 0x410(0x08)
	struct TMap<enum class EFortUIFeatureStateReason, struct FText> ReasonDescriptions; // 0x418(0x50)
	struct UCommonButtonLegacy* Button_MainMenu; // 0x468(0x08)
	struct UMainMenu_STW* MainMenu; // 0x470(0x08)
	struct UImage* Image_ActiveInvitesNotification; // 0x478(0x08)
	struct UCommonButtonLegacy* Button_Social; // 0x480(0x08)
	char pad_488[0x10]; // 0x488(0x10)

	void SetOnlineFriendsCount(int32_t NewOnlineFriendsCount); // Function SaveTheWorldUI.TopBar_STW.SetOnlineFriendsCount // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnSocialMenuOpened(); // Function SaveTheWorldUI.TopBar_STW.OnSocialMenuOpened // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnShouldShowPhoenixDisplay(bool bShow, struct UFortPhoenixSeasonDisplayInfo* PhoenixDisplayInfo); // Function SaveTheWorldUI.TopBar_STW.OnShouldShowPhoenixDisplay // (Event|Protected|BlueprintEvent) // @ game+0xd67374
};

