// WidgetBlueprintGeneratedClass SidebarLFGToggleListEntry.SidebarLFGToggleListEntry_C
// Size: 0x1500 (Inherited: 0x14b0)
struct USidebarLFGToggleListEntry_C : USidebarLFGToggleListEntryWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x14b0(0x08)
	struct UWidgetAnimation* Unhovered; // 0x14b8(0x08)
	struct UWidgetAnimation* Hovered; // 0x14c0(0x08)
	struct UBorder* Border_Background; // 0x14c8(0x08)
	struct UTextToggle_C* SidebarSocialTagsLFPToggle; // 0x14d0(0x08)
	struct USizeBox* ; // 0x14d8(0x08)
	struct FLinearColor EncourageEpicFriend_IdleColor; // 0x14e0(0x10)
	struct FLinearColor EncourageEpicFriend_HoveredColor; // 0x14f0(0x10)

	void OnLfgSettingChanged(bool bIsLfgEnabled); // Function SidebarLFGToggleListEntry.SidebarLFGToggleListEntry_C.OnLfgSettingChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnHovered(); // Function SidebarLFGToggleListEntry.SidebarLFGToggleListEntry_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnUnhovered(); // Function SidebarLFGToggleListEntry.SidebarLFGToggleListEntry_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnInitialized(); // Function SidebarLFGToggleListEntry.SidebarLFGToggleListEntry_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_SidebarLFGToggleListEntry(int32_t EntryPoint); // Function SidebarLFGToggleListEntry.SidebarLFGToggleListEntry_C.ExecuteUbergraph_SidebarLFGToggleListEntry // (Final|UbergraphFunction) // @ game+0xd67374
};

