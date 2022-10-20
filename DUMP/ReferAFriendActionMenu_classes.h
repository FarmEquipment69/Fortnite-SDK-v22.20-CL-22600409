// WidgetBlueprintGeneratedClass ReferAFriendActionMenu.ReferAFriendActionMenu_C
// Size: 0x4a0 (Inherited: 0x440)
struct UReferAFriendActionMenu_C : UFortReferFriendActionMenu {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x440(0x08)
	struct UWidgetAnimation* ConfirmationOpened; // 0x448(0x08)
	struct UWidgetAnimation* Opened; // 0x450(0x08)
	struct UBorder* Border_OnlineStatusIndicator; // 0x458(0x08)
	struct UCommonRichTextBlock* CommonRichTextBlock; // 0x460(0x08)
	struct UCommonRichTextBlock* ; // 0x468(0x08)
	struct UBorder* EntryBorder; // 0x470(0x08)
	struct UImage* Image_AddFriendsQR; // 0x478(0x08)
	struct UImage* Image_PartyUpQR; // 0x480(0x08)
	struct UImage* Image_Platform; // 0x488(0x08)
	struct UCommonRichTextBlock* Text_DisplayName; // 0x490(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_QR; // 0x498(0x08)

	void Set QRt Image(enum class EReferFriendOrigin Origin); // Function ReferAFriendActionMenu.ReferAFriendActionMenu_C.Set QRt Image // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	struct FEventReply OnKeyUp(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function ReferAFriendActionMenu.ReferAFriendActionMenu_C.OnKeyUp // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnOpened(); // Function ReferAFriendActionMenu.ReferAFriendActionMenu_C.OnOpened // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnRequestOriginChanged(enum class EReferFriendOrigin RequestOrigin); // Function ReferAFriendActionMenu.ReferAFriendActionMenu_C.OnRequestOriginChanged // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_ReferAFriendActionMenu(int32_t EntryPoint); // Function ReferAFriendActionMenu.ReferAFriendActionMenu_C.ExecuteUbergraph_ReferAFriendActionMenu // (Final|UbergraphFunction) // @ game+0xd67374
};

