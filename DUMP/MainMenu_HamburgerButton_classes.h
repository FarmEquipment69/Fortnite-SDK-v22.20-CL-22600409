// WidgetBlueprintGeneratedClass MainMenu_HamburgerButton.MainMenu_HamburgerButton_C
// Size: 0x14c0 (Inherited: 0x1480)
struct UMainMenu_HamburgerButton_C : UCommonButtonLegacy {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1480(0x08)
	struct UWidgetAnimation* Hover_Grow; // 0x1488(0x08)
	struct UWidgetAnimation* Hover_Bounce; // 0x1490(0x08)
	struct UWidgetAnimation* Hover; // 0x1498(0x08)
	struct UImage* ButtonBacking; // 0x14a0(0x08)
	struct UFortMobileImage* Icon; // 0x14a8(0x08)
	struct UBorder* IconColor; // 0x14b0(0x08)
	struct USizeBox* VariableSize; // 0x14b8(0x08)

	void BP_OnHovered(); // Function MainMenu_HamburgerButton.MainMenu_HamburgerButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnUnhovered(); // Function MainMenu_HamburgerButton.MainMenu_HamburgerButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void Construct(); // Function MainMenu_HamburgerButton.MainMenu_HamburgerButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_MainMenu_HamburgerButton(int32_t EntryPoint); // Function MainMenu_HamburgerButton.MainMenu_HamburgerButton_C.ExecuteUbergraph_MainMenu_HamburgerButton // (Final|UbergraphFunction) // @ game+0xd67374
};

