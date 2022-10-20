// WidgetBlueprintGeneratedClass ActivityBrowserSoloButton.ActivityBrowserSoloButton_C
// Size: 0x1628 (Inherited: 0x1570)
struct UActivityBrowserSoloButton_C : UFortActivityBrowserSoloButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1570(0x08)
	struct UWidgetAnimation* Pressed; // 0x1578(0x08)
	struct UWidgetAnimation* Hover; // 0x1580(0x08)
	struct UBorder* ButtonMaterialBorder; // 0x1588(0x08)
	struct UBorder* DynamicPaddingBorder; // 0x1590(0x08)
	struct USizeBox* MinSizesSB; // 0x1598(0x08)
	double TextShearX; // 0x15a0(0x08)
	double TextShearY; // 0x15a8(0x08)
	struct FMargin TextPadding; // 0x15b0(0x10)
	bool IsDisabled; // 0x15c0(0x01)
	char pad_15C1[0x7]; // 0x15c1(0x07)
	struct UMaterialInterface* ButtonMaterial; // 0x15c8(0x08)
	double ButtonSharpnessX; // 0x15d0(0x08)
	double ButtonSharpnessY; // 0x15d8(0x08)
	double UseBoxScalingX; // 0x15e0(0x08)
	double UseBoxScalingY; // 0x15e8(0x08)
	double ButtonBoxScaleSizeX; // 0x15f0(0x08)
	double ButtonBoxScaleSizeY; // 0x15f8(0x08)
	struct FName DisabledParamName; // 0x1600(0x04)
	struct FName SharpnessVParamName; // 0x1604(0x04)
	struct FName SharpnessUParamName; // 0x1608(0x04)
	struct FName UseBoxScaleUParamName; // 0x160c(0x04)
	struct FName UseBoxScaleVParamName; // 0x1610(0x04)
	bool HideButtonBackingOnGamepad; // 0x1614(0x01)
	bool ShouldPlayReversed; // 0x1615(0x01)
	char pad_1616[0x2]; // 0x1616(0x02)
	double HoverAnimateVar; // 0x1618(0x08)
	double PressedAnimateVar; // 0x1620(0x08)

	void SetPressedAnimateVar(double NewValue); // Function ActivityBrowserSoloButton.ActivityBrowserSoloButton_C.SetPressedAnimateVar // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetHoverAnimateVar(double NewValue); // Function ActivityBrowserSoloButton.ActivityBrowserSoloButton_C.SetHoverAnimateVar // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void MakeButtonBrush(struct UObject* ResourceObject, struct FSlateBrush& SlateBrush); // Function ActivityBrowserSoloButton.ActivityBrowserSoloButton_C.MakeButtonBrush // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Toggle Mobile Overrides(bool bApplyMobileOverrides); // Function ActivityBrowserSoloButton.ActivityBrowserSoloButton_C.Toggle Mobile Overrides // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UpdateStylingOnInputType(enum class ECommonInputType Index); // Function ActivityBrowserSoloButton.ActivityBrowserSoloButton_C.UpdateStylingOnInputType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ResetMaterials(); // Function ActivityBrowserSoloButton.ActivityBrowserSoloButton_C.ResetMaterials // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ResetFontMaterial(); // Function ActivityBrowserSoloButton.ActivityBrowserSoloButton_C.ResetFontMaterial // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetButtonMaterial(); // Function ActivityBrowserSoloButton.ActivityBrowserSoloButton_C.SetButtonMaterial // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetText(struct FText Text); // Function ActivityBrowserSoloButton.ActivityBrowserSoloButton_C.SetText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetTextStyle(); // Function ActivityBrowserSoloButton.ActivityBrowserSoloButton_C.SetTextStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Finished_3B04A1D04A2128E7C8B3D5BC22792871(); // Function ActivityBrowserSoloButton.ActivityBrowserSoloButton_C.Finished_3B04A1D04A2128E7C8B3D5BC22792871 // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void BP_OnHovered(); // Function ActivityBrowserSoloButton.ActivityBrowserSoloButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnUnhovered(); // Function ActivityBrowserSoloButton.ActivityBrowserSoloButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnClicked(); // Function ActivityBrowserSoloButton.ActivityBrowserSoloButton_C.BP_OnClicked // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnDisabled(); // Function ActivityBrowserSoloButton.ActivityBrowserSoloButton_C.BP_OnDisabled // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnEnabled(); // Function ActivityBrowserSoloButton.ActivityBrowserSoloButton_C.BP_OnEnabled // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnSelected(); // Function ActivityBrowserSoloButton.ActivityBrowserSoloButton_C.BP_OnSelected // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnDeselected(); // Function ActivityBrowserSoloButton.ActivityBrowserSoloButton_C.BP_OnDeselected // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void EventOnInputMethodChanged(enum class ECommonInputType bNewInputType); // Function ActivityBrowserSoloButton.ActivityBrowserSoloButton_C.EventOnInputMethodChanged // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void PreConstruct(bool IsDesignTime); // Function ActivityBrowserSoloButton.ActivityBrowserSoloButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void Construct(); // Function ActivityBrowserSoloButton.ActivityBrowserSoloButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void Destruct(); // Function ActivityBrowserSoloButton.ActivityBrowserSoloButton_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnVisibilityChange(enum class ESlateVisibility InVisibility); // Function ActivityBrowserSoloButton.ActivityBrowserSoloButton_C.OnVisibilityChange // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_ActivityBrowserSoloButton(int32_t EntryPoint); // Function ActivityBrowserSoloButton.ActivityBrowserSoloButton_C.ExecuteUbergraph_ActivityBrowserSoloButton // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

