// WidgetBlueprintGeneratedClass SidebarUserListHeaderEntry.SidebarUserListHeaderEntry_C
// Size: 0x14e0 (Inherited: 0x14b0)
struct USidebarUserListHeaderEntry_C : USocialUserListHeaderEntry {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x14b0(0x08)
	struct UWidgetAnimation* OnExpansion; // 0x14b8(0x08)
	struct UWidgetAnimation* OnHover; // 0x14c0(0x08)
	struct UFortMobileImage* ExpandDirectionTick; // 0x14c8(0x08)
	struct UImage* Image_Meeple; // 0x14d0(0x08)
	struct USizeBox* SB_EntryContent; // 0x14d8(0x08)

	void BP_OnUnhovered(); // Function SidebarUserListHeaderEntry.SidebarUserListHeaderEntry_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnItemExpansionChanged(bool bIsExpanded); // Function SidebarUserListHeaderEntry.SidebarUserListHeaderEntry_C.BP_OnItemExpansionChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnHovered(); // Function SidebarUserListHeaderEntry.SidebarUserListHeaderEntry_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void (struct UObject* ListItemObject); // Function SidebarUserListHeaderEntry.SidebarUserListHeaderEntry_C. // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnFocusLost(struct FFocusEvent InFocusEvent); // Function SidebarUserListHeaderEntry.SidebarUserListHeaderEntry_C.OnFocusLost // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_SidebarUserListHeaderEntry(int32_t EntryPoint); // Function SidebarUserListHeaderEntry.SidebarUserListHeaderEntry_C.ExecuteUbergraph_SidebarUserListHeaderEntry // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

