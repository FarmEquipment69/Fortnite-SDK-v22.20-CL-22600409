// WidgetBlueprintGeneratedClass PiPBladeMenuButton.PiPBladeMenuButton_C
// Size: 0x14d8 (Inherited: 0x1480)
struct UPiPBladeMenuButton_C : UPictureInPictureBladeMenuButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1480(0x08)
	struct UWidgetAnimation* FlipSwitch; // 0x1488(0x08)
	struct UWidgetAnimation* StatusGrow; // 0x1490(0x08)
	struct UWidgetAnimation* Hover; // 0x1498(0x08)
	struct UCommonTextBlock* ButtonText; // 0x14a0(0x08)
	struct UImage* IconOff; // 0x14a8(0x08)
	struct UVerticalBox* IconTextContent; // 0x14b0(0x08)
	struct UCommonTextBlock* IconTextOff; // 0x14b8(0x08)
	struct UCommonTextBlock* IconTextOn; // 0x14c0(0x08)
	struct UCommonTextBlock* Text_Feedback; // 0x14c8(0x08)
	struct UWidgetSwitcher* TextSwitcher; // 0x14d0(0x08)

	void UpdateStatus(bool IsEnabled, bool IsLoggedIn, bool IsParentalControlsEnabled); // Function PiPBladeMenuButton.PiPBladeMenuButton_C.UpdateStatus // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void BP_OnHovered(); // Function PiPBladeMenuButton.PiPBladeMenuButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnUnhovered(); // Function PiPBladeMenuButton.PiPBladeMenuButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void UpdatePiPStatusBP(bool LoggedIn, bool Enabled, bool ParentalControlsEnabled); // Function PiPBladeMenuButton.PiPBladeMenuButton_C.UpdatePiPStatusBP // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_PiPBladeMenuButton(int32_t EntryPoint); // Function PiPBladeMenuButton.PiPBladeMenuButton_C.ExecuteUbergraph_PiPBladeMenuButton // (Final|UbergraphFunction) // @ game+0xd67374
};

