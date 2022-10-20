// WidgetBlueprintGeneratedClass MissedInvitesActionMenu.MissedInvitesActionMenu_C
// Size: 0x490 (Inherited: 0x440)
struct UMissedInvitesActionMenu_C : UFortMissedInvitesActionMenu {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x440(0x08)
	struct UWidgetAnimation* ConfirmationOpened; // 0x448(0x08)
	struct UWidgetAnimation* Opened; // 0x450(0x08)
	struct UBorder* Border_OnlineStatusIndicator; // 0x458(0x08)
	struct UCommonRichTextBlock* CommonRichTextBlock; // 0x460(0x08)
	struct UCommonRichTextBlock* ; // 0x468(0x08)
	struct UBorder* EntryBorder; // 0x470(0x08)
	struct UImage* ; // 0x478(0x08)
	struct UImage* Image_Platform; // 0x480(0x08)
	struct UCommonRichTextBlock* Text_DisplayName; // 0x488(0x08)

	struct FEventReply OnKeyUp(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function MissedInvitesActionMenu.MissedInvitesActionMenu_C.OnKeyUp // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnOpened(); // Function MissedInvitesActionMenu.MissedInvitesActionMenu_C.OnOpened // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_MissedInvitesActionMenu(int32_t EntryPoint); // Function MissedInvitesActionMenu.MissedInvitesActionMenu_C.ExecuteUbergraph_MissedInvitesActionMenu // (Final|UbergraphFunction) // @ game+0xd67374
};

