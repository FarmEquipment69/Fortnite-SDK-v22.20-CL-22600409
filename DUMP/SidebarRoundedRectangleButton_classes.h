// WidgetBlueprintGeneratedClass SidebarRoundedRectangleButton.SidebarRoundedRectangleButton_C
// Size: 0x15d8 (Inherited: 0x15b0)
struct USidebarRoundedRectangleButton_C : UFortMainMenuButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x15b0(0x08)
	struct UWidgetAnimation* Hovered; // 0x15b8(0x08)
	struct UBorder* ButtonBackground; // 0x15c0(0x08)
	struct UNamedSlot* SubSlot; // 0x15c8(0x08)
	struct UMaterialInterface* ButtonMaterial; // 0x15d0(0x08)

	void BP_OnUnhovered(); // Function SidebarRoundedRectangleButton.SidebarRoundedRectangleButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnHovered(); // Function SidebarRoundedRectangleButton.SidebarRoundedRectangleButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_SidebarRoundedRectangleButton(int32_t EntryPoint); // Function SidebarRoundedRectangleButton.SidebarRoundedRectangleButton_C.ExecuteUbergraph_SidebarRoundedRectangleButton // (Final|UbergraphFunction) // @ game+0xd67374
};

