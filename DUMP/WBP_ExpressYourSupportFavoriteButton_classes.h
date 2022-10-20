// WidgetBlueprintGeneratedClass WBP_ExpressYourSupportFavoriteButton.WBP_ExpressYourSupportFavoriteButton_C
// Size: 0x1508 (Inherited: 0x14a0)
struct UWBP_ExpressYourSupportFavoriteButton_C : UFortExpressYourSupportFavoriteButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x14a0(0x08)
	struct UWidgetAnimation* UnhoveredToggleOff; // 0x14a8(0x08)
	struct UWidgetAnimation* UnhoveredToggleOn; // 0x14b0(0x08)
	struct UWidgetAnimation* UnhoverToggledOff; // 0x14b8(0x08)
	struct UWidgetAnimation* HoverToggledOff; // 0x14c0(0x08)
	struct UWidgetAnimation* UnhoverToggledOn; // 0x14c8(0x08)
	struct UWidgetAnimation* HoverToggledOn; // 0x14d0(0x08)
	struct UWidgetAnimation* HoveredToggleOff; // 0x14d8(0x08)
	struct UWidgetAnimation* HoveredToggleOn; // 0x14e0(0x08)
	struct UBorder* Border_Background; // 0x14e8(0x08)
	struct UImage* Image_FavoriteIcon; // 0x14f0(0x08)
	struct UImage* Image_Pulse; // 0x14f8(0x08)
	struct USizeBox* ; // 0x1500(0x08)

	void StopTogglingAnimations(); // Function WBP_ExpressYourSupportFavoriteButton.WBP_ExpressYourSupportFavoriteButton_C.StopTogglingAnimations // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void StopHoveringAnimations(); // Function WBP_ExpressYourSupportFavoriteButton.WBP_ExpressYourSupportFavoriteButton_C.StopHoveringAnimations // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetButtonHeight(bool IsTouch); // Function WBP_ExpressYourSupportFavoriteButton.WBP_ExpressYourSupportFavoriteButton_C.SetButtonHeight // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void BP_OnHovered(); // Function WBP_ExpressYourSupportFavoriteButton.WBP_ExpressYourSupportFavoriteButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnUnhovered(); // Function WBP_ExpressYourSupportFavoriteButton.WBP_ExpressYourSupportFavoriteButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnSelected(); // Function WBP_ExpressYourSupportFavoriteButton.WBP_ExpressYourSupportFavoriteButton_C.BP_OnSelected // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnDeselected(); // Function WBP_ExpressYourSupportFavoriteButton.WBP_ExpressYourSupportFavoriteButton_C.BP_OnDeselected // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void Construct(); // Function WBP_ExpressYourSupportFavoriteButton.WBP_ExpressYourSupportFavoriteButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_WBP_ExpressYourSupportFavoriteButton(int32_t EntryPoint); // Function WBP_ExpressYourSupportFavoriteButton.WBP_ExpressYourSupportFavoriteButton_C.ExecuteUbergraph_WBP_ExpressYourSupportFavoriteButton // (Final|UbergraphFunction) // @ game+0xd67374
};

