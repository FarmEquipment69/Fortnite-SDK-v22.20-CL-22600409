// WidgetBlueprintGeneratedClass ActivitySquadFillButton.ActivitySquadFillButton_C
// Size: 0x1521 (Inherited: 0x1450)
struct UActivitySquadFillButton_C : UFortActivitySquadFillButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1450(0x08)
	struct UWidgetAnimation* Pressed; // 0x1458(0x08)
	struct UWidgetAnimation* Hover; // 0x1460(0x08)
	struct UImage* Image_BG; // 0x1468(0x08)
	struct USafeZone* SafeZone; // 0x1470(0x08)
	struct UCommonVisibilitySwitcher* Switcher_Fill; // 0x1478(0x08)
	struct UCommonTextBlock* Text_Title; // 0x1480(0x08)
	struct UTextToggle_C* TextToggle; // 0x1488(0x08)
	struct FText Button Description; // 0x1490(0x18)
	double TextShearX; // 0x14a8(0x08)
	double TextShearY; // 0x14b0(0x08)
	struct FMargin TextPadding; // 0x14b8(0x10)
	bool IsDisabled; // 0x14c8(0x01)
	char pad_14C9[0x7]; // 0x14c9(0x07)
	struct UMaterialInterface* ButtonMaterial; // 0x14d0(0x08)
	double ButtonSharpnessX; // 0x14d8(0x08)
	double ButtonSharpnessY; // 0x14e0(0x08)
	double UseBoxScalingX; // 0x14e8(0x08)
	double UseBoxScalingY; // 0x14f0(0x08)
	double ButtonBoxScaleSizeX; // 0x14f8(0x08)
	double ButtonBoxScaleSizeY; // 0x1500(0x08)
	struct FName DisabledParamName; // 0x1508(0x04)
	struct FName SharpnessVParamName; // 0x150c(0x04)
	struct FName SharpnessUParamName; // 0x1510(0x04)
	struct FName UseBoxScaleUParamName; // 0x1514(0x04)
	struct FName UseBoxScaleVParamName; // 0x1518(0x04)
	bool HideButtonBackingOnGamepad; // 0x151c(0x01)
	bool ShouldPlayReversed; // 0x151d(0x01)
	bool PadLeft; // 0x151e(0x01)
	bool PadRight; // 0x151f(0x01)
	bool Is Fill Only Enabled; // 0x1520(0x01)

	void Finished_147E379D49BEF6766075069D8A2DDE6F(); // Function ActivitySquadFillButton.ActivitySquadFillButton_C.Finished_147E379D49BEF6766075069D8A2DDE6F // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void BP_OnHovered(); // Function ActivitySquadFillButton.ActivitySquadFillButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnUnhovered(); // Function ActivitySquadFillButton.ActivitySquadFillButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnClicked(); // Function ActivitySquadFillButton.ActivitySquadFillButton_C.BP_OnClicked // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnDisabled(); // Function ActivitySquadFillButton.ActivitySquadFillButton_C.BP_OnDisabled // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnEnabled(); // Function ActivitySquadFillButton.ActivitySquadFillButton_C.BP_OnEnabled // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnSelected(); // Function ActivitySquadFillButton.ActivitySquadFillButton_C.BP_OnSelected // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnDeselected(); // Function ActivitySquadFillButton.ActivitySquadFillButton_C.BP_OnDeselected // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnDesiredSquadFillSelectionChanged(bool bIsSelected); // Function ActivitySquadFillButton.ActivitySquadFillButton_C.OnDesiredSquadFillSelectionChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnSquadFillAvailabilityChanged(bool bIsAvailable); // Function ActivitySquadFillButton.ActivitySquadFillButton_C.OnSquadFillAvailabilityChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void PreConstruct(bool IsDesignTime); // Function ActivitySquadFillButton.ActivitySquadFillButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void ToggleFillOnlyVisibility(bool bIsFillOnlyEnabled); // Function ActivitySquadFillButton.ActivitySquadFillButton_C.ToggleFillOnlyVisibility // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_ActivitySquadFillButton(int32_t EntryPoint); // Function ActivitySquadFillButton.ActivitySquadFillButton_C.ExecuteUbergraph_ActivitySquadFillButton // (Final|UbergraphFunction) // @ game+0xd67374
};

