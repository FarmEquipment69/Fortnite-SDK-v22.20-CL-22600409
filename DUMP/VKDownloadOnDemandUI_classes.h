// Class VKDownloadOnDemandUI.DownloadOnDemandAddProjectModal
// Size: 0x440 (Inherited: 0x3f8)
struct UDownloadOnDemandAddProjectModal : UCommonActivatableWidget {
	struct UDownloadOnDemandProject* Project; // 0x3f8(0x08)
	char pad_400[0x10]; // 0x400(0x10)
	struct UEditableTextBox* EditableTextBox_DownloadLinkCode; // 0x410(0x08)
	struct UCommonButtonLegacy* Button_AddProject; // 0x418(0x08)
	struct UCommonButtonLegacy* Button_Cancel; // 0x420(0x08)
	struct UDownloadOnDemandProjectTileImage* ProjectTileImage_Preview; // 0x428(0x08)
	struct UOverlay* Overlay_ProjectTitle; // 0x430(0x08)
	struct UCommonTextBlock* TextBlock_ProjectTitle; // 0x438(0x08)

	void UpdateLightningViolator(enum class ESlateVisibility InVisibility, struct FText& InText); // Function VKDownloadOnDemandUI.DownloadOnDemandAddProjectModal.UpdateLightningViolator // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void HandleDownloadLinkCodeTextChanged(struct FText& InMnemonic); // Function VKDownloadOnDemandUI.DownloadOnDemandAddProjectModal.HandleDownloadLinkCodeTextChanged // (Final|Native|Private|HasOutParms) // @ game+0x6ad6e7c
};

// Class VKDownloadOnDemandUI.DownloadOnDemandMessageModal
// Size: 0x410 (Inherited: 0x3f8)
struct UDownloadOnDemandMessageModal : UCommonActivatableWidget {
	struct UCommonTextBlock* TextBlock_MessageTitle; // 0x3f8(0x08)
	struct UCommonTextBlock* TextBlock_Message; // 0x400(0x08)
	struct UCommonButtonLegacy* Button_Close; // 0x408(0x08)
};

// Class VKDownloadOnDemandUI.DownloadOnDemandProjectAssetTileInitializer
// Size: 0x38 (Inherited: 0x28)
struct UDownloadOnDemandProjectAssetTileInitializer : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct UFortPlaysetPropItemDefinition* PropItemDefinition; // 0x30(0x08)
};

// Class VKDownloadOnDemandUI.DownloadOnDemandProjectAssetTile
// Size: 0x14c0 (Inherited: 0x1480)
struct UDownloadOnDemandProjectAssetTile : UCommonButtonLegacy {
	char pad_1480[0x8]; // 0x1480(0x08)
	struct UDownloadOnDemandProjectAssetTileInitializer* Initializer; // 0x1488(0x08)
	char pad_1490[0x10]; // 0x1490(0x10)
	struct UImage* Image_Item; // 0x14a0(0x08)
	struct UImage* Image_Spinner; // 0x14a8(0x08)
	struct UCommonNumericTextBlock* NumericTextBlock_ItemCount; // 0x14b0(0x08)
	char pad_14B8[0x8]; // 0x14b8(0x08)
};

// Class VKDownloadOnDemandUI.DownloadOnDemandProjectDetailsSidePanel
// Size: 0x2c8 (Inherited: 0x2b8)
struct UDownloadOnDemandProjectDetailsSidePanel : UUserWidget {
	struct UDownloadOnDemandProjectTile* DownloadOnDemandProjectTile_CurrentProjectEntry; // 0x2b8(0x08)
	struct UCreativeContentBrowserItemInfo* ContentBrowserItemInfo_ItemDetails; // 0x2c0(0x08)
};

// Class VKDownloadOnDemandUI.DownloadOnDemandProjectManagementTab
// Size: 0x358 (Inherited: 0x2b8)
struct UDownloadOnDemandProjectManagementTab : UUserWidget {
	char pad_2B8[0x30]; // 0x2b8(0x30)
	struct UDownloadOnDemandProject* Project; // 0x2e8(0x08)
	char pad_2F0[0x10]; // 0x2f0(0x10)
	struct UCommonTextBlock* TextBlock_ProjectTitle; // 0x300(0x08)
	struct UCommonTextBlock* TextBlock_LinkCode; // 0x308(0x08)
	struct UCommonTextBlock* TextBlock_VersionNumber; // 0x310(0x08)
	struct UCommonTextBlock* TextBlock_LatestVersionNumber; // 0x318(0x08)
	struct UImage* Image_LatestVersionSpinner; // 0x320(0x08)
	struct UCommonTextBlock* TextBlock_Description; // 0x328(0x08)
	struct UCommonButtonLegacy* Button_RemoveProject; // 0x330(0x08)
	struct UCommonButtonLegacy* Button_UpdateProject; // 0x338(0x08)
	struct UCommonVisibilitySwitcher* Switcher_Props; // 0x340(0x08)
	struct UCommonTileView* CommonTileView_ProjectAssetTiles; // 0x348(0x08)
	struct UCommonTextBlock* TextBlock_NoPropsMessage; // 0x350(0x08)

	void UpdateProjectConfirmed(); // Function VKDownloadOnDemandUI.DownloadOnDemandProjectManagementTab.UpdateProjectConfirmed // (Final|Native|Protected|BlueprintCallable) // @ game+0x6ad6fe4
	void RemoveProjectConfirmed(); // Function VKDownloadOnDemandUI.DownloadOnDemandProjectManagementTab.RemoveProjectConfirmed // (Final|Native|Protected|BlueprintCallable) // @ game+0x6ad6f40
};

// Class VKDownloadOnDemandUI.DownloadOnDemandProjectTile
// Size: 0x1670 (Inherited: 0x1480)
struct UDownloadOnDemandProjectTile : UCommonButtonLegacy {
	char pad_1480[0x10]; // 0x1480(0x10)
	struct FSlateBrush SelectedHighlightBrush; // 0x1490(0xc0)
	struct FSlateBrush HoveredHighlightBrush; // 0x1550(0xc0)
	bool bIsSelected; // 0x1610(0x01)
	char pad_1611[0x7]; // 0x1611(0x07)
	struct UDownloadOnDemandProject* Project; // 0x1618(0x08)
	char pad_1620[0x10]; // 0x1620(0x10)
	struct UDownloadOnDemandProjectTileImage* ProjectTileImage_Preview; // 0x1630(0x08)
	struct UImage* Image_UpdatePending; // 0x1638(0x08)
	struct UImage* Image_AddProject; // 0x1640(0x08)
	struct UImage* Image_Spinner; // 0x1648(0x08)
	struct UImage* Image_Error; // 0x1650(0x08)
	struct USizeBox* SizeBox_Label; // 0x1658(0x08)
	struct UCommonTextBlock* TextBlock_Label; // 0x1660(0x08)
	struct UCommonBorder* Border_Highlight; // 0x1668(0x08)

	void UpdateLabel(bool bShowLabel); // Function VKDownloadOnDemandUI.DownloadOnDemandProjectTile.UpdateLabel // (Final|Native|Public|BlueprintCallable) // @ game+0x6ad6f64
	void OnLabelUpdated(); // Function VKDownloadOnDemandUI.DownloadOnDemandProjectTile.OnLabelUpdated // (Event|Protected|BlueprintEvent) // @ game+0xd67374
};

// Class VKDownloadOnDemandUI.DownloadOnDemandProjectTileImage
// Size: 0x2f0 (Inherited: 0x2b8)
struct UDownloadOnDemandProjectTileImage : UUserWidget {
	struct UTexture* EmptyProjectTexture; // 0x2b8(0x08)
	char bOverrideGrayScale : 1; // 0x2c0(0x01)
	char pad_2C0_1 : 7; // 0x2c0(0x01)
	char pad_2C1[0x3]; // 0x2c1(0x03)
	float GreyScaleOverride; // 0x2c4(0x04)
	struct UDownloadOnDemandProject* Project; // 0x2c8(0x08)
	char pad_2D0[0x10]; // 0x2d0(0x10)
	struct UImage* Image_ProjectPreview; // 0x2e0(0x08)
	struct UImage* Image_LoadingImageSpinner; // 0x2e8(0x08)
};

// Class VKDownloadOnDemandUI.DownloadOnDemandStatusFeed
// Size: 0x2c8 (Inherited: 0x2b8)
struct UDownloadOnDemandStatusFeed : UUserWidget {
	bool bOverrideOldStatusWithNewStatus; // 0x2b8(0x01)
	char pad_2B9[0x7]; // 0x2b9(0x07)
	struct UFortDynamicEntryBox* EntryBox_DownloadStatusContainer; // 0x2c0(0x08)
};

// Class VKDownloadOnDemandUI.DownloadOnDemandStatusFeedLine
// Size: 0x2c0 (Inherited: 0x2b8)
struct UDownloadOnDemandStatusFeedLine : UUserWidget {
	struct UCommonTextBlock* TextBlock_DownloadStatus; // 0x2b8(0x08)
};

// Class VKDownloadOnDemandUI.DownloadOnDemandTabPanel
// Size: 0x4e8 (Inherited: 0x440)
struct UDownloadOnDemandTabPanel : UFortCreativeContentBrowserTabPanelBase {
	struct FDataTableRowHandle AddProjectWithLinkCodeInputRowHandle; // 0x440(0x10)
	struct FDataTableRowHandle AddSelectedProjectInputRowHandle; // 0x450(0x10)
	struct FDataTableRowHandle ManageSelectedProjectInputRowHandle; // 0x460(0x10)
	struct UDownloadOnDemandProjectDetailsSidePanel* DownloadOnDemandProjectDetailsSidePanelClass; // 0x470(0x08)
	struct UDownloadOnDemandAddProjectModal* DownloadOnDemandAddProjectModalClass; // 0x478(0x08)
	struct UDownloadOnDemandMessageModal* DownloadOnDemandMessageModalClass; // 0x480(0x08)
	struct FString AddProjectsWithMnemonicEntitlementName; // 0x488(0x10)
	struct UDownloadOnDemandProject* SelectedProject; // 0x498(0x08)
	char pad_4A0[0x10]; // 0x4a0(0x10)
	struct UOverlay* Overlay_AddProjectParent; // 0x4b0(0x08)
	struct UCommonTileView* CommonTileView_ProjectTiles; // 0x4b8(0x08)
	struct UCommonVisibilitySwitcher* Switcher_DownloadOnDemandPanels; // 0x4c0(0x08)
	struct UCommonButtonLegacy* Button_AddProject; // 0x4c8(0x08)
	struct UHorizontalBox* HorizontalBox_EntitlementCheckMessage; // 0x4d0(0x08)
	struct UHorizontalBox* HorizontalBox_EntitlementCheckFailed; // 0x4d8(0x08)
	struct UDownloadOnDemandProjectManagementTab* ProjectManagementTab; // 0x4e0(0x08)
};

// Class VKDownloadOnDemandUI.DownloadOnDemandTab_EntitlementCreationCondition
// Size: 0x38 (Inherited: 0x28)
struct UDownloadOnDemandTab_EntitlementCreationCondition : UCreativeContentBrowserTab_CreationCondition {
	struct FString EntitlementName; // 0x28(0x10)
};

