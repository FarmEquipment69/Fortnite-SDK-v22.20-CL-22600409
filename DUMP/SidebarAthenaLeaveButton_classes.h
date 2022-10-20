// WidgetBlueprintGeneratedClass SidebarAthenaLeaveButton.SidebarAthenaLeaveButton_C
// Size: 0x1600 (Inherited: 0x15e0)
struct USidebarAthenaLeaveButton_C : UFortMainMenuLeaveButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x15e0(0x08)
	struct UWidgetAnimation* Hovered; // 0x15e8(0x08)
	struct UBorder* ButtonBackground; // 0x15f0(0x08)
	struct UMaterialInterface* ButtonMaterial; // 0x15f8(0x08)

	void BP_OnUnhovered(); // Function SidebarAthenaLeaveButton.SidebarAthenaLeaveButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnHovered(); // Function SidebarAthenaLeaveButton.SidebarAthenaLeaveButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_SidebarAthenaLeaveButton(int32_t EntryPoint); // Function SidebarAthenaLeaveButton.SidebarAthenaLeaveButton_C.ExecuteUbergraph_SidebarAthenaLeaveButton // (Final|UbergraphFunction) // @ game+0xd67374
};

