// WidgetBlueprintGeneratedClass WBP_ExpressYourSupportThumbsUpButton.WBP_ExpressYourSupportThumbsUpButton_C
// Size: 0x1520 (Inherited: 0x14b0)
struct UWBP_ExpressYourSupportThumbsUpButton_C : UFortExpressYourSupportThumbsUpButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x14b0(0x08)
	struct UWidgetAnimation* UnhoveredToggleOff; // 0x14b8(0x08)
	struct UWidgetAnimation* UnhoveredToggleOn; // 0x14c0(0x08)
	struct UWidgetAnimation* UnhoverToggledOff; // 0x14c8(0x08)
	struct UWidgetAnimation* HoverToggledOff; // 0x14d0(0x08)
	struct UWidgetAnimation* UnhoverToggledOn; // 0x14d8(0x08)
	struct UWidgetAnimation* HoverToggledOn; // 0x14e0(0x08)
	struct UWidgetAnimation* HoveredToggleOff; // 0x14e8(0x08)
	struct UWidgetAnimation* HoveredToggleOn; // 0x14f0(0x08)
	struct UBorder* Border_Background; // 0x14f8(0x08)
	struct UImage* Image_FavoriteIcon; // 0x1500(0x08)
	struct UImage* Image_Pulse; // 0x1508(0x08)
	struct USizeBox* ; // 0x1510(0x08)
	struct UWidgetSwitcher* TextSwitcher; // 0x1518(0x08)

	void StopTogglingAnimations(); // Function WBP_ExpressYourSupportThumbsUpButton.WBP_ExpressYourSupportThumbsUpButton_C.StopTogglingAnimations // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void StopHoveringAnimations(); // Function WBP_ExpressYourSupportThumbsUpButton.WBP_ExpressYourSupportThumbsUpButton_C.StopHoveringAnimations // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetButtonHeight(bool IsTouch); // Function WBP_ExpressYourSupportThumbsUpButton.WBP_ExpressYourSupportThumbsUpButton_C.SetButtonHeight // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void BP_OnHovered(); // Function WBP_ExpressYourSupportThumbsUpButton.WBP_ExpressYourSupportThumbsUpButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnUnhovered(); // Function WBP_ExpressYourSupportThumbsUpButton.WBP_ExpressYourSupportThumbsUpButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnSelected(); // Function WBP_ExpressYourSupportThumbsUpButton.WBP_ExpressYourSupportThumbsUpButton_C.BP_OnSelected // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnDeselected(); // Function WBP_ExpressYourSupportThumbsUpButton.WBP_ExpressYourSupportThumbsUpButton_C.BP_OnDeselected // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void Construct(); // Function WBP_ExpressYourSupportThumbsUpButton.WBP_ExpressYourSupportThumbsUpButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_WBP_ExpressYourSupportThumbsUpButton(int32_t EntryPoint); // Function WBP_ExpressYourSupportThumbsUpButton.WBP_ExpressYourSupportThumbsUpButton_C.ExecuteUbergraph_WBP_ExpressYourSupportThumbsUpButton // (Final|UbergraphFunction) // @ game+0xd67374
};

