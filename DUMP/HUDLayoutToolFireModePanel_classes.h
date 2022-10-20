// WidgetBlueprintGeneratedClass HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C
// Size: 0x678 (Inherited: 0x588)
struct UHUDLayoutToolFireModePanel_C : UHUDLayoutToolFireModePanel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x588(0x08)
	struct UWidgetAnimation* ScreenTutorial; // 0x590(0x08)
	struct UWidgetAnimation* OnOpen; // 0x598(0x08)
	struct UHorizontalBox* AutofireBox; // 0x5a0(0x08)
	struct UFortCheckbox_C* AutofireCheckbox; // 0x5a8(0x08)
	struct UCommonWidgetSwitcherLegacy* ; // 0x5b0(0x08)
	struct UIconTextButton_C* CustomButton; // 0x5b8(0x08)
	struct UOverlay* CustomOverlay; // 0x5c0(0x08)
	struct UHorizontalBox* DedicatedButtonBox; // 0x5c8(0x08)
	struct UFortCheckbox_C* DedicatedButtonCheckbox; // 0x5d0(0x08)
	struct UIconTextButton_C* DismissDialogue; // 0x5d8(0x08)
	struct UFireModeSelectTile_C* FireMode_AutoFire; // 0x5e0(0x08)
	struct UFireModeSelectTile_C* FireMode_FireButton; // 0x5e8(0x08)
	struct UFireModeSelectTile_C* FireMode_TapToShoot; // 0x5f0(0x08)
	struct UCommonTextBlock* FireModeOptionTutorialMessage; // 0x5f8(0x08)
	struct UWidgetSwitcher* ModeButtonSwitcher; // 0x600(0x08)
	struct UOverlay* PresetOverlay; // 0x608(0x08)
	struct UIconTextButton_C* PresetsButton; // 0x610(0x08)
	struct UCommonTextBlock* PreviewDescriptionText; // 0x618(0x08)
	struct USafeZone* ; // 0x620(0x08)
	struct UWidgetSwitcher* SelectionTypeSwitcher; // 0x628(0x08)
	struct UHorizontalBox* TapAnywhereBox; // 0x630(0x08)
	struct UFortCheckbox_C* TapAnywhereCheckbox; // 0x638(0x08)
	struct UCommonTextBlock* TextDescription; // 0x640(0x08)
	struct UIconTextButton_C* TutorialConfirm; // 0x648(0x08)
	struct TArray<struct UFireModeSelectTile_C*> FireOptionTiles; // 0x650(0x10)
	struct UFireModeSelectTile_C* CurSelectedTile; // 0x660(0x08)
	struct FTimerHandle MoviePlayTimer; // 0x668(0x08)
	struct UFireModeSelectTile_C* NextPanelToPlay; // 0x670(0x08)

	void UpdateSelectButtonVisibility(); // Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.UpdateSelectButtonVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UpdatePresetTileVisibilities(); // Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.UpdatePresetTileVisibilities // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void PlayTileMovie(); // Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.PlayTileMovie // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void IsInCustomMode(bool& IsCustom); // Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.IsInCustomMode // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xd67374
	void UpdateCustomModeCheckboxes(); // Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.UpdateCustomModeCheckboxes // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void InitButtonBindings(struct TArray<struct UHUDLayoutToolFireModeButton*>& ArrayOfFireModeButtons); // Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.InitButtonBindings // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void HandlePresetTileSelected(struct UFireModeSelectTile_C* Tile); // Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.HandlePresetTileSelected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void PlayCurFocusedTileMovie(struct UFireModeSelectTile_C* CurFocusedTile); // Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.PlayCurFocusedTileMovie // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void HandleTileButtonFocused(struct UFireModeSelectTile_C* Tile); // Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.HandleTileButtonFocused // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void NewTileSelected(struct UFireModeSelectTile_C* Tile); // Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.NewTileSelected // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetOpenState(bool bNewOpenState); // Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.SetOpenState // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void BndEvt__IconTextButton_K2Node_ComponentBoundEvent_84_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_84_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void Construct(); // Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void BndEvt__TutorialConfirm_K2Node_ComponentBoundEvent_185_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.BndEvt__TutorialConfirm_K2Node_ComponentBoundEvent_185_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void BndEvt__CustomButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.BndEvt__CustomButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void BndEvt__PresetsButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.BndEvt__PresetsButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void BndEvt__AutofireCheckbox_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature(); // Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.BndEvt__AutofireCheckbox_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void BndEvt__TapAnywhereCheckbox_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature(); // Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.BndEvt__TapAnywhereCheckbox_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void BndEvt__DedicatedButtonCheckbox_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature(); // Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.BndEvt__DedicatedButtonCheckbox_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void DeselectTile(struct UFireModeSelectTile_C* Tile); // Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.DeselectTile // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Destruct(); // Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_HUDLayoutToolFireModePanel(int32_t EntryPoint); // Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.ExecuteUbergraph_HUDLayoutToolFireModePanel // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

