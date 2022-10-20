// Class BattlePassS22UI.BattlePassLandingPageS22
// Size: 0x570 (Inherited: 0x520)
struct UBattlePassLandingPageS22 : UBattlePassLandingPageBase {
	struct UBattlePassLandingPageButton* Button_Rewards; // 0x520(0x08)
	struct UBattlePassLandingPageButton* Button_CharacterCustomizer; // 0x528(0x08)
	struct UBattlePassLandingPageButton* Button_BonusRewards; // 0x530(0x08)
	struct UBattlePassLandingPageButton* Button_Quests; // 0x538(0x08)
	struct UBattlePassLandingPageButton* Button_BuyBattlePass; // 0x540(0x08)
	struct UBattlePassLandingPageButton* Button_JoinSubscription; // 0x548(0x08)
	struct UBattlePassLandingPageButton* Button_BuyResources; // 0x550(0x08)
	struct UBattlePassLandingPageButton* Button_GiftBattlePass; // 0x558(0x08)
	char pad_560[0x8]; // 0x560(0x08)
	struct UAthenaSeasonItemData_BattleStar* SeasonData_BattleStar; // 0x568(0x08)

	void OnBattlePassSubscriptionAllowed(bool bSubscriptionAllowed); // Function BattlePassS22UI.BattlePassLandingPageS22.OnBattlePassSubscriptionAllowed // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnBattlePassOwned(); // Function BattlePassS22UI.BattlePassLandingPageS22.OnBattlePassOwned // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnBattlePassGiftingAllowed(bool bGiftingAllowed); // Function BattlePassS22UI.BattlePassLandingPageS22.OnBattlePassGiftingAllowed // (Event|Public|BlueprintEvent) // @ game+0xd67374
};

// Class BattlePassS22UI.BattlePassRewardPageS22
// Size: 0x590 (Inherited: 0x4f0)
struct UBattlePassRewardPageS22 : UBattlePassRewardPageBase {
	struct UFortBattlePassRewardGrid* RewardsGridClass; // 0x4f0(0x08)
	struct UFortPageNavigator* PageNavigator; // 0x4f8(0x08)
	struct UFortBattlePassTile* FocusedReward; // 0x500(0x08)
	struct TArray<struct UFortBattlePassRewardGrid*> GridPages; // 0x508(0x10)
	char pad_518[0x4]; // 0x518(0x04)
	enum class ERewardPageType RewardPageType; // 0x51c(0x01)
	char pad_51D[0x3]; // 0x51d(0x03)
	int32_t HoldTileTooltip_ClaimedRewardsToHide; // 0x520(0x04)
	int32_t HoldTileTooltip_RequiredBattleStarsToShow; // 0x524(0x04)
	struct FString ClaimToonAFishTooltip_ClaimCheckTemplateId; // 0x528(0x10)
	struct UFortBattlePassTutorialTooltipS22* TutorialTooltip_SecondPageUnlock; // 0x538(0x08)
	struct UFortBattlePassTutorialTooltipS22* TutorialTooltip_ClaimAllRewards; // 0x540(0x08)
	struct UFortBattlePassTutorialTooltipS22* TutorialTooltip_HoldTile; // 0x548(0x08)
	struct UFortBattlePassTutorialTooltipS22* TutorialTooltip_Fishtoon_ClaimToonAFish; // 0x550(0x08)
	struct UFortBattlePassTutorialTooltipS22* TutorialTooltip_Fishtoon_ExploreToCollectInk; // 0x558(0x08)
	struct UFortBattlePassTutorialTooltipS22* TutorialTooltip_Fishtoon_MustUnlockInkColor; // 0x560(0x08)
	struct UFortBattlePassTutorialTooltipS22* TutorialTooltip_Fishtoon_MustCompleteObjective; // 0x568(0x08)
	struct UAthenaSeasonItemData_BattleStar* SeasonData_BattleStar; // 0x570(0x08)
	struct UBattlePassBulkBuyInputData* BulkBuyInputData; // 0x578(0x08)
	char pad_580[0x10]; // 0x580(0x10)

	void OnPageChanged(int32_t PageNumber); // Function BattlePassS22UI.BattlePassRewardPageS22.OnPageChanged // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnInputMethodChanged(enum class ECommonInputType InputType); // Function BattlePassS22UI.BattlePassRewardPageS22.OnInputMethodChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnInitForPageType(enum class ERewardPageType InRewardPageType); // Function BattlePassS22UI.BattlePassRewardPageS22.OnInitForPageType // (Event|Public|BlueprintEvent) // @ game+0xd67374
};

// Class BattlePassS22UI.BattlePassScreenS22
// Size: 0xc48 (Inherited: 0x888)
struct UBattlePassScreenS22 : UBattlePassScreenBase {
	struct UFortBattlePassPurchaseResourcesWidget* ResourcePurchaseScreenClass; // 0x888(0x08)
	char pad_890[0x8]; // 0x890(0x08)
	struct UCommonButtonLegacy* Button_Close; // 0x898(0x08)
	struct UCommonButtonLegacy* Button_CloseMobile; // 0x8a0(0x08)
	struct UCommonButtonBase* Button_BulkBuyRewards; // 0x8a8(0x08)
	struct UCommonButtonLegacy* Button_ToggleViewDetails; // 0x8b0(0x08)
	struct UCommonButtonBase* Button_ToggleViewDetails_Mobile; // 0x8b8(0x08)
	struct UCommonButtonLegacy* Button_ReplayTrailer; // 0x8c0(0x08)
	struct UCommonButtonBase* Button_ReplayTrailer_Mobile; // 0x8c8(0x08)
	struct UCommonButtonLegacy* Button_ShowAbout; // 0x8d0(0x08)
	struct UCommonButtonBase* Button_ShowAbout_Mobile; // 0x8d8(0x08)
	struct UCommonButtonLegacy* Button_ShowAboutCustomization; // 0x8e0(0x08)
	struct UCommonButtonBase* Button_ShowAboutCustomization_Mobile; // 0x8e8(0x08)
	struct UCommonVisibilitySwitcher* MobileVisibilitySwitcher; // 0x8f0(0x08)
	struct UFortBattlePassResourcesWidgetBase* BattlePassCurrencyPanel; // 0x8f8(0x08)
	struct UAthenaExclusiveRewardBanner* AthenaExclusiveRewardBanner; // 0x900(0x08)
	struct UCommonTextBlock* Text_Description; // 0x908(0x08)
	struct UCommonTextBlock* Text_ItemName; // 0x910(0x08)
	struct UAthenaRewardItemTypeRarityTag* ItemRewardTag; // 0x918(0x08)
	struct UCommonTextBlock* Text_SetDetails; // 0x920(0x08)
	struct UCommonVisibilitySwitcher* Switcher_ContextualButtons; // 0x928(0x08)
	struct UFortHoldableButton* Button_BuyLevels; // 0x930(0x08)
	struct UFortHoldableButton* Button_BuyBattlePass; // 0x938(0x08)
	struct UFortHoldableButton* Button_ClaimReward; // 0x940(0x08)
	struct UBorder* Tag_RequiresBP; // 0x948(0x08)
	struct UBorder* Tag_PageLocked; // 0x950(0x08)
	struct UBorder* Tag_BaseItem; // 0x958(0x08)
	struct UBorder* Tag_Prerequisite; // 0x960(0x08)
	struct UBorder* Tag_CompletePage; // 0x968(0x08)
	struct UBorder* Tag_NotEnough_Currency; // 0x970(0x08)
	struct UBorder* Tag_Cost; // 0x978(0x08)
	struct UBorder* Tag_Owned; // 0x980(0x08)
	struct UBorder* Tag_Delayed; // 0x988(0x08)
	char pad_990[0x58]; // 0x990(0x58)
	struct UAthenaSeasonItemData_BattleStar* SeasonData_BattleStar; // 0x9e8(0x08)
	struct UAthenaSeasonItemEntryBase* CurrentSelectedEntry; // 0x9f0(0x08)
	struct TArray<enum class EBattlePassView> SwitcherSubPageTypes; // 0x9f8(0x10)
	struct UCommonVisibilitySwitcher* SubPageSwitcher; // 0xa08(0x08)
	char pad_A10[0xc0]; // 0xa10(0xc0)
	struct UFortItemDefinition* SeasonalBaseCustomizationItem; // 0xad0(0x08)
	bool bHasSubscription; // 0xad8(0x01)
	char pad_AD9[0x3]; // 0xad9(0x03)
	int32_t BattleStarsTooltipHideLevel; // 0xadc(0x04)
	char pad_AE0[0x8]; // 0xae0(0x08)
	struct UFortBattlePassTutorialTooltipS22* TutorialTooltip_BattleStars; // 0xae8(0x08)
	struct UFortBattlePassTutorialTooltipS22* TutorialTooltip_StylePoints; // 0xaf0(0x08)
	char pad_AF8[0x150]; // 0xaf8(0x150)

	void OverviewShowAnimationFinished(); // Function BattlePassS22UI.BattlePassScreenS22.OverviewShowAnimationFinished // (Final|Native|Public|BlueprintCallable) // @ game+0x24841e4
	void OnTransitionItemDetails(bool bTransitionForward); // Function BattlePassS22UI.BattlePassScreenS22.OnTransitionItemDetails // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnSetResourcePrice(int32_t Cost, struct UFortPersistentResourceItemDefinition* PersistentResource); // Function BattlePassS22UI.BattlePassScreenS22.OnSetResourcePrice // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnSetPrerequisiteInfo(struct FText& Description, int32_t OwnedRewards, int32_t NeededRewards, bool bShowPrerequisiteLock); // Function BattlePassS22UI.BattlePassScreenS22.OnSetPrerequisiteInfo // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void OnSetItemPrice(int32_t Cost, enum class EBattlePassCurrencyType CurrencyType); // Function BattlePassS22UI.BattlePassScreenS22.OnSetItemPrice // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnSetDynamicInput(enum class EBattlePassInputs InputType, struct UBattlePassInputData* InputData); // Function BattlePassS22UI.BattlePassScreenS22.OnSetDynamicInput // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnSetClaimedRewardInfo(int32_t OwnedRewards, int32_t TotalRewards); // Function BattlePassS22UI.BattlePassScreenS22.OnSetClaimedRewardInfo // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnLevelChanged(int32_t Level); // Function BattlePassS22UI.BattlePassScreenS22.OnLevelChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnItemDelayed(struct FTimespan Delay); // Function BattlePassS22UI.BattlePassScreenS22.OnItemDelayed // (Event|Protected|HasDefaults|BlueprintEvent) // @ game+0xd67374
	void OnInsufficientResource(struct UFortPersistentResourceItemDefinition* PersistentResource); // Function BattlePassS22UI.BattlePassScreenS22.OnInsufficientResource // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnInsufficientFunds(enum class EBattlePassCurrencyType CurrencyType); // Function BattlePassS22UI.BattlePassScreenS22.OnInsufficientFunds // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnBattlePassOwned(); // Function BattlePassS22UI.BattlePassScreenS22.OnBattlePassOwned // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	bool IsSeasonalCustomizationItemOwned(); // Function BattlePassS22UI.BattlePassScreenS22.IsSeasonalCustomizationItemOwned // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x64cf160
	void HandleSwitcherVisibilityShown(); // Function BattlePassS22UI.BattlePassScreenS22.HandleSwitcherVisibilityShown // (Final|Native|Public|BlueprintCallable) // @ game+0x64cf138
	void HandleClaimRewardComplete(bool bSuccess, struct TArray<struct FString>& OfferTemplateIdList); // Function BattlePassS22UI.BattlePassScreenS22.HandleClaimRewardComplete // (Final|Native|Private|HasOutParms) // @ game+0x64cf04c
	struct FTimespan GetQuestPageDelay(); // Function BattlePassS22UI.BattlePassScreenS22.GetQuestPageDelay // (Final|Native|Protected|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x64cf020
};

// Class BattlePassS22UI.FortBattlePassCustomSkinPageS22
// Size: 0x5b0 (Inherited: 0x598)
struct UFortBattlePassCustomSkinPageS22 : UFortBattlePassCustomSkinPageBase {
	struct FString ClaimBaseItemTooltip_ClaimCheckTemplateId; // 0x598(0x10)
	struct UFortBattlePassTutorialTooltip* TutorialTooltip_ClaimBaseItem; // 0x5a8(0x08)
};

// Class BattlePassS22UI.FortBattlePassResourcesWidgetS22
// Size: 0x310 (Inherited: 0x2f0)
struct UFortBattlePassResourcesWidgetS22 : UFortBattlePassResourcesWidgetBase {
	struct UCommonTextBlock* Text_BattleStarsAmount; // 0x2f0(0x08)
	struct UCommonTextBlock* Text_StylePointsAmount; // 0x2f8(0x08)
	struct UBorder* Border_StylePointsRewardsTag; // 0x300(0x08)
	struct UBorder* Border_BattleStarsRewardsTag; // 0x308(0x08)

	void OnStylePointsRewardsSet(int32_t Rewards); // Function BattlePassS22UI.FortBattlePassResourcesWidgetS22.OnStylePointsRewardsSet // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnBattleStarRewardsSet(int32_t Rewards); // Function BattlePassS22UI.FortBattlePassResourcesWidgetS22.OnBattleStarRewardsSet // (Event|Protected|BlueprintEvent) // @ game+0xd67374
};

// Class BattlePassS22UI.FortBattlePassTutorialTooltipS22
// Size: 0x2f0 (Inherited: 0x2e0)
struct UFortBattlePassTutorialTooltipS22 : UCommonUserWidget {
	struct UCommonRichTextBlock* Text_Tooltip; // 0x2e0(0x08)
	char pad_2E8[0x8]; // 0x2e8(0x08)

	void ShowTooltip(); // Function BattlePassS22UI.FortBattlePassTutorialTooltipS22.ShowTooltip // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void SetText(struct FText Text); // Function BattlePassS22UI.FortBattlePassTutorialTooltipS22.SetText // (Final|Native|Public|BlueprintCallable) // @ game+0x64c2f1c
	void HideTooltip(); // Function BattlePassS22UI.FortBattlePassTutorialTooltipS22.HideTooltip // (Event|Protected|BlueprintEvent) // @ game+0xd67374
};

// Class BattlePassS22UI.RebootRallyQuestPanel
// Size: 0x2b8 (Inherited: 0x2b8)
struct URebootRallyQuestPanel : UUserWidget {

	void OnRebootRallyEligibilityUpdated(bool bEligible); // Function BattlePassS22UI.RebootRallyQuestPanel.OnRebootRallyEligibilityUpdated // (Event|Public|BlueprintEvent) // @ game+0xd67374
};

