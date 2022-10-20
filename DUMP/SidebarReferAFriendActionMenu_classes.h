// WidgetBlueprintGeneratedClass SidebarReferAFriendActionMenu.SidebarReferAFriendActionMenu_C
// Size: 0x480 (Inherited: 0x440)
struct USidebarReferAFriendActionMenu_C : UFortReferFriendActionMenu {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x440(0x08)
	struct UWidgetAnimation* ConfirmationOpened; // 0x448(0x08)
	struct UWidgetAnimation* Opened; // 0x450(0x08)
	struct UCommonRichTextBlock* CommonRichTextBlock; // 0x458(0x08)
	struct UCommonRichTextBlock* ; // 0x460(0x08)
	struct UImage* Image_AddFriendsQR; // 0x468(0x08)
	struct UImage* Image_PartyUpQR; // 0x470(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_QR; // 0x478(0x08)

	void Set QRt Image(enum class EReferFriendOrigin Origin); // Function SidebarReferAFriendActionMenu.SidebarReferAFriendActionMenu_C.Set QRt Image // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	struct FEventReply OnKeyUp(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function SidebarReferAFriendActionMenu.SidebarReferAFriendActionMenu_C.OnKeyUp // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnOpened(); // Function SidebarReferAFriendActionMenu.SidebarReferAFriendActionMenu_C.OnOpened // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnRequestOriginChanged(enum class EReferFriendOrigin RequestOrigin); // Function SidebarReferAFriendActionMenu.SidebarReferAFriendActionMenu_C.OnRequestOriginChanged // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_SidebarReferAFriendActionMenu(int32_t EntryPoint); // Function SidebarReferAFriendActionMenu.SidebarReferAFriendActionMenu_C.ExecuteUbergraph_SidebarReferAFriendActionMenu // (Final|UbergraphFunction) // @ game+0xd67374
};

