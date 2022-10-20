// WidgetBlueprintGeneratedClass SidebarUserActionMenu.SidebarUserActionMenu_C
// Size: 0x570 (Inherited: 0x540)
struct USidebarUserActionMenu_C : UFortSidebarSocialInteractionMenu {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x540(0x08)
	struct UWidgetAnimation* ConfirmationOpened; // 0x548(0x08)
	struct UWidgetAnimation* Opened; // 0x550(0x08)
	struct UBorder* Border_OnlineStatusIndicator; // 0x558(0x08)
	struct UBorder* EntryBorder; // 0x560(0x08)
	struct UFortMobileImage* Image_Platform; // 0x568(0x08)

	void OnToggleConfirmation(bool bIsVisible); // Function SidebarUserActionMenu.SidebarUserActionMenu_C.OnToggleConfirmation // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnOpened(); // Function SidebarUserActionMenu.SidebarUserActionMenu_C.OnOpened // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_SidebarUserActionMenu(int32_t EntryPoint); // Function SidebarUserActionMenu.SidebarUserActionMenu_C.ExecuteUbergraph_SidebarUserActionMenu // (Final|UbergraphFunction) // @ game+0xd67374
};

