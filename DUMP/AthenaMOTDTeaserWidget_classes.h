// WidgetBlueprintGeneratedClass AthenaMOTDTeaserWidget.AthenaMOTDTeaserWidget_C
// Size: 0x3a0 (Inherited: 0x328)
struct UAthenaMOTDTeaserWidget_C : UFortAthenaMOTDTeaserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	struct UWidgetAnimation* OnHovered; // 0x330(0x08)
	struct UBorder* Border_Details; // 0x338(0x08)
	struct UBorder* Border_PipDisplay; // 0x340(0x08)
	struct UCommonActionWidget* InputActionWidget; // 0x348(0x08)
	struct UOverlay* ; // 0x350(0x08)
	struct UCommonRichTextBlock* RichTextBlock_NewsTitle; // 0x358(0x08)
	struct USimpleCommonButton_C* SimpleCommonButton; // 0x360(0x08)
	double PerItemDisplayTime; // 0x368(0x08)
	int32_t NumItems; // 0x370(0x04)
	int32_t CurDisplayedItemIndex; // 0x374(0x04)
	struct FTimerHandle ScrollToNextItemTimerHandle; // 0x378(0x08)
	bool DesignTime; // 0x380(0x01)
	char pad_381[0x7]; // 0x381(0x07)
	struct UMaterialInstanceDynamic* MIDFont; // 0x388(0x08)
	struct FLinearColor DefaultColor; // 0x390(0x10)

	void SetDynamicColors(struct FLinearColor DarkColor, struct FLinearColor LightColor); // Function AthenaMOTDTeaserWidget.AthenaMOTDTeaserWidget_C.SetDynamicColors // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UpdateCurDisplayedNewsVisual(); // Function AthenaMOTDTeaserWidget.AthenaMOTDTeaserWidget_C.UpdateCurDisplayedNewsVisual // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void PreConstruct(bool IsDesignTime); // Function AthenaMOTDTeaserWidget.AthenaMOTDTeaserWidget_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void Construct(); // Function AthenaMOTDTeaserWidget.AthenaMOTDTeaserWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void BndEvt__FortAthenaMOTDTileListView_K2Node_ComponentBoundEvent_0_OnListEntryGeneratedDynamic__DelegateSignature(struct UUserWidget* Widget); // Function AthenaMOTDTeaserWidget.AthenaMOTDTeaserWidget_C.BndEvt__FortAthenaMOTDTileListView_K2Node_ComponentBoundEvent_0_OnListEntryGeneratedDynamic__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void ScrollNextItem(); // Function AthenaMOTDTeaserWidget.AthenaMOTDTeaserWidget_C.ScrollNextItem // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void BndEvt__FortAthenaMOTDTileListView_K2Node_ComponentBoundEvent_1_OnListEntryReleasedDynamic__DelegateSignature(struct UUserWidget* Widget); // Function AthenaMOTDTeaserWidget.AthenaMOTDTeaserWidget_C.BndEvt__FortAthenaMOTDTileListView_K2Node_ComponentBoundEvent_1_OnListEntryReleasedDynamic__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void HandleEntryWidgetHoveredChanged(bool NewIsHovered); // Function AthenaMOTDTeaserWidget.AthenaMOTDTeaserWidget_C.HandleEntryWidgetHoveredChanged // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void BndEvt__SimpleCommonButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function AthenaMOTDTeaserWidget.AthenaMOTDTeaserWidget_C.BndEvt__SimpleCommonButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void OnNewsPopulated(); // Function AthenaMOTDTeaserWidget.AthenaMOTDTeaserWidget_C.OnNewsPopulated // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnClicked(struct UCommonButtonLegacy* Button); // Function AthenaMOTDTeaserWidget.AthenaMOTDTeaserWidget_C.OnClicked // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_AthenaMOTDTeaserWidget(int32_t EntryPoint); // Function AthenaMOTDTeaserWidget.AthenaMOTDTeaserWidget_C.ExecuteUbergraph_AthenaMOTDTeaserWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

