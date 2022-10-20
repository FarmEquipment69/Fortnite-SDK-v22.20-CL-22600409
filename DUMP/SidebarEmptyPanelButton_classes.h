// WidgetBlueprintGeneratedClass SidebarEmptyPanelButton.SidebarEmptyPanelButton_C
// Size: 0x1460 (Inherited: 0x1440)
struct USidebarEmptyPanelButton_C : USidebarListEmptyPanelButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1440(0x08)
	struct UWidgetAnimation* Unhovered; // 0x1448(0x08)
	struct UWidgetAnimation* Hovered; // 0x1450(0x08)
	struct UBorder* EntryBorder; // 0x1458(0x08)

	void BP_OnHovered(); // Function SidebarEmptyPanelButton.SidebarEmptyPanelButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnUnhovered(); // Function SidebarEmptyPanelButton.SidebarEmptyPanelButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnClicked(); // Function SidebarEmptyPanelButton.SidebarEmptyPanelButton_C.BP_OnClicked // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_SidebarEmptyPanelButton(int32_t EntryPoint); // Function SidebarEmptyPanelButton.SidebarEmptyPanelButton_C.ExecuteUbergraph_SidebarEmptyPanelButton // (Final|UbergraphFunction) // @ game+0xd67374
};

