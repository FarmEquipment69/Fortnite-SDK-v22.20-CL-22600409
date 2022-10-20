// WidgetBlueprintGeneratedClass SidebarJoinablePartyActionMenu.SidebarJoinablePartyActionMenu_C
// Size: 0x520 (Inherited: 0x500)
struct USidebarJoinablePartyActionMenu_C : UFortJoinablePartyActionMenu {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x500(0x08)
	struct UWidgetAnimation* ConfirmationOpened; // 0x508(0x08)
	struct UWidgetAnimation* Opened; // 0x510(0x08)
	struct UCommonRichTextBlock* CommonRichTextBlock_PartyMembers; // 0x518(0x08)

	void OnToggleConfirmation(bool bIsVisible); // Function SidebarJoinablePartyActionMenu.SidebarJoinablePartyActionMenu_C.OnToggleConfirmation // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnOpened(); // Function SidebarJoinablePartyActionMenu.SidebarJoinablePartyActionMenu_C.OnOpened // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_SidebarJoinablePartyActionMenu(int32_t EntryPoint); // Function SidebarJoinablePartyActionMenu.SidebarJoinablePartyActionMenu_C.ExecuteUbergraph_SidebarJoinablePartyActionMenu // (Final|UbergraphFunction) // @ game+0xd67374
};

