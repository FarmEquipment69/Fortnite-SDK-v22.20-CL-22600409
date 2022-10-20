// WidgetBlueprintGeneratedClass OptionsMenuSetting.OptionsMenuSetting_C
// Size: 0x3e0 (Inherited: 0x360)
struct UOptionsMenuSetting_C : UFortOptionsMenuSetting {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x360(0x08)
	struct UButton* ; // 0x368(0x08)
	struct UIconTextButton_C* ButtonTouchTooltip; // 0x370(0x08)
	struct UHorizontalBox* HorizontalBox_Right; // 0x378(0x08)
	struct UMenuAnchor* MenuAnchorSettingDescription; // 0x380(0x08)
	struct USizeBox* SizeBoxContainer; // 0x388(0x08)
	struct USizeBox* SizeBoxLabel; // 0x390(0x08)
	struct UImage* SliderBackground; // 0x398(0x08)
	struct UCommonTextBlock* SliderText; // 0x3a0(0x08)
	struct UCommonTextBlock* SliderValue; // 0x3a8(0x08)
	struct USpacer* Spacer_Right; // 0x3b0(0x08)
	struct USpacer* SpacerBottom; // 0x3b8(0x08)
	struct UMaterialInstanceDynamic* Slider Texture; // 0x3c0(0x08)
	enum class ERoundingMode RoundingMode; // 0x3c8(0x01)
	char pad_3C9[0x7]; // 0x3c9(0x07)
	struct FVector2D ToolTipSizeMobile; // 0x3d0(0x10)

	void SetFontSize(struct UCommonTextBlock* Text, int32_t DefaulFontSize, int32_t MobileFont); // Function OptionsMenuSetting.OptionsMenuSetting_C.SetFontSize // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Update Visuals_BP(); // Function OptionsMenuSetting.OptionsMenuSetting_C.Update Visuals_BP // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ConvertSettingsValueToSliderValue(double SettingsValue, double& SliderValue); // Function OptionsMenuSetting.OptionsMenuSetting_C.ConvertSettingsValueToSliderValue // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xd67374
	void UpdateSliderTexture(); // Function OptionsMenuSetting.OptionsMenuSetting_C.UpdateSliderTexture // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ConvertSliderValueToSettingsValue(double SliderValue, double& SettingsValue); // Function OptionsMenuSetting.OptionsMenuSetting_C.ConvertSliderValueToSettingsValue // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xd67374
	void SetSliderTextRenderScale(double Scale Normalized); // Function OptionsMenuSetting.OptionsMenuSetting_C.SetSliderTextRenderScale // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Hide Tooltip(); // Function OptionsMenuSetting.OptionsMenuSetting_C.Hide Tooltip // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Show Tooltip(); // Function OptionsMenuSetting.OptionsMenuSetting_C.Show Tooltip // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	struct UUserWidget* OnGetUserMenuContent(); // Function OptionsMenuSetting.OptionsMenuSetting_C.OnGetUserMenuContent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xd67374
	void HandlePawnSet(); // Function OptionsMenuSetting.OptionsMenuSetting_C.HandlePawnSet // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UpdateSize(); // Function OptionsMenuSetting.OptionsMenuSetting_C.UpdateSize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnListItemObjectSet(struct UObject* ListItemObject); // Function OptionsMenuSetting.OptionsMenuSetting_C.OnListItemObjectSet // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BndEvt__ButtonTouchTooltip_K2Node_ComponentBoundEvent_69_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function OptionsMenuSetting.OptionsMenuSetting_C.BndEvt__ButtonTouchTooltip_K2Node_ComponentBoundEvent_69_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void BndEvt__MenuSlider_K2Node_ComponentBoundEvent_86_OnMouseCaptureEndEvent__DelegateSignature(); // Function OptionsMenuSetting.OptionsMenuSetting_C.BndEvt__MenuSlider_K2Node_ComponentBoundEvent_86_OnMouseCaptureEndEvent__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void BndEvt__MenuSlider_K2Node_ComponentBoundEvent_107_OnControllerCaptureEndEvent__DelegateSignature(); // Function OptionsMenuSetting.OptionsMenuSetting_C.BndEvt__MenuSlider_K2Node_ComponentBoundEvent_107_OnControllerCaptureEndEvent__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void BndEvt__MenuSlider_K2Node_ComponentBoundEvent_9_OnFloatValueChangedEvent__DelegateSignature(float Value); // Function OptionsMenuSetting.OptionsMenuSetting_C.BndEvt__MenuSlider_K2Node_ComponentBoundEvent_9_OnFloatValueChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void BndEvt__MenuSlider_K2Node_ComponentBoundEvent_124_OnFloatValueChangedEvent__DelegateSignature(float Value); // Function OptionsMenuSetting.OptionsMenuSetting_C.BndEvt__MenuSlider_K2Node_ComponentBoundEvent_124_OnFloatValueChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void BP_OnItemExpansionChanged(bool bIsExpanded); // Function OptionsMenuSetting.OptionsMenuSetting_C.BP_OnItemExpansionChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnEntryReleased(); // Function OptionsMenuSetting.OptionsMenuSetting_C.BP_OnEntryReleased // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function OptionsMenuSetting.OptionsMenuSetting_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function OptionsMenuSetting.OptionsMenuSetting_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void Refresh(); // Function OptionsMenuSetting.OptionsMenuSetting_C.Refresh // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Construct(); // Function OptionsMenuSetting.OptionsMenuSetting_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void BP_OnItemSelectionChanged(bool bIsSelected); // Function OptionsMenuSetting.OptionsMenuSetting_C.BP_OnItemSelectionChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void UpdateVisuals(); // Function OptionsMenuSetting.OptionsMenuSetting_C.UpdateVisuals // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_OptionsMenuSetting(int32_t EntryPoint); // Function OptionsMenuSetting.OptionsMenuSetting_C.ExecuteUbergraph_OptionsMenuSetting // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

