// WidgetBlueprintGeneratedClass SidebarLfgFilterListHeaderEntry.SidebarLfgFilterListHeaderEntry_C
// Size: 0x14e8 (Inherited: 0x14c0)
struct USidebarLfgFilterListHeaderEntry_C : UFortSidebarLfgFilterHeaderEntry {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x14c0(0x08)
	struct UWidgetAnimation* OnExpansion; // 0x14c8(0x08)
	struct UWidgetAnimation* OnHover; // 0x14d0(0x08)
	struct UFortMobileImage* ExpandDirectionTick; // 0x14d8(0x08)
	struct USizeBox* SB_EntryContent; // 0x14e0(0x08)

	void BP_OnUnhovered(); // Function SidebarLfgFilterListHeaderEntry.SidebarLfgFilterListHeaderEntry_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnItemExpansionChanged(bool bIsExpanded); // Function SidebarLfgFilterListHeaderEntry.SidebarLfgFilterListHeaderEntry_C.BP_OnItemExpansionChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnHovered(); // Function SidebarLfgFilterListHeaderEntry.SidebarLfgFilterListHeaderEntry_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void (struct UObject* ListItemObject); // Function SidebarLfgFilterListHeaderEntry.SidebarLfgFilterListHeaderEntry_C. // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnFocusLost(struct FFocusEvent InFocusEvent); // Function SidebarLfgFilterListHeaderEntry.SidebarLfgFilterListHeaderEntry_C.OnFocusLost // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_SidebarLfgFilterListHeaderEntry(int32_t EntryPoint); // Function SidebarLfgFilterListHeaderEntry.SidebarLfgFilterListHeaderEntry_C.ExecuteUbergraph_SidebarLfgFilterListHeaderEntry // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

