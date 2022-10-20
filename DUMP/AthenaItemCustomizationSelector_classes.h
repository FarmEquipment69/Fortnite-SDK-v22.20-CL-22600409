// WidgetBlueprintGeneratedClass AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C
// Size: 0xb51 (Inherited: 0x9a0)
struct UAthenaItemCustomizationSelector_C : UAthenaItemSelectorScreenBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x9a0(0x08)
	struct UWidgetAnimation* ExitArchiving; // 0x9a8(0x08)
	struct UWidgetAnimation* EnterArchiving; // 0x9b0(0x08)
	struct UWidgetAnimation* PulseAnim; // 0x9b8(0x08)
	struct UWidgetAnimation* ItemInfoIntroOutro; // 0x9c0(0x08)
	struct UWidgetAnimation* Intro; // 0x9c8(0x08)
	struct UHorizontalBox* ArchivingHB; // 0x9d0(0x08)
	struct UImage* ArchivingIcon; // 0x9d8(0x08)
	struct UFortTextButton_C* Button_HitBlockerLeft; // 0x9e0(0x08)
	struct UFortTextButton_C* Button_HitBlockerRight; // 0x9e8(0x08)
	struct UOverlay* CameraFrameContainer; // 0x9f0(0x08)
	struct UHorizontalBox* ExclusiveCalloutBox; // 0x9f8(0x08)
	struct UCommonRichTextBlock* ExclusiveCalloutText; // 0xa00(0x08)
	struct UCommonTextBlock* Label_Archiving; // 0xa08(0x08)
	struct USafeZone* LeftSideContentSZ; // 0xa10(0x08)
	struct USafeZone* RightSideContentSZ; // 0xa18(0x08)
	struct USafeZone* SafeZone_ButtonsBar; // 0xa20(0x08)
	struct UCommonBorder* SafezonePaddingReductionCB; // 0xa28(0x08)
	struct USizeBox* SB_MainContent; // 0xa30(0x08)
	struct UScaleBox* ScaleBox_Mobile; // 0xa38(0x08)
	struct UScaleBox* ScaleBox_Mobile2; // 0xa40(0x08)
	struct UScaleBox* ScaleBox_Mobile3; // 0xa48(0x08)
	struct UCommonTextBlock* ShortDescriptionText; // 0xa50(0x08)
	struct UImage* SlotImage; // 0xa58(0x08)
	struct UImage* Vignette; // 0xa60(0x08)
	struct UCommonWidgetSwitcherLegacy* WidgetSwitcher_InteractionMethod; // 0xa68(0x08)
	struct UCommonWidgetSwitcherLegacy* WidgetSwitcher_ItemEditor; // 0xa70(0x08)
	bool bPickingStyle; // 0xa78(0x01)
	bool bHandledBackRequest; // 0xa79(0x01)
	char pad_A7A[0x6]; // 0xa7a(0x06)
	struct FTimerHandle AutoHideInfoPanelEventTimer; // 0xa80(0x08)
	struct FTimerHandle TextEntryTimer; // 0xa88(0x08)
	int32_t SeasonFilter; // 0xa90(0x04)
	int32_t MaxSeason; // 0xa94(0x04)
	double ItemInfoHideDelayTime; // 0xa98(0x08)
	struct FSlateFontInfo TitleFontArchive; // 0xaa0(0x58)
	struct FSlateFontInfo TitleFontDefault; // 0xaf8(0x58)
	enum class ELockerScreenState LockerStateCache; // 0xb50(0x01)

	void UpdateArchivingButtonText(int32_t MarkedCount); // Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.UpdateArchivingButtonText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UpdateSeasonButtonEnabledState(); // Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.UpdateSeasonButtonEnabledState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	struct UMaterialInstance* GetCategoryImage(enum class EAthenaCustomizationCategory Index, struct UMaterialInstance* OverrideImage); // Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.GetCategoryImage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xd67374
	void HandleItemSetupFinished(struct FText InText, enum class EAthenaCustomizationCategory category, struct UMaterialInstance* OverrideImage); // Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.HandleItemSetupFinished // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void GetCurrentItemCosmeticDefinition(struct UAthenaCosmeticItemDefinition*& Cosmetic Item Definition); // Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.GetCurrentItemCosmeticDefinition // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void HandleBack(bool& PassThrough); // Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.HandleBack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Construct(); // Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void BP_OnActivated(); // Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnTabSelectionChanged(bool bShowingVariants); // Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.OnTabSelectionChanged // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnCurrentItemChanged(struct UFortItem* SelectedItem); // Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.OnCurrentItemChanged // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnFinishedItemSetup(struct FText& CategoryDisplayName, struct FText& ItemDisplayTypeName, enum class EAthenaCustomizationCategory SelectedCategory, struct UMaterialInstance* OverrideSlotImage); // Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.OnFinishedItemSetup // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void HandleAlternateActionHoveredChanged(bool bIsHovered); // Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.HandleAlternateActionHoveredChanged // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void HandleTextChanged(struct FText NewText); // Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.HandleTextChanged // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnHideItemInfoHeader(bool bShouldHide); // Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.OnHideItemInfoHeader // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnUpdateExclusiveItemCallout(bool bShouldShow, struct FText& CalloutText); // Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.OnUpdateExclusiveItemCallout // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void HandleShowInfoPanel(struct UFortItem* SelectedItem); // Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.HandleShowInfoPanel // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void HandleHideInfoPanel(); // Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.HandleHideInfoPanel // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void BP_HandleBack(); // Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.BP_HandleBack // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BndEvt__Blade_SortAndFilter_K2Node_ComponentBoundEvent_3_OnVisibilityChangedEvent__DelegateSignature(enum class ESlateVisibility InVisibility); // Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.BndEvt__Blade_SortAndFilter_K2Node_ComponentBoundEvent_3_OnVisibilityChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void BndEvt__Button_HitBlockerLeft_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.BndEvt__Button_HitBlockerLeft_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void BndEvt__Button_HitBlockerRight_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.BndEvt__Button_HitBlockerRight_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void OnFinishedItemSave(); // Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.OnFinishedItemSave // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnLockerScreenStateChanged(); // Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.OnLockerScreenStateChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void HandlePickerMarkedItemsChanged(int32_t MarkedCount); // Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.HandlePickerMarkedItemsChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnPreviewActionButtonUpdated(struct FText& RowDisplayName); // Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.OnPreviewActionButtonUpdated // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void OnShowLockerArchivingCleanupTooltip(bool bShowTooltip); // Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.OnShowLockerArchivingCleanupTooltip // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnShowArchiveModeTooltip(bool bShowTooltip); // Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.OnShowArchiveModeTooltip // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnUpdateArchiveModeTooltipText(struct FText& Text); // Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.OnUpdateArchiveModeTooltipText // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void BndEvt__AthenaItemCustomizationSelector_Tooltip_LockerArchivingCleanup_K2Node_ComponentBoundEvent_1_OnDismissed__DelegateSignature(); // Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.BndEvt__AthenaItemCustomizationSelector_Tooltip_LockerArchivingCleanup_K2Node_ComponentBoundEvent_1_OnDismissed__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void BndEvt__AthenaItemCustomizationSelector_Tooltip_ArchiveMode_K2Node_ComponentBoundEvent_2_OnDismissed__DelegateSignature(); // Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.BndEvt__AthenaItemCustomizationSelector_Tooltip_ArchiveMode_K2Node_ComponentBoundEvent_2_OnDismissed__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void BndEvt__AthenaItemCustomizationSelector_Tooltip_ShowArchivedItems_K2Node_ComponentBoundEvent_7_OnDismissed__DelegateSignature(); // Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.BndEvt__AthenaItemCustomizationSelector_Tooltip_ShowArchivedItems_K2Node_ComponentBoundEvent_7_OnDismissed__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void OnShowArchivedItemsTooltip(bool bShowTooltip); // Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.OnShowArchivedItemsTooltip // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnUpdateLockerArchivingCleanupTooltipText(struct FText& Text); // Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.OnUpdateLockerArchivingCleanupTooltipText // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void OnUpdateArchivedItemsTooltipText(struct FText& Text); // Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.OnUpdateArchivedItemsTooltipText // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void PreConstruct(bool IsDesignTime); // Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnInitialized(); // Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnInputMethodChanged(enum class ECommonInputType bNewInputType); // Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.OnInputMethodChanged // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_AthenaItemCustomizationSelector(int32_t EntryPoint); // Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.ExecuteUbergraph_AthenaItemCustomizationSelector // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

