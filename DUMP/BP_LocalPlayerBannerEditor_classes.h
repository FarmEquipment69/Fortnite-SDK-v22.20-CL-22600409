// WidgetBlueprintGeneratedClass BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C
// Size: 0x3e9 (Inherited: 0x328)
struct UBP_LocalPlayerBannerEditor_C : UFortPlayerProfileBannerEditor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	struct UIconTextButton_C* ApplyButton; // 0x330(0x08)
	struct UCommonTextBlock* CategoryText; // 0x338(0x08)
	struct UCloseButton_C* CloseButton_Mobile; // 0x340(0x08)
	struct UNormalBangWrapper_C* ColorBangWrapper; // 0x348(0x08)
	struct UCommonTileView* ; // 0x350(0x08)
	struct UIconTextButton_C* EditColorButton; // 0x358(0x08)
	struct UCommonTextBlock* FoundersNoteText; // 0x360(0x08)
	struct UPlayerBanner_C* HomebaseBanner; // 0x368(0x08)
	struct UImage* HomebaseImage; // 0x370(0x08)
	struct UNormalBangWrapper_C* IconBangWrapper; // 0x378(0x08)
	struct UIconTextButton_C* LeftArrowButton; // 0x380(0x08)
	struct UNormalBangWrapper_C* LeftCategoryBang; // 0x388(0x08)
	struct UCommonActionWidget* LeftTriggerAction; // 0x390(0x08)
	struct UIconTextButton_C* RightArrowButton; // 0x398(0x08)
	struct UNormalBangWrapper_C* RightCategoryBang; // 0x3a0(0x08)
	struct UCommonActionWidget* RightTriggerAction; // 0x3a8(0x08)
	struct FMulticastInlineDelegate CloseBannerEditor; // 0x3b0(0x10)
	int32_t IconCategoryIndex; // 0x3c0(0x04)
	int32_t ColorCategoryIndex; // 0x3c4(0x04)
	struct FName CurrentCategory; // 0x3c8(0x04)
	bool bViewingIcons; // 0x3cc(0x01)
	bool bPickingTile; // 0x3cd(0x01)
	char pad_3CE[0x2]; // 0x3ce(0x02)
	struct FName TempChosenIcon; // 0x3d0(0x04)
	struct FName TempChosenColor; // 0x3d4(0x04)
	struct UCommonButtonGroupLegacy* ButtonGroup; // 0x3d8(0x08)
	struct FTimerHandle UpdateBangTimerHandle; // 0x3e0(0x08)
	bool bIsActiveWidget; // 0x3e8(0x01)

	void IsActiveWidget(bool& IsActivated); // Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.IsActiveWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xd67374
	void HandleInputMethodChanged(enum class ECommonInputType InputType); // Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.HandleInputMethodChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Update Category Navigation Visibility(); // Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Update Category Navigation Visibility // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Reset Color Category Index(); // Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Reset Color Category Index // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Reset Icon Category Index(); // Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Reset Icon Category Index // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Update Right Color Category Button Bang State(); // Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Update Right Color Category Button Bang State // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Update Left Color Category Button Bang State(); // Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Update Left Color Category Button Bang State // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Update Right Icon Category Button Bang State(); // Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Update Right Icon Category Button Bang State // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Update Left Icon Category Button Bang State(); // Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Update Left Icon Category Button Bang State // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	int32_t Get Prev Color Category Index(); // Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Get Prev Color Category Index // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xd67374
	int32_t Get Next Color Category Index(); // Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Get Next Color Category Index // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xd67374
	int32_t Get Prev Icon Category Index(); // Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Get Prev Icon Category Index // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xd67374
	int32_t Get Next Icon Category Index(); // Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Get Next Icon Category Index // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xd67374
	void Update Color Button Bang State(); // Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Update Color Button Bang State // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Update Icon Button Bang State(); // Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Update Icon Button Bang State // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Update Bang States(); // Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Update Bang States // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void FoundsPackTextUpdate(); // Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.FoundsPackTextUpdate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Reset Pickers and Views(); // Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Reset Pickers and Views // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Reset for Keyboard and Mouse(); // Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Reset for Keyboard and Mouse // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Update Temp State On Item Selected(struct UObject* Item); // Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Update Temp State On Item Selected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Refresh Apply Button State(); // Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Refresh Apply Button State // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Apply Chosen Item(); // Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Apply Chosen Item // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Set Picking Tile State(bool bPickingTile); // Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Set Picking Tile State // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Attempt Leave Picker(bool& Left); // Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Attempt Leave Picker // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Navigate to Chosen Color(); // Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Navigate to Chosen Color // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Navigate to Chosen Icon(); // Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Navigate to Chosen Icon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnWidgetDeactivated(); // Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.OnWidgetDeactivated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Update Banner Icon Tileview(struct FName CurrentCategory); // Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Update Banner Icon Tileview // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Update Banner Color Tileview(struct FName CurrentCategory); // Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Update Banner Color Tileview // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Increment Color Category Index(); // Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Increment Color Category Index // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Increment Icon Category Index(); // Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Increment Icon Category Index // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Decrement Color Category Index(); // Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Decrement Color Category Index // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Decrement Icon Category Index(); // Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Decrement Icon Category Index // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Previous Category(); // Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Previous Category // (Private|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Next Category(); // Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Next Category // (Private|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Set Current Category(struct FName CurrentCategory); // Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Set Current Category // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Setup Tileview For Colorswatches(struct FName& CategoryRowName); // Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Setup Tileview For Colorswatches // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Setup Tileview For Icons(struct FName CategoryRowName); // Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Setup Tileview For Icons // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnWidgetActivated(); // Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.OnWidgetActivated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Construct(); // Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void BndEvt__EditIconButton_K2Node_ComponentBoundEvent_302_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.BndEvt__EditIconButton_K2Node_ComponentBoundEvent_302_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void BndEvt__EditColorButton_K2Node_ComponentBoundEvent_319_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.BndEvt__EditColorButton_K2Node_ComponentBoundEvent_319_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void BndEvt__EditIconButton_K2Node_ComponentBoundEvent_33_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.BndEvt__EditIconButton_K2Node_ComponentBoundEvent_33_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void BndEvt__EditColorButton_K2Node_ComponentBoundEvent_49_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.BndEvt__EditColorButton_K2Node_ComponentBoundEvent_49_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void RefreshBannerEditor(); // Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.RefreshBannerEditor // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BndEvt__LeftArrowButton_K2Node_ComponentBoundEvent_16_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.BndEvt__LeftArrowButton_K2Node_ComponentBoundEvent_16_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void BndEvt__RightArrowButton_K2Node_ComponentBoundEvent_39_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.BndEvt__RightArrowButton_K2Node_ComponentBoundEvent_39_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void BndEvt__CommonTileView_0_K2Node_ComponentBoundEvent_66_OnListViewItemSelected__DelegateSignature(struct UObject* Item, bool bIsSelected); // Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.BndEvt__CommonTileView_0_K2Node_ComponentBoundEvent_66_OnListViewItemSelected__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void BndEvt__ApplyButton_K2Node_ComponentBoundEvent_363_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.BndEvt__ApplyButton_K2Node_ComponentBoundEvent_363_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void BndEvt__CommonTileView_0_K2Node_ComponentBoundEvent_888_OnListViewItemClicked__DelegateSignature(struct UObject* Item); // Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.BndEvt__CommonTileView_0_K2Node_ComponentBoundEvent_888_OnListViewItemClicked__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void BndEvt__CommonTileView_0_K2Node_ComponentBoundEvent_306_OnListViewItemWidgetCreated__DelegateSignature(struct UUserWidget* Widget); // Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.BndEvt__CommonTileView_0_K2Node_ComponentBoundEvent_306_OnListViewItemWidgetCreated__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void (); // Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C. // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Handle Bang State Changed(); // Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Handle Bang State Changed // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnShowPreviousCategory(); // Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.OnShowPreviousCategory // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnShowNextCategory(); // Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.OnShowNextCategory // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BndEvt__CloseButton_97_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.BndEvt__CloseButton_97_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void BndEvt__Button_CloseEditorButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.BndEvt__Button_CloseEditorButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_BP_LocalPlayerBannerEditor(int32_t EntryPoint); // Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.ExecuteUbergraph_BP_LocalPlayerBannerEditor // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
	void CloseBannerEditor__DelegateSignature(struct FName IconId, struct FName ColorId); // Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.CloseBannerEditor__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
};

